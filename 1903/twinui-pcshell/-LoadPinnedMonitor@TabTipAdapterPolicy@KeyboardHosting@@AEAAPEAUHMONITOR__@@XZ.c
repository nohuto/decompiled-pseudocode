/*
 * XREFs of ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x18032C3BC
 * Callers:
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18032BF98 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z @ 0x18032C240 (-LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 v2; // rbx
  POINT pt; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(this, HKEY_CURRENT_USER, &pt)
    || KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(this, HKEY_LOCAL_MACHINE, &pt) )
  {
    return MonitorFromPoint(pt, 1u);
  }
  return (HMONITOR)v2;
}
