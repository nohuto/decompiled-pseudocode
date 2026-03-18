/*
 * XREFs of McTemplateK0hhq @ 0x1C010FFC8
 * Callers:
 *     EtwTracePointerCoalesce @ 0x1C010DFF0 (EtwTracePointerCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C010E2D0 (EtwTracePointerNoCoalesce.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0hhq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int16 a4,
        char a5,
        char a6)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  __int16 *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int16 v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v9 = 2LL;
  v8 = &v14;
  v11 = 2LL;
  v10 = &a5;
  v13 = 4LL;
  v12 = &a6;
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 4u, &EventData);
}
