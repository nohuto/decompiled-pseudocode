/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1400EF900
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074911C (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140913F50 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14091462C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140914E94 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
