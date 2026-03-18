/*
 * XREFs of EtwTraceJobSendNotification @ 0x1408F39E4
 * Callers:
 *     PspSendReliableJobNotification @ 0x1406B3298 (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408F4424 (EtwpCopyJobGuidSafe.c)
 */

void __fastcall EtwTraceJobSendNotification(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _QWORD v3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v4; // [rsp+40h] [rbp-20h]
  _QWORD *v5; // [rsp+48h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp-10h]
  int v7; // [rsp+54h] [rbp-Ch]

  v3[0] = 0LL;
  v3[1] = 0LL;
  v4 = 0LL;
  EtwpCopyJobGuidSafe(v3, a1);
  if ( v1 )
    LODWORD(v4) = *(_DWORD *)(v1 + 1220);
  else
    LODWORD(v4) = 0;
  v7 = 0;
  HIDWORD(v4) = v2;
  v5 = v3;
  v6 = 24;
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x80000u, 0x72Au, 0x501904u);
}
