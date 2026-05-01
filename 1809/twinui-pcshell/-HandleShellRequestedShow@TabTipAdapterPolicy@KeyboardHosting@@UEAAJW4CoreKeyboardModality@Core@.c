/*
 * XREFs of ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1802CB520
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C2304 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1802C4F00 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x1802C51E4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1803B3254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  bool v6; // zf
  int PositionAndSizeOptions; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  *a4 = 0;
  v6 = *(_BYTE *)(a1 + 467) == 0;
  *(_DWORD *)(a1 + 480) = a2;
  if ( v6 && !*(_BYTE *)(a1 + 486) || *(_BYTE *)(a1 + 477) )
  {
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                               (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16),
                               a3);
    v8 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x253,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)PositionAndSizeOptions);
      return v8;
    }
    *a4 = 1;
  }
  else
  {
    IhmNotification::SendKeyboardSetVisible(0LL, 0, (bool)a3);
  }
  *(_BYTE *)(a1 + 477) = 0;
  return 0LL;
}
