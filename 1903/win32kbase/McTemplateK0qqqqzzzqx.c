/*
 * XREFs of McTemplateK0qqqqzzzqx @ 0x1C006C4B0
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C0035E30 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqqqzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const struct _MCGEN_TRACE_CONTEXT *a8,
        const struct _MCGEN_TRACE_CONTEXT *a9,
        const struct _MCGEN_TRACE_CONTEXT *a10,
        char a11,
        char a12)
{
  __int64 v12; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v16; // rax
  int v17; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v18; // rax
  int v19; // edx
  __int64 v21; // rdx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-99h] BYREF
  int *v23; // [rsp+40h] [rbp-89h]
  __int64 v24; // [rsp+48h] [rbp-81h]
  char *v25; // [rsp+50h] [rbp-79h]
  __int64 v26; // [rsp+58h] [rbp-71h]
  char *v27; // [rsp+60h] [rbp-69h]
  __int64 v28; // [rsp+68h] [rbp-61h]
  char *v29; // [rsp+70h] [rbp-59h]
  __int64 v30; // [rsp+78h] [rbp-51h]
  const struct _MCGEN_TRACE_CONTEXT *v31; // [rsp+80h] [rbp-49h]
  int v32; // [rsp+88h] [rbp-41h]
  int v33; // [rsp+8Ch] [rbp-3Dh]
  const struct _MCGEN_TRACE_CONTEXT *v34; // [rsp+90h] [rbp-39h]
  int v35; // [rsp+98h] [rbp-31h]
  int v36; // [rsp+9Ch] [rbp-2Dh]
  const struct _MCGEN_TRACE_CONTEXT *v37; // [rsp+A0h] [rbp-29h]
  int v38; // [rsp+A8h] [rbp-21h]
  int v39; // [rsp+ACh] [rbp-1Dh]
  char *v40; // [rsp+B0h] [rbp-19h]
  __int64 v41; // [rsp+B8h] [rbp-11h]
  char *v42; // [rsp+C0h] [rbp-9h]
  __int64 v43; // [rsp+C8h] [rbp-1h]
  int v44; // [rsp+108h] [rbp+3Fh] BYREF

  v44 = a4;
  v24 = 4LL;
  v23 = &v44;
  v26 = 4LL;
  v25 = &a5;
  v12 = -1LL;
  v28 = 4LL;
  v27 = &a6;
  v30 = 4LL;
  v29 = &a7;
  v13 = a8;
  if ( a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&a8->RegistrationHandle + v14) );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v32 = v15;
  v33 = 0;
  if ( !a8 )
    v13 = &Context;
  v31 = v13;
  v16 = a9;
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *((_WORD *)&a9->RegistrationHandle + v21) );
    v17 = 2 * v21 + 2;
  }
  else
  {
    v17 = 10;
  }
  v35 = v17;
  v36 = 0;
  if ( !a9 )
    v16 = &Context;
  v34 = v16;
  v18 = a10;
  if ( a10 )
  {
    do
      ++v12;
    while ( *((_WORD *)&a10->RegistrationHandle + v12) );
    v19 = 2 * v12 + 2;
  }
  else
  {
    v19 = 10;
  }
  v38 = v19;
  v39 = 0;
  if ( !a10 )
    v18 = &Context;
  v41 = 4LL;
  v37 = v18;
  v43 = 8LL;
  v40 = &a11;
  v42 = &a12;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)v12,
           (PCEVENT_DESCRIPTOR)&Context.EnableLevel,
           (LPCGUID)&Context.Flags,
           0xAu,
           &EventData);
}
