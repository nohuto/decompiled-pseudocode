/*
 * XREFs of UserPowerStateCallout @ 0x1C006518C
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C0065410 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0066E1C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  unsigned int v1; // edi
  char v2; // bp
  unsigned int v3; // ebx
  int v4; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v1 = *((_DWORD *)a1 + 4);
  v2 = *a1;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3);
  v13 = 0LL;
  v14 = 0LL;
  if ( !v1 )
    return UserSessionSwitchBlock_Start();
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( gbPendingMonitorOn )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      v14 = gPendingMonitorOnReason;
      gbPendingMonitorOn = 0;
      v13 = 4LL;
      gPendingMonitorOnReason = 0;
      QueuePowerRequest(&v13, 0LL);
    }
    return 0LL;
  }
  else
  {
    if ( gbVideoInitialized && gbPowerCalloutsReady && gWinLogonRpcHandle )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( v1 != 1 )
      {
        if ( (gPowerState & 1) != 0 )
        {
          if ( !v2 )
          {
            if ( v1 != 8 )
            {
              if ( v1 == 2 || v1 == 13 )
                dword_1C0210C1C = *((_DWORD *)a1 + 5);
LABEL_12:
              Arg0 = v1;
              ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
              LOBYTE(v8) = 1;
              return QueuePowerRequest(0LL, v8);
            }
            Event = 0LL;
            gPowerState &= ~1u;
          }
        }
        else
        {
          v3 = -1073741823;
        }
        goto LABEL_24;
      }
      if ( v2 )
      {
        if ( (gPowerState & 1) != 0 )
        {
LABEL_15:
          gPowerState |= 1u;
          gPowerState = v7 & 4 | gPowerState & 0xFFFFFFFB;
          gPowerState = gPowerState & 0xFFFFFFFD | (v7 >> 30) & 2;
          gPowerState = (8 * (v7 & 1)) | gPowerState & 0xFFFFFFF7;
          dword_1C0210C08 = v4;
          gPowerState = (8 * (v7 & 2)) | gPowerState & 0xFFFFFFEF;
          dword_1C0210C0C = v6;
          dword_1C0210C10 = v7;
          if ( (gPowerState & 4) != 0 )
            dword_1C0210BE4 = 40;
          if ( (gPowerState & 2) != 0 )
            dword_1C0210BE4 = 9;
          if ( Event )
            KeSetEvent(Event, 1, 0);
          if ( !v2 )
            goto LABEL_12;
          goto LABEL_24;
        }
      }
      else if ( (gPowerState & 1) == 0 )
      {
        goto LABEL_15;
      }
      v3 = -1073741811;
LABEL_24:
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      return v3;
    }
    return 3221225473LL;
  }
}
