/*
 * XREFs of ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x1800FDF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceAdded(PVOID pv, const unsigned __int16 *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 1u, a2);
}
