/*
 * XREFs of ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x180324FEC
 * Callers:
 *     ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180311480 (-OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180311510 (-OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x180320E20 (-OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUI.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180321B30 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180322260 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180323260 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18032349C (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180324314 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803248B0 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x18032C158 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetTrackPosition(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // bl
  KeyboardHosting::TabTipAdapterPolicy *v5; // rcx
  bool IsViewShown; // al
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v5 = (KeyboardHosting::TabTipAdapterPolicy *)*((_QWORD *)this + 12);
  if ( *((_BYTE *)v5 + 507)
    || *((_BYTE *)v5 + 485)
    || (IsViewShown = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(v5, 0)) )
  {
    IsViewShown = 1;
  }
  if ( v4 || IsViewShown )
    v4 = 1;
  LOBYTE(a3) = v4;
  LOBYTE(a2) = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 496LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_BYTE *)(*((_QWORD *)this + 12) + 493LL) = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
