/*
 * XREFs of RtlGetDefaultCodePage @ 0x14071FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlGetDefaultCodePage(PUSHORT AnsiCodePage, PUSHORT OemCodePage)
{
  *AnsiCodePage = NlsAnsiCodePage;
  *OemCodePage = NlsOemCodePage;
}
