/*
 * XREFs of WPP_SF_ql @ 0x1800EB7F8
 * Callers:
 *     AudioServerStartStopStreamConnection @ 0x1800EA550 (AudioServerStartStopStreamConnection.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ql(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, 66LL, (__int64 *)va);
}
