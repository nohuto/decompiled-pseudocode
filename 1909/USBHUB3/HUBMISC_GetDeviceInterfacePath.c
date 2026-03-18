/*
 * XREFs of HUBMISC_GetDeviceInterfacePath @ 0x1C002F368
 * Callers:
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000D9C4 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C006F960 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007275C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0074BD0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_GetDeviceInterfacePath(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v11, 0, 0x38uLL);
  *a3 = 0LL;
  v11[3] = 0x100000001LL;
  LODWORD(v11[0]) = 56;
  v11[4] = a2;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, _QWORD *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v11,
         a3);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 632))(
           WdfDriverGlobals,
           a2,
           a1,
           a4,
           *a3);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x62u, (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids, v9);
  }
  if ( v9 < 0 && *a3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *a3 = 0LL;
  }
  return (unsigned int)v9;
}
