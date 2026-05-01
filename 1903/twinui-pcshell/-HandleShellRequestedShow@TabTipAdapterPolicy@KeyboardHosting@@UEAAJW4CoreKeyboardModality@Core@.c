/*
 * XREFs of ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18032BCE0
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18031FCD4 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180323260 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18032349C (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180415A7C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
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
  v6 = *(_BYTE *)(a1 + 471) == 0;
  *(_DWORD *)(a1 + 484) = a2;
  if ( v6 && !*(_BYTE *)(a1 + 490) || *(_BYTE *)(a1 + 481) )
  {
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                               (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16),
                               a3);
    v8 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26B,
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
  *(_BYTE *)(a1 + 481) = 0;
  return 0LL;
}
