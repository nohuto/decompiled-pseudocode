/*
 * XREFs of Register_Create @ 0x1C0067418
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Register_CreateSecureObject @ 0x1C0067578 (Register_CreateSecureObject.c)
 */

__int64 __fastcall Register_Create(__int64 a1, __int64 **a2)
{
  int v4; // eax
  int SecureObject; // ebx
  __int64 *v6; // rdi
  int v8; // [rsp+28h] [rbp-48h]
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+34h] [rbp-3Ch]
  int v11; // [rsp+44h] [rbp-2Ch]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  void *v16; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF

  v11 = 0;
  v15 = 0LL;
  v12 = 1;
  v13 = 1;
  v16 = off_1C0056158;
  v14 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  v9 = 56;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         &v9,
         &v17);
  SecureObject = v4;
  if ( v4 >= 0 )
  {
    v6 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v17,
                      off_1C0056158);
    v6[1] = a1;
    *v6 = v17;
    if ( !Controller_IsSecureDevice(a1) || (SecureObject = Register_CreateSecureObject(v6), SecureObject >= 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_i(
          *(_QWORD *)(a1 + 72),
          4u,
          6u,
          0xBu,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v17);
      *a2 = v6;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v4;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 6u, 0xAu, (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids, v8);
  }
  return (unsigned int)SecureObject;
}
