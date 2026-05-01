/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@7@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1802CB340
 * Callers:
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1802C4A00 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x1802CB9EC (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  int v8; // eax
  int PositionAndSizeOptions; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0;
  *a3 = 0LL;
  if ( !KeyboardHosting::TabTipAdapterPolicy::IsViewShown(this, 0)
    && ((v8 = *((_DWORD *)this + 124), v8 == 2) || v8 == 16)
    && (*((_BYTE *)this + 491) || *((_BYTE *)this + 492) || *((_BYTE *)this + 487))
    && !*((_BYTE *)this + 486)
    && !*((_BYTE *)this + 488)
    || (unsigned int)(a2 - 1) <= 2 )
  {
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this, a3);
    v10 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)PositionAndSizeOptions);
      return v10;
    }
    *a4 = 1;
  }
  return 0LL;
}
