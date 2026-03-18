/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C0002E38
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C0003270 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhSet_D0_wQueued_Action @ 0x1C00010B8 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhClearPdoIdleReady @ 0x1C0001250 (UsbhClearPdoIdleReady.c)
 *     UsbhPdoSetDx @ 0x1C000138C (UsbhPdoSetDx.c)
 *     UsbhSetPdoIdleReady @ 0x1C000238C (UsbhSetPdoIdleReady.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002974 (UsbhSet_Pdo_Dx.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C00031F0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0003AF4 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhSetPdoPowerState @ 0x1C0003BB4 (UsbhSetPdoPowerState.c)
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     GET_FDO_POWER_STATE @ 0x1C00055FC (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C001D080 (UsbhIncPdoIoCount.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0041870 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0045D44 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  POWER_STATE v8; // r12d
  int v9; // ebx
  KIRQL v10; // al
  bool v11; // zf
  KIRQL v12; // dl
  __int64 v13; // rbx
  KIRQL v14; // al
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // edx
  __int64 v18; // rax
  void *v19; // r8
  int v21; // r8d
  int v22; // eax
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // rax
  int v27; // eax
  int v28; // ecx
  BOOLEAN v29; // r9
  int v30; // [rsp+90h] [rbp+18h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+98h] [rbp+20h]

  v6 = PdoExt(a2);
  FdoExt(a1);
  v7 = PdoExt(a2) + 944;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v8.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  Log(a1, 16, 1885622372, (_DWORD)a2, (__int64)a3);
  v9 = UsbhIncPdoIoCount(a2, a3, 1884311383LL, 0LL);
  if ( (v9 & 0xC0000000) != 0xC0000000 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v7 + 136) = 1;
    *(_BYTE *)(v7 + 132) = v10;
    *(_DWORD *)(v7 + 88) = 2018460752;
    *(_DWORD *)(v7 + 92) = 12;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v7;
    *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
    v11 = *(_DWORD *)(PdoExt(a2) + 1124) == 3;
    *(_DWORD *)(v7 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v7 + 88) = 1734964085;
    v12 = *(_BYTE *)(v7 + 132);
    if ( !v11 )
    {
      v16 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
LABEL_9:
      if ( (unsigned __int8)Usb_Disconnected(v16) )
        UsbhPCE_BusDisconnect(a1, v7, *(unsigned __int16 *)(v6 + 1428));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          1,
          22,
          (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
          *(_WORD *)(v6 + 1428),
          v8.SystemState);
      UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Power.State);
      *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
      v18 = PdoExt(a2);
      UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v18 + 1184), a2, a3, 2101LL);
      v19 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
      if ( v8.SystemState != PowerSystemWorking )
        v19 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
      UsbhEtwLogDevicePowerEvent(v6, a3, v19, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
      a3->IoStatus.Status = v16;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3);
      return v16;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
    v13 = FdoExt(a1);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
    v15 = *(_DWORD *)(v13 + 4172);
    *(_BYTE *)(v13 + 5064) = v14;
    *(_DWORD *)(v7 + 40) = v15;
    *(_DWORD *)(v7 + 44) = 126;
    *(_DWORD *)(v7 + 32) = 844055622;
    *(_DWORD *)(v7 + 36) = 1986356304;
    *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v13 + 1344) = v7;
    v30 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v8.SystemState != PowerSystemWorking )
    {
      if ( (unsigned int)(v8.SystemState - 2) > 2 )
      {
        v16 = -1073741811;
      }
      else
      {
        UsbhEtwLogDevicePowerEvent(
          v6,
          a3,
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
          0);
        if ( *(_DWORD *)(PdoExt(a2) + 788) == v8.SystemState )
        {
          v16 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v6 + 1152) == 2 )
          {
            if ( !CurrentStackLocation->Parameters.Create.EaLength )
            {
              if ( !*(_BYTE *)(v6 + 2733) )
              {
                *(_BYTE *)(v6 + 2733) = 1;
                UsbhQueueWorkItemEx(
                  a1,
                  1,
                  (unsigned int)&UsbhSetPdoSelectiveSuspendedKey,
                  (_DWORD)a2,
                  0,
                  2001228627,
                  0LL);
              }
              if ( v8.SystemState == PowerSystemSleeping3
                && (*(_DWORD *)(PdoExt(a2) + 1180) & 0x10) != 0
                && (*(_DWORD *)(v6 + 1420) & 0xC00000) == 0xC00000 )
              {
                KeSetEvent((PRKEVENT)(v6 + 2920), 0, 0);
                *(_DWORD *)(v6 + 1420) = *(_DWORD *)(v6 + 1420) & 0xFAFFFFFF | 0x4000000;
              }
            }
            v16 = UsbhPdoSetDx(v7, (__int64)a2, (__int64)a3);
            goto LABEL_9;
          }
          v16 = -1073741130;
        }
      }
      goto LABEL_43;
    }
    UsbhEtwLogDevicePowerEvent(
      v6,
      a3,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
      0);
    *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
    if ( v30 == 1 )
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v21, 1, 2);
    }
    else
    {
      if ( v30 == 7 )
      {
        UsbhSetPdoPowerState(v7, (_DWORD)a2, v21, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v7);
        Log(a1, 16, 2003059760, 0, *(unsigned __int16 *)(v6 + 1428));
        KeWaitForSingleObject((PVOID)(v6 + 2360), Executive, 0, v29, 0LL);
LABEL_50:
        v16 = 0;
        goto LABEL_9;
      }
      v22 = GET_FDO_POWER_STATE(v7);
      if ( v22 == 201 || v22 == 206 )
      {
LABEL_23:
        if ( (int)UsbhSet_D0_wQueued_Action(a1, v7, (int)a2, (__int64)a3) >= 0 )
        {
          KeResetEvent((PRKEVENT)(v6 + 2360));
          UsbhSetPdoPowerState(v7, (_DWORD)a2, v24, 2, 6);
          UsbhReleaseFdoPwrLock(a1, v7);
          return 259LL;
        }
        goto LABEL_40;
      }
      if ( v22 > 208 )
      {
        if ( v22 <= 211 )
          goto LABEL_23;
        if ( v22 <= 213 )
        {
LABEL_40:
          UsbhSetPdoPowerState(v7, (_DWORD)a2, v23, 6, 3);
          v27 = GET_FDO_POWER_STATE(v7);
          v28 = 0;
          if ( v27 == 213 )
            v28 = -1073741810;
          v16 = v28;
LABEL_43:
          UsbhReleaseFdoPwrLock(a1, v7);
          goto LABEL_9;
        }
      }
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v23, 6, 3);
    }
    UsbhReleaseFdoPwrLock(a1, v7);
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v6 + 2740) )
  {
    UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
    if ( v8.SystemState == PowerSystemWorking )
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v25, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhClearPdoIdleReady(a1, (__int64)a2, (__int64)a3);
    }
    else
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v25, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhSetPdoIdleReady(a1, (__int64)a2, (__int64)a3);
    }
    UsbhSet_Pdo_Dx(a2, v8);
  }
  Log(a1, 16, 1886545441, v9, (__int64)a3);
  *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
  v26 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v26 + 1184), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
