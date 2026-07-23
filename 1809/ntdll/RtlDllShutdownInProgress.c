/*
 * XREFs of RtlDllShutdownInProgress @ 0x18005EA20
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008FD40 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_180165408 != 0;
}
