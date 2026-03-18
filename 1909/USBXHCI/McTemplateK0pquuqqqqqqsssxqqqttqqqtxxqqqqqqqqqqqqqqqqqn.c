/*
 * XREFs of McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn @ 0x1C0007270
 * Callers:
 *     Etw_ControllerRundown @ 0x1C00014AC (Etw_ControllerRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00029D4 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
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
        __int64 a47)
{
  const struct _MCGEN_TRACE_CONTEXT *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v51; // rdx
  __int64 v52; // rcx
  int v53; // ecx
  struct _MCGEN_TRACE_CONTEXT *v54; // rcx
  int v55; // eax
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v58; // [rsp+40h] [rbp-C0h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  char *v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  char *v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  char *v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  char *v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  char *v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  char *v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  char *v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  char *v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  char *v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  const struct _MCGEN_TRACE_CONTEXT *v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h]
  int v80; // [rsp+ECh] [rbp-14h]
  const struct _MCGEN_TRACE_CONTEXT *v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F8h] [rbp-8h]
  int v83; // [rsp+FCh] [rbp-4h]
  struct _MCGEN_TRACE_CONTEXT *v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  char *v87; // [rsp+110h] [rbp+10h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  char *v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  char *v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  char *v93; // [rsp+140h] [rbp+40h]
  __int64 v94; // [rsp+148h] [rbp+48h]
  char *v95; // [rsp+150h] [rbp+50h]
  __int64 v96; // [rsp+158h] [rbp+58h]
  char *v97; // [rsp+160h] [rbp+60h]
  __int64 v98; // [rsp+168h] [rbp+68h]
  char *v99; // [rsp+170h] [rbp+70h]
  __int64 v100; // [rsp+178h] [rbp+78h]
  char *v101; // [rsp+180h] [rbp+80h]
  __int64 v102; // [rsp+188h] [rbp+88h]
  char *v103; // [rsp+190h] [rbp+90h]
  __int64 v104; // [rsp+198h] [rbp+98h]
  char *v105; // [rsp+1A0h] [rbp+A0h]
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  char *v107; // [rsp+1B0h] [rbp+B0h]
  __int64 v108; // [rsp+1B8h] [rbp+B8h]
  char *v109; // [rsp+1C0h] [rbp+C0h]
  __int64 v110; // [rsp+1C8h] [rbp+C8h]
  char *v111; // [rsp+1D0h] [rbp+D0h]
  __int64 v112; // [rsp+1D8h] [rbp+D8h]
  char *v113; // [rsp+1E0h] [rbp+E0h]
  __int64 v114; // [rsp+1E8h] [rbp+E8h]
  char *v115; // [rsp+1F0h] [rbp+F0h]
  __int64 v116; // [rsp+1F8h] [rbp+F8h]
  char *v117; // [rsp+200h] [rbp+100h]
  __int64 v118; // [rsp+208h] [rbp+108h]
  char *v119; // [rsp+210h] [rbp+110h]
  __int64 v120; // [rsp+218h] [rbp+118h]
  char *v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  char *v123; // [rsp+230h] [rbp+130h]
  __int64 v124; // [rsp+238h] [rbp+138h]
  char *v125; // [rsp+240h] [rbp+140h]
  __int64 v126; // [rsp+248h] [rbp+148h]
  char *v127; // [rsp+250h] [rbp+150h]
  __int64 v128; // [rsp+258h] [rbp+158h]
  char *v129; // [rsp+260h] [rbp+160h]
  __int64 v130; // [rsp+268h] [rbp+168h]
  char *v131; // [rsp+270h] [rbp+170h]
  __int64 v132; // [rsp+278h] [rbp+178h]
  char *v133; // [rsp+280h] [rbp+180h]
  __int64 v134; // [rsp+288h] [rbp+188h]
  char *v135; // [rsp+290h] [rbp+190h]
  __int64 v136; // [rsp+298h] [rbp+198h]
  char *v137; // [rsp+2A0h] [rbp+1A0h]
  __int64 v138; // [rsp+2A8h] [rbp+1A8h]
  char *v139; // [rsp+2B0h] [rbp+1B0h]
  __int64 v140; // [rsp+2B8h] [rbp+1B8h]
  char *v141; // [rsp+2C0h] [rbp+1C0h]
  __int64 v142; // [rsp+2C8h] [rbp+1C8h]
  char *v143; // [rsp+2D0h] [rbp+1D0h]
  __int64 v144; // [rsp+2D8h] [rbp+1D8h]
  __int64 v145; // [rsp+2E0h] [rbp+1E0h]
  __int64 v146; // [rsp+2E8h] [rbp+1E8h]
  __int64 v147; // [rsp+328h] [rbp+228h] BYREF

  v147 = a4;
  v47 = a14;
  v58 = &v147;
  v59 = 8LL;
  v60 = &a5;
  v62 = &a6;
  v64 = &a7;
  v61 = 4LL;
  v66 = &a8;
  v68 = &a9;
  v70 = &a10;
  v72 = &a11;
  v74 = &a12;
  v76 = &a13;
  v48 = -1LL;
  v63 = 1LL;
  v65 = 1LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  if ( a14 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_BYTE *)&a14->RegistrationHandle + v49) );
    v50 = v49 + 1;
  }
  else
  {
    v50 = 5;
  }
  v79 = v50;
  v80 = 0;
  if ( !a14 )
    v47 = &Context;
  v78 = v47;
  v51 = a15;
  if ( a15 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( *((_BYTE *)&a15->RegistrationHandle + v52) );
    v53 = v52 + 1;
  }
  else
  {
    v53 = 5;
  }
  v82 = v53;
  v54 = a16;
  if ( !a15 )
    v51 = &Context;
  v83 = 0;
  v81 = v51;
  if ( a16 )
  {
    do
      ++v48;
    while ( *((_BYTE *)&a16->RegistrationHandle + v48) );
    v55 = v48 + 1;
  }
  else
  {
    v55 = 5;
  }
  v85 = v55;
  v86 = 0;
  v87 = &a17;
  if ( !a16 )
    v54 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v84 = v54;
  v89 = &a18;
  v91 = &a19;
  v93 = &a20;
  v95 = &a21;
  v97 = &a22;
  v99 = &a23;
  v101 = &a24;
  v103 = &a25;
  v105 = &a26;
  v107 = &a27;
  v109 = &a28;
  v111 = &a29;
  v113 = &a30;
  v115 = &a31;
  v117 = &a32;
  v119 = &a33;
  v121 = &a34;
  v123 = &a35;
  v125 = &a36;
  v127 = &a37;
  v129 = &a38;
  v131 = &a39;
  v133 = &a40;
  v135 = &a41;
  v88 = 8LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 8LL;
  v110 = 8LL;
  v112 = 4LL;
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
  v137 = &a42;
  v138 = 4LL;
  v139 = &a43;
  v140 = 4LL;
  v141 = &a44;
  v143 = &a45;
  v145 = a47;
  v142 = 4LL;
  v144 = 4LL;
  v146 = 64LL;
  return McGenEventWrite(v54, &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION_V3, a3, 0x2Cu, &EventData);
}
