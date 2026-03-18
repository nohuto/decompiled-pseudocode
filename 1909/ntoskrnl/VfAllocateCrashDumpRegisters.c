/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x1409688F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x140327748 (VfDisableHalVerifier.c)
 *     ADD_MAP_REGISTERS @ 0x1409677FC (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140967D20 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  __int64 AdapterInformationInternal; // rdi
  PVOID CrashDumpRegisters; // rbx

  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  AdapterInformationInternal = ViGetAdapterInformationInternal((int)AdapterObject);
  CrashDumpRegisters = HalAllocateCrashDumpRegisters(AdapterObject, NumberOfMapRegisters);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedExchangeAdd((volatile signed __int32 *)(AdapterInformationInternal + 152), *NumberOfMapRegisters);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *NumberOfMapRegisters, 0);
    if ( ViVerifyDma )
    {
      if ( !CrashDumpRegisters )
        return -559026163LL;
    }
  }
  return (__int64)CrashDumpRegisters;
}
