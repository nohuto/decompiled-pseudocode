/*
 * XREFs of HUBPDO_PublishBillboardDetails @ 0x1C0075B08
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0015940 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000D9C4 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBPDO_PublishBillboardDetails(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v6; // r14d
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rdi
  unsigned int i; // r10d
  __int64 v10; // r9
  int v11; // r8d
  unsigned __int8 v12; // cf
  int DeviceInterfaceForBillboard; // edx
  unsigned __int16 v14; // r9
  int updated; // r8d
  __int64 v16; // [rsp+28h] [rbp-48h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  void *v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  v5 = **(_QWORD **)(v3 + 2640);
  v6 = 8 * *(unsigned __int8 *)(v5 + 4) + 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x64334855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    *v8 = *(_BYTE *)(v5 + 4);
    v8[1] = *(_BYTE *)(v5 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v5 + 8), 0x20u);
    for ( i = 0; i < *(unsigned __int8 *)(v5 + 4); *(_DWORD *)&v8[8 * v10 + 8] = v12 | v11 )
    {
      v10 = i;
      *(_WORD *)&v8[8 * i + 4] = *(_WORD *)(v5 + 4LL * i + 44);
      v8[8 * i + 6] = *(_BYTE *)(v5 + 4LL * i + 46);
      v11 = 2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, 2 * i + 1);
      v12 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, 2 * i++);
    }
    v19 = &DEVPKEY_Device_UsbBillboardInfo;
    v18 = 24LL;
    v20 = 0LL;
    DeviceInterfaceForBillboard = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64, unsigned int, _BYTE *))(WdfFunctions_01015 + 3480))(
                                    WdfDriverGlobals,
                                    v4,
                                    &v18,
                                    4099LL,
                                    v6,
                                    v8);
    if ( DeviceInterfaceForBillboard >= 0 )
    {
      DeviceInterfaceForBillboard = HUBFDO_CreateDeviceInterfaceForBillboard(
                                      *(_QWORD *)v3,
                                      *(_WORD *)(a1 + 48),
                                      (_QWORD *)(v3 + 2648),
                                      (_BYTE *)(v3 + 2656),
                                      v6,
                                      (__int64)v8);
      if ( DeviceInterfaceForBillboard >= 0 )
      {
        updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
        if ( updated >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v14 = 92;
        LODWORD(v16) = updated;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 91;
        goto LABEL_9;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 90;
LABEL_9:
      LODWORD(v16) = DeviceInterfaceForBillboard;
LABEL_16:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        v14,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        v16);
    }
LABEL_17:
    ExFreePoolWithTag(v8, 0x64334855u);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      0x59u,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
      v6);
}
