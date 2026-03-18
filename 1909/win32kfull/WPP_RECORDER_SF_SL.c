/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1C0139800
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_SL(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const wchar_t *a6, ...)
{
  struct RECORDER_LOG__ *v6; // rbp
  const wchar_t *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  int v15; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = gFullLog;
  v7 = a6;
  v8 = -1LL;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_402c5f24833438052b5cb2c912b968aa_Traceguids,
      26LL,
      v14,
      v13,
      va,
      4LL,
      0LL);
  }
  v10 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v9 = 2 * v8 + 2;
    v10 = a6 == 0LL;
  }
  if ( v10 )
    v7 = L"NULL";
  LOWORD(v15) = 26;
  return WppAutoLogTrace(v6, 4LL, 3LL, &WPP_402c5f24833438052b5cb2c912b968aa_Traceguids, v15, v7, v9, va, 4LL);
}
