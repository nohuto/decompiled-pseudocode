/*
 * XREFs of McTemplateK0qqsp @ 0x1C00EADB0
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C0068A40 (EtwTraceQueueMessage.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqsp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        struct _MCGEN_TRACE_CONTEXT *a6,
        char a7)
{
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  char *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  struct _MCGEN_TRACE_CONTEXT *v16; // [rsp+60h] [rbp+Fh]
  int v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+6Ch] [rbp+1Bh]
  char *v19; // [rsp+70h] [rbp+1Fh]
  __int64 v20; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+67h] BYREF

  v21 = a4;
  v7 = a6;
  v12 = &v21;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *((_BYTE *)&a6->RegistrationHandle + v8) );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v17 = v9;
  v18 = 0;
  v19 = &a7;
  v20 = 8LL;
  if ( !a6 )
    v7 = (struct _MCGEN_TRACE_CONTEXT *)&stru_1C01A3F30;
  v16 = v7;
  return McGenEventWrite(v7, &QueueNullPostMessage, (LPCGUID)&Context.Flags, 5u, &EventData);
}
