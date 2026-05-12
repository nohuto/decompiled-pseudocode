/*
 * XREFs of McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24 @ 0x1C004B618
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002484 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24(
        __int64 a1,
        __int64 a2,
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
        struct _MCGEN_TRACE_CONTEXT *a13,
        __int64 a14,
        char a15,
        int a16,
        __int64 a17,
        int a18,
        __int64 a19,
        int a20,
        __int64 a21,
        int a22,
        __int64 a23,
        int a24,
        __int64 a25,
        int a26,
        __int64 a27,
        int a28,
        __int64 a29)
{
  unsigned __int64 *p_Logger; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v33; // rdx
  __int64 v34; // rcx
  int v35; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v36; // rdx
  __int64 v37; // rcx
  int v38; // ecx
  struct _MCGEN_TRACE_CONTEXT *v39; // rcx
  int v40; // eax
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-C0h] BYREF
  int *v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  char *v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  char *v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  char *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  struct _MCGEN_TRACE_CONTEXT *v65; // [rsp+E0h] [rbp-20h]
  int v66; // [rsp+E8h] [rbp-18h]
  int v67; // [rsp+ECh] [rbp-14h]
  __int64 *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  char *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  int *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  int v75; // [rsp+128h] [rbp+28h]
  int v76; // [rsp+12Ch] [rbp+2Ch]
  int *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  int v80; // [rsp+148h] [rbp+48h]
  int v81; // [rsp+14Ch] [rbp+4Ch]
  int *v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  __int64 v84; // [rsp+160h] [rbp+60h]
  int v85; // [rsp+168h] [rbp+68h]
  int v86; // [rsp+16Ch] [rbp+6Ch]
  int *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int64 v89; // [rsp+180h] [rbp+80h]
  int v90; // [rsp+188h] [rbp+88h]
  int v91; // [rsp+18Ch] [rbp+8Ch]
  int *v92; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  __int64 v94; // [rsp+1A0h] [rbp+A0h]
  int v95; // [rsp+1A8h] [rbp+A8h]
  int v96; // [rsp+1ACh] [rbp+ACh]
  int *v97; // [rsp+1B0h] [rbp+B0h]
  __int64 v98; // [rsp+1B8h] [rbp+B8h]
  __int64 v99; // [rsp+1C0h] [rbp+C0h]
  int v100; // [rsp+1C8h] [rbp+C8h]
  int v101; // [rsp+1CCh] [rbp+CCh]
  int *v102; // [rsp+1D0h] [rbp+D0h]
  __int64 v103; // [rsp+1D8h] [rbp+D8h]
  __int64 v104; // [rsp+1E0h] [rbp+E0h]
  int v105; // [rsp+1E8h] [rbp+E8h]
  int v106; // [rsp+1ECh] [rbp+ECh]
  int v107; // [rsp+228h] [rbp+128h] BYREF

  v107 = a4;
  p_Logger = a10;
  v42 = g_SystemUptime_s;
  v44 = &v107;
  v46 = &a5;
  v45 = 4LL;
  v48 = &a6;
  v50 = &a7;
  v52 = a8;
  v54 = a9;
  v30 = -1LL;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 1LL;
  v53 = 16LL;
  v55 = 16LL;
  if ( a10 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *((_WORD *)a10 + v31) );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v57 = v32;
  v58 = 0;
  if ( !a10 )
    p_Logger = &Context.Logger;
  v33 = a11;
  v56 = p_Logger;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)&a11->RegistrationHandle + v34) );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v60 = v35;
  v61 = 0;
  if ( !a11 )
    v33 = &Context;
  v59 = v33;
  v36 = a12;
  if ( a12 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_BYTE *)&a12->RegistrationHandle + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v63 = v38;
  v39 = a13;
  if ( !a12 )
    v36 = &Context;
  v64 = 0;
  v62 = v36;
  if ( a13 )
  {
    do
      ++v30;
    while ( *((_BYTE *)&a13->RegistrationHandle + v30) );
    v40 = v30 + 1;
  }
  else
  {
    v40 = 5;
  }
  v66 = v40;
  v67 = 0;
  v68 = &v42;
  v76 = 0;
  v70 = &a15;
  if ( !a13 )
    v39 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v81 = 0;
  v72 = &a16;
  v74 = a17;
  v75 = a16;
  v77 = &a18;
  v79 = a19;
  v80 = a18;
  v82 = &a20;
  v84 = a21;
  v85 = a20;
  v87 = &a22;
  v89 = a23;
  v90 = a22;
  v92 = &a24;
  v94 = a25;
  v95 = a24;
  v97 = &a26;
  v99 = a27;
  v100 = a26;
  v102 = &a28;
  v104 = a29;
  v105 = a28;
  v86 = 0;
  v91 = 0;
  v96 = 0;
  v101 = 0;
  v106 = 0;
  v65 = v39;
  v69 = 8LL;
  v71 = 4LL;
  v73 = 4LL;
  v78 = 4LL;
  v83 = 4LL;
  v88 = 4LL;
  v93 = 4LL;
  v98 = 4LL;
  v103 = 4LL;
  return McGenEventWrite(v39, &EventUnitDeviceStatisticsLogs, 0LL, 0x1Bu, &EventData);
}
