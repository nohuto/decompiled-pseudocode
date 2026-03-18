/*
 * XREFs of PopInitializeDirectedDrips @ 0x1409DC6E0
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400FD4CC (KiInitializeTimer2.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PsCreateSystemThread @ 0x14066AA90 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140671520 (ObReferenceObjectByHandleWithTag.c)
 *     PopInitializeWorkItem @ 0x140729864 (PopInitializeWorkItem.c)
 *     PdcTaskClientRegister @ 0x1407452F0 (PdcTaskClientRegister.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140760350 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEmSettings @ 0x140868594 (PopDirectedDripsQueryEmSettings.c)
 *     PdcNotificationClientRegister @ 0x14089A964 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089AB08 (PdcNotificationClientUnregister.c)
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

  qword_14040E698 = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsDiagList = (__int64)&PopDirectedDripsDiagList;
  qword_1404191F8 = 0LL;
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
  dword_1404191A8 = -1946157056;
  dword_140419180 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  dword_140419184 = (PopDripsCallbackInterval + PopDirectedDripsTimeout - 1) / (unsigned int)PopDripsCallbackInterval;
  v1 = PdcTaskClientRegister(102, &qword_140419198);
  if ( v1 >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 1;
    v4[1] = PopDirectedDripsPdcLpeNotification;
    v4[3] = PopDirectedDripsPdcLpeControlCallback;
    v1 = PdcNotificationClientRegister(v3, (int *)v4, (__int64)&PopDirectedDripsState, &qword_1404191A0);
    if ( v1 >= 0 )
    {
      word_1404190D8 = 1;
      qword_1404190E8 = (__int64)&qword_1404190E0;
      qword_1404190E0 = (__int64)&qword_1404190E0;
      byte_1404190F0 = PopDirectedDripsAction;
      byte_1404190DA = 6;
      dword_1404190DC = 0;
      word_1404190FA = 0;
      KiInitializeTimer2(
        (__int64)&unk_1404190F8,
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
               &qword_1404190D0,
               0LL);
        ZwClose(ThreadHandle);
        if ( v1 >= 0 )
        {
          unk_140419200 = 0;
          dword_140419204 = 0;
          byte_140419208 = 0;
          PopInitializeWorkItem(
            (__int64)&unk_140419210,
            (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
            (__int64)&PopDirectedDripsState);
          dword_140419238 = 0;
          PopDirectedDripsState |= 1u;
        }
      }
    }
  }
LABEL_7:
  result = PopDiagTraceDirectedDripsInitialization(v0, v1);
  if ( v1 < 0 )
  {
    if ( qword_140419198 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_140419198);
      qword_140419198 = 0LL;
    }
    if ( qword_1404191A0 )
    {
      result = PdcNotificationClientUnregister((struct _KTHREAD **)qword_1404191A0);
      qword_1404191A0 = 0LL;
    }
  }
  return result;
}
