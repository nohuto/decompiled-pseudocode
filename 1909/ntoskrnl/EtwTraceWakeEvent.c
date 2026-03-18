/*
 * XREFs of EtwTraceWakeEvent @ 0x1408F43B4
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1405E40D0 (PspChargeProcessWakeCounter.c)
 *     PspSendWakeNotification @ 0x140614B7C (PspSendWakeNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall EtwTraceWakeEvent(__int64 a1, __int16 a2)
{
  __int64 *v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = &v5;
  v4 = 0;
  v3 = 8;
  EtwTraceKernelEvent((__int64)&v2, 1u, 0x80000400, a2 + 864, 0x501902u);
}
