/*
 * XREFs of McTemplateK0zzdqq @ 0x1C003D6D4
 * Callers:
 *     RaCallMiniportFindAdapter @ 0x1C001EF8C (RaCallMiniportFindAdapter.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zzdqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        struct _MCGEN_TRACE_CONTEXT *a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  bool v13; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-39h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v16; // [rsp+40h] [rbp-29h]
  int v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+4Ch] [rbp-1Dh]
  struct _MCGEN_TRACE_CONTEXT *v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+5Ch] [rbp-Dh]
  char *v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  char *v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  char *v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)&a4->RegistrationHandle + v10) );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v12 = a5;
  v17 = v11;
  v18 = 0;
  if ( !a4 )
    a4 = &Context;
  v16 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v8;
    while ( *((_WORD *)&a5->RegistrationHandle + v8) );
    v9 = 2 * v8 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v12 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v20 = v9;
  v19 = v12;
  v22 = &a6;
  v21 = 0;
  v24 = &a7;
  v23 = 4LL;
  v26 = &a8;
  v25 = 4LL;
  v27 = 4LL;
  return McGenEventWrite(v12, &EventPortConfigChange, 0LL, 6u, &EventData);
}
