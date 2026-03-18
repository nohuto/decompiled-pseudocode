/*
 * XREFs of McTemplateK0zqzt @ 0x1C0108714
 * Callers:
 *     EtwFontLoadAttemptEvent @ 0x1C0107C80 (EtwFontLoadAttemptEvent.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqzt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        char a5,
        struct _MCGEN_TRACE_CONTEXT *a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  bool v12; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v15; // [rsp+40h] [rbp-11h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  char *v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  struct _MCGEN_TRACE_CONTEXT *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)&a4->RegistrationHandle + v9) );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v16 = v10;
  v18 = &a5;
  v11 = a6;
  if ( !a4 )
    a4 = &Context;
  v17 = 0;
  v15 = a4;
  v19 = 4LL;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( *((_WORD *)&a6->RegistrationHandle + v7) );
    v8 = 2 * v7 + 2;
    v12 = a6 == 0LL;
  }
  v21 = v8;
  v23 = &a7;
  v22 = 0;
  if ( v12 )
    v11 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v20 = v11;
  v24 = 4LL;
  return McGenEventWrite(v11, &FontLoadAttemptEvent, (LPCGUID)&Context.Flags, 5u, &EventData);
}
