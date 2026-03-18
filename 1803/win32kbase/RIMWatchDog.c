/*
 * XREFs of RIMWatchDog @ 0x1C003B3D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C00DD7E4 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 *     RIMArmWatchDog @ 0x1C00DDB24 (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00DE4B0 (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qqqDqSq @ 0x1C00DE5C4 (WPP_RECORDER_SF_qqqDqSq.c)
 */

void RIMWatchDog()
{
  struct _LIST_ENTRY *Flink; // rsi
  int v1; // r14d
  struct _LIST_ENTRY *v2; // rbx
  int v3; // edx
  int v4; // r8d
  const GUID *v5; // r9
  int v6; // edx
  int v7; // r8d
  const GUID *v8; // r9
  struct _LIST_ENTRY *i; // rdi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 v13; // r9
  unsigned __int64 cData; // [rsp+28h] [rbp-E0h]
  struct _LIST_ENTRY *v15; // [rsp+68h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+70h] [rbp-98h] BYREF
  struct _LIST_ENTRY *v17; // [rsp+78h] [rbp-90h] BYREF
  struct _LIST_ENTRY *v18; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  struct _LIST_ENTRY **v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  char *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v28; // [rsp+E8h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v29; // [rsp+108h] [rbp+0h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  struct _LIST_ENTRY **v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+120h] [rbp+18h]
  struct _LIST_ENTRY **v33; // [rsp+128h] [rbp+20h]
  __int64 v34; // [rsp+130h] [rbp+28h]
  char *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]

  RIMLockExclusive(&gObListLock);
  RIMLockExclusive(&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v1 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_36;
  do
  {
    v2 = Flink - 1;
    if ( LODWORD(Flink[43].Flink) )
    {
      if ( v2[44].Blink
        && !BYTE1(v2[4].Blink)
        && !LOBYTE(v2[4].Blink)
        && (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[44].Blink) > v2[45].Flink )
      {
        if ( !PsGetProcessDebugPort(v2[2].Flink) )
        {
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v3,
            v4,
            16,
            (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
            (char)v2[4].Flink,
            (char)v2[2].Flink,
            (char)v2[2].Blink,
            HIDWORD(v2[4].Blink));
          LODWORD(cData) = HIDWORD(v2[4].Blink);
          DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed PNP actions\n");
          if ( dword_1C019EBC0 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
            {
              v15 = v2[2].Flink;
              v22 = &v15;
              Blink = v2[2].Blink;
              p_Blink = &Blink;
              v20 = v2 + 4;
              v21 = 8LL;
              v23 = 8LL;
              v25 = 8LL;
              v26 = (char *)&v2[4].Blink + 4;
              v27 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178324, 0LL, v5, 6u, &pData);
            }
          }
        }
        if ( gbBugCheckOnPnpThreadDelay == 1 )
          WatchDogBugCheckMachine(
            (struct RawInputManagerObject *)&Flink[-1],
            0x111uLL,
            (unsigned __int64)&Flink[-1],
            (unsigned __int64)v5,
            cData);
      }
      if ( !v2[43].Blink || BYTE1(v2[4].Blink) || LOBYTE(v2[4].Blink) || LOBYTE(v2[35].Blink) )
      {
        LODWORD(v2[44].Flink) = 0;
      }
      else
      {
        v1 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[43].Blink) > v2[43].Flink )
        {
          LODWORD(v2[44].Flink) = 0;
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            v7,
            17,
            (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
            (char)v2[4].Flink,
            (char)v2[2].Flink,
            (char)v2[2].Blink,
            HIDWORD(v2[4].Blink));
          LODWORD(cData) = HIDWORD(v2[4].Blink);
          DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n");
          if ( dword_1C019EBC0 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
            {
              v17 = v2[2].Flink;
              v31 = &v17;
              v18 = v2[2].Blink;
              v33 = &v18;
              v29 = v2 + 4;
              v30 = 8LL;
              v32 = 8LL;
              v34 = 8LL;
              v35 = (char *)&v2[4].Blink + 4;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01782EC, 0LL, v8, 6u, &v28);
            }
          }
        }
      }
      for ( i = v2[25].Blink; i; i = i[2].Blink )
      {
        if ( LODWORD(i[23].Flink) )
        {
          if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)i[22].Blink) <= v2[45].Flink )
          {
            v1 = 1;
            LODWORD(v2[44].Flink) = 1;
          }
          else
          {
            WPP_RECORDER_SF_qqqDqSq(
              WPP_GLOBAL_Control->DeviceExtension,
              v10,
              v11,
              v12,
              cData,
              (char)v2[4].Flink,
              (char)v2[2].Flink,
              (char)v2[2].Blink,
              HIDWORD(v2[4].Blink),
              (char)i,
              (__int64)i[13].Blink,
              (char)i[19].Blink);
            LODWORD(cData) = HIDWORD(v2[4].Blink);
            DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x device (%p, %ws) delayed PNP thread (%p)\n");
            if ( gbBugCheckOnPnpThreadDelay == 1 )
              WatchDogBugCheckMachine(
                (struct RawInputManagerObject *)&Flink[-1],
                0x100uLL,
                (unsigned __int64)&i[13],
                v13,
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
  qword_1C01A1620 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
