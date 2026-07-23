/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x1402B9228
 * Callers:
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  do
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v2 = a1[1] | 0x8000000000000000uLL;
    v3 = v2;
    do
    {
      a1 = (_QWORD *)*a1;
      v2 -= 8LL;
    }
    while ( a1 && (a1[1] | 0x8000000000000000uLL) == v2 );
    v9 = 0;
    v6 = (__int64)(v3 - v2) >> 3;
    v8 = 24;
    v5 = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v4 = 5LL;
    v7 = &v4;
    EtwTraceKernelEvent((__int64)&v7, 1u, 0x20000001u, 0x279u, 0x11401B02u);
  }
  while ( a1 );
}
