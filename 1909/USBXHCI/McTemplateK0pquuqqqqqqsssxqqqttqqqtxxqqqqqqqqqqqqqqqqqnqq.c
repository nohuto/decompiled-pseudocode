/*
 * XREFs of McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq @ 0x1C000770C
 * Callers:
 *     Etw_ReportControllerHealthWithPortError @ 0x1C0006820 (Etw_ReportControllerHealthWithPortError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00029D4 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const struct _MCGEN_TRACE_CONTEXT *a14,
        const struct _MCGEN_TRACE_CONTEXT *a15,
        struct _MCGEN_TRACE_CONTEXT *a16,
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
        char a33,
        char a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        char a40,
        char a41,
        char a42,
        char a43,
        char a44,
        char a45,
        int a46,
        __int64 a47,
        char a48,
        char a49)
{
  const struct _MCGEN_TRACE_CONTEXT *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v53; // rdx
  __int64 v54; // rcx
  int v55; // ecx
  struct _MCGEN_TRACE_CONTEXT *v56; // rcx
  int v57; // eax
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v60; // [rsp+40h] [rbp-C0h]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  char *v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  char *v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  char *v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h]
  char *v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  char *v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  char *v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  char *v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  char *v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C8h] [rbp-38h]
  char *v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  const struct _MCGEN_TRACE_CONTEXT *v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  const struct _MCGEN_TRACE_CONTEXT *v83; // [rsp+F0h] [rbp-10h]
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  struct _MCGEN_TRACE_CONTEXT *v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  char *v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  char *v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  char *v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  char *v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  char *v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]
  char *v99; // [rsp+160h] [rbp+60h]
  __int64 v100; // [rsp+168h] [rbp+68h]
  char *v101; // [rsp+170h] [rbp+70h]
  __int64 v102; // [rsp+178h] [rbp+78h]
  char *v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]
  char *v105; // [rsp+190h] [rbp+90h]
  __int64 v106; // [rsp+198h] [rbp+98h]
  char *v107; // [rsp+1A0h] [rbp+A0h]
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  char *v109; // [rsp+1B0h] [rbp+B0h]
  __int64 v110; // [rsp+1B8h] [rbp+B8h]
  char *v111; // [rsp+1C0h] [rbp+C0h]
  __int64 v112; // [rsp+1C8h] [rbp+C8h]
  char *v113; // [rsp+1D0h] [rbp+D0h]
  __int64 v114; // [rsp+1D8h] [rbp+D8h]
  char *v115; // [rsp+1E0h] [rbp+E0h]
  __int64 v116; // [rsp+1E8h] [rbp+E8h]
  char *v117; // [rsp+1F0h] [rbp+F0h]
  __int64 v118; // [rsp+1F8h] [rbp+F8h]
  char *v119; // [rsp+200h] [rbp+100h]
  __int64 v120; // [rsp+208h] [rbp+108h]
  char *v121; // [rsp+210h] [rbp+110h]
  __int64 v122; // [rsp+218h] [rbp+118h]
  char *v123; // [rsp+220h] [rbp+120h]
  __int64 v124; // [rsp+228h] [rbp+128h]
  char *v125; // [rsp+230h] [rbp+130h]
  __int64 v126; // [rsp+238h] [rbp+138h]
  char *v127; // [rsp+240h] [rbp+140h]
  __int64 v128; // [rsp+248h] [rbp+148h]
  char *v129; // [rsp+250h] [rbp+150h]
  __int64 v130; // [rsp+258h] [rbp+158h]
  char *v131; // [rsp+260h] [rbp+160h]
  __int64 v132; // [rsp+268h] [rbp+168h]
  char *v133; // [rsp+270h] [rbp+170h]
  __int64 v134; // [rsp+278h] [rbp+178h]
  char *v135; // [rsp+280h] [rbp+180h]
  __int64 v136; // [rsp+288h] [rbp+188h]
  char *v137; // [rsp+290h] [rbp+190h]
  __int64 v138; // [rsp+298h] [rbp+198h]
  char *v139; // [rsp+2A0h] [rbp+1A0h]
  __int64 v140; // [rsp+2A8h] [rbp+1A8h]
  char *v141; // [rsp+2B0h] [rbp+1B0h]
  __int64 v142; // [rsp+2B8h] [rbp+1B8h]
  char *v143; // [rsp+2C0h] [rbp+1C0h]
  __int64 v144; // [rsp+2C8h] [rbp+1C8h]
  char *v145; // [rsp+2D0h] [rbp+1D0h]
  __int64 v146; // [rsp+2D8h] [rbp+1D8h]
  __int64 v147; // [rsp+2E0h] [rbp+1E0h]
  __int64 v148; // [rsp+2E8h] [rbp+1E8h]
  char *v149; // [rsp+2F0h] [rbp+1F0h]
  __int64 v150; // [rsp+2F8h] [rbp+1F8h]
  char *v151; // [rsp+300h] [rbp+200h]
  __int64 v152; // [rsp+308h] [rbp+208h]
  __int64 v153; // [rsp+348h] [rbp+248h] BYREF

  v153 = a4;
  v49 = a14;
  v60 = &v153;
  v61 = 8LL;
  v62 = &a5;
  v64 = &a6;
  v66 = &a7;
  v63 = 4LL;
  v68 = &a8;
  v65 = 1LL;
  v70 = &a9;
  v72 = &a10;
  v74 = &a11;
  v76 = &a12;
  v78 = &a13;
  v50 = -1LL;
  v67 = 1LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  if ( a14 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( *((_BYTE *)&a14->RegistrationHandle + v51) );
    v52 = v51 + 1;
  }
  else
  {
    v52 = 5;
  }
  v81 = v52;
  v82 = 0;
  if ( !a14 )
    v49 = &Context;
  v80 = v49;
  v53 = a15;
  if ( a15 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( *((_BYTE *)&a15->RegistrationHandle + v54) );
    v55 = v54 + 1;
  }
  else
  {
    v55 = 5;
  }
  v84 = v55;
  v56 = a16;
  if ( !a15 )
    v53 = &Context;
  v85 = 0;
  v83 = v53;
  if ( a16 )
  {
    do
      ++v50;
    while ( *((_BYTE *)&a16->RegistrationHandle + v50) );
    v57 = v50 + 1;
  }
  else
  {
    v57 = 5;
  }
  v87 = v57;
  v88 = 0;
  v89 = &a17;
  if ( !a16 )
    v56 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v86 = v56;
  v91 = &a18;
  v93 = &a19;
  v95 = &a20;
  v97 = &a21;
  v99 = &a22;
  v101 = &a23;
  v103 = &a24;
  v105 = &a25;
  v107 = &a26;
  v109 = &a27;
  v111 = &a28;
  v113 = &a29;
  v115 = &a30;
  v117 = &a31;
  v119 = &a32;
  v121 = &a33;
  v123 = &a34;
  v125 = &a35;
  v127 = &a36;
  v129 = &a37;
  v131 = &a38;
  v133 = &a39;
  v135 = &a40;
  v137 = &a41;
  v90 = 8LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 4LL;
  v110 = 8LL;
  v112 = 8LL;
  v114 = 4LL;
  v116 = 4LL;
  v118 = 4LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 4LL;
  v134 = 4LL;
  v136 = 4LL;
  v138 = 4LL;
  v139 = &a42;
  v140 = 4LL;
  v141 = &a43;
  v142 = 4LL;
  v143 = &a44;
  v145 = &a45;
  v147 = a47;
  v149 = &a48;
  v151 = &a49;
  v144 = 4LL;
  v146 = 4LL;
  v148 = 64LL;
  v150 = 4LL;
  v152 = 4LL;
  return McGenEventWrite(v56, &USBXHCI_ETW_EVENT_CONTROLLER_HEALTH, 0LL, 0x2Eu, &EventData);
}
