/*
 * XREFs of ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x18005A980
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18005AA40 (-HandleButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAP.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18005B184 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCore.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnButtomEdgeCandidateWindowAlignmentChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  char v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v10[1] = -2LL;
  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      v10[0]);
    return v5;
  }
  v10[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
  LOBYTE(v6) = v12;
  v7 = KeyboardHosting::TabTipAdapterPolicy::HandleButtomEdgeCandidateWindowAlignmentChanged(
         *((_QWORD *)this + 12),
         v6,
         v10,
         &v13);
  v5 = v7;
  if ( v7 < 0 )
  {
    v9 = 280LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7,
      v10[0]);
    goto LABEL_6;
  }
  if ( (_DWORD)v13 == 3 )
  {
    v13 = v10[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v7 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this, &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = 284LL;
      goto LABEL_11;
    }
  }
  v5 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
  return v5;
}
