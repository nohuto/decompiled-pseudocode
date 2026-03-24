/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140005740
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x14070F404 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D7260 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1408D794C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1408D81E4 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1);
}
