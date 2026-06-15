/*
 * XREFs of WPP_SF_qdddd @ 0x1800F3D30
 * Callers:
 *     _lambda_b4a0f841713055588ebe22eb0ff145bf_::operator() @ 0x1800F1DE0 (_lambda_b4a0f841713055588ebe22eb0ff145bf_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdddd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_7c1e90e9a9dc33e1c6e4e37efc6dae83_Traceguids, 13LL, (__int64 *)va);
}
