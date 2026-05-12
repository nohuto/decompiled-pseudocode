/*
 * XREFs of McTemplateK0zqjuuujsssqqbr11x @ 0x1C0028640
 * Callers:
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C004D79C (StorEtwMiniportBugResetBrokenEvent.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqjuuujsssqqbr11x(
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
        char a17)
{
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  const struct _MCGEN_TRACE_CONTEXT *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const struct _MCGEN_TRACE_CONTEXT *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const struct _MCGEN_TRACE_CONTEXT *v26; // rax
  __int64 v27; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h]
  char *v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  char *v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  char *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  char *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  const struct _MCGEN_TRACE_CONTEXT *v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  char *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  int *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  int v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+10Ch] [rbp+Ch]
  char *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]

  v17 = -1LL;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *((_WORD *)&a4->RegistrationHandle + v18) );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v31 = v19;
  v20 = a11;
  if ( !a4 )
    a4 = &Context;
  v32 = 0;
  v30 = a4;
  v34 = 4LL;
  v33 = &a5;
  v35 = a6;
  v37 = &a7;
  v39 = &a8;
  v41 = &a9;
  v43 = a10;
  v36 = 16LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 16LL;
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
  v46 = v22;
  v47 = 0;
  if ( !a11 )
    v20 = &stru_1C0055A88;
  v45 = v20;
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
  v49 = v25;
  v26 = a13;
  if ( !a12 )
    v23 = &stru_1C0055A88;
  v50 = 0;
  v48 = v23;
  if ( a13 )
  {
    do
      ++v17;
    while ( *((_BYTE *)&a13->RegistrationHandle + v17) );
    v27 = (unsigned int)(v17 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v52 = v27;
  v53 = 0;
  if ( !a13 )
    v26 = &stru_1C0055A88;
  v55 = 4LL;
  v51 = v26;
  v57 = 4LL;
  v54 = &a14;
  v56 = &a15;
  v58 = a16;
  v59 = a15;
  v61 = &a17;
  v60 = 0;
  v62 = 8LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v27, &EventMiniportBugResetBroken, a3, 0xFu, &EventData);
}
