/*
 * XREFs of IopDebugPrint @ 0x14028883C
 * Callers:
 *     PnpCollectOpenHandles @ 0x140832EB0 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x140832F50 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126330 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
