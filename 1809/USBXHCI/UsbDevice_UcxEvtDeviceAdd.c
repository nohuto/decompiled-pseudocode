/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x1C0061CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x1C000B450 (Controller_AddDeviceToControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0012348 (WPP_RECORDER_SF_dqd.c)
 *     XilUsbDevice_Create @ 0x1C00343E8 (XilUsbDevice_Create.c)
 *     Etw_DeviceCreate @ 0x1C00392FC (Etw_DeviceCreate.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  int v6; // eax
  int v7; // r15d
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-70h] BYREF
  int v18; // [rsp+100h] [rbp+0h] BYREF
  __int128 v19; // [rsp+104h] [rbp+4h]
  __int64 v20; // [rsp+114h] [rbp+14h]

  v15 = a3;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F400);
  memset(v17, 0, 0x68uLL);
  v17[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v17[2] = UsbDevice_UcxEvtEnable;
  v17[3] = UsbDevice_UcxEvtDisable;
  v17[4] = UsbDevice_UcxEvtReset;
  v17[5] = UsbDevice_UcxEvtAddress;
  v17[6] = UsbDevice_UcxEvtUpdate;
  v17[7] = UsbDevice_UcxEvtHubInfo;
  v17[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v17[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  v17[12] = UsbDevice_UcxEvtUsbDeviceGetCharacteristic;
  LODWORD(v17[0]) = 104;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C0050660)(UcxDriverGlobals, v15, v17);
  memset(v16, 0, 0x38uLL);
  LODWORD(v16[0]) = 56;
  v16[3] = 0x100000001LL;
  v16[6] = off_1C004F298;
  v16[1] = UsbDevice_EvtUsbDeviceCleanupCallback;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0050658)(
         UcxDriverGlobals,
         a1,
         &v15,
         v16,
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    WPP_RECORDER_SF_i(
      *(_QWORD *)(v5 + 72),
      4u,
      0xCu,
      0xBu,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v14);
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v14,
           off_1C004F298);
    *(_QWORD *)v8 = v14;
    *(_QWORD *)(v8 + 8) = v5;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(a2 + 48);
    v9 = *(_OWORD *)(a2 + 28);
    v18 = *(_DWORD *)(a2 + 20);
    v10 = *(_QWORD *)(a2 + 44);
    v19 = v9;
    v20 = v10;
    v7 = XilUsbDevice_Create(v8, (__int64)&v18);
    if ( v7 >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 88));
      *(_QWORD *)(v8 + 104) = v8 + 96;
      *(_QWORD *)(v8 + 96) = v8 + 96;
      *(_DWORD *)(v8 + 112) = 0;
      Controller_AddDeviceToControllerDeviceList(v5, v14, (_QWORD *)(v8 + 72));
      Etw_DeviceCreate(v11, v8);
      LODWORD(v13) = *(_DWORD *)(v8 + 20);
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(v5 + 72),
        4u,
        0xCu,
        0xCu,
        (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
        v13,
        *(_QWORD *)(v8 + 24),
        *(_DWORD *)(v8 + 44));
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v5 + 72),
      2u,
      0xCu,
      0xAu,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v6);
  }
  return (unsigned int)v7;
}
