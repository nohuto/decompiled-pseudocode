/*
 * XREFs of WmiTraceMessage @ 0x140113280
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x1401132B0 (EtwpTraceMessageVa.c)
 */

__int64 WmiTraceMessage(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, a4);
  return EtwpTraceMessageVa(a1, a2, a3, a4, (__int64)va, 0);
}
