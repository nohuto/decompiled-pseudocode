/*
 * XREFs of MiLogMdlRangeEvent @ 0x1402C2BEC
 * Callers:
 *     MiInitializeMdlPages @ 0x1400EF628 (MiInitializeMdlPages.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall MiLogMdlRangeEvent(_QWORD *a1, unsigned __int16 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  _QWORD *v6; // rcx
  unsigned __int64 LeafPfnBuddy; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]

  v3 = a1;
  v4 = a3;
  v6 = (_QWORD *)(48LL * *a1 - 0x58000000000LL);
  if ( ((v6[5] >> 54) & 7) == 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
    v8 = 9LL;
  }
  else
  {
    LeafPfnBuddy = 0LL;
    v8 = 10LL;
  }
  if ( a3 )
  {
    v9 = v8 | (16 * (LeafPfnBuddy & 0xFFFFFFFFFFFFLL));
    do
    {
      v10 = v3;
      v11[1] = *v3;
      v11[0] = v9;
      do
      {
        ++v3;
        --v4;
      }
      while ( v4 && *v3 == *(v3 - 1) + 1LL );
      v14 = 0;
      v13 = 24;
      v11[2] = v3 - v10;
      v12 = v11;
      EtwTraceKernelEvent((__int64)&v12, 1u, 0x20000001u, a2, 0x11401B02u);
    }
    while ( v4 );
  }
}
