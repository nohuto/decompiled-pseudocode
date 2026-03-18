/*
 * XREFs of HUBMISC_GetDeviceInterfacePath @ 0x1C002CBAC
 * Callers:
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000CB3C (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0069940 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006C468 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBMISC_GetDeviceInterfacePath(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  int v9; // eax
  int v10; // ebx
  _QWORD v12[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v12, 0, 0x38uLL);
  *a3 = 0LL;
  v12[3] = 0x100000001LL;
  LODWORD(v12[0]) = 56;
  v12[4] = a2;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, _QWORD *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v12,
         a3);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 632))(
            WdfDriverGlobals,
            a2,
            a1,
            a4,
            *a3);
  else
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x61u, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids, v9);
  if ( v10 < 0 && *a3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *a3 = 0LL;
  }
  return (unsigned int)v10;
}
