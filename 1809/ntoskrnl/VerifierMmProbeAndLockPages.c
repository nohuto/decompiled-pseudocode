/*
 * XREFs of VerifierMmProbeAndLockPages @ 0x140945CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140939308 (VfFaultsInjectResourceFailure.c)
 */

char __fastcall VerifierMmProbeAndLockPages(ULONG_PTR BugCheckParameter2, char a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int64 v9; // rdx
  char result; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x70uLL, CurrentIrql, BugCheckParameter2, a2);
  v7 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v7 = 2067;
  v8 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v8 & v7) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB0uLL, BugCheckParameter2, (__int16)v8, (__int16)v8 & (unsigned __int64)v7);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  LOBYTE(v9) = a2;
  result = ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD))pXdvMmProbeAndLockPages)(BugCheckParameter2, v9, a3);
  if ( (MmVerifierData & 0x1000) != 0 )
    return ViTargetAddToCounter(retaddr, 168LL, 0xB0u, *(unsigned int *)(BugCheckParameter2 + 40));
  return result;
}
