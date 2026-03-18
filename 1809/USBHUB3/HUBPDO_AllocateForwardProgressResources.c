/*
 * XREFs of HUBPDO_AllocateForwardProgressResources @ 0x1C0017E40
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0017F60 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBPDO_AllocateForwardProgressResources(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, 0x38uLL);
  v6[3] = 0x100000001LL;
  LODWORD(v6[0]) = 56;
  v6[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16LL));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, _QWORD *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v6,
         v2,
         a1 + 281);
  v4 = v3;
  if ( v3 >= 0 )
    a1[283] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                a1[281]);
  else
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x83u,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      v3);
  return v4;
}
