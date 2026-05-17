/*
 * XREFs of RtlDllShutdownInProgress @ 0x18005EA20
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008FD30 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

bool RtlDllShutdownInProgress()
{
  return byte_180165408 != 0;
}
