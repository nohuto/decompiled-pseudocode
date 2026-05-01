/*
 * XREFs of ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18034B8E0
 * Callers:
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18007F600 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 *     ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x180340660 (-OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUI.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180341370 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x18034AC60 (-HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAP.c)
 *     ?HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034B450 (-HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU-$IVectorView@.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 **Ptr; // rdx
  __int64 *i; // rax
  bool v5; // zf
  bool v6; // bl

  v1 = this + 53;
  AcquireSRWLockShared(this + 53);
  Ptr = (__int64 **)this[46].Ptr;
  for ( i = *Ptr; ; i = (__int64 *)*i )
  {
    v5 = Ptr == (__int64 **)i;
    if ( Ptr == (__int64 **)i )
      break;
    if ( *((_BYTE *)i + 20) )
    {
      v5 = Ptr == (__int64 **)i;
      break;
    }
  }
  v6 = !v5;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v6;
}
