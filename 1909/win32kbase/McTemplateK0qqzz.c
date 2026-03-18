/*
 * XREFs of McTemplateK0qqzz @ 0x1C005845C
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0056460 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqzz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const struct _MCGEN_TRACE_CONTEXT *a6,
        struct _MCGEN_TRACE_CONTEXT *a7)
{
  const struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  bool v13; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h]
  char *v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  const struct _MCGEN_TRACE_CONTEXT *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  struct _MCGEN_TRACE_CONTEXT *v23; // [rsp+70h] [rbp+1Fh]
  int v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+7Ch] [rbp+2Bh]
  int v26; // [rsp+B8h] [rbp+67h] BYREF

  v26 = a4;
  v7 = a6;
  v16 = &v26;
  v17 = 4LL;
  v18 = &a5;
  v8 = -1LL;
  v19 = 4LL;
  v9 = 10;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)&a6->RegistrationHandle + v10) );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v21 = v11;
  v22 = 0;
  if ( !a6 )
    v7 = &Context;
  v20 = v7;
  v12 = a7;
  v13 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( *((_WORD *)&a7->RegistrationHandle + v8) );
    v9 = 2 * v8 + 2;
    v13 = a7 == 0LL;
  }
  if ( v13 )
    v12 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v24 = v9;
  v23 = v12;
  v25 = 0;
  return McGenEventWrite(v12, (PCEVENT_DESCRIPTOR)&Context.MatchAnyKeyword, (LPCGUID)&Context.Flags, 5u, &EventData);
}
