/*
 * XREFs of FsRtlIsEcpAcknowledged @ 0x1406AE850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpAcknowledged(PVOID EcpContext)
{
  return (*((_DWORD *)EcpContext - 6) & 8) != 0;
}
