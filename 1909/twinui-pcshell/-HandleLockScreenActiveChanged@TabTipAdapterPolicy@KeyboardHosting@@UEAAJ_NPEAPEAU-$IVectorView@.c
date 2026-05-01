/*
 * XREFs of ?HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034B450
 * Callers:
 *     ?OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18034232C (-OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180059ED4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18034B8E0 (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x18034B9D8 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleLockScreenActiveChanged(
        __int64 a1,
        char a2,
        _QWORD *a3,
        _DWORD *a4)
{
  KeyboardHosting::TabTipAdapterPolicy *v4; // rdi
  int PositionAndSizeOptions; // eax
  unsigned int v10; // esi
  int v12; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v4 = (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16);
  *a4 = 0;
  if ( a2 && KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(v4) )
  {
    *a4 = 4;
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v4, a3);
    v10 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)PositionAndSizeOptions);
      return v10;
    }
    *(_BYTE *)(a1 + 489) = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(v4, 5u);
  }
  else if ( !a2 && *(_BYTE *)(a1 + 489) )
  {
    if ( !KeyboardHosting::TabTipAdapterPolicy::IsViewShown(v4, 5u) )
    {
      *a4 = 1;
      v12 = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v4, a3);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
    }
    *(_BYTE *)(a1 + 489) = 0;
  }
  return 0LL;
}
