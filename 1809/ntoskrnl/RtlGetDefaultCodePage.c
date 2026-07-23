/*
 * XREFs of RtlGetDefaultCodePage @ 0x1406DCD20
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
