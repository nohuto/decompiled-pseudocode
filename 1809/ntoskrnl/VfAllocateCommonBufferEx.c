/*
 * XREFs of VfAllocateCommonBufferEx @ 0x14092B000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfAllocateCommonBufferEx(__int64 a1, ULONG_PTR *a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, ULONG_PTR *, _QWORD, __int64, int, int); // r15
  __int64 AdapterInformationInternal; // rbx
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-38h]

  RealDmaOperation = (__int64 (__fastcall *)(__int64, ULONG_PTR *, _QWORD, __int64, int, int))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( (MmVerifierData & 0x4000000) != 0 && a2 && *a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, *a2, a3, 0LL);
  LOBYTE(v13) = a5;
  result = RealDmaOperation(a1, a2, a3, a4, v13, a6);
  if ( result )
  {
    if ( AdapterInformationInternal )
      _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
  }
  return result;
}
