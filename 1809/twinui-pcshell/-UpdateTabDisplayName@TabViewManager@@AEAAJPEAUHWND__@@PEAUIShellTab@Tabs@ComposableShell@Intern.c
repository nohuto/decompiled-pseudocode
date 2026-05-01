/*
 * XREFs of ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF24C
 * Callers:
 *     ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x1801E0790 (-OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF3BC (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableSh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18005EE60 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::UpdateTabDisplayName(
        TabViewManager *this,
        HWND a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  int v5; // eax
  char v6; // al
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  UINT32 v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-258h] BYREF
  __int64 v14; // [rsp+28h] [rbp-250h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-248h] BYREF
  __int64 v16; // [rsp+48h] [rbp-230h]
  WCHAR pString[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v14 = -2LL;
  LOBYTE(v13) = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *))(*(_QWORD *)a3 + 336LL))(
         a3,
         &v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      3444LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
LABEL_4:
    v6 = 1;
    goto LABEL_5;
  }
  v6 = 0;
  if ( (_BYTE)v13 )
    goto LABEL_4;
LABEL_5:
  if ( !v6 )
    return 0LL;
  if ( !InternalGetWindowText(a2, pString, 261) )
    pString[0] = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( pString[v7] );
  v8 = -1;
  if ( v7 > 0xFFFFFFFF )
    RaiseException(v7 > 0xFFFFFFFF ? 0x80070216 : 0, 1u, 0, 0LL);
  else
    v8 = v7;
  v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v8);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, pString, v9, v8);
  v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64))(*(_QWORD *)a3 + 64LL))(
          a3,
          v16);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD8E,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
