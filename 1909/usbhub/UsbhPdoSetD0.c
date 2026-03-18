/*
 * XREFs of UsbhPdoSetD0 @ 0x1C0003C40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhClearPdoIdleReady @ 0x1C0001250 (UsbhClearPdoIdleReady.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0001508 (UsbhCompletePdoIdleIrp.c)
 *     UsbhDisableDeviceForWake @ 0x1C0002540 (UsbhDisableDeviceForWake.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00025EC (UsbhPdoSetD0_Finish.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002974 (UsbhSet_Pdo_Dx.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C00031F0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhSetPdoPowerState @ 0x1C0003BB4 (UsbhSetPdoPowerState.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     GET_FDO_POWER_STATE @ 0x1C00055FC (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C0005C34 (UsbhReleasePowerContext.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0041870 (WPP_RECORDER_SF_dd.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0049F7C (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004C370 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, unsigned int a2, _QWORD *a3)
{
  struct _DEVICE_OBJECT *v3; // rsi
  __int64 v5; // r12
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // ebp
  int v12; // eax
  __int64 v13; // r8
  KIRQL v14; // al
  _QWORD *v15; // r14
  _QWORD *v16; // r8
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // ebp
  __int64 v21; // r8
  unsigned int v22; // eax
  BOOLEAN v23; // r9
  int v24; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+A0h] [rbp+18h]

  v3 = (struct _DEVICE_OBJECT *)a3[6];
  v5 = a2;
  v7 = PdoExt(v3);
  v8 = FdoExt(*(_QWORD *)(v7 + 1184));
  Log((_DWORD)DeviceObject, 16, 1346651184, (_DWORD)a3, (__int64)v3);
  v9 = PdoExt(v3) + 944;
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 1381131376LL);
  UsbhSetPdoPowerState(v9, (__int64)v3, v10, 8, 8);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
  a3[14] = UsbhIncHubBusy((_DWORD)DeviceObject, v9, (_DWORD)v3, 1430414448, 1);
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
  v11 = *(_DWORD *)(PdoExt(a3[6]) + 1128);
  v12 = GET_FDO_POWER_STATE(v9);
  if ( v12 == 201 )
    goto LABEL_25;
  if ( v12 <= 201 )
  {
LABEL_24:
    UsbhSetPdoPowerState(v9, (__int64)v3, v13, v11, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v17 = -1073741101;
    goto LABEL_16;
  }
  if ( v12 <= 205 )
    goto LABEL_21;
  if ( v12 == 206 )
  {
LABEL_25:
    v20 = v11 - 1;
    if ( v20 )
    {
      if ( v20 == 6 )
      {
        UsbhSetPdoPowerState(v9, (__int64)v3, v13, 7, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        Log((_DWORD)DeviceObject, 16, 1999782960, 0, *(unsigned __int16 *)(v7 + 1428));
        KeWaitForSingleObject((PVOID)(v7 + 2360), Executive, 0, v23, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState(v9, (__int64)v3, v13, 7, 8);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        if ( (*(_DWORD *)(v7 + 1420) & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(DeviceObject, v3);
        }
        else
        {
          UsbhSyncResumeDeviceInternal(DeviceObject, v9, v3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
              *(_WORD *)(v7 + 1428));
          }
          UsbhSet_Pdo_Dx(v3, (POWER_STATE)1);
        }
        UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
        PdoExt(a3[6]);
        *(_DWORD *)(v7 + 2384) = *(_DWORD *)(v8 + 4216);
        UsbhSetPdoPowerState(v9, (__int64)v3, v21, 1, 8);
        KeSetEvent((PRKEVENT)(v7 + 2360), 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        UsbhCompletePdoIdleIrp((__int64)DeviceObject, (__int64)v3, 0);
        UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v3, (__int64)a3);
        if ( (*(_DWORD *)(v7 + 1420) & 0x100) != 0 )
        {
          v22 = UsbhDisableDeviceForWake(*(_QWORD *)(v9 + 8), (__int64)v3);
          v18 = v22;
          if ( (v22 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v22) )
          {
            LOBYTE(v24) = 0;
            UsbhException(
              *(_QWORD *)(v9 + 8),
              *(unsigned __int16 *)(v7 + 1428),
              49,
              0,
              0,
              v18,
              v25,
              usbfile_pdopwr_c,
              1186,
              v24);
          }
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState(v9, (__int64)v3, v13, 1, 13);
      UsbhReleaseFdoPwrLock(DeviceObject, v9);
      Log((_DWORD)DeviceObject, 16, 1999848496, 0, *(unsigned __int16 *)(v7 + 1428));
    }
    goto LABEL_20;
  }
  if ( v12 <= 208 )
    goto LABEL_24;
  if ( v12 > 211 )
  {
    if ( v12 != 212 )
    {
      if ( v12 == 213 )
      {
        v17 = -1073741810;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            14,
            (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
            *(_WORD *)(v7 + 1428),
            14);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        goto LABEL_16;
      }
      goto LABEL_24;
    }
LABEL_21:
    UsbhSetPdoPowerState(v9, (__int64)v3, v13, v11, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v17 = -1073741101;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        1,
        15,
        (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
        *(_WORD *)(v7 + 1428),
        211);
    goto LABEL_16;
  }
  UsbhSetPdoPowerState(v9, (__int64)v3, v13, 3, 7);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
  Log((_DWORD)DeviceObject, 16, 1349862448, (_DWORD)a3, (__int64)v3);
  UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v3, (__int64)a3);
  Log((_DWORD)DeviceObject, 16, 2003321904, 0, v5);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4176));
  if ( !*(_BYTE *)(v8 + 4184) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v14);
    UsbhPdoSetD0_Finish(v9, v3, a3[8]);
LABEL_20:
    v17 = 0;
LABEL_16:
    *(_QWORD *)(v7 + 2560) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy(DeviceObject, v18, a3[14]);
    v19 = a3[8];
    a3[14] = 0LL;
    UsbhEtwLogDevicePowerEvent(v7, v19, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE);
    *(_DWORD *)(a3[8] + 48LL) = v17;
    IofCompleteRequest((PIRP)a3[8], 0);
    UsbhDecPdoIoCount((ULONG_PTR)v3, a3[8]);
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v15 = a3 + 12;
  v16 = *(_QWORD **)(v8 + 4200);
  if ( *v16 != v8 + 4192 )
    __fastfail(3u);
  *v15 = v8 + 4192;
  v15[1] = v16;
  *v16 = v15;
  *(_QWORD *)(v8 + 4200) = v15;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v14);
}
