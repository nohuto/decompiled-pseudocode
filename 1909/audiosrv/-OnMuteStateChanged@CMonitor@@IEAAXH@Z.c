/*
 * XREFs of ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18010FA20
 * Callers:
 *     ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18010B7A0 (-OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180110DA0 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011169C (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_ld @ 0x180111DC4 (WPP_SF_ld.c)
 */

void __fastcall CMonitor::OnMuteStateChanged(CMonitor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  CAudioSessionManager *v5; // rcx
  int v6; // eax

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ld(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, (unsigned int)a2, *((_DWORD *)this + 14));
    v5 = WPP_GLOBAL_Control;
  }
  v6 = *((_DWORD *)this + 14);
  if ( v3 )
  {
    if ( v6 == 3 )
    {
      if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v5 + 7) & 0x800000) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v5 + 2), 0x32u, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
      }
      CMonitor::Stop(this);
    }
  }
  else if ( ((v6 - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v5 + 7) & 0x800000) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v5 + 2), 0x33u, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
    }
    CMonitor::Start(this);
  }
}
