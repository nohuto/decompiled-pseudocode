/*
 * XREFs of HUBPDO_AllocateForwardProgressResources @ 0x1C0019590
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C00196C0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBPDO_AllocateForwardProgressResources(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  _QWORD v5[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v5, 0, 0x38uLL);
  v5[3] = 0x100000001LL;
  LODWORD(v5[0]) = 56;
  v5[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16LL));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, _QWORD *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v5,
         v2,
         a1 + 281);
  if ( v3 >= 0 )
  {
    a1[283] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                a1[281]);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x83u,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
