/*
 * XREFs of HUBFDO_IoctlGetPortStatus @ 0x1C006B788
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008F30 (HUBSM_AddHsmEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetPortStatus(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // eax
  int v10; // ebx
  __int64 result; // rax
  int v12; // ebp
  _QWORD *i; // rax
  _QWORD *v14; // rcx
  int v15; // [rsp+28h] [rbp-20h]
  void *v16; // [rsp+30h] [rbp-18h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_1C005F0E0);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v16,
         0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = v9;
    result = WPP_RECORDER_SF_d(v8[315], 2u, 3u, 0x22u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v15);
    goto LABEL_9;
  }
  v10 = HUBFDO_IoctlValidateParameters((__int64)v8, 4uLL, a4, v16, 8uLL, a3);
  if ( v10 >= 0 )
  {
    v12 = *(unsigned __int16 *)v16;
    memset(v16, 0, a3);
    *(_DWORD *)v16 = v12;
    for ( i = (_QWORD *)v8[295]; ; i = (_QWORD *)*i )
    {
      v14 = i - 31;
      if ( v8 + 295 == i )
        goto LABEL_8;
      if ( *((unsigned __int16 *)v14 + 100) == v12 )
        break;
    }
    if ( i == (_QWORD *)248 )
    {
LABEL_8:
      v10 = -1073741811;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
                 WdfDriverGlobals,
                 a2,
                 8LL);
      goto LABEL_9;
    }
    v8[323] = v14;
    v8[316] = a2;
    result = HUBSM_AddHsmEvent((__int64)v8, 2039LL);
LABEL_9:
    if ( v10 >= 0 )
      return result;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
