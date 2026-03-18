/*
 * XREFs of Controller_ConfigureS0IdleSettings @ 0x1C005E938
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_ExecuteDSM @ 0x1C00603A8 (Controller_ExecuteDSM.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00630D0 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_ConfigureS0IdleSettings(__int64 *a1)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-89h]
  __int16 v6[4]; // [rsp+28h] [rbp-81h]
  __int16 v7; // [rsp+28h] [rbp-81h]
  __int64 v8; // [rsp+30h] [rbp-79h]
  _QWORD v9[10]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v10[10]; // [rsp+90h] [rbp-19h] BYREF
  int v11; // [rsp+110h] [rbp+67h] BYREF

  memset(v10, 0, 0x48uLL);
  memset(v9, 0, 0x48uLL);
  result = a1[42];
  if ( (result & 0x100000) != 0 )
  {
    *((_DWORD *)a1 + 116) = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    result = WPP_RECORDER_SF_(a1[9], 3u, 4u, 0x15u, (__int64)&Context.Logger + 4);
  }
  else
  {
    if ( (result & 0x400000000000000LL) != 0 )
    {
      v5 = 0LL;
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 3LL);
    }
    v7 = 1;
    LOWORD(v5) = 72;
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, GUID *, _QWORD *, __int64, __int16, _QWORD))(WdfFunctions_01023 + 1048))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *a1,
               &GUID_D3COLD_SUPPORT_INTERFACE,
               v9,
               v5,
               v7,
               0LL);
    if ( (int)result >= 0 )
    {
      v11 = 0;
      if ( v9[5] )
      {
        v3 = ((__int64 (__fastcall *)(_QWORD, __int64, int *))v9[5])(v9[1], 1LL, &v11);
        if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v6 = v3;
          WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0x17u, (__int64)&Context.Logger + 4, *(_QWORD *)v6);
        }
      }
      ((void (__fastcall *)(_QWORD))v9[3])(v9[1]);
      result = (unsigned int)v11;
      if ( v11 > 1 )
      {
        *((_DWORD *)a1 + 116) = 0;
        Controller_UpdateIdleTimeout(a1, 5000LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v6 = 5000;
          WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x19u, (__int64)&Context.Logger + 4, *(_QWORD *)v6);
        }
        v4 = *a1;
        v10[1] = Controller_EvtPostPoFxRegisterDevice;
        v10[2] = Controller_EvtPrePoFxUnregisterDevice;
        LODWORD(v10[0]) = 72;
        result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 3400))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v4,
                   v10);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return result;
          *(_DWORD *)v6 = result;
          result = WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0x1Au, (__int64)&Context.Logger + 4, *(_QWORD *)v6);
        }
      }
      else
      {
        *((_DWORD *)a1 + 116) = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        LODWORD(v8) = 1;
        *(_DWORD *)v6 = result;
        result = WPP_RECORDER_SF_dd(a1[9], 4u, 4u, 0x18u, (__int64)&Context.Logger + 4, *(_QWORD *)v6, v8);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v6 = result;
        result = WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x16u, (__int64)&Context.Logger + 4, *(_QWORD *)v6);
      }
      *((_DWORD *)a1 + 116) = 2;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = *((_DWORD *)a1 + 116);
    return WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x1Bu, (__int64)&Context.Logger + 4, *(_QWORD *)v6);
  }
  return result;
}
