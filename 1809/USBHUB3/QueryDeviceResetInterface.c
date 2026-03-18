/*
 * XREFs of QueryDeviceResetInterface @ 0x1C007B840
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall QueryDeviceResetInterface(__int64 a1, _DWORD *a2)
{
  struct _DEVICE_OBJECT *v4; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[18]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v13; // [rsp+F0h] [rbp-10h] BYREF
  GUID *v14; // [rsp+F8h] [rbp-8h]
  int v15; // [rsp+100h] [rbp+0h]
  _DWORD *v16; // [rsp+108h] [rbp+8h]
  __int64 v17; // [rsp+110h] [rbp+10h]
  _QWORD v18[2]; // [rsp+138h] [rbp+38h] BYREF

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
    memset(v12, 0, 0x88uLL);
    v12[0] = 0x100000088LL;
    v12[4] = AttachedDeviceReference;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1344))(
           WdfDriverGlobals,
           v10,
           v12);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
             WdfDriverGlobals,
             0LL,
             v10,
             &v9);
      if ( v6 >= 0 )
      {
        v11[2] = 0LL;
        v11[0] = 24LL;
        v11[1] = 3221225659LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v9,
          v11);
        memset(a2, 0, 0x38uLL);
        v17 = 0LL;
        v7 = v9;
        *a2 = 65592;
        v14 = &GUID_DEVICE_RESET_INTERFACE_STANDARD;
        v13 = 2075;
        v15 = 65592;
        v16 = a2;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int16 *))(WdfFunctions_01015 + 2016))(
          WdfDriverGlobals,
          v7,
          &v13);
        v18[1] = 0LL;
        v18[0] = 0x200000010LL;
        if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015
                                                                                                 + 2024))(
                WdfDriverGlobals,
                v9,
                v10,
                v18) )
          v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                 WdfDriverGlobals,
                 v9);
      }
    }
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)v6;
}
