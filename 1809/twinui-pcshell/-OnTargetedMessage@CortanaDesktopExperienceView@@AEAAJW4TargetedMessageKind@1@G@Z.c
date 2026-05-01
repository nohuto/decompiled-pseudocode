/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180189C40
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180189970 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18000D344 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000FFA4 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180015F88 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18013C54C (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1801882F4 (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018891C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1801891D0 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180189460 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x18018A7AC (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x18018A88C (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803B0D50 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1803B243C (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1803B2710 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v13; // edi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  __int64 v18; // rcx
  void (*v19)(void); // rax
  _QWORD *v20; // rdi
  _QWORD *ViewWrapper; // rax
  int v22; // eax
  bool v23; // sf
  __int64 v24; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v26; // [rsp+58h] [rbp+10h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 229) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v26 = 0;
    v22 = _RegSetKeyValue(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"AnyAboveLockAppsActive",
            4u,
            (BYTE *)&v26,
            4u);
    v23 = v22 < 0;
    if ( v22 > 0 )
    {
      v22 = (unsigned __int16)v22 | 0x80070000;
      v23 = v22 < 0;
    }
    if ( v23 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        140LL,
        (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
        (const char *)(unsigned int)v22);
    CortanaHelpers::SetWindowsHelloActive();
    LOBYTE(v24) = (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
    CortanaHelpers::SetIsAssignedAccess(v24);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v20 = (_QWORD *)(a1 + 272);
    if ( a3 )
    {
      if ( !*v20 || !*(_DWORD *)(a1 + 280) )
      {
        ViewWrapper = CortanaDesktopExperienceView::GetViewWrapper(a1, &v27);
        SingleViewLightDismissHelper::RegisterWithLightDismiss(
          v20,
          1795LL,
          (a1 + 32) & -(__int64)(a1 != 0),
          *ViewWrapper);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      }
    }
    else
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 272));
    }
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 231) = a3 != 0;
    if ( !a3 )
      goto LABEL_71;
    *(_BYTE *)(a1 + 227) = 0;
    if ( *(_BYTE *)(a1 + 230) )
      *(_BYTE *)(a1 + 234) = 1;
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( !*(_BYTE *)(a1 + 221) )
      {
        v13 = LaunchCortanaApp();
        if ( v13 < 0 )
        {
          v14 = 1342LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v13);
          return (unsigned int)v13;
        }
      }
    }
    else
    {
LABEL_71:
      if ( *(_BYTE *)(a1 + 231) )
      {
        if ( *(_BYTE *)(a1 + 221) )
          goto LABEL_41;
      }
      else if ( *(_DWORD *)(a1 + 140) != 4 )
      {
        goto LABEL_41;
      }
      v15 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1353LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 230) )
    {
      if ( !*(_BYTE *)(a1 + 231) )
      {
        CortanaHelpers::SetWindowsHelloActive();
        goto LABEL_56;
      }
    }
    else if ( !*(_BYTE *)(a1 + 231) )
    {
      v26 = 0;
      v16 = _RegSetKeyValue(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
              L"AnyAboveLockAppsActive",
              4u,
              (BYTE *)&v26,
              4u);
      v17 = v16 < 0;
      if ( v16 > 0 )
      {
        v16 = (unsigned __int16)v16 | 0x80070000;
        v17 = v16 < 0;
      }
      if ( v17 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          140LL,
          (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
          (const char *)(unsigned int)v16);
      CortanaHelpers::SetWindowsHelloActive();
      LOBYTE(v18) = (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v18);
      v13 = CortanaDesktopExperienceView::NotifyView(
              (CortanaDesktopExperienceView *)a1,
              L"NotifyLockStatusChanged",
              0LL);
      if ( v13 < 0 )
      {
        v14 = 1364LL;
        goto LABEL_34;
      }
      if ( *(_BYTE *)(a1 + 232) )
      {
        *(_BYTE *)(a1 + 232) = 0;
        v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 64LL);
LABEL_55:
        v19();
        goto LABEL_56;
      }
      goto LABEL_56;
    }
    if ( !*(_BYTE *)(a1 + 232) )
    {
      *(_BYTE *)(a1 + 232) = 1;
      v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 56LL);
      goto LABEL_55;
    }
LABEL_56:
    *(_BYTE *)(a1 + 221) = 0;
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = -2147418113;
      v9 = 1449LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 231) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 226) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1443LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( *(_BYTE *)(a1 + 231) )
      {
        if ( !*(_BYTE *)(a1 + 226) )
        {
          v8 = LaunchCortanaApp();
          if ( v8 < 0 )
          {
            v9 = 1427LL;
            goto LABEL_26;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 231) )
  {
    if ( *(_BYTE *)(a1 + 226) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1413LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
