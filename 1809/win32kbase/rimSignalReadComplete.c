/*
 * XREFs of rimSignalReadComplete @ 0x1C0127738
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0126518 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0051F4C (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     RIMArmWatchDog @ 0x1C010B1D0 (RIMArmWatchDog.c)
 *     RIMHandleTTMDeviceInput @ 0x1C012138C (RIMHandleTTMDeviceInput.c)
 *     RIMIsInputSuppressed @ 0x1C0121410 (RIMIsInputSuppressed.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@_N@Z @ 0x1C012612C (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@_N@Z.c)
 */

int __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  int result; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int updated; // eax
  int v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) && (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
  {
    result = WPP_RECORDER_SF_qq(
               gRimLog,
               3u,
               0x15u,
               0xAu,
               (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
               a2,
               *((_QWORD *)a2 + 2));
    *((_BYTE *)a1 + 584) = 1;
  }
  else if ( *((_BYTE *)a1 + 584) )
  {
    InputTraceLogging::RIM::ReadComplete(a1, a2);
    return WPP_RECORDER_SF_qq(
             gRimLog,
             3u,
             0x15u,
             0xEu,
             (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
             a2,
             *((_QWORD *)a2 + 2));
  }
  else
  {
    v5 = RIMHandleTTMDeviceInput((__int64)a2);
    if ( v5 < 0 )
    {
      v9 = v5;
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0xBu, (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids, v9);
    }
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *((LARGE_INTEGER *)a1 + 89) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 180) = 1;
    RIMArmWatchDog();
    qword_1C01D0C18 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a2 + 60) + 24LL) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        LODWORD(v10) = updated;
        WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0xCu, (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids, v10);
      }
    }
    WPP_RECORDER_SF_qqqq(
      v7,
      v6,
      0x15u,
      0xDu,
      (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
      a1,
      a2,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a1 + 81));
    InputTraceLogging::RIM::ReadComplete(a1, a2);
    *((_DWORD *)a2 + 46) |= 0x40000000u;
    ZwSetEvent(*((HANDLE *)a1 + 81), 0LL);
    result = ZwClose(*((HANDLE *)a1 + 81));
    *((_QWORD *)a1 + 81) = 0LL;
  }
  return result;
}
