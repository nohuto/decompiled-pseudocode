/*
 * XREFs of PpmEventThermalCapChange @ 0x1402E653C
 * Callers:
 *     PpmRegisterPerfCap @ 0x1402DB5A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x1402E4748 (PpmFireWmiEvent.c)
 */

char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  char result; // al
  REGHANDLE v4; // rdi
  __int16 v5; // ax
  __int16 v6; // [rsp+40h] [rbp-19h] BYREF
  int v7; // [rsp+48h] [rbp-11h] BYREF
  int *v8; // [rsp+50h] [rbp-9h] BYREF
  int v9; // [rsp+58h] [rbp-1h]
  int v10; // [rsp+5Ch] [rbp+3h]
  int v11; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+17h] BYREF
  __int64 v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  int *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  v12 = *(_QWORD *)(a1 + 200);
  v7 = a2;
  v11 = a2;
  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = &v11;
    v9 = 16;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1236u, 0x401802u);
  }
  result = WmiThermalEventEnabled;
  if ( WmiThermalEventEnabled )
    result = PpmFireWmiEvent(a1 + 24032, (__int128 *)&PPM_THERMALCONSTRAINT_GUID, 0x10u, &v11);
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_THERMAL_CAP_CHANGE);
    if ( result )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v16 = 0;
      v19 = 0;
      v6 = v5;
      UserData.Ptr = (ULONGLONG)&v6;
      v14 = a1 + 209;
      v17 = &v7;
      UserData.Size = 2;
      v15 = 1;
      v18 = 4;
      return EtwWriteEx(v4, &PPM_ETW_THERMAL_CAP_CHANGE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
