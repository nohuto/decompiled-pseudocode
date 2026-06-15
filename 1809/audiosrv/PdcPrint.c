/*
 * XREFs of PdcPrint @ 0x180134C6C
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x180133ED4 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x1801340C4 (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
