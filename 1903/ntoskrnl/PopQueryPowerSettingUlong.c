/*
 * XREFs of PopQueryPowerSettingUlong @ 0x14072962C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD8B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopDeferDoze @ 0x1408AC290 (PopDeferDoze.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1406A177C (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  __int64 *PowerSettingConfiguration; // rax
  __int64 *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = PowerSettingConfiguration[8];
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) >= 4u )
      {
        *a2 = *(_DWORD *)(v9 + 12);
        v10 = v8[9];
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 4) >= 4u )
          {
            v6 = 1;
            *a3 = *(_DWORD *)(v10 + 12);
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v6;
}
