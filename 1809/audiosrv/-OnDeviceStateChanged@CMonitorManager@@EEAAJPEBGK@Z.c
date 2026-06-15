/*
 * XREFs of ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800FE2D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceStateChanged(PVOID pv, const unsigned __int16 *a2, unsigned int a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, a3, a2);
}
