/*
 * XREFs of McTemplateK0qqm @ 0x1C00EA774
 * Callers:
 *     EtwTraceUserIsActive @ 0x1C00361A0 (EtwTraceUserIsActive.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqm(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  unsigned int v7; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v7 = gSessionId;
  v14 = 8LL;
  v10 = 4LL;
  v9 = &v7;
  v11 = &a5;
  v13 = a6;
  v12 = 4LL;
  return McGenEventWrite(a1, &UserActiveEvent, (LPCGUID)&Context.Flags, 4u, &EventData);
}
