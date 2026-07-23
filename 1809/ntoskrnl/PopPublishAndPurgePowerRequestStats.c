/*
 * XREFs of PopPublishAndPurgePowerRequestStats @ 0x14087C07C
 * Callers:
 *     PopStatsNotifyPowerRequestCsState @ 0x14087C3D0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     PoQueryStopWatch @ 0x140001DC4 (PoQueryStopWatch.c)
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     RtlRandomEx @ 0x14013DBC0 (RtlRandomEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402E20B8 (PopDiagTraceSleepStudyBlocker.c)
 *     PoResetStopWatch @ 0x1402E945C (PoResetStopWatch.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058983C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopGetStopWatchByRequestType @ 0x1405898A4 (PopGetStopWatchByRequestType.c)
 *     PopGetBlockedPhaseGuid @ 0x14087C054 (PopGetBlockedPhaseGuid.c)
 */

void __fastcall PopPublishAndPurgePowerRequestStats(char *Buffer, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v7; // rsi
  LPCWSTR v8; // r9
  GUID v9; // xmm0
  __int64 v10; // rcx
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v15; // [rsp+44h] [rbp-BCh] BYREF
  ULONG Seed; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A0h]
  GUID v19; // [rsp+70h] [rbp-90h] BYREF
  __int128 v20; // [rsp+80h] [rbp-80h] BYREF
  GUID v21; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  int *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  __int128 *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  BOOL *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  char *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  char v43; // [rsp+1A8h] [rbp+A8h] BYREF

  v43 = a2;
  v2 = -1LL;
  v4 = *((_QWORD *)Buffer + 2);
  do
    ++v2;
  while ( *(_WORD *)(v4 + 2 * v2) );
  v14 = v2;
  v22.Ptr = (ULONGLONG)&v43;
  v28 = 2 * v2;
  v27 = v4;
  *((_QWORD *)&v18 + 1) = 0LL;
  *(_QWORD *)&v22.Size = 1LL;
  v25 = &v14;
  v26 = 4LL;
  v29 = 0;
  v5 = 0;
  *(_QWORD *)&v18 = RtlRandomEx(&Seed);
  v20 = v18;
  v30 = &v20;
  v31 = 16LL;
  do
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType((__int64)Buffer, v5);
    v7 = (__int64)StopWatchByRequestType;
    if ( StopWatchByRequestType )
    {
      v11 = 0;
      v13 = 0LL;
      PoQueryStopWatch(StopWatchByRequestType, (__int64 *)&v13, &v11);
      PoResetStopWatch(v7);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v15 = v11;
        v17 = v13 / 0xA / 0xF4240;
        v12 = v43;
        TlgCreateSz(&pDesc, "SleepStudy Blocker Event");
        TlgCreateWsz(&v36, v8);
        v38 = 8LL;
        v39 = &v15;
        v37 = &v17;
        v41 = &v12;
        v40 = 4LL;
        v42 = 1LL;
        TlgWrite(&pCallbackContext, &unk_1403721DF, 0LL, 0LL, 7u, &pData);
      }
      if ( v13 )
      {
        v9 = *PopGetBlockedPhaseGuid(&v19, v5);
        v24 = 16LL;
        v23 = &v21;
        v32 = &v13;
        v21 = v9;
        v33 = 8LL;
        PopDiagTraceSleepStudyBlocker(v10, &v22);
      }
    }
    ++v5;
  }
  while ( v5 < 4 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Buffer, 0) <= 0 )
    PopAvlDeleteStatsForPowerRequest(Buffer);
}
