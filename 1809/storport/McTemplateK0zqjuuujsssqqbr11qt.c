/*
 * XREFs of McTemplateK0zqjuuujsssqqbr11qt @ 0x1C0028424
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C004C858 (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqjuuujsssqqbr11qt(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        char a14,
        int a15,
        __int64 a16,
        char a17,
        char a18)
{
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  const struct _MCGEN_TRACE_CONTEXT *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const struct _MCGEN_TRACE_CONTEXT *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  const struct _MCGEN_TRACE_CONTEXT *v27; // rax
  __int64 v28; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h]
  char *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  char *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  const struct _MCGEN_TRACE_CONTEXT *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  char *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  int *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h]
  int v60; // [rsp+108h] [rbp+8h]
  int v61; // [rsp+10Ch] [rbp+Ch]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  char *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]

  v18 = -1LL;
  if ( a4 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_WORD *)&a4->RegistrationHandle + v19) );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v32 = v20;
  v21 = a11;
  if ( !a4 )
    a4 = &Context;
  v33 = 0;
  v31 = a4;
  v35 = 4LL;
  v34 = &a5;
  v36 = a6;
  v38 = &a7;
  v40 = &a8;
  v42 = &a9;
  v44 = a10;
  v37 = 16LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 16LL;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *((_BYTE *)&a11->RegistrationHandle + v22) );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v47 = v23;
  v48 = 0;
  if ( !a11 )
    v21 = &stru_1C0055A88;
  v46 = v21;
  v24 = a12;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *((_BYTE *)&a12->RegistrationHandle + v25) );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v50 = v26;
  v27 = a13;
  if ( !a12 )
    v24 = &stru_1C0055A88;
  v51 = 0;
  v49 = v24;
  if ( a13 )
  {
    do
      ++v18;
    while ( *((_BYTE *)&a13->RegistrationHandle + v18) );
    v28 = (unsigned int)(v18 + 1);
  }
  else
  {
    v28 = 5LL;
  }
  v53 = v28;
  v54 = 0;
  if ( !a13 )
    v27 = &stru_1C0055A88;
  v56 = 4LL;
  v52 = v27;
  v58 = 4LL;
  v55 = &a14;
  v57 = &a15;
  v59 = a16;
  v60 = a15;
  v62 = &a17;
  v64 = &a18;
  v61 = 0;
  v63 = 4LL;
  v65 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v28, &EventUnitHwTimeout, a3, 0x10u, &EventData);
}
