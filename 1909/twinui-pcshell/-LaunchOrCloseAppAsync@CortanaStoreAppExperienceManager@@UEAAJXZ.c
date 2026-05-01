/*
 * XREFs of ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801DC8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801DAC80 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DCCCC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  HWND v7; // rbx
  HMONITOR v8; // rsi
  HMONITOR v9; // rax
  HMONITOR v10; // rbp
  HRESULT WindowAttribute; // eax
  CortanaStoreAppExperienceManager *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v8 = MonitorFromWindow(v7, 0);
    v9 = MonitorFromRect((LPCRECT)((char *)this + 200), 0);
    pvAttribute = 0;
    v10 = v9;
    WindowAttribute = DwmGetWindowAttribute(v7, 0xEu, &pvAttribute, 4u);
    if ( WindowAttribute < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)WindowAttribute);
    if ( pvAttribute || v8 != v10 )
    {
      v4 = CortanaStoreAppExperienceManager::ActivateAppAsync(v12, 0, (unsigned __int16 *)&szAgent);
      if ( v4 < 0 )
      {
        v5 = 576LL;
        goto LABEL_4;
      }
    }
    else
    {
      CortanaStoreAppExperienceManager::OnViewConsolidationRequested((CortanaStoreAppExperienceManager *)((char *)this - 120));
    }
  }
  else
  {
    v4 = CortanaStoreAppExperienceManager::ActivateAppAsync(0LL, 0, (unsigned __int16 *)&szAgent);
    if ( v4 < 0 )
    {
      v5 = 559LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  return 0LL;
}
