/*
 * XREFs of McTemplateK0zqjuuussssx @ 0x1C0027EE4
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG McTemplateK0zqjuuussssx(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const struct _MCGEN_TRACE_CONTEXT *a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        ...)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  const struct _MCGEN_TRACE_CONTEXT *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  const struct _MCGEN_TRACE_CONTEXT *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const struct _MCGEN_TRACE_CONTEXT *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const struct _MCGEN_TRACE_CONTEXT *v25; // rax
  __int64 v26; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-C9h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v29; // [rsp+40h] [rbp-B9h]
  int v30; // [rsp+48h] [rbp-B1h]
  int v31; // [rsp+4Ch] [rbp-ADh]
  char *v32; // [rsp+50h] [rbp-A9h]
  __int64 v33; // [rsp+58h] [rbp-A1h]
  __int64 v34; // [rsp+60h] [rbp-99h]
  __int64 v35; // [rsp+68h] [rbp-91h]
  char *v36; // [rsp+70h] [rbp-89h]
  __int64 v37; // [rsp+78h] [rbp-81h]
  char *v38; // [rsp+80h] [rbp-79h]
  __int64 v39; // [rsp+88h] [rbp-71h]
  char *v40; // [rsp+90h] [rbp-69h]
  __int64 v41; // [rsp+98h] [rbp-61h]
  const struct _MCGEN_TRACE_CONTEXT *v42; // [rsp+A0h] [rbp-59h]
  int v43; // [rsp+A8h] [rbp-51h]
  int v44; // [rsp+ACh] [rbp-4Dh]
  const struct _MCGEN_TRACE_CONTEXT *v45; // [rsp+B0h] [rbp-49h]
  int v46; // [rsp+B8h] [rbp-41h]
  int v47; // [rsp+BCh] [rbp-3Dh]
  const struct _MCGEN_TRACE_CONTEXT *v48; // [rsp+C0h] [rbp-39h]
  int v49; // [rsp+C8h] [rbp-31h]
  int v50; // [rsp+CCh] [rbp-2Dh]
  const struct _MCGEN_TRACE_CONTEXT *v51; // [rsp+D0h] [rbp-29h]
  int v52; // [rsp+D8h] [rbp-21h]
  int v53; // [rsp+DCh] [rbp-1Dh]
  va_list v54; // [rsp+E0h] [rbp-19h]
  __int64 v55; // [rsp+E8h] [rbp-11h]
  va_list va; // [rsp+178h] [rbp+7Fh] BYREF

  va_start(va, a13);
  v13 = -1LL;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&a4->RegistrationHandle + v14) );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v30 = v15;
  v16 = a10;
  v31 = 0;
  v33 = 4LL;
  if ( !a4 )
    a4 = &Context;
  v35 = 16LL;
  v29 = a4;
  v32 = &a5;
  v34 = a6;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  if ( a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_BYTE *)&a10->RegistrationHandle + v17) );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v43 = v18;
  v44 = 0;
  if ( !a10 )
    v16 = &stru_1C0055A88;
  v42 = v16;
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
  v46 = v21;
  v47 = 0;
  if ( !a11 )
    v19 = &stru_1C0055A88;
  v45 = v19;
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
  v49 = v24;
  v25 = a13;
  if ( !a12 )
    v22 = &stru_1C0055A88;
  v50 = 0;
  v48 = v22;
  if ( a13 )
  {
    do
      ++v13;
    while ( *((_BYTE *)&a13->RegistrationHandle + v13) );
    v26 = (unsigned int)(v13 + 1);
  }
  else
  {
    v26 = 5LL;
  }
  v52 = v26;
  v53 = 0;
  if ( !a13 )
    v25 = &stru_1C0055A88;
  v55 = 8LL;
  v51 = v25;
  va_copy(v54, va);
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v26, &EventSMRUnsupportedZoneSizeError, 0LL, 0xCu, &EventData);
}
