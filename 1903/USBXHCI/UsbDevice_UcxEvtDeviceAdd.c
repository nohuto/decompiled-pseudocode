/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x1C0069E40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x1C000D6A0 (Controller_AddDeviceToControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0014D48 (WPP_RECORDER_SF_dqd.c)
 *     XilUsbDevice_Create @ 0x1C00393D8 (XilUsbDevice_Create.c)
 *     Etw_DeviceCreate @ 0x1C003E65C (Etw_DeviceCreate.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(unsigned __int64, __int64, void *); // rax
  __int64 v6; // r15
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[14]; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+100h] [rbp+0h] BYREF
  __int128 v20; // [rsp+104h] [rbp+4h]
  __int64 v21; // [rsp+114h] [rbp+14h]

  v16 = a3;
  memset(v18, 0, 0x68uLL);
  memset(v17, 0, 0x38uLL);
  v20 = 0LL;
  v5 = *(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616);
  v21 = 0LL;
  v6 = v5(WPP_MAIN_CB.Dpc.ProcessorHistory, a1, off_1C0056428);
  v18[0] = 104LL;
  v18[10] = 0LL;
  v18[11] = 0LL;
  v18[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v18[2] = UsbDevice_UcxEvtEnable;
  v18[3] = UsbDevice_UcxEvtDisable;
  v18[4] = UsbDevice_UcxEvtReset;
  v18[5] = UsbDevice_UcxEvtAddress;
  v18[6] = UsbDevice_UcxEvtUpdate;
  v18[7] = UsbDevice_UcxEvtHubInfo;
  v18[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v18[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  v18[12] = UsbDevice_UcxEvtUsbDeviceGetCharacteristic;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C00576A0)(UcxDriverGlobals, v16, v18);
  *(_QWORD *)&v17[0] = 56LL;
  *((_QWORD *)&v17[1] + 1) = 0x100000001LL;
  *(_QWORD *)&v17[3] = off_1C00562C0;
  *((_QWORD *)&v17[0] + 1) = UsbDevice_EvtUsbDeviceCleanupCallback;
  *(_QWORD *)&v17[1] = 0LL;
  v17[2] = 0LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _OWORD *, __int64 *))qword_1C0057698)(
         UcxDriverGlobals,
         a1,
         &v16,
         v17,
         &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(v6 + 72),
        4u,
        0xCu,
        0xBu,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        v15);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v15,
           off_1C00562C0);
    *(_QWORD *)v9 = v15;
    *(_QWORD *)(v9 + 8) = v6;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 48);
    v10 = *(_OWORD *)(a2 + 28);
    v19 = *(_DWORD *)(a2 + 20);
    v11 = *(_QWORD *)(a2 + 44);
    v20 = v10;
    v21 = v11;
    v8 = XilUsbDevice_Create(v9, (__int64)&v19);
    if ( v8 >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 88));
      *(_QWORD *)(v9 + 104) = v9 + 96;
      *(_QWORD *)(v9 + 96) = v9 + 96;
      *(_DWORD *)(v9 + 112) = 0;
      Controller_AddDeviceToControllerDeviceList(v6, v15, (_QWORD *)(v9 + 72));
      Etw_DeviceCreate(v12, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = *(_DWORD *)(v9 + 20);
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v6 + 72),
          4u,
          0xCu,
          0xCu,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
          v14,
          *(_QWORD *)(v9 + 24),
          *(_DWORD *)(v9 + 44));
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 72),
      2u,
      0xCu,
      0xAu,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      v7);
  }
  return (unsigned int)v8;
}
