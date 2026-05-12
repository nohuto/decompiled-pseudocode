/*
 * XREFs of McTemplateK0zqjuuussssq @ 0x1C0027D28
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001D800 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqjuuussssq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
        char a14)
{
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  const struct _MCGEN_TRACE_CONTEXT *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const struct _MCGEN_TRACE_CONTEXT *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const struct _MCGEN_TRACE_CONTEXT *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const struct _MCGEN_TRACE_CONTEXT *v26; // rax
  __int64 v27; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-C9h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v30; // [rsp+40h] [rbp-B9h]
  int v31; // [rsp+48h] [rbp-B1h]
  int v32; // [rsp+4Ch] [rbp-ADh]
  char *v33; // [rsp+50h] [rbp-A9h]
  __int64 v34; // [rsp+58h] [rbp-A1h]
  __int64 v35; // [rsp+60h] [rbp-99h]
  __int64 v36; // [rsp+68h] [rbp-91h]
  char *v37; // [rsp+70h] [rbp-89h]
  __int64 v38; // [rsp+78h] [rbp-81h]
  char *v39; // [rsp+80h] [rbp-79h]
  __int64 v40; // [rsp+88h] [rbp-71h]
  char *v41; // [rsp+90h] [rbp-69h]
  __int64 v42; // [rsp+98h] [rbp-61h]
  const struct _MCGEN_TRACE_CONTEXT *v43; // [rsp+A0h] [rbp-59h]
  int v44; // [rsp+A8h] [rbp-51h]
  int v45; // [rsp+ACh] [rbp-4Dh]
  const struct _MCGEN_TRACE_CONTEXT *v46; // [rsp+B0h] [rbp-49h]
  int v47; // [rsp+B8h] [rbp-41h]
  int v48; // [rsp+BCh] [rbp-3Dh]
  const struct _MCGEN_TRACE_CONTEXT *v49; // [rsp+C0h] [rbp-39h]
  int v50; // [rsp+C8h] [rbp-31h]
  int v51; // [rsp+CCh] [rbp-2Dh]
  const struct _MCGEN_TRACE_CONTEXT *v52; // [rsp+D0h] [rbp-29h]
  int v53; // [rsp+D8h] [rbp-21h]
  int v54; // [rsp+DCh] [rbp-1Dh]
  char *v55; // [rsp+E0h] [rbp-19h]
  __int64 v56; // [rsp+E8h] [rbp-11h]

  v14 = -1LL;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)&a4->RegistrationHandle + v15) );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v31 = v16;
  v17 = a10;
  v32 = 0;
  v34 = 4LL;
  if ( !a4 )
    a4 = &Context;
  v36 = 16LL;
  v30 = a4;
  v33 = &a5;
  v35 = a6;
  v37 = &a7;
  v39 = &a8;
  v41 = &a9;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  if ( a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *((_BYTE *)&a10->RegistrationHandle + v18) );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5;
  }
  v44 = v19;
  v45 = 0;
  if ( !a10 )
    v17 = &stru_1C0055A88;
  v43 = v17;
  v20 = a11;
  if ( a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *((_BYTE *)&a11->RegistrationHandle + v21) );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v47 = v22;
  v48 = 0;
  if ( !a11 )
    v20 = &stru_1C0055A88;
  v46 = v20;
  v23 = a12;
  if ( a12 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *((_BYTE *)&a12->RegistrationHandle + v24) );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v50 = v25;
  v26 = a13;
  if ( !a12 )
    v23 = &stru_1C0055A88;
  v51 = 0;
  v49 = v23;
  if ( a13 )
  {
    do
      ++v14;
    while ( *((_BYTE *)&a13->RegistrationHandle + v14) );
    v27 = (unsigned int)(v14 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v53 = v27;
  v54 = 0;
  if ( !a13 )
    v26 = &stru_1C0055A88;
  v56 = 4LL;
  v52 = v26;
  v55 = &a14;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v27, &EventSMRUnsupportedError, 0LL, 0xCu, &EventData);
}
