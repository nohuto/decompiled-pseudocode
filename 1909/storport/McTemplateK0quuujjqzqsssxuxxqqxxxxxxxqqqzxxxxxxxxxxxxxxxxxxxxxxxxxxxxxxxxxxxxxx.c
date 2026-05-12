/*
 * XREFs of McTemplateK0quuujjqzqsssxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx @ 0x1C000D678
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C000C9E4 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjqzqsssxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx(
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
        char *a11,
        char a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        const struct _MCGEN_TRACE_CONTEXT *a14,
        const struct _MCGEN_TRACE_CONTEXT *a15,
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
        struct _MCGEN_TRACE_CONTEXT *a32,
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
        char a46,
        char a47,
        char a48,
        char a49,
        char a50,
        char a51,
        char a52,
        char a53,
        char a54,
        char a55,
        char a56,
        char a57,
        char a58,
        char a59,
        char a60,
        char a61,
        char a62,
        char a63)
{
  char a64; // [rsp+6A0h] [rbp+598h] BYREF
  char *v64; // rcx
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v69; // rdx
  __int64 v70; // rcx
  int v71; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v72; // rdx
  __int64 v73; // rcx
  int v74; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v75; // rdx
  __int64 v76; // rcx
  int v77; // ecx
  struct _MCGEN_TRACE_CONTEXT *v78; // rcx
  bool v79; // zf
  __int64 v81; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+48h] [rbp-C0h] BYREF
  int *v83; // [rsp+58h] [rbp-B0h]
  __int64 v84; // [rsp+60h] [rbp-A8h]
  char *v85; // [rsp+68h] [rbp-A0h]
  __int64 v86; // [rsp+70h] [rbp-98h]
  char *v87; // [rsp+78h] [rbp-90h]
  __int64 v88; // [rsp+80h] [rbp-88h]
  char *v89; // [rsp+88h] [rbp-80h]
  __int64 v90; // [rsp+90h] [rbp-78h]
  __int64 v91; // [rsp+98h] [rbp-70h]
  __int64 v92; // [rsp+A0h] [rbp-68h]
  __int64 v93; // [rsp+A8h] [rbp-60h]
  __int64 v94; // [rsp+B0h] [rbp-58h]
  char *v95; // [rsp+B8h] [rbp-50h]
  __int64 v96; // [rsp+C0h] [rbp-48h]
  char *v97; // [rsp+C8h] [rbp-40h]
  int v98; // [rsp+D0h] [rbp-38h]
  int v99; // [rsp+D4h] [rbp-34h]
  char *v100; // [rsp+D8h] [rbp-30h]
  __int64 v101; // [rsp+E0h] [rbp-28h]
  const struct _MCGEN_TRACE_CONTEXT *v102; // [rsp+E8h] [rbp-20h]
  int v103; // [rsp+F0h] [rbp-18h]
  int v104; // [rsp+F4h] [rbp-14h]
  const struct _MCGEN_TRACE_CONTEXT *v105; // [rsp+F8h] [rbp-10h]
  int v106; // [rsp+100h] [rbp-8h]
  int v107; // [rsp+104h] [rbp-4h]
  const struct _MCGEN_TRACE_CONTEXT *v108; // [rsp+108h] [rbp+0h]
  int v109; // [rsp+110h] [rbp+8h]
  int v110; // [rsp+114h] [rbp+Ch]
  __int64 *v111; // [rsp+118h] [rbp+10h]
  __int64 v112; // [rsp+120h] [rbp+18h]
  char *v113; // [rsp+128h] [rbp+20h]
  __int64 v114; // [rsp+130h] [rbp+28h]
  char *v115; // [rsp+138h] [rbp+30h]
  __int64 v116; // [rsp+140h] [rbp+38h]
  char *v117; // [rsp+148h] [rbp+40h]
  __int64 v118; // [rsp+150h] [rbp+48h]
  char *v119; // [rsp+158h] [rbp+50h]
  __int64 v120; // [rsp+160h] [rbp+58h]
  char *v121; // [rsp+168h] [rbp+60h]
  __int64 v122; // [rsp+170h] [rbp+68h]
  char *v123; // [rsp+178h] [rbp+70h]
  __int64 v124; // [rsp+180h] [rbp+78h]
  char *v125; // [rsp+188h] [rbp+80h]
  __int64 v126; // [rsp+190h] [rbp+88h]
  char *v127; // [rsp+198h] [rbp+90h]
  __int64 v128; // [rsp+1A0h] [rbp+98h]
  char *v129; // [rsp+1A8h] [rbp+A0h]
  __int64 v130; // [rsp+1B0h] [rbp+A8h]
  char *v131; // [rsp+1B8h] [rbp+B0h]
  __int64 v132; // [rsp+1C0h] [rbp+B8h]
  char *v133; // [rsp+1C8h] [rbp+C0h]
  __int64 v134; // [rsp+1D0h] [rbp+C8h]
  char *v135; // [rsp+1D8h] [rbp+D0h]
  __int64 v136; // [rsp+1E0h] [rbp+D8h]
  char *v137; // [rsp+1E8h] [rbp+E0h]
  __int64 v138; // [rsp+1F0h] [rbp+E8h]
  char *v139; // [rsp+1F8h] [rbp+F0h]
  __int64 v140; // [rsp+200h] [rbp+F8h]
  char *v141; // [rsp+208h] [rbp+100h]
  __int64 v142; // [rsp+210h] [rbp+108h]
  struct _MCGEN_TRACE_CONTEXT *v143; // [rsp+218h] [rbp+110h]
  int v144; // [rsp+220h] [rbp+118h]
  int v145; // [rsp+224h] [rbp+11Ch]
  char *v146; // [rsp+228h] [rbp+120h]
  __int64 v147; // [rsp+230h] [rbp+128h]
  char *v148; // [rsp+238h] [rbp+130h]
  __int64 v149; // [rsp+240h] [rbp+138h]
  char *v150; // [rsp+248h] [rbp+140h]
  __int64 v151; // [rsp+250h] [rbp+148h]
  char *v152; // [rsp+258h] [rbp+150h]
  __int64 v153; // [rsp+260h] [rbp+158h]
  char *v154; // [rsp+268h] [rbp+160h]
  __int64 v155; // [rsp+270h] [rbp+168h]
  char *v156; // [rsp+278h] [rbp+170h]
  __int64 v157; // [rsp+280h] [rbp+178h]
  char *v158; // [rsp+288h] [rbp+180h]
  __int64 v159; // [rsp+290h] [rbp+188h]
  char *v160; // [rsp+298h] [rbp+190h]
  __int64 v161; // [rsp+2A0h] [rbp+198h]
  char *v162; // [rsp+2A8h] [rbp+1A0h]
  __int64 v163; // [rsp+2B0h] [rbp+1A8h]
  char *v164; // [rsp+2B8h] [rbp+1B0h]
  __int64 v165; // [rsp+2C0h] [rbp+1B8h]
  char *v166; // [rsp+2C8h] [rbp+1C0h]
  __int64 v167; // [rsp+2D0h] [rbp+1C8h]
  char *v168; // [rsp+2D8h] [rbp+1D0h]
  __int64 v169; // [rsp+2E0h] [rbp+1D8h]
  char *v170; // [rsp+2E8h] [rbp+1E0h]
  __int64 v171; // [rsp+2F0h] [rbp+1E8h]
  char *v172; // [rsp+2F8h] [rbp+1F0h]
  __int64 v173; // [rsp+300h] [rbp+1F8h]
  char *v174; // [rsp+308h] [rbp+200h]
  __int64 v175; // [rsp+310h] [rbp+208h]
  char *v176; // [rsp+318h] [rbp+210h]
  __int64 v177; // [rsp+320h] [rbp+218h]
  char *v178; // [rsp+328h] [rbp+220h]
  __int64 v179; // [rsp+330h] [rbp+228h]
  char *v180; // [rsp+338h] [rbp+230h]
  __int64 v181; // [rsp+340h] [rbp+238h]
  char *v182; // [rsp+348h] [rbp+240h]
  __int64 v183; // [rsp+350h] [rbp+248h]
  char *v184; // [rsp+358h] [rbp+250h]
  __int64 v185; // [rsp+360h] [rbp+258h]
  char *v186; // [rsp+368h] [rbp+260h]
  __int64 v187; // [rsp+370h] [rbp+268h]
  char *v188; // [rsp+378h] [rbp+270h]
  __int64 v189; // [rsp+380h] [rbp+278h]
  char *v190; // [rsp+388h] [rbp+280h]
  __int64 v191; // [rsp+390h] [rbp+288h]
  char *v192; // [rsp+398h] [rbp+290h]
  __int64 v193; // [rsp+3A0h] [rbp+298h]
  char *v194; // [rsp+3A8h] [rbp+2A0h]
  __int64 v195; // [rsp+3B0h] [rbp+2A8h]
  char *v196; // [rsp+3B8h] [rbp+2B0h]
  __int64 v197; // [rsp+3C0h] [rbp+2B8h]
  char *v198; // [rsp+3C8h] [rbp+2C0h]
  __int64 v199; // [rsp+3D0h] [rbp+2C8h]
  char *v200; // [rsp+3D8h] [rbp+2D0h]
  __int64 v201; // [rsp+3E0h] [rbp+2D8h]
  char *v202; // [rsp+3E8h] [rbp+2E0h]
  __int64 v203; // [rsp+3F0h] [rbp+2E8h]
  char *v204; // [rsp+3F8h] [rbp+2F0h]
  __int64 v205; // [rsp+400h] [rbp+2F8h]
  char *v206; // [rsp+408h] [rbp+300h]
  __int64 v207; // [rsp+410h] [rbp+308h]
  char *v208; // [rsp+418h] [rbp+310h]
  __int64 v209; // [rsp+420h] [rbp+318h]
  unsigned __int64 *v210; // [rsp+428h] [rbp+320h]
  __int64 v211; // [rsp+430h] [rbp+328h]
  unsigned __int64 *v212; // [rsp+438h] [rbp+330h]
  __int64 v213; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v214; // [rsp+448h] [rbp+340h]
  __int64 v215; // [rsp+450h] [rbp+348h]
  unsigned __int64 *v216; // [rsp+458h] [rbp+350h]
  __int64 v217; // [rsp+460h] [rbp+358h]
  unsigned __int64 *v218; // [rsp+468h] [rbp+360h]
  __int64 v219; // [rsp+470h] [rbp+368h]
  unsigned __int64 *v220; // [rsp+478h] [rbp+370h]
  __int64 v221; // [rsp+480h] [rbp+378h]
  int v222; // [rsp+4C0h] [rbp+3B8h] BYREF

  v222 = a4;
  v64 = a11;
  v81 = g_SystemUptime_s;
  v83 = &v222;
  v85 = &a5;
  v84 = 4LL;
  v87 = &a6;
  v65 = 10;
  v86 = 1LL;
  v89 = &a7;
  v91 = a8;
  v93 = a9;
  v95 = &a10;
  v66 = -1LL;
  v88 = 1LL;
  v90 = 1LL;
  v92 = 16LL;
  v94 = 16LL;
  v96 = 4LL;
  if ( a11 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( *(_WORD *)&a11[2 * v67] );
    v68 = 2 * v67 + 2;
  }
  else
  {
    v68 = 10;
  }
  v69 = a13;
  v98 = v68;
  v99 = 0;
  if ( !a11 )
    v64 = (char *)&Context.Logger + 4;
  v101 = 4LL;
  v97 = v64;
  v100 = &a12;
  if ( a13 )
  {
    v70 = -1LL;
    do
      ++v70;
    while ( *((_BYTE *)&a13->RegistrationHandle + v70) );
    v71 = v70 + 1;
  }
  else
  {
    v71 = 5;
  }
  v103 = v71;
  v104 = 0;
  if ( !a13 )
    v69 = &Context;
  v102 = v69;
  v72 = a14;
  if ( a14 )
  {
    v73 = -1LL;
    do
      ++v73;
    while ( *((_BYTE *)&a14->RegistrationHandle + v73) );
    v74 = v73 + 1;
  }
  else
  {
    v74 = 5;
  }
  v106 = v74;
  v107 = 0;
  if ( !a14 )
    v72 = &Context;
  v105 = v72;
  v75 = a15;
  if ( a15 )
  {
    v76 = -1LL;
    do
      ++v76;
    while ( *((_BYTE *)&a15->RegistrationHandle + v76) );
    v77 = v76 + 1;
  }
  else
  {
    v77 = 5;
  }
  v109 = v77;
  v110 = 0;
  v111 = &v81;
  if ( !a15 )
    v75 = &Context;
  v108 = v75;
  v113 = &a17;
  v115 = &a18;
  v117 = &a19;
  v119 = &a20;
  v121 = &a21;
  v123 = &a22;
  v125 = &a23;
  v127 = &a24;
  v129 = &a25;
  v131 = &a26;
  v133 = &a27;
  v135 = &a28;
  v137 = &a29;
  v139 = &a30;
  v141 = &a31;
  v78 = a32;
  v112 = 8LL;
  v114 = 1LL;
  v116 = 8LL;
  v118 = 8LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 8LL;
  v126 = 8LL;
  v128 = 8LL;
  v130 = 8LL;
  v132 = 8LL;
  v134 = 8LL;
  v136 = 8LL;
  v138 = 4LL;
  v140 = 4LL;
  v142 = 4LL;
  v79 = a32 == 0LL;
  if ( a32 )
  {
    do
      ++v66;
    while ( *((_WORD *)&a32->RegistrationHandle + v66) );
    v65 = 2 * v66 + 2;
    v79 = a32 == 0LL;
  }
  v144 = v65;
  v146 = &a33;
  if ( v79 )
    v78 = (struct _MCGEN_TRACE_CONTEXT *)((char *)&Context.Logger + 4);
  v143 = v78;
  v148 = &a34;
  v150 = &a35;
  v152 = &a36;
  v154 = &a37;
  v156 = &a38;
  v158 = &a39;
  v160 = &a40;
  v162 = &a41;
  v164 = &a42;
  v166 = &a43;
  v168 = &a44;
  v170 = &a45;
  v172 = &a46;
  v174 = &a47;
  v176 = &a48;
  v178 = &a49;
  v180 = &a50;
  v182 = &a51;
  v184 = &a52;
  v186 = &a53;
  v188 = &a54;
  v190 = &a55;
  v192 = &a56;
  v194 = &a57;
  v196 = &a58;
  v145 = 0;
  v147 = 8LL;
  v149 = 8LL;
  v151 = 8LL;
  v153 = 8LL;
  v155 = 8LL;
  v157 = 8LL;
  v159 = 8LL;
  v161 = 8LL;
  v163 = 8LL;
  v165 = 8LL;
  v167 = 8LL;
  v169 = 8LL;
  v171 = 8LL;
  v173 = 8LL;
  v175 = 8LL;
  v177 = 8LL;
  v179 = 8LL;
  v181 = 8LL;
  v183 = 8LL;
  v185 = 8LL;
  v187 = 8LL;
  v189 = 8LL;
  v191 = 8LL;
  v193 = 8LL;
  v195 = 8LL;
  v197 = 8LL;
  v198 = &a59;
  v199 = 8LL;
  v200 = &a60;
  v201 = 8LL;
  v202 = &a61;
  v203 = 8LL;
  v204 = &a62;
  v206 = &a63;
  v208 = &a64;
  v210 = &STACK[0x6A8];
  v212 = &STACK[0x6B0];
  v214 = &STACK[0x6B8];
  v216 = &STACK[0x6C0];
  v218 = &STACK[0x6C8];
  v220 = &STACK[0x6D0];
  v205 = 8LL;
  v207 = 8LL;
  v209 = 8LL;
  v211 = 8LL;
  v213 = 8LL;
  v215 = 8LL;
  v217 = 8LL;
  v219 = 8LL;
  v221 = 8LL;
  return McGenEventWrite(v78, (PCEVENT_DESCRIPTOR)((char *)&Context.MatchAllKeyword + 4), 0LL, 0x44u, &EventData);
}
