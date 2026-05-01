/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801EFA80
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1801EF7B0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180043B6C (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180044E20 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18004ED28 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801868EC (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1801EE224 (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801EE8AC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1801EF010 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801EF2A0 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1801F05BC (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1801F069C (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ @ 0x180432854 (-IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180432868 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x180433C08 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x180433F4C (IsUserAssignedAccessSingleApp.c)
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
  __int64 v20; // rdi
  _QWORD *ViewWrapper; // rax
  int v22; // eax
  bool v23; // sf
  __int64 v24; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 253) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v26 = 0;
    v22 = _RegSetKeyValueWithSDDL(
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
        (void *)0x8C,
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
    if ( a3 )
    {
      v20 = a1 + 304;
      if ( !SingleViewLightDismissHelper::IsRegisteredWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 304)) )
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
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 304));
    }
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 255) = a3 != 0;
    if ( !a3 )
      goto LABEL_70;
    *(_BYTE *)(a1 + 243) = 0;
    if ( *(_BYTE *)(a1 + 254) )
      *(_BYTE *)(a1 + 258) = 1;
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( !*(_BYTE *)(a1 + 237) )
      {
        v13 = LaunchCortanaApp();
        if ( v13 < 0 )
        {
          v14 = 1538LL;
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
LABEL_70:
      if ( *(_BYTE *)(a1 + 255) )
      {
        if ( *(_BYTE *)(a1 + 237) )
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
          (void *)0x60D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 254) )
    {
      if ( !*(_BYTE *)(a1 + 255) )
      {
        CortanaHelpers::SetWindowsHelloActive();
        goto LABEL_56;
      }
    }
    else if ( !*(_BYTE *)(a1 + 255) )
    {
      v26 = 0;
      v16 = _RegSetKeyValueWithSDDL(
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
          (void *)0x8C,
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
        v14 = 1560LL;
        goto LABEL_34;
      }
      if ( *(_BYTE *)(a1 + 256) )
      {
        *(_BYTE *)(a1 + 256) = 0;
        v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 64LL);
LABEL_55:
        v19();
        goto LABEL_56;
      }
      goto LABEL_56;
    }
    if ( !*(_BYTE *)(a1 + 256) )
    {
      *(_BYTE *)(a1 + 256) = 1;
      v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 56LL);
      goto LABEL_55;
    }
LABEL_56:
    *(_BYTE *)(a1 + 237) = 0;
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = -2147418113;
      v9 = 1645LL;
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
    if ( !*(_BYTE *)(a1 + 255) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 242) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1639LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock() )
    {
      if ( *(_BYTE *)(a1 + 255) )
      {
        if ( !*(_BYTE *)(a1 + 242) )
        {
          v8 = LaunchCortanaApp();
          if ( v8 < 0 )
          {
            v9 = 1623LL;
            goto LABEL_26;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 255) )
  {
    if ( *(_BYTE *)(a1 + 242) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1609LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
