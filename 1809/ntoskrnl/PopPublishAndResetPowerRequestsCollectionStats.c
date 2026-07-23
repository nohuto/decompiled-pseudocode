/*
 * XREFs of PopPublishAndResetPowerRequestsCollectionStats @ 0x14087C2BC
 * Callers:
 *     PopStatsNotifyPowerRequestCsState @ 0x14087C3D0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402E20B8 (PopDiagTraceSleepStudyBlocker.c)
 *     PoQueryStopWatchCollection @ 0x1402E9420 (PoQueryStopWatchCollection.c)
 *     PoResetStopWatchCollection @ 0x1402E9478 (PoResetStopWatchCollection.c)
 *     PopGetBlockedPhaseGuid @ 0x14087C054 (PopGetBlockedPhaseGuid.c)
 */

__int64 __fastcall PopPublishAndResetPowerRequestsCollectionStats(char a1)
{
  __int64 v1; // r8
  GUID v2; // xmm0
  __int64 v3; // r9
  int v4; // r8d
  int v5; // r11d
  __int64 v6; // rcx
  bool v8; // [rsp+20h] [rbp-59h] BYREF
  int v9; // [rsp+24h] [rbp-55h] BYREF
  __int64 v10; // [rsp+28h] [rbp-51h] BYREF
  __int64 v11; // [rsp+30h] [rbp-49h] BYREF
  GUID v12; // [rsp+38h] [rbp-41h] BYREF
  GUID v13; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-19h] BYREF
  GUID *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  int *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  GUID *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  __int64 *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]
  char v26; // [rsp+E0h] [rbp+67h] BYREF

  v26 = a1;
  v1 = -1LL;
  do
    ++v1;
  while ( DAM_PDC_NOTIFICATION_CLIENT[v1] );
  v9 = v1;
  v14.Ptr = (ULONGLONG)&v26;
  *(_QWORD *)&v14.Size = 1LL;
  v2 = *PopGetBlockedPhaseGuid(&v12, 3);
  v19 = v3;
  v15 = &v13;
  v16 = 16LL;
  v17 = &v9;
  v13 = v2;
  v20 = 2 * v4;
  v22 = &v12;
  v18 = 4LL;
  v21 = v5;
  v12 = GUID_SLEEPSTUDY_BLOCKER_DAM_PHASE_LATENCY;
  v23 = 16LL;
  PoQueryStopWatchCollection(&ExecutionRequiredStopWatchCollection, &v8, &v11, &v10);
  v10 = v11 - v10;
  if ( v10 )
  {
    v25 = 8LL;
    v24 = &v10;
    PopDiagTraceSleepStudyBlocker(v6, &v14);
  }
  return PoResetStopWatchCollection(&ExecutionRequiredStopWatchCollection);
}
