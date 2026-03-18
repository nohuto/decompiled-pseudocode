/*
 * XREFs of VerifierExAllocatePool @ 0x140972260
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool @ 0x14013C6F0 (ExAllocatePool.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 */

PVOID __fastcall VerifierExAllocatePool(__int32 PoolType, SIZE_T NumberOfBytes)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (dword_140509E14 & 8) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0);
    ++dword_1404465FC;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 156LL);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    PoolType | 0x80u,
                    NumberOfBytes,
                    1885434455,
                    32,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePool((POOL_TYPE)PoolType, NumberOfBytes);
  }
}
