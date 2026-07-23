/*
 * XREFs of PopConnectedStandbySettingCallback @ 0x14071FE70
 * Callers:
 *     <none>
 * Callees:
 *     PopThermalCsEntry @ 0x1402DC524 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402DC574 (PopThermalCsExit.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopTransitionTelemetryOsState @ 0x1407466B8 (PopTransitionTelemetryOsState.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408714D0 (PopDiagNextCsSleepStudySession.c)
 *     PopFanUpdateCsState @ 0x140877930 (PopFanUpdateCsState.c)
 */

__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  GUID *v15; // rcx

  v3 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( PopPlatformAoAc )
    {
      if ( PopMonitorOffDueToSleep )
      {
        PopMonitorOffDueToSleep = 0;
        if ( v5 )
          return v4;
      }
      else if ( (_DWORD)qword_1404187A4 || PopHiberBootForceMonitorOff )
      {
        PopMonitorOffDueToSleep = 1;
        return v4;
      }
      PopAcquirePolicyLock();
      if ( v5 )
      {
        if ( v5 == 1 && qword_14043D448 )
        {
          v10 = 2;
          PopTransitionTelemetryOsState(4LL, 6LL);
          PopThermalCsExit(v12, v11, v13);
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 1;
        LOBYTE(v8) = PopPdcLastCsEnterReason == 23;
        PopThermalCsEntry(v8, v7, v9);
        PopTransitionTelemetryOsState(3LL, 6LL);
      }
      PopReleasePolicyLock();
      LOBYTE(v14) = v5 != 0;
      PopFanUpdateCsState(v14);
      if ( v10 == 1 )
      {
        v15 = &GUID_SPM_LOW_POWER_CS;
      }
      else
      {
        if ( v10 != 2 )
          return v4;
        PopSleepstudyStopReason = 17;
        v15 = &NullGuid;
      }
      PopDiagNextCsSleepStudySession(v15);
      return v4;
    }
    return (unsigned int)-1073741637;
  }
  return v4;
}
