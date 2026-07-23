/*
 * XREFs of VerifierMmUnlockPages @ 0x140945F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnlockPages(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v3; // bx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x78uLL, CurrentIrql, BugCheckParameter2, 0LL);
  v3 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v3 & 2) == 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7CuLL, BugCheckParameter2, v3, 0LL);
  if ( (unsigned int)VfVerifyMode >= 3 && (v3 & 4) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7DuLL, BugCheckParameter2, v3, 0LL);
  if ( (v3 & 0x10) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB4uLL, BugCheckParameter2, v3, 16LL);
  if ( (v3 & 1) != 0 )
  {
    if ( (MmVerifierData & 0x1000) == 0 )
      return ((__int64 (__fastcall *)(ULONG_PTR))pXdvMmUnlockPages)(BugCheckParameter2);
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  }
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvMmUnlockPages)(BugCheckParameter2);
}
