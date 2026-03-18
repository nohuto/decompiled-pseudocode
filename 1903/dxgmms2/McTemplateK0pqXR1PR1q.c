/*
 * XREFs of McTemplateK0pqXR1PR1q @ 0x1C002C660
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000A000 (VidSchiUnwaitMonitoredFences.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C0025A44 (McGenEventWrite.c)
 */

ULONG McTemplateK0pqXR1PR1q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-39h] BYREF
  va_list v5; // [rsp+40h] [rbp-29h]
  __int64 v6; // [rsp+48h] [rbp-21h]
  va_list v7; // [rsp+50h] [rbp-19h]
  __int64 v8; // [rsp+58h] [rbp-11h]
  __int64 v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  __int64 v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  va_list v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v21; // [rsp+D8h] [rbp+6Fh]
  __int64 v22; // [rsp+E0h] [rbp+77h]
  va_list va2; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v21 = va_arg(va2, _QWORD);
  v22 = va_arg(va2, _QWORD);
  va_copy(v5, va);
  v10 = 8 * v19;
  va_copy(v7, va1);
  v9 = v21;
  v12 = v22;
  va_copy(v15, va2);
  v13 = 8 * v19;
  v6 = 8LL;
  v8 = 4LL;
  v11 = 0;
  v14 = 0;
  v16 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, &EventUnwaitCpuWaiter, 0LL, 6u, &EventData);
}
