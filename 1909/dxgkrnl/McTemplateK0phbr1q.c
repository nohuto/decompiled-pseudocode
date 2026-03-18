/*
 * XREFs of McTemplateK0phbr1q @ 0x1C004B554
 * Callers:
 *     DpiDispatchInternalIoctl @ 0x1C00EDD70 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPnp @ 0x1C0143850 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C01492A0 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C0159060 (DpiDispatchPower.c)
 *     DpiDispatchSystemControl @ 0x1C029E2D0 (DpiDispatchSystemControl.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001F10 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

ULONG McTemplateK0phbr1q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  __int16 v4; // [rsp+30h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-21h] BYREF
  va_list v6; // [rsp+50h] [rbp-11h]
  __int64 v7; // [rsp+58h] [rbp-9h]
  __int16 *v8; // [rsp+60h] [rbp-1h]
  __int64 v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  __int64 v11; // [rsp+78h] [rbp+17h]
  va_list v12; // [rsp+80h] [rbp+1Fh]
  __int64 v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  __int64 v16; // [rsp+D0h] [rbp+6Fh]
  __int64 v17; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v7 = 8LL;
  v4 = 72;
  va_copy(v6, va);
  v9 = 2LL;
  v8 = &v4;
  v10 = v17;
  va_copy(v12, va1);
  v11 = 72LL;
  v13 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, (LPCGUID)0x48, 5u, &EventData);
}
