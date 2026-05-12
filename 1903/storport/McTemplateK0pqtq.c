/*
 * XREFs of McTemplateK0pqtq @ 0x1C003E5D4
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022760 (StorPortAdapterPowerNotRequiredStep1.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqtq(struct _MCGEN_TRACE_CONTEXT *a1, _DWORD a2, _DWORD a3, __int64 a4, ...)
{
  int v5; // [rsp+30h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-21h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  int *v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  va_list v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+6Fh]
  __int64 v18; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v15 = a4;
  v8 = 8LL;
  v5 = 0;
  v7 = &v15;
  v10 = 4LL;
  va_copy(v9, va);
  v12 = 4LL;
  v11 = &v5;
  v14 = 4LL;
  va_copy(v13, va1);
  return McGenEventWrite(a1, &EventAdapterPowerNotRequiredStart, 0LL, 5u, &EventData);
}
