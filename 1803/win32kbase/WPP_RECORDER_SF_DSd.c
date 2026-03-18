/*
 * XREFs of WPP_RECORDER_SF_DSd @ 0x1C00FBAB8
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00FB0DC (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DSd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  int v13; // [rsp+20h] [rbp-58h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
    }
    v11 = a7;
    if ( !a7 )
      v11 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      53LL,
      &a6,
      4LL,
      v11);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
  }
  LOWORD(v13) = 53;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids, v13, &a6);
}
