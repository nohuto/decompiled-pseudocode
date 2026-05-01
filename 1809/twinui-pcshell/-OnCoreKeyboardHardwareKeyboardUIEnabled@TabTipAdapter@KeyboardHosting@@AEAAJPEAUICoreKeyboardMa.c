/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x1802C3330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1802B5958 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C219C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TSF3CHSIME@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802C6358 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TSF3CHSIME@@@wil@@CAX_NW4ReportingKi.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1802C6AF8 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  bool v5; // dl
  int IsReady; // edi
  __int64 v7; // rdx
  __int64 v9; // rax
  bool v10; // dl
  int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v14 = 0;
  IsReady = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *, char *))(v3 + 48))(
              a3,
              &v14);
  if ( IsReady < 0 )
  {
    v7 = 465LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return (unsigned int)IsReady;
  }
  *(_BYTE *)(*((_QWORD *)this + 12) + 481LL) = v14 != 0;
  v9 = *((_QWORD *)this + 12);
  if ( *(_BYTE *)(v9 + 481) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
    if ( IsReady < 0 )
    {
      v7 = 471LL;
      goto LABEL_3;
    }
    IsReady = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(*((RTL_SRWLOCK **)this + 7));
    if ( IsReady < 0 )
    {
      v7 = 472LL;
      goto LABEL_3;
    }
    v11 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v10, 1);
    if ( v11 < 0 )
    {
      v12 = 474LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    wil::Feature<__WilFeatureTraits_Feature_TSF3CHSIME>::ReportUsageToService();
  }
  else if ( !*(_BYTE *)(v9 + 494) )
  {
    v11 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v5, 0);
    if ( v11 < 0 )
    {
      v12 = 490LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
