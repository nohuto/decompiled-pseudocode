/*
 * XREFs of ?OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z @ 0x1802C342C
 * Callers:
 *     ?OnDesktopVisibilityChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1802B8340 (-OnDesktopVisibilityChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1800940C8 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18010784C (--0-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Co.c)
 *     ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1802C2DF4 (-HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPosition.c)
 *     ?HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1802CACA0 (-HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDesktopVisibilityChanged(
        KeyboardHosting::TabTipAdapter *this,
        HMONITOR a2,
        char a3)
{
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  LOBYTE(v6) = a3;
  v7 = KeyboardHosting::TabTipAdapterPolicy::HandleDesktopVisibilityChanged(
         *((_QWORD *)this + 12) + 16LL,
         a2,
         v6,
         &v15,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (_DWORD)v14 == 4 )
    {
      v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
              &v14,
              &v15);
      v7 = KeyboardHosting::TabTipAdapter::HideAllViews((__int64)this, v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1524LL;
        goto LABEL_9;
      }
    }
    else if ( (_DWORD)v14 == 1 )
    {
      v11 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
              &v14,
              &v15);
      v7 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
             (__int64)this,
             v11,
             1,
             5LL,
             *(_DWORD *)(*((_QWORD *)this + 12) + 496LL));
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1535LL;
        goto LABEL_9;
      }
    }
    v8 = 0;
    goto LABEL_11;
  }
  v9 = 1520LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::WeakRef::~WeakRef(&v15);
  return v8;
}
