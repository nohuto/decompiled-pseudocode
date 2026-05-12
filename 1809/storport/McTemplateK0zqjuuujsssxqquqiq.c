/*
 * XREFs of McTemplateK0zqjuuujsssxqquqiq @ 0x1C002A4D0
 * Callers:
 *     StorpTelemetryCollectPerfData @ 0x1C000AFC0 (StorpTelemetryCollectPerfData.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqjuuujsssxqquqiq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20)
{
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  const struct _MCGEN_TRACE_CONTEXT *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const struct _MCGEN_TRACE_CONTEXT *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  const struct _MCGEN_TRACE_CONTEXT *v29; // rax
  __int64 v30; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+4Ch] [rbp-B4h]
  char *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  const struct _MCGEN_TRACE_CONTEXT *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  char *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  char *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  char *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  char *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  char *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]

  v20 = -1LL;
  if ( a4 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *((_WORD *)&a4->RegistrationHandle + v21) );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v34 = v22;
  v23 = a11;
  if ( !a4 )
    a4 = &Context;
  v35 = 0;
  v33 = a4;
  v37 = 4LL;
  v36 = &a5;
  v38 = a6;
  v40 = &a7;
  v42 = &a8;
  v44 = &a9;
  v46 = a10;
  v39 = 16LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *((_BYTE *)&a11->RegistrationHandle + v24) );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v49 = v25;
  v50 = 0;
  if ( !a11 )
    v23 = &stru_1C0055A88;
  v48 = v23;
  v26 = a12;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)&a12->RegistrationHandle + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v52 = v28;
  v29 = a13;
  if ( !a12 )
    v26 = &stru_1C0055A88;
  v53 = 0;
  v51 = v26;
  if ( a13 )
  {
    do
      ++v20;
    while ( *((_BYTE *)&a13->RegistrationHandle + v20) );
    v30 = (unsigned int)(v20 + 1);
  }
  else
  {
    v30 = 5LL;
  }
  v64 = 1LL;
  v55 = v30;
  if ( !a13 )
    v29 = &stru_1C0055A88;
  v56 = 0;
  v54 = v29;
  v58 = 8LL;
  v57 = &a14;
  v59 = &a15;
  v61 = &a16;
  v63 = &a17;
  v65 = &a18;
  v67 = &a19;
  v69 = &a20;
  v60 = 4LL;
  v62 = 4LL;
  v66 = 4LL;
  v68 = 8LL;
  v70 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v30, &EventHighLatencyIo, 0LL, 0x12u, &EventData);
}
