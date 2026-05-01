/*
 * XREFs of ?OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z @ 0x1803407D4
 * Callers:
 *     ?OnDesktopVisibilityChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x180330F40 (-OnDesktopVisibilityChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18033FFD0 (-HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPosition.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180343E94 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x18034AC60 (-HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAP.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  LOBYTE(v6) = a3;
  v7 = KeyboardHosting::TabTipAdapterPolicy::HandleDesktopVisibilityChanged(
         *((_QWORD *)this + 12) + 16LL,
         a2,
         v6,
         &v13,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (_DWORD)v12 == 4 )
    {
      v12 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v7 = KeyboardHosting::TabTipAdapter::HideAllViews((__int64)this, &v12);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1736LL;
        goto LABEL_9;
      }
    }
    else if ( (_DWORD)v12 == 1 )
    {
      v12 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v7 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
             (_DWORD)this,
             (unsigned int)&v12,
             1,
             5,
             *(_DWORD *)(*((_QWORD *)this + 12) + 500LL));
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1747LL;
        goto LABEL_9;
      }
    }
    v8 = 0;
    goto LABEL_11;
  }
  v9 = 1732LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v8;
}
