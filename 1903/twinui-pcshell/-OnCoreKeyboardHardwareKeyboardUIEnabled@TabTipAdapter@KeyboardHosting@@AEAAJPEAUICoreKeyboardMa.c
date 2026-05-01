/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180320F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180324314 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  int refreshed; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v9 = 0;
  refreshed = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *, char *))(v3 + 48))(
                a3,
                &v9);
  if ( refreshed < 0 )
  {
    v6 = 482LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)refreshed);
    return (unsigned int)refreshed;
  }
  *(_BYTE *)(*((_QWORD *)this + 12) + 485LL) = v9 != 0;
  refreshed = KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this);
  if ( refreshed < 0 )
  {
    v6 = 484LL;
    goto LABEL_3;
  }
  return 0LL;
}
