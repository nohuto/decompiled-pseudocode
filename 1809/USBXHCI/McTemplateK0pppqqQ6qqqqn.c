/*
 * XREFs of McTemplateK0pppqqQ6qqqqn @ 0x1C0039AEC
 * Callers:
 *     Etw_DeviceCreate @ 0x1C00392FC (Etw_DeviceCreate.c)
 *     Etw_DeviceDelete @ 0x1C0039394 (Etw_DeviceDelete.c)
 *     Etw_DeviceRundown @ 0x1C003942C (Etw_DeviceRundown.c)
 *     Etw_DeviceUpdate @ 0x1C00394E8 (Etw_DeviceUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C000252C (McGenEventWrite.c)
 */

ULONG McTemplateK0pppqqQ6qqqqn(
        struct _MCGEN_TRACE_CONTEXT *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-C9h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-B9h]
  __int64 v15; // [rsp+48h] [rbp-B1h]
  char *v16; // [rsp+50h] [rbp-A9h]
  __int64 v17; // [rsp+58h] [rbp-A1h]
  char *v18; // [rsp+60h] [rbp-99h]
  __int64 v19; // [rsp+68h] [rbp-91h]
  char *v20; // [rsp+70h] [rbp-89h]
  __int64 v21; // [rsp+78h] [rbp-81h]
  char *v22; // [rsp+80h] [rbp-79h]
  __int64 v23; // [rsp+88h] [rbp-71h]
  __int64 v24; // [rsp+90h] [rbp-69h]
  __int64 v25; // [rsp+98h] [rbp-61h]
  char *v26; // [rsp+A0h] [rbp-59h]
  __int64 v27; // [rsp+A8h] [rbp-51h]
  char *v28; // [rsp+B0h] [rbp-49h]
  __int64 v29; // [rsp+B8h] [rbp-41h]
  char *v30; // [rsp+C0h] [rbp-39h]
  __int64 v31; // [rsp+C8h] [rbp-31h]
  va_list v32; // [rsp+D0h] [rbp-29h]
  __int64 v33; // [rsp+D8h] [rbp-21h]
  __int64 v34; // [rsp+E0h] [rbp-19h]
  __int64 v35; // [rsp+E8h] [rbp-11h]
  __int64 v36; // [rsp+128h] [rbp+2Fh] BYREF
  __int64 v37; // [rsp+170h] [rbp+77h] BYREF
  va_list va; // [rsp+170h] [rbp+77h]
  __int64 v39; // [rsp+178h] [rbp+7Fh]
  __int64 v40; // [rsp+180h] [rbp+87h]
  va_list va1; // [rsp+188h] [rbp+8Fh] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v37 = va_arg(va1, _QWORD);
  v39 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v36 = a4;
  v15 = 8LL;
  v14 = &v36;
  v17 = 8LL;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v24 = a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  va_copy(v32, va);
  v34 = v40;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 24LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 18LL;
  return McGenEventWrite(a1, a2, a3, 0xCu, &EventData);
}
