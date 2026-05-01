/*
 * XREFs of ?HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x18032B3E0
 * Callers:
 *     ?OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z @ 0x180320F94 (-OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18032C060 (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x18032C158 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDesktopVisibilityChanged(
        __int64 a1,
        __int64 a2,
        char a3,
        _QWORD *a4,
        _DWORD *a5)
{
  KeyboardHosting::TabTipAdapterPolicy *v5; // rdi
  int v9; // eax
  unsigned int v10; // esi
  int PositionAndSizeOptions; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v5 = (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16);
  *a5 = 0;
  if ( a3 || !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(v5) )
  {
    if ( a3 && *(_BYTE *)(a1 + 488) )
    {
      if ( !KeyboardHosting::TabTipAdapterPolicy::IsViewShown(v5, 5u) )
      {
        *a5 = 1;
        PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v5, a4);
        v13 = PositionAndSizeOptions;
        if ( PositionAndSizeOptions < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13B,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)(unsigned int)PositionAndSizeOptions);
          return v13;
        }
      }
      *(_BYTE *)(a1 + 488) = 0;
    }
  }
  else
  {
    *a5 = 4;
    v9 = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v5, a4);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    *(_BYTE *)(a1 + 488) = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(v5, 5u);
  }
  return 0LL;
}
