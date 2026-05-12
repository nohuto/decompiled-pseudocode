/*
 * XREFs of McTemplateK0pqtx @ 0x1C003FA60
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0022CF0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqtx(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-31h] BYREF
  __int64 v5; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-21h] BYREF
  va_list v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  int *v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  __int64 *v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  va_list va1; // [rsp+D0h] [rbp+6Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v8 = 8LL;
  v5 = 0LL;
  va_copy(v7, va);
  v4 = 0;
  va_copy(v9, va1);
  v10 = 4LL;
  v11 = &v4;
  v13 = &v5;
  v12 = 4LL;
  v14 = 8LL;
  return McGenEventWrite(a1, &EventAdapterPowerRequiredStart, 0LL, 5u, &EventData);
}
