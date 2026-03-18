/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C0158078
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C0158050 (DpiFdoDispatchPower.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C001DF00 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01584DC (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01585A0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C015AF90 (DpiFdoInvalidateChildRelations.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C015CF18 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x1C02A9A2C (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapters @ 0x1C02A9AF8 (DpiKsrStopAdapters.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rsi
  __int64 v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _IO_REMOVE_LOCK *v7; // rbx
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  unsigned int LowPart; // eax
  __int64 v16; // rdx
  POWER_STATE v17; // ebx
  __int64 v18; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rax
  int RemlockSize; // [rsp+20h] [rbp-89h]
  char v36; // [rsp+30h] [rbp-79h]
  char v37; // [rsp+31h] [rbp-78h]
  int EaLength; // [rsp+34h] [rbp-75h]
  __int64 v39; // [rsp+38h] [rbp-71h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-69h] BYREF
  PDEVICE_OBJECT v41; // [rsp+48h] [rbp-61h]
  PIO_REMOVE_LOCK RemoveLock; // [rsp+50h] [rbp-59h]
  struct _KEVENT Event; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v44[10]; // [rsp+70h] [rbp-39h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v41 = DeviceObject;
  v37 = 0;
  v5 = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
      {
        v39 = -300000000LL;
        LOBYTE(v5) = 1;
        DpiFdoStopMiracastSession(DeviceObject, v5, &v39, 131LL);
      }
      goto LABEL_4;
    }
    LODWORD(v5) = -1073741637;
    goto LABEL_3;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 6 || !byte_1C00A2C30 )
  {
LABEL_3:
    if ( (_DWORD)v5 == -1073741637 )
    {
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    }
    goto LABEL_4;
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_KsrDisplay__private_propertyCache,
    12075496LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0081C68,
    1,
    RemlockSize);
  v24 = DpiKsrStopAdapters(DeviceObject, Irp);
  if ( v24 != -1073741637 )
  {
    if ( (unsigned int)(dword_1C00A2A88 - 1) <= 1 )
      DpiKsrSetBootGraphicsInformation();
    return v24;
  }
LABEL_4:
  v7 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, File, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
  *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
  v8[-1].FileObject = v8->FileObject;
  v8[-1].Control = 0;
  v9 = Irp->Tail.Overlay.CurrentStackLocation;
  v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v9[-1].Context = &Event;
  v9[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = v10;
  if ( v10 )
  {
    v25 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v25 + 24) = v14;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    LODWORD(v14) = Irp->IoStatus.Status;
    if ( (int)v14 >= 0 )
    {
      if ( CurrentStackLocation->MinorFunction != 2
        || !DeviceExtension[1159]
        || CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1
        || *((_DWORD *)DeviceExtension + 71) == 1 )
      {
        goto LABEL_8;
      }
      Timeout.QuadPart = -150000000LL;
      v27 = KeWaitForSingleObject(DeviceExtension + 1240, Executive, 0, 0, &Timeout);
      v31 = v27;
      if ( v27 == 258 )
      {
        v32 = WdLogNewEntry5_WdError(v29, v28, v30);
        *(_QWORD *)(v32 + 24) = 258LL;
      }
      else
      {
        if ( v27 >= 0 )
        {
          v33 = KeWaitForSingleObject(DeviceExtension + 1264, Executive, 0, 0, 0LL);
          v31 = v33;
          if ( v33 >= 0 )
            goto LABEL_8;
        }
        v32 = WdLogNewEntry5_WdError(v29, v28, v30);
        *(_QWORD *)(v32 + 24) = v31;
      }
      WdLogEvent5_WdError(v32);
LABEL_8:
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( LowPart > 1 )
          *((_DWORD *)DeviceExtension + 70) = LowPart;
      }
      v16 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v17.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v16 + 1312];
      if ( !DeviceExtension[1159] )
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
            if ( !DeviceExtension[1155] || (v36 = 1, (unsigned int)(dword_1C00A2A88 - 4) > 1) )
              v36 = 0;
            if ( v17.SystemState == PowerSystemWorking )
              EaLength = DpiCorrectPowerAction(
                           (__int64)DeviceObject,
                           v16,
                           CurrentStackLocation->Parameters.Create.EaLength);
            if ( v36 && v17.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C00A2AA8 )
            {
              DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00A29E8);
              byte_1C00A2AA8 = 0;
              dword_1C00A2AD4 = 1;
              qword_1C00A2A90 = (__int64)KeGetCurrentThread();
              qword_1C00A2A98 = (__int64)DeviceObject;
            }
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              -1,
              (POWER_STATE)v17.SystemState,
              EaLength);
            if ( v36 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
              {
                byte_1C00A2AA8 = 1;
                LOBYTE(v18) = 1;
                InbvNotifyDisplayOwnershipChange(v18, DpiEnterSystemDisplay);
              }
              else if ( v17.SystemState < *((_DWORD *)DeviceExtension + 71) )
              {
                memset(&dword_1C00A29E8, 0, 0x20uLL);
                dword_1C00A2A00 = -1;
                memset(&xmmword_1C00A2A08, 0, 0x80uLL);
                qword_1C00A2A98 = 0LL;
                qword_1C00A2A90 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
            *((POWER_STATE *)DeviceExtension + 71) = v17;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
            KeLeaveCriticalRegion();
            if ( v17.SystemState == PowerSystemWorking )
            {
              memset(v44, 0, 0x48uLL);
              EtwActivityIdControl(3u, (LPGUID)&v44[1]);
              v44[8] = MEMORY[0xFFFFF78000000014];
              LODWORD(v44[3]) = 11;
              LOBYTE(v44[6]) = -1;
              DpiFdoInvalidateChildRelations(v41, 6LL, v44);
            }
          }
          *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        }
        else
        {
          v37 = 1;
          Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          v20 = PoRequestPowerIrp(
                  DeviceObject,
                  CurrentStackLocation->MinorFunction,
                  v17,
                  (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                  Irp,
                  0LL);
          v14 = v20;
          if ( v20 != 259 )
          {
            v34 = WdLogNewEntry5_WdError(v22, v21, v23);
            *(_QWORD *)(v34 + 24) = v14;
            WdLogEvent5_WdError(v34);
          }
        }
      }
      if ( DeviceExtension[484] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v7 = RemoveLock;
      goto LABEL_32;
    }
    v26 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v26 + 24) = CurrentStackLocation->MinorFunction;
    WdLogEvent5_WdWarning(v26);
  }
LABEL_32:
  if ( (_DWORD)v14 != 259 )
  {
    PoStartNextPowerIrp(Irp);
    Irp->IoStatus.Status = v14;
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx(v7, Irp, 0x20u);
    if ( v37 )
      LODWORD(v14) = 259;
  }
  return v14;
}
