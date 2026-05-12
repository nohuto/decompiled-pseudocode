/*
 * XREFs of McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31 @ 0x1C000D280
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C000C0F4 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        unsigned __int64 *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        struct _MCGEN_TRACE_CONTEXT *a14,
        __int64 a15,
        __int64 a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        int a33,
        __int64 a34,
        int a35,
        __int64 a36)
{
  unsigned __int64 *p_Logger; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v40; // rdx
  __int64 v41; // rcx
  int v42; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v43; // rdx
  __int64 v44; // rcx
  int v45; // ecx
  struct _MCGEN_TRACE_CONTEXT *v46; // rcx
  int v47; // eax
  char v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-C0h] BYREF
  int *v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  char *v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  char *v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  char *v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  char *v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v69; // [rsp+D0h] [rbp-30h]
  int v70; // [rsp+D8h] [rbp-28h]
  int v71; // [rsp+DCh] [rbp-24h]
  const struct _MCGEN_TRACE_CONTEXT *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  struct _MCGEN_TRACE_CONTEXT *v75; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+F8h] [rbp-8h]
  int v77; // [rsp+FCh] [rbp-4h]
  __int64 *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  char *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  char *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  char *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  char *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  char *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  char *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  char *v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  char *v94; // [rsp+180h] [rbp+80h]
  __int64 v95; // [rsp+188h] [rbp+88h]
  char *v96; // [rsp+190h] [rbp+90h]
  __int64 v97; // [rsp+198h] [rbp+98h]
  char *v98; // [rsp+1A0h] [rbp+A0h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]
  char *v100; // [rsp+1B0h] [rbp+B0h]
  __int64 v101; // [rsp+1B8h] [rbp+B8h]
  char *v102; // [rsp+1C0h] [rbp+C0h]
  __int64 v103; // [rsp+1C8h] [rbp+C8h]
  char *v104; // [rsp+1D0h] [rbp+D0h]
  __int64 v105; // [rsp+1D8h] [rbp+D8h]
  char *v106; // [rsp+1E0h] [rbp+E0h]
  __int64 v107; // [rsp+1E8h] [rbp+E8h]
  char *v108; // [rsp+1F0h] [rbp+F0h]
  __int64 v109; // [rsp+1F8h] [rbp+F8h]
  char *v110; // [rsp+200h] [rbp+100h]
  __int64 v111; // [rsp+208h] [rbp+108h]
  char *v112; // [rsp+210h] [rbp+110h]
  __int64 v113; // [rsp+218h] [rbp+118h]
  int *v114; // [rsp+220h] [rbp+120h]
  __int64 v115; // [rsp+228h] [rbp+128h]
  __int64 v116; // [rsp+230h] [rbp+130h]
  int v117; // [rsp+238h] [rbp+138h]
  int v118; // [rsp+23Ch] [rbp+13Ch]
  int *v119; // [rsp+240h] [rbp+140h]
  __int64 v120; // [rsp+248h] [rbp+148h]
  __int64 v121; // [rsp+250h] [rbp+150h]
  int v122; // [rsp+258h] [rbp+158h]
  int v123; // [rsp+25Ch] [rbp+15Ch]
  int v124; // [rsp+298h] [rbp+198h] BYREF

  v124 = a4;
  p_Logger = a11;
  v50 = g_SystemUptime_s;
  v52 = &v124;
  v54 = &a5;
  v49 = 4;
  v56 = &a6;
  v58 = &a7;
  v60 = a8;
  v62 = a9;
  v64 = &a10;
  v37 = -1LL;
  v53 = 4LL;
  v55 = 1LL;
  v57 = 1LL;
  v59 = 1LL;
  v61 = 16LL;
  v63 = 16LL;
  v65 = 4LL;
  if ( a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *((_WORD *)a11 + v38) );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v39 = 10;
  }
  v67 = v39;
  v68 = 0;
  if ( !a11 )
    p_Logger = &Context.Logger;
  v40 = a12;
  v66 = p_Logger;
  if ( a12 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( *((_BYTE *)&a12->RegistrationHandle + v41) );
    v42 = v41 + 1;
  }
  else
  {
    v42 = 5;
  }
  v70 = v42;
  v71 = 0;
  if ( !a12 )
    v40 = &Context;
  v69 = v40;
  v43 = a13;
  if ( a13 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( *((_BYTE *)&a13->RegistrationHandle + v44) );
    v45 = v44 + 1;
  }
  else
  {
    v45 = 5;
  }
  v73 = v45;
  v46 = a14;
  if ( !a13 )
    v43 = &Context;
  v74 = 0;
  v72 = v43;
  if ( a14 )
  {
    do
      ++v37;
    while ( *((_BYTE *)&a14->RegistrationHandle + v37) );
    v47 = v37 + 1;
  }
  else
  {
    v47 = 5;
  }
  v76 = v47;
  v77 = 0;
  v78 = &v50;
  v118 = 0;
  v80 = &v49;
  if ( !a14 )
    v46 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v123 = 0;
  v82 = &a17;
  v75 = v46;
  v84 = &a18;
  v79 = 8LL;
  v86 = &a19;
  v88 = &a20;
  v90 = &a21;
  v92 = &a22;
  v94 = &a23;
  v96 = &a24;
  v98 = &a25;
  v100 = &a26;
  v102 = &a27;
  v104 = &a28;
  v106 = &a29;
  v108 = &a30;
  v110 = &a31;
  v112 = &a32;
  v114 = &a33;
  v116 = a34;
  v117 = a33;
  v119 = &a35;
  v121 = a36;
  v122 = a35;
  v81 = 1LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 1LL;
  v99 = 1LL;
  v101 = 1LL;
  v103 = 1LL;
  v105 = 1LL;
  v107 = 1LL;
  v109 = 4LL;
  v111 = 4LL;
  v113 = 8LL;
  v115 = 4LL;
  v120 = 4LL;
  return McGenEventWrite(v46, &EventUnitErrorData, 0LL, 0x22u, &EventData);
}
