/*
 * XREFs of QueryDeviceResetInterface @ 0x1C0083544
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0074BD0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall QueryDeviceResetInterface(__int64 a1, _DWORD *a2)
{
  struct _DEVICE_OBJECT *v4; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[18]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v14[9]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v15; // [rsp+138h] [rbp+38h] BYREF
  __int64 v16; // [rsp+140h] [rbp+40h]

  v15 = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  v12 = 0uLL;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, 0x88uLL);
  v9 = 0LL;
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  a1);
  AttachedDeviceReference = IoGetAttachedDeviceReference(v4);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1336))(
         WdfDriverGlobals,
         a1,
         0LL,
         &v10);
  if ( v6 >= 0 )
  {
    v13[0] = 0x100000088LL;
    v13[4] = AttachedDeviceReference;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1344))(
           WdfDriverGlobals,
           v10,
           v13);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
             WdfDriverGlobals,
             0LL,
             v10,
             &v9);
      if ( v6 >= 0 )
      {
        v12 = 0xC00000BBuLL;
        v11 = 24LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v9,
          &v11);
        memset(a2, 0, 0x38uLL);
        v14[4] = 0LL;
        v7 = v9;
        *a2 = 65592;
        v14[1] = &GUID_DEVICE_RESET_INTERFACE_STANDARD;
        LOWORD(v14[0]) = 2075;
        LODWORD(v14[2]) = 65592;
        v14[3] = a2;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
          WdfDriverGlobals,
          v7,
          v14);
        v16 = 0LL;
        v15 = 0x200000010LL;
        if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015
                                                                                                  + 2024))(
                WdfDriverGlobals,
                v9,
                v10,
                &v15) )
          v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                 WdfDriverGlobals,
                 v9);
      }
    }
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)v6;
}
