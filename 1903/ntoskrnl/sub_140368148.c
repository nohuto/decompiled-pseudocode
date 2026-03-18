/*
 * XREFs of sub_140368148 @ 0x140368148
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     sub_1401B877C @ 0x1401B877C (sub_1401B877C.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_14036A0A4 @ 0x14036A0A4 (sub_14036A0A4.c)
 *     sub_14036AB20 @ 0x14036AB20 (sub_14036AB20.c)
 *     sub_14036B3BC @ 0x14036B3BC (sub_14036B3BC.c)
 *     sub_14036BC40 @ 0x14036BC40 (sub_14036BC40.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 *     sub_1409D0FB4 @ 0x1409D0FB4 (sub_1409D0FB4.c)
 */

__int64 __fastcall sub_140368148(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int *v4; // r8
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  int *v8; // rax
  unsigned __int64 v9; // r9
  _BYTE *v10; // rbx
  unsigned int v11; // r10d
  unsigned int v12; // r14d
  _BYTE *v13; // r15
  int v14; // r13d
  __int64 v15; // r12
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // edi
  unsigned int v19; // r9d
  _BYTE *v20; // r11
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r11
  unsigned int v29; // eax
  __int64 v30; // r13
  unsigned int v31; // r14d
  __int64 (__fastcall *v32)(__int64, ULONG_PTR *, unsigned int *, unsigned __int64); // rax
  int v33; // ecx
  int *v34; // rax
  int v35; // ecx
  unsigned int v36; // esi
  unsigned int v37; // r11d
  _BYTE *v38; // r14
  unsigned int v39; // r12d
  ULONG_PTR v40; // r15
  int v41; // ecx
  unsigned int v42; // edx
  int v43; // edi
  _BYTE *v44; // r10
  unsigned int v45; // r9d
  unsigned int **v46; // r8
  __int64 v47; // rdi
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rax
  int v53; // eax
  unsigned __int64 v54; // r9
  __int64 v55; // r10
  __int64 v56; // rdx
  int v57; // esi
  unsigned int v58; // edi
  __int64 (__fastcall *v59)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v60; // rdx
  __int64 (__fastcall *v61)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 (__fastcall *v64)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v65)(ULONG_PTR); // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rsi
  int v70; // r9d
  unsigned int v71; // eax
  _BYTE *v72; // rdi
  int v73; // ecx
  unsigned int v74; // eax
  __int64 v75; // r8
  int v76; // edx
  unsigned __int64 v77; // rcx
  int v78; // ebx
  int v79; // ecx
  ULONG_PTR *v80; // r13
  unsigned __int64 v81; // rsi
  _QWORD *v82; // rax
  unsigned int *v83; // r14
  __int64 v84; // r12
  int v85; // ecx
  _QWORD *v86; // r11
  __int64 v87; // rdx
  _QWORD *v88; // r9
  const char *v89; // rax
  int v90; // ebx
  __int64 v91; // r15
  unsigned __int64 v92; // r8
  unsigned int v93; // r10d
  __int64 v94; // rax
  __int64 v95; // r8
  unsigned __int128 v96; // rax
  unsigned int v97; // edx
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 i; // rax
  bool v101; // zf
  unsigned __int64 v102; // r14
  ULONG_PTR v103; // rax
  int v104; // ecx
  char v105; // r13
  __int64 v106; // rdx
  _BYTE *v107; // rdi
  unsigned __int64 v108; // r14
  unsigned int v109; // r9d
  int v110; // ecx
  ULONG_PTR v111; // rbx
  _DWORD *v112; // r12
  _QWORD *v113; // rax
  _QWORD *v114; // r10
  const char *v115; // rax
  int v116; // r11d
  __int64 v117; // r15
  ULONG_PTR v118; // rcx
  ULONG_PTR v119; // r8
  unsigned int v120; // esi
  __int64 v121; // rdx
  ULONG_PTR v122; // rax
  __int64 v123; // r8
  unsigned __int128 v124; // rax
  unsigned int v125; // r9d
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  ULONG_PTR j; // rax
  __int64 v129; // rdx
  int v130; // r13d
  _BYTE *v131; // rsi
  int v132; // r15d
  __int64 v133; // rsi
  unsigned int v134; // eax
  _BYTE *v135; // rbx
  int v136; // ecx
  unsigned int v137; // eax
  __int64 v138; // r8
  int v139; // edx
  unsigned __int64 v140; // rcx
  int v141; // edi
  int v142; // ecx
  int v143; // ecx
  _QWORD *v144; // rax
  __int64 v145; // rdx
  unsigned __int64 v146; // r12
  _QWORD *v147; // r9
  unsigned int v148; // r15d
  int v149; // r11d
  __int64 v150; // rdi
  const char *v151; // rax
  unsigned int v152; // r10d
  __int64 v153; // rax
  __int64 v154; // r8
  unsigned __int128 v155; // rax
  unsigned __int64 v156; // rax
  __int64 v157; // rax
  ULONG_PTR k; // rax
  _BYTE *v159; // r9
  ULONG_PTR v160; // rdi
  BOOL v161; // ecx
  unsigned int v162; // eax
  bool v163; // cf
  __int64 v164; // rsi
  __int64 v165; // rax
  int v166; // ecx
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  ULONG_PTR v169; // r13
  __int64 v170; // rax
  __int64 v171; // r8
  __int64 v172; // r9
  unsigned __int16 v173; // r15
  unsigned int v174; // ecx
  unsigned int *v175; // rdi
  unsigned int *v176; // r12
  unsigned int v177; // r15d
  unsigned int v178; // edx
  unsigned int v179; // r15d
  unsigned int v180; // eax
  __int64 v181; // rax
  unsigned int v182; // esi
  unsigned int v183; // r13d
  unsigned int v184; // esi
  unsigned int *v185; // rax
  __int64 v186; // r9
  unsigned int *v187; // r14
  ULONG_PTR v188; // r8
  unsigned int *v189; // rax
  unsigned int v190; // eax
  int v191; // r10d
  __int64 v192; // rsi
  __int64 v193; // r12
  _BYTE *v194; // rax
  __int64 v195; // rdi
  unsigned int v196; // eax
  _BYTE *v197; // r14
  int v198; // edx
  unsigned int v199; // ecx
  __int64 v200; // r9
  int v201; // r8d
  unsigned __int64 v202; // rax
  int v203; // ebx
  int v204; // ecx
  _BYTE *v205; // rdx
  _QWORD *v206; // rax
  __int64 v207; // rcx
  int v208; // r8d
  unsigned int *v209; // rdi
  unsigned __int64 v210; // rcx
  unsigned __int64 m; // rax
  __int16 v212; // ax
  __int64 v213; // rax
  _DWORD *v214; // r11
  _DWORD *v215; // r8
  __int64 v216; // rcx
  unsigned int v217; // r10d
  __int64 v218; // rdx
  _DWORD *v219; // rax
  __int64 v220; // rcx
  char *v221; // rbx
  int v222; // ecx
  __int16 v223; // ax
  char *v224; // rdx
  __int64 v225; // r8
  char v226; // cl
  char v227; // al
  char *v228; // r8
  unsigned int v229; // edx
  __int64 v230; // rcx
  __int64 v231; // rax
  char v232; // cl
  char v233; // al
  char *v234; // rdx
  char v235; // cl
  char v236; // al
  char *v237; // rdx
  char v238; // cl
  char v239; // al
  int v240; // ecx
  unsigned int v241; // ecx
  __int64 v242; // rsi
  unsigned int *v243; // r8
  unsigned int v244; // ecx
  unsigned int v245; // r15d
  unsigned int v246; // r12d
  unsigned int v247; // r13d
  ULONG_PTR v248; // rdi
  unsigned __int64 v249; // r11
  unsigned int v250; // r8d
  unsigned int *v251; // rcx
  ULONG_PTR v252; // rbx
  ULONG_PTR *v253; // rdx
  _QWORD *v254; // r10
  int v255; // edi
  const char *v256; // rax
  __int64 v257; // rsi
  unsigned __int64 v258; // r8
  unsigned int v259; // ebx
  __int64 v260; // rdx
  __int64 v261; // rax
  __int64 v262; // r8
  unsigned __int64 v263; // rcx
  unsigned __int64 v264; // rdx
  __int64 v265; // rax
  unsigned __int64 v266; // rax
  bool v267; // cc
  int v268; // r12d
  unsigned int *v269; // rdx
  unsigned int *v270; // rsi
  unsigned int v271; // r15d
  char *v272; // rax
  char v273; // r8
  __int64 v274; // rbx
  unsigned __int64 v275; // r11
  unsigned int *v276; // rcx
  ULONG_PTR *v277; // rdx
  ULONG_PTR v278; // rbx
  _QWORD *v279; // r10
  int v280; // edi
  const char *v281; // rax
  __int64 v282; // rsi
  unsigned __int64 v283; // r8
  unsigned int v284; // ebx
  __int64 v285; // rdx
  __int64 v286; // rax
  __int64 v287; // r8
  unsigned __int64 v288; // rcx
  unsigned __int64 v289; // rdx
  __int64 v290; // rax
  unsigned __int64 v291; // rax
  _DWORD *v292; // rax
  ULONG_PTR *v293; // rdx
  unsigned __int64 v294; // r11
  ULONG_PTR v295; // rbx
  unsigned int v296; // r8d
  unsigned int *v297; // rcx
  _QWORD *v298; // r10
  int v299; // edi
  const char *v300; // rax
  __int64 v301; // rsi
  unsigned __int64 v302; // r8
  unsigned int v303; // ebx
  __int64 v304; // rdx
  __int64 v305; // rax
  __int64 *v306; // r10
  __int64 v307; // r8
  unsigned __int64 v308; // rcx
  unsigned __int64 v309; // rdx
  __int64 v310; // rax
  unsigned __int64 v311; // rax
  _DWORD *v312; // r11
  unsigned __int64 v313; // rcx
  char *v314; // rax
  unsigned int v315; // r14d
  unsigned int v316; // r14d
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rdi
  __int64 v321; // rcx
  __int64 v322; // rdi
  __int64 n; // rbx
  __int64 v324; // rax
  __int64 v325; // rdx
  unsigned int v326; // [rsp+48h] [rbp-C0h]
  unsigned int v327; // [rsp+4Ch] [rbp-BCh] BYREF
  char *v328; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD *v330; // [rsp+60h] [rbp-A8h]
  unsigned int v331; // [rsp+68h] [rbp-A0h]
  unsigned int v332; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v333; // [rsp+70h] [rbp-98h]
  ULONG_PTR v334; // [rsp+78h] [rbp-90h]
  _BYTE *v335; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v336; // [rsp+88h] [rbp-80h]
  unsigned int *v337; // [rsp+90h] [rbp-78h]
  __int64 v338; // [rsp+98h] [rbp-70h]
  __int64 v339; // [rsp+A0h] [rbp-68h]
  _BYTE *v340; // [rsp+A8h] [rbp-60h] BYREF
  int v341; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v342; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v343; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v344; // [rsp+C0h] [rbp-48h]
  int v345; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v346; // [rsp+D0h] [rbp-38h]
  int v347; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v348[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v349; // [rsp+100h] [rbp-8h]
  _DWORD v350[6]; // [rsp+108h] [rbp+0h] BYREF
  int *v351; // [rsp+120h] [rbp+18h]
  int v352; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v353; // [rsp+130h] [rbp+28h]
  _BYTE *v354; // [rsp+138h] [rbp+30h]
  char *v355; // [rsp+140h] [rbp+38h]
  char *v356; // [rsp+148h] [rbp+40h]
  char *v357; // [rsp+150h] [rbp+48h]
  char *v358; // [rsp+158h] [rbp+50h]
  ULONG_PTR v359; // [rsp+160h] [rbp+58h] BYREF
  __int64 v360; // [rsp+168h] [rbp+60h]
  __int64 v361; // [rsp+170h] [rbp+68h]
  __int64 v362; // [rsp+178h] [rbp+70h]
  __int64 v363; // [rsp+180h] [rbp+78h]
  __int64 v364; // [rsp+188h] [rbp+80h]
  __int64 v365; // [rsp+190h] [rbp+88h]
  __int64 v366; // [rsp+198h] [rbp+90h]
  _BYTE *v367; // [rsp+1A0h] [rbp+98h]
  _BYTE *v368; // [rsp+1A8h] [rbp+A0h]
  _BYTE *v369; // [rsp+1B0h] [rbp+A8h]
  __int64 v370; // [rsp+1B8h] [rbp+B0h]
  __int64 v371; // [rsp+1C0h] [rbp+B8h]
  __int64 v372; // [rsp+1C8h] [rbp+C0h]
  __int64 v373; // [rsp+1D0h] [rbp+C8h]
  unsigned int v377; // [rsp+240h] [rbp+138h]
  unsigned __int16 v378; // [rsp+240h] [rbp+138h]
  int v379; // [rsp+240h] [rbp+138h]

  v335 = (_BYTE *)*a1;
  v3 = (*((__int64 (__fastcall **)(__int64, __int64 *, int *))v335 + 64))(a2, &v343, &v341);
  v4 = 0LL;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v344 = 0LL;
  v8 = &v345;
  v9 = 1LL;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v10 = v335;
  v11 = 0;
  v12 = *((_DWORD *)v335 + 515);
  if ( v12 )
  {
    v13 = (_BYTE *)*((_QWORD *)v335 + 335);
    v14 = v341;
    v15 = v343;
    v16 = v345;
    v17 = HIDWORD(v344);
    v18 = v344;
    while ( 1 )
    {
      v19 = 0;
      v20 = v13;
      if ( !v13 )
        v20 = v335;
      v4 = (int *)&v20[*((unsigned int *)v20 + 514)];
      if ( v18 && v17 <= v11 )
      {
        v19 = v17;
        v4 = (int *)&v20[v16];
      }
      if ( v19 != v11 )
        break;
LABEL_36:
      v17 = v19;
      LODWORD(v344) = 1;
      v9 = *v4;
      v16 = (_DWORD)v4 - (_DWORD)v20;
      HIDWORD(v344) = v17;
      v345 = (_DWORD)v4 - (_DWORD)v20;
      v18 = 1;
      if ( (unsigned int)v9 > 0x2B
        || (v28 = 0x80000001002LL, !_bittest64(&v28, v9))
        || *((_QWORD *)v4 + 1) != v5
        || v4[4] != v14 )
      {
        v29 = v9 - 33;
        v9 = 1LL;
        if ( v29 > 1 || *((_QWORD *)v4 + 4) != v15 )
        {
          ++v11;
          v4 = 0LL;
          if ( v11 < v12 )
            continue;
        }
      }
      goto LABEL_43;
    }
    v21 = v11 - v19;
    v19 = v11;
    while ( 1 )
    {
      v22 = *v4;
      if ( *v4 > 12 )
        break;
      if ( v22 == 12 )
        goto LABEL_28;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_28;
      v24 = v23 - 6;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
        {
          v27 = *((unsigned __int16 *)v4 + 16);
LABEL_33:
          v26 = (v27 + 55) & 0xFFFFFFF8;
          goto LABEL_34;
        }
        if ( v25 != 2 )
          goto LABEL_30;
        v26 = (unsigned int)(16 * (v4[7] + 3));
      }
      else
      {
        v26 = (unsigned int)(24 * (v4[6] + 2));
      }
LABEL_34:
      v4 = (int *)((char *)v4 + v26);
      if ( !--v21 )
      {
        v15 = v343;
        v14 = v341;
        goto LABEL_36;
      }
    }
    if ( v22 == 28 )
    {
      v27 = *((unsigned __int16 *)v4 + 20);
      goto LABEL_33;
    }
    if ( v22 == 30 )
    {
      v26 = (((v4[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v4 + 20) + 2);
      goto LABEL_34;
    }
    if ( v22 <= 32 )
    {
LABEL_30:
      v26 = 48LL;
      goto LABEL_34;
    }
    if ( v22 <= 34 )
    {
      v26 = 20 * (unsigned int)(((v4[8] & 0xFFF) + (unsigned __int64)(unsigned int)v4[10] + 4095) >> 12) + 48;
      goto LABEL_34;
    }
    if ( v22 != 43 )
      goto LABEL_30;
LABEL_28:
    v26 = 4 * (v4[4] / 0xCu) + 48;
    goto LABEL_34;
  }
LABEL_43:
  if ( v4 )
    return 3221225742LL;
  v30 = a2;
  v31 = a3;
  v32 = (__int64 (__fastcall *)(__int64, ULONG_PTR *, unsigned int *, unsigned __int64))*((_QWORD *)v335 + 64);
  v377 = a3;
  v340 = v335;
  v337 = (unsigned int *)v32(a2, &BugCheckParameter2, &v327, v9);
  if ( !v337 )
  {
    v33 = -1073741701;
    goto LABEL_472;
  }
  v346 = 0LL;
  v34 = &v347;
  v35 = 4;
  do
  {
    *(_BYTE *)v34 = 0;
    v34 = (int *)((char *)v34 + 1);
    --v35;
  }
  while ( v35 );
  v36 = *((_DWORD *)v10 + 515);
  v37 = 0;
  if ( v36 )
  {
    v38 = (_BYTE *)*((_QWORD *)v10 + 335);
    v39 = v327;
    v40 = BugCheckParameter2;
    v41 = v347;
    v42 = HIDWORD(v346);
    v43 = v346;
    while ( 1 )
    {
      v44 = v38;
      v45 = 0;
      if ( !v38 )
        v44 = v10;
      v46 = (unsigned int **)&v44[*((unsigned int *)v44 + 514)];
      if ( v43 && v42 <= v37 )
      {
        v45 = v42;
        v46 = (unsigned int **)&v44[v41];
      }
      if ( v45 != v37 )
        break;
LABEL_80:
      v42 = v45;
      LODWORD(v346) = 1;
      v54 = *(int *)v46;
      v41 = (_DWORD)v46 - (_DWORD)v44;
      HIDWORD(v346) = v42;
      v347 = (_DWORD)v46 - (_DWORD)v44;
      v43 = 1;
      if ( (unsigned int)v54 <= 0x2B )
      {
        v55 = 0x80000001002LL;
        if ( _bittest64(&v55, v54) )
        {
          if ( v46[1] == v337 && *((_DWORD *)v46 + 4) == v39 )
            goto LABEL_88;
        }
      }
      if ( (unsigned int)(v54 - 33) <= 1 && v46[4] == (unsigned int *)v40 )
        goto LABEL_88;
      if ( ++v37 >= v36 )
        goto LABEL_87;
    }
    v47 = v37 - v45;
    v45 = v37;
    while ( 1 )
    {
      v48 = *(_DWORD *)v46;
      if ( *(int *)v46 > 12 )
        break;
      if ( v48 == 12 )
        goto LABEL_72;
      v49 = v48 - 1;
      if ( !v49 )
        goto LABEL_72;
      v50 = v49 - 6;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( !v51 )
        {
          v53 = *((unsigned __int16 *)v46 + 16);
LABEL_77:
          v52 = (v53 + 55) & 0xFFFFFFF8;
          goto LABEL_78;
        }
        if ( v51 != 2 )
          goto LABEL_74;
        v52 = (unsigned int)(16 * (*((_DWORD *)v46 + 7) + 3));
      }
      else
      {
        v52 = (unsigned int)(24 * (*((_DWORD *)v46 + 6) + 2));
      }
LABEL_78:
      v46 = (unsigned int **)((char *)v46 + v52);
      if ( !--v47 )
      {
        v40 = BugCheckParameter2;
        v39 = v327;
        v30 = a2;
        goto LABEL_80;
      }
    }
    if ( v48 == 28 )
    {
      v53 = *((unsigned __int16 *)v46 + 20);
      goto LABEL_77;
    }
    if ( v48 == 30 )
    {
      v52 = (((*((_DWORD *)v46 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v46 + 20) + 2);
      goto LABEL_78;
    }
    if ( v48 <= 32 )
    {
LABEL_74:
      v52 = 48LL;
      goto LABEL_78;
    }
    if ( v48 <= 34 )
    {
      v52 = 20 * (unsigned int)((((_DWORD)v46[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v46 + 10) + 4095) >> 12)
          + 48;
      goto LABEL_78;
    }
    if ( v48 != 43 )
      goto LABEL_74;
LABEL_72:
    v52 = 4 * (*((_DWORD *)v46 + 4) / 0xCu) + 48;
    goto LABEL_78;
  }
LABEL_87:
  v46 = 0LL;
LABEL_88:
  v351 = (int *)v46;
  if ( v46 )
  {
    v33 = -1073741554;
    goto LABEL_471;
  }
  v31 = a3;
  v57 = (*((__int64 (__fastcall **)(__int64))v10 + 85))(v30);
  LODWORD(v330) = v57;
  v332 = v327;
  if ( (a3 & 0x10) == 0 || (*((_DWORD *)v10 + 613) & 0x400) != 0 )
  {
    v58 = a3;
  }
  else
  {
    v58 = a3 & 0xFFFFFFEF;
    v377 = a3 & 0xFFFFFFEF;
  }
  if ( (v58 & 0x10) != 0 && !(unsigned int)sub_14036BC40(v10, BugCheckParameter2) )
  {
    v58 &= ~0x10u;
    v377 = v58;
  }
  if ( (v58 & 2) != 0 && !v57 )
  {
    v33 = 0;
    goto LABEL_472;
  }
  if ( (*((_DWORD *)v10 + 612) & 0x40000000) != 0 )
  {
    v33 = sub_1409D0FB4(&v335, BugCheckParameter2, v58);
    goto LABEL_472;
  }
  v59 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v10 + 62);
  v363 = 0LL;
  v350[4] = 0;
  LOBYTE(v56) = 1;
  v360 = v59(BugCheckParameter2, v56, 0LL, &v327);
  v60 = v360 != 0 ? v327 : 0;
  v327 = v60;
  v61 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 62);
  v350[1] = v60;
  LOBYTE(v60) = 1;
  v62 = v61(BugCheckParameter2, v60, 12LL, &v327);
  v63 = v62;
  v336 = (unsigned int *)v62;
  v361 = v62;
  LOBYTE(v63) = 1;
  v327 &= -(v62 != 0);
  v64 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 62);
  v326 = v327;
  v350[2] = v327;
  v362 = v64(BugCheckParameter2, v63, 10LL, &v327);
  v327 &= -(v362 != 0);
  v65 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v10 + 63);
  v350[3] = v327;
  v66 = v65(BugCheckParameter2);
  if ( !v66 )
  {
    v33 = -1073741701;
    goto LABEL_472;
  }
  v67 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v10 + 147))(BugCheckParameter2, &v352);
  v68 = *((unsigned int *)v10 + 585);
  v364 = v67;
  v350[5] = v352;
  v359 = BugCheckParameter2;
  v350[0] = *(_DWORD *)(v66 + 84);
  LODWORD(v67) = v57;
  v69 = *((unsigned int *)v10 + 505);
  v70 = (_DWORD)v67 != 0 ? 0xB : 0;
  v71 = v69 + 288;
  LODWORD(v328) = v70;
  if ( (unsigned int)(v69 + 288) <= *((_DWORD *)v10 + 647) )
  {
    v72 = v10;
    v338 = (__int64)v10;
    *((_DWORD *)v10 + 505) = v71;
  }
  else
  {
    v338 = sub_14036AB20(v10, v71, v68);
    v72 = (_BYTE *)v338;
    if ( !v338 )
    {
      v33 = -1073741670;
      goto LABEL_472;
    }
    v73 = *((_DWORD *)v10 + 612);
    if ( (v73 & 4) == 0 )
    {
      v74 = *((_DWORD *)v10 + 505);
      v75 = *((_QWORD *)v10 + 249);
      v76 = (v73 & 0x20000000) != 0 ? *((_DWORD *)v10 + 585) : 0;
      if ( v74 >= 8 )
      {
        v77 = (unsigned __int64)v74 >> 3;
        do
        {
          *(_QWORD *)v10 = 0LL;
          v74 -= 8;
          v10 += 8;
          --v77;
        }
        while ( v77 );
      }
      for ( ; v74; --v74 )
        *v10++ = 0;
      v78 = *((_DWORD *)v72 + 585);
      *((_DWORD *)v72 + 585) = v76;
      if ( v76 == 3 )
      {
        (*((void (__fastcall **)(__int64))v72 + 109))(v75);
      }
      else
      {
        v79 = 0;
        if ( (*((_DWORD *)v72 + 612) & 0x10000000) == 0 )
          v79 = v76;
        if ( v79 )
          (*((void (__fastcall **)(__int64, _QWORD))v72 + 69))(v75 - 8, *(_QWORD *)(v75 - 8));
        else
          (*((void (__fastcall **)(__int64))v72 + 32))(v75);
      }
      *((_DWORD *)v72 + 585) = v78;
    }
    *((_DWORD *)v72 + 612) &= ~4u;
    v70 = (int)v328;
  }
  *((_DWORD *)v72 + 515) += 6;
  v80 = &v359;
  v81 = (unsigned __int64)&v72[v69];
  v333 = v81;
  v353 = v81;
  v351 = (int *)v81;
  v82 = (_QWORD *)v81;
  v83 = v350;
  v339 = 6LL;
  do
  {
    v84 = *v83;
    v85 = 48;
    v86 = (_QWORD *)*v80;
    v87 = 6LL;
    do
    {
      *v82 = 0LL;
      v85 -= 8;
      ++v82;
      --v87;
    }
    while ( v87 );
    for ( ; v85; --v85 )
    {
      *(_BYTE *)v82 = 0;
      v82 = (_QWORD *)((char *)v82 + 1);
    }
    *(_DWORD *)v81 = v70;
    *(_QWORD *)(v81 + 8) = v86;
    v88 = v86;
    *(_DWORD *)(v81 + 16) = v84;
    v89 = (const char *)v86;
    *((_DWORD *)v72 + 522) += v84;
    v90 = *((_DWORD *)v72 + 517);
    v91 = *((_QWORD *)v72 + 259);
    if ( v86 < (_QWORD *)((char *)v86 + v84) )
    {
      do
      {
        _mm_prefetch(v89, 0);
        v89 += 64;
      }
      while ( v89 < (const char *)v86 + v84 );
    }
    v92 = *((_QWORD *)v72 + 259);
    v93 = (unsigned int)v84 >> 7;
    if ( (unsigned int)v84 >> 7 )
    {
      do
      {
        v94 = 8LL;
        do
        {
          v95 = v88[1] ^ __ROL8__(*v88 ^ v92, v90);
          v88 += 2;
          v92 = __ROL8__(v95, v90);
          --v94;
        }
        while ( v94 );
        v96 = (__ROL8__(v91 ^ ((char *)v88 - (char *)v86), 17) ^ v91 ^ (unsigned __int64)((char *)v88 - (char *)v86))
            * (unsigned __int128)0x7010008004002001uLL;
        v365 = *((_QWORD *)&v96 + 1);
        v90 = (BYTE8(v96) ^ (unsigned __int8)(v96 ^ v90)) & 0x3F;
        if ( !v90 )
          LOBYTE(v90) = 1;
        --v93;
      }
      while ( v93 );
      v72 = (_BYTE *)v338;
    }
    v97 = v84 & 0x7F;
    if ( v97 >= 8 )
    {
      v98 = (unsigned __int64)(v84 & 0x7F) >> 3;
      do
      {
        v92 = __ROL8__(*v88++ ^ v92, v90);
        v97 -= 8;
        --v98;
      }
      while ( v98 );
    }
    for ( ; v97; --v97 )
    {
      v99 = *(unsigned __int8 *)v88;
      v88 = (_QWORD *)((char *)v88 + 1);
      v92 = __ROL8__(v99 ^ v92, v90);
    }
    for ( i = v92; ; LODWORD(v92) = i ^ v92 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v70 = (int)v328;
    ++v83;
    *(_DWORD *)(v81 + 20) = v92 & 0x7FFFFFFF;
    ++v80;
    *((_DWORD *)v72 + 522) += v84;
    v81 += 48LL;
    v101 = v339-- == 1;
    v82 = (_QWORD *)v81;
    v353 = v81;
  }
  while ( !v101 );
  v102 = v333;
  v103 = BugCheckParameter2;
  v104 = (int)v330;
  *(_DWORD *)v333 = 44;
  *(_QWORD *)(v102 + 24) = v103;
  if ( (*((_DWORD *)v72 + 612) & 0x10200000) != 0 )
    goto LABEL_150;
  if ( !v104 )
  {
    if ( (*((_DWORD *)v72 + 613) & 0x8000) == 0 )
      goto LABEL_152;
    *(_DWORD *)(v102 + 32) |= 1u;
LABEL_150:
    if ( !v104 )
      goto LABEL_152;
  }
  *(_DWORD *)(v102 + 32) |= 2u;
LABEL_152:
  v105 = v377;
  v340 = v72;
  v335 = v72;
  v33 = sub_14036A0A4(
          (unsigned int)&v340,
          (_DWORD)v337,
          v332,
          BugCheckParameter2,
          v104,
          v377,
          (__int64)&v342,
          (__int64)v348);
  if ( v33 < 0 )
    goto LABEL_471;
  v106 = 6LL;
  v107 = v340;
  v108 = (unsigned __int64)&v340[v102 - (_QWORD)v335];
  v109 = v348[0] - v342;
  v110 = 48;
  v111 = BugCheckParameter2 + v342;
  v112 = (_DWORD *)(v108 + 192);
  v333 = v108;
  v113 = (_QWORD *)(v108 + 192);
  v351 = (int *)v108;
  v335 = v340;
  do
  {
    *v113 = 0LL;
    v110 -= 8;
    ++v113;
    --v106;
  }
  while ( v106 );
  for ( ; v110; --v110 )
  {
    *(_BYTE *)v113 = 0;
    v113 = (_QWORD *)((char *)v113 + 1);
  }
  v114 = (_QWORD *)v111;
  *v112 = (_DWORD)v328;
  v115 = (const char *)v111;
  *(_QWORD *)(v108 + 200) = v111;
  *(_DWORD *)(v108 + 208) = v109;
  *((_DWORD *)v107 + 522) += v109;
  v116 = *((_DWORD *)v107 + 517);
  v117 = *((_QWORD *)v107 + 259);
  v118 = v111 + v109;
  if ( v111 < v118 )
  {
    do
    {
      _mm_prefetch(v115, 0);
      v115 += 64;
    }
    while ( (unsigned __int64)v115 < v118 );
  }
  v119 = *((_QWORD *)v107 + 259);
  v120 = v109 >> 7;
  if ( v109 >> 7 )
  {
    do
    {
      v121 = 8LL;
      do
      {
        v122 = v119 ^ *v114;
        v123 = v114[1];
        v114 += 2;
        v119 = __ROL8__(__ROL8__(v122, v116) ^ v123, v116);
        --v121;
      }
      while ( v121 );
      v124 = (__ROL8__(v117 ^ ((unsigned __int64)v114 - v111), 17) ^ v117 ^ ((unsigned __int64)v114 - v111))
           * (unsigned __int128)0x7010008004002001uLL;
      v366 = *((_QWORD *)&v124 + 1);
      v116 = (BYTE8(v124) ^ (unsigned __int8)(v124 ^ v116)) & 0x3F;
      if ( !v116 )
        LOBYTE(v116) = 1;
      --v120;
    }
    while ( v120 );
    v108 = v333;
    v105 = v377;
  }
  v125 = v109 & 0x7F;
  if ( v125 >= 8 )
  {
    v126 = (unsigned __int64)v125 >> 3;
    do
    {
      v119 = __ROL8__(*v114++ ^ v119, v116);
      v125 -= 8;
      --v126;
    }
    while ( v126 );
  }
  for ( ; v125; --v125 )
  {
    v127 = *(unsigned __int8 *)v114;
    v114 = (_QWORD *)((char *)v114 + 1);
    v119 = __ROL8__(v127 ^ v119, v116);
  }
  for ( j = v119 >> 31; j; j >>= 31 )
    v119 = (unsigned int)j ^ (unsigned int)v119;
  v129 = (unsigned int)v330;
  LODWORD(v119) = v119 & 0x7FFFFFFF;
  v112[5] = v119;
  *(_DWORD *)(v108 + 240) = 48;
  if ( *(_DWORD *)(v108 + 256) )
    *(_DWORD *)(v108 + 264) = *(_DWORD *)(v108 + 264) & 0xFFFFFFFE | ((_DWORD)v129 != 0);
  v130 = v105 & 1;
  v335 = v107;
  v131 = (_BYTE *)(v108 + 96);
  v354 = (_BYTE *)(v108 + 96);
  v132 = ((_DWORD)v129 != 0) + 13;
  if ( v108 == -96LL )
  {
    v133 = *((unsigned int *)v107 + 505);
    v134 = v133 + 48;
    if ( (unsigned int)(v133 + 48) <= *((_DWORD *)v107 + 647) )
    {
      v135 = v107;
      *((_DWORD *)v107 + 505) = v134;
    }
    else
    {
      v135 = (_BYTE *)sub_14036AB20(v107, v134, *((unsigned int *)v107 + 585));
      if ( !v135 )
        goto LABEL_194;
      v136 = *((_DWORD *)v107 + 612);
      if ( (v136 & 4) == 0 )
      {
        v137 = *((_DWORD *)v107 + 505);
        v138 = *((_QWORD *)v107 + 249);
        v139 = (v136 & 0x20000000) != 0 ? *((_DWORD *)v107 + 585) : 0;
        if ( v137 >= 8 )
        {
          v140 = (unsigned __int64)v137 >> 3;
          do
          {
            *(_QWORD *)v107 = 0LL;
            v137 -= 8;
            v107 += 8;
            --v140;
          }
          while ( v140 );
        }
        for ( ; v137; --v137 )
          *v107++ = 0;
        v141 = *((_DWORD *)v135 + 585);
        *((_DWORD *)v135 + 585) = v139;
        if ( v139 == 3 )
        {
          (*((void (__fastcall **)(__int64))v135 + 109))(v138);
        }
        else
        {
          v142 = 0;
          if ( (*((_DWORD *)v135 + 612) & 0x10000000) == 0 )
            v142 = v139;
          if ( v142 )
            (*((void (__fastcall **)(__int64, _QWORD))v135 + 69))(v138 - 8, *(_QWORD *)(v138 - 8));
          else
            (*((void (__fastcall **)(__int64))v135 + 32))(v138);
        }
        *((_DWORD *)v135 + 585) = v141;
      }
      *((_DWORD *)v135 + 612) &= ~4u;
    }
    v143 = 48;
    ++*((_DWORD *)v135 + 515);
    v131 = &v135[v133];
    v367 = v131;
    v144 = v131;
    v145 = 6LL;
    do
    {
      *v144 = 0LL;
      v143 -= 8;
      ++v144;
      --v145;
    }
    while ( v145 );
    for ( ; v143; --v143 )
    {
      *(_BYTE *)v144 = 0;
      v144 = (_QWORD *)((char *)v144 + 1);
    }
    v146 = (unsigned __int64)v336;
    *(_DWORD *)v131 = v132;
    v147 = (_QWORD *)v146;
    v148 = v326;
    *((_QWORD *)v131 + 1) = v146;
    *((_DWORD *)v131 + 4) = v326;
    *((_DWORD *)v135 + 522) += v326;
    v149 = *((_DWORD *)v135 + 517);
    v150 = *((_QWORD *)v135 + 259);
    if ( v146 < v146 + v326 )
    {
      v151 = (const char *)v146;
      do
      {
        _mm_prefetch(v151, 0);
        v151 += 64;
      }
      while ( (unsigned __int64)v151 < v146 + v326 );
    }
    v119 = *((_QWORD *)v135 + 259);
    v152 = v326 >> 7;
    if ( v326 >> 7 )
    {
      do
      {
        v153 = 8LL;
        do
        {
          v154 = v147[1] ^ __ROL8__(*v147 ^ v119, v149);
          v147 += 2;
          v119 = __ROL8__(v154, v149);
          --v153;
        }
        while ( v153 );
        v155 = (__ROL8__(v150 ^ ((unsigned __int64)v147 - v146), 17) ^ v150 ^ ((unsigned __int64)v147 - v146))
             * (unsigned __int128)0x7010008004002001uLL;
        v372 = *((_QWORD *)&v155 + 1);
        v149 = (BYTE8(v155) ^ (unsigned __int8)(v155 ^ v149)) & 0x3F;
        if ( !v149 )
          LOBYTE(v149) = 1;
        --v152;
      }
      while ( v152 );
      v108 = v333;
      v148 = v326;
    }
    v129 = v148 & 0x7F;
    if ( (unsigned int)v129 >= 8 )
    {
      v156 = (unsigned __int64)(v148 & 0x7F) >> 3;
      do
      {
        v119 = __ROL8__(*v147++ ^ v119, v149);
        v129 = (unsigned int)(v129 - 8);
        --v156;
      }
      while ( v156 );
    }
    if ( (_DWORD)v129 )
    {
      do
      {
        v157 = *(unsigned __int8 *)v147;
        v147 = (_QWORD *)((char *)v147 + 1);
        v119 = __ROL8__(v157 ^ v119, v149);
        v101 = (_DWORD)v129 == 1;
        v129 = (unsigned int)(v129 - 1);
      }
      while ( !v101 );
    }
    for ( k = v119; ; v119 = (unsigned int)k ^ (unsigned int)v119 )
    {
      k >>= 31;
      if ( !k )
        break;
    }
    LODWORD(v119) = v119 & 0x7FFFFFFF;
    v354 = v131;
    *((_DWORD *)v131 + 5) = v119;
    *((_DWORD *)v135 + 522) += v148;
  }
  else
  {
    v146 = (unsigned __int64)v336;
    v135 = v107;
    *(_DWORD *)v131 = v132;
    v148 = v326;
  }
  v159 = v131;
  if ( (*((_DWORD *)v135 + 612) & 0x40000000) != 0 && v148 )
    sub_1401B877C((__int64)v135, v146, v148, (__int64)(v131 + 28));
  *((_DWORD *)v131 + 6) = 0;
  if ( v130 )
    *((_DWORD *)v131 + 6) = 1;
  v160 = BugCheckParameter2;
  v335 = v135;
  v161 = (_DWORD)v330 != 0;
  v162 = *(_DWORD *)(v108 + 184) & 0xFFFFFFFE;
  *(_DWORD *)(v108 + 144) = 35;
  v163 = *(_DWORD *)(v108 + 160) < 0x94u;
  *(_DWORD *)(v108 + 184) = v162 | v161;
  if ( !v163 )
  {
    v164 = *(_QWORD *)(v108 + 152);
    v165 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v135 + 63))(v160, v129, v119, v159);
    if ( !v165 )
      goto LABEL_194;
    v119 = v160 + *(unsigned int *)(v165 + 80);
    v129 = *(_DWORD *)(v108 + 184) | 2u;
    *(_DWORD *)(v108 + 184) = v129;
    v166 = v129;
    v167 = *(_QWORD **)(v164 + 112);
    if ( (unsigned __int64)v167 >= v160 && (unsigned __int64)v167 < v119 )
    {
      v166 = v129 | 4;
      *(_QWORD *)(v108 + 168) = *v167;
      *(_DWORD *)(v108 + 184) = v129 | 4;
    }
    v168 = *(_QWORD **)(v164 + 120);
    if ( (unsigned __int64)v168 >= v160 && (unsigned __int64)v168 < v119 )
    {
      *(_QWORD *)(v108 + 176) = *v168;
      *(_DWORD *)(v108 + 184) = v166 | 8;
    }
  }
  v101 = (*((_DWORD *)v135 + 612) & 0x400000) == 0;
  v169 = BugCheckParameter2;
  v334 = BugCheckParameter2;
  v340 = v135;
  if ( v101 )
    goto LABEL_470;
  v170 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v135 + 63))(
           BugCheckParameter2,
           v129,
           v119,
           v159);
  v338 = v170;
  if ( !v170 )
    goto LABEL_235;
  v173 = *(_WORD *)(v170 + 6);
  v378 = v173;
  v333 = v332 / 0xCuLL;
  if ( !v173 )
  {
    if ( (*((_DWORD *)v135 + 612) & 0x200000) == 0 )
    {
      v348[1] = 1073753351;
      KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v169, 0LL, 0LL);
    }
    if ( *((_DWORD *)v135 + 574) )
      goto LABEL_235;
    *((_DWORD *)v135 + 574) = 1;
LABEL_240:
    *((_QWORD *)v135 + 288) = v135 - 0x5C5FC0A76E374B18LL;
    goto LABEL_241;
  }
  v174 = 0;
  v172 = v173;
  v175 = v337;
  v326 = 0;
  LODWORD(v328) = v173;
  v349 = 12LL * (v332 / 0xC);
  v336 = (unsigned int *)((char *)v337 + v349);
  v339 = *(unsigned __int16 *)(v170 + 20) + v170 + 24;
  v171 = v339;
  v176 = (unsigned int *)(v339 + 8);
  while ( 1 )
  {
    v177 = v176[2];
    v178 = v176[1];
    if ( v177 <= *v176 )
      v177 = *v176;
    v331 = v176[1];
    v179 = v178 + v177;
    if ( v174 )
    {
      if ( v179 < *(_DWORD *)(v171 + 40LL * (v174 - 1) + 12) )
      {
        if ( (*((_DWORD *)v135 + 612) & 0x200000) == 0 )
        {
          v348[2] = 1073753351;
          KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v169, 1uLL, 0LL);
        }
        if ( *((_DWORD *)v135 + 574) )
          goto LABEL_235;
        *((_DWORD *)v135 + 574) = 1;
        goto LABEL_240;
      }
      v174 = v326;
    }
    if ( v175 != v336 )
      break;
LABEL_271:
    ++v174;
    v176 += 10;
    v326 = v174;
    if ( v174 >= (unsigned int)v172 )
    {
      v191 = v333;
      v192 = v338;
      v193 = v349;
      if ( v175 != v336 )
      {
        if ( (*((_DWORD *)v135 + 612) & 0x200000) == 0 )
        {
          v348[7] = 1073753351;
          KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v169, 3uLL, 0LL);
        }
        if ( *((_DWORD *)v135 + 574) )
          goto LABEL_235;
        v194 = v135 - 0x5C5FC0A76E374B18LL;
LABEL_281:
        *((_QWORD *)v135 + 288) = v194;
        *((_DWORD *)v135 + 574) = 1;
LABEL_241:
        *((_QWORD *)v135 + 289) = 0LL;
        *((_QWORD *)v135 + 290) = 271LL;
        *((_QWORD *)v135 + 291) = v169;
        sub_14036B3BC(v135, 0LL, v171, v172);
        goto LABEL_235;
      }
      v195 = *((unsigned int *)v135 + 505);
      v196 = ((v333 + 6) & 0xFFFFFFF8) + 24 * v172 + v195 + 48;
      if ( v196 <= *((_DWORD *)v135 + 647) )
      {
        v197 = v135;
        v338 = (__int64)v135;
        *((_DWORD *)v135 + 505) = v196;
LABEL_302:
        v205 = &v197[v195];
        ++*((_DWORD *)v197 + 515);
        v206 = &v197[v195];
        v368 = &v197[v195];
        v207 = 6LL;
        v208 = 48;
        do
        {
          *v206 = 0LL;
          v208 -= 8;
          ++v206;
          --v207;
        }
        while ( v207 );
        for ( ; v208; --v208 )
        {
          *(_BYTE *)v206 = 0;
          v206 = (_QWORD *)((char *)v206 + 1);
        }
        v209 = v337;
        *((_QWORD *)v205 + 1) = v337;
        *(_DWORD *)v205 = 30;
        *((_DWORD *)v205 + 4) = 0;
        v210 = *((_QWORD *)v197 + 259);
        for ( m = v210; ; LODWORD(v210) = m ^ v210 )
        {
          m >>= 31;
          if ( !m )
            break;
        }
        v369 = v205;
        v101 = (_DWORD)v330 == 0;
        *((_DWORD *)v205 + 5) = v210 & 0x7FFFFFFF;
        v135 = v197;
        *((_QWORD *)v205 + 3) = v169;
        *((_DWORD *)v205 + 8) = *(_DWORD *)(v192 + 80);
        *((_DWORD *)v205 + 9) = v332;
        *((_WORD *)v205 + 20) = v378;
        v212 = *((_WORD *)v205 + 21) & 0xFFFE;
        v340 = v197;
        *((_WORD *)v205 + 21) = v212 | !v101;
        v213 = *((unsigned __int16 *)v205 + 20);
        v214 = &v205[(((unsigned int)(v191 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
        v328 = v205 + 48;
        v330 = v214;
        v215 = &v214[6 * v213];
        v216 = 12LL;
        if ( !v191 )
          v216 = v193;
        v349 = (__int64)&v214[6 * v213];
        v217 = 0;
        v333 = (unsigned __int64)v209 + v216;
        if ( (_DWORD)v172 )
        {
          v218 = (unsigned int)v172;
          v219 = v214 + 2;
          v172 = 0x80000000LL;
          do
          {
            v220 = 2LL;
            do
            {
              *((_QWORD *)v219 - 1) = 0LL;
              *v219 = 0x80000000;
              v219 += 3;
              --v220;
            }
            while ( v220 );
            --v218;
          }
          while ( v218 );
        }
        if ( v214 == v215 )
        {
LABEL_470:
          v335 = v135;
          v33 = 0;
          goto LABEL_471;
        }
        v221 = (char *)v339;
        while ( 1 )
        {
          if ( (*((_DWORD *)v221 + 9) & 0x2000000) != 0
            || (v222 = *(_DWORD *)v221, *(_DWORD *)v221 == 1414090313) && *((_DWORD *)v221 + 1) == 1195525195
            || v222 == 1162297680 && ((v223 = *((_WORD *)v221 + 2), v223 == 30839) || v223 == 29303 || v223 == 30583)
            || v222 == 1095914053 && *((_WORD *)v221 + 2) == 16724 )
          {
LABEL_345:
            v217 = 1;
          }
          else
          {
            v224 = (char *)*((_QWORD *)v197 + 294);
            LODWORD(v172) = 7;
            v356 = (char *)*((_QWORD *)v197 + 295);
            v225 = v221 - v224;
            v357 = (char *)*((_QWORD *)v197 + 296);
            v358 = (char *)*((_QWORD *)v197 + 297);
            v355 = v224;
            while ( 1 )
            {
              v226 = v224[v225];
              v227 = *v224++;
              if ( v226 != v227 )
                break;
              v172 = (unsigned int)(v172 - 1);
              if ( !(_DWORD)v172 )
                goto LABEL_345;
            }
            v228 = v356;
            v229 = 8;
            v172 = (__int64)v221;
            while ( 1 )
            {
              v230 = *(_QWORD *)v172;
              v172 += 8LL;
              v231 = *(_QWORD *)v228;
              v228 += 8;
              if ( v230 != v231 )
                break;
              v229 -= 8;
              if ( v229 < 8 )
              {
                if ( !v229 )
                  goto LABEL_345;
                while ( 1 )
                {
                  v232 = *(_BYTE *)v172++;
                  v233 = *v228++;
                  if ( v232 != v233 )
                    goto LABEL_338;
                  if ( !--v229 )
                    goto LABEL_345;
                }
              }
            }
LABEL_338:
            v234 = v357;
            LODWORD(v172) = 4;
            while ( 1 )
            {
              v235 = v234[v221 - v357];
              v236 = *v234++;
              if ( v235 != v236 )
                break;
              v172 = (unsigned int)(v172 - 1);
              if ( !(_DWORD)v172 )
                goto LABEL_345;
            }
            v237 = v358;
            v172 = 6LL;
            while ( 1 )
            {
              v238 = v237[v221 - v358];
              v239 = *v237++;
              if ( v238 != v239 )
                break;
              v172 = (unsigned int)(v172 - 1);
              if ( !(_DWORD)v172 )
                goto LABEL_345;
            }
          }
          v240 = *((_DWORD *)v221 + 9);
          if ( v240 < 0 )
            v217 = 1;
          v379 = v217;
          if ( v217 && *(_DWORD *)v221 == 1414090313 && *((_DWORD *)v221 + 1) == 1195525195 )
          {
            if ( (*((_DWORD *)v197 + 613) & 0x2000) != 0 )
              v217 = 0;
            v379 = v217;
          }
          if ( (*((_DWORD *)v197 + 613) & 0x4000) != 0
            && (v240 & 0x20000000) != 0
            && (v169 == *((_QWORD *)v197 + 189) || v169 == *((_QWORD *)v197 + 190)) )
          {
            v217 = 1;
            v379 = 1;
          }
          v241 = *((_DWORD *)v221 + 4);
          v242 = *((unsigned int *)v221 + 3);
          v243 = v336;
          if ( v241 <= *((_DWORD *)v221 + 2) )
            v241 = *((_DWORD *)v221 + 2);
          v244 = v242 + v241;
          v331 = *((_DWORD *)v221 + 3);
          v326 = v244;
          if ( v209 == v336 )
          {
            v245 = 0;
            v246 = 0;
          }
          else
          {
            v245 = *v209;
            v246 = v209[1];
          }
          v332 = v246;
          v247 = v242;
          if ( v209 == v336 || v245 <= (unsigned int)v242 || v246 > v244 )
            break;
          v248 = v334;
          if ( v217 )
            goto LABEL_392;
          *v214 = v242;
          v172 = v245 - (unsigned int)v242;
          v214[1] = v245;
          v249 = v248 + v242;
          v250 = 0;
          v251 = v350;
          v252 = v248 + v242 + v172;
          v253 = &v359;
          v247 = v245;
          do
          {
            if ( v249 < *v253 + *v251 && v252 > *v253 )
            {
              v244 = v326;
              v243 = v336;
              goto LABEL_392;
            }
            ++v250;
            ++v253;
            ++v251;
          }
          while ( v250 < 6 );
          *((_DWORD *)v197 + 522) += v172;
          v254 = (_QWORD *)(v248 + v242);
          v255 = *((_DWORD *)v197 + 517);
          v256 = (const char *)v249;
          v257 = *((_QWORD *)v197 + 259);
          if ( v249 < v252 )
          {
            do
            {
              _mm_prefetch(v256, 0);
              v256 += 64;
            }
            while ( (unsigned __int64)v256 < v252 );
          }
          v258 = *((_QWORD *)v197 + 259);
          v259 = (unsigned int)v172 >> 7;
          if ( (unsigned int)v172 >> 7 )
          {
            do
            {
              v260 = 8LL;
              do
              {
                v261 = v258 ^ *v254;
                v262 = v254[1];
                v254 += 2;
                v258 = __ROL8__(__ROL8__(v261, v255) ^ v262, v255);
                --v260;
              }
              while ( v260 );
              v263 = __ROL8__(v257 ^ ((unsigned __int64)v254 - v249), 17) ^ v257 ^ ((unsigned __int64)v254 - v249);
              v370 = (v263 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v255 = ((unsigned __int8)(v370 ^ v263) ^ (unsigned __int8)v255) & 0x3F;
              if ( !v255 )
                LOBYTE(v255) = 1;
              --v259;
            }
            while ( v259 );
            v197 = (_BYTE *)v338;
            v246 = v332;
          }
          v172 &= 0x7Fu;
          if ( (unsigned int)v172 >= 8 )
          {
            v264 = (unsigned __int64)(unsigned int)v172 >> 3;
            do
            {
              v258 = __ROL8__(*v254++ ^ v258, v255);
              v172 = (unsigned int)(v172 - 8);
              --v264;
            }
            while ( v264 );
          }
          if ( (_DWORD)v172 )
          {
            do
            {
              v265 = *(unsigned __int8 *)v254;
              v254 = (_QWORD *)((char *)v254 + 1);
              v258 = __ROL8__(v265 ^ v258, v255);
              v101 = (_DWORD)v172 == 1;
              v172 = (unsigned int)(v172 - 1);
            }
            while ( !v101 );
          }
          v266 = v258 >> 31;
          v217 = 0;
          while ( v266 )
          {
            LODWORD(v258) = v266 ^ v258;
            v266 >>= 31;
          }
          v244 = v326;
          v248 = v334;
          LODWORD(v242) = v331;
          v330[2] = v258 & 0x7FFFFFFF;
          v243 = v336;
LABEL_393:
          if ( v245 < (unsigned int)v242 )
          {
            v268 = v379;
          }
          else
          {
            v267 = v246 <= v244;
            v268 = v379;
            if ( v267 )
            {
              v269 = v337;
              if ( v337 != v243 )
              {
                v270 = (unsigned int *)v333;
                v271 = *(_DWORD *)(v333 + 4);
                if ( v271 <= v244 )
                {
                  v272 = v328;
                  do
                  {
                    if ( v270 == v243 )
                      break;
                    if ( v268 )
                    {
                      v273 = 0x80;
                    }
                    else
                    {
                      v274 = v269[1];
                      v247 = *v270;
                      if ( *v270 < (unsigned int)v274 )
                      {
                        if ( (*((_DWORD *)v197 + 612) & 0x200000) == 0 )
                        {
                          v348[6] = 1073753351;
                          KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v248, 6uLL, 0LL);
                        }
                        if ( !*((_DWORD *)v197 + 574) )
                        {
                          *((_QWORD *)v197 + 289) = 0LL;
                          *((_QWORD *)v197 + 290) = 271LL;
                          *((_QWORD *)v197 + 288) = v197 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v197 + 291) = v248;
                          *((_DWORD *)v197 + 574) = 1;
                          sub_14036B3BC(v197, 0LL, v243, v172);
                          v217 = 0;
                        }
                      }
                      v275 = v248 + v274;
                      v172 = v247 - (unsigned int)v274;
                      v276 = v350;
                      v277 = &v359;
                      v278 = v248 + v274 + v172;
                      do
                      {
                        if ( v275 < *v277 + *v276 && v278 > *v277 )
                          goto LABEL_428;
                        ++v217;
                        ++v277;
                        ++v276;
                      }
                      while ( v217 < 6 );
                      if ( (unsigned int)v172 < 4 )
                      {
LABEL_428:
                        v217 = 0;
                        v273 = 0x80;
                        goto LABEL_429;
                      }
                      *((_DWORD *)v197 + 522) += v172;
                      v279 = (_QWORD *)v275;
                      v280 = *((_DWORD *)v197 + 517);
                      v281 = (const char *)v275;
                      v282 = *((_QWORD *)v197 + 259);
                      if ( v275 < v278 )
                      {
                        do
                        {
                          _mm_prefetch(v281, 0);
                          v281 += 64;
                        }
                        while ( (unsigned __int64)v281 < v278 );
                      }
                      v283 = *((_QWORD *)v197 + 259);
                      v284 = (unsigned int)v172 >> 7;
                      if ( (unsigned int)v172 >> 7 )
                      {
                        do
                        {
                          v285 = 8LL;
                          do
                          {
                            v286 = v283 ^ *v279;
                            v287 = v279[1];
                            v279 += 2;
                            v283 = __ROL8__(__ROL8__(v286, v280) ^ v287, v280);
                            --v285;
                          }
                          while ( v285 );
                          v288 = __ROL8__(v282 ^ ((unsigned __int64)v279 - v275), 17) ^ v282 ^ ((unsigned __int64)v279
                                                                                              - v275);
                          v371 = (v288 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v280 = ((unsigned __int8)(v371 ^ v288) ^ (unsigned __int8)v280) & 0x3F;
                          if ( !v280 )
                            LOBYTE(v280) = 1;
                          --v284;
                        }
                        while ( v284 );
                        v197 = (_BYTE *)v338;
                        v268 = v379;
                      }
                      v172 &= 0x7Fu;
                      if ( (unsigned int)v172 >= 8 )
                      {
                        v289 = (unsigned __int64)(unsigned int)v172 >> 3;
                        do
                        {
                          v283 = __ROL8__(*v279++ ^ v283, v280);
                          v172 = (unsigned int)(v172 - 8);
                          --v289;
                        }
                        while ( v289 );
                      }
                      if ( (_DWORD)v172 )
                      {
                        do
                        {
                          v290 = *(unsigned __int8 *)v279;
                          v279 = (_QWORD *)((char *)v279 + 1);
                          v283 = __ROL8__(v290 ^ v283, v280);
                          v101 = (_DWORD)v172 == 1;
                          v172 = (unsigned int)(v172 - 1);
                        }
                        while ( !v101 );
                      }
                      v291 = v283 >> 7;
                      v217 = 0;
                      while ( v291 )
                      {
                        LOBYTE(v283) = v291 ^ v283;
                        v291 >>= 7;
                      }
                      v248 = v334;
                      v273 = v283 & 0x7F;
                      v270 = (unsigned int *)v333;
LABEL_429:
                      v244 = v326;
                      v272 = v328;
                    }
                    v337 += 3;
                    v270 += 3;
                    *v272 = v273;
                    v243 = v336;
                    v272 = ++v328;
                    v333 = (unsigned __int64)v270;
                    if ( v270 != v336 )
                      v271 = v270[1];
                    v269 = v337;
                  }
                  while ( v271 <= v244 );
                }
              }
            }
          }
          if ( v268 || v247 == v244 )
          {
LABEL_460:
            v312 = v330;
          }
          else
          {
            v292 = v330;
            v293 = &v359;
            v172 = v244 - v247;
            v294 = v248 + v247;
            v330[3] = v247;
            v295 = v294 + v172;
            v292[4] = v244;
            v296 = 0;
            v297 = v350;
            do
            {
              if ( v294 < *v293 + *v297 && v295 > *v293 )
              {
                v217 = 0;
                goto LABEL_460;
              }
              ++v296;
              ++v293;
              ++v297;
            }
            while ( v296 < 6 );
            *((_DWORD *)v197 + 522) += v172;
            v298 = (_QWORD *)(v248 + v247);
            v299 = *((_DWORD *)v197 + 517);
            v300 = (const char *)v294;
            v301 = *((_QWORD *)v197 + 259);
            if ( v294 < v295 )
            {
              do
              {
                _mm_prefetch(v300, 0);
                v300 += 64;
              }
              while ( (unsigned __int64)v300 < v295 );
            }
            v302 = *((_QWORD *)v197 + 259);
            v303 = (unsigned int)v172 >> 7;
            if ( (unsigned int)v172 >> 7 )
            {
              do
              {
                v304 = 8LL;
                do
                {
                  v305 = v302 ^ *v298;
                  v306 = v298 + 1;
                  v307 = *v306;
                  v298 = v306 + 1;
                  v302 = __ROL8__(__ROL8__(v305, v299) ^ v307, v299);
                  --v304;
                }
                while ( v304 );
                v308 = __ROL8__(v301 ^ ((unsigned __int64)v298 - v294), 17) ^ v301 ^ ((unsigned __int64)v298 - v294);
                v373 = (v308 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v299 = ((unsigned __int8)(v373 ^ v308) ^ (unsigned __int8)v299) & 0x3F;
                if ( !v299 )
                  LOBYTE(v299) = 1;
                --v303;
              }
              while ( v303 );
              v197 = (_BYTE *)v338;
            }
            v172 &= 0x7Fu;
            if ( (unsigned int)v172 >= 8 )
            {
              v309 = (unsigned __int64)(unsigned int)v172 >> 3;
              do
              {
                v302 = __ROL8__(*v298++ ^ v302, v299);
                v172 = (unsigned int)(v172 - 8);
                --v309;
              }
              while ( v309 );
            }
            if ( (_DWORD)v172 )
            {
              do
              {
                v310 = *(unsigned __int8 *)v298;
                v298 = (_QWORD *)((char *)v298 + 1);
                v302 = __ROL8__(v310 ^ v302, v299);
                v101 = (_DWORD)v172 == 1;
                v172 = (unsigned int)(v172 - 1);
              }
              while ( !v101 );
            }
            v311 = v302 >> 31;
            v217 = 0;
            while ( v311 )
            {
              LODWORD(v302) = v311 ^ v302;
              v311 >>= 31;
            }
            v312 = v330;
            v330[5] = v302 & 0x7FFFFFFF;
          }
          v209 = v337;
          if ( v337 != v336 && *v337 >= v331 && v337[1] <= v326 )
          {
            v313 = v333;
            if ( (unsigned int *)v333 != v336 )
            {
              v314 = v328;
              *v328 = 0x80;
              v328 = v314 + 1;
              v333 = v313 + 12;
            }
            v209 += 3;
            v337 = v209;
          }
          v214 = v312 + 6;
          v221 = (char *)(v339 + 40);
          v330 = v214;
          v339 += 40LL;
          if ( v214 == (_DWORD *)v349 )
          {
            v135 = v340;
            goto LABEL_470;
          }
          v169 = v334;
        }
        v248 = v334;
LABEL_392:
        v217 = 0;
        goto LABEL_393;
      }
      v338 = sub_14036AB20(v135, v196, *((unsigned int *)v135 + 585));
      v197 = (_BYTE *)v338;
      if ( v338 )
      {
        v198 = *((_DWORD *)v135 + 612);
        if ( (v198 & 4) == 0 )
        {
          v199 = *((_DWORD *)v135 + 505);
          v200 = *((_QWORD *)v135 + 249);
          v201 = (v198 & 0x20000000) != 0 ? *((_DWORD *)v135 + 585) : 0;
          if ( v199 >= 8 )
          {
            v202 = (unsigned __int64)v199 >> 3;
            do
            {
              *(_QWORD *)v135 = 0LL;
              v199 -= 8;
              v135 += 8;
              --v202;
            }
            while ( v202 );
          }
          for ( ; v199; --v199 )
            *v135++ = 0;
          v203 = *((_DWORD *)v197 + 585);
          *((_DWORD *)v197 + 585) = v201;
          if ( v201 == 3 )
          {
            (*((void (__fastcall **)(__int64, __int64))v197 + 109))(v200, 1LL);
          }
          else
          {
            v204 = 0;
            if ( (*((_DWORD *)v197 + 612) & 0x10000000) == 0 )
              v204 = v201;
            if ( v204 )
              (*((void (__fastcall **)(__int64, _QWORD))v197 + 69))(v200 - 8, *(_QWORD *)(v200 - 8));
            else
              (*((void (__fastcall **)(__int64, __int64))v197 + 32))(v200, 1LL);
          }
          *((_DWORD *)v197 + 585) = v203;
        }
        *((_DWORD *)v197 + 612) &= ~4u;
        v172 = (unsigned int)v328;
        v191 = v333;
        goto LABEL_302;
      }
LABEL_194:
      v33 = -1073741670;
      goto LABEL_471;
    }
  }
  while ( 1 )
  {
    v180 = v175[1];
    if ( *v175 >= v179 || v180 <= v178 )
    {
LABEL_270:
      v174 = v326;
      v172 = (unsigned int)v328;
      v171 = v339;
      goto LABEL_271;
    }
    if ( *v175 < v178 || v180 > v179 )
      break;
    v181 = v175[2];
    if ( (v181 & 1) != 0 || (*(_BYTE *)(v181 + v169) & 0x20) != 0 )
    {
      v182 = v176[2];
      v183 = v176[1];
      if ( v182 <= *v176 )
        v182 = *v176;
      v184 = v183 + v182;
      v185 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v135 + 131))(v175, v334);
      v187 = v185;
      if ( *v185 < v183 || v185[1] > v184 )
      {
        v188 = v334;
        if ( (*((_DWORD *)v135 + 612) & 0x200000) == 0 )
        {
          v348[4] = 1073753351;
          KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v334, ((_DWORD)v185 - (_DWORD)v334) | 0x80000000, 0LL);
        }
        if ( !*((_DWORD *)v135 + 574) )
        {
          *((_QWORD *)v135 + 289) = 0LL;
          *((_QWORD *)v135 + 290) = 271LL;
          *((_QWORD *)v135 + 288) = v135 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v135 + 291) = v188;
          *((_DWORD *)v135 + 574) = 1;
          sub_14036B3BC(v135, 0LL, v188, v186);
        }
      }
      v189 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v135 + 132))(
                               v187,
                               v334,
                               v334 + *v187);
      if ( *v189 >= v183 && v189[1] <= v184 )
      {
        v169 = v334;
      }
      else
      {
        v169 = v334;
        v190 = ((_DWORD)v189 - v334) | 0x80000000;
        if ( (*((_DWORD *)v135 + 612) & 0x200000) == 0 )
        {
          v348[3] = 1073753351;
          KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v334, v190, 0LL);
        }
        if ( !*((_DWORD *)v135 + 574) )
        {
          *((_QWORD *)v135 + 289) = 0LL;
          *((_QWORD *)v135 + 290) = 271LL;
          *((_QWORD *)v135 + 288) = v135 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v135 + 291) = v169;
          *((_DWORD *)v135 + 574) = 1;
          sub_14036B3BC(v135, 0LL, v171, v172);
        }
      }
      v178 = v331;
    }
    v175 += 3;
    if ( v175 == v336 )
      goto LABEL_270;
  }
  if ( (*((_DWORD *)v135 + 612) & 0x200000) == 0 )
  {
    v348[5] = 1073753351;
    KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v169, 2uLL, 0LL);
  }
  if ( !*((_DWORD *)v135 + 574) )
  {
    v194 = v135 - 0x5C5FC0A76E374B18LL;
    goto LABEL_281;
  }
LABEL_235:
  v33 = -1073741701;
LABEL_471:
  v31 = a3;
LABEL_472:
  *a1 = v335;
  if ( (int)(v33 + 0x80000000) >= 0 && v33 != -1073741554 )
    return (unsigned int)v33;
  v315 = v31 & 0xFFFFFFEF;
  if ( (v315 & 0x80000004) != 0x80000004 )
  {
    v316 = v315 | 0x80000000;
    v317 = (*((__int64 (__fastcall **)(__int64))v335 + 63))(v343);
    v318 = *(unsigned int *)(v317 + 148);
    if ( (unsigned int)v318 >= 0x14 )
    {
      v319 = *(unsigned int *)(v317 + 144);
      v320 = v319 + v318;
      v321 = v343;
      v322 = v343 + v320;
      for ( n = v319 + v343; n != v322; n += 20LL )
      {
        if ( !*(_DWORD *)(n + 12) )
          break;
        v324 = *(unsigned int *)(n + 16);
        if ( !(_DWORD)v324 )
          break;
        v325 = *(_QWORD *)(v324 + v321);
        if ( v325 )
        {
          result = sub_140368148(&v335, v325, v316);
          *a1 = v335;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
          v321 = v343;
        }
      }
    }
  }
  return 0LL;
}
