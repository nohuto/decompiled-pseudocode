/*
 * XREFs of PpmEventTraceCoreParkingSelection @ 0x1402E66A0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140122380 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char PpmEventTraceCoreParkingSelection(__int64 a1, unsigned int a2, ...)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  REGHANDLE v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+48h] [rbp-89h] BYREF
  __int64 v12; // [rsp+50h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-79h] BYREF
  __int64 v14; // [rsp+68h] [rbp-69h]
  __int64 v15; // [rsp+70h] [rbp-61h]
  __int64 *v16; // [rsp+78h] [rbp-59h]
  __int64 v17; // [rsp+80h] [rbp-51h]
  __int64 *v18; // [rsp+88h] [rbp-49h]
  __int64 v19; // [rsp+90h] [rbp-41h]
  va_list v20; // [rsp+98h] [rbp-39h]
  __int64 v21; // [rsp+A0h] [rbp-31h]
  va_list v22; // [rsp+A8h] [rbp-29h]
  __int64 v23; // [rsp+B0h] [rbp-21h]
  __int64 v24; // [rsp+B8h] [rbp-19h]
  __int64 v25; // [rsp+C0h] [rbp-11h]
  va_list v26; // [rsp+C8h] [rbp-9h]
  __int64 v27; // [rsp+D0h] [rbp-1h]
  va_list v28; // [rsp+D8h] [rbp+7h]
  __int64 v29; // [rsp+E0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+4Fh] BYREF
  __int64 v31; // [rsp+138h] [rbp+67h] BYREF
  va_list va; // [rsp+138h] [rbp+67h]
  __int64 v33; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+140h] [rbp+6Fh]
  __int64 v35; // [rsp+148h] [rbp+77h] BYREF
  va_list va2; // [rsp+148h] [rbp+77h]
  va_list va3; // [rsp+150h] [rbp+7Fh] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v35 = va_arg(va3, _QWORD);
  v2 = &retaddr;
  v3 = a2;
  v4 = v31;
  if ( PpmEtwRegistered )
  {
    v6 = PpmEtwHandle;
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARKING_SELECTION);
    if ( (_BYTE)v2 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)&UserData.Size = 2LL;
      v8 = *(_QWORD *)(a1 + 16 + 8 * v3);
      v14 = a1 + 16 + 8 * v3;
      v11 = v8 & v7;
      v9 = v8 & *(_QWORD *)(a1 + 32);
      v31 = v8 & v4;
      v12 = v9;
      v15 = 8LL;
      UserData.Ptr = a1 + 4;
      v17 = 8LL;
      v16 = &v11;
      v18 = &v12;
      va_copy(v20, va);
      va_copy(v22, va1);
      v19 = 8LL;
      v24 = v3 + a1 + 130;
      va_copy(v26, va2);
      va_copy(v28, va3);
      v21 = 8LL;
      v23 = 8LL;
      v25 = 1LL;
      v27 = 1LL;
      v29 = 4LL;
      LOBYTE(v2) = EtwWriteEx(v6, &PPM_ETW_PARKING_SELECTION, 0LL, 0, 0LL, 0LL, 9u, &UserData);
    }
  }
  return (char)v2;
}
