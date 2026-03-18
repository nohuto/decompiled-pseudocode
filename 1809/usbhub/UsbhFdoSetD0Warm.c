/*
 * XREFs of UsbhFdoSetD0Warm @ 0x1C004A2EC
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhWait @ 0x1C0001F78 (UsbhWait.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C000260C (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhResumeHardReset @ 0x1C000649C (UsbhResumeHardReset.c)
 *     UsbhSyncBusResume @ 0x1C0007E80 (UsbhSyncBusResume.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00081C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     UsbhFlushPortChange @ 0x1C003EB68 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhWaitForPortResume @ 0x1C0048A04 (UsbhWaitForPortResume.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Warm(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // esi
  __int16 v5; // bp
  unsigned __int16 i; // di
  __int64 PortData; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  unsigned __int16 j; // di
  __int64 v16; // rax
  unsigned __int16 k; // di
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // r10
  __int64 v21; // rax
  struct _DEVICE_OBJECT *v22; // rbp
  _DWORD *v23; // rax
  _DWORD *v24; // r14
  _DWORD *v25; // rax
  __int16 v26; // r9
  int v27; // eax
  int v29; // [rsp+48h] [rbp-50h]
  unsigned int v30; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v31; // [rsp+58h] [rbp-40h]
  char v32; // [rsp+B0h] [rbp+18h] BYREF
  char v33; // [rsp+B2h] [rbp+1Ah]
  int v34; // [rsp+B8h] [rbp+20h] BYREF

  v31 = FdoExt((__int64)DeviceObject);
  v4 = 0;
  Log((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Cu,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, i);
    if ( PortData )
    {
      v4 = UsbhQueryPortState((__int64)DeviceObject, i, (__int64)&v32, &v34);
      if ( v4 >= 0 )
      {
        v8 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x574D5253u);
        v9 = v8;
        if ( v8 )
        {
          v10 = PdoExt(v8);
          v11 = v10;
          if ( (v32 & 1) != 0 && (v33 & 1) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, i, 0LL);
            v4 = UsbhFlushPortChange((__int64)DeviceObject, i, &v34);
            if ( v4 >= 0 )
            {
              v12 = v11[355];
              if ( (v12 & 0x8000000) == 0 )
                v11[355] = v12 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v32 & 3) == 1 )
          {
            v13 = v10[355];
            if ( (v13 & 0x8000000) == 0 )
            {
              v14 = 2003985970;
              v11[355] = v13 | 0x4000;
              goto LABEL_17;
            }
          }
          if ( (v33 & 1) == 0 && (v32 & 1) == 0 )
          {
            *(_DWORD *)(PortData + 2408) |= 4u;
            v14 = 2003985971;
LABEL_17:
            Log((__int64)DeviceObject, 16, v14, i, 0LL);
          }
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v9, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        if ( (v33 & 1) == 0 && (v32 & 1) != 0 )
        {
          *(_DWORD *)(PortData + 2408) |= 4u;
          Log((__int64)DeviceObject, 16, 2003985972, i, 0LL);
        }
      }
    }
LABEL_24:
    v5 = 1;
  }
  Log((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  UsbhSyncBusResume((__int64)DeviceObject, a2);
  for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++j )
  {
    v16 = UsbhGetPortData((__int64)DeviceObject, j);
    if ( v16 )
    {
      v4 = UsbhWaitForPortResume(DeviceObject, v16, a2);
      if ( (v4 & 0xC0000000) == 0xC0000000 )
      {
        UsbhEtwLogHubIrpEvent(
          (__int64)DeviceObject,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_PORT_RESUME_ERROR);
        v5 = 1;
        break;
      }
    }
    v5 = 1;
  }
  if ( (v4 & 0xC0000000) != 0xC0000000 )
  {
    UsbhWait((int)DeviceObject, 10);
    v4 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v30);
    if ( (v4 & 0xC0000000) != 0xC0000000 )
    {
      for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); k += v5 )
      {
        v18 = UsbhGetPortData((__int64)DeviceObject, k);
        if ( v18 )
        {
          v19 = 0;
          if ( (*(_DWORD *)(v18 + 2408) & 4) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003989347, k, 0LL);
            *(_DWORD *)(v20 + 2408) &= ~4u;
            UsbhQueueSoftConnectChange((__int64)DeviceObject, k, a2, v5);
          }
          else
          {
            v21 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x574D5253u);
            v22 = (struct _DEVICE_OBJECT *)v21;
            if ( !v21 )
              goto LABEL_45;
            v23 = PdoExt(v21);
            v24 = v23;
            if ( (v23[358] & 0x1000) != 0 || (v23[355] & 0x4000) != 0 )
            {
              v23[355] = v23[355] & 0xFDFFBFFF | 0x2000000;
              PdoExt((__int64)v22);
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME);
              v25 = PdoExt((__int64)v22);
              v19 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v25 + 236), (__int64)v22);
              if ( (v24[355] & 4) != 0 )
                UsbhSendSynchronousUsbIoctlRequest((int)DeviceObject, v22, 0x220FA7u);
            }
            UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v22, 0LL, 0x574D5253u);
            if ( (v19 & 0xC0000000) == 0xC0000000 )
            {
              Log((__int64)DeviceObject, 16, 1466782291, 0LL, v19);
              v5 = v26 + 1;
              UsbhQueueSoftConnectChange((__int64)DeviceObject, k, a2, v26 + 1);
              LOBYTE(v29) = 0;
              UsbhException((int)DeviceObject, 0, 138, 0, 0, v19, 0, usbfile_fdopwr_c, 3687, v29);
            }
            else
            {
LABEL_45:
              v5 = 1;
            }
          }
        }
      }
      v27 = v31[640];
      if ( (v27 & 0x10) != 0 )
      {
        LOBYTE(v29) = 0;
        v31[640] = v27 & 0xFFFFFFEF;
        UsbhException((int)DeviceObject, 0, 113, 0, 0, 0, 0, usbfile_fdopwr_c, 3702, v29);
        v4 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset((int)DeviceObject);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE);
  return (unsigned int)v4;
}
