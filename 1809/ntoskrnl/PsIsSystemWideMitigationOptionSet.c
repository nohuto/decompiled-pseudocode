/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x1406CF768
 * Callers:
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6;
}
