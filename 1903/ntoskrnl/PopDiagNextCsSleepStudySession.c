/*
 * XREFs of PopDiagNextCsSleepStudySession @ 0x1408ACF10
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14073B180 (PopConnectedStandbySettingCallback.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408AD254 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408B0B5C (PopDiagTraceSleepStudyStart.c)
 */

char __fastcall PopDiagNextCsSleepStudySession(GUID *a1)
{
  char v2; // bl
  char v3; // dl
  __int64 v4; // rcx
  GUID *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-148h] BYREF
  int v21; // [rsp+50h] [rbp-138h]
  _BYTE v22[272]; // [rsp+60h] [rbp-128h] BYREF

  memset(v22, 0, sizeof(v22));
  v2 = 0;
  Buffer = 0uLL;
  v21 = 0;
  if ( !PopSleepStudyDisabled )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopWdiTimerLock);
    v5 = (GUID *)PopWdiCurrentScenario;
    if ( (GUID *)PopWdiCurrentScenario == &NullGuid && a1 == &NullGuid )
    {
      v2 = 1;
      PopReleaseRwLock((ULONG_PTR)&PopWdiTimerLock);
    }
    else
    {
      ++PopWdiCurrentScenarioInstanceId;
      ++PopWdiCurrentScenarioInstanceIdV2;
      PopWdiCurrentScenario = (__int64)a1;
      PopCaptureSleepStudyStatistics(v4, v3, (__int64)v22);
      if ( qword_14046BDD8 )
      {
        LOBYTE(v6) = PopWdiCurrentScenarioInstanceId;
        qword_14046BDD8(PopWdiCurrentScenario, v6);
      }
      if ( v5 == &NullGuid )
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
        v7 = 2LL;
        v8 = &PopWdiScenarioStopEventData;
        v9 = v22;
        do
        {
          v10 = v9[1];
          *v8 = *v9;
          v11 = v9[2];
          v8[1] = v10;
          v12 = v9[3];
          v8[2] = v11;
          v13 = v9[4];
          v8[3] = v12;
          v14 = v9[5];
          v8[4] = v13;
          v15 = v9[6];
          v8[5] = v14;
          v16 = v9[7];
          v9 += 8;
          v8[6] = v15;
          v8 += 8;
          *(v8 - 1) = v16;
          --v7;
        }
        while ( v7 );
        v17 = PopWdiTimerTimeoutValue;
        *v8 = *v9;
        KiSetTimerEx((__int64)&PopWdiTimer, v17, 0, 0, (__int64)&PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      PopReleaseRwLock((ULONG_PTR)&PopWdiTimerLock);
      v18 = *(_OWORD *)PopWdiCurrentScenario;
      LOBYTE(v21) = PopWdiCurrentScenarioInstanceId;
      Buffer = v18;
      ZwUpdateWnfStateData(&WNF_PO_SCENARIO_CHANGE, &Buffer, 0x14u, 0LL, 0LL, 0, 0);
    }
  }
  return v2;
}
