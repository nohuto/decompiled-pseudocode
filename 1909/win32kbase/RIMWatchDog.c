/*
 * XREFs of RIMWatchDog @ 0x1C0037120
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C0132EB8 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 *     RIMArmWatchDog @ 0x1C0132F18 (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01331FC (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qqqDqSq @ 0x1C0133318 (WPP_RECORDER_SF_qqqDqSq.c)
 */

void RIMWatchDog()
{
  struct _LIST_ENTRY *Flink; // rsi
  int v1; // r15d
  struct _LIST_ENTRY *v2; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned __int64 v6; // r9
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  struct _LIST_ENTRY *i; // rdi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 v15; // r9
  unsigned __int64 cData; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v18; // [rsp+68h] [rbp-98h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  struct _LIST_ENTRY *v21; // [rsp+80h] [rbp-80h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  struct _LIST_ENTRY **v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  struct _LIST_ENTRY **v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  struct _LIST_ENTRY **p_Blink; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  struct _LIST_ENTRY **v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  struct _LIST_ENTRY **v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  struct _LIST_ENTRY **v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  char *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]

  RIMLockExclusive((__int64)&gObListLock);
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v1 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_41;
  do
  {
    v2 = Flink - 1;
    if ( LODWORD(Flink[44].Flink) )
    {
      if ( v2[45].Blink
        && !BYTE1(v2[5].Flink)
        && !LOBYTE(v2[5].Flink)
        && (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[45].Blink) > v2[46].Flink )
      {
        if ( !PsGetProcessDebugPort(v2[2].Flink) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v4,
              v3,
              v5,
              15,
              (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids,
              (char)v2[4].Blink,
              (char)v2[2].Flink,
              (char)v2[2].Blink,
              HIDWORD(v2[5].Flink));
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed PNP actions\n",
            v2[4].Blink,
            v2[2].Flink,
            v2[2].Blink,
            HIDWORD(v2[5].Flink));
          if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
          {
            v17 = 0x1000000LL;
            v24 = &v17;
            v18 = v2[2].Flink;
            v28 = &v18;
            Blink = v2[2].Blink;
            p_Blink = &Blink;
            v25 = 8LL;
            v26 = &v2[4].Blink;
            v27 = 8LL;
            v29 = 8LL;
            v31 = 8LL;
            v32 = (char *)&v2[5].Flink + 4;
            v33 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E1F94, 0LL, 0LL, 7u, &pData);
          }
        }
        if ( gbBugCheckOnPnpThreadDelay == 1 )
          WatchDogBugCheckMachine(
            (struct RawInputManagerObject *)&Flink[-1],
            0x111uLL,
            (unsigned __int64)&Flink[-1],
            v6,
            cData);
      }
      if ( !v2[44].Blink || BYTE1(v2[5].Flink) || LOBYTE(v2[5].Flink) || LOBYTE(v2[36].Blink) )
      {
        LODWORD(v2[45].Flink) = 0;
      }
      else
      {
        v1 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[44].Blink) > v2[44].Flink )
        {
          LODWORD(v2[45].Flink) = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v8,
              v7,
              v9,
              16,
              (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids,
              (char)v2[4].Blink,
              (char)v2[2].Flink,
              (char)v2[2].Blink,
              HIDWORD(v2[5].Flink));
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n",
            v2[4].Blink,
            v2[2].Flink,
            v2[2].Blink,
            HIDWORD(v2[5].Flink));
          if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
          {
            v20 = 0x1000000LL;
            v35 = &v20;
            v21 = v2[2].Flink;
            v39 = &v21;
            v22 = v2[2].Blink;
            v41 = &v22;
            v36 = 8LL;
            v37 = &v2[4].Blink;
            v38 = 8LL;
            v40 = 8LL;
            v42 = 8LL;
            v43 = (char *)&v2[5].Flink + 4;
            v44 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E1F4C, 0LL, 0LL, 7u, &v34);
          }
        }
      }
      for ( i = v2[26].Blink; i; i = i[2].Blink )
      {
        if ( LODWORD(i[23].Flink) )
        {
          if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)i[22].Blink) <= v2[46].Flink )
          {
            v1 = 1;
            LODWORD(v2[45].Flink) = 1;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqqDqSq(
                v12,
                v11,
                v13,
                v14,
                cData,
                (char)v2[4].Blink,
                (char)v2[2].Flink,
                (char)v2[2].Blink,
                HIDWORD(v2[5].Flink),
                (char)i,
                (__int64)i[13].Blink,
                (char)i[19].Blink);
            LODWORD(cData) = HIDWORD(v2[5].Flink);
            DbgPrintGDI(
              "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x device (%p, %ws) delayed PNP thread (%p)\n",
              v2[4].Blink,
              v2[2].Flink,
              v2[2].Blink,
              cData,
              i,
              i[13].Blink,
              i[19].Blink);
            if ( gbBugCheckOnPnpThreadDelay == 1 )
              WatchDogBugCheckMachine(
                (struct RawInputManagerObject *)&Flink[-1],
                0x100uLL,
                (unsigned __int64)&i[13],
                v15,
                cData);
          }
        }
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != &gObRimList );
  if ( v1 )
  {
    RIMArmWatchDog();
  }
  else
  {
LABEL_41:
    if ( gWatchDogTimer && gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 0;
      KeCancelTimer(gWatchDogTimer);
    }
  }
  qword_1C02152A8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0215788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
