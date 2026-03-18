/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x1406F038C
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6;
}
