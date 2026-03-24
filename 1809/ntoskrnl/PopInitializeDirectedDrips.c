/*
 * XREFs of PopInitializeDirectedDrips @ 0x1409DC6E0
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400FD4EC (KiInitializeTimer2.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PsCreateSystemThread @ 0x14066AA70 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140671500 (ObReferenceObjectByHandleWithTag.c)
 *     PopInitializeWorkItem @ 0x140729844 (PopInitializeWorkItem.c)
 *     PdcTaskClientRegister @ 0x1407452D0 (PdcTaskClientRegister.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140760330 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEmSettings @ 0x140868574 (PopDirectedDripsQueryEmSettings.c)
 *     PdcNotificationClientRegister @ 0x14089A944 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089AAE8 (PdcNotificationClientUnregister.c)
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

  qword_14040E6A8 = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsDiagList = (__int64)&PopDirectedDripsDiagList;
  qword_1404191D8 = 0LL;
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
  dword_140419188 = -1946157056;
  dword_140419160 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  dword_140419164 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  v1 = PdcTaskClientRegister(102, &qword_140419178);
  if ( v1 >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 1;
    v4[1] = PopDirectedDripsPdcLpeNotification;
    v4[3] = PopDirectedDripsPdcLpeControlCallback;
    v1 = PdcNotificationClientRegister(v3, (int *)v4, (__int64)&PopDirectedDripsState, &qword_140419180);
    if ( v1 >= 0 )
    {
      word_1404190B8 = 1;
      qword_1404190C8 = (__int64)&qword_1404190C0;
      qword_1404190C0 = (__int64)&qword_1404190C0;
      byte_1404190D0 = PopDirectedDripsAction;
      byte_1404190BA = 6;
      dword_1404190BC = 0;
      word_1404190DA = 0;
      KiInitializeTimer2(
        (__int64)&unk_1404190D8,
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
               &qword_1404190B0,
               0LL);
        ZwClose(ThreadHandle);
        if ( v1 >= 0 )
        {
          unk_1404191E0 = 0;
          dword_1404191E4 = 0;
          byte_1404191E8 = 0;
          PopInitializeWorkItem(
            (__int64)&unk_1404191F0,
            (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
            (__int64)&PopDirectedDripsState);
          dword_140419218 = 0;
          PopDirectedDripsState |= 1u;
        }
      }
    }
  }
LABEL_7:
  result = PopDiagTraceDirectedDripsInitialization(v0, v1);
  if ( v1 < 0 )
  {
    if ( qword_140419178 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_140419178);
      qword_140419178 = 0LL;
    }
    if ( qword_140419180 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_140419180);
      qword_140419180 = 0LL;
    }
  }
  return result;
}
