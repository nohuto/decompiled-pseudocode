/*
 * XREFs of IopDebugPrint @ 0x140288B2C
 * Callers:
 *     PnpCollectOpenHandles @ 0x1408340F0 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x140834190 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
