/*
 * XREFs of ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEA_N@Z @ 0x1802CD070
 * Callers:
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1802C4B2C (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x1802CB9EC (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyLightDismiss(__int64 a1, int a2, _QWORD *a3, _BYTE *a4)
{
  KeyboardHosting::TabTipAdapterPolicy *v4; // rsi
  int PositionAndSizeOptions; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v4 = (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16);
  *a4 = 0;
  if ( !KeyboardHosting::TabTipAdapterPolicy::IsViewShown((RTL_SRWLOCK *)(a1 - 16), a2) )
    return 0LL;
  *a4 = 1;
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v4, a3);
  v8 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)PositionAndSizeOptions);
  return v8;
}
