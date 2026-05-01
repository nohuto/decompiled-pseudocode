/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x180342060
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180342CDC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180344700 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034B380 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU-$IVectorView@UCoreKey.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18043511C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  IhmNotification *v8; // rcx
  bool v9; // r8
  __int64 v10; // r8
  _DWORD v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13[2]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v15; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER v16; // [rsp+58h] [rbp-28h] BYREF
  HSTRING v17; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v13[1] = -2LL;
  v13[0] = 0LL;
  v12[0] = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *, _DWORD *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(this[12]);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 554LL;
      goto LABEL_14;
    }
    if ( v12[1] != 1 )
    {
LABEL_20:
      v5 = 0;
      goto LABEL_21;
    }
    if ( v12[0] )
    {
      switch ( v12[0] )
      {
        case 1:
          v10 = 8LL;
          break;
        case 2:
          v10 = 7LL;
          break;
        case 3:
          v15 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
          v17 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"ShowEmojiPanelTips", 0x13u, 0x12u);
          v7 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)this, v17, v15);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x245,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
              (const char *)(unsigned int)v7);
          v4 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
                 this,
                 2LL,
                 *((unsigned int *)this[12] + 125),
                 5LL);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 584LL;
            goto LABEL_14;
          }
          goto LABEL_19;
        default:
          goto LABEL_17;
      }
LABEL_18:
      (*((void (__fastcall **)(char *, _QWORD, __int64))this[1] + 4))(
        (char *)this + 8,
        *((unsigned int *)this[12] + 125),
        v10);
LABEL_19:
      LOBYTE(v8) = 1;
      IhmNotification::SendKeyboardSetVisible(v8, 0, v9);
      goto LABEL_20;
    }
LABEL_17:
    v10 = 0LL;
    goto LABEL_18;
  }
  v6 = 553LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  return v5;
}
