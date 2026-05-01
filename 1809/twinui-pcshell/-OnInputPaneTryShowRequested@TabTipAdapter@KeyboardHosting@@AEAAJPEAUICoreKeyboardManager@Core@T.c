/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1802C4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x1802C51E4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@7@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1802CB340 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreInputViewKind@Core@ViewM.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1803B3254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  IhmNotification *v7; // rcx
  bool v8; // r8
  __int64 v9; // r8
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+58h] [rbp+20h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
    v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(this[12]);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 503LL;
      goto LABEL_12;
    }
    if ( v14 != 1 )
    {
LABEL_18:
      v5 = 0;
      goto LABEL_19;
    }
    if ( v13 )
    {
      switch ( v13 )
      {
        case 1:
          v9 = 8LL;
          break;
        case 2:
          v9 = 7LL;
          break;
        case 3:
          v4 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(this, 2LL, *((unsigned int *)this[12] + 124));
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 531LL;
            goto LABEL_12;
          }
          goto LABEL_17;
        default:
          goto LABEL_15;
      }
LABEL_16:
      (*((void (__fastcall **)(char *, _QWORD, __int64))this[1] + 4))(
        (char *)this + 8,
        *((unsigned int *)this[12] + 124),
        v9);
LABEL_17:
      LOBYTE(v7) = 1;
      IhmNotification::SendKeyboardSetVisible(v7, 0, v8);
      goto LABEL_18;
    }
LABEL_15:
    v9 = 0LL;
    goto LABEL_16;
  }
  v6 = 502LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
  return v5;
}
