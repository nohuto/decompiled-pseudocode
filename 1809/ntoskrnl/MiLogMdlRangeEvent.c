/*
 * XREFs of MiLogMdlRangeEvent @ 0x1402AA388
 * Callers:
 *     MiInitializeMdlPages @ 0x140011258 (MiInitializeMdlPages.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogMdlRangeEvent(_QWORD *a1, unsigned __int16 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 LeafPfnBuddy; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  _QWORD *v13; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  v3 = a1;
  v6 = (_QWORD *)(48LL * *a1 - 0x58000000000LL);
  v7 = (v6[5] >> 54) & 7LL;
  if ( v7 == 1 )
    LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
  else
    LeafPfnBuddy = 0LL;
  if ( a3 )
  {
    v9 = (16 * (LeafPfnBuddy & 0xFFFFFFFFFFFFLL)) | ((v7 != 1) + 9LL);
    do
    {
      v11[0] = v9;
      v12 = 0LL;
      v10 = v3;
      v11[1] = *v3;
      do
      {
        ++v3;
        --a3;
      }
      while ( a3 && *v3 == *(v3 - 1) + 1LL );
      v15 = 0;
      v14 = 24;
      v12 = v3 - v10;
      v13 = v11;
      EtwTraceKernelEvent((__int64)&v13, 1u, 0x20000001u, a2, 0x11401B02u);
    }
    while ( a3 );
  }
}
