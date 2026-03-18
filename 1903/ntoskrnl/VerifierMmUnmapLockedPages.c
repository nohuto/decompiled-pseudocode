/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x140984AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x14097442C (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapLockedPages(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v6; // r8
  ULONG_PTR v7; // rdx
  __int16 v8; // dx
  unsigned __int64 v9; // r9
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( BugCheckParameter3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( CurrentIrql > 1u && (MmVerifierData & 1) != 0 )
    {
      v6 = CurrentIrql;
      v7 = 122LL;
      goto LABEL_8;
    }
  }
  else if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
  {
    v6 = CurrentIrql;
    v7 = 121LL;
LABEL_8:
    VerifierBugCheckIfAppropriate(0xC4u, v7, v6, BugCheckParameter3, BugCheckParameter2);
  }
  if ( (unsigned int)VfVerifyMode >= 3 && BugCheckParameter3 > 0x7FFFFFFEFFFFLL )
  {
    v8 = *(_WORD *)(BugCheckParameter2 + 10);
    if ( (v8 & 1) == 0 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xB6uLL, BugCheckParameter2, v8, 1LL);
  }
  v9 = -(__int64)*(unsigned int *)(BugCheckParameter2 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, v9);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, unsigned __int64))pXdvMmUnmapLockedPages)(
           BugCheckParameter3,
           BugCheckParameter2,
           a3,
           v9);
}
