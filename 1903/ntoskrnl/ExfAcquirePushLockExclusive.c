/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x14009C970
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074721C (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409144F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140914BCC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140915434 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
