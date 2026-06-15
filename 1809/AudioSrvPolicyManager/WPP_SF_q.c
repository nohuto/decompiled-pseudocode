/*
 * XREFs of WPP_SF_q @ 0x1800225B4
 * Callers:
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x180022874 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180026B20 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_q(TRACEHANDLE a1, USHORT a2, const GUID *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, a3, a2, va, 8LL, 0LL);
}
