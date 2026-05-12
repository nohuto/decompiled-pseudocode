/*
 * XREFs of McTemplateK0quuujjzsszxqqbr12uhqbr16 @ 0x1C002A258
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C005159C (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjzsszxqqbr12uhqbr16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const struct _MCGEN_TRACE_CONTEXT *a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        int a14,
        char a15,
        int a16,
        __int64 a17,
        char a18,
        char a19,
        int a20,
        __int64 a21)
{
  __int64 v21; // rcx
  int v22; // r9d
  const struct _MCGEN_TRACE_CONTEXT *v23; // rax
  __int64 v24; // rdx
  int v25; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  const struct _MCGEN_TRACE_CONTEXT *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  const struct _MCGEN_TRACE_CONTEXT *v32; // rax
  bool v33; // zf
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-C0h] BYREF
  int *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  char *v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  char *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  const struct _MCGEN_TRACE_CONTEXT *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  const struct _MCGEN_TRACE_CONTEXT *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  __int64 *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  int *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  int v68; // [rsp+128h] [rbp+28h]
  int v69; // [rsp+12Ch] [rbp+2Ch]
  char *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  char *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  int *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  int v77; // [rsp+168h] [rbp+68h]
  int v78; // [rsp+16Ch] [rbp+6Ch]
  int v79; // [rsp+1A8h] [rbp+A8h] BYREF

  v79 = a4;
  v35 = g_SystemUptime_s;
  v21 = -1LL;
  v38 = 4LL;
  v37 = &v79;
  v39 = &a5;
  v40 = 1LL;
  v41 = &a6;
  v22 = 10;
  v42 = 1LL;
  v43 = &a7;
  v45 = a8;
  v47 = a9;
  v23 = a10;
  v44 = 1LL;
  v46 = 16LL;
  v48 = 16LL;
  if ( a10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *((_WORD *)&a10->RegistrationHandle + v24) );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v26 = a11;
  v50 = v25;
  v51 = 0;
  if ( !a10 )
    v23 = &Context;
  v49 = v23;
  if ( a11 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)&a11->RegistrationHandle + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v53 = v28;
  v54 = 0;
  if ( !a11 )
    v26 = &stru_1C0055A88;
  v52 = v26;
  v29 = a12;
  if ( a12 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)&a12->RegistrationHandle + v30) );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v56 = v31;
  v32 = a13;
  if ( !a12 )
    v29 = &stru_1C0055A88;
  v57 = 0;
  v55 = v29;
  v33 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v21;
    while ( *((_WORD *)&a13->RegistrationHandle + v21) );
    v22 = 2 * v21 + 2;
    v33 = a13 == 0LL;
  }
  if ( v33 )
    v32 = &Context;
  v59 = v22;
  v58 = v32;
  v60 = 0;
  v61 = &v35;
  v62 = 8LL;
  v63 = &a15;
  v64 = 4LL;
  v65 = &a16;
  v67 = a17;
  v68 = a16;
  v70 = &a18;
  v72 = &a19;
  v74 = &a20;
  v76 = a21;
  v77 = a20;
  v66 = 4LL;
  v69 = 0;
  v71 = 1LL;
  v73 = 2LL;
  v75 = 4LL;
  v78 = 0;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v21, &EventUnitNvmeHealthLog, 0LL, 0x13u, &EventData);
}
