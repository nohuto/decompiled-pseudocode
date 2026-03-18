/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C01428E0
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C0142020 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F748 (DpiDisableD3Requests.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0043A1C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54 (DxgkIgnoreCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0141C00 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C014314C (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0145794 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiFdoIsDevicePresent @ 0x1C02662CC (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C02668C8 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0273008 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C0273198 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C0273A8C (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v3; // r12
  int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v8; // r14
  struct _IO_STACK_LOCATION *v9; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 LowPart; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  CCHAR v20; // dl
  __int64 v21; // rdx
  int IsDevicePresent; // eax
  __int64 LowPart_low; // rcx
  __int64 v24; // r14
  char v25; // al
  _QWORD *v26; // rax
  char v27; // al
  int v28; // eax
  struct _DEVICE_OBJECT *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  POWER_STATE v35; // ebx
  int v36; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  bool v39; // [rsp+90h] [rbp+8h]
  union _LARGE_INTEGER v40; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  v39 = 0;
  LODWORD(Status) = 0;
  v8 = 0;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v8 = (int)LowPart > 1;
    v39 = (int)LowPart > 1;
    v17 = (_QWORD *)WdLogNewEntry5_WdPower();
    v17[3] = DeviceObject->DeviceExtension;
    v17[4] = LowPart;
    v17[5] = DeviceExtension[71];
    WdLogEvent5_WdPower(v17);
    if ( (int)LowPart > 1
      && (!*((_BYTE *)DeviceExtension + 481)
       || (unsigned int)DeviceExtension[70] > 1
       || *((_BYTE *)DeviceExtension + 482)) )
    {
      v40.QuadPart = -300000000LL;
      DpiFdoStopMiracastSession((__int64)DeviceObject, 1, &v40, 0x83u);
    }
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 483) )
    {
      DxgkIgnoreCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), v18);
      DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
    }
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( (int)LowPart <= DeviceExtension[71]
      || (!DeviceExtension[126]
        ? (v19 = DpiFdoSetAdapterPowerState(
                   DeviceObject,
                   (POWER_STATE)LowPart,
                   (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                   HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                   CurrentStackLocation->Parameters.Create.EaLength))
        : (v19 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp)),
          LODWORD(Status) = v19,
          v19 >= 0) )
    {
      if ( (int)LowPart <= 1 )
        KeSetEvent((PRKEVENT)(DeviceExtension + 292), 0, 0);
      else
        *((_BYTE *)DeviceExtension + 496) = 1;
    }
    if ( *((_BYTE *)DeviceExtension + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    }
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    if ( (_DWORD)Status != -1073741637 )
    {
      if ( (int)Status < 0 )
      {
        PoStartNextPowerIrp(Irp);
        v20 = 0;
        Irp->IoStatus.Status = Status;
LABEL_103:
        IofCompleteRequest(Irp, v20);
        return (unsigned int)Status;
      }
LABEL_3:
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v9 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
      *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v9[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v9->Parameters.SetQuota + 6);
      v9[-1].FileObject = v9->FileObject;
      v9[-1].Control = 0;
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v10[-1].Context = &Event;
      v10[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v11;
      if ( !v11 )
      {
        Status = Irp->IoStatus.Status;
        if ( (_DWORD)Status == -1073741810 )
        {
          v13 = 0LL;
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v14[3] = DpiFdoHandleDevicePower;
          v14[4] = DeviceObject;
          v14[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          v14[6] = -1073741810LL;
          WdLogEvent5_WdError(v14);
          if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
          {
            v13 = (__int64)DeviceExtension;
          }
          else
          {
            v15 = *((_QWORD *)DeviceExtension + 332);
            if ( v15 )
              v13 = *(_QWORD *)(v15 + 64);
          }
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 483) )
          {
            DxgkIgnoreCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), v21);
            DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
          }
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v40);
          LowPart_low = LOBYTE(v40.LowPart);
          if ( IsDevicePresent < 0 )
            LowPart_low = 0LL;
          v40.LowPart = LowPart_low;
          if ( !(_BYTE)LowPart_low )
            *((_BYTE *)DeviceExtension + 1160) = 1;
          if ( DeviceExtension[59] == 6 )
          {
            if ( v8 || !*((_QWORD *)DeviceExtension + 61) )
              goto LABEL_69;
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v13, 0, 1);
          }
          else if ( v13 )
          {
            if ( !(_BYTE)LowPart_low || (*(_BYTE *)(v13 + 3800) & 0x18) != 0 )
            {
              v24 = *((_QWORD *)DeviceExtension + 5);
              if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
              {
                if ( *((_BYTE *)DeviceExtension + 481) )
                {
                  if ( (unsigned int)DeviceExtension[70] <= 1 && !*((_BYTE *)DeviceExtension + 482) )
                  {
                    v25 = *(_BYTE *)(v13 + 3800);
                    if ( (v25 & 0x10) == 0 && ((v25 & 8) == 0 || *(int *)(v13 + 3808) < 0x2000) )
                    {
                      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(LowPart_low);
                      v26[3] = 275LL;
                      v26[4] = 25LL;
                      v26[5] = 2LL - (*((_BYTE *)DeviceExtension + 1144) != 0);
                      v26[6] = (unsigned int)DeviceExtension[279];
                      v26[7] = (unsigned int)DeviceExtension[280];
                      WdLogEvent5_WdCriticalError(v26);
                    }
                  }
                }
              }
              if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v24, *((_QWORD *)DeviceExtension + 6), v13, 0LL) >= 0
                || (*(_BYTE *)(v13 + 3800) & 0x10) != 0 )
              {
                v3 = 1;
              }
              v27 = *((_BYTE *)DeviceExtension + 1144);
              if ( v27 || !v3 )
                DpiFdoRebootForSurpriseRemoval(DeviceObject, v27 != 0 ? 1 : 3);
            }
            else
            {
              v3 = 1;
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 3688), 1u);
            if ( !v3 )
              *((_BYTE *)DeviceExtension + 1161) = 1;
            DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
            v28 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v28;
            DeviceExtension[59] = 6;
            ExReleaseResourceLite((PERESOURCE)(v13 + 3688));
            KeLeaveCriticalRegion();
            v8 = v39;
            if ( !v39 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v13, 0, 1);
            DpiRequestIoPowerState(*(_QWORD *)(v13 + 24), 4LL);
            if ( (int *)v13 != DeviceExtension )
            {
              v29 = *(struct _DEVICE_OBJECT **)(v13 + 152);
              *(_BYTE *)(v13 + 232) = 1;
              IoInvalidateDeviceState(v29);
              DxgCreateLiveDumpWithWdLogs(
                0x193u,
                0x803uLL,
                0xFFFFFFFFC000000EuLL,
                *(int *)(v13 + 236),
                *(int *)(v13 + 240));
            }
          }
          else
          {
            v30 = DeviceExtension[60];
            v31 = DeviceExtension[69] & 7;
            *((_BYTE *)DeviceExtension + 1161) = 1;
            DeviceExtension[v31 + 61] = v30;
            v32 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v32;
            DeviceExtension[59] = 6;
          }
          LOBYTE(LowPart_low) = v40.LowPart;
LABEL_69:
          if ( (PDEVICE_OBJECT)qword_1C008E9D8 == DeviceObject )
          {
            if ( (_BYTE)LowPart_low )
            {
              if ( dword_1C008EA88 == 3 && byte_1C008EAA8 )
              {
                DpiAcquirePostDisplayInfoFromBgfx(&dword_1C008E9E8);
                byte_1C008EAA8 = 0;
                dword_1C008EAD4 = 1;
              }
            }
            else
            {
              qword_1C008E9D8 = 0LL;
            }
          }
          if ( *((_BYTE *)DeviceExtension + 483) )
          {
            DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          }
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
LABEL_80:
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 483) )
          {
            DxgkIgnoreCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), v34);
            DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
          }
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          if ( (int)Status >= 0 )
          {
            if ( CurrentStackLocation->MinorFunction != 2 )
            {
LABEL_100:
              if ( *((_BYTE *)DeviceExtension + 483) )
              {
                DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
                DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
              }
              ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
              KeLeaveCriticalRegion();
              PoStartNextPowerIrp(Irp);
              v20 = 1;
              goto LABEL_103;
            }
            v35.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
            if ( !v8 )
              *((_BYTE *)DeviceExtension + 496) = 0;
            if ( v35.SystemState < DeviceExtension[71] )
            {
              if ( DeviceExtension[126] )
                v36 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
              else
                v36 = DpiFdoSetAdapterPowerState(
                        DeviceObject,
                        v35,
                        (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                        HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                        CurrentStackLocation->Parameters.Create.EaLength);
              LODWORD(Status) = v36;
            }
            if ( *((_BYTE *)DeviceExtension + 481) && v35.SystemState == PowerSystemWorking )
              DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
          }
          else if ( v8 )
          {
            *((_BYTE *)DeviceExtension + 496) = 0;
          }
          if ( CurrentStackLocation->MinorFunction == 2 )
          {
            if ( v8 )
            {
              KeClearEvent((PRKEVENT)(DeviceExtension + 292));
              KeClearEvent((PRKEVENT)(DeviceExtension + 298));
            }
            else
            {
              KeSetEvent((PRKEVENT)(DeviceExtension + 298), 0, 0);
            }
          }
          goto LABEL_100;
        }
        if ( (int)Status >= 0 )
          goto LABEL_80;
      }
      v33 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v33 + 24) = Status;
      WdLogEvent5_WdError(v33);
      goto LABEL_80;
    }
  }
  else if ( CurrentStackLocation->MinorFunction == 3 )
  {
    goto LABEL_3;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  return (unsigned int)Status;
}
