/*
 * XREFs of PopDiagNextCsSleepStudySession @ 0x1408714D0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14071FE70 (PopConnectedStandbySettingCallback.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408753E0 (PopDiagTraceSleepStudyStart.c)
 */

char __fastcall PopDiagNextCsSleepStudySession(GUID *a1)
{
  char v1; // bl
  GUID *v3; // rsi
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-128h] BYREF
  char v22; // [rsp+50h] [rbp-118h]
  _OWORD v23[15]; // [rsp+60h] [rbp-108h] BYREF

  v1 = 0;
  if ( !PopSleepStudyDisabled )
  {
    KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
    v3 = (GUID *)PopWdiCurrentScenario;
    if ( (GUID *)PopWdiCurrentScenario == &NullGuid && a1 == &NullGuid )
    {
      v1 = 1;
      KeReleaseMutex(&PopWdiTimerMutex, 0);
    }
    else
    {
      ++PopWdiCurrentScenarioInstanceId;
      ++PopWdiCurrentScenarioInstanceIdV2;
      PopWdiCurrentScenario = (__int64)a1;
      memset(v23, 0, sizeof(v23));
      PopCaptureSleepStudyStatistics(v5, v4, (__int64)v23);
      if ( qword_140441088 )
      {
        LOBYTE(v6) = PopWdiCurrentScenarioInstanceId;
        qword_140441088(PopWdiCurrentScenario, v6);
      }
      if ( v3 == &NullGuid )
      {
        if ( PopWdiTimerQueued )
          PopWdiNewScenarioWaiting = 1;
        else
          PopDiagTraceSleepStudyStart();
      }
      else if ( PopWdiTimerQueued )
      {
        PopWdiNewScenarioWaiting = 0;
      }
      else
      {
        PopWdiScenarioStopEventData = v23[0];
        v7 = v23[2];
        *((_OWORD *)&PopWdiScenarioStopEventData + 1) = v23[1];
        v8 = v23[3];
        *((_OWORD *)&PopWdiScenarioStopEventData + 2) = v7;
        v9 = v23[4];
        *((_OWORD *)&PopWdiScenarioStopEventData + 3) = v8;
        v10 = v23[5];
        *((_OWORD *)&PopWdiScenarioStopEventData + 4) = v9;
        v11 = v23[6];
        *((_OWORD *)&PopWdiScenarioStopEventData + 5) = v10;
        *((_OWORD *)&PopWdiScenarioStopEventData + 6) = v11;
        v12 = PopWdiTimerTimeoutValue;
        *((_OWORD *)&PopWdiScenarioStopEventData + 7) = v23[7];
        v13 = v23[9];
        *((_OWORD *)&PopWdiScenarioStopEventData + 8) = v23[8];
        v14 = v23[10];
        *((_OWORD *)&PopWdiScenarioStopEventData + 9) = v13;
        v15 = v23[11];
        *((_OWORD *)&PopWdiScenarioStopEventData + 10) = v14;
        v16 = v23[12];
        *((_OWORD *)&PopWdiScenarioStopEventData + 11) = v15;
        v17 = v23[13];
        *((_OWORD *)&PopWdiScenarioStopEventData + 12) = v16;
        v18 = v23[14];
        *((_OWORD *)&PopWdiScenarioStopEventData + 13) = v17;
        *((_OWORD *)&PopWdiScenarioStopEventData + 14) = v18;
        KiSetTimerEx((__int64)&PopWdiTimer, v12, 0, 0, (__int64)&PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      KeReleaseMutex(&PopWdiTimerMutex, 0);
      v19 = *(_OWORD *)PopWdiCurrentScenario;
      v22 = PopWdiCurrentScenarioInstanceId;
      Buffer = v19;
      ZwUpdateWnfStateData(&WNF_PO_SCENARIO_CHANGE, &Buffer, 0x14u, 0LL, 0LL, 0, 0);
    }
  }
  return v1;
}
