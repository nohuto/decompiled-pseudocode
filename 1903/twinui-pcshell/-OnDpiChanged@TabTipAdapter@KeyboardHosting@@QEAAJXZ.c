/*
 * XREFs of ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180321144
 * Callers:
 *     wistd::__function::__func__lambda_b831841adf57eb5961716974160120e3__void___cdecl(void)_::operator() @ 0x18030DAB0 (wistd--__function--__func__lambda_b831841adf57eb5961716974160120e3__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18005B184 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCore.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18032B4F0 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKeyboardPo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDpiChanged(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v2 = KeyboardHosting::TabTipAdapterPolicy::HandleDpiChanged(*((_QWORD *)this + 12) + 16LL, &v8, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( (_DWORD)v7 != 3
      || (v7 = v8,
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7),
          v2 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this, &v7),
          v3 = v2,
          v2 >= 0) )
    {
      v3 = 0;
      goto LABEL_8;
    }
    v4 = 1647LL;
  }
  else
  {
    v4 = 1643LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v2);
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return v3;
}
