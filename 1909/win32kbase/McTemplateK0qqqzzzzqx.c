/*
 * XREFs of McTemplateK0qqqzzzzqx @ 0x1C00B0820
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0034AE0 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqqzzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const struct _MCGEN_TRACE_CONTEXT *a7,
        const struct _MCGEN_TRACE_CONTEXT *a8,
        const struct _MCGEN_TRACE_CONTEXT *a9,
        struct _MCGEN_TRACE_CONTEXT *a10,
        char a11,
        char a12)
{
  const struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  int v17; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  struct _MCGEN_TRACE_CONTEXT *v21; // rcx
  int v22; // edx
  __int64 v24; // rdx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-99h] BYREF
  int *v26; // [rsp+40h] [rbp-89h]
  __int64 v27; // [rsp+48h] [rbp-81h]
  char *v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  char *v30; // [rsp+60h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-61h]
  const struct _MCGEN_TRACE_CONTEXT *v32; // [rsp+70h] [rbp-59h]
  int v33; // [rsp+78h] [rbp-51h]
  int v34; // [rsp+7Ch] [rbp-4Dh]
  const struct _MCGEN_TRACE_CONTEXT *v35; // [rsp+80h] [rbp-49h]
  int v36; // [rsp+88h] [rbp-41h]
  int v37; // [rsp+8Ch] [rbp-3Dh]
  const struct _MCGEN_TRACE_CONTEXT *v38; // [rsp+90h] [rbp-39h]
  int v39; // [rsp+98h] [rbp-31h]
  int v40; // [rsp+9Ch] [rbp-2Dh]
  struct _MCGEN_TRACE_CONTEXT *v41; // [rsp+A0h] [rbp-29h]
  int v42; // [rsp+A8h] [rbp-21h]
  int v43; // [rsp+ACh] [rbp-1Dh]
  char *v44; // [rsp+B0h] [rbp-19h]
  __int64 v45; // [rsp+B8h] [rbp-11h]
  char *v46; // [rsp+C0h] [rbp-9h]
  __int64 v47; // [rsp+C8h] [rbp-1h]
  int v48; // [rsp+108h] [rbp+3Fh] BYREF

  v48 = a4;
  v12 = a7;
  v26 = &v48;
  v27 = 4LL;
  v28 = &a5;
  v30 = &a6;
  v13 = -1LL;
  v29 = 4LL;
  v31 = 4LL;
  if ( a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&a7->RegistrationHandle + v14) );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v33 = v15;
  v34 = 0;
  if ( !a7 )
    v12 = &Context;
  v32 = v12;
  v16 = a8;
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *((_WORD *)&a8->RegistrationHandle + v24) );
    v17 = 2 * v24 + 2;
  }
  else
  {
    v17 = 10;
  }
  v36 = v17;
  v37 = 0;
  if ( !a8 )
    v16 = &Context;
  v35 = v16;
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
  v39 = v20;
  v40 = 0;
  if ( !a9 )
    v18 = &Context;
  v38 = v18;
  v21 = a10;
  if ( a10 )
  {
    do
      ++v13;
    while ( *((_WORD *)&a10->RegistrationHandle + v13) );
    v22 = 2 * v13 + 2;
  }
  else
  {
    v22 = 10;
  }
  v42 = v22;
  v44 = &a11;
  v43 = 0;
  v46 = &a12;
  v45 = 4LL;
  if ( !a10 )
    v21 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v41 = v21;
  v47 = 8LL;
  return McGenEventWrite(v21, &ImmersiveInputProcessDelayEvent, (LPCGUID)&Context.Flags, 0xAu, &EventData);
}
