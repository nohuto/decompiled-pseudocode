/*
 * XREFs of UserPowerStateCallout @ 0x1C00A54D0
 * Callers:
 *     W32CalloutDispatch @ 0x1C005A060 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C006DA70 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00A1084 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00A1208 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  char v3; // bp
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0;
  v3 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3);
  if ( !v1 )
    return UserSessionSwitchBlock_Start();
  if ( v1 != 7 )
  {
    if ( !gbVideoInitialized || !gbPowerCalloutsReady || !gWinLogonRpcHandle )
      return 3221225473LL;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    if ( v1 == 1 )
    {
      if ( v3 )
      {
        if ( (gPowerState & 1) != 0 )
          goto LABEL_15;
      }
      else if ( (gPowerState & 1) == 0 )
      {
LABEL_15:
        gPowerState |= 1u;
        gPowerState = v7 & 4 | gPowerState & 0xFFFFFFFB;
        gPowerState = gPowerState & 0xFFFFFFFD | (v7 >> 30) & 2;
        gPowerState = (8 * (v7 & 1)) | gPowerState & 0xFFFFFFF7;
        dword_1C01A3028 = v5;
        gPowerState = (8 * (v7 & 2)) | gPowerState & 0xFFFFFFEF;
        dword_1C01A302C = v6;
        dword_1C01A3030 = v7;
        if ( (gPowerState & 4) != 0 )
          dword_1C01A3004 = 40;
        if ( (gPowerState & 2) != 0 )
          dword_1C01A3004 = 9;
        if ( Event )
          KeSetEvent(Event, 1, 0);
        if ( v3 )
          goto LABEL_22;
LABEL_32:
        Arg0 = v1;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        return QueuePowerRequest(0LL, 1);
      }
      v2 = -1073741811;
    }
    else if ( (gPowerState & 1) != 0 )
    {
      if ( !v3 )
      {
        if ( v1 != 8 )
        {
          if ( v1 == 2 )
            dword_1C01A303C = *((_DWORD *)a1 + 5);
          goto LABEL_32;
        }
        Event = 0LL;
        gPowerState &= ~1u;
      }
    }
    else
    {
      v2 = -1073741823;
    }
LABEL_22:
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    return v2;
  }
  UserSessionSwitchBlock_End();
  if ( gbPendingMonitorOn )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    gbPendingMonitorOn = 0;
    *((_QWORD *)&v11 + 1) = gPendingMonitorOnReason;
    *(_QWORD *)&v11 = 4LL;
    gPendingMonitorOnReason = 0;
    QueuePowerRequest(&v11, 0);
  }
  return 0LL;
}
