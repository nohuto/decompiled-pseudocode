/*
 * XREFs of McTemplateK0quuujjzsssxqqbr12uhqbr16 @ 0x1C004CAE8
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0050A84 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjzsssxqqbr12uhqbr16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        struct _MCGEN_TRACE_CONTEXT *a13,
        int a14,
        char a15,
        int a16,
        __int64 a17,
        char a18,
        char a19,
        int a20,
        __int64 a21)
{
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v28; // rdx
  __int64 v29; // rcx
  int v30; // ecx
  struct _MCGEN_TRACE_CONTEXT *v31; // rcx
  int v32; // eax
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-C0h] BYREF
  int *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  char *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  struct _MCGEN_TRACE_CONTEXT *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  __int64 *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  int *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  __int64 v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  char *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  int *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  int v76; // [rsp+168h] [rbp+68h]
  int v77; // [rsp+16Ch] [rbp+6Ch]
  int v78; // [rsp+1A8h] [rbp+A8h] BYREF

  v78 = a4;
  v21 = a10;
  v34 = g_SystemUptime_s;
  v36 = &v78;
  v38 = &a5;
  v37 = 4LL;
  v40 = &a6;
  v42 = &a7;
  v44 = a8;
  v46 = a9;
  v22 = -1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 16LL;
  v47 = 16LL;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)&a10[2 * v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v49 = v24;
  v50 = 0;
  if ( !a10 )
    v21 = (char *)&Context.Logger + 4;
  v25 = a11;
  v48 = v21;
  if ( a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *((_BYTE *)&a11->RegistrationHandle + v26) );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v52 = v27;
  v53 = 0;
  if ( !a11 )
    v25 = &Context;
  v51 = v25;
  v28 = a12;
  if ( a12 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *((_BYTE *)&a12->RegistrationHandle + v29) );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v55 = v30;
  v31 = a13;
  if ( !a12 )
    v28 = &Context;
  v56 = 0;
  v54 = v28;
  if ( a13 )
  {
    do
      ++v22;
    while ( *((_BYTE *)&a13->RegistrationHandle + v22) );
    v32 = v22 + 1;
  }
  else
  {
    v32 = 5;
  }
  v58 = v32;
  v59 = 0;
  v60 = &v34;
  v68 = 0;
  v62 = &a15;
  if ( !a13 )
    v31 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v77 = 0;
  v64 = &a16;
  v66 = a17;
  v67 = a16;
  v69 = &a18;
  v71 = &a19;
  v73 = &a20;
  v75 = a21;
  v76 = a20;
  v57 = v31;
  v61 = 8LL;
  v63 = 4LL;
  v65 = 4LL;
  v70 = 1LL;
  v72 = 2LL;
  v74 = 4LL;
  return McGenEventWrite(v31, &EventUnitNvmeHealthLog, 0LL, 0x13u, &EventData);
}
