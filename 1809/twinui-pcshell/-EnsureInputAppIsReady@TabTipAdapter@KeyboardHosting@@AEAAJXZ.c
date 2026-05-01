/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C219C
 * Callers:
 *     ?PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B9910 (-PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B99E0 (-PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x1802C3330 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1802C4D84 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1802C4F00 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x1802C51E4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1802B5958 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802C2984 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1802C3C14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1802C68F4 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(KeyboardHosting::TabTipAdapter *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int DefaultInputAppId; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const unsigned __int16 *v6; // rdx
  int IsActivated; // eax
  _QWORD Src[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  unsigned __int64 v11; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  if ( !*((_QWORD *)this + 36) )
  {
    v10 = 0LL;
    v11 = 7LL;
    LOWORD(Src[0]) = 0;
    DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(Src);
    v4 = DefaultInputAppId;
    if ( DefaultInputAppId < 0 )
    {
      v5 = 1158LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)DefaultInputAppId);
      std::wstring::_Tidy_deallocate(Src);
      goto LABEL_17;
    }
    if ( v10 )
    {
      v6 = (const unsigned __int16 *)Src;
      if ( *((_QWORD *)this + 5) )
      {
        if ( v11 >= 8 )
          v6 = (const unsigned __int16 *)Src[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, v6);
        v4 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v5 = 1164LL;
          goto LABEL_14;
        }
      }
      else
      {
        if ( v11 >= 8 )
          v6 = (const unsigned __int16 *)Src[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(this, v6);
        v4 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v5 = 1168LL;
          goto LABEL_14;
        }
      }
    }
    std::wstring::_Tidy_deallocate(Src);
    goto LABEL_16;
  }
  IsActivated = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(*((RTL_SRWLOCK **)this + 7));
  v4 = IsActivated;
  if ( IsActivated >= 0 )
  {
LABEL_16:
    v4 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x498,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsActivated);
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
