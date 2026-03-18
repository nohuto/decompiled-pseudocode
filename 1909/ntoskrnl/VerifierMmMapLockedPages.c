/*
 * XREFs of VerifierMmMapLockedPages @ 0x140984400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x14097442C (ViTargetAddToCounter.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140979D5C (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfAllocPoolNotification @ 0x14097D2F0 (VfAllocPoolNotification.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140984DB8 (ViMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks(BugCheckParameter2);
  if ( (*(_WORD *)(BugCheckParameter2 + 10) & 0x2000) == 0
    && (unsigned int)VfFaultsIsSystemSufficientlyBooted()
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  v4 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvMmMapLockedPagesSpecifyCache)(
         BugCheckParameter2,
         a2,
         1LL);
  VfAllocPoolNotification();
  if ( v4 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, *(unsigned int *)(BugCheckParameter2 + 40));
  return v4;
}
