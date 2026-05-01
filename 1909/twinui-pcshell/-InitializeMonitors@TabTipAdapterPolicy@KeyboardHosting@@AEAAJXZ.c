/*
 * XREFs of ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18034B818
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18034BDF8 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x18034BC3C (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18034D2D0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetSizeOverride@@YA_NPEAN@Z @ 0x180428048 (-GetSizeOverride@@YA_NPEAN@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(KeyboardHosting::TabTipAdapterPolicy *this)
{
  HMONITOR v2; // rbx
  HMONITOR PinnedMonitor; // rax
  KeyboardHosting::MonitorInformation *v4; // rcx
  double v5; // xmm1_8
  __int64 v6; // rax
  double v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = MonitorFromWindow(0LL, 1u);
  *((_QWORD *)this + 27) = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
  *((_QWORD *)this + 39) = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
  PinnedMonitor = KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(this);
  v4 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264);
  if ( PinnedMonitor )
    v2 = PinnedMonitor;
  *(_QWORD *)v4 = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v4);
  *((_BYTE *)this + 576) = 0;
  v8 = 0.0;
  if ( GetSizeOverride(&v8) )
  {
    v5 = v8;
    if ( v8 >= 5.0 && v8 <= 100.0 )
    {
      v6 = *((_QWORD *)this + 25);
      *((_BYTE *)this + 576) = 1;
      *(double *)(v6 + 208) = v5;
      *(_BYTE *)(v6 + 200) = 1;
    }
  }
  return 0LL;
}
