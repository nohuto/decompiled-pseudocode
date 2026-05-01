/*
 * XREFs of ?BringToForeground@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BBFE4
 * Callers:
 *     ?OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BE588 (-OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

int __fastcall CortanaStoreAppExperienceManager::BringToForeground(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  HWND v7; // rdi
  __int64 v8; // rdx
  wil::details *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 31);
  if ( !v3 )
  {
    v4 = -2147019873;
    v5 = 1136LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v4;
  }
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 24LL))(*((_QWORD *)this + 43));
  if ( v4 < 0 )
  {
    v5 = 1138LL;
    goto LABEL_3;
  }
  if ( SetForegroundWindow(v7) )
    return 0;
  else
    return wil::details::GetLastErrorFailHr(v9, v8, v10, v11);
}
