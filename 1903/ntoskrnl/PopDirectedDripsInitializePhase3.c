/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140A08E50
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A06DD0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x1405B1B5C (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 *     PdcTaskClientRegister @ 0x14075B038 (PdcTaskClientRegister.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x14075B1D4 (PopDiagTraceDirectedDripsInitialization.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408A48C8 (PopDirectedDripsQueryEmSettings.c)
 *     PdcNotificationClientRegister @ 0x1408D94E0 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x1408D9608 (PdcNotificationClientUnregister.c)
 */

__int64 __fastcall PopDirectedDripsInitializePhase3(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 (__fastcall *v4)(); // r8
  _QWORD v6[4]; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+67h] BYREF
  char v9; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+77h] BYREF

  v8 = a1;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !PopDirectedDripsOverride )
  {
    v1 = 2;
LABEL_26:
    v3 = -1073741637;
    goto LABEL_27;
  }
  if ( PopDirectedDripsOverride == -1 )
  {
    if ( !BYTE6(PopCapabilities) )
    {
      v1 = 3;
      goto LABEL_26;
    }
    if ( !PopPlatformAoAc )
    {
      v1 = 6;
      goto LABEL_26;
    }
    PopDirectedDripsQueryEmSettings((char *)&v8);
    if ( (_BYTE)v8 )
    {
      v1 = 4;
      goto LABEL_26;
    }
    if ( !PopDripsCallbackInterval )
    {
      v1 = 5;
      goto LABEL_26;
    }
    if ( PopDirectedDripsTimeout < (unsigned int)PopDripsCallbackInterval
      || PopDirectedDripsTimeout > (unsigned int)PopDripsWatchdogTimeout )
    {
      v1 = 8;
      goto LABEL_26;
    }
    v1 = 0;
  }
  else
  {
    v1 = 1;
  }
  v3 = PdcTaskClientRegister(102, &qword_140444B00);
  if ( v3 >= 0 )
  {
    v6[0] = 1LL;
    v6[1] = PopDirectedDripsPdcLpeNotification;
    v6[2] = 0LL;
    v6[3] = PopDirectedDripsPdcLpeControlCallback;
    v3 = PdcNotificationClientRegister(v2, (__int64)v6, v4, &qword_140444B08);
    if ( v3 >= 0 )
    {
      dword_140444AF0 = PopDirectedDripsAction;
      PopDirectedDripsQueryEmPS4DisableSetting(&v9);
      if ( v9 )
        dword_140444AF0 &= ~2u;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_DirectedFx__private_propertyCache,
        19857486LL,
        (__int64)&Feature_PPLEnforcement_logged_traits,
        0,
        3);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = PsCreateSystemThread(
             &ThreadHandle,
             0,
             &ObjectAttributes,
             0LL,
             0LL,
             (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
             PopDirectedDripsState);
      if ( v3 >= 0 )
      {
        v3 = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               0x1FFFFFu,
               (POBJECT_TYPE)PsThreadType,
               0,
               0x67446F50u,
               &qword_140444AD0,
               0LL);
        ZwClose(ThreadHandle);
        if ( v3 >= 0 )
        {
          if ( (unsigned int)PopDirectedDripsDfxEnforcementPolicy >= 3 )
            PopDirectedDripsDfxEnforcementPolicy = 1;
          v3 = 0;
          PopDirectedDripsState[0] |= 1u;
        }
      }
    }
  }
LABEL_27:
  PopDiagTraceDirectedDripsInitialization(v1, v3);
  if ( v3 < 0 )
  {
    if ( qword_140444B00 )
    {
      PdcNotificationClientUnregister((char *)qword_140444B00);
      qword_140444B00 = 0LL;
    }
    if ( qword_140444B08 )
    {
      PdcNotificationClientUnregister((char *)qword_140444B08);
      qword_140444B08 = 0LL;
    }
  }
  return (unsigned int)v3;
}
