/*
 * XREFs of WheaLogInternalEvent @ 0x140199660
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1402953B0 (IoSaveBugCheckProgress.c)
 *     WheaReportHwError @ 0x14033FCD0 (WheaReportHwError.c)
 *     WheapAttemptErrorRecovery @ 0x140340378 (WheapAttemptErrorRecovery.c)
 *     WheapSendErrorRecordTelemetry @ 0x14034081C (WheapSendErrorRecordTelemetry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x140341124 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140341920 (WheapLogIpmiSELEventHighIrql.c)
 *     WheapLogInitEvent @ 0x14077DCC0 (WheapLogInitEvent.c)
 *     WheapEtwEnableCallback @ 0x1407895E0 (WheapEtwEnableCallback.c)
 *     WheaAddErrorSource @ 0x140919650 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1409198D0 (WheaRemoveErrorSource.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140919F1C (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x14091A1B0 (WheapClearPoison.c)
 *     WheapLogPolicyTelemetry @ 0x14091A66C (WheapLogPolicyTelemetry.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14091AD60 (WheapPfaLogPageMonitorRemoval.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     WheaTelemetryLogOscImplemented @ 0x14019977C (WheaTelemetryLogOscImplemented.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     WheaTelemetryLogErrorInjection @ 0x140341BA8 (WheaTelemetryLogErrorInjection.c)
 *     WheaTelemetryLogErrorRecord @ 0x140341D1C (WheaTelemetryLogErrorRecord.c)
 *     WheaTelemetryLogErrorSourceAddRemove @ 0x14034214C (WheaTelemetryLogErrorSourceAddRemove.c)
 *     WheaTelemetryLogInfo @ 0x140342294 (WheaTelemetryLogInfo.c)
 *     WheaTelemetryLogPFAMemoryMonitorRemoved @ 0x14034234C (WheaTelemetryLogPFAMemoryMonitorRemoved.c)
 *     WheaTelemetryLogPFAMemoryOfflined @ 0x14034247C (WheaTelemetryLogPFAMemoryOfflined.c)
 *     WheaTelemetryLogPFAPolicy @ 0x140342584 (WheaTelemetryLogPFAPolicy.c)
 *     WheaSelLogEvent @ 0x140343094 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v2; // rdi
  int v3; // eax
  LONG result; // eax
  int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // esi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  const char *v10; // rcx
  __int64 v11; // rax
  _QWORD InputBuffer[4]; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  char *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  char *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  char *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  char *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  _DWORD *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]

  if ( WheapEventingInitialized )
  {
    v2 = Src + 6;
    v3 = Src[6];
    if ( (v3 & 2) != 0 )
    {
      v22 = Src;
      UserData.Ptr = (ULONGLONG)(Src + 3);
      *(_QWORD *)&UserData.Size = 4LL;
      v14 = (char *)(Src + 4);
      v15 = 4LL;
      v16 = (char *)(Src + 5);
      v17 = 4LL;
      v20 = (char *)(Src + 2);
      v23 = Src[2];
      v18 = (char *)(Src + 6);
      v19 = 4LL;
      v21 = 4LL;
      v24 = 0;
      EtwWriteEx((REGHANDLE)WheapDispatchPtr.DeviceExtension, &EVENT_WHEA_LOG_ENTRY, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      v3 = Src[6];
    }
    if ( (v3 & 1) == 0 )
      goto LABEL_5;
    v5 = Src[5];
    switch ( v5 )
    {
      case -2147483638:
        WheaTelemetryLogOscImplemented(Src);
        goto LABEL_5;
      case -2147483646:
        v10 = "Whea Initialized";
        break;
      case -2147483642:
        WheaTelemetryLogPFAMemoryOfflined(Src);
        goto LABEL_5;
      case -2147483641:
        WheaTelemetryLogPFAMemoryMonitorRemoved(Src);
        goto LABEL_5;
      case -2147483640:
        WheaTelemetryLogPFAPolicy(Src);
        goto LABEL_5;
      case -2147483639:
        WheaTelemetryLogErrorInjection(Src);
        goto LABEL_5;
      case -2147483636:
        WheaTelemetryLogErrorSourceAddRemove(Src);
        goto LABEL_5;
      case -2147483626:
        WheaTelemetryLogErrorRecord(Src);
        goto LABEL_5;
      case -2147483625:
        v10 = "Attempted to send too many records via telemetry.  Stopping error record telemetry for the next second.";
        break;
      default:
LABEL_5:
        result = *v2;
        if ( (*v2 & 4) != 0 )
        {
          v11 = (unsigned int)Src[2];
          InputBuffer[2] = 0LL;
          InputBuffer[3] = 15LL;
          InputBuffer[0] = Src;
          InputBuffer[1] = v11;
          NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
          result = Src[6];
        }
        if ( (result & 8) != 0 )
          return WheaSelLogEvent(Src);
        return result;
    }
    WheaTelemetryLogInfo(v10);
    goto LABEL_5;
  }
  KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
  v6 = (unsigned int)Src[7];
  v7 = v6 + WheapDeferredEventTotalBytes + 48;
  if ( v7 < 0x1000 )
  {
    v8 = (_QWORD *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
    memmove(v8 + 2, Src, v6 + 32);
    v9 = (_QWORD *)qword_14042DA88;
    WheapDeferredEventTotalBytes = v7;
    if ( *(__int64 **)qword_14042DA88 != &WheapDeferredInternalLogs )
      __fastfail(3u);
    *v8 = &WheapDeferredInternalLogs;
    v8[1] = v9;
    *v9 = v8;
    qword_14042DA88 = (__int64)v8;
  }
  return KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
}
