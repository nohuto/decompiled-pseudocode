/*
 * XREFs of McTemplateK0szsz @ 0x1C010840C
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0107ED0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0szsz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        const struct _MCGEN_TRACE_CONTEXT *a5,
        const struct _MCGEN_TRACE_CONTEXT *a6,
        const struct _MCGEN_TRACE_CONTEXT *a7)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  const struct _MCGEN_TRACE_CONTEXT *v10; // rdx
  int v11; // r9d
  __int64 v12; // rax
  int v13; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const struct _MCGEN_TRACE_CONTEXT *v17; // rax
  bool v18; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+48h] [rbp-9h]
  int v23; // [rsp+4Ch] [rbp-5h]
  const struct _MCGEN_TRACE_CONTEXT *v24; // [rsp+50h] [rbp-1h]
  int v25; // [rsp+58h] [rbp+7h]
  int v26; // [rsp+5Ch] [rbp+Bh]
  const struct _MCGEN_TRACE_CONTEXT *v27; // [rsp+60h] [rbp+Fh]
  int v28; // [rsp+68h] [rbp+17h]
  int v29; // [rsp+6Ch] [rbp+1Bh]
  const struct _MCGEN_TRACE_CONTEXT *v30; // [rsp+70h] [rbp+1Fh]
  int v31; // [rsp+78h] [rbp+27h]
  int v32; // [rsp+7Ch] [rbp+2Bh]

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
  v10 = a5;
  v22 = v9;
  v23 = 0;
  if ( !a4 )
    a4 = &stru_1C01A3F30;
  v21 = a4;
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
  v25 = v13;
  v26 = 0;
  if ( !a5 )
    v10 = &Context;
  v24 = v10;
  v14 = a6;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)&a6->RegistrationHandle + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5;
  }
  v28 = v16;
  v17 = a7;
  if ( !a6 )
    v14 = &stru_1C01A3F30;
  v29 = 0;
  v27 = v14;
  v18 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v7;
    while ( *((_WORD *)&a7->RegistrationHandle + v7) );
    v11 = 2 * v7 + 2;
    v18 = a7 == 0LL;
  }
  if ( v18 )
    v17 = &Context;
  v31 = v11;
  v30 = v17;
  v32 = 0;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)v7,
           &TrappedAppContainerRenderEvent,
           (LPCGUID)&Context.Flags,
           5u,
           &EventData);
}
