/*
 * XREFs of ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180260ED4
 * Callers:
 *     ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x180253260 (-OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180261038 (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableSh.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18004372C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::UpdateTabDisplayName(
        TabViewManager *this,
        HWND a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  int v5; // eax
  char v6; // al
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64); // rsi
  unsigned __int64 v8; // rbx
  UINT32 v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-268h] BYREF
  __int64 v14; // [rsp+28h] [rbp-260h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-258h] BYREF
  __int64 v16; // [rsp+48h] [rbp-240h]
  WCHAR pString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v14 = -2LL;
  LOBYTE(v13) = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *))(*(_QWORD *)a3 + 336LL))(
         a3,
         &v13);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( !(_BYTE)v13 )
      goto LABEL_5;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
  }
  v6 = 1;
LABEL_5:
  if ( v6 )
  {
    if ( !InternalGetWindowText(a2, pString, 261) )
      pString[0] = 0;
    v7 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64))(*(_QWORD *)a3 + 64LL);
    v8 = -1LL;
    do
      ++v8;
    while ( pString[v8] );
    if ( v8 > 0xFFFFFFFF )
    {
      RaiseException(0x80070216, 1u, 0, 0LL);
    }
    else
    {
      v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v8);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, pString, v9, v8);
      v10 = v7(a3, v16);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD0,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
    }
  }
  return 0LL;
}
