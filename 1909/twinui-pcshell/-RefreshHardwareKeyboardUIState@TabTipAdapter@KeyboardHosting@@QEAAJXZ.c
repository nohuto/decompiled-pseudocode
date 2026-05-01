/*
 * XREFs of ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180343B54
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180330AD0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180340750 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18032DC1C (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TSF3CHSIME@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333940 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TSF3CHSIME@@@wil@@CAX_NW4ReportingKi.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18033F3B0 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1803447C0 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(
        KeyboardHosting::TabTipAdapter *this,
        bool a2)
{
  __int64 v2; // rax
  int IsReady; // edi
  __int64 v5; // rdx
  bool v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 12);
  if ( *(_BYTE *)(v2 + 485) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
    if ( IsReady < 0 )
    {
      v5 = 494LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsReady);
      return (unsigned int)IsReady;
    }
    IsReady = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(*((RTL_SRWLOCK **)this + 7));
    if ( IsReady < 0 )
    {
      v5 = 495LL;
      goto LABEL_4;
    }
    v10 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v7, 1);
    if ( v10 < 0 )
    {
      v12 = 497LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    wil::Feature<__WilFeatureTraits_Feature_TSF3CHSIME>::ReportUsageToService(v9, v8, v11);
  }
  else if ( !*(_BYTE *)(v2 + 498) )
  {
    v10 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, a2, 0);
    if ( v10 < 0 )
    {
      v12 = 513LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
