/*
 * XREFs of VfFlushAdapterBuffersEx @ 0x14092BCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14092A720 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFlushAdapterBuffersEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, __int64, int, char); // r12
  __int64 AdapterInformationInternal; // rdi
  __int64 result; // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, char))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
    VF_ASSERT_MAX_IRQL();
  result = RealDmaOperation(a1, a2, a3, a4, a5, a6);
  if ( AdapterInformationInternal )
  {
    if ( !(_DWORD)result )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
  }
  return result;
}
