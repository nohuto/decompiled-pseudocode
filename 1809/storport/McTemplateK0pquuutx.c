/*
 * XREFs of McTemplateK0pquuutx @ 0x1C0041E08
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00446C0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG McTemplateK0pquuutx(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-79h] BYREF
  __int64 v5; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-69h] BYREF
  va_list v7; // [rsp+50h] [rbp-59h]
  __int64 v8; // [rsp+58h] [rbp-51h]
  va_list v9; // [rsp+60h] [rbp-49h]
  __int64 v10; // [rsp+68h] [rbp-41h]
  va_list v11; // [rsp+70h] [rbp-39h]
  __int64 v12; // [rsp+78h] [rbp-31h]
  va_list v13; // [rsp+80h] [rbp-29h]
  __int64 v14; // [rsp+88h] [rbp-21h]
  va_list v15; // [rsp+90h] [rbp-19h]
  __int64 v16; // [rsp+98h] [rbp-11h]
  int *v17; // [rsp+A0h] [rbp-9h]
  __int64 v18; // [rsp+A8h] [rbp-1h]
  __int64 *v19; // [rsp+B0h] [rbp+7h]
  __int64 v20; // [rsp+B8h] [rbp+Fh]
  __int64 v21; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+4Fh]
  __int64 v23; // [rsp+100h] [rbp+57h] BYREF
  va_list va1; // [rsp+100h] [rbp+57h]
  __int64 v25; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+5Fh]
  __int64 v27; // [rsp+110h] [rbp+67h] BYREF
  va_list va3; // [rsp+110h] [rbp+67h]
  va_list va4; // [rsp+118h] [rbp+6Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  v10 = 4LL;
  v5 = 0LL;
  va_copy(v7, va);
  v4 = 0;
  va_copy(v9, va1);
  v8 = 8LL;
  va_copy(v11, va2);
  va_copy(v13, va3);
  va_copy(v15, va4);
  v17 = &v4;
  v19 = &v5;
  v12 = 1LL;
  v14 = 1LL;
  v16 = 1LL;
  v18 = 4LL;
  v20 = 8LL;
  return McGenEventWrite(a1, &EventUnitPowerRequiredStart, 0LL, 8u, &EventData);
}
