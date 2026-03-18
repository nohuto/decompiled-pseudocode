/*
 * XREFs of EtwpLogger @ 0x1406ACDA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     EtwpRequestFlushTimer @ 0x1400E28C0 (EtwpRequestFlushTimer.c)
 *     EtwpResetFlushTimer @ 0x1400FD66C (EtwpResetFlushTimer.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C4228 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C5518 (EtwpFlushActiveBuffers.c)
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406ACB80 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406AD1F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406AD314 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406AD46C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406AD680 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     PsTerminateSystemThread @ 0x1406ADC90 (PsTerminateSystemThread.c)
 *     EtwpCreateLogFile @ 0x1406ADF64 (EtwpCreateLogFile.c)
 *     EtwpRealtimeSaveState @ 0x1406AF45C (EtwpRealtimeSaveState.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x1406AF93C (EtwpEventWriteTemplateSessionEnd.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1408F7334 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1408F756C (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpLogger(struct _LIST_ENTRY **StartContext)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // r8
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r15d
  int Logfile; // edi
  int i; // eax
  NTSTATUS v10; // edi
  __int64 v11; // rdx
  bool v12; // si
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // ebp
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r8
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h]
  struct _LIST_ENTRY *v24; // [rsp+80h] [rbp+8h]

  v1 = (__int64)StartContext[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*StartContext);
  v24 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15LL);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  v23 = v1 + 520;
  Object = (PVOID)(v1 + 496);
  if ( !*(_DWORD *)(v1 + 336) )
    goto LABEL_29;
  do
  {
    v4 = 0;
    if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 224) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*(_DWORD *)(v1 + 836) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v1 + 836), 0xAu);
      KeResetEvent((PRKEVENT)(v1 + 496));
      v4 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 4u);
    EtwpAdjustFreeBuffers(v1);
    v7 = *(_DWORD *)(v1 + 836) & 4;
    if ( v7 )
    {
      if ( *(_DWORD *)(v1 + 224) )
        EtwpResetFlushTimer(v1, 1);
      v4 = 1;
    }
    if ( (*(_DWORD *)(v1 + 832) & 4) == 0 )
    {
      EtwpFlushActiveBuffers((unsigned int *)v1, v4, v6);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFF7F);
      v5 = *(_QWORD *)(v1 + 816);
      if ( v5 )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeHeader(v1, v5, v6);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 832), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 832) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 )
        goto LABEL_55;
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 360) && *(_DWORD *)(v1 + 440) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 836) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 56) = 0;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 3) != 0 )
    {
      v12 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v12 = *(_QWORD *)(v1 + 816) == 0LL;
      LOBYTE(v5) = 1;
      v13 = EtwpCreateLogFile(v1, v5);
      *(_DWORD *)(v1 + 56) = v13;
      Logfile = v13;
      if ( v13 < 0 )
      {
        v17 = *(_DWORD *)(v1 + 12);
        if ( (v17 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v18,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v19,
              v1 + 152,
              v1 + 168,
              Logfile,
              v17);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v12 )
        goto LABEL_55;
    }
    Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, v4, v6);
    if ( (*(_DWORD *)(v1 + 836) & 1) != 0 && Logfile >= 0 && !v4 )
      Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, 1LL, v3);
    if ( v7 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFFB);
      *(_DWORD *)(v1 + 56) = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( Logfile < 0 )
    {
LABEL_55:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
      {
        LODWORD(WaitBlockArray) = *(_DWORD *)(v1 + 60);
        EtwpEventWriteTemplateSessionEnd(
          v1 + 168,
          v14,
          v15,
          v1 + 152,
          v1 + 168,
          Logfile,
          *(_DWORD *)(v1 + 12),
          WaitBlockArray,
          Object,
          v23);
      }
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = v24;
LABEL_29:
  for ( i = EtwpFlushActiveBuffers((unsigned int *)v1, 1LL, v3); ; i = EtwpFlushActiveBuffers(
                                                                         (unsigned int *)v1,
                                                                         1LL,
                                                                         v20) )
  {
    v10 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v10 = 0, *(_QWORD *)(v1 + 376)) )
        v10 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 248) <= 0 || *(_DWORD *)(v1 + 248) <= *(_DWORD *)(v1 + 244) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 496), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v11 = *(_QWORD *)(v1 + 816);
  if ( v11 )
  {
    EtwpFinalizeHeader(v1, v11, 0LL);
    ZwClose(*(HANDLE *)(v1 + 816));
    *(_QWORD *)(v1 + 816) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 376) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 376));
    *(_QWORD *)(v1 + 376) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v10;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v10 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v16, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  PsTerminateSystemThread(v10);
}
