/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0146D04
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_i @ 0x1C00AAD24 (WPP_RECORDER_SF_i_ea_1C00AAD24.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C01196E4 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0146DE0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 */

void ndisNblTrackerInitialize(void)
{
  int v0; // edx
  int v1; // r9d
  unsigned __int64 v2; // r8
  unsigned __int64 *PoolWithTag; // rax
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration();
  qword_1C00E6908 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( *(int *)ndisNblTrackerMode >= 2 )
  {
    ndisNblTrackerTimer = (struct _EX_TIMER *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( ndisNblTrackerTimer )
    {
      v4[0] = 0LL;
      v4[1] = -1LL;
      v2 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
      if ( v2 > 0x7FFFFFFF )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 8), v0, v2, v1);
        v2 = 0x7FFFFFFFLL;
      }
      ExSetTimer(ndisNblTrackerTimer, -(__int64)v2, v2, v4);
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            8LL * ndisNblTrackerHistorySize,
                                            0x6B74444Eu);
        ndisNblTrackerHistoryBuffer = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, 8LL * ndisNblTrackerHistorySize);
        else
          *(_DWORD *)ndisNblTrackerMode = 2;
      }
    }
    else
    {
      *(_DWORD *)ndisNblTrackerMode = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v0) = 3;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v0,
          1,
          13,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids);
      }
    }
  }
}
