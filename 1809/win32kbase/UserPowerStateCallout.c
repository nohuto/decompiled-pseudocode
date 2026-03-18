/*
 * XREFs of UserPowerStateCallout @ 0x1C00965B0
 * Callers:
 *     W32CalloutDispatch @ 0x1C0025DE0 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C0096830 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00972E0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  char v3; // bp
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0;
  v3 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3);
  if ( !v1 )
    return UserSessionSwitchBlock_Start();
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( gbPendingMonitorOn )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      gbPendingMonitorOn = 0;
      v13[1] = gPendingMonitorOnReason;
      v13[0] = 4LL;
      gPendingMonitorOnReason = 0;
      QueuePowerRequest(v13, 0LL);
    }
    return 0LL;
  }
  else
  {
    if ( gbPowerCalloutsReady && gbVideoInitialized && gWinLogonRpcHandle )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( v1 != 1 )
      {
        if ( (gPowerState & 1) != 0 )
        {
          if ( !v3 )
          {
            if ( v1 != 8 )
            {
              if ( v1 == 2 )
                dword_1C01CE19C = *((_DWORD *)a1 + 5);
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
          v2 = -1073741823;
        }
        goto LABEL_27;
      }
      if ( v3 )
      {
        if ( (gPowerState & 1) != 0 )
        {
LABEL_18:
          gPowerState |= 1u;
          gPowerState = v7 & 4 | gPowerState & 0xFFFFFFFB;
          gPowerState = gPowerState & 0xFFFFFFFD | (v7 >> 30) & 2;
          gPowerState = (8 * (v7 & 1)) | gPowerState & 0xFFFFFFF7;
          dword_1C01CE188 = v5;
          gPowerState = (8 * (v7 & 2)) | gPowerState & 0xFFFFFFEF;
          dword_1C01CE18C = v6;
          dword_1C01CE190 = v7;
          if ( (gPowerState & 4) != 0 )
            dword_1C01CE164 = 40;
          if ( (gPowerState & 2) != 0 )
            dword_1C01CE164 = 9;
          if ( Event )
            KeSetEvent(Event, 1, 0);
          if ( !v3 )
            goto LABEL_12;
          goto LABEL_27;
        }
      }
      else if ( (gPowerState & 1) == 0 )
      {
        goto LABEL_18;
      }
      v2 = -1073741811;
LABEL_27:
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      return v2;
    }
    return 3221225473LL;
  }
}
