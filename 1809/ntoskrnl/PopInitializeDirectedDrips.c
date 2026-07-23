/*
 * XREFs of PopInitializeDirectedDrips @ 0x1409DD6E0
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400FD56C (KiInitializeTimer2.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 *     PopInitializeWorkItem @ 0x14072AA34 (PopInitializeWorkItem.c)
 *     PdcTaskClientRegister @ 0x1407464C0 (PdcTaskClientRegister.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140761520 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408697D4 (PopDirectedDripsQueryEmSettings.c)
 *     PdcNotificationClientRegister @ 0x14089BBA4 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089BD48 (PdcNotificationClientUnregister.c)
 */

char PopInitializeDirectedDrips()
{
  int v0; // ebx
  int v1; // edi
  char result; // al
  __int64 v3; // rcx
  _QWORD v4[4]; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  char v6; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  qword_14040F708 = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsDiagList = (__int64)&PopDirectedDripsDiagList;
  qword_14041A2B8 = 0LL;
  PopDirectedDripsDiagLock = 0LL;
  if ( !PopDirectedDripsOverride )
  {
    v0 = 2;
    goto LABEL_6;
  }
  if ( PopDirectedDripsOverride == -1 )
  {
    if ( !BYTE6(PopCapabilities) )
    {
      v0 = 3;
      goto LABEL_6;
    }
    if ( !PopPlatformAoAc )
    {
      v0 = 6;
LABEL_6:
      v1 = -1073741637;
      goto LABEL_7;
    }
    PopDirectedDripsQueryEmSettings(&v6);
    if ( v6 )
    {
      v0 = 4;
      goto LABEL_6;
    }
    if ( !PopDripsCallbackInterval )
    {
      v0 = 5;
      goto LABEL_6;
    }
    if ( PopDirectedDripsTimeout < (unsigned int)PopDripsCallbackInterval
      || PopDirectedDripsTimeout > (unsigned int)PopDripsWatchdogTimeout )
    {
      v0 = 8;
      goto LABEL_6;
    }
    v0 = 0;
  }
  else
  {
    v0 = 1;
  }
  dword_14041A268 = -1946157056;
  dword_14041A240 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  dword_14041A244 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  v1 = PdcTaskClientRegister(102, &qword_14041A258);
  if ( v1 >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 1;
    v4[1] = PopDirectedDripsPdcLpeNotification;
    v4[3] = PopDirectedDripsPdcLpeControlCallback;
    v1 = PdcNotificationClientRegister(v3, (int *)v4, (__int64)&PopDirectedDripsState, &qword_14041A260);
    if ( v1 >= 0 )
    {
      word_14041A198 = 1;
      qword_14041A1A8 = (__int64)&qword_14041A1A0;
      qword_14041A1A0 = (__int64)&qword_14041A1A0;
      byte_14041A1B0 = PopDirectedDripsAction;
      byte_14041A19A = 6;
      dword_14041A19C = 0;
      word_14041A1BA = 0;
      KiInitializeTimer2(
        (__int64)&unk_14041A1B8,
        (__int64)PopDirectedDripsTimerCallbackRoutine,
        (__int64)&PopDirectedDripsState,
        8);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v1 = PsCreateSystemThread(
             &ThreadHandle,
             0,
             &ObjectAttributes,
             0LL,
             0LL,
             (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
             &PopDirectedDripsState);
      if ( v1 >= 0 )
      {
        v1 = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               0x1FFFFFu,
               (POBJECT_TYPE)PsThreadType,
               0,
               0x67446F50u,
               &qword_14041A190,
               0LL);
        ZwClose(ThreadHandle);
        if ( v1 >= 0 )
        {
          unk_14041A2C0 = 0;
          dword_14041A2C4 = 0;
          byte_14041A2C8 = 0;
          PopInitializeWorkItem(
            (__int64)&unk_14041A2D0,
            (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
            (__int64)&PopDirectedDripsState);
          dword_14041A2F8 = 0;
          PopDirectedDripsState |= 1u;
        }
      }
    }
  }
LABEL_7:
  result = PopDiagTraceDirectedDripsInitialization(v0, v1);
  if ( v1 < 0 )
  {
    if ( qword_14041A258 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_14041A258);
      qword_14041A258 = 0LL;
    }
    if ( qword_14041A260 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_14041A260);
      qword_14041A260 = 0LL;
    }
  }
  return result;
}
