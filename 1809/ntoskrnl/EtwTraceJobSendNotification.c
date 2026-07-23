/*
 * XREFs of EtwTraceJobSendNotification @ 0x1408B896C
 * Callers:
 *     PspSendReliableJobNotification @ 0x1406BA958 (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408B9270 (EtwpCopyJobGuidSafe.c)
 */

void __fastcall EtwTraceJobSendNotification(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _BYTE v3[16]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+44h] [rbp-24h]
  _BYTE *v6; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  EtwpCopyJobGuidSafe(v3, a1);
  if ( v1 )
    v4 = *(_DWORD *)(v1 + 1220);
  else
    v4 = 0;
  v8 = 0;
  v5 = v2;
  v6 = v3;
  v7 = 24;
  EtwTraceKernelEvent((__int64)&v6, 1u, 0x80000u, 0x72Au, 0x501904u);
}
