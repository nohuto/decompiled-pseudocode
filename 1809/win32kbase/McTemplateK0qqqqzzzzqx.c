/*
 * XREFs of McTemplateK0qqqqzzzzqx @ 0x1C0050D00
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C00E7090 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqqqzzzzqx(
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
        struct _MCGEN_TRACE_CONTEXT *a11,
        char a12,
        char a13)
{
  const struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r9d
  const struct _MCGEN_TRACE_CONTEXT *v18; // rcx
  __int64 v19; // rdx
  int v20; // r9d
  const struct _MCGEN_TRACE_CONTEXT *v21; // rcx
  __int64 v22; // rdx
  int v23; // r9d
  struct _MCGEN_TRACE_CONTEXT *v24; // rcx
  bool v25; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-B1h] BYREF
  int *v28; // [rsp+40h] [rbp-A1h]
  __int64 v29; // [rsp+48h] [rbp-99h]
  char *v30; // [rsp+50h] [rbp-91h]
  __int64 v31; // [rsp+58h] [rbp-89h]
  char *v32; // [rsp+60h] [rbp-81h]
  __int64 v33; // [rsp+68h] [rbp-79h]
  char *v34; // [rsp+70h] [rbp-71h]
  __int64 v35; // [rsp+78h] [rbp-69h]
  const struct _MCGEN_TRACE_CONTEXT *v36; // [rsp+80h] [rbp-61h]
  int v37; // [rsp+88h] [rbp-59h]
  int v38; // [rsp+8Ch] [rbp-55h]
  const struct _MCGEN_TRACE_CONTEXT *v39; // [rsp+90h] [rbp-51h]
  int v40; // [rsp+98h] [rbp-49h]
  int v41; // [rsp+9Ch] [rbp-45h]
  const struct _MCGEN_TRACE_CONTEXT *v42; // [rsp+A0h] [rbp-41h]
  int v43; // [rsp+A8h] [rbp-39h]
  int v44; // [rsp+ACh] [rbp-35h]
  struct _MCGEN_TRACE_CONTEXT *v45; // [rsp+B0h] [rbp-31h]
  int v46; // [rsp+B8h] [rbp-29h]
  int v47; // [rsp+BCh] [rbp-25h]
  char *v48; // [rsp+C0h] [rbp-21h]
  __int64 v49; // [rsp+C8h] [rbp-19h]
  char *v50; // [rsp+D0h] [rbp-11h]
  __int64 v51; // [rsp+D8h] [rbp-9h]
  int v52; // [rsp+118h] [rbp+37h] BYREF

  v52 = a4;
  v13 = a8;
  v28 = &v52;
  v29 = 4LL;
  v30 = &a5;
  v32 = &a6;
  v34 = &a7;
  v14 = 10;
  v15 = -1LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  if ( a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)&a8->RegistrationHandle + v16) );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v37 = v17;
  v38 = 0;
  if ( !a8 )
    v13 = &Context;
  v36 = v13;
  v18 = a9;
  if ( a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_WORD *)&a9->RegistrationHandle + v19) );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v40 = v20;
  v41 = 0;
  if ( !a9 )
    v18 = &Context;
  v39 = v18;
  v21 = a10;
  if ( a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *((_WORD *)&a10->RegistrationHandle + v22) );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v43 = v23;
  v44 = 0;
  if ( !a10 )
    v21 = &Context;
  v42 = v21;
  v24 = a11;
  v25 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v15;
    while ( *((_WORD *)&a11->RegistrationHandle + v15) );
    v14 = 2 * v15 + 2;
    v25 = a11 == 0LL;
  }
  v46 = v14;
  v48 = &a12;
  v47 = 0;
  v50 = &a13;
  v49 = 4LL;
  if ( v25 )
    v24 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v45 = v24;
  v51 = 8LL;
  return McGenEventWrite(v24, (PCEVENT_DESCRIPTOR)&Context.EnableBitMask, (LPCGUID)&Context.Flags, 0xBu, &EventData);
}
