/*
 * XREFs of CommonBuffer_Create @ 0x1C005E6D8
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     XilCoreCommonBuffer_Create @ 0x1C0047F2C (XilCoreCommonBuffer_Create.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C006A518 (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, char a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v13)(__int64); // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  _QWORD v15[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF

  v15[0] = 56LL;
  v15[2] = 0LL;
  v15[5] = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15[3] = 0x100000001LL;
  v15[6] = off_1C0056298;
  v15[4] = *(_QWORD *)(a1 + 8);
  v15[1] = CommonBuffer_WdfEvtCleanupCallback;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v15,
         &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v16,
           off_1C0056298);
    *(_QWORD *)v8 = a1;
    *(_BYTE *)(v8 + 80) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1 + 72),
        4u,
        8u,
        0xBu,
        (__int64)&WPP_69dd49c7a64d37eeaa5b7723d8723313_Traceguids,
        v16);
    KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 48));
    *(_QWORD *)(v8 + 64) = v8 + 56;
    *(_QWORD *)(v8 + 56) = v8 + 56;
    XilCoreCommonBuffer_Create(a1, v8, v8 + 88);
    KeInitializeEvent((PRKEVENT)(v8 + 24), NotificationEvent, 1u);
    if ( !Controller_IsSecureDevice(a1) )
    {
      memset(v15, 0, sizeof(v15));
      v15[4] = v16;
      v15[3] = 0x100000001LL;
      v13 = CommonBuffer_RebalanceResourcesWorkItem;
      LOBYTE(v14) = 1;
      LODWORD(v15[0]) = 56;
      LODWORD(v12) = 24;
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 3032))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             &v12,
             v15,
             v8 + 72);
      v7 = v9;
      if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          2u,
          8u,
          0xCu,
          (__int64)&WPP_69dd49c7a64d37eeaa5b7723d8723313_Traceguids,
          v11);
      }
    }
    *(_QWORD *)(v8 + 8) = v8 + 288;
    Counter_CreateCommonBufferInstance(v8);
    *a3 = v8;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 8u, 0xAu, (__int64)&WPP_69dd49c7a64d37eeaa5b7723d8723313_Traceguids, v6);
  }
  return v7;
}
