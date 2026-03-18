/*
 * XREFs of PpmEventThermalCapChange @ 0x140302A88
 * Callers:
 *     PpmRegisterPerfCap @ 0x140170540 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140300E38 (PpmFireWmiEvent.c)
 */

char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  __int64 v3; // rax
  char result; // al
  REGHANDLE v5; // rdi
  __int16 v6; // ax
  __int16 v7; // [rsp+40h] [rbp-19h] BYREF
  int v8; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v9[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v10; // [rsp+58h] [rbp-1h]
  _DWORD *v11; // [rsp+60h] [rbp+7h] BYREF
  int v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+6Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+17h] BYREF
  __int64 v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  int *v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  v9[1] = 0;
  v3 = *(_QWORD *)(a1 + 200);
  v8 = a2;
  v9[0] = a2;
  v10 = v3;
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v13 = 0;
    v11 = v9;
    v12 = 16;
    EtwTraceKernelEvent((__int64)&v11, 1u, 0x80008000, 0x1236u, 0x401802u);
  }
  result = WmiThermalEventEnabled;
  if ( WmiThermalEventEnabled )
    result = PpmFireWmiEvent(a1 + 24032, (__int128 *)&PPM_THERMALCONSTRAINT_GUID, 0x10u, v9);
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_THERMAL_CAP_CHANGE);
    if ( result )
    {
      v6 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v17 = 0;
      v20 = 0;
      v7 = v6;
      UserData.Ptr = (ULONGLONG)&v7;
      v15 = a1 + 209;
      v18 = &v8;
      UserData.Size = 2;
      v16 = 1;
      v19 = 4;
      return EtwWriteEx(v5, &PPM_ETW_THERMAL_CAP_CHANGE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
