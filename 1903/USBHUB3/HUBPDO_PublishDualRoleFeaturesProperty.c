/*
 * XREFs of HUBPDO_PublishDualRoleFeaturesProperty @ 0x1C0075DD8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0015940 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_PublishDualRoleFeaturesProperty(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  void *v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(v3 + 2661);
  v9 = 0LL;
  v10 = v4;
  v7 = 24LL;
  v8 = &DEVPKEY_Device_UsbDualRoleFeatures;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64, int, int *))(WdfFunctions_01015 + 3480))(
             WdfDriverGlobals,
             v2,
             &v7,
             7LL,
             4,
             &v10);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
             2u,
             2u,
             0x5Du,
             (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
             v6);
  }
  return result;
}
