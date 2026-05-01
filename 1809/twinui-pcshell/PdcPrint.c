/*
 * XREFs of PdcPrint @ 0x18039EA30
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x18039E724 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x18039E914 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
