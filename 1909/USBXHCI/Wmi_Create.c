/*
 * XREFs of Wmi_Create @ 0x1C006A16C
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Wmi_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  _QWORD *v7; // rax
  int v9; // [rsp+28h] [rbp-71h]
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-61h] BYREF
  void (__fastcall *v12)(__int64); // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  int v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+54h] [rbp-45h]
  __int128 v16; // [rsp+58h] [rbp-41h]
  void *v17; // [rsp+68h] [rbp-31h]
  _QWORD v18[8]; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+B0h] [rbp+17h] BYREF
  GUID v20; // [rsp+B4h] [rbp+1Bh]
  __int128 v21; // [rsp+C4h] [rbp+2Bh]
  int v22; // [rsp+D4h] [rbp+3Bh]

  v22 = 0;
  v19 = 40;
  v21 = 0LL;
  v20 = GUID_USBXHCI_GET_CONTROLLER_CAPABILITIES;
  memset(v18, 0, sizeof(v18));
  v11[1] = 0;
  v13 = 0LL;
  v18[2] = &v19;
  v17 = off_1C00562E8;
  v14 = 1;
  v12 = Wmi_WdfEvtCleanupCallback;
  v15 = 1;
  BYTE1(v18[3]) = 1;
  v18[4] = &Wmi_WdfEvtWmi_GetControllerCapabilities;
  LODWORD(v18[0]) = 64;
  v16 = 0LL;
  v11[0] = 56;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _DWORD *, __int64 *))(WdfFunctions_01023 + 2984))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         v18,
         v11,
         &v10);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      0xFu,
      0xAu,
      (__int64)&WPP_4c695d7d48f63a3aa515b3e68c7e1326_Traceguids,
      v9);
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v10,
                   off_1C00562E8);
  *v7 = a2;
  *a3 = v7;
  return 0LL;
}
