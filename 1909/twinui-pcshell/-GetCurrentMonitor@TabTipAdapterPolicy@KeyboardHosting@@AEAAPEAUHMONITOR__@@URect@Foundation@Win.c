/*
 * XREFs of ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18034A668
 * Callers:
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18034AFB0 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18034B050 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 * Callees:
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18034A6B4 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(__int64 a1, __int128 *a2)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  if ( GetSystemMetrics(80) <= 1 )
    return MonitorFromWindow(0LL, 1u);
  v4 = *a2;
  return (HMONITOR)KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v4);
}
