/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x140282520
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x140130810 (FsRtlLookupLastBaseMcbEntryAndIndex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntryAndIndex(
        PLARGE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  ExAcquireFastMutex(OpaqueMcb->GuardedMutex);
  LOBYTE(Index) = FsRtlLookupLastBaseMcbEntryAndIndex(&OpaqueMcb->BaseMcb, LargeVbn, LargeLbn, Index);
  KeReleaseGuardedMutex(OpaqueMcb->GuardedMutex);
  return (unsigned __int8)Index;
}
