/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C0154800
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C0154190 (DpiFdoDispatchPower.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008938 (DpiDisableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReportDeviceDirectedPowerDown @ 0x1C00373A0 (DxgkReportDeviceDirectedPowerDown.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C004AF24 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0153CC4 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01546E0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C0154BE0 (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0159058 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DxgkFinishPnPTransition @ 0x1C017E4A0 (DxgkFinishPnPTransition.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     _lambda_2f836dd47adc312419d8f41257eabf02_::operator() @ 0x1C0276844 (_lambda_2f836dd47adc312419d8f41257eabf02_--operator().c)
 *     DpiFdoIsDevicePresent @ 0x1C02A1B7C (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C02A2198 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C02AE3FC (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C02AE5A4 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C02AEDAC (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v3; // r12
  unsigned int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v8; // r15
  __int64 LowPart; // rbx
  _QWORD *v10; // rax
  int v11; // eax
  struct _IO_STACK_LOCATION *v12; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  POWER_STATE v18; // ebx
  int v19; // eax
  char v20; // al
  CCHAR v21; // dl
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  int IsDevicePresent; // eax
  __int64 LowPart_low; // rcx
  __int64 v28; // r14
  char v29; // al
  _QWORD *v30; // rax
  char v31; // al
  __int64 v32; // r14
  __int64 v33; // r15
  struct _KEVENT *v34; // rcx
  unsigned int v35; // eax
  unsigned int i; // r14d
  unsigned int v37; // eax
  __int64 v38; // r8
  struct _DEVICE_OBJECT *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  _BYTE v45[16]; // [rsp+30h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  bool v47; // [rsp+A0h] [rbp+8h]
  union _LARGE_INTEGER v48; // [rsp+A8h] [rbp+10h] BYREF
  struct _IO_STACK_LOCATION *v49; // [rsp+B0h] [rbp+18h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  v47 = 0;
  LODWORD(Status) = 0;
  v49 = CurrentStackLocation;
  v8 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
LABEL_17:
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v13[-1].Context = &Event;
      v13[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v14;
      if ( v14 )
      {
LABEL_118:
        v43 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v43 + 24) = Status;
        WdLogEvent5_WdError(v43);
        goto LABEL_20;
      }
      Status = Irp->IoStatus.Status;
      if ( (_DWORD)Status != -1073741810 )
      {
        if ( (int)Status >= 0 )
          goto LABEL_20;
        goto LABEL_118;
      }
      v23 = 0LL;
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
      v24[3] = DpiFdoHandleDevicePower;
      v24[4] = DeviceObject;
      v24[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v24[6] = -1073741810LL;
      WdLogEvent5_WdError(v24);
      if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
      {
        v23 = (__int64)DeviceExtension;
      }
      else
      {
        v25 = *((_QWORD *)DeviceExtension + 341);
        if ( v25 )
          v23 = *(_QWORD *)(v25 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v48);
      LowPart_low = LOBYTE(v48.LowPart);
      if ( IsDevicePresent < 0 )
        LowPart_low = 0LL;
      v48.LowPart = LowPart_low;
      if ( !(_BYTE)LowPart_low )
        *((_BYTE *)DeviceExtension + 1161) = 1;
      if ( DeviceExtension[59] == 6 )
      {
        if ( v8 || !*((_QWORD *)DeviceExtension + 61) )
          goto LABEL_105;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v23, 0, 1);
      }
      else
      {
        if ( v23 )
        {
          if ( !(_BYTE)LowPart_low || (*(_BYTE *)(v23 + 3904) & 0x18) != 0 )
          {
            v28 = *((_QWORD *)DeviceExtension + 5);
            if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
            {
              if ( *((_BYTE *)DeviceExtension + 482) )
              {
                if ( DeviceExtension[70] <= 1 && !*((_BYTE *)DeviceExtension + 483) )
                {
                  v29 = *(_BYTE *)(v23 + 3904);
                  if ( (v29 & 0x10) == 0 && ((v29 & 8) == 0 || *(int *)(v23 + 3912) < 0x2000) )
                  {
                    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(LowPart_low, 0LL);
                    v30[3] = 275LL;
                    v30[4] = 25LL;
                    v30[5] = 2LL - (*((_BYTE *)DeviceExtension + 1152) != 0);
                    v30[6] = DeviceExtension[281];
                    v30[7] = DeviceExtension[282];
                    WdLogEvent5_WdCriticalError(v30);
                  }
                }
              }
            }
            if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v28, *((_QWORD *)DeviceExtension + 6), v23, 0LL) >= 0
              || (*(_BYTE *)(v23 + 3904) & 0x10) != 0 )
            {
              v3 = 1;
            }
            v31 = *((_BYTE *)DeviceExtension + 1152);
            if ( v31 || !v3 )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, v31 != 0 ? 1 : 3);
          }
          else
          {
            v3 = 1;
          }
          if ( *(_BYTE *)(v23 + 2743) )
            v32 = *(_QWORD *)(v23 + 5760);
          else
            v32 = 0x100000000LL;
          v33 = *((_QWORD *)DXGGLOBAL::GetGlobal(LowPart_low, 0LL) + 74);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, (struct DXGFASTMUTEX *const)(v33 + 80), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
          v34 = *(struct _KEVENT **)(v33 + 136);
          if ( v34 )
            KeResetEvent(v34);
          if ( v32 == 0x300000000LL )
            goto LABEL_94;
          if ( v32 == 0x200000000LL )
          {
            v35 = *(_DWORD *)(v33 + 128);
            if ( v35 == -1 )
              goto LABEL_92;
            v32 = v35;
          }
          if ( v32 != 0x100000000LL )
          {
            if ( (unsigned int)v32 < *(_DWORD *)(v33 + 72) )
              lambda_2f836dd47adc312419d8f41257eabf02_::operator()(
                v34,
                *(_QWORD *)(*(_QWORD *)(v33 + 40) + 8LL * (unsigned int)v32));
LABEL_94:
            ++*(_DWORD *)(v33 + 144);
            if ( v45[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v23 + 3792), 1u);
            if ( !v3 )
              *((_BYTE *)DeviceExtension + 1162) = 1;
            DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
            v37 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v37;
            DeviceExtension[59] = 6;
            ExReleaseResourceLite((PERESOURCE)(v23 + 3792));
            KeLeaveCriticalRegion();
            v8 = v47;
            if ( !v47 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v23, 0, 1);
            DpiRequestIoPowerState(*(_QWORD *)(v23 + 24), 4LL, v38, 0LL);
            DxgkFinishPnPTransition(0);
            if ( (unsigned int *)v23 != DeviceExtension )
            {
              v39 = *(struct _DEVICE_OBJECT **)(v23 + 152);
              *(_BYTE *)(v23 + 232) = 1;
              IoInvalidateDeviceState(v39);
              DxgCreateLiveDumpWithWdLogs(
                0x193u,
                0x803uLL,
                0xFFFFFFFFC000000EuLL,
                *(int *)(v23 + 236),
                *(int *)(v23 + 240));
            }
            CurrentStackLocation = v49;
            goto LABEL_104;
          }
LABEL_92:
          for ( i = 0; i < *(_DWORD *)(v33 + 72); ++i )
            lambda_2f836dd47adc312419d8f41257eabf02_::operator()(v34, *(_QWORD *)(*(_QWORD *)(v33 + 40) + 8LL * i));
          goto LABEL_94;
        }
        v40 = DeviceExtension[60];
        v41 = DeviceExtension[69] & 7;
        *((_BYTE *)DeviceExtension + 1162) = 1;
        DeviceExtension[v41 + 61] = v40;
        v42 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v42;
        DeviceExtension[59] = 6;
      }
LABEL_104:
      LOBYTE(LowPart_low) = v48.LowPart;
LABEL_105:
      if ( (PDEVICE_OBJECT)qword_1C00A29D8 == DeviceObject )
      {
        if ( (_BYTE)LowPart_low )
        {
          if ( dword_1C00A2A88 == 3 && byte_1C00A2AA8 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00A29E8);
            byte_1C00A2AA8 = 0;
            dword_1C00A2AD4 = 1;
          }
        }
        else
        {
          qword_1C00A29D8 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
LABEL_20:
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( (int)Status < 0 )
      {
        if ( v8 )
          *((_BYTE *)DeviceExtension + 496) = 0;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 2 )
        {
LABEL_34:
          if ( *((_BYTE *)DeviceExtension + 484) )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          PoStartNextPowerIrp(Irp);
          v21 = 1;
          goto LABEL_37;
        }
        v18.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
        if ( !v8 )
          *((_BYTE *)DeviceExtension + 496) = 0;
        if ( v18.SystemState < (int)DeviceExtension[71] )
        {
          if ( DeviceExtension[126] )
            v19 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
          else
            v19 = DpiFdoSetAdapterPowerState(
                    DeviceObject,
                    v18,
                    (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                    HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                    CurrentStackLocation->Parameters.Create.EaLength);
          LODWORD(Status) = v19;
        }
        v20 = *((_BYTE *)DeviceExtension + 482);
        if ( v20 )
        {
          if ( v18.SystemState == PowerSystemWorking )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
            v20 = *((_BYTE *)DeviceExtension + 482);
          }
          if ( v20 && v18.SystemState == PowerSystemSleeping3 && *((_BYTE *)DeviceExtension + 4160) )
          {
            v44 = *((_QWORD *)DeviceExtension + 487);
            *((_BYTE *)DeviceExtension + 4160) = 0;
            DxgkReportDeviceDirectedPowerDown(v44);
          }
        }
      }
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( v8 )
        {
          KeClearEvent((PRKEVENT)(DeviceExtension + 310));
          KeClearEvent((PRKEVENT)(DeviceExtension + 316));
        }
        else
        {
          KeSetEvent((PRKEVENT)(DeviceExtension + 316), 0, 0);
        }
      }
      goto LABEL_34;
    }
LABEL_47:
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    return (unsigned int)Status;
  }
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = (int)LowPart > 1;
  v47 = (int)LowPart > 1;
  v10 = (_QWORD *)WdLogNewEntry5_WdPower();
  v10[3] = DeviceObject->DeviceExtension;
  v10[4] = LowPart;
  v10[5] = (int)DeviceExtension[71];
  WdLogEvent5_WdPower(v10);
  if ( (int)LowPart > 1
    && (!*((_BYTE *)DeviceExtension + 482) || DeviceExtension[70] > 1 || *((_BYTE *)DeviceExtension + 483)) )
  {
    v48.QuadPart = -300000000LL;
    DpiFdoStopMiracastSession((__int64)DeviceObject, 1, &v48, 0x83u);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( (int)LowPart <= (int)DeviceExtension[71]
    || (DeviceExtension[126]
      ? (v11 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp))
      : (v11 = DpiFdoSetAdapterPowerState(
                 DeviceObject,
                 (POWER_STATE)LowPart,
                 (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                 HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                 CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v11,
        v11 >= 0) )
  {
    if ( (int)LowPart <= 1 )
      KeSetEvent((PRKEVENT)(DeviceExtension + 310), 0, 0);
    else
      *((_BYTE *)DeviceExtension + 496) = 1;
  }
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_47;
  if ( (int)Status >= 0 )
    goto LABEL_17;
  PoStartNextPowerIrp(Irp);
  v21 = 0;
  Irp->IoStatus.Status = Status;
LABEL_37:
  IofCompleteRequest(Irp, v21);
  return (unsigned int)Status;
}
