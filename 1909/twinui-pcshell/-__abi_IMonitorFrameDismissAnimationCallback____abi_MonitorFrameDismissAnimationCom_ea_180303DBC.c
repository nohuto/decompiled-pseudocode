/*
 * XREFs of ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAJXZ @ 0x180303DBC
 * Callers:
 *     ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@WJA@E$AAAJXZ @ 0x1800DFD20 (-__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@-QIMon.c)
 * Callees:
 *     ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAXXZ @ 0x180302C80 (-MonitorFrameDismissAnimationCompleted@-QIMonitorFrameDismissAnimationCallback@@Xam_ea_180302C80.c)
 */

__int64 __fastcall ___abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAJXZ(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 208) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    _MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAXXZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
