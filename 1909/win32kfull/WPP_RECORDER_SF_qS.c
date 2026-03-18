/*
 * XREFs of WPP_RECORDER_SF_qS @ 0x1C000BB74
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C000BA40 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const wchar_t *a7)
{
  struct RECORDER_LOG__ *v7; // rbp
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  const wchar_t *v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]

  v7 = gFullLog;
  v8 = a7;
  v9 = -1LL;
  v10 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a7[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a7;
    if ( !a7 )
      v15 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_402c5f24833438052b5cb2c912b968aa_Traceguids,
      23LL,
      &a6,
      8LL,
      v15,
      v14,
      0LL);
  }
  v11 = v8 == 0LL;
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
    v11 = v8 == 0LL;
  }
  if ( v11 )
    v8 = L"NULL";
  LOWORD(v16) = 23;
  return WppAutoLogTrace(v7, 4LL, 8LL, &WPP_402c5f24833438052b5cb2c912b968aa_Traceguids, v16, &a6, 8LL, v8, v10, 0LL);
}
