/*
 * XREFs of Usbh_PCE_QueueDriverReset_Action @ 0x1C000B18C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhHubQueueProcessChangeWorker @ 0x1C000B68C (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhLockPcqWithTag @ 0x1C000B800 (UsbhLockPcqWithTag.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C000C098 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000C848 (UsbhSignalSyncDeviceResetPdo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0012D90 (UsbhInsertQueuePortChangeObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0046834 (WPP_RECORDER_SF_dc.c)
 */

__int64 Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, char a3, ...)
{
  int v3; // ebx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 result; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  int v25; // edx
  char v26; // r10
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-20h]
  KIRQL NewIrql; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v33; // [rsp+A0h] [rbp+60h]
  __int64 v34; // [rsp+A8h] [rbp+68h]
  va_list va1; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v3 = v31;
  FdoExt(a1);
  v7 = UsbhLockPcqWithTag(a1, a2, 15, (unsigned int)&NewIrql, v3);
  v8 = v7;
  if ( !*(_BYTE *)(a2 + 2839) && !*(_BYTE *)(a2 + 2840) && (unsigned int)(*(_DWORD *)(a2 + 400) - 1) > 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    Log(a1, 512, 825585712, v7, v9);
    Log(a1, v10, 825585713, a2, *(unsigned __int16 *)(a2 + 4));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        v11,
        27,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        *(_WORD *)(a2 + 4),
        a3);
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 10;
    KeResetEvent((PRKEVENT)(a2 + 824));
    if ( v8 > 13 )
    {
      if ( v8 == 14 )
        goto LABEL_18;
      if ( v8 > 18 && v8 != 20 )
      {
LABEL_37:
        v27 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v27 + a2 + 1384) = 19;
LABEL_24:
        LOBYTE(v12) = NewIrql;
        result = UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
LABEL_14:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v20, v21, 32, v29, v9, v8);
        return result;
      }
    }
    else if ( v8 < 5 && v8 != 1 )
    {
      switch ( v8 )
      {
        case 2:
          Log(a1, 512, 825585714, 2, *(unsigned __int16 *)(a2 + 4));
          v13 = v34;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v33, v34) >= 0 )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                28,
                (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                v9);
            Log(a1, 8, 825585715, a2, v9);
            v14 = *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 4;
            *(_DWORD *)(32 * v14 + a2 + 1384) = 4;
            Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
            v15 = *(_DWORD *)(a2 + 12);
            v16 = NewIrql;
            v17 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 448) = 0;
            *(_DWORD *)(v17 + a2 + 1384) = v15;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v16);
            result = UsbhHubQueueProcessChangeWorker(v18, a2);
            goto LABEL_14;
          }
          Log(a1, 8, 825585716, a2, v9);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v25,
              1,
              29,
              (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
              v9,
              v26);
LABEL_21:
          v22 = v13;
          goto LABEL_22;
        case 3:
          Log(a1, 8, 825585718, a2, v9);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              31,
              (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
              v9);
          v23 = v34;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v33, v34) < 0 )
          {
            UsbhSignalSyncDeviceResetPdo(a1, v23, 3221225473LL);
            if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
              UsbhSetPcqEventStatus(a1, a2, 3LL);
          }
          v24 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v24 + a2 + 1384) = 14;
          goto LABEL_24;
        case 4:
LABEL_18:
          Log(a1, 8, 825585717, a2, v9);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              30,
              (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
              v9);
          v13 = v34;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v33, v34) >= 0 )
            goto LABEL_24;
          goto LABEL_21;
      }
      goto LABEL_37;
    }
    Log(a1, 512, 825585713, v8, *(unsigned __int16 *)(a2 + 4));
    v22 = v34;
LABEL_22:
    UsbhSignalSyncDeviceResetPdo(a1, v22, 3221225473LL);
    if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
      UsbhSetPcqEventStatus(a1, a2, 3LL);
    goto LABEL_24;
  }
  UsbhSignalSyncDeviceResetPdo(a1, v34, 3221225473LL);
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 3LL);
  LOBYTE(v28) = NewIrql;
  return UsbhUnlockPcqWithTag(a1, a2, v28, 0LL);
}
