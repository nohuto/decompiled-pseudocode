/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C0142048
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C0142020 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C001E0C0 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01426D0 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0144B80 (DpiFdoInvalidateChildRelations.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0145794 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  IRP *v5; // r12
  int v6; // ebx
  struct _IO_REMOVE_LOCK *v7; // rbx
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  NTSTATUS v22; // eax
  unsigned int LowPart; // eax
  __int64 v24; // rdx
  POWER_STATE v25; // ebx
  char v26; // di
  __int64 v27; // rcx
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  int RemlockSize; // [rsp+20h] [rbp-79h]
  char v32; // [rsp+30h] [rbp-69h]
  int EaLength; // [rsp+34h] [rbp-65h]
  __int64 v35; // [rsp+40h] [rbp-59h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp-51h] BYREF
  struct _IO_REMOVE_LOCK *v37; // [rsp+50h] [rbp-49h]
  struct _KEVENT Event; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v39[10]; // [rsp+70h] [rbp-29h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v5 = Context;
  v6 = 0;
  v32 = 0;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 6 && byte_1C008EC30 )
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_KsrDisplay__private_propertyCache,
        12075496LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00702B8,
        0,
        RemlockSize);
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
      {
        v35 = -300000000LL;
        LOBYTE(Context) = 1;
        DpiFdoStopMiracastSession(DeviceObject, Context, &v35, 131LL);
      }
      goto LABEL_6;
    }
    v6 = -1073741637;
  }
  if ( v6 == -1073741637 )
  {
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v5);
  }
LABEL_6:
  v7 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  v37 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v5, File, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = v5->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
  *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
  v8[-1].FileObject = v8->FileObject;
  v8[-1].Control = 0;
  v9 = v5->Tail.Overlay.CurrentStackLocation;
  v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v9[-1].Context = &Event;
  v9[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v5);
  v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = v10;
  if ( v10 )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
    goto LABEL_57;
  }
  LODWORD(v14) = v5->IoStatus.Status;
  if ( (int)v14 >= 0 )
  {
    if ( CurrentStackLocation->MinorFunction != 2
      || !DeviceExtension[1151]
      || CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1
      || *((_DWORD *)DeviceExtension + 71) == 1 )
    {
      goto LABEL_26;
    }
    Timeout.QuadPart = -150000000LL;
    v18 = KeWaitForSingleObject(DeviceExtension + 1168, Executive, 0, 0, &Timeout);
    v20 = v18;
    if ( v18 == 258 )
    {
      v21 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v21 + 24) = 258LL;
    }
    else
    {
      if ( v18 >= 0 )
      {
        v22 = KeWaitForSingleObject(DeviceExtension + 1192, Executive, 0, 0, 0LL);
        v20 = v22;
        if ( v22 >= 0 )
          goto LABEL_26;
      }
      v21 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v21 + 24) = v20;
    }
    WdLogEvent5_WdError(v21);
LABEL_26:
    KeEnterCriticalRegion();
    if ( DeviceExtension[483] )
    {
      DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    }
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart > 1 )
        *((_DWORD *)DeviceExtension + 70) = LowPart;
    }
    v24 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v25.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v24 + 1240];
    if ( !DeviceExtension[1151] )
    {
      if ( DeviceExtension[480] )
      {
        LODWORD(v14) = 0;
        if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
          && *((_DWORD *)DeviceExtension + 5) == 2
          && *((_DWORD *)DeviceExtension + 59) == 2
          && CurrentStackLocation->MinorFunction == 2 )
        {
          EaLength = CurrentStackLocation->Parameters.Create.EaLength;
          if ( !DeviceExtension[1147] || (v26 = 1, (unsigned int)(dword_1C008EA88 - 4) > 1) )
            v26 = 0;
          if ( v25.SystemState == PowerSystemWorking )
            EaLength = DpiCorrectPowerAction(
                         (__int64)DeviceObject,
                         v24,
                         CurrentStackLocation->Parameters.Create.EaLength);
          if ( v26 && v25.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C008EAA8 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C008E9E8);
            byte_1C008EAA8 = 0;
            dword_1C008EAD4 = 1;
            qword_1C008EA90 = (__int64)KeGetCurrentThread();
            qword_1C008EA98 = (__int64)DeviceObject;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)v25.SystemState,
            EaLength);
          if ( v26 )
          {
            if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
            {
              byte_1C008EAA8 = 1;
              LOBYTE(v27) = 1;
              InbvNotifyDisplayOwnershipChange(v27, DpiEnterSystemDisplay);
            }
            else if ( v25.SystemState < *((_DWORD *)DeviceExtension + 71) )
            {
              memset(&dword_1C008E9E8, 0, 0x20uLL);
              dword_1C008EA00 = -1;
              memset(&xmmword_1C008EA08, 0, 0x80uLL);
              qword_1C008EA98 = 0LL;
              qword_1C008EA90 = (__int64)KeGetCurrentThread();
            }
          }
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3688), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = v25;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3688));
          KeLeaveCriticalRegion();
          if ( v25.SystemState == PowerSystemWorking )
          {
            memset(v39, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v39[1]);
            v39[8] = MEMORY[0xFFFFF78000000014];
            LODWORD(v39[3]) = 11;
            LOBYTE(v39[6]) = -1;
            DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v39);
          }
        }
        *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      }
      else
      {
        v32 = 1;
        v5->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        v28 = PoRequestPowerIrp(
                DeviceObject,
                CurrentStackLocation->MinorFunction,
                v25,
                (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                v5,
                0LL);
        v14 = v28;
        if ( v28 != 259 )
        {
          v30 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v30 + 24) = v14;
          WdLogEvent5_WdError(v30);
        }
      }
    }
    if ( DeviceExtension[483] )
    {
      DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    }
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    v7 = v37;
    goto LABEL_57;
  }
  v17 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v17 + 24) = CurrentStackLocation->MinorFunction;
  WdLogEvent5_WdWarning(v17);
LABEL_57:
  if ( (_DWORD)v14 != 259 )
  {
    PoStartNextPowerIrp(v5);
    v5->IoStatus.Status = v14;
    IofCompleteRequest(v5, 0);
    IoReleaseRemoveLockEx(v7, v5, 0x20u);
    if ( v32 )
      LODWORD(v14) = 259;
  }
  return v14;
}
