/*
 * XREFs of McTemplateK0quuujjzssz @ 0x1C0039FD0
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C003DA18 (StorpMarkDeviceFailed.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjzssz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        unsigned __int64 *a13)
{
  unsigned __int64 *p_Logger; // rdx
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const struct _MCGEN_TRACE_CONTEXT *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 *v25; // rax
  bool v26; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+38h] [rbp-B1h] BYREF
  int *v29; // [rsp+48h] [rbp-A1h]
  __int64 v30; // [rsp+50h] [rbp-99h]
  char *v31; // [rsp+58h] [rbp-91h]
  __int64 v32; // [rsp+60h] [rbp-89h]
  char *v33; // [rsp+68h] [rbp-81h]
  __int64 v34; // [rsp+70h] [rbp-79h]
  char *v35; // [rsp+78h] [rbp-71h]
  __int64 v36; // [rsp+80h] [rbp-69h]
  __int64 v37; // [rsp+88h] [rbp-61h]
  __int64 v38; // [rsp+90h] [rbp-59h]
  __int64 v39; // [rsp+98h] [rbp-51h]
  __int64 v40; // [rsp+A0h] [rbp-49h]
  unsigned __int64 *v41; // [rsp+A8h] [rbp-41h]
  int v42; // [rsp+B0h] [rbp-39h]
  int v43; // [rsp+B4h] [rbp-35h]
  const struct _MCGEN_TRACE_CONTEXT *v44; // [rsp+B8h] [rbp-31h]
  int v45; // [rsp+C0h] [rbp-29h]
  int v46; // [rsp+C4h] [rbp-25h]
  const struct _MCGEN_TRACE_CONTEXT *v47; // [rsp+C8h] [rbp-21h]
  int v48; // [rsp+D0h] [rbp-19h]
  int v49; // [rsp+D4h] [rbp-15h]
  unsigned __int64 *v50; // [rsp+D8h] [rbp-11h]
  int v51; // [rsp+E0h] [rbp-9h]
  int v52; // [rsp+E4h] [rbp-5h]
  int v53; // [rsp+120h] [rbp+37h] BYREF

  v53 = a4;
  v30 = 4LL;
  v29 = &v53;
  v32 = 1LL;
  v31 = &a5;
  p_Logger = a10;
  v33 = &a6;
  v15 = 10;
  v34 = 1LL;
  v35 = &a7;
  v16 = -1LL;
  v37 = a8;
  v39 = a9;
  v36 = 1LL;
  v38 = 16LL;
  v40 = 16LL;
  if ( a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)a10 + v17) );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v42 = v18;
  v43 = 0;
  if ( !a10 )
    p_Logger = &Context.Logger;
  v41 = p_Logger;
  v19 = a11;
  if ( a11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_BYTE *)&a11->RegistrationHandle + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v45 = v21;
  v46 = 0;
  if ( !a11 )
    v19 = &Context;
  v44 = v19;
  v22 = a12;
  if ( a12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *((_BYTE *)&a12->RegistrationHandle + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v48 = v24;
  v25 = a13;
  if ( !a12 )
    v22 = &Context;
  v49 = 0;
  v47 = v22;
  v26 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v16;
    while ( *((_WORD *)a13 + v16) );
    v15 = 2 * v16 + 2;
    v26 = a13 == 0LL;
  }
  if ( v26 )
    v25 = &Context.Logger;
  v51 = v15;
  v50 = v25;
  v52 = 0;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v16, a2, 0LL, 0xBu, &EventData);
}
