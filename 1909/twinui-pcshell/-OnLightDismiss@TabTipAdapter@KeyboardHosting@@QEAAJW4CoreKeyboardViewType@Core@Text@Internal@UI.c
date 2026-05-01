/*
 * XREFs of ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180342250
 * Callers:
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180330FE0 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180343E94 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEA_N@Z @ 0x18034CE60 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU-$IVectorView@UCoreKeyboar.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnLightDismiss(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v10 = 0LL;
  LOBYTE(v9) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v4 = KeyboardHosting::TabTipAdapterPolicy::VerifyLightDismiss(*(_QWORD *)(a1 + 96) + 16LL, a2, &v10, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v9
      || (v9 = v10,
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9),
          v4 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
                 a1,
                 (unsigned int)&v9,
                 2,
                 a2,
                 *(_DWORD *)(*(_QWORD *)(a1 + 96) + 500LL)),
          v5 = v4,
          v4 >= 0) )
    {
      v5 = 0;
      goto LABEL_8;
    }
    v6 = 1801LL;
  }
  else
  {
    v6 = 1793LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v5;
}
