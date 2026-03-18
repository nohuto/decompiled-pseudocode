/*
 * XREFs of RIMWatchDog @ 0x1C0032AE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C010B170 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 *     RIMArmWatchDog @ 0x1C010B1D0 (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C010B51C (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qqqDqSq @ 0x1C010B63C (WPP_RECORDER_SF_qqqDqSq.c)
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
  unsigned __int64 cData; // [rsp+28h] [rbp-E0h]
  struct _LIST_ENTRY *v17; // [rsp+68h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+70h] [rbp-98h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+78h] [rbp-90h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  struct _LIST_ENTRY **v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  struct _LIST_ENTRY **v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  char *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v30; // [rsp+E8h] [rbp-20h] BYREF
  struct _LIST_ENTRY **v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]
  struct _LIST_ENTRY **v33; // [rsp+118h] [rbp+10h]
  __int64 v34; // [rsp+120h] [rbp+18h]
  struct _LIST_ENTRY **v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+130h] [rbp+28h]
  char *v37; // [rsp+138h] [rbp+30h]
  __int64 v38; // [rsp+140h] [rbp+38h]

  RIMLockExclusive((__int64)&gObListLock);
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v1 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_36;
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
          WPP_RECORDER_SF_qqqD(
            v4,
            v3,
            v5,
            17,
            (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids,
            (char)v2[4].Blink,
            (char)v2[2].Flink,
            (char)v2[2].Blink,
            HIDWORD(v2[5].Flink));
          LODWORD(cData) = HIDWORD(v2[5].Flink);
          DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed PNP actions\n");
          if ( dword_1C01C7A38 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
            {
              v17 = v2[2].Flink;
              v24 = &v17;
              Blink = v2[2].Blink;
              p_Blink = &Blink;
              v22 = &v2[4].Blink;
              v23 = 8LL;
              v25 = 8LL;
              v27 = 8LL;
              v28 = (char *)&v2[5].Flink + 4;
              v29 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019E167, 0LL, 0LL, 6u, &pData);
            }
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
          WPP_RECORDER_SF_qqqD(
            v8,
            v7,
            v9,
            18,
            (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids,
            (char)v2[4].Blink,
            (char)v2[2].Flink,
            (char)v2[2].Blink,
            HIDWORD(v2[5].Flink));
          LODWORD(cData) = HIDWORD(v2[5].Flink);
          DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n");
          if ( dword_1C01C7A38 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
            {
              v19 = v2[2].Flink;
              v33 = &v19;
              v20 = v2[2].Blink;
              v35 = &v20;
              v31 = &v2[4].Blink;
              v32 = 8LL;
              v34 = 8LL;
              v36 = 8LL;
              v37 = (char *)&v2[5].Flink + 4;
              v38 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019E12F, 0LL, 0LL, 6u, &v30);
            }
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
            DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x device (%p, %ws) delayed PNP thread (%p)\n");
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
LABEL_36:
    if ( gWatchDogTimer && gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 0;
      KeCancelTimer(gWatchDogTimer);
    }
  }
  qword_1C01D0C18 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
