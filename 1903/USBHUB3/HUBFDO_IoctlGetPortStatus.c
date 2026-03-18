/*
 * XREFs of HUBFDO_IoctlGetPortStatus @ 0x1C00719D4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0074290 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x1C0009798 (HUBSM_AddHsmEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00718F0 (HUBFDO_IoctlValidateParameters.c)
 */

_UNKNOWN **__fastcall HUBFDO_IoctlGetPortStatus(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // ebx
  _UNKNOWN **result; // rax
  int v11; // ebp
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  int v14; // [rsp+28h] [rbp-20h]
  void *v15; // [rsp+30h] [rbp-18h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_1C00640E0);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v15,
         0LL);
  if ( v9 < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = v9;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              v8[315],
                              2u,
                              3u,
                              0x25u,
                              (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
                              v14);
    }
    goto LABEL_10;
  }
  v9 = HUBFDO_IoctlValidateParameters((__int64)v8, 4uLL, a4, v15, 8uLL, a3);
  if ( v9 >= 0 )
  {
    v11 = *(unsigned __int16 *)v15;
    memset(v15, 0, a3);
    *(_DWORD *)v15 = v11;
    for ( i = (_QWORD *)v8[295]; ; i = (_QWORD *)*i )
    {
      v13 = i - 31;
      if ( v8 + 295 == i )
        goto LABEL_9;
      if ( *((unsigned __int16 *)v13 + 100) == v11 )
        break;
    }
    if ( i == (_QWORD *)248 )
    {
LABEL_9:
      v9 = -1073741811;
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
                              WdfDriverGlobals,
                              a2,
                              8LL);
      goto LABEL_10;
    }
    v8[323] = v13;
    v8[316] = a2;
    result = (_UNKNOWN **)HUBSM_AddHsmEvent((__int64)v8, 2039LL);
LABEL_10:
    if ( v9 >= 0 )
      return result;
  }
  return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                        WdfDriverGlobals,
                        a2,
                        (unsigned int)v9);
}
