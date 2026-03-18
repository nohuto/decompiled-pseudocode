/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x1406EE83C
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6;
}
