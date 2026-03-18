/*
 * XREFs of McTemplateK0pqq @ 0x1C010DF38
 * Callers:
 *     EtwTraceBeginPointerMessageRetrieve @ 0x1C010ACA0 (EtwTraceBeginPointerMessageRetrieve.c)
 *     EtwTraceEndPointerMessageRetrieve @ 0x1C010B390 (EtwTraceEndPointerMessageRetrieve.c)
 *     EtwTranslationUpdateOffset @ 0x1C012FCE0 (EtwTranslationUpdateOffset.c)
 *     EtwTranslationUpdateOffsetDWM @ 0x1C012FD10 (EtwTranslationUpdateOffsetDWM.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqq(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 4u, &EventData);
}
