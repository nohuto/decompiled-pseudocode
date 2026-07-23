/*
 * XREFs of sub_140346BE8 @ 0x140346BE8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_140348B4C @ 0x140348B4C (sub_140348B4C.c)
 *     sub_1403495B4 @ 0x1403495B4 (sub_1403495B4.c)
 *     sub_14034A4B8 @ 0x14034A4B8 (sub_14034A4B8.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 *     sub_14098FFA4 @ 0x14098FFA4 (sub_14098FFA4.c)
 */

__int64 __fastcall sub_140346BE8(_QWORD *a1, __int64 a2, unsigned int a3)
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
  __int64 (__fastcall *v32)(__int64, ULONG_PTR *, int *, unsigned __int64); // rax
  int v33; // ecx
  int v34; // ecx
  int *v35; // rax
  unsigned int v36; // esi
  unsigned int v37; // r11d
  _BYTE *v38; // r14
  int v39; // r12d
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
  unsigned int v57; // esi
  unsigned int v58; // edi
  __int64 (__fastcall *v59)(ULONG_PTR, __int64, _QWORD, int *); // rax
  __int64 v60; // rdx
  __int64 (__fastcall *v61)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 (__fastcall *v64)(ULONG_PTR, __int64, __int64, int *); // rax
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
  __int64 v85; // rdx
  _QWORD *v86; // r11
  int v87; // ecx
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
  unsigned int v104; // ecx
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
  __int64 v148; // r15
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
  ULONG_PTR v169; // r14
  __int64 v170; // rax
  unsigned int v171; // r13d
  unsigned __int16 v172; // r15
  unsigned int *v173; // rdi
  unsigned int v174; // r9d
  __int64 v175; // r11
  ULONG_PTR v176; // r8
  unsigned int *v177; // r15
  unsigned int v178; // r14d
  unsigned int v179; // edx
  unsigned int v180; // r14d
  unsigned int v181; // eax
  __int64 v182; // rax
  unsigned int v183; // esi
  unsigned int v184; // r12d
  unsigned int v185; // esi
  unsigned int *v186; // rax
  ULONG_PTR v187; // r10
  unsigned int *v188; // rax
  unsigned int v189; // eax
  int v190; // r10d
  __int64 v191; // rsi
  __int64 v192; // r12
  _BYTE *v193; // rax
  __int64 v194; // rdi
  unsigned int v195; // eax
  _BYTE *v196; // r14
  int v197; // edx
  unsigned int v198; // ecx
  __int64 v199; // r9
  int v200; // r8d
  unsigned __int64 v201; // rax
  int v202; // ebx
  int v203; // ecx
  _BYTE *v204; // rdx
  _QWORD *v205; // rax
  __int64 v206; // rcx
  int v207; // r8d
  unsigned int *v208; // r13
  unsigned __int64 v209; // rcx
  unsigned __int64 m; // rax
  ULONG_PTR v211; // rdi
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
  int v225; // r9d
  __int64 v226; // r8
  char v227; // cl
  char v228; // al
  char *v229; // r8
  unsigned int v230; // edx
  char *v231; // r9
  __int64 v232; // rcx
  __int64 v233; // rax
  char v234; // cl
  char v235; // al
  char *v236; // rdx
  int v237; // r9d
  char v238; // cl
  char v239; // al
  char *v240; // rdx
  int v241; // r9d
  char v242; // cl
  char v243; // al
  int v244; // ecx
  unsigned int v245; // ecx
  __int64 v246; // rsi
  unsigned int *v247; // r8
  unsigned int v248; // ecx
  unsigned int v249; // r15d
  unsigned int v250; // r12d
  unsigned int *v251; // rdx
  unsigned int v252; // r13d
  unsigned int v253; // r9d
  unsigned __int64 v254; // r11
  ULONG_PTR v255; // rbx
  unsigned int *v256; // rcx
  ULONG_PTR *v257; // rdx
  unsigned int v258; // r8d
  _QWORD *v259; // r10
  int v260; // edi
  const char *v261; // rax
  __int64 v262; // rsi
  unsigned __int64 v263; // r8
  unsigned int v264; // ebx
  __int64 v265; // rdx
  __int64 v266; // rax
  __int64 v267; // r8
  unsigned __int64 v268; // rcx
  unsigned int v269; // r9d
  unsigned __int64 v270; // rdx
  __int64 v271; // rax
  unsigned __int64 v272; // rax
  bool v273; // cc
  int v274; // r12d
  unsigned int *v275; // rsi
  unsigned int v276; // r15d
  char *v277; // rax
  char v278; // r8
  __int64 v279; // rcx
  unsigned __int64 v280; // r11
  unsigned int v281; // r9d
  ULONG_PTR *v282; // rdx
  __int64 v283; // rbx
  unsigned int *v284; // rcx
  ULONG_PTR v285; // rbx
  _QWORD *v286; // r10
  int v287; // edi
  const char *v288; // rax
  __int64 v289; // rsi
  unsigned __int64 v290; // r8
  unsigned int v291; // ebx
  __int64 v292; // rdx
  __int64 v293; // rax
  __int64 v294; // r8
  unsigned __int64 v295; // rcx
  unsigned int v296; // r9d
  unsigned __int64 v297; // rdx
  __int64 v298; // rax
  unsigned __int64 v299; // rax
  __int64 v300; // rax
  ULONG_PTR *v301; // rdx
  unsigned int v302; // r9d
  unsigned __int64 v303; // r11
  ULONG_PTR v304; // rbx
  unsigned int v305; // r8d
  unsigned int *v306; // rcx
  _QWORD *v307; // r10
  int v308; // edi
  const char *v309; // rax
  __int64 v310; // rsi
  unsigned __int64 v311; // r8
  unsigned int v312; // ebx
  __int64 v313; // rdx
  __int64 v314; // rax
  __int64 *v315; // r10
  __int64 v316; // r8
  unsigned __int64 v317; // rcx
  unsigned int v318; // r9d
  unsigned __int64 v319; // rdx
  __int64 v320; // rax
  unsigned __int64 v321; // rax
  __int64 v322; // r11
  unsigned __int64 v323; // rcx
  char *v324; // rax
  unsigned int v325; // r14d
  unsigned int v326; // r14d
  __int64 v327; // rax
  __int64 v328; // rcx
  __int64 v329; // rax
  __int64 v330; // rdi
  __int64 v331; // rcx
  __int64 v332; // rdi
  __int64 n; // rbx
  __int64 v334; // rax
  __int64 v335; // rdx
  int v336; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v337; // [rsp+4Ch] [rbp-BCh]
  __int64 v338; // [rsp+50h] [rbp-B8h]
  char *v339; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v341; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v342; // [rsp+70h] [rbp-98h]
  unsigned __int64 v343; // [rsp+78h] [rbp-90h]
  unsigned int *v344; // [rsp+80h] [rbp-88h]
  __int64 v345; // [rsp+88h] [rbp-80h]
  ULONG_PTR v346; // [rsp+90h] [rbp-78h]
  __int64 v347; // [rsp+98h] [rbp-70h]
  __int64 v348; // [rsp+A0h] [rbp-68h]
  unsigned int *v349; // [rsp+A8h] [rbp-60h]
  _BYTE *v350; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v351; // [rsp+B8h] [rbp-50h] BYREF
  int v352; // [rsp+BCh] [rbp-4Ch] BYREF
  __int64 v353; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v354; // [rsp+C8h] [rbp-40h]
  int v355; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v356; // [rsp+D8h] [rbp-30h]
  int v357; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v358[8]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v359[6]; // [rsp+108h] [rbp+0h] BYREF
  int *v360; // [rsp+120h] [rbp+18h]
  int v361; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v362; // [rsp+130h] [rbp+28h]
  _BYTE *v363; // [rsp+138h] [rbp+30h]
  _DWORD *v364; // [rsp+140h] [rbp+38h]
  char *v365; // [rsp+148h] [rbp+40h]
  char *v366; // [rsp+150h] [rbp+48h]
  char *v367; // [rsp+158h] [rbp+50h]
  char *v368; // [rsp+160h] [rbp+58h]
  ULONG_PTR v369; // [rsp+168h] [rbp+60h] BYREF
  __int64 v370; // [rsp+170h] [rbp+68h]
  __int64 v371; // [rsp+178h] [rbp+70h]
  __int64 v372; // [rsp+180h] [rbp+78h]
  __int64 v373; // [rsp+188h] [rbp+80h]
  __int64 v374; // [rsp+190h] [rbp+88h]
  __int64 v375; // [rsp+198h] [rbp+90h]
  __int64 v376; // [rsp+1A0h] [rbp+98h]
  _BYTE *v377; // [rsp+1A8h] [rbp+A0h]
  _BYTE *v378; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v379; // [rsp+1B8h] [rbp+B0h]
  __int64 v380; // [rsp+1C0h] [rbp+B8h]
  __int64 v381; // [rsp+1C8h] [rbp+C0h]
  __int64 v382; // [rsp+1D0h] [rbp+C8h]
  __int64 v383; // [rsp+1D8h] [rbp+D0h]
  unsigned int v387; // [rsp+250h] [rbp+148h]
  unsigned __int16 v388; // [rsp+250h] [rbp+148h]
  int v389; // [rsp+250h] [rbp+148h]

  v341 = (_BYTE *)*a1;
  v3 = (*((__int64 (__fastcall **)(__int64, __int64 *, int *))v341 + 63))(a2, &v353, &v352);
  v4 = 0LL;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v354 = 0LL;
  v8 = &v355;
  v9 = 1LL;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v10 = v341;
  v11 = 0;
  v12 = *((_DWORD *)v341 + 509);
  if ( v12 )
  {
    v13 = (_BYTE *)*((_QWORD *)v341 + 329);
    v14 = v352;
    v15 = v353;
    v16 = v355;
    v17 = HIDWORD(v354);
    v18 = v354;
    while ( 1 )
    {
      v19 = 0;
      v20 = v13;
      if ( !v13 )
        v20 = v341;
      v4 = (int *)&v20[*((unsigned int *)v20 + 508)];
      if ( v18 && v17 <= v11 )
      {
        v19 = v17;
        v4 = (int *)&v20[v16];
      }
      if ( v19 != v11 )
        break;
LABEL_36:
      v17 = v19;
      LODWORD(v354) = 1;
      v9 = *v4;
      v16 = (_DWORD)v4 - (_DWORD)v20;
      HIDWORD(v354) = v17;
      v355 = (_DWORD)v4 - (_DWORD)v20;
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
        v15 = v353;
        v14 = v352;
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
  v32 = (__int64 (__fastcall *)(__int64, ULONG_PTR *, int *, unsigned __int64))*((_QWORD *)v341 + 63);
  v387 = a3;
  v350 = v341;
  v344 = (unsigned int *)v32(a2, &BugCheckParameter2, &v336, v9);
  if ( v344 )
  {
    v34 = 4;
    v356 = 0LL;
    v35 = &v357;
    do
    {
      *(_BYTE *)v35 = 0;
      v35 = (int *)((char *)v35 + 1);
      --v34;
    }
    while ( v34 );
    v36 = *((_DWORD *)v10 + 509);
    v37 = 0;
    if ( v36 )
    {
      v38 = (_BYTE *)*((_QWORD *)v10 + 329);
      v39 = v336;
      v40 = BugCheckParameter2;
      v41 = v357;
      v42 = HIDWORD(v356);
      v43 = v356;
      while ( 1 )
      {
        v44 = v38;
        v45 = 0;
        if ( !v38 )
          v44 = v10;
        v46 = (unsigned int **)&v44[*((unsigned int *)v44 + 508)];
        if ( v43 && v42 <= v37 )
        {
          v45 = v42;
          v46 = (unsigned int **)&v44[v41];
        }
        if ( v45 != v37 )
          break;
LABEL_80:
        v42 = v45;
        LODWORD(v356) = 1;
        v54 = *(int *)v46;
        v41 = (_DWORD)v46 - (_DWORD)v44;
        HIDWORD(v356) = v42;
        v357 = (_DWORD)v46 - (_DWORD)v44;
        v43 = 1;
        if ( (unsigned int)v54 <= 0x2B )
        {
          v55 = 0x80000001002LL;
          if ( _bittest64(&v55, v54) )
          {
            if ( v46[1] == v344 && *((_DWORD *)v46 + 4) == v39 )
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
          v39 = v336;
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
        v52 = 20
            * (unsigned int)((((_DWORD)v46[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v46 + 10) + 4095) >> 12)
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
    v360 = (int *)v46;
    if ( v46 )
    {
      v33 = -1073741554;
LABEL_471:
      v31 = a3;
      goto LABEL_472;
    }
    v31 = a3;
    v57 = (*((__int64 (__fastcall **)(__int64))v10 + 84))(v30);
    v337 = v57;
    LODWORD(v342) = v336;
    if ( (a3 & 0x10) == 0 || (*((_DWORD *)v10 + 605) & 0x400) != 0 )
    {
      v58 = a3;
    }
    else
    {
      v58 = a3 & 0xFFFFFFEF;
      v387 = a3 & 0xFFFFFFEF;
    }
    if ( (v58 & 0x10) != 0 && !(unsigned int)sub_14034A4B8(v10, BugCheckParameter2) )
    {
      v58 &= ~0x10u;
      v387 = v58;
    }
    if ( (v58 & 2) != 0 && !v57 )
    {
      v33 = 0;
      goto LABEL_472;
    }
    if ( (*((_DWORD *)v10 + 604) & 0x40000000) != 0 )
    {
      v33 = sub_14098FFA4(&v341, BugCheckParameter2, v58);
      goto LABEL_472;
    }
    v59 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, int *))*((_QWORD *)v10 + 61);
    v373 = 0LL;
    v359[4] = 0;
    LOBYTE(v56) = 1;
    v370 = v59(BugCheckParameter2, v56, 0LL, &v336);
    v60 = v336 & (unsigned int)-(v370 != 0);
    v336 = v60;
    v61 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v10 + 61);
    v359[1] = v60;
    LOBYTE(v60) = 1;
    v62 = v61(BugCheckParameter2, v60, 12LL, &v336);
    v63 = v62;
    v345 = v62;
    v371 = v62;
    LOBYTE(v63) = 1;
    v336 &= -(v62 != 0);
    v64 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v10 + 61);
    LODWORD(v338) = v336;
    v359[2] = v336;
    v372 = v64(BugCheckParameter2, v63, 10LL, &v336);
    v336 &= -(v372 != 0);
    v65 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v10 + 62);
    v359[3] = v336;
    v66 = v65(BugCheckParameter2);
    if ( !v66 )
    {
      v33 = -1073741701;
      goto LABEL_472;
    }
    v67 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v10 + 146))(BugCheckParameter2, &v361);
    v68 = *((unsigned int *)v10 + 577);
    v374 = v67;
    v359[5] = v361;
    v369 = BugCheckParameter2;
    v359[0] = *(_DWORD *)(v66 + 84);
    LODWORD(v67) = v57;
    v69 = *((unsigned int *)v10 + 499);
    v70 = (_DWORD)v67 != 0 ? 0xB : 0;
    v71 = v69 + 288;
    LODWORD(v339) = v70;
    if ( (unsigned int)(v69 + 288) <= *((_DWORD *)v10 + 639) )
    {
      v72 = v10;
      v348 = (__int64)v10;
      *((_DWORD *)v10 + 499) = v71;
    }
    else
    {
      v348 = sub_1403495B4(v10, v71, v68);
      v72 = (_BYTE *)v348;
      if ( !v348 )
      {
        v33 = -1073741670;
        goto LABEL_472;
      }
      v73 = *((_DWORD *)v10 + 604);
      if ( (v73 & 4) == 0 )
      {
        v74 = *((_DWORD *)v10 + 499);
        v75 = *((_QWORD *)v10 + 246);
        v76 = (v73 & 0x20000000) != 0 ? *((_DWORD *)v10 + 577) : 0;
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
        v78 = *((_DWORD *)v72 + 577);
        *((_DWORD *)v72 + 577) = v76;
        if ( v76 == 3 )
        {
          (*((void (__fastcall **)(__int64))v72 + 108))(v75);
        }
        else
        {
          v79 = 0;
          if ( (*((_DWORD *)v72 + 604) & 0x10000000) == 0 )
            v79 = v76;
          if ( v79 )
            (*((void (__fastcall **)(__int64, _QWORD))v72 + 68))(v75 - 8, *(_QWORD *)(v75 - 8));
          else
            (*((void (__fastcall **)(__int64))v72 + 31))(v75);
        }
        *((_DWORD *)v72 + 577) = v78;
      }
      *((_DWORD *)v72 + 604) &= ~4u;
      v70 = (int)v339;
    }
    *((_DWORD *)v72 + 509) += 6;
    v80 = &v369;
    v81 = (unsigned __int64)&v72[v69];
    v343 = v81;
    v362 = v81;
    v360 = (int *)v81;
    v82 = (_QWORD *)v81;
    v83 = v359;
    v347 = 6LL;
    do
    {
      v84 = *v83;
      v85 = 6LL;
      v86 = (_QWORD *)*v80;
      v87 = 48;
      do
      {
        *v82 = 0LL;
        v87 -= 8;
        ++v82;
        --v85;
      }
      while ( v85 );
      for ( ; v87; --v87 )
      {
        *(_BYTE *)v82 = 0;
        v82 = (_QWORD *)((char *)v82 + 1);
      }
      *(_DWORD *)v81 = v70;
      *(_QWORD *)(v81 + 8) = v86;
      v88 = v86;
      *(_DWORD *)(v81 + 16) = v84;
      v89 = (const char *)v86;
      *((_DWORD *)v72 + 516) += v84;
      v90 = *((_DWORD *)v72 + 511);
      v91 = *((_QWORD *)v72 + 256);
      if ( v86 < (_QWORD *)((char *)v86 + v84) )
      {
        do
        {
          _mm_prefetch(v89, 0);
          v89 += 64;
        }
        while ( v89 < (const char *)v86 + v84 );
      }
      v92 = *((_QWORD *)v72 + 256);
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
          v375 = *((_QWORD *)&v96 + 1);
          v90 = (BYTE8(v96) ^ (unsigned __int8)(v96 ^ v90)) & 0x3F;
          if ( !v90 )
            LOBYTE(v90) = 1;
          --v93;
        }
        while ( v93 );
        v72 = (_BYTE *)v348;
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
      v70 = (int)v339;
      ++v83;
      *(_DWORD *)(v81 + 20) = v92 & 0x7FFFFFFF;
      ++v80;
      *((_DWORD *)v72 + 516) += v84;
      v81 += 48LL;
      v101 = v347-- == 1;
      v82 = (_QWORD *)v81;
      v362 = v81;
    }
    while ( !v101 );
    v102 = v343;
    v103 = BugCheckParameter2;
    v104 = v337;
    v341 = v72;
    *(_DWORD *)v343 = 44;
    *(_QWORD *)(v102 + 24) = v103;
    if ( (*((_DWORD *)v72 + 604) & 0x10200000) == 0 )
    {
      if ( v104 )
      {
LABEL_151:
        *(_DWORD *)(v102 + 32) |= 2u;
LABEL_152:
        v105 = v387;
        v350 = v72;
        v341 = v72;
        v33 = sub_140348B4C(
                (unsigned int)&v350,
                (_DWORD)v344,
                v342,
                BugCheckParameter2,
                v104,
                v387,
                (__int64)&v351,
                (__int64)v358);
        if ( v33 < 0 )
          goto LABEL_471;
        v106 = 6LL;
        v107 = v350;
        v108 = (unsigned __int64)&v350[v102 - (_QWORD)v341];
        v109 = v358[0] - v351;
        v110 = 48;
        v111 = BugCheckParameter2 + v351;
        v112 = (_DWORD *)(v108 + 192);
        v343 = v108;
        v113 = (_QWORD *)(v108 + 192);
        v360 = (int *)v108;
        v341 = v350;
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
        *v112 = (_DWORD)v339;
        v115 = (const char *)v111;
        *(_QWORD *)(v108 + 200) = v111;
        *(_DWORD *)(v108 + 208) = v109;
        *((_DWORD *)v107 + 516) += v109;
        v116 = *((_DWORD *)v107 + 511);
        v117 = *((_QWORD *)v107 + 256);
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
        v119 = *((_QWORD *)v107 + 256);
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
            v376 = *((_QWORD *)&v124 + 1);
            v116 = (BYTE8(v124) ^ (unsigned __int8)(v124 ^ v116)) & 0x3F;
            if ( !v116 )
              LOBYTE(v116) = 1;
            --v120;
          }
          while ( v120 );
          v108 = v343;
          v105 = v387;
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
        v129 = v337;
        LODWORD(v119) = v119 & 0x7FFFFFFF;
        v112[5] = v119;
        *(_DWORD *)(v108 + 240) = 48;
        if ( *(_DWORD *)(v108 + 256) )
          *(_DWORD *)(v108 + 264) = *(_DWORD *)(v108 + 264) & 0xFFFFFFFE | ((_DWORD)v129 != 0);
        v130 = v105 & 1;
        v341 = v107;
        v131 = (_BYTE *)(v108 + 96);
        v363 = (_BYTE *)(v108 + 96);
        v132 = ((_DWORD)v129 != 0) + 13;
        if ( v108 == -96LL )
        {
          v133 = *((unsigned int *)v107 + 499);
          v134 = v133 + 48;
          if ( (unsigned int)(v133 + 48) <= *((_DWORD *)v107 + 639) )
          {
            v135 = v107;
            *((_DWORD *)v107 + 499) = v134;
          }
          else
          {
            v135 = (_BYTE *)sub_1403495B4(v107, v134, *((unsigned int *)v107 + 577));
            if ( !v135 )
              goto LABEL_194;
            v136 = *((_DWORD *)v107 + 604);
            if ( (v136 & 4) == 0 )
            {
              v137 = *((_DWORD *)v107 + 499);
              v138 = *((_QWORD *)v107 + 246);
              v139 = (v136 & 0x20000000) != 0 ? *((_DWORD *)v107 + 577) : 0;
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
              v141 = *((_DWORD *)v135 + 577);
              *((_DWORD *)v135 + 577) = v139;
              if ( v139 == 3 )
              {
                (*((void (__fastcall **)(__int64))v135 + 108))(v138);
              }
              else
              {
                v142 = 0;
                if ( (*((_DWORD *)v135 + 604) & 0x10000000) == 0 )
                  v142 = v139;
                if ( v142 )
                  (*((void (__fastcall **)(__int64, _QWORD))v135 + 68))(v138 - 8, *(_QWORD *)(v138 - 8));
                else
                  (*((void (__fastcall **)(__int64))v135 + 31))(v138);
              }
              *((_DWORD *)v135 + 577) = v141;
            }
            *((_DWORD *)v135 + 604) &= ~4u;
          }
          v143 = 48;
          ++*((_DWORD *)v135 + 509);
          v131 = &v135[v133];
          v377 = v131;
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
          v146 = v345;
          *(_DWORD *)v131 = v132;
          v147 = (_QWORD *)v146;
          v148 = (unsigned int)v338;
          *((_QWORD *)v131 + 1) = v146;
          *((_DWORD *)v131 + 4) = v148;
          *((_DWORD *)v135 + 516) += v148;
          v149 = *((_DWORD *)v135 + 511);
          v150 = *((_QWORD *)v135 + 256);
          if ( v146 < v146 + v148 )
          {
            v151 = (const char *)v146;
            do
            {
              _mm_prefetch(v151, 0);
              v151 += 64;
            }
            while ( (unsigned __int64)v151 < v146 + v148 );
          }
          v119 = *((_QWORD *)v135 + 256);
          v152 = (unsigned int)v148 >> 7;
          if ( (unsigned int)v148 >> 7 )
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
              v382 = *((_QWORD *)&v155 + 1);
              v149 = (BYTE8(v155) ^ (unsigned __int8)(v155 ^ v149)) & 0x3F;
              if ( !v149 )
                LOBYTE(v149) = 1;
              --v152;
            }
            while ( v152 );
            v108 = v343;
            LODWORD(v148) = v338;
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
          v363 = v131;
          *((_DWORD *)v131 + 5) = v119;
          *((_DWORD *)v135 + 516) += v148;
        }
        else
        {
          v146 = v345;
          v135 = v107;
          *(_DWORD *)v131 = v132;
          LODWORD(v148) = v338;
        }
        v159 = v131;
        if ( (*((_DWORD *)v135 + 604) & 0x40000000) != 0 && (_DWORD)v148 )
          sub_1401ADA3C((__int64)v135, v146, v148, (__int64)(v131 + 28));
        *((_DWORD *)v131 + 6) = 0;
        if ( v130 )
          *((_DWORD *)v131 + 6) = 1;
        v160 = BugCheckParameter2;
        v341 = v135;
        v161 = v337 != 0;
        v162 = *(_DWORD *)(v108 + 184) & 0xFFFFFFFE;
        *(_DWORD *)(v108 + 144) = 35;
        v163 = *(_DWORD *)(v108 + 160) < 0x94u;
        *(_DWORD *)(v108 + 184) = v162 | v161;
        if ( v163 )
        {
LABEL_233:
          v169 = BugCheckParameter2;
          v341 = v135;
          v101 = (*((_DWORD *)v135 + 604) & 0x400000) == 0;
          v346 = BugCheckParameter2;
          v350 = v135;
          if ( !v101 )
          {
            v170 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v135 + 62))(
                     BugCheckParameter2,
                     v129,
                     v119,
                     v159);
            v171 = 0;
            v348 = v170;
            if ( !v170 )
            {
LABEL_235:
              v33 = -1073741701;
LABEL_301:
              v31 = a3;
              goto LABEL_472;
            }
            v172 = *(_WORD *)(v170 + 6);
            v388 = v172;
            v343 = (unsigned int)v342 / 0xCuLL;
            if ( !v172 )
            {
              if ( (*((_DWORD *)v135 + 604) & 0x200000) == 0 )
              {
                v358[1] = 1329594368;
                KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, v169, 0LL, 0LL);
              }
              if ( !*((_DWORD *)v135 + 566) )
              {
                *((_QWORD *)v135 + 285) = 0LL;
                *((_QWORD *)v135 + 286) = 271LL;
                *((_QWORD *)v135 + 284) = v135 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v135 + 287) = v169;
                *((_DWORD *)v135 + 566) = 1;
              }
              goto LABEL_235;
            }
            v173 = v344;
            v174 = v172;
            LODWORD(v339) = v172;
            v345 = 12LL * ((unsigned int)v342 / 0xC);
            v349 = (unsigned int *)((char *)v344 + v345);
            v347 = *(unsigned __int16 *)(v170 + 20) + v170 + 24;
            v175 = v347;
            v176 = v346;
            v177 = (unsigned int *)(v347 + 8);
            do
            {
              v178 = v177[2];
              v179 = v177[1];
              if ( v178 <= *v177 )
                v178 = *v177;
              LODWORD(v338) = v177[1];
              v180 = v179 + v178;
              if ( v171 && v180 < *(_DWORD *)(v175 + 40LL * (v171 - 1) + 12) )
              {
                if ( (*((_DWORD *)v135 + 604) & 0x200000) == 0 )
                {
                  v358[2] = 1329594368;
                  KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, v176, 1uLL, 0LL);
                }
                if ( !*((_DWORD *)v135 + 566) )
                {
                  *((_QWORD *)v135 + 287) = v176;
                  *((_DWORD *)v135 + 566) = 1;
                  *((_QWORD *)v135 + 284) = v135 - 0x5C5FC0A76E374B18LL;
                  goto LABEL_275;
                }
LABEL_276:
                v33 = -1073741701;
                goto LABEL_301;
              }
              if ( v173 != v349 )
              {
                while ( 1 )
                {
                  v181 = v173[1];
                  if ( *v173 >= v180 || v181 <= v179 )
                  {
LABEL_267:
                    v174 = (unsigned int)v339;
                    v175 = v347;
                    goto LABEL_268;
                  }
                  if ( *v173 < v179 || v181 > v180 )
                    break;
                  v182 = v173[2];
                  if ( (v182 & 1) != 0 || (*(_BYTE *)(v182 + v176) & 0x20) != 0 )
                  {
                    v183 = v177[2];
                    v184 = v177[1];
                    if ( v183 <= *v177 )
                      v183 = *v177;
                    v185 = v184 + v183;
                    v186 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v135 + 130))(
                                             v173,
                                             v176);
                    if ( *v186 >= v184 && v186[1] <= v185 )
                    {
                      v187 = v346;
                    }
                    else
                    {
                      v187 = v346;
                      if ( (*((_DWORD *)v135 + 604) & 0x200000) == 0 )
                      {
                        v358[4] = 1329594368;
                        KeBugCheckEx(
                          __ROL4__(1329594368, 10),
                          0xAuLL,
                          v346,
                          ((_DWORD)v186 - (_DWORD)v346) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v135 + 566) )
                      {
                        *((_QWORD *)v135 + 285) = 0LL;
                        *((_QWORD *)v135 + 286) = 271LL;
                        *((_QWORD *)v135 + 284) = v135 - 0x5C5FC0A76E374B18LL;
                        *((_DWORD *)v135 + 566) = 1;
                        *((_QWORD *)v135 + 287) = v187;
                      }
                    }
                    v188 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v135 + 131))(
                                             v186,
                                             v187,
                                             v187 + *v186);
                    if ( *v188 >= v184 && v188[1] <= v185 )
                    {
                      v179 = v338;
                      v176 = v346;
                    }
                    else
                    {
                      v176 = v346;
                      v189 = ((_DWORD)v188 - v346) | 0x80000000;
                      if ( (*((_DWORD *)v135 + 604) & 0x200000) == 0 )
                      {
                        v358[3] = 1329594368;
                        KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, v346, v189, 0LL);
                      }
                      v179 = v338;
                      if ( !*((_DWORD *)v135 + 566) )
                      {
                        *((_QWORD *)v135 + 285) = 0LL;
                        *((_QWORD *)v135 + 286) = 271LL;
                        *((_QWORD *)v135 + 284) = v135 - 0x5C5FC0A76E374B18LL;
                        *((_DWORD *)v135 + 566) = 1;
                        *((_QWORD *)v135 + 287) = v176;
                      }
                    }
                  }
                  v173 += 3;
                  if ( v173 == v349 )
                    goto LABEL_267;
                }
                if ( (*((_DWORD *)v135 + 604) & 0x200000) == 0 )
                {
                  v358[5] = 1329594368;
                  KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, v176, 2uLL, 0LL);
                }
                if ( !*((_DWORD *)v135 + 566) )
                {
                  *((_QWORD *)v135 + 287) = v176;
                  v193 = v135 - 0x5C5FC0A76E374B18LL;
                  goto LABEL_280;
                }
                goto LABEL_276;
              }
LABEL_268:
              ++v171;
              v177 += 10;
            }
            while ( v171 < v174 );
            v190 = v343;
            v191 = v348;
            v192 = v345;
            if ( v173 != v349 )
            {
              if ( (*((_DWORD *)v135 + 604) & 0x200000) == 0 )
              {
                v358[7] = 1329594368;
                KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, v346, 3uLL, 0LL);
              }
              if ( !*((_DWORD *)v135 + 566) )
              {
                v193 = v135 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v135 + 287) = v346;
LABEL_280:
                *((_QWORD *)v135 + 284) = v193;
                *((_DWORD *)v135 + 566) = 1;
LABEL_275:
                *((_QWORD *)v135 + 286) = 271LL;
                *((_QWORD *)v135 + 285) = 0LL;
              }
              goto LABEL_276;
            }
            v194 = *((unsigned int *)v135 + 499);
            v195 = ((v343 + 6) & 0xFFFFFFF8) + 24 * v174 + v194 + 48;
            if ( v195 <= *((_DWORD *)v135 + 639) )
            {
              v196 = v135;
              v348 = (__int64)v135;
              *((_DWORD *)v135 + 499) = v195;
            }
            else
            {
              v348 = sub_1403495B4(v135, v195, *((unsigned int *)v135 + 577));
              v196 = (_BYTE *)v348;
              if ( !v348 )
              {
                v33 = -1073741670;
                goto LABEL_301;
              }
              v197 = *((_DWORD *)v135 + 604);
              if ( (v197 & 4) == 0 )
              {
                v198 = *((_DWORD *)v135 + 499);
                v199 = *((_QWORD *)v135 + 246);
                v200 = (v197 & 0x20000000) != 0 ? *((_DWORD *)v135 + 577) : 0;
                if ( v198 >= 8 )
                {
                  v201 = (unsigned __int64)v198 >> 3;
                  do
                  {
                    *(_QWORD *)v135 = 0LL;
                    v198 -= 8;
                    v135 += 8;
                    --v201;
                  }
                  while ( v201 );
                }
                for ( ; v198; --v198 )
                  *v135++ = 0;
                v202 = *((_DWORD *)v196 + 577);
                *((_DWORD *)v196 + 577) = v200;
                if ( v200 == 3 )
                {
                  (*((void (__fastcall **)(__int64, __int64))v196 + 108))(v199, 1LL);
                }
                else
                {
                  v203 = 0;
                  if ( (*((_DWORD *)v196 + 604) & 0x10000000) == 0 )
                    v203 = v200;
                  if ( v203 )
                    (*((void (__fastcall **)(__int64, _QWORD))v196 + 68))(v199 - 8, *(_QWORD *)(v199 - 8));
                  else
                    (*((void (__fastcall **)(__int64, __int64))v196 + 31))(v199, 1LL);
                }
                *((_DWORD *)v196 + 577) = v202;
              }
              *((_DWORD *)v196 + 604) &= ~4u;
              v174 = (unsigned int)v339;
              v190 = v343;
            }
            v204 = &v196[v194];
            ++*((_DWORD *)v196 + 509);
            v205 = &v196[v194];
            v378 = &v196[v194];
            v206 = 6LL;
            v207 = 48;
            do
            {
              *v205 = 0LL;
              v207 -= 8;
              ++v205;
              --v206;
            }
            while ( v206 );
            for ( ; v207; --v207 )
            {
              *(_BYTE *)v205 = 0;
              v205 = (_QWORD *)((char *)v205 + 1);
            }
            v208 = v344;
            *((_QWORD *)v204 + 1) = v344;
            *(_DWORD *)v204 = 30;
            *((_DWORD *)v204 + 4) = 0;
            v209 = *((_QWORD *)v196 + 256);
            for ( m = v209; ; LODWORD(v209) = m ^ v209 )
            {
              m >>= 31;
              if ( !m )
                break;
            }
            v211 = v346;
            v101 = v337 == 0;
            *((_DWORD *)v204 + 5) = v209 & 0x7FFFFFFF;
            v135 = v196;
            *((_QWORD *)v204 + 3) = v211;
            *((_DWORD *)v204 + 8) = *(_DWORD *)(v191 + 80);
            *((_DWORD *)v204 + 9) = v342;
            *((_WORD *)v204 + 20) = v388;
            v212 = *((_WORD *)v204 + 21) & 0xFFFE;
            v379 = v204;
            v350 = v196;
            *((_WORD *)v204 + 21) = v212 | !v101;
            v213 = *((unsigned __int16 *)v204 + 20);
            v214 = &v204[(((unsigned int)(v190 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
            v339 = v204 + 48;
            v345 = (__int64)v214;
            v215 = &v214[6 * v213];
            v216 = 12LL;
            if ( !v190 )
              v216 = v192;
            v364 = &v214[6 * v213];
            v217 = 0;
            v343 = (unsigned __int64)v208 + v216;
            if ( v174 )
            {
              v218 = v174;
              v219 = v214 + 2;
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
            if ( v214 != v215 )
            {
              v221 = (char *)v347;
              while ( 1 )
              {
                if ( (*((_DWORD *)v221 + 9) & 0x2000000) != 0
                  || (v222 = *(_DWORD *)v221, *(_DWORD *)v221 == 1414090313) && *((_DWORD *)v221 + 1) == 1195525195
                  || v222 == 1162297680
                  && ((v223 = *((_WORD *)v221 + 2), v223 == 30839) || v223 == 29303 || v223 == 30583)
                  || v222 == 1095914053 && *((_WORD *)v221 + 2) == 16724 )
                {
LABEL_346:
                  v217 = 1;
                }
                else
                {
                  v224 = (char *)*((_QWORD *)v196 + 290);
                  v225 = 7;
                  v366 = (char *)*((_QWORD *)v196 + 291);
                  v226 = v221 - v224;
                  v367 = (char *)*((_QWORD *)v196 + 292);
                  v368 = (char *)*((_QWORD *)v196 + 293);
                  v365 = v224;
                  while ( 1 )
                  {
                    v227 = v224[v226];
                    v228 = *v224++;
                    if ( v227 != v228 )
                      break;
                    if ( !--v225 )
                      goto LABEL_346;
                  }
                  v229 = v366;
                  v230 = 8;
                  v231 = v221;
                  while ( 1 )
                  {
                    v232 = *(_QWORD *)v231;
                    v231 += 8;
                    v233 = *(_QWORD *)v229;
                    v229 += 8;
                    if ( v232 != v233 )
                      break;
                    v230 -= 8;
                    if ( v230 < 8 )
                    {
                      if ( !v230 )
                        goto LABEL_346;
                      while ( 1 )
                      {
                        v234 = *v231++;
                        v235 = *v229++;
                        if ( v234 != v235 )
                          goto LABEL_339;
                        if ( !--v230 )
                          goto LABEL_346;
                      }
                    }
                  }
LABEL_339:
                  v236 = v367;
                  v237 = 4;
                  while ( 1 )
                  {
                    v238 = v236[v221 - v367];
                    v239 = *v236++;
                    if ( v238 != v239 )
                      break;
                    if ( !--v237 )
                      goto LABEL_346;
                  }
                  v240 = v368;
                  v241 = 6;
                  while ( 1 )
                  {
                    v242 = v240[v221 - v368];
                    v243 = *v240++;
                    if ( v242 != v243 )
                      break;
                    if ( !--v241 )
                      goto LABEL_346;
                  }
                }
                v244 = *((_DWORD *)v221 + 9);
                if ( v244 < 0 )
                  v217 = 1;
                v389 = v217;
                if ( v217 && *(_DWORD *)v221 == 1414090313 && *((_DWORD *)v221 + 1) == 1195525195 )
                {
                  if ( (*((_DWORD *)v196 + 605) & 0x2000) != 0 )
                    v217 = 0;
                  v389 = v217;
                }
                if ( (*((_DWORD *)v196 + 605) & 0x4000) != 0
                  && (v244 & 0x20000000) != 0
                  && (v211 == *((_QWORD *)v196 + 187) || v211 == *((_QWORD *)v196 + 188)) )
                {
                  v217 = 1;
                  v389 = 1;
                }
                v245 = *((_DWORD *)v221 + 4);
                v246 = *((unsigned int *)v221 + 3);
                v247 = v349;
                if ( v245 <= *((_DWORD *)v221 + 2) )
                  v245 = *((_DWORD *)v221 + 2);
                v248 = v246 + v245;
                LODWORD(v338) = *((_DWORD *)v221 + 3);
                v337 = v248;
                if ( v208 == v349 )
                {
                  v249 = 0;
                  v250 = 0;
                }
                else
                {
                  v249 = *v208;
                  v250 = v208[1];
                }
                v251 = v344;
                v252 = v246;
                LODWORD(v342) = v250;
                if ( v344 == v349 || v249 <= (unsigned int)v246 || v250 > v248 || v217 )
                {
LABEL_392:
                  v217 = 0;
                }
                else
                {
                  *v214 = v246;
                  v253 = v249 - v246;
                  v214[1] = v249;
                  v254 = v211 + v246;
                  v255 = v211 + v246 + v249 - (unsigned int)v246;
                  v256 = v359;
                  v257 = &v369;
                  v258 = 0;
                  v252 = v249;
                  do
                  {
                    if ( v254 < *v257 + *v256 && v255 > *v257 )
                    {
                      v248 = v337;
                      v247 = v349;
                      v251 = v344;
                      goto LABEL_392;
                    }
                    ++v258;
                    ++v257;
                    ++v256;
                  }
                  while ( v258 < 6 );
                  *((_DWORD *)v196 + 516) += v253;
                  v259 = (_QWORD *)(v211 + v246);
                  v260 = *((_DWORD *)v196 + 511);
                  v261 = (const char *)v254;
                  v262 = *((_QWORD *)v196 + 256);
                  if ( v254 < v255 )
                  {
                    do
                    {
                      _mm_prefetch(v261, 0);
                      v261 += 64;
                    }
                    while ( (unsigned __int64)v261 < v255 );
                  }
                  v263 = *((_QWORD *)v196 + 256);
                  v264 = v253 >> 7;
                  if ( v253 >> 7 )
                  {
                    do
                    {
                      v265 = 8LL;
                      do
                      {
                        v266 = v263 ^ *v259;
                        v267 = v259[1];
                        v259 += 2;
                        v263 = __ROL8__(__ROL8__(v266, v260) ^ v267, v260);
                        --v265;
                      }
                      while ( v265 );
                      v268 = __ROL8__(v262 ^ ((unsigned __int64)v259 - v254), 17) ^ v262 ^ ((unsigned __int64)v259 - v254);
                      v380 = (v268 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v260 = ((unsigned __int8)(v380 ^ v268) ^ (unsigned __int8)v260) & 0x3F;
                      if ( !v260 )
                        LOBYTE(v260) = 1;
                      --v264;
                    }
                    while ( v264 );
                    v196 = (_BYTE *)v348;
                    v250 = v342;
                  }
                  v269 = v253 & 0x7F;
                  if ( v269 >= 8 )
                  {
                    v270 = (unsigned __int64)v269 >> 3;
                    do
                    {
                      v263 = __ROL8__(*v259++ ^ v263, v260);
                      v269 -= 8;
                      --v270;
                    }
                    while ( v270 );
                  }
                  for ( ; v269; --v269 )
                  {
                    v271 = *(unsigned __int8 *)v259;
                    v259 = (_QWORD *)((char *)v259 + 1);
                    v263 = __ROL8__(v271 ^ v263, v260);
                  }
                  v272 = v263 >> 31;
                  v217 = 0;
                  while ( v272 )
                  {
                    LODWORD(v263) = v272 ^ v263;
                    v272 >>= 31;
                  }
                  v248 = v337;
                  v211 = v346;
                  LODWORD(v246) = v338;
                  v251 = v344;
                  *(_DWORD *)(v345 + 8) = v263 & 0x7FFFFFFF;
                  v247 = v349;
                }
                if ( v249 < (unsigned int)v246 )
                {
                  v274 = v389;
                }
                else
                {
                  v273 = v250 <= v248;
                  v274 = v389;
                  if ( v273 && v251 != v247 )
                  {
                    v275 = (unsigned int *)v343;
                    v276 = *(_DWORD *)(v343 + 4);
                    if ( v276 <= v248 )
                    {
                      v277 = v339;
                      do
                      {
                        if ( v275 == v247 )
                          break;
                        if ( v274 )
                        {
                          v278 = 0x80;
                        }
                        else
                        {
                          v279 = v251[1];
                          v252 = *v275;
                          if ( *v275 < (unsigned int)v279 )
                          {
                            if ( (*((_DWORD *)v196 + 604) & 0x200000) == 0 )
                            {
                              v358[6] = 1329594368;
                              KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, v211, 6uLL, 0LL);
                            }
                            if ( !*((_DWORD *)v196 + 566) )
                            {
                              *((_QWORD *)v196 + 285) = 0LL;
                              *((_QWORD *)v196 + 286) = 271LL;
                              *((_QWORD *)v196 + 284) = v196 - 0x5C5FC0A76E374B18LL;
                              *((_DWORD *)v196 + 566) = 1;
                              *((_QWORD *)v196 + 287) = v211;
                            }
                          }
                          v280 = v211 + v279;
                          v281 = v252 - v279;
                          v282 = &v369;
                          v283 = v252 - (unsigned int)v279;
                          v284 = v359;
                          v285 = v280 + v283;
                          do
                          {
                            if ( v280 < *v282 + *v284 && v285 > *v282 )
                              goto LABEL_428;
                            ++v217;
                            ++v282;
                            ++v284;
                          }
                          while ( v217 < 6 );
                          if ( v281 < 4 )
                          {
LABEL_428:
                            v217 = 0;
                            v278 = 0x80;
                            goto LABEL_429;
                          }
                          *((_DWORD *)v196 + 516) += v281;
                          v286 = (_QWORD *)v280;
                          v287 = *((_DWORD *)v196 + 511);
                          v288 = (const char *)v280;
                          v289 = *((_QWORD *)v196 + 256);
                          if ( v280 < v285 )
                          {
                            do
                            {
                              _mm_prefetch(v288, 0);
                              v288 += 64;
                            }
                            while ( (unsigned __int64)v288 < v285 );
                          }
                          v290 = *((_QWORD *)v196 + 256);
                          v291 = v281 >> 7;
                          if ( v281 >> 7 )
                          {
                            do
                            {
                              v292 = 8LL;
                              do
                              {
                                v293 = v290 ^ *v286;
                                v294 = v286[1];
                                v286 += 2;
                                v290 = __ROL8__(__ROL8__(v293, v287) ^ v294, v287);
                                --v292;
                              }
                              while ( v292 );
                              v295 = __ROL8__(v289 ^ ((unsigned __int64)v286 - v280), 17) ^ v289 ^ ((unsigned __int64)v286
                                                                                                  - v280);
                              v381 = (v295 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              v287 = ((unsigned __int8)(v381 ^ v295) ^ (unsigned __int8)v287) & 0x3F;
                              if ( !v287 )
                                LOBYTE(v287) = 1;
                              --v291;
                            }
                            while ( v291 );
                            v196 = (_BYTE *)v348;
                            v274 = v389;
                          }
                          v296 = v281 & 0x7F;
                          if ( v296 >= 8 )
                          {
                            v297 = (unsigned __int64)v296 >> 3;
                            do
                            {
                              v290 = __ROL8__(*v286++ ^ v290, v287);
                              v296 -= 8;
                              --v297;
                            }
                            while ( v297 );
                          }
                          for ( ; v296; --v296 )
                          {
                            v298 = *(unsigned __int8 *)v286;
                            v286 = (_QWORD *)((char *)v286 + 1);
                            v290 = __ROL8__(v298 ^ v290, v287);
                          }
                          v299 = v290 >> 7;
                          v217 = 0;
                          while ( v299 )
                          {
                            LOBYTE(v290) = v299 ^ v290;
                            v299 >>= 7;
                          }
                          v211 = v346;
                          v278 = v290 & 0x7F;
                          v275 = (unsigned int *)v343;
LABEL_429:
                          v251 = v344;
                          v248 = v337;
                          v277 = v339;
                        }
                        *v277 = v278;
                        v251 += 3;
                        v275 += 3;
                        v247 = v349;
                        v277 = v339 + 1;
                        v344 = v251;
                        ++v339;
                        v343 = (unsigned __int64)v275;
                        if ( v275 != v349 )
                          v276 = v275[1];
                      }
                      while ( v276 <= v248 );
                    }
                  }
                }
                if ( v274 || v252 == v248 )
                {
LABEL_460:
                  v322 = v345;
                }
                else
                {
                  v300 = v345;
                  v301 = &v369;
                  v302 = v248 - v252;
                  v303 = v211 + v252;
                  *(_DWORD *)(v345 + 12) = v252;
                  v304 = v303 + v248 - v252;
                  *(_DWORD *)(v300 + 16) = v248;
                  v305 = 0;
                  v306 = v359;
                  do
                  {
                    if ( v303 < *v301 + *v306 && v304 > *v301 )
                    {
                      v217 = 0;
                      goto LABEL_460;
                    }
                    ++v305;
                    ++v301;
                    ++v306;
                  }
                  while ( v305 < 6 );
                  *((_DWORD *)v196 + 516) += v302;
                  v307 = (_QWORD *)(v211 + v252);
                  v308 = *((_DWORD *)v196 + 511);
                  v309 = (const char *)v303;
                  v310 = *((_QWORD *)v196 + 256);
                  if ( v303 < v304 )
                  {
                    do
                    {
                      _mm_prefetch(v309, 0);
                      v309 += 64;
                    }
                    while ( (unsigned __int64)v309 < v304 );
                  }
                  v311 = *((_QWORD *)v196 + 256);
                  v312 = v302 >> 7;
                  if ( v302 >> 7 )
                  {
                    do
                    {
                      v313 = 8LL;
                      do
                      {
                        v314 = v311 ^ *v307;
                        v315 = v307 + 1;
                        v316 = *v315;
                        v307 = v315 + 1;
                        v311 = __ROL8__(__ROL8__(v314, v308) ^ v316, v308);
                        --v313;
                      }
                      while ( v313 );
                      v317 = __ROL8__(v310 ^ ((unsigned __int64)v307 - v303), 17) ^ v310 ^ ((unsigned __int64)v307 - v303);
                      v383 = (v317 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v308 = ((unsigned __int8)(v383 ^ v317) ^ (unsigned __int8)v308) & 0x3F;
                      if ( !v308 )
                        LOBYTE(v308) = 1;
                      --v312;
                    }
                    while ( v312 );
                    v196 = (_BYTE *)v348;
                  }
                  v318 = v302 & 0x7F;
                  if ( v318 >= 8 )
                  {
                    v319 = (unsigned __int64)v318 >> 3;
                    do
                    {
                      v311 = __ROL8__(*v307++ ^ v311, v308);
                      v318 -= 8;
                      --v319;
                    }
                    while ( v319 );
                  }
                  for ( ; v318; --v318 )
                  {
                    v320 = *(unsigned __int8 *)v307;
                    v307 = (_QWORD *)((char *)v307 + 1);
                    v311 = __ROL8__(v320 ^ v311, v308);
                  }
                  v321 = v311 >> 31;
                  v217 = 0;
                  while ( v321 )
                  {
                    LODWORD(v311) = v321 ^ v311;
                    v321 >>= 31;
                  }
                  v322 = v345;
                  *(_DWORD *)(v345 + 20) = v311 & 0x7FFFFFFF;
                }
                v208 = v344;
                if ( v344 != v349 && *v344 >= (unsigned int)v338 && v344[1] <= v337 )
                {
                  v323 = v343;
                  if ( (unsigned int *)v343 != v349 )
                  {
                    v324 = v339;
                    *v339 = 0x80;
                    v339 = v324 + 1;
                    v343 = v323 + 12;
                  }
                  v208 += 3;
                  v344 = v208;
                }
                v214 = (_DWORD *)(v322 + 24);
                v221 = (char *)(v347 + 40);
                v345 = (__int64)v214;
                v347 += 40LL;
                if ( v214 == v364 )
                  break;
                v211 = v346;
              }
              v135 = v350;
            }
          }
          v341 = v135;
          v33 = 0;
          goto LABEL_471;
        }
        v164 = *(_QWORD *)(v108 + 152);
        v165 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v135 + 62))(v160, v129, v119, v159);
        if ( v165 )
        {
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
          goto LABEL_233;
        }
LABEL_194:
        v33 = -1073741670;
        goto LABEL_471;
      }
      if ( (*((_DWORD *)v72 + 605) & 0x8000) == 0 )
        goto LABEL_152;
      *(_DWORD *)(v102 + 32) |= 1u;
    }
    if ( !v104 )
      goto LABEL_152;
    goto LABEL_151;
  }
  v33 = -1073741701;
LABEL_472:
  *a1 = v341;
  if ( (int)(v33 + 0x80000000) >= 0 && v33 != -1073741554 )
    return (unsigned int)v33;
  v325 = v31 & 0xFFFFFFEF;
  if ( (v325 & 0x80000004) != 0x80000004 )
  {
    v326 = v325 | 0x80000000;
    v327 = (*((__int64 (__fastcall **)(__int64))v341 + 62))(v353);
    v328 = *(unsigned int *)(v327 + 148);
    if ( (unsigned int)v328 >= 0x14 )
    {
      v329 = *(unsigned int *)(v327 + 144);
      v330 = v329 + v328;
      v331 = v353;
      v332 = v353 + v330;
      for ( n = v329 + v353; n != v332; n += 20LL )
      {
        if ( !*(_DWORD *)(n + 12) )
          break;
        v334 = *(unsigned int *)(n + 16);
        if ( !(_DWORD)v334 )
          break;
        v335 = *(_QWORD *)(v334 + v331);
        if ( v335 )
        {
          result = sub_140346BE8(&v341, v335, v326);
          *a1 = v341;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v331 = v353;
        }
      }
    }
  }
  return 0LL;
}
