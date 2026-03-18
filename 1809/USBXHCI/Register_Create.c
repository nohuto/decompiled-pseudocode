/*
 * XREFs of Register_Create @ 0x1C005F678
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Register_CreateSecureObject @ 0x1C005F7C8 (Register_CreateSecureObject.c)
 */

__int64 __fastcall Register_Create(__int64 a1, __int64 **a2)
{
  int v4; // eax
  int SecureObject; // ebx
  __int64 *v6; // rdi
  _QWORD v8[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+80h] [rbp+8h] BYREF

  memset(v8, 0, 0x38uLL);
  v8[3] = 0x100000001LL;
  v8[6] = off_1C004F130;
  v8[4] = *(_QWORD *)(a1 + 8);
  LODWORD(v8[0]) = 56;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v8,
         &v9);
  SecureObject = v4;
  if ( v4 >= 0 )
  {
    v6 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v9,
                      off_1C004F130);
    v6[1] = a1;
    *v6 = v9;
    if ( !Controller_IsSecureDevice(a1) || (SecureObject = Register_CreateSecureObject(v6), SecureObject >= 0) )
    {
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1 + 72),
        4u,
        6u,
        0xBu,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v9);
      *a2 = v6;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 6u, 0xAu, (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids, v4);
  }
  return (unsigned int)SecureObject;
}
