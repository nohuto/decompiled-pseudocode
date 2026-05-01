/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x180340AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18033F534 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1803401BC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18034AFB0 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v6; // xmm6
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = -2LL;
  v15 = 0uLL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v15;
    v11 = v15;
    if ( KeyboardHosting::IsRectNull((float *)&v11) )
      return 0LL;
    v12 = 0LL;
    v11 = v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v8 = KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
           *((_QWORD *)this + 12),
           &v11,
           &v12,
           v13);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)this + 5);
      if ( v10
        && (LODWORD(v11) = (int)*(float *)&v15,
            DWORD1(v11) = (int)*((float *)&v15 + 1),
            DWORD2(v11) = (int)(float)(*((float *)&v15 + 2) + *(float *)&v15),
            HIDWORD(v11) = (int)(float)(*((float *)&v15 + 1) + *((float *)&v15 + 3)),
            v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 64LL))(v10, &v11),
            v5 = v8,
            v8 < 0) )
      {
        v9 = 450LL;
      }
      else
      {
        v8 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest((__int64)this, 1);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v5 = 0;
          goto LABEL_14;
        }
        v9 = 455LL;
      }
    }
    else
    {
      v9 = 446LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
LABEL_14:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B1,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
