/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x140946100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapLockedPages(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rdx
  __int16 v7; // dx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( BugCheckParameter3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( CurrentIrql > 1u && (MmVerifierData & 1) != 0 )
    {
      v5 = CurrentIrql;
      v6 = 122LL;
      goto LABEL_8;
    }
  }
  else if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
  {
    v5 = CurrentIrql;
    v6 = 121LL;
LABEL_8:
    VerifierBugCheckIfAppropriate(0xC4u, v6, v5, BugCheckParameter3, BugCheckParameter2);
  }
  if ( (unsigned int)VfVerifyMode >= 3 && BugCheckParameter3 > 0x7FFFFFFEFFFFLL )
  {
    v7 = *(_WORD *)(BugCheckParameter2 + 10);
    if ( (v7 & 1) == 0 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xB6uLL, BugCheckParameter2, v7, 1LL);
  }
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvMmUnmapLockedPages)(BugCheckParameter3, BugCheckParameter2);
}
