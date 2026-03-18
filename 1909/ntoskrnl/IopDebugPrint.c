/*
 * XREFs of IopDebugPrint @ 0x14029E798
 * Callers:
 *     PnpCollectOpenHandles @ 0x14086CEDC (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x14086CF80 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
