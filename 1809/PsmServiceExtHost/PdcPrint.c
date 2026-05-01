/*
 * XREFs of PdcPrint @ 0x180072CBC
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x180071FA4 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x180072194 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
