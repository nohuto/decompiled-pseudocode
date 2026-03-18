/*
 * XREFs of EngGetCurrentCodePage @ 0x1C02614F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}
