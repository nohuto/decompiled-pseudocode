/*
 * XREFs of rimSignalReadComplete @ 0x1C01542AC
 * Callers:
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0152E88 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C0153044 (rimDispatchCompleteFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C006CC2C (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00726E8 (WPP_RECORDER_SF_qq.c)
 *     RIMArmWatchDog @ 0x1C0135588 (RIMArmWatchDog.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0147CE4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMIsInputSuppressed @ 0x1C014D6DC (RIMIsInputSuppressed.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C01527FC (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0152AD8 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int updated; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v10; // edx

  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) && (a2[25].LowPart & 0x80u) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        v4,
        1,
        10,
        (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
        (char)a2,
        a2[2].QuadPart);
    }
    InputTraceLogging::RIM::DropInput((__int64)a2);
    *((_BYTE *)a1 + 584) = 1;
    return;
  }
  if ( !*((_BYTE *)a1 + 584) )
  {
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *((LARGE_INTEGER *)a1 + 89) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 180) = 1;
    RIMArmWatchDog();
    qword_1C02182A8 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (a2[25].LowPart & 0x80u) != 0 && *(_DWORD *)(a2[60].QuadPart + 24) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_14:
          InputTraceLogging::RIM::ReadComplete(a1, (const struct RIMDEV *)a2);
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          a2[23].LowPart |= 0x40000000u;
          a2[268] = PerformanceCounter;
          a2[266] = a2[267];
          a2[269] = a2[270];
          ZwSetEvent(*((HANDLE *)a1 + 81), 0LL);
          ZwClose(*((HANDLE *)a1 + 81));
          *((_QWORD *)a1 + 81) = 0LL;
          return;
        }
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_D(
          (_DWORD)gRimLog,
          v5,
          1,
          11,
          (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
          updated);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qqqq(
        v6,
        v5,
        v7,
        12,
        (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
        (char)a1,
        (char)a2,
        a2[2].QuadPart,
        *((_QWORD *)a1 + 81));
    }
    goto LABEL_14;
  }
  InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qq(
      (_DWORD)gRimLog,
      v10,
      1,
      13,
      (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
      (char)a2,
      a2[2].QuadPart);
  }
}
