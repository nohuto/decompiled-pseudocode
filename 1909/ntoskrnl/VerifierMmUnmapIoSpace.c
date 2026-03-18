/*
 * XREFs of VerifierMmUnmapIoSpace @ 0x140984A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x14097442C (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapIoSpace(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7BuLL, CurrentIrql, BugCheckParameter3, a2);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -a2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvMmUnmapIoSpace)(BugCheckParameter3, a2);
}
