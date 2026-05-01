/*
 * XREFs of ?SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180253730
 * Callers:
 *     _lambda_f167818d7963a6aecc3c3c61dfbcf93a_::operator() @ 0x1802514DC (_lambda_f167818d7963a6aecc3c3c61dfbcf93a_--operator().c)
 *     ?SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUIWin32ApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802537D4 (-SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUIWin32ApplicationView@@PEAUIShellTab@Tabs@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_d1b450f9180508facf5a14a25ef318a0_::operator() @ 0x180251400 (_lambda_d1b450f9180508facf5a14a25ef318a0_--operator().c)
 */

__int64 __fastcall DefaultIconManager::SyncAppSpecifiedIcons(
        HICON *this,
        HWND a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HICON *v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v9; // [rsp+60h] [rbp+18h] BYREF
  HANDLE PropW; // [rsp+68h] [rbp+20h] BYREF

  v9 = a3;
  PropW = GetPropW(a2, L"TitleBar.Icon");
  if ( PropW )
  {
    v7[0] = this;
    v7[1] = (HICON *)&PropW;
    v7[2] = (HICON *)&v9;
    lambda_d1b450f9180508facf5a14a25ef318a0_::operator()(v7);
    return 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, _QWORD))(*(_QWORD *)v9 + 144LL))(
         v9,
         0LL);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C4,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
