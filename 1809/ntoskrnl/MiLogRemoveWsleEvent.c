/*
 * XREFs of MiLogRemoveWsleEvent @ 0x1402A7FDC
 * Callers:
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiFillPageExtraInfo @ 0x1402A7E7C (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v2 = 0LL;
  MiFillPageExtraInfo(&v2, a2, a1);
  v5 = 0;
  v3 = &v2;
  v4 = 8;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x28000000u, 0x283u, 0x11401B02u);
}
