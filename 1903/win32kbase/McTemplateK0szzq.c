/*
 * XREFs of McTemplateK0szzq @ 0x1C0132804
 * Callers:
 *     EtwSyscallFilterMessage @ 0x1C0131FF0 (EtwSyscallFilterMessage.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0szzq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        const struct _MCGEN_TRACE_CONTEXT *a5,
        const struct _MCGEN_TRACE_CONTEXT *a6,
        char a7)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  const struct _MCGEN_TRACE_CONTEXT *v10; // rax
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v14; // rax
  bool v15; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v18; // [rsp+40h] [rbp-11h]
  int v19; // [rsp+48h] [rbp-9h]
  int v20; // [rsp+4Ch] [rbp-5h]
  const struct _MCGEN_TRACE_CONTEXT *v21; // [rsp+50h] [rbp-1h]
  int v22; // [rsp+58h] [rbp+7h]
  int v23; // [rsp+5Ch] [rbp+Bh]
  const struct _MCGEN_TRACE_CONTEXT *v24; // [rsp+60h] [rbp+Fh]
  int v25; // [rsp+68h] [rbp+17h]
  int v26; // [rsp+6Ch] [rbp+1Bh]
  char *v27; // [rsp+70h] [rbp+1Fh]
  __int64 v28; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *((_BYTE *)&a4->RegistrationHandle + v8) );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v19 = v9;
  v10 = a5;
  if ( !a4 )
    a4 = &stru_1C01EAA14;
  v20 = 0;
  v18 = a4;
  v11 = 10;
  if ( a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *((_WORD *)&a5->RegistrationHandle + v12) );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a5 )
    v10 = &Context;
  v21 = v10;
  v14 = a6;
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( *((_WORD *)&a6->RegistrationHandle + v7) );
    v11 = 2 * v7 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v14 = &Context;
  v25 = v11;
  v24 = v14;
  v26 = 0;
  v27 = &a7;
  v28 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v7, &SyscallFilterMessage, (LPCGUID)&Context.Flags, 5u, &EventData);
}
