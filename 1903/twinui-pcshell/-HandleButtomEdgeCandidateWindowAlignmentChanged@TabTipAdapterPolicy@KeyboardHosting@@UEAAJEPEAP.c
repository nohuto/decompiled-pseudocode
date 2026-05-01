/*
 * XREFs of ?HandleButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18005AA40
 * Callers:
 *     ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x18005A980 (-OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboa.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleButtomEdgeCandidateWindowAlignmentChanged(
        KeyboardHosting::TabTipAdapterPolicy *a1,
        char a2,
        _QWORD *a3,
        _DWORD *a4)
{
  int PositionAndSizeOptions; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0;
  *a3 = 0LL;
  if ( *((_BYTE *)a1 + 494) == (a2 != 0) )
    return 0LL;
  *((_BYTE *)a1 + 494) = a2 != 0;
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(a1);
  v6 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
  {
    *a4 = 3;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)PositionAndSizeOptions,
    v8);
  return v6;
}
