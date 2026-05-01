/*
 * XREFs of ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1802CA450
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
char __fastcall KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  int PositionAndSizeOptions; // eax
  int v5; // eax
  unsigned int i; // edi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h]
  _DWORD v14[2]; // [rsp+38h] [rbp-50h] BYREF
  char v15; // [rsp+40h] [rbp-48h]
  char v16; // [rsp+41h] [rbp-47h]
  unsigned int v17; // [rsp+44h] [rbp-44h]
  unsigned int v18; // [rsp+48h] [rbp-40h]
  unsigned int v19; // [rsp+54h] [rbp-34h]
  unsigned int v20; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = -2LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this, &v11);
  if ( PositionAndSizeOptions < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1130LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
  v12 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 56LL))(v11, &v12);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1132LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v5);
  for ( i = 0; i < v12; ++i )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v11 + 48LL))(v11, i, v14);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1137LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v7);
    if ( *(_DWORD *)a2 == v14[0] && *((_DWORD *)a2 + 5) == v14[1] )
    {
      v8 = *((_DWORD *)a2 + 2);
      if ( v20 <= v8 && v8 <= v18 )
      {
        v9 = *((_DWORD *)a2 + 1);
        if ( v19 <= v9 && v9 <= v17 && *((_BYTE *)a2 + 24) == v15 && *((_BYTE *)a2 + 25) == v16 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
          return 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return 0;
}
