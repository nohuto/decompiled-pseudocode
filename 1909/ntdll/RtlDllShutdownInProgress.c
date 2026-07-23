/*
 * XREFs of RtlDllShutdownInProgress @ 0x1800071E0
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008CCC0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_180165408 != 0;
}
