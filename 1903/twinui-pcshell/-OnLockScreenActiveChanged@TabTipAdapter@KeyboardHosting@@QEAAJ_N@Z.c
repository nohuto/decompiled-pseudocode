/*
 * XREFs of ?OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180322AEC
 * Callers:
 *     wistd::__function::__func__lambda_b58d736ce5ebfa4620feabdcd5b5acdc__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18030DA60 (wistd--__function--__func__lambda_b58d736ce5ebfa4620feabdcd5b5acdc__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180320770 (-HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPosition.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803246C0 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18032BBD0 (-HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU-$IVectorView@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnLockScreenActiveChanged(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  __int64 v4; // rdx
  int active; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  LOBYTE(v4) = a2;
  active = KeyboardHosting::TabTipAdapterPolicy::HandleLockScreenActiveChanged(
             *((_QWORD *)this + 12) + 16LL,
             v4,
             &v11,
             &v10);
  v6 = active;
  if ( active >= 0 )
  {
    if ( (_DWORD)v10 == 4 )
    {
      v10 = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
      active = KeyboardHosting::TabTipAdapter::HideAllViews((__int64)this, &v10);
      v6 = active;
      if ( active < 0 )
      {
        v7 = 1710LL;
        goto LABEL_9;
      }
    }
    else if ( (_DWORD)v10 == 1 )
    {
      v10 = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
      active = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
                 (_DWORD)this,
                 (unsigned int)&v10,
                 1,
                 5,
                 *(_DWORD *)(*((_QWORD *)this + 12) + 500LL));
      v6 = active;
      if ( active < 0 )
      {
        v7 = 1721LL;
        goto LABEL_9;
      }
    }
    v6 = 0;
    goto LABEL_11;
  }
  v7 = 1706LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)active);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return v6;
}
