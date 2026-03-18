/*
 * XREFs of PropertyEval @ 0x1405B7A30
 * Callers:
 *     FilterEvalImpliedAnd @ 0x1405B7300 (FilterEvalImpliedAnd.c)
 *     FilterEvalStrict @ 0x1405B77D0 (FilterEvalStrict.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ArrayContains @ 0x14034B27C (ArrayContains.c)
 *     StringListContains @ 0x1405B5E60 (StringListContains.c)
 *     CompareFileTimeType @ 0x140942848 (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x140943580 (StringListElementSubstringMatch.c)
 *     SubstringMatch @ 0x140943678 (SubstringMatch.c)
 */

__int64 __fastcall PropertyEval(
        unsigned int a1,
        wchar_t *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        wchar_t *Str2,
        unsigned int a7,
        int *a8)
{
  size_t v8; // r10
  int v10; // edi
  unsigned int v11; // ebx
  int v12; // r12d
  int v13; // r8d
  unsigned int v14; // r9d
  int v15; // r15d
  int v16; // eax
  bool v17; // zf
  int v18; // ecx
  bool v19; // zf
  int v20; // eax
  bool v21; // zf
  int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  unsigned int v26; // r9d
  bool v27; // cf
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  bool v33; // zf
  bool v34; // sf
  bool v35; // of
  bool v36; // cf
  bool v37; // zf
  bool v38; // cf
  bool v39; // cf
  bool v40; // zf
  bool v41; // sf
  bool v42; // of
  bool v43; // sf
  bool v44; // of
  bool v45; // zf
  bool v46; // sf
  bool v47; // of
  unsigned int v48; // r9d
  unsigned int v49; // r9d
  unsigned int v50; // r9d
  unsigned int v51; // r9d
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  unsigned int v57; // r9d
  unsigned int v58; // r9d
  unsigned int v59; // r9d
  unsigned int v60; // r9d
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  unsigned int v68; // r9d
  bool v69; // zf
  bool v70; // sf
  bool v71; // of
  bool v72; // sf
  bool v73; // of
  __int64 v74; // rcx
  bool v75; // sf
  bool v76; // of
  __int64 v77; // rcx
  bool v78; // zf
  bool v79; // sf
  bool v80; // of
  __int64 v81; // rcx
  bool v82; // zf
  __int64 v83; // rcx
  unsigned int v84; // r9d
  unsigned int v85; // r9d
  unsigned int v86; // r9d
  unsigned int v87; // r9d
  __m128i v88; // xmm1
  unsigned int v89; // r9d
  unsigned int v90; // r9d
  unsigned int v91; // r9d
  unsigned int v92; // r9d
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned int v97; // eax
  double v98; // xmm1_8
  bool v99; // cf
  __m128i v100; // xmm0
  unsigned int v101; // eax
  double v102; // xmm0_8
  __m128i v103; // xmm1
  unsigned int v104; // eax
  double v105; // xmm1_8
  bool v106; // cf
  bool v107; // zf
  __m128i v108; // xmm0
  unsigned int v109; // eax
  double v110; // xmm0_8
  __m128i v111; // xmm0
  unsigned int v112; // eax
  double v113; // xmm0_8
  float v114; // xmm1_4
  unsigned int v115; // r9d
  unsigned int v116; // r9d
  unsigned int v117; // r9d
  unsigned int v118; // r9d
  __m128i v119; // xmm1
  unsigned int v120; // eax
  float v121; // xmm1_4
  __m128i v122; // xmm0
  float v123; // xmm0_4
  __m128i v124; // xmm1
  unsigned int v125; // eax
  float v126; // xmm1_4
  __m128i v127; // xmm0
  float v128; // xmm0_4
  __m128i v129; // xmm0
  unsigned int v130; // eax
  float v131; // xmm0_4
  unsigned int v132; // r9d
  unsigned int v133; // r9d
  unsigned int v134; // r9d
  unsigned int v135; // r9d
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // rcx
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rcx
  __int64 v140; // rcx
  unsigned int v141; // r9d
  unsigned int v142; // r9d
  unsigned int v143; // r9d
  unsigned int v144; // r9d
  unsigned int v145; // ecx
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  unsigned int v148; // ecx
  int v149; // ecx
  unsigned int v150; // r9d
  unsigned int v151; // r9d
  unsigned int v152; // r9d
  unsigned int v153; // r9d
  int v154; // ecx
  int v155; // ecx
  int v156; // ecx
  int v157; // ecx
  unsigned int v158; // r9d
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  unsigned int v164; // r9d
  int v165; // edx
  int v166; // ecx
  int v167; // edx
  int v168; // ecx
  int v169; // edx
  int v170; // ecx
  int v171; // edx
  int v172; // ecx
  int v173; // edx
  int v174; // ecx
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // r9d
  unsigned int v178; // r9d
  wchar_t v179; // cx
  bool v180; // cf
  bool v181; // zf
  bool v182; // cf
  unsigned __int64 v183; // rcx
  bool v184; // cf
  unsigned __int64 v185; // rcx
  wchar_t v186; // cx
  bool v187; // cf
  bool v188; // zf
  unsigned __int64 v189; // rcx
  wchar_t v190; // cx
  unsigned int v191; // r9d
  unsigned int v192; // r9d
  unsigned int v193; // r9d
  unsigned int v194; // r9d
  unsigned int v195; // r9d
  unsigned int v196; // r9d
  unsigned int v197; // r9d
  unsigned int v198; // r9d
  unsigned int v199; // r9d
  unsigned int v200; // r9d
  unsigned int v201; // r9d
  unsigned int v202; // r9d
  unsigned int v203; // r9d
  unsigned int v204; // r9d
  unsigned int v205; // r9d
  unsigned int v206; // r9d
  unsigned int v207; // eax
  unsigned int v208; // eax
  unsigned int v209; // r9d
  unsigned int v210; // r9d
  unsigned int v211; // r9d
  unsigned int v212; // r9d
  unsigned int v213; // r9d
  unsigned int v214; // r9d
  unsigned int v215; // r9d
  unsigned int v216; // r9d
  unsigned int v217; // r9d
  unsigned int v218; // r9d
  unsigned int v219; // r9d
  unsigned int v220; // r9d
  unsigned int v221; // r9d
  unsigned int v222; // r9d
  unsigned int v223; // r9d
  unsigned int v224; // r9d
  unsigned int v225; // r9d
  unsigned int v226; // r9d
  unsigned int v227; // r9d
  unsigned int v228; // r9d
  unsigned int v229; // r9d
  unsigned int v230; // r9d
  unsigned int v231; // r9d
  unsigned int v232; // r9d
  wchar_t v233; // cx
  __int16 v234; // cx
  __int16 v235; // cx
  wchar_t v236; // cx
  unsigned int v237; // r9d
  unsigned int v238; // r9d
  unsigned int v239; // r9d
  unsigned int v240; // r9d
  unsigned int v241; // r9d
  unsigned int v242; // r9d
  unsigned int v243; // r9d
  unsigned int v244; // r9d
  unsigned int v245; // r9d
  unsigned int v246; // r9d
  unsigned int v247; // r9d
  unsigned int v248; // r9d
  unsigned int v249; // r9d
  unsigned int v250; // r9d
  unsigned int v251; // r9d
  unsigned int v252; // r9d
  unsigned int v253; // r9d
  unsigned int v254; // r9d
  unsigned int v255; // r9d
  unsigned int v256; // r9d
  unsigned int v257; // r9d
  unsigned int v258; // r9d
  unsigned int v259; // r9d
  unsigned int v260; // r9d
  unsigned int v261; // r9d
  unsigned int v262; // r9d
  unsigned int v263; // r9d
  unsigned int v264; // r9d
  unsigned int v265; // r9d
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  unsigned int v268; // r9d
  wchar_t v269; // cx
  wchar_t v270; // cx
  __int16 v271; // cx
  unsigned int v272; // r9d
  unsigned int v273; // r9d
  unsigned int v274; // r9d
  unsigned int v275; // r9d
  __int16 v276; // dx
  __int16 v277; // dx
  __int16 v278; // dx
  __int16 v279; // dx
  unsigned int v280; // r9d
  unsigned int v281; // r9d
  unsigned int v282; // r9d
  unsigned int v283; // r9d
  unsigned int v284; // r9d
  unsigned int v285; // r9d
  unsigned int v286; // r9d
  unsigned int v287; // r9d
  unsigned int v288; // r9d
  unsigned int v289; // r9d
  unsigned int v290; // r9d
  unsigned int v291; // r9d
  unsigned int v292; // r9d
  unsigned int v293; // r9d
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int v296; // r9d
  unsigned int v297; // r9d
  unsigned int v298; // r9d
  unsigned int v299; // r9d
  unsigned int v300; // r9d
  unsigned int v301; // r9d
  unsigned int v302; // r9d
  unsigned int v303; // r9d
  unsigned int v304; // r9d
  unsigned int v305; // r9d
  unsigned int v306; // r9d
  unsigned int v307; // r9d
  unsigned int v308; // r9d
  unsigned int v309; // r9d
  unsigned int v310; // r9d
  unsigned int v311; // r9d
  unsigned int v312; // r9d
  unsigned int v313; // r9d
  unsigned int v314; // r9d
  unsigned int v315; // r9d
  unsigned int v316; // r9d
  unsigned int v317; // r9d
  unsigned int v318; // r9d
  unsigned int v319; // r9d
  unsigned int v320; // r9d
  unsigned int v321; // r9d
  unsigned int v322; // r9d
  unsigned int v323; // r9d
  unsigned int v324; // r9d
  unsigned int v325; // r9d
  unsigned int v326; // r9d
  unsigned int v327; // r9d
  unsigned int v328; // r9d
  unsigned int v329; // r9d
  unsigned int v330; // r9d
  unsigned int v331; // r9d
  unsigned int v332; // r9d
  unsigned int v333; // r9d
  unsigned int v334; // r9d
  unsigned int v335; // r9d
  unsigned int v336; // r9d
  unsigned int v337; // r9d
  unsigned int v338; // r9d
  unsigned int v339; // r9d
  unsigned int v340; // r9d
  unsigned int v341; // r9d
  unsigned int v342; // r9d
  unsigned int v343; // r9d
  unsigned int v344; // r9d
  unsigned int v345; // r9d
  unsigned int v346; // r9d
  unsigned int v347; // r9d
  unsigned int v348; // r9d
  unsigned int v349; // ecx
  unsigned int v350; // ecx
  unsigned int v351; // ecx
  unsigned int v352; // ecx
  unsigned int v353; // r9d
  unsigned int v354; // r9d
  unsigned int v355; // r9d
  unsigned int v356; // r9d
  unsigned int v357; // r9d
  unsigned int v358; // r9d
  unsigned int v359; // r9d
  unsigned int v360; // r9d
  unsigned int v361; // r9d
  unsigned int v362; // r9d
  unsigned int v363; // r9d
  unsigned int v364; // r9d
  unsigned int v365; // r9d
  unsigned int v366; // r9d
  unsigned int v367; // r9d
  unsigned int v368; // r9d
  unsigned int v369; // r9d
  unsigned int v370; // r9d
  unsigned int v371; // r9d
  unsigned int v372; // r9d
  unsigned int v373; // r9d
  unsigned int v374; // r9d
  unsigned int v375; // r9d
  unsigned int v376; // r9d
  unsigned int v377; // r9d
  unsigned int v378; // r9d
  unsigned int v379; // r9d
  unsigned int v380; // r9d
  bool v381; // zf
  bool v382; // zf
  int v383; // eax
  unsigned int v384; // r9d
  unsigned int v385; // r9d
  unsigned int v386; // r9d
  unsigned int v387; // r9d
  double v388; // xmm0_8
  double v389; // xmm1_8
  double v390; // xmm0_8
  double v391; // xmm1_8
  double v392; // xmm1_8
  unsigned int v393; // r9d
  unsigned int v394; // r9d
  unsigned int v395; // r9d
  unsigned int v396; // r9d
  __m128i v397; // xmm0
  __m128i v398; // xmm1
  __m128i v399; // xmm0
  __m128i v400; // xmm1
  __m128i v401; // xmm1
  unsigned int v402; // ecx
  unsigned int v403; // r9d
  unsigned int v404; // r9d
  unsigned int v405; // r9d
  unsigned int v406; // r9d
  unsigned int v407; // ecx
  unsigned int v408; // ecx
  unsigned int v409; // ecx
  unsigned int v410; // ecx
  unsigned int v411; // r9d
  unsigned int v412; // r9d
  unsigned int v413; // r9d
  unsigned int v414; // r9d
  unsigned int v415; // r9d
  unsigned int v416; // r9d
  unsigned int v417; // r9d
  unsigned int v418; // r9d
  unsigned int v419; // r9d
  unsigned int v420; // r9d
  unsigned int v421; // r9d
  unsigned int v422; // r9d
  unsigned int v423; // r9d
  unsigned int v424; // r9d
  unsigned int v425; // r9d
  unsigned int v426; // r9d
  unsigned int v427; // r9d
  unsigned int v428; // r9d
  unsigned int v429; // r9d
  unsigned int v430; // r9d
  unsigned int v431; // r9d
  unsigned int v432; // r9d
  unsigned int v433; // r9d
  unsigned int v434; // r9d
  unsigned int v435; // r9d
  unsigned int v436; // r9d
  unsigned int v437; // r9d
  unsigned int v438; // r9d
  unsigned int v439; // r9d
  unsigned int v440; // r9d
  unsigned int v441; // r9d
  unsigned int v442; // r9d
  float v443; // xmm0_4
  float v444; // xmm1_4
  float v445; // xmm0_4
  float v446; // xmm1_4
  unsigned int v447; // r9d
  unsigned int v448; // r9d
  unsigned int v449; // r9d
  unsigned int v450; // r9d
  __m128i v451; // xmm0
  __m128i v452; // xmm1
  __m128i v453; // xmm0
  __m128i v454; // xmm1
  __m128i v455; // xmm1
  unsigned int v456; // ecx
  unsigned int v457; // r9d
  unsigned int v458; // r9d
  unsigned int v459; // r9d
  unsigned int v460; // r9d
  unsigned int v461; // ecx
  unsigned int v462; // ecx
  unsigned int v463; // ecx
  unsigned int v464; // ecx
  unsigned int v465; // r9d
  unsigned int v466; // r9d
  unsigned int v467; // r9d
  unsigned int v468; // r9d
  unsigned int v469; // r9d
  unsigned int v470; // r9d
  unsigned int v471; // r9d
  unsigned int v472; // r9d
  unsigned int v473; // r9d
  unsigned int v474; // r9d
  unsigned int v475; // r9d
  unsigned int v476; // r9d
  unsigned int v477; // r9d
  unsigned int v478; // r9d
  unsigned int v479; // r9d
  unsigned int v480; // r9d
  unsigned int v481; // r9d
  unsigned int v482; // r9d
  unsigned int v483; // r9d
  unsigned int v484; // r9d
  unsigned int v485; // r9d
  unsigned int v486; // r9d
  unsigned int v487; // r9d
  unsigned int v488; // r9d
  unsigned int v489; // r9d
  unsigned int v490; // r9d
  unsigned int v491; // r9d
  unsigned int v492; // r9d
  unsigned int v493; // r9d
  unsigned int v494; // r9d
  unsigned int v495; // r9d
  unsigned int v496; // r9d
  unsigned __int64 v497; // rcx
  unsigned int v498; // r9d
  unsigned int v499; // r9d
  unsigned int v500; // r9d
  unsigned int v501; // r9d
  unsigned int v502; // r9d
  unsigned int v503; // r9d
  unsigned int v504; // r9d
  unsigned int v505; // r9d
  unsigned int v506; // r9d
  unsigned int v507; // r9d
  unsigned int v508; // r9d
  unsigned int v509; // r9d
  unsigned int v510; // r9d
  unsigned int v511; // r9d
  unsigned int v512; // r9d
  unsigned int v513; // r9d
  unsigned int v514; // r9d
  unsigned int v515; // r9d
  unsigned int v516; // r9d
  unsigned int v517; // r9d
  unsigned int v518; // r9d
  unsigned int v519; // r9d
  unsigned int v520; // r9d
  unsigned int v521; // r9d
  unsigned int v522; // r9d
  unsigned int v523; // r9d
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // r9d
  unsigned int v528; // r9d
  unsigned int v529; // r9d
  unsigned int v530; // r9d
  unsigned int v531; // r9d
  unsigned int v532; // r9d
  unsigned int v533; // r9d
  __int64 v534; // rcx
  unsigned int v535; // r9d
  unsigned int v536; // r9d
  unsigned int v537; // r9d
  unsigned int v538; // r9d
  unsigned int v539; // r9d
  unsigned int v540; // r9d
  unsigned int v541; // r9d
  unsigned int v542; // r9d
  unsigned int v543; // r9d
  unsigned int v544; // r9d
  unsigned int v545; // r9d
  unsigned int v546; // r9d
  unsigned int v547; // r9d
  unsigned int v548; // r9d
  unsigned int v549; // r9d
  unsigned int v550; // r9d
  unsigned int v551; // r9d
  unsigned int v552; // r9d
  unsigned int v553; // r9d
  unsigned int v554; // r9d
  unsigned int v555; // r9d
  unsigned int v556; // r9d
  unsigned int v557; // r9d
  unsigned int v558; // r9d
  unsigned int v559; // r9d
  unsigned int v560; // r9d
  unsigned int v561; // r9d
  unsigned int v562; // r9d
  unsigned int v563; // r9d
  unsigned int v564; // r9d
  unsigned int v565; // r9d
  unsigned int v566; // r9d
  bool v567; // zf
  unsigned int v568; // r9d
  unsigned int v569; // r9d
  unsigned int v570; // r9d
  unsigned int v571; // r9d
  bool v572; // zf
  __int64 v573; // rcx

  v8 = a3;
  v10 = 0;
  v11 = 0;
  v12 = a4 & 0x10000;
  v13 = a4 & 0x20000;
  v14 = a4 & 0xF000FFFF;
  *a8 = 0;
  if ( v13 && a1 != 18 && a1 != 8210 && a1 != 25 )
  {
    v11 = -1073741637;
    goto LABEL_1348;
  }
  v15 = 1;
  if ( v14 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1348;
  }
  if ( !a1 || !a5 )
    goto LABEL_1348;
  if ( a1 > 0x1003 )
  {
    if ( a1 == 4109 )
    {
      if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
        goto LABEL_384;
      if ( v14 == 2 )
        goto LABEL_839;
      if ( v14 != 0x10000000 )
        goto LABEL_384;
      v20 = ArrayContains((__int64)a2, v8, (__int64)Str2, a7);
    }
    else
    {
      if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
        goto LABEL_384;
      switch ( v14 )
      {
        case 0x1000u:
          v20 = StringListContains(a2, a5, Str2, v13);
          break;
        case 2u:
          v382 = v13 == 0;
LABEL_838:
          if ( !v382 )
            goto LABEL_384;
          goto LABEL_839;
        case 0x2000u:
        case 0x3000u:
        case 0x4000u:
          v20 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Str2, v13, v14);
          break;
        default:
          goto LABEL_384;
      }
    }
LABEL_41:
    *a8 = v20;
    goto LABEL_1348;
  }
  if ( a1 == 4099 )
  {
LABEL_836:
    v382 = v14 == 2;
    goto LABEL_838;
  }
  if ( a1 <= 0xD )
  {
    if ( a1 == 13 )
    {
      if ( a5 == 13 && v14 == 2 )
      {
        if ( *(_DWORD *)a2 == *(_DWORD *)Str2
          && *((_DWORD *)a2 + 1) == *((_DWORD *)Str2 + 1)
          && *((_DWORD *)a2 + 2) == *((_DWORD *)Str2 + 2) )
        {
          v19 = *((_DWORD *)a2 + 3) == *((_DWORD *)Str2 + 3);
          goto LABEL_34;
        }
LABEL_13:
        v15 = 0;
LABEL_14:
        *a8 = v15;
        goto LABEL_1348;
      }
LABEL_384:
      v11 = -1073741637;
      goto LABEL_1348;
    }
    if ( a1 <= 7 )
    {
      if ( a1 == 7 )
      {
        if ( v14 - 7 > 1 )
        {
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 != 3 )
                {
                  if ( a5 != 4 )
                  {
                    if ( a5 != 5 )
                    {
                      v23 = a5 - 6;
                      if ( a5 == 6 )
                        goto LABEL_59;
                      goto LABEL_58;
                    }
                    v345 = v14 - 2;
                    if ( v345 )
                    {
                      v346 = v345 - 1;
                      if ( v346 )
                      {
                        v347 = v346 - 1;
                        if ( v347 )
                        {
                          v348 = v347 - 1;
                          if ( v348 )
                          {
                            if ( v348 != 1 )
                              goto LABEL_384;
                            v349 = *Str2;
                            goto LABEL_774;
                          }
                          v350 = *Str2;
                          goto LABEL_776;
                        }
                        v351 = *Str2;
                        goto LABEL_778;
                      }
                      v352 = *Str2;
                      goto LABEL_780;
                    }
                    goto LABEL_113;
                  }
                  v353 = v14 - 2;
                  if ( v353 )
                  {
                    v354 = v353 - 1;
                    if ( v354 )
                    {
                      v355 = v354 - 1;
                      if ( v355 )
                      {
                        v356 = v355 - 1;
                        if ( v356 )
                        {
                          if ( v356 != 1 )
                            goto LABEL_384;
                          v349 = (__int16)*Str2;
                          goto LABEL_774;
                        }
                        v350 = (__int16)*Str2;
LABEL_776:
                        v182 = *(_DWORD *)a2 < v350;
                        goto LABEL_334;
                      }
                      v351 = (__int16)*Str2;
LABEL_778:
                      v184 = *(_DWORD *)a2 < v351;
                      goto LABEL_338;
                    }
                    v352 = (__int16)*Str2;
LABEL_780:
                    v187 = *(_DWORD *)a2 < v352;
                    v188 = *(_DWORD *)a2 == v352;
                    goto LABEL_342;
                  }
LABEL_123:
                  v56 = (__int16)*Str2;
                  goto LABEL_159;
                }
                v357 = v14 - 2;
                if ( v357 )
                {
                  v358 = v357 - 1;
                  if ( !v358 )
                  {
                    v352 = *(unsigned __int8 *)Str2;
                    goto LABEL_780;
                  }
                  v359 = v358 - 1;
                  if ( !v359 )
                  {
                    v351 = *(unsigned __int8 *)Str2;
                    goto LABEL_778;
                  }
                  v360 = v359 - 1;
                  if ( !v360 )
                  {
                    v350 = *(unsigned __int8 *)Str2;
                    goto LABEL_776;
                  }
                  if ( v360 != 1 )
                    goto LABEL_384;
                  v349 = *(unsigned __int8 *)Str2;
LABEL_774:
                  v180 = *(_DWORD *)a2 < v349;
                  v181 = *(_DWORD *)a2 == v349;
                  goto LABEL_330;
                }
LABEL_133:
                v56 = *(unsigned __int8 *)Str2;
                goto LABEL_159;
              }
              v361 = v14 - 2;
              if ( v361 )
              {
                v362 = v361 - 1;
                if ( !v362 )
                {
                  v352 = *(char *)Str2;
                  goto LABEL_780;
                }
                v363 = v362 - 1;
                if ( !v363 )
                {
                  v351 = *(char *)Str2;
                  goto LABEL_778;
                }
                v364 = v363 - 1;
                if ( !v364 )
                {
                  v350 = *(char *)Str2;
                  goto LABEL_776;
                }
                if ( v364 != 1 )
                  goto LABEL_384;
                v349 = *(char *)Str2;
                goto LABEL_774;
              }
LABEL_158:
              v56 = *(char *)Str2;
              goto LABEL_159;
            }
LABEL_792:
            v369 = v14 - 2;
            if ( v369 )
            {
              v370 = v369 - 1;
              if ( v370 )
              {
                v371 = v370 - 1;
                if ( v371 )
                {
                  v372 = v371 - 1;
                  if ( v372 )
                  {
                    if ( v372 != 1 )
                      goto LABEL_384;
                    v93 = *(unsigned int *)a2;
LABEL_180:
                    v35 = __OFSUB__(v93, *(_QWORD *)Str2);
                    v33 = v93 == *(_QWORD *)Str2;
                    v34 = v93 - *(_QWORD *)Str2 < 0;
LABEL_181:
                    v22 = v34 ^ v35 | v33;
                    goto LABEL_47;
                  }
                  v94 = *(unsigned int *)a2;
                  goto LABEL_184;
                }
                v95 = *(unsigned int *)a2;
                goto LABEL_189;
              }
              v96 = *(unsigned int *)a2;
              goto LABEL_194;
            }
            goto LABEL_732;
          }
          if ( a5 != 9 )
          {
            if ( a5 != 10 )
            {
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                  goto LABEL_792;
                if ( a5 != 15 )
                  goto LABEL_384;
              }
              v365 = v14 - 2;
              if ( v365 )
              {
                v366 = v365 - 1;
                if ( v366 )
                {
                  v367 = v366 - 1;
                  if ( v367 )
                  {
                    v368 = v367 - 1;
                    if ( v368 )
                    {
                      if ( v368 != 1 )
                        goto LABEL_384;
                      v98 = (double)*(int *)a2;
                      goto LABEL_201;
                    }
                    v102 = (double)*(int *)a2;
LABEL_207:
                    v99 = v102 < *(double *)Str2;
                    goto LABEL_241;
                  }
                  v105 = (double)*(int *)a2;
                  goto LABEL_213;
                }
                v110 = (double)*(int *)a2;
LABEL_219:
                v106 = v110 < *(double *)Str2;
                v107 = v110 == *(double *)Str2;
                goto LABEL_251;
              }
              v113 = (double)*(int *)a2;
              goto LABEL_225;
            }
            v373 = v14 - 2;
            if ( v373 )
            {
              v374 = v373 - 1;
              if ( v374 )
              {
                v375 = v374 - 1;
                if ( v375 )
                {
                  v376 = v375 - 1;
                  if ( v376 )
                  {
                    if ( v376 != 1 )
                      goto LABEL_384;
                    v121 = (float)*(int *)a2;
                    goto LABEL_237;
                  }
                  v123 = (float)*(int *)a2;
LABEL_240:
                  v99 = v123 < *(float *)Str2;
                  goto LABEL_241;
                }
                v126 = (float)*(int *)a2;
LABEL_247:
                v106 = *(float *)Str2 < v126;
                v107 = *(float *)Str2 == v126;
                goto LABEL_251;
              }
              v128 = (float)*(int *)a2;
LABEL_250:
              v106 = v128 < *(float *)Str2;
              v107 = v128 == *(float *)Str2;
              goto LABEL_251;
            }
            v131 = (float)*(int *)a2;
            goto LABEL_257;
          }
          v377 = v14 - 2;
          if ( !v377 )
          {
LABEL_732:
            v140 = *(unsigned int *)a2;
            goto LABEL_733;
          }
          v378 = v377 - 1;
          if ( v378 )
          {
            v379 = v378 - 1;
            if ( v379 )
            {
              v380 = v379 - 1;
              if ( v380 )
              {
                if ( v380 != 1 )
                  goto LABEL_384;
                v136 = *(unsigned int *)a2;
LABEL_818:
                v36 = v136 < *(_QWORD *)Str2;
                v37 = v136 == *(_QWORD *)Str2;
                goto LABEL_94;
              }
              v137 = *(unsigned int *)a2;
              goto LABEL_820;
            }
            v138 = *(unsigned int *)a2;
            goto LABEL_822;
          }
          v139 = *(unsigned int *)a2;
          goto LABEL_824;
        }
        if ( a5 != 7 )
          goto LABEL_384;
        if ( v14 != 7 )
        {
          v20 = *(_DWORD *)Str2 | *(_DWORD *)a2;
          goto LABEL_41;
        }
        v18 = *(_DWORD *)Str2 & *(_DWORD *)a2;
LABEL_30:
        *a8 = v18;
        goto LABEL_1348;
      }
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 == 5 )
              {
                if ( a5 <= 8 )
                {
                  if ( a5 != 8 )
                  {
                    if ( a5 != 2 )
                    {
                      if ( a5 != 3 )
                      {
                        if ( a5 != 4 )
                        {
                          if ( a5 == 5 )
                          {
                            v28 = v14 - 2;
                            if ( v28 )
                            {
                              v158 = v28 - 1;
                              if ( v158 )
                              {
                                v159 = v158 - 1;
                                if ( !v159 )
                                {
                                  v27 = *a2 < *Str2;
                                  goto LABEL_63;
                                }
                                v160 = v159 - 1;
                                if ( v160 )
                                {
                                  if ( v160 != 1 )
                                    goto LABEL_384;
                                  v36 = *a2 < *Str2;
                                  v37 = *a2 == *Str2;
                                  goto LABEL_94;
                                }
                                v38 = *a2 < *Str2;
                                goto LABEL_97;
                              }
                              v39 = *a2 < *Str2;
                              v40 = *a2 == *Str2;
                              goto LABEL_100;
                            }
                            goto LABEL_76;
                          }
                          if ( a5 != 6 )
                          {
                            if ( a5 != 7 )
                              goto LABEL_384;
                            v141 = v14 - 2;
                            if ( v141 )
                            {
                              v142 = v141 - 1;
                              if ( v142 )
                              {
                                v143 = v142 - 1;
                                if ( v143 )
                                {
                                  v144 = v143 - 1;
                                  if ( v144 )
                                  {
                                    if ( v144 != 1 )
                                      goto LABEL_384;
                                    v145 = *a2;
                                    goto LABEL_276;
                                  }
                                  v146 = *a2;
LABEL_279:
                                  v38 = v146 < *(_DWORD *)Str2;
                                  goto LABEL_97;
                                }
                                v147 = *a2;
LABEL_282:
                                v27 = v147 < *(_DWORD *)Str2;
                                goto LABEL_63;
                              }
                              v148 = *a2;
LABEL_285:
                              v39 = v148 < *(_DWORD *)Str2;
                              v40 = v148 == *(_DWORD *)Str2;
                              goto LABEL_100;
                            }
                            goto LABEL_286;
                          }
                          v150 = v14 - 2;
                          if ( !v150 )
                          {
LABEL_286:
                            v149 = *a2;
LABEL_288:
                            v21 = v149 == *(_DWORD *)Str2;
                            goto LABEL_46;
                          }
                          v151 = v150 - 1;
                          if ( v151 )
                          {
                            v152 = v151 - 1;
                            if ( v152 )
                            {
                              v153 = v152 - 1;
                              if ( v153 )
                              {
                                if ( v153 != 1 )
                                  goto LABEL_384;
                                v154 = *a2;
                                goto LABEL_295;
                              }
                              v155 = *a2;
LABEL_298:
                              v42 = __OFSUB__(v155, *(_DWORD *)Str2);
                              v41 = v155 - *(_DWORD *)Str2 < 0;
                              goto LABEL_186;
                            }
                            v156 = *a2;
LABEL_301:
                            v44 = __OFSUB__(v156, *(_DWORD *)Str2);
                            v43 = v156 - *(_DWORD *)Str2 < 0;
                            goto LABEL_191;
                          }
                          v157 = *a2;
LABEL_304:
                          v47 = __OFSUB__(v157, *(_DWORD *)Str2);
                          v45 = v157 == *(_DWORD *)Str2;
                          v46 = v157 - *(_DWORD *)Str2 < 0;
                          goto LABEL_196;
                        }
                        v161 = v14 - 2;
                        if ( v161 )
                        {
                          v162 = v161 - 1;
                          if ( v162 )
                          {
                            v163 = v162 - 1;
                            if ( v163 )
                            {
                              v164 = v163 - 1;
                              if ( v164 )
                              {
                                if ( v164 != 1 )
                                  goto LABEL_384;
                                v165 = *a2;
                                v166 = (__int16)*Str2;
                                goto LABEL_353;
                              }
                              v167 = *a2;
                              v168 = (__int16)*Str2;
                              goto LABEL_358;
                            }
                            v169 = *a2;
                            v170 = (__int16)*Str2;
                            goto LABEL_363;
                          }
                          v171 = *a2;
                          v172 = (__int16)*Str2;
                          goto LABEL_368;
                        }
                        v173 = *a2;
                        v174 = (__int16)*Str2;
LABEL_373:
                        v82 = v173 == v174;
                        goto LABEL_162;
                      }
                      v175 = v14 - 2;
                      if ( v175 )
                      {
                        v176 = v175 - 1;
                        if ( v176 )
                        {
                          v177 = v176 - 1;
                          if ( v177 )
                          {
                            v178 = v177 - 1;
                            if ( v178 )
                            {
                              if ( v178 != 1 )
                                goto LABEL_384;
                              v179 = *(unsigned __int8 *)Str2;
                              v180 = *a2 < v179;
                              v181 = *a2 == v179;
                              goto LABEL_330;
                            }
                            v182 = *a2 < *(unsigned __int8 *)Str2;
LABEL_334:
                            v20 = !v182;
                            goto LABEL_41;
                          }
                          v184 = *a2 < *(unsigned __int8 *)Str2;
LABEL_338:
                          v20 = v184;
                          goto LABEL_41;
                        }
                        v186 = *(unsigned __int8 *)Str2;
                        v187 = *a2 < v186;
                        v188 = *a2 == v186;
LABEL_342:
                        v20 = !v187 && !v188;
                        goto LABEL_41;
                      }
                      goto LABEL_343;
                    }
                    v191 = v14 - 2;
                    if ( v191 )
                    {
                      v192 = v191 - 1;
                      if ( v192 )
                      {
                        v193 = v192 - 1;
                        if ( v193 )
                        {
                          v194 = v193 - 1;
                          if ( v194 )
                          {
                            if ( v194 != 1 )
                              goto LABEL_384;
                            v165 = *a2;
                            goto LABEL_352;
                          }
                          v167 = *a2;
LABEL_356:
                          v168 = *(char *)Str2;
                          goto LABEL_358;
                        }
                        v169 = *a2;
LABEL_361:
                        v170 = *(char *)Str2;
                        goto LABEL_363;
                      }
                      v171 = *a2;
LABEL_366:
                      v172 = *(char *)Str2;
                      goto LABEL_368;
                    }
                    v173 = *a2;
                    goto LABEL_371;
                  }
LABEL_385:
                  v199 = v14 - 2;
                  if ( v199 )
                  {
                    v200 = v199 - 1;
                    if ( v200 )
                    {
                      v201 = v200 - 1;
                      if ( v201 )
                      {
                        v202 = v201 - 1;
                        if ( v202 )
                        {
                          if ( v202 != 1 )
                            goto LABEL_384;
                          v93 = *a2;
                          goto LABEL_180;
                        }
                        v94 = *a2;
                        goto LABEL_184;
                      }
                      v95 = *a2;
                      goto LABEL_189;
                    }
                    v96 = *a2;
                    goto LABEL_194;
                  }
                  goto LABEL_415;
                }
                if ( a5 == 9 )
                {
                  v209 = v14 - 2;
                  if ( v209 )
                  {
                    v210 = v209 - 1;
                    if ( v210 )
                    {
                      v211 = v210 - 1;
                      if ( v211 )
                      {
                        v212 = v211 - 1;
                        if ( v212 )
                        {
                          if ( v212 != 1 )
                            goto LABEL_384;
                          v136 = *a2;
                          goto LABEL_818;
                        }
                        v137 = *a2;
                        goto LABEL_820;
                      }
                      v138 = *a2;
                      goto LABEL_822;
                    }
                    v139 = *a2;
                    goto LABEL_824;
                  }
LABEL_415:
                  v140 = *a2;
                  goto LABEL_733;
                }
                if ( a5 != 10 )
                {
                  if ( a5 != 11 )
                  {
                    if ( a5 == 14 )
                      goto LABEL_385;
                    if ( a5 != 15 )
                      goto LABEL_384;
                  }
                  v195 = v14 - 2;
                  if ( v195 )
                  {
                    v196 = v195 - 1;
                    if ( v196 )
                    {
                      v197 = v196 - 1;
                      if ( v197 )
                      {
                        v198 = v197 - 1;
                        if ( v198 )
                        {
                          if ( v198 != 1 )
                            goto LABEL_384;
                          v97 = *a2;
                          goto LABEL_198;
                        }
                        v101 = *a2;
                        goto LABEL_204;
                      }
                      v104 = *a2;
                      goto LABEL_210;
                    }
                    v109 = *a2;
                    goto LABEL_216;
                  }
                  v112 = *a2;
                  goto LABEL_222;
                }
                v203 = v14 - 2;
                if ( v203 )
                {
                  v204 = v203 - 1;
                  if ( v204 )
                  {
                    v205 = v204 - 1;
                    if ( v205 )
                    {
                      v206 = v205 - 1;
                      if ( v206 )
                      {
                        if ( v206 != 1 )
                          goto LABEL_384;
                        v120 = *a2;
                        goto LABEL_234;
                      }
                      v207 = *a2;
                      goto LABEL_402;
                    }
                    v125 = *a2;
                    goto LABEL_244;
                  }
                  v208 = *a2;
                  goto LABEL_405;
                }
                v130 = *a2;
                goto LABEL_254;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  switch ( a5 )
                  {
                    case 2u:
                      v65 = v14 - 2;
                      if ( !v65 )
                        goto LABEL_158;
                      v66 = v65 - 1;
                      if ( !v66 )
                      {
                        v55 = *(char *)Str2;
                        goto LABEL_154;
                      }
                      v67 = v66 - 1;
                      if ( !v67 )
                      {
                        v54 = *(char *)Str2;
                        goto LABEL_149;
                      }
                      v68 = v67 - 1;
                      if ( !v68 )
                      {
                        v53 = *(char *)Str2;
                        goto LABEL_144;
                      }
                      if ( v68 != 1 )
                        goto LABEL_384;
                      v52 = *(char *)Str2;
                      break;
                    case 3u:
                      v61 = v14 - 2;
                      if ( !v61 )
                        goto LABEL_133;
                      v62 = v61 - 1;
                      if ( !v62 )
                      {
                        v55 = *(unsigned __int8 *)Str2;
                        goto LABEL_154;
                      }
                      v63 = v62 - 1;
                      if ( !v63 )
                      {
                        v54 = *(unsigned __int8 *)Str2;
                        goto LABEL_149;
                      }
                      v64 = v63 - 1;
                      if ( !v64 )
                      {
                        v53 = *(unsigned __int8 *)Str2;
                        goto LABEL_144;
                      }
                      if ( v64 != 1 )
                        goto LABEL_384;
                      v52 = *(unsigned __int8 *)Str2;
                      break;
                    case 4u:
                      v57 = v14 - 2;
                      if ( !v57 )
                        goto LABEL_123;
                      v58 = v57 - 1;
                      if ( v58 )
                      {
                        v59 = v58 - 1;
                        if ( v59 )
                        {
                          v60 = v59 - 1;
                          if ( v60 )
                          {
                            if ( v60 != 1 )
                              goto LABEL_384;
                            v52 = (__int16)*Str2;
                            break;
                          }
                          v53 = (__int16)*Str2;
LABEL_144:
                          v73 = __OFSUB__(*(_DWORD *)a2, v53);
                          v72 = *(_DWORD *)a2 - v53 < 0;
                          goto LABEL_147;
                        }
                        v54 = (__int16)*Str2;
LABEL_149:
                        v76 = __OFSUB__(*(_DWORD *)a2, v54);
                        v75 = *(_DWORD *)a2 - v54 < 0;
LABEL_152:
                        v20 = v75 ^ v76;
                        goto LABEL_41;
                      }
                      v55 = (__int16)*Str2;
LABEL_154:
                      v80 = __OFSUB__(*(_DWORD *)a2, v55);
                      v78 = *(_DWORD *)a2 == v55;
                      v79 = *(_DWORD *)a2 - v55 < 0;
LABEL_157:
                      v20 = !(v79 ^ v80 | v78);
                      goto LABEL_41;
                    case 5u:
                      v48 = v14 - 2;
                      if ( !v48 )
                      {
LABEL_113:
                        v56 = *Str2;
LABEL_159:
                        v82 = *(_DWORD *)a2 == v56;
LABEL_162:
                        v20 = v82;
                        goto LABEL_41;
                      }
                      v49 = v48 - 1;
                      if ( v49 )
                      {
                        v50 = v49 - 1;
                        if ( v50 )
                        {
                          v51 = v50 - 1;
                          if ( v51 )
                          {
                            if ( v51 != 1 )
                              goto LABEL_384;
                            v52 = *Str2;
                            break;
                          }
                          v53 = *Str2;
                          goto LABEL_144;
                        }
                        v54 = *Str2;
                        goto LABEL_149;
                      }
                      v55 = *Str2;
                      goto LABEL_154;
                    default:
                      v23 = a5 - 6;
                      if ( a5 != 6 )
                      {
LABEL_58:
                        if ( v23 != 1 )
                          goto LABEL_384;
LABEL_59:
                        v24 = v14 - 2;
                        if ( v24 )
                        {
                          v25 = v24 - 1;
                          if ( v25 )
                          {
                            v26 = v25 - 1;
                            if ( !v26 )
                            {
                              v27 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_63:
                              v22 = v27;
                              goto LABEL_47;
                            }
                            v344 = v26 - 1;
                            if ( v344 )
                            {
                              if ( v344 != 1 )
                                goto LABEL_384;
                              v36 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                              v37 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                              goto LABEL_94;
                            }
                            v38 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_97:
                            v22 = !v38;
                            goto LABEL_47;
                          }
                          v39 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                          v40 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                          goto LABEL_100;
                        }
                        goto LABEL_1332;
                      }
                      v29 = v14 - 2;
                      if ( v29 )
                      {
                        v30 = v29 - 1;
                        if ( !v30 )
                        {
                          v47 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                          v45 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                          v46 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_196:
                          v22 = !(v46 ^ v47 | v45);
                          goto LABEL_47;
                        }
                        v31 = v30 - 1;
                        if ( !v31 )
                        {
                          v44 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                          v43 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_191:
                          v22 = v43 ^ v44;
                          goto LABEL_47;
                        }
                        v32 = v31 - 1;
                        if ( v32 )
                        {
                          if ( v32 != 1 )
                            goto LABEL_384;
                          v35 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                          v33 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                          v34 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                          goto LABEL_181;
                        }
                        v42 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                        v41 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                        goto LABEL_186;
                      }
LABEL_1332:
                      v21 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                      goto LABEL_46;
                  }
                  v71 = __OFSUB__(*(_DWORD *)a2, v52);
                  v69 = *(_DWORD *)a2 == v52;
                  v70 = *(_DWORD *)a2 - v52 < 0;
LABEL_142:
                  v20 = v70 ^ v71 | v69;
                  goto LABEL_41;
                }
                goto LABEL_174;
              }
              if ( a5 == 9 )
              {
                v132 = v14 - 2;
                if ( v132 )
                {
                  v133 = v132 - 1;
                  if ( v133 )
                  {
                    v134 = v133 - 1;
                    if ( v134 )
                    {
                      v135 = v134 - 1;
                      if ( v135 )
                      {
                        if ( v135 != 1 )
                          goto LABEL_384;
                        v136 = *(int *)a2;
                        goto LABEL_818;
                      }
                      v137 = *(int *)a2;
                      goto LABEL_820;
                    }
                    v138 = *(int *)a2;
                    goto LABEL_822;
                  }
                  v139 = *(int *)a2;
                  goto LABEL_824;
                }
LABEL_267:
                v140 = *(int *)a2;
LABEL_733:
                v21 = v140 == *(_QWORD *)Str2;
                goto LABEL_46;
              }
              if ( a5 == 10 )
              {
                v115 = v14 - 2;
                if ( v115 )
                {
                  v116 = v115 - 1;
                  if ( v116 )
                  {
                    v117 = v116 - 1;
                    if ( v117 )
                    {
                      v118 = v117 - 1;
                      if ( v118 )
                      {
                        if ( v118 != 1 )
                          goto LABEL_384;
                        v119 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_235;
                      }
                      v122 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_239:
                      LODWORD(v123) = _mm_cvtepi32_ps(v122).m128_u32[0];
                      goto LABEL_240;
                    }
                    v124 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_245:
                    LODWORD(v126) = _mm_cvtepi32_ps(v124).m128_u32[0];
                    goto LABEL_247;
                  }
                  v127 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_249:
                  LODWORD(v128) = _mm_cvtepi32_ps(v127).m128_u32[0];
                  goto LABEL_250;
                }
                v129 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                goto LABEL_255;
              }
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                {
LABEL_174:
                  v89 = v14 - 2;
                  if ( v89 )
                  {
                    v90 = v89 - 1;
                    if ( v90 )
                    {
                      v91 = v90 - 1;
                      if ( v91 )
                      {
                        v92 = v91 - 1;
                        if ( v92 )
                        {
                          if ( v92 != 1 )
                            goto LABEL_384;
                          v93 = *(int *)a2;
                          goto LABEL_180;
                        }
                        v94 = *(int *)a2;
LABEL_184:
                        v42 = __OFSUB__(v94, *(_QWORD *)Str2);
                        v41 = v94 - *(_QWORD *)Str2 < 0;
                        goto LABEL_186;
                      }
                      v95 = *(int *)a2;
LABEL_189:
                      v44 = __OFSUB__(v95, *(_QWORD *)Str2);
                      v43 = v95 - *(_QWORD *)Str2 < 0;
                      goto LABEL_191;
                    }
                    v96 = *(int *)a2;
LABEL_194:
                    v47 = __OFSUB__(v96, *(_QWORD *)Str2);
                    v45 = v96 == *(_QWORD *)Str2;
                    v46 = v96 - *(_QWORD *)Str2 < 0;
                    goto LABEL_196;
                  }
                  goto LABEL_267;
                }
                if ( a5 != 15 )
                  goto LABEL_384;
              }
              v84 = v14 - 2;
              if ( v84 )
              {
                v85 = v84 - 1;
                if ( v85 )
                {
                  v86 = v85 - 1;
                  if ( v86 )
                  {
                    v87 = v86 - 1;
                    if ( v87 )
                    {
                      if ( v87 != 1 )
                        goto LABEL_384;
                      v88 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                      goto LABEL_199;
                    }
                    v100 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_205:
                    *(_QWORD *)&v102 = *(_OWORD *)&_mm_cvtepi32_pd(v100);
                    goto LABEL_207;
                  }
                  v103 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                  goto LABEL_211;
                }
                v108 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_217:
                *(_QWORD *)&v110 = *(_OWORD *)&_mm_cvtepi32_pd(v108);
                goto LABEL_219;
              }
              v111 = _mm_cvtsi32_si128(*(_DWORD *)a2);
              goto LABEL_223;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                switch ( a5 )
                {
                  case 2u:
                    v237 = v14 - 2;
                    if ( !v237 )
                    {
                      v190 = *(char *)Str2;
                      goto LABEL_345;
                    }
                    v238 = v237 - 1;
                    if ( v238 )
                    {
                      v239 = v238 - 1;
                      if ( v239 )
                      {
                        v240 = v239 - 1;
                        if ( v240 )
                        {
                          if ( v240 != 1 )
                            goto LABEL_384;
                          v233 = *(char *)Str2;
LABEL_486:
                          v71 = __OFSUB__(*a2, v233);
                          v69 = *a2 == v233;
                          v70 = (__int16)(*a2 - v233) < 0;
                          goto LABEL_142;
                        }
                        v234 = *(char *)Str2;
LABEL_488:
                        v73 = __OFSUB__(*a2, v234);
                        v72 = (__int16)(*a2 - v234) < 0;
                        goto LABEL_147;
                      }
                      v235 = *(char *)Str2;
LABEL_490:
                      v76 = __OFSUB__(*a2, v235);
                      v75 = (__int16)(*a2 - v235) < 0;
                      goto LABEL_152;
                    }
                    v236 = *(char *)Str2;
                    break;
                  case 3u:
                    v229 = v14 - 2;
                    if ( !v229 )
                    {
LABEL_343:
                      v190 = *(unsigned __int8 *)Str2;
LABEL_345:
                      v82 = *a2 == v190;
                      goto LABEL_162;
                    }
                    v230 = v229 - 1;
                    if ( v230 )
                    {
                      v231 = v230 - 1;
                      if ( v231 )
                      {
                        v232 = v231 - 1;
                        if ( v232 )
                        {
                          if ( v232 != 1 )
                            goto LABEL_384;
                          v233 = *(unsigned __int8 *)Str2;
                          goto LABEL_486;
                        }
                        v234 = *(unsigned __int8 *)Str2;
                        goto LABEL_488;
                      }
                      v235 = *(unsigned __int8 *)Str2;
                      goto LABEL_490;
                    }
                    v236 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v225 = v14 - 2;
                    if ( !v225 )
                    {
LABEL_76:
                      v21 = *a2 == *Str2;
                      goto LABEL_46;
                    }
                    v226 = v225 - 1;
                    if ( !v226 )
                    {
                      v47 = __OFSUB__(*a2, *Str2);
                      v45 = *a2 == *Str2;
                      v46 = (__int16)(*a2 - *Str2) < 0;
                      goto LABEL_196;
                    }
                    v227 = v226 - 1;
                    if ( !v227 )
                    {
                      v44 = __OFSUB__(*a2, *Str2);
                      v43 = (__int16)(*a2 - *Str2) < 0;
                      goto LABEL_191;
                    }
                    v228 = v227 - 1;
                    if ( v228 )
                    {
                      if ( v228 != 1 )
                        goto LABEL_384;
                      v35 = __OFSUB__(*a2, *Str2);
                      v33 = *a2 == *Str2;
                      v34 = (__int16)(*a2 - *Str2) < 0;
                      goto LABEL_181;
                    }
                    v42 = __OFSUB__(*a2, *Str2);
                    v41 = (__int16)(*a2 - *Str2) < 0;
LABEL_186:
                    v22 = v41 == v42;
                    goto LABEL_47;
                  case 5u:
                    v221 = v14 - 2;
                    if ( v221 )
                    {
                      v222 = v221 - 1;
                      if ( v222 )
                      {
                        v223 = v222 - 1;
                        if ( v223 )
                        {
                          v224 = v223 - 1;
                          if ( v224 )
                          {
                            if ( v224 != 1 )
                              goto LABEL_384;
                            v165 = (__int16)*a2;
                            goto LABEL_449;
                          }
                          v167 = (__int16)*a2;
                          goto LABEL_452;
                        }
                        v169 = (__int16)*a2;
                        goto LABEL_455;
                      }
                      v171 = (__int16)*a2;
                      goto LABEL_458;
                    }
                    v173 = (__int16)*a2;
                    goto LABEL_461;
                  case 6u:
                    v217 = v14 - 2;
                    if ( !v217 )
                      goto LABEL_433;
                    v218 = v217 - 1;
                    if ( !v218 )
                    {
                      v157 = (__int16)*a2;
                      goto LABEL_304;
                    }
                    v219 = v218 - 1;
                    if ( !v219 )
                    {
                      v156 = (__int16)*a2;
                      goto LABEL_301;
                    }
                    v220 = v219 - 1;
                    if ( !v220 )
                    {
                      v155 = (__int16)*a2;
                      goto LABEL_298;
                    }
                    if ( v220 != 1 )
                      goto LABEL_384;
                    v154 = (__int16)*a2;
LABEL_295:
                    v35 = __OFSUB__(v154, *(_DWORD *)Str2);
                    v33 = v154 == *(_DWORD *)Str2;
                    v34 = v154 - *(_DWORD *)Str2 < 0;
                    goto LABEL_181;
                  case 7u:
                    v213 = v14 - 2;
                    if ( v213 )
                    {
                      v214 = v213 - 1;
                      if ( !v214 )
                      {
                        v148 = (__int16)*a2;
                        goto LABEL_285;
                      }
                      v215 = v214 - 1;
                      if ( !v215 )
                      {
                        v147 = (__int16)*a2;
                        goto LABEL_282;
                      }
                      v216 = v215 - 1;
                      if ( !v216 )
                      {
                        v146 = (__int16)*a2;
                        goto LABEL_279;
                      }
                      if ( v216 != 1 )
                        goto LABEL_384;
                      v145 = (__int16)*a2;
                      goto LABEL_276;
                    }
LABEL_433:
                    v149 = (__int16)*a2;
                    goto LABEL_288;
                  default:
                    goto LABEL_384;
                }
                v80 = __OFSUB__(*a2, v236);
                v78 = *a2 == v236;
                v79 = (__int16)(*a2 - v236) < 0;
                goto LABEL_157;
              }
              goto LABEL_504;
            }
            if ( a5 == 9 )
            {
              v253 = v14 - 2;
              if ( v253 )
              {
                v254 = v253 - 1;
                if ( v254 )
                {
                  v255 = v254 - 1;
                  if ( v255 )
                  {
                    v256 = v255 - 1;
                    if ( v256 )
                    {
                      if ( v256 != 1 )
                        goto LABEL_384;
                      v136 = (__int16)*a2;
                      goto LABEL_818;
                    }
                    v137 = (__int16)*a2;
                    goto LABEL_820;
                  }
                  v138 = (__int16)*a2;
                  goto LABEL_822;
                }
                v139 = (__int16)*a2;
                goto LABEL_824;
              }
LABEL_536:
              v140 = (__int16)*a2;
              goto LABEL_733;
            }
            if ( a5 != 10 )
            {
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                {
LABEL_504:
                  v245 = v14 - 2;
                  if ( v245 )
                  {
                    v246 = v245 - 1;
                    if ( v246 )
                    {
                      v247 = v246 - 1;
                      if ( v247 )
                      {
                        v248 = v247 - 1;
                        if ( v248 )
                        {
                          if ( v248 != 1 )
                            goto LABEL_384;
                          v93 = (__int16)*a2;
                          goto LABEL_180;
                        }
                        v94 = (__int16)*a2;
                        goto LABEL_184;
                      }
                      v95 = (__int16)*a2;
                      goto LABEL_189;
                    }
                    v96 = (__int16)*a2;
                    goto LABEL_194;
                  }
                  goto LABEL_536;
                }
                if ( a5 != 15 )
                  goto LABEL_384;
              }
              v241 = v14 - 2;
              if ( v241 )
              {
                v242 = v241 - 1;
                if ( v242 )
                {
                  v243 = v242 - 1;
                  if ( v243 )
                  {
                    v244 = v243 - 1;
                    if ( v244 )
                    {
                      if ( v244 != 1 )
                        goto LABEL_384;
                      v97 = (__int16)*a2;
                      goto LABEL_198;
                    }
                    v101 = (__int16)*a2;
LABEL_204:
                    v100 = _mm_cvtsi32_si128(v101);
                    goto LABEL_205;
                  }
                  v104 = (__int16)*a2;
LABEL_210:
                  v103 = _mm_cvtsi32_si128(v104);
LABEL_211:
                  *(_QWORD *)&v105 = *(_OWORD *)&_mm_cvtepi32_pd(v103);
LABEL_213:
                  v106 = *(double *)Str2 < v105;
                  v107 = *(double *)Str2 == v105;
                  goto LABEL_251;
                }
                v109 = (__int16)*a2;
LABEL_216:
                v108 = _mm_cvtsi32_si128(v109);
                goto LABEL_217;
              }
              v112 = (__int16)*a2;
LABEL_222:
              v111 = _mm_cvtsi32_si128(v112);
LABEL_223:
              *(_QWORD *)&v113 = *(_OWORD *)&_mm_cvtepi32_pd(v111);
LABEL_225:
              v19 = v113 == *(double *)Str2;
              goto LABEL_34;
            }
            v249 = v14 - 2;
            if ( v249 )
            {
              v250 = v249 - 1;
              if ( v250 )
              {
                v251 = v250 - 1;
                if ( v251 )
                {
                  v252 = v251 - 1;
                  if ( v252 )
                  {
                    if ( v252 != 1 )
                      goto LABEL_384;
                    v120 = (__int16)*a2;
                    goto LABEL_234;
                  }
                  v207 = (__int16)*a2;
LABEL_402:
                  v122 = _mm_cvtsi32_si128(v207);
                  goto LABEL_239;
                }
                v125 = (__int16)*a2;
LABEL_244:
                v124 = _mm_cvtsi32_si128(v125);
                goto LABEL_245;
              }
              v208 = (__int16)*a2;
LABEL_405:
              v127 = _mm_cvtsi32_si128(v208);
              goto LABEL_249;
            }
            v130 = (__int16)*a2;
LABEL_254:
            v129 = _mm_cvtsi32_si128(v130);
LABEL_255:
            LODWORD(v131) = _mm_cvtepi32_ps(v129).m128_u32[0];
LABEL_257:
            v19 = v131 == *(float *)Str2;
            goto LABEL_34;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 == 2 )
              {
                v284 = v14 - 2;
                if ( v284 )
                {
                  v285 = v284 - 1;
                  if ( v285 )
                  {
                    v286 = v285 - 1;
                    if ( v286 )
                    {
                      v287 = v286 - 1;
                      if ( v287 )
                      {
                        if ( v287 != 1 )
                          goto LABEL_384;
                        v165 = *(unsigned __int8 *)a2;
LABEL_352:
                        v166 = *(char *)Str2;
LABEL_353:
                        v71 = __OFSUB__(v165, v166);
                        v69 = v165 == v166;
                        v70 = v165 - v166 < 0;
                        goto LABEL_142;
                      }
                      v167 = *(unsigned __int8 *)a2;
                      goto LABEL_356;
                    }
                    v169 = *(unsigned __int8 *)a2;
                    goto LABEL_361;
                  }
                  v171 = *(unsigned __int8 *)a2;
                  goto LABEL_366;
                }
                v173 = *(unsigned __int8 *)a2;
LABEL_371:
                v174 = *(char *)Str2;
                goto LABEL_373;
              }
              if ( a5 != 3 )
              {
                if ( a5 == 4 )
                {
                  v272 = v14 - 2;
                  if ( !v272 )
                  {
                    v82 = (unsigned __int16)*(unsigned __int8 *)a2 == *Str2;
                    goto LABEL_162;
                  }
                  v273 = v272 - 1;
                  if ( !v273 )
                  {
                    v279 = *(unsigned __int8 *)a2;
                    v80 = __OFSUB__(v279, *Str2);
                    v78 = v279 == (__int16)*Str2;
                    v79 = (__int16)(v279 - *Str2) < 0;
                    goto LABEL_157;
                  }
                  v274 = v273 - 1;
                  if ( !v274 )
                  {
                    v278 = *(unsigned __int8 *)a2;
                    v76 = __OFSUB__(v278, *Str2);
                    v75 = (__int16)(v278 - *Str2) < 0;
                    goto LABEL_152;
                  }
                  v275 = v274 - 1;
                  if ( v275 )
                  {
                    if ( v275 != 1 )
                      goto LABEL_384;
                    v276 = *(unsigned __int8 *)a2;
                    v71 = __OFSUB__(v276, *Str2);
                    v69 = v276 == (__int16)*Str2;
                    v70 = (__int16)(v276 - *Str2) < 0;
                    goto LABEL_142;
                  }
                  v277 = *(unsigned __int8 *)a2;
                  v73 = __OFSUB__(v277, *Str2);
                  v72 = (__int16)(v277 - *Str2) < 0;
LABEL_147:
                  v20 = v72 == v73;
                  goto LABEL_41;
                }
                if ( a5 != 5 )
                {
                  if ( a5 == 6 )
                  {
                    v261 = v14 - 2;
                    if ( v261 )
                    {
                      v262 = v261 - 1;
                      if ( !v262 )
                      {
                        v157 = *(unsigned __int8 *)a2;
                        goto LABEL_304;
                      }
                      v263 = v262 - 1;
                      if ( !v263 )
                      {
                        v156 = *(unsigned __int8 *)a2;
                        goto LABEL_301;
                      }
                      v264 = v263 - 1;
                      if ( !v264 )
                      {
                        v155 = *(unsigned __int8 *)a2;
                        goto LABEL_298;
                      }
                      if ( v264 != 1 )
                        goto LABEL_384;
                      v154 = *(unsigned __int8 *)a2;
                      goto LABEL_295;
                    }
                  }
                  else
                  {
                    if ( a5 != 7 )
                      goto LABEL_384;
                    v257 = v14 - 2;
                    if ( v257 )
                    {
                      v258 = v257 - 1;
                      if ( !v258 )
                      {
                        v148 = *(unsigned __int8 *)a2;
                        goto LABEL_285;
                      }
                      v259 = v258 - 1;
                      if ( !v259 )
                      {
                        v147 = *(unsigned __int8 *)a2;
                        goto LABEL_282;
                      }
                      v260 = v259 - 1;
                      if ( !v260 )
                      {
                        v146 = *(unsigned __int8 *)a2;
                        goto LABEL_279;
                      }
                      if ( v260 != 1 )
                        goto LABEL_384;
                      v145 = *(unsigned __int8 *)a2;
                      goto LABEL_276;
                    }
                  }
                  v149 = *(unsigned __int8 *)a2;
                  goto LABEL_288;
                }
                v265 = v14 - 2;
                if ( v265 )
                {
                  v266 = v265 - 1;
                  if ( v266 )
                  {
                    v267 = v266 - 1;
                    if ( !v267 )
                    {
                      v27 = *(unsigned __int8 *)a2 < *Str2;
                      goto LABEL_63;
                    }
                    v268 = v267 - 1;
                    if ( v268 )
                    {
                      if ( v268 != 1 )
                        goto LABEL_384;
                      v269 = *(unsigned __int8 *)a2;
                      v36 = v269 < *Str2;
                      v37 = v269 == *Str2;
                      goto LABEL_94;
                    }
                    v38 = *(unsigned __int8 *)a2 < *Str2;
                    goto LABEL_97;
                  }
                  v270 = *(unsigned __int8 *)a2;
                  v39 = v270 < *Str2;
                  v40 = v270 == *Str2;
                  goto LABEL_100;
                }
                v271 = *(unsigned __int8 *)a2;
                goto LABEL_575;
              }
              v280 = v14 - 2;
              if ( v280 )
              {
                v281 = v280 - 1;
                if ( v281 )
                {
                  v282 = v281 - 1;
                  if ( !v282 )
                  {
                    v27 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    goto LABEL_63;
                  }
                  v283 = v282 - 1;
                  if ( v283 )
                  {
                    if ( v283 != 1 )
                      goto LABEL_384;
                    v36 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    v37 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                    goto LABEL_94;
                  }
                  v38 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                  goto LABEL_97;
                }
                v39 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                v40 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                goto LABEL_100;
              }
              goto LABEL_45;
            }
            goto LABEL_610;
          }
          if ( a5 == 9 )
          {
            v300 = v14 - 2;
            if ( v300 )
            {
              v301 = v300 - 1;
              if ( v301 )
              {
                v302 = v301 - 1;
                if ( v302 )
                {
                  v303 = v302 - 1;
                  if ( v303 )
                  {
                    if ( v303 != 1 )
                      goto LABEL_384;
                    v136 = *(unsigned __int8 *)a2;
                    goto LABEL_818;
                  }
                  v137 = *(unsigned __int8 *)a2;
                  goto LABEL_820;
                }
                v138 = *(unsigned __int8 *)a2;
                goto LABEL_822;
              }
              v139 = *(unsigned __int8 *)a2;
              goto LABEL_824;
            }
LABEL_642:
            v140 = *(unsigned __int8 *)a2;
            goto LABEL_733;
          }
          if ( a5 != 10 )
          {
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_610:
                v292 = v14 - 2;
                if ( v292 )
                {
                  v293 = v292 - 1;
                  if ( v293 )
                  {
                    v294 = v293 - 1;
                    if ( v294 )
                    {
                      v295 = v294 - 1;
                      if ( v295 )
                      {
                        if ( v295 != 1 )
                          goto LABEL_384;
                        v93 = *(unsigned __int8 *)a2;
                        goto LABEL_180;
                      }
                      v94 = *(unsigned __int8 *)a2;
                      goto LABEL_184;
                    }
                    v95 = *(unsigned __int8 *)a2;
                    goto LABEL_189;
                  }
                  v96 = *(unsigned __int8 *)a2;
                  goto LABEL_194;
                }
                goto LABEL_642;
              }
              if ( a5 != 15 )
                goto LABEL_384;
            }
            v288 = v14 - 2;
            if ( !v288 )
            {
              v112 = *(unsigned __int8 *)a2;
              goto LABEL_222;
            }
            v289 = v288 - 1;
            if ( !v289 )
            {
              v109 = *(unsigned __int8 *)a2;
              goto LABEL_216;
            }
            v290 = v289 - 1;
            if ( !v290 )
            {
              v104 = *(unsigned __int8 *)a2;
              goto LABEL_210;
            }
            v291 = v290 - 1;
            if ( !v291 )
            {
              v101 = *(unsigned __int8 *)a2;
              goto LABEL_204;
            }
            if ( v291 != 1 )
              goto LABEL_384;
            v97 = *(unsigned __int8 *)a2;
LABEL_198:
            v88 = _mm_cvtsi32_si128(v97);
LABEL_199:
            *(_QWORD *)&v98 = *(_OWORD *)&_mm_cvtepi32_pd(v88);
            goto LABEL_201;
          }
          v296 = v14 - 2;
          if ( !v296 )
          {
            v130 = *(unsigned __int8 *)a2;
            goto LABEL_254;
          }
          v297 = v296 - 1;
          if ( !v297 )
          {
            v208 = *(unsigned __int8 *)a2;
            goto LABEL_405;
          }
          v298 = v297 - 1;
          if ( !v298 )
          {
            v125 = *(unsigned __int8 *)a2;
            goto LABEL_244;
          }
          v299 = v298 - 1;
          if ( !v299 )
          {
            v207 = *(unsigned __int8 *)a2;
            goto LABEL_402;
          }
          if ( v299 != 1 )
            goto LABEL_384;
          v120 = *(unsigned __int8 *)a2;
LABEL_234:
          v119 = _mm_cvtsi32_si128(v120);
LABEL_235:
          LODWORD(v121) = _mm_cvtepi32_ps(v119).m128_u32[0];
          goto LABEL_237;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            if ( a5 != 2 )
            {
              if ( a5 == 3 )
              {
                v320 = v14 - 2;
                if ( !v320 )
                {
                  v173 = *(char *)a2;
                  v174 = *(unsigned __int8 *)Str2;
                  goto LABEL_373;
                }
                v321 = v320 - 1;
                if ( v321 )
                {
                  v322 = v321 - 1;
                  if ( v322 )
                  {
                    v323 = v322 - 1;
                    if ( v323 )
                    {
                      if ( v323 != 1 )
                        goto LABEL_384;
                      v165 = *(char *)a2;
                      v166 = *(unsigned __int8 *)Str2;
                      goto LABEL_353;
                    }
                    v167 = *(char *)a2;
                    v168 = *(unsigned __int8 *)Str2;
LABEL_358:
                    v73 = __OFSUB__(v167, v168);
                    v72 = v167 - v168 < 0;
                    goto LABEL_147;
                  }
                  v169 = *(char *)a2;
                  v170 = *(unsigned __int8 *)Str2;
LABEL_363:
                  v76 = __OFSUB__(v169, v170);
                  v75 = v169 - v170 < 0;
                  goto LABEL_152;
                }
                v171 = *(char *)a2;
                v172 = *(unsigned __int8 *)Str2;
LABEL_368:
                v80 = __OFSUB__(v171, v172);
                v78 = v171 == v172;
                v79 = v171 - v172 < 0;
                goto LABEL_157;
              }
              if ( a5 != 4 )
              {
                if ( a5 != 5 )
                {
                  if ( a5 == 6 )
                  {
                    v308 = v14 - 2;
                    if ( v308 )
                    {
                      v309 = v308 - 1;
                      if ( !v309 )
                      {
                        v157 = *(char *)a2;
                        goto LABEL_304;
                      }
                      v310 = v309 - 1;
                      if ( !v310 )
                      {
                        v156 = *(char *)a2;
                        goto LABEL_301;
                      }
                      v311 = v310 - 1;
                      if ( !v311 )
                      {
                        v155 = *(char *)a2;
                        goto LABEL_298;
                      }
                      if ( v311 != 1 )
                        goto LABEL_384;
                      v154 = *(char *)a2;
                      goto LABEL_295;
                    }
                  }
                  else
                  {
                    if ( a5 != 7 )
                      goto LABEL_384;
                    v304 = v14 - 2;
                    if ( v304 )
                    {
                      v305 = v304 - 1;
                      if ( !v305 )
                      {
                        v148 = *(char *)a2;
                        goto LABEL_285;
                      }
                      v306 = v305 - 1;
                      if ( !v306 )
                      {
                        v147 = *(char *)a2;
                        goto LABEL_282;
                      }
                      v307 = v306 - 1;
                      if ( !v307 )
                      {
                        v146 = *(char *)a2;
                        goto LABEL_279;
                      }
                      if ( v307 != 1 )
                        goto LABEL_384;
                      v145 = *(char *)a2;
LABEL_276:
                      v36 = v145 < *(_DWORD *)Str2;
                      v37 = v145 == *(_DWORD *)Str2;
LABEL_94:
                      v22 = v36 || v37;
                      goto LABEL_47;
                    }
                  }
                  v149 = *(char *)a2;
                  goto LABEL_288;
                }
                v312 = v14 - 2;
                if ( v312 )
                {
                  v313 = v312 - 1;
                  if ( v313 )
                  {
                    v314 = v313 - 1;
                    if ( v314 )
                    {
                      v315 = v314 - 1;
                      if ( v315 )
                      {
                        if ( v315 != 1 )
                          goto LABEL_384;
                        v165 = *(char *)a2;
LABEL_449:
                        v166 = *Str2;
                        goto LABEL_353;
                      }
                      v167 = *(char *)a2;
LABEL_452:
                      v168 = *Str2;
                      goto LABEL_358;
                    }
                    v169 = *(char *)a2;
LABEL_455:
                    v170 = *Str2;
                    goto LABEL_363;
                  }
                  v171 = *(char *)a2;
LABEL_458:
                  v172 = *Str2;
                  goto LABEL_368;
                }
                v173 = *(char *)a2;
LABEL_461:
                v174 = *Str2;
                goto LABEL_373;
              }
              v316 = v14 - 2;
              if ( v316 )
              {
                v317 = v316 - 1;
                if ( !v317 )
                {
                  v47 = __OFSUB__(*(char *)a2, *Str2);
                  v45 = *(char *)a2 == (__int16)*Str2;
                  v46 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_196;
                }
                v318 = v317 - 1;
                if ( !v318 )
                {
                  v44 = __OFSUB__(*(char *)a2, *Str2);
                  v43 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_191;
                }
                v319 = v318 - 1;
                if ( v319 )
                {
                  if ( v319 != 1 )
                    goto LABEL_384;
                  v35 = __OFSUB__(*(char *)a2, *Str2);
                  v33 = *(char *)a2 == (__int16)*Str2;
                  v34 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_181;
                }
                v42 = __OFSUB__(*(char *)a2, *Str2);
                v41 = (__int16)(*(char *)a2 - *Str2) < 0;
                goto LABEL_186;
              }
              v271 = *(char *)a2;
LABEL_575:
              v21 = v271 == (__int16)*Str2;
              goto LABEL_46;
            }
            v324 = v14 - 2;
            if ( v324 )
            {
              v325 = v324 - 1;
              if ( !v325 )
              {
                v47 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v45 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                v46 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_196;
              }
              v326 = v325 - 1;
              if ( !v326 )
              {
                v44 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v43 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_191;
              }
              v327 = v326 - 1;
              if ( v327 )
              {
                if ( v327 != 1 )
                  goto LABEL_384;
                v35 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v33 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                v34 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_181;
              }
              v42 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
              v41 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
              goto LABEL_186;
            }
LABEL_45:
            v21 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_46:
            v22 = v21;
LABEL_47:
            *a8 = v22;
            goto LABEL_1348;
          }
          goto LABEL_701;
        }
        if ( a5 == 9 )
        {
          v340 = v14 - 2;
          if ( v340 )
          {
            v341 = v340 - 1;
            if ( v341 )
            {
              v342 = v341 - 1;
              if ( v342 )
              {
                v343 = v342 - 1;
                if ( v343 )
                {
                  if ( v343 != 1 )
                    goto LABEL_384;
                  v136 = *(char *)a2;
                  goto LABEL_818;
                }
                v137 = *(char *)a2;
LABEL_820:
                v38 = v137 < *(_QWORD *)Str2;
                goto LABEL_97;
              }
              v138 = *(char *)a2;
LABEL_822:
              v27 = v138 < *(_QWORD *)Str2;
              goto LABEL_63;
            }
            v139 = *(char *)a2;
LABEL_824:
            v39 = v139 < *(_QWORD *)Str2;
            v40 = v139 == *(_QWORD *)Str2;
            goto LABEL_100;
          }
LABEL_731:
          v140 = *(char *)a2;
          goto LABEL_733;
        }
        if ( a5 == 10 )
        {
          v336 = v14 - 2;
          if ( !v336 )
          {
            v130 = *(char *)a2;
            goto LABEL_254;
          }
          v337 = v336 - 1;
          if ( !v337 )
          {
            v208 = *(char *)a2;
            goto LABEL_405;
          }
          v338 = v337 - 1;
          if ( !v338 )
          {
            v125 = *(char *)a2;
            goto LABEL_244;
          }
          v339 = v338 - 1;
          if ( !v339 )
          {
            v207 = *(char *)a2;
            goto LABEL_402;
          }
          if ( v339 != 1 )
            goto LABEL_384;
          v120 = *(char *)a2;
          goto LABEL_234;
        }
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_701:
            v332 = v14 - 2;
            if ( v332 )
            {
              v333 = v332 - 1;
              if ( v333 )
              {
                v334 = v333 - 1;
                if ( v334 )
                {
                  v335 = v334 - 1;
                  if ( v335 )
                  {
                    if ( v335 != 1 )
                      goto LABEL_384;
                    v93 = *(char *)a2;
                    goto LABEL_180;
                  }
                  v94 = *(char *)a2;
                  goto LABEL_184;
                }
                v95 = *(char *)a2;
                goto LABEL_189;
              }
              v96 = *(char *)a2;
              goto LABEL_194;
            }
            goto LABEL_731;
          }
          if ( a5 != 15 )
            goto LABEL_384;
        }
        v328 = v14 - 2;
        if ( !v328 )
        {
          v112 = *(char *)a2;
          goto LABEL_222;
        }
        v329 = v328 - 1;
        if ( !v329 )
        {
          v109 = *(char *)a2;
          goto LABEL_216;
        }
        v330 = v329 - 1;
        if ( !v330 )
        {
          v104 = *(char *)a2;
          goto LABEL_210;
        }
        v331 = v330 - 1;
        if ( !v331 )
        {
          v101 = *(char *)a2;
          goto LABEL_204;
        }
        if ( v331 != 1 )
          goto LABEL_384;
        v97 = *(char *)a2;
        goto LABEL_198;
      }
      if ( a5 != 1 || v14 != 2 )
        goto LABEL_384;
      if ( a2 )
        goto LABEL_13;
      v19 = Str2 == 0LL;
LABEL_34:
      if ( v19 )
        goto LABEL_14;
      goto LABEL_13;
    }
    if ( a1 != 8 )
    {
      if ( a1 != 9 )
      {
        if ( a1 != 10 )
        {
          if ( a1 != 11 )
          {
            v381 = a5 == 12;
            goto LABEL_835;
          }
LABEL_1297:
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v419 = v14 - 2;
                  if ( !v419 )
                  {
                    v402 = *(char *)Str2;
                    goto LABEL_865;
                  }
                  v420 = v419 - 1;
                  if ( !v420 )
                  {
                    v410 = *(char *)Str2;
                    goto LABEL_911;
                  }
                  v421 = v420 - 1;
                  if ( !v421 )
                  {
                    v409 = *(char *)Str2;
                    goto LABEL_908;
                  }
                  v422 = v421 - 1;
                  if ( !v422 )
                  {
                    v408 = *(char *)Str2;
                    goto LABEL_905;
                  }
                  if ( v422 != 1 )
                    goto LABEL_384;
                  v407 = *(char *)Str2;
                  break;
                case 3u:
                  v415 = v14 - 2;
                  if ( !v415 )
                  {
                    v402 = *(unsigned __int8 *)Str2;
                    goto LABEL_865;
                  }
                  v416 = v415 - 1;
                  if ( !v416 )
                  {
                    v410 = *(unsigned __int8 *)Str2;
                    goto LABEL_911;
                  }
                  v417 = v416 - 1;
                  if ( !v417 )
                  {
                    v409 = *(unsigned __int8 *)Str2;
                    goto LABEL_908;
                  }
                  v418 = v417 - 1;
                  if ( !v418 )
                  {
                    v408 = *(unsigned __int8 *)Str2;
                    goto LABEL_905;
                  }
                  if ( v418 != 1 )
                    goto LABEL_384;
                  v407 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v411 = v14 - 2;
                  if ( !v411 )
                  {
                    v402 = (__int16)*Str2;
                    goto LABEL_865;
                  }
                  v412 = v411 - 1;
                  if ( !v412 )
                  {
                    v410 = (__int16)*Str2;
                    goto LABEL_911;
                  }
                  v413 = v412 - 1;
                  if ( !v413 )
                  {
                    v409 = (__int16)*Str2;
                    goto LABEL_908;
                  }
                  v414 = v413 - 1;
                  if ( !v414 )
                  {
                    v408 = (__int16)*Str2;
                    goto LABEL_905;
                  }
                  if ( v414 != 1 )
                    goto LABEL_384;
                  v407 = (__int16)*Str2;
                  break;
                case 5u:
                  v403 = v14 - 2;
                  if ( v403 )
                  {
                    v404 = v403 - 1;
                    if ( v404 )
                    {
                      v405 = v404 - 1;
                      if ( v405 )
                      {
                        v406 = v405 - 1;
                        if ( v406 )
                        {
                          if ( v406 != 1 )
                            goto LABEL_384;
                          v407 = *Str2;
                          break;
                        }
                        v408 = *Str2;
LABEL_905:
                        v398 = _mm_cvtsi32_si128(v408);
LABEL_906:
                        *(_QWORD *)&v389 = *(_OWORD *)&_mm_cvtepi32_pd(v398);
                        goto LABEL_945;
                      }
                      v409 = *Str2;
LABEL_908:
                      v399 = _mm_cvtsi32_si128(v409);
LABEL_909:
                      *(_QWORD *)&v390 = *(_OWORD *)&_mm_cvtepi32_pd(v399);
                      goto LABEL_947;
                    }
                    v410 = *Str2;
LABEL_911:
                    v400 = _mm_cvtsi32_si128(v410);
LABEL_912:
                    *(_QWORD *)&v391 = *(_OWORD *)&_mm_cvtepi32_pd(v400);
                    goto LABEL_949;
                  }
                  v402 = *Str2;
LABEL_865:
                  v401 = _mm_cvtsi32_si128(v402);
LABEL_866:
                  *(_QWORD *)&v392 = *(_OWORD *)&_mm_cvtepi32_pd(v401);
                  goto LABEL_853;
                case 6u:
                  v393 = v14 - 2;
                  if ( v393 )
                  {
                    v394 = v393 - 1;
                    if ( v394 )
                    {
                      v395 = v394 - 1;
                      if ( v395 )
                      {
                        v396 = v395 - 1;
                        if ( v396 )
                        {
                          if ( v396 != 1 )
                            goto LABEL_384;
                          v397 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_903;
                        }
                        v398 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_906;
                      }
                      v399 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                      goto LABEL_909;
                    }
                    v400 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                    goto LABEL_912;
                  }
                  v401 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                  goto LABEL_866;
                case 7u:
                  v384 = v14 - 2;
                  if ( !v384 )
                  {
                    v392 = (double)*(int *)Str2;
LABEL_853:
                    v19 = *(double *)a2 == v392;
                    goto LABEL_34;
                  }
                  v385 = v384 - 1;
                  if ( !v385 )
                  {
                    v391 = (double)*(int *)Str2;
LABEL_949:
                    v187 = *(double *)a2 < v391;
                    v188 = *(double *)a2 == v391;
                    goto LABEL_342;
                  }
                  v386 = v385 - 1;
                  if ( !v386 )
                  {
                    v390 = (double)*(int *)Str2;
LABEL_947:
                    v187 = v390 < *(double *)a2;
                    v188 = v390 == *(double *)a2;
                    goto LABEL_342;
                  }
                  v387 = v386 - 1;
                  if ( v387 )
                  {
                    if ( v387 != 1 )
                      goto LABEL_384;
                    v388 = (double)*(int *)Str2;
                    goto LABEL_943;
                  }
                  v389 = (double)*(int *)Str2;
LABEL_945:
                  v182 = *(double *)a2 < v389;
                  goto LABEL_334;
                default:
                  goto LABEL_384;
              }
              v397 = _mm_cvtsi32_si128(v407);
LABEL_903:
              *(_QWORD *)&v388 = *(_OWORD *)&_mm_cvtepi32_pd(v397);
LABEL_943:
              v182 = v388 < *(double *)a2;
              goto LABEL_334;
            }
LABEL_925:
            v427 = v14 - 2;
            if ( !v427 )
            {
              v392 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_853;
            }
            v428 = v427 - 1;
            if ( !v428 )
            {
              v391 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_949;
            }
            v429 = v428 - 1;
            if ( !v429 )
            {
              v390 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_947;
            }
            v430 = v429 - 1;
            if ( v430 )
            {
              if ( v430 != 1 )
                goto LABEL_384;
              v388 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_943;
            }
            v389 = (double)(int)*(_QWORD *)Str2;
            goto LABEL_945;
          }
          if ( a5 == 9 )
          {
            v435 = v14 - 2;
            if ( !v435 )
            {
              v392 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v392 = v392 + 1.844674407370955e19;
              goto LABEL_853;
            }
            v436 = v435 - 1;
            if ( !v436 )
            {
              v391 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v391 = v391 + 1.844674407370955e19;
              goto LABEL_949;
            }
            v437 = v436 - 1;
            if ( !v437 )
            {
              v390 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v390 = v390 + 1.844674407370955e19;
              goto LABEL_947;
            }
            v438 = v437 - 1;
            if ( v438 )
            {
              if ( v438 != 1 )
                goto LABEL_384;
              v388 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v388 = v388 + 1.844674407370955e19;
              goto LABEL_943;
            }
            v389 = (double)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v389 = v389 + 1.844674407370955e19;
            goto LABEL_945;
          }
          if ( a5 == 10 )
          {
            v431 = v14 - 2;
            if ( !v431 )
            {
              v392 = *(float *)Str2;
              goto LABEL_853;
            }
            v432 = v431 - 1;
            if ( !v432 )
            {
              v391 = *(float *)Str2;
              goto LABEL_949;
            }
            v433 = v432 - 1;
            if ( !v433 )
            {
              v390 = *(float *)Str2;
              goto LABEL_947;
            }
            v434 = v433 - 1;
            if ( v434 )
            {
              if ( v434 != 1 )
                goto LABEL_384;
              v388 = *(float *)Str2;
              goto LABEL_943;
            }
            v389 = *(float *)Str2;
            goto LABEL_945;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
              goto LABEL_925;
            if ( a5 != 15 )
              goto LABEL_384;
          }
          v423 = v14 - 2;
          if ( v423 )
          {
            v424 = v423 - 1;
            if ( v424 )
            {
              v425 = v424 - 1;
              if ( v425 )
              {
                v426 = v425 - 1;
                if ( v426 )
                {
                  if ( v426 != 1 )
                    goto LABEL_384;
                  v99 = *(double *)Str2 < *(double *)a2;
                  goto LABEL_241;
                }
                v102 = *(double *)a2;
                goto LABEL_207;
              }
              v106 = *(double *)Str2 < *(double *)a2;
              v107 = *(double *)Str2 == *(double *)a2;
LABEL_251:
              v18 = !v106 && !v107;
              goto LABEL_30;
            }
            v110 = *(double *)a2;
            goto LABEL_219;
          }
          v113 = *(double *)a2;
          goto LABEL_225;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            switch ( a5 )
            {
              case 2u:
                v473 = v14 - 2;
                if ( !v473 )
                {
                  v456 = *(char *)Str2;
                  goto LABEL_994;
                }
                v474 = v473 - 1;
                if ( !v474 )
                {
                  v464 = *(char *)Str2;
                  goto LABEL_1040;
                }
                v475 = v474 - 1;
                if ( !v475 )
                {
                  v463 = *(char *)Str2;
                  goto LABEL_1037;
                }
                v476 = v475 - 1;
                if ( !v476 )
                {
                  v462 = *(char *)Str2;
                  goto LABEL_1034;
                }
                if ( v476 != 1 )
                  goto LABEL_384;
                v461 = *(char *)Str2;
                break;
              case 3u:
                v469 = v14 - 2;
                if ( !v469 )
                {
                  v456 = *(unsigned __int8 *)Str2;
                  goto LABEL_994;
                }
                v470 = v469 - 1;
                if ( !v470 )
                {
                  v464 = *(unsigned __int8 *)Str2;
                  goto LABEL_1040;
                }
                v471 = v470 - 1;
                if ( !v471 )
                {
                  v463 = *(unsigned __int8 *)Str2;
                  goto LABEL_1037;
                }
                v472 = v471 - 1;
                if ( !v472 )
                {
                  v462 = *(unsigned __int8 *)Str2;
                  goto LABEL_1034;
                }
                if ( v472 != 1 )
                  goto LABEL_384;
                v461 = *(unsigned __int8 *)Str2;
                break;
              case 4u:
                v465 = v14 - 2;
                if ( !v465 )
                {
                  v456 = (__int16)*Str2;
                  goto LABEL_994;
                }
                v466 = v465 - 1;
                if ( !v466 )
                {
                  v464 = (__int16)*Str2;
                  goto LABEL_1040;
                }
                v467 = v466 - 1;
                if ( !v467 )
                {
                  v463 = (__int16)*Str2;
                  goto LABEL_1037;
                }
                v468 = v467 - 1;
                if ( !v468 )
                {
                  v462 = (__int16)*Str2;
                  goto LABEL_1034;
                }
                if ( v468 != 1 )
                  goto LABEL_384;
                v461 = (__int16)*Str2;
                break;
              case 5u:
                v457 = v14 - 2;
                if ( v457 )
                {
                  v458 = v457 - 1;
                  if ( v458 )
                  {
                    v459 = v458 - 1;
                    if ( v459 )
                    {
                      v460 = v459 - 1;
                      if ( v460 )
                      {
                        if ( v460 != 1 )
                          goto LABEL_384;
                        v461 = *Str2;
                        break;
                      }
                      v462 = *Str2;
LABEL_1034:
                      v452 = _mm_cvtsi32_si128(v462);
                      goto LABEL_1035;
                    }
                    v463 = *Str2;
LABEL_1037:
                    v453 = _mm_cvtsi32_si128(v463);
                    goto LABEL_1038;
                  }
                  v464 = *Str2;
LABEL_1040:
                  v454 = _mm_cvtsi32_si128(v464);
                  goto LABEL_1041;
                }
                v456 = *Str2;
LABEL_994:
                v455 = _mm_cvtsi32_si128(v456);
                goto LABEL_995;
              case 6u:
                v447 = v14 - 2;
                if ( v447 )
                {
                  v448 = v447 - 1;
                  if ( v448 )
                  {
                    v449 = v448 - 1;
                    if ( v449 )
                    {
                      v450 = v449 - 1;
                      if ( v450 )
                      {
                        if ( v450 != 1 )
                          goto LABEL_384;
                        v451 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_1032;
                      }
                      v452 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1035:
                      LODWORD(v444) = _mm_cvtepi32_ps(v452).m128_u32[0];
                      goto LABEL_1062;
                    }
                    v453 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1038:
                    LODWORD(v445) = _mm_cvtepi32_ps(v453).m128_u32[0];
                    goto LABEL_1064;
                  }
                  v454 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1041:
                  LODWORD(v446) = _mm_cvtepi32_ps(v454).m128_u32[0];
                  goto LABEL_1066;
                }
                v455 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_995:
                LODWORD(v114) = _mm_cvtepi32_ps(v455).m128_u32[0];
                goto LABEL_227;
              case 7u:
                v439 = v14 - 2;
                if ( v439 )
                {
                  v440 = v439 - 1;
                  if ( v440 )
                  {
                    v441 = v440 - 1;
                    if ( v441 )
                    {
                      v442 = v441 - 1;
                      if ( v442 )
                      {
                        if ( v442 != 1 )
                          goto LABEL_384;
                        v443 = (float)*(int *)Str2;
                        goto LABEL_1060;
                      }
                      v444 = (float)*(int *)Str2;
LABEL_1062:
                      v182 = *(float *)a2 < v444;
                      goto LABEL_334;
                    }
                    v445 = (float)*(int *)Str2;
LABEL_1064:
                    v187 = v445 < *(float *)a2;
                    v188 = v445 == *(float *)a2;
                    goto LABEL_342;
                  }
                  v446 = (float)*(int *)Str2;
LABEL_1066:
                  v187 = *(float *)a2 < v446;
                  v188 = *(float *)a2 == v446;
                  goto LABEL_342;
                }
                v114 = (float)*(int *)Str2;
LABEL_227:
                v19 = *(float *)a2 == v114;
                goto LABEL_34;
              default:
                goto LABEL_384;
            }
            v451 = _mm_cvtsi32_si128(v461);
LABEL_1032:
            LODWORD(v443) = _mm_cvtepi32_ps(v451).m128_u32[0];
            goto LABEL_1060;
          }
          goto LABEL_1054;
        }
        if ( a5 == 9 )
        {
          v489 = v14 - 2;
          if ( !v489 )
          {
            v114 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v114 = v114 + 1.8446744e19;
            goto LABEL_227;
          }
          v490 = v489 - 1;
          if ( !v490 )
          {
            v446 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v446 = v446 + 1.8446744e19;
            goto LABEL_1066;
          }
          v491 = v490 - 1;
          if ( !v491 )
          {
            v445 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v445 = v445 + 1.8446744e19;
            goto LABEL_1064;
          }
          v492 = v491 - 1;
          if ( !v492 )
          {
            v444 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v444 = v444 + 1.8446744e19;
            goto LABEL_1062;
          }
          if ( v492 != 1 )
            goto LABEL_384;
          v443 = (float)(int)*(_QWORD *)Str2;
          if ( *(__int64 *)Str2 < 0 )
            v443 = v443 + 1.8446744e19;
          goto LABEL_1060;
        }
        if ( a5 == 10 )
        {
          v485 = v14 - 2;
          if ( v485 )
          {
            v486 = v485 - 1;
            if ( v486 )
            {
              v487 = v486 - 1;
              if ( !v487 )
              {
                v106 = *(float *)Str2 < *(float *)a2;
                v107 = *(float *)Str2 == *(float *)a2;
                goto LABEL_251;
              }
              v488 = v487 - 1;
              if ( v488 )
              {
                if ( v488 != 1 )
                  goto LABEL_384;
                v99 = *(float *)Str2 < *(float *)a2;
                goto LABEL_241;
              }
              v123 = *(float *)a2;
              goto LABEL_240;
            }
            v128 = *(float *)a2;
            goto LABEL_250;
          }
          v131 = *(float *)a2;
          goto LABEL_257;
        }
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_1054:
            v481 = v14 - 2;
            if ( !v481 )
            {
              v114 = (float)(int)*(_QWORD *)Str2;
              goto LABEL_227;
            }
            v482 = v481 - 1;
            if ( !v482 )
            {
              v446 = (float)(int)*(_QWORD *)Str2;
              goto LABEL_1066;
            }
            v483 = v482 - 1;
            if ( !v483 )
            {
              v445 = (float)(int)*(_QWORD *)Str2;
              goto LABEL_1064;
            }
            v484 = v483 - 1;
            if ( !v484 )
            {
              v444 = (float)(int)*(_QWORD *)Str2;
              goto LABEL_1062;
            }
            if ( v484 != 1 )
              goto LABEL_384;
            v443 = (float)(int)*(_QWORD *)Str2;
LABEL_1060:
            v182 = v443 < *(float *)a2;
            goto LABEL_334;
          }
          if ( a5 != 15 )
            goto LABEL_384;
        }
        v477 = v14 - 2;
        if ( !v477 )
        {
          v113 = *(float *)a2;
          goto LABEL_225;
        }
        v478 = v477 - 1;
        if ( !v478 )
        {
          v110 = *(float *)a2;
          goto LABEL_219;
        }
        v479 = v478 - 1;
        if ( !v479 )
        {
          v105 = *(float *)a2;
          goto LABEL_213;
        }
        v480 = v479 - 1;
        if ( !v480 )
        {
          v102 = *(float *)a2;
          goto LABEL_207;
        }
        if ( v480 != 1 )
          goto LABEL_384;
        v98 = *(float *)a2;
LABEL_201:
        v99 = *(double *)Str2 < v98;
LABEL_241:
        v18 = !v99;
        goto LABEL_30;
      }
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          if ( a5 != 2 )
          {
            if ( a5 != 3 )
            {
              if ( a5 != 4 )
              {
                if ( a5 != 5 )
                {
                  if ( a5 != 6 )
                  {
                    if ( a5 != 7 )
                      goto LABEL_384;
                    v493 = v14 - 2;
                    if ( v493 )
                    {
                      v494 = v493 - 1;
                      if ( v494 )
                      {
                        v495 = v494 - 1;
                        if ( v495 )
                        {
                          v496 = v495 - 1;
                          if ( v496 )
                          {
                            if ( v496 != 1 )
                              goto LABEL_384;
                            v497 = *(unsigned int *)Str2;
                            goto LABEL_329;
                          }
                          v183 = *(unsigned int *)Str2;
LABEL_333:
                          v182 = *(_QWORD *)a2 < v183;
                          goto LABEL_334;
                        }
                        v185 = *(unsigned int *)Str2;
LABEL_337:
                        v184 = *(_QWORD *)a2 < v185;
                        goto LABEL_338;
                      }
                      v189 = *(unsigned int *)Str2;
LABEL_341:
                      v187 = *(_QWORD *)a2 < v189;
                      v188 = *(_QWORD *)a2 == v189;
                      goto LABEL_342;
                    }
                    goto LABEL_1114;
                  }
                  v498 = v14 - 2;
                  if ( v498 )
                  {
                    v499 = v498 - 1;
                    if ( !v499 )
                    {
                      v189 = *(int *)Str2;
                      goto LABEL_341;
                    }
                    v500 = v499 - 1;
                    if ( !v500 )
                    {
                      v185 = *(int *)Str2;
                      goto LABEL_337;
                    }
                    v501 = v500 - 1;
                    if ( !v501 )
                    {
                      v183 = *(int *)Str2;
                      goto LABEL_333;
                    }
                    if ( v501 != 1 )
                      goto LABEL_384;
                    v497 = *(int *)Str2;
                    goto LABEL_329;
                  }
LABEL_1124:
                  v83 = *(int *)Str2;
                  goto LABEL_161;
                }
                v502 = v14 - 2;
                if ( v502 )
                {
                  v503 = v502 - 1;
                  if ( !v503 )
                  {
                    v189 = *Str2;
                    goto LABEL_341;
                  }
                  v504 = v503 - 1;
                  if ( !v504 )
                  {
                    v185 = *Str2;
                    goto LABEL_337;
                  }
                  v505 = v504 - 1;
                  if ( !v505 )
                  {
                    v183 = *Str2;
                    goto LABEL_333;
                  }
                  if ( v505 != 1 )
                    goto LABEL_384;
                  v497 = *Str2;
                  goto LABEL_329;
                }
LABEL_1134:
                v83 = *Str2;
                goto LABEL_161;
              }
              v506 = v14 - 2;
              if ( v506 )
              {
                v507 = v506 - 1;
                if ( !v507 )
                {
                  v189 = (__int16)*Str2;
                  goto LABEL_341;
                }
                v508 = v507 - 1;
                if ( !v508 )
                {
                  v185 = (__int16)*Str2;
                  goto LABEL_337;
                }
                v509 = v508 - 1;
                if ( !v509 )
                {
                  v183 = (__int16)*Str2;
                  goto LABEL_333;
                }
                if ( v509 != 1 )
                  goto LABEL_384;
                v497 = (__int16)*Str2;
                goto LABEL_329;
              }
LABEL_1144:
              v83 = (__int16)*Str2;
              goto LABEL_161;
            }
            v510 = v14 - 2;
            if ( v510 )
            {
              v511 = v510 - 1;
              if ( !v511 )
              {
                v189 = *(unsigned __int8 *)Str2;
                goto LABEL_341;
              }
              v512 = v511 - 1;
              if ( !v512 )
              {
                v185 = *(unsigned __int8 *)Str2;
                goto LABEL_337;
              }
              v513 = v512 - 1;
              if ( !v513 )
              {
                v183 = *(unsigned __int8 *)Str2;
                goto LABEL_333;
              }
              if ( v513 != 1 )
                goto LABEL_384;
              v497 = *(unsigned __int8 *)Str2;
              goto LABEL_329;
            }
LABEL_1154:
            v83 = *(unsigned __int8 *)Str2;
            goto LABEL_161;
          }
          v514 = v14 - 2;
          if ( v514 )
          {
            v515 = v514 - 1;
            if ( !v515 )
            {
              v189 = *(char *)Str2;
              goto LABEL_341;
            }
            v516 = v515 - 1;
            if ( !v516 )
            {
              v185 = *(char *)Str2;
              goto LABEL_337;
            }
            v517 = v516 - 1;
            if ( !v517 )
            {
              v183 = *(char *)Str2;
              goto LABEL_333;
            }
            if ( v517 != 1 )
              goto LABEL_384;
            v497 = *(char *)Str2;
LABEL_329:
            v180 = *(_QWORD *)a2 < v497;
            v181 = *(_QWORD *)a2 == v497;
LABEL_330:
            v20 = v180 || v181;
            goto LABEL_41;
          }
LABEL_160:
          v83 = *(char *)Str2;
LABEL_161:
          v82 = *(_QWORD *)a2 == v83;
          goto LABEL_162;
        }
        goto LABEL_1173;
      }
      if ( a5 == 9 )
        goto LABEL_1173;
      if ( a5 != 10 )
      {
        if ( a5 == 11 )
        {
LABEL_1166:
          v518 = v14 - 2;
          if ( !v518 )
          {
            v113 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v113 = v113 + 1.844674407370955e19;
            goto LABEL_225;
          }
          v519 = v518 - 1;
          if ( !v519 )
          {
            v110 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v110 = v110 + 1.844674407370955e19;
            goto LABEL_219;
          }
          v520 = v519 - 1;
          if ( !v520 )
          {
            v105 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v105 = v105 + 1.844674407370955e19;
            goto LABEL_213;
          }
          v521 = v520 - 1;
          if ( !v521 )
          {
            v102 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v102 = v102 + 1.844674407370955e19;
            goto LABEL_207;
          }
          if ( v521 != 1 )
            goto LABEL_384;
          v98 = (double)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v98 = v98 + 1.844674407370955e19;
          goto LABEL_201;
        }
        if ( a5 != 14 )
        {
          if ( a5 != 15 )
            goto LABEL_384;
          goto LABEL_1166;
        }
LABEL_1173:
        v522 = v14 - 2;
        if ( v522 )
        {
          v523 = v522 - 1;
          if ( v523 )
          {
            v524 = v523 - 1;
            if ( !v524 )
            {
              v27 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_63;
            }
            v525 = v524 - 1;
            if ( v525 )
            {
              if ( v525 != 1 )
                goto LABEL_384;
              v36 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              v37 = *(_QWORD *)a2 == *(_QWORD *)Str2;
              goto LABEL_94;
            }
            v38 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            goto LABEL_97;
          }
          v39 = *(_QWORD *)a2 < *(_QWORD *)Str2;
          v40 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_100:
          v22 = !v39 && !v40;
          goto LABEL_47;
        }
        goto LABEL_1281;
      }
      v526 = v14 - 2;
      if ( !v526 )
      {
        v131 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v131 = v131 + 1.8446744e19;
        goto LABEL_257;
      }
      v527 = v526 - 1;
      if ( !v527 )
      {
        v128 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v128 = v128 + 1.8446744e19;
        goto LABEL_250;
      }
      v528 = v527 - 1;
      if ( !v528 )
      {
        v126 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v126 = v126 + 1.8446744e19;
        goto LABEL_247;
      }
      v529 = v528 - 1;
      if ( !v529 )
      {
        v123 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v123 = v123 + 1.8446744e19;
        goto LABEL_240;
      }
      if ( v529 != 1 )
        goto LABEL_384;
      v121 = (float)(int)*(_QWORD *)a2;
      if ( *(__int64 *)a2 < 0 )
        v121 = v121 + 1.8446744e19;
LABEL_237:
      v99 = *(float *)Str2 < v121;
      goto LABEL_241;
    }
LABEL_1305:
    if ( a5 <= 8 )
    {
      if ( a5 != 8 )
      {
        if ( a5 == 2 )
        {
          v551 = v14 - 2;
          if ( !v551 )
            goto LABEL_160;
          v552 = v551 - 1;
          if ( !v552 )
          {
            v81 = *(char *)Str2;
            goto LABEL_156;
          }
          v553 = v552 - 1;
          if ( !v553 )
          {
            v77 = *(char *)Str2;
            goto LABEL_151;
          }
          v554 = v553 - 1;
          if ( !v554 )
          {
            v74 = *(char *)Str2;
            goto LABEL_146;
          }
          if ( v554 != 1 )
            goto LABEL_384;
          v534 = *(char *)Str2;
        }
        else if ( a5 == 3 )
        {
          v547 = v14 - 2;
          if ( !v547 )
            goto LABEL_1154;
          v548 = v547 - 1;
          if ( !v548 )
          {
            v81 = *(unsigned __int8 *)Str2;
            goto LABEL_156;
          }
          v549 = v548 - 1;
          if ( !v549 )
          {
            v77 = *(unsigned __int8 *)Str2;
            goto LABEL_151;
          }
          v550 = v549 - 1;
          if ( !v550 )
          {
            v74 = *(unsigned __int8 *)Str2;
            goto LABEL_146;
          }
          if ( v550 != 1 )
            goto LABEL_384;
          v534 = *(unsigned __int8 *)Str2;
        }
        else if ( a5 == 4 )
        {
          v543 = v14 - 2;
          if ( !v543 )
            goto LABEL_1144;
          v544 = v543 - 1;
          if ( !v544 )
          {
            v81 = (__int16)*Str2;
            goto LABEL_156;
          }
          v545 = v544 - 1;
          if ( !v545 )
          {
            v77 = (__int16)*Str2;
            goto LABEL_151;
          }
          v546 = v545 - 1;
          if ( !v546 )
          {
            v74 = (__int16)*Str2;
            goto LABEL_146;
          }
          if ( v546 != 1 )
            goto LABEL_384;
          v534 = (__int16)*Str2;
        }
        else
        {
          if ( a5 != 5 )
          {
            if ( a5 == 6 )
            {
              v535 = v14 - 2;
              if ( !v535 )
                goto LABEL_1124;
              v536 = v535 - 1;
              if ( v536 )
              {
                v537 = v536 - 1;
                if ( v537 )
                {
                  v538 = v537 - 1;
                  if ( v538 )
                  {
                    if ( v538 != 1 )
                      goto LABEL_384;
                    v534 = *(int *)Str2;
                    goto LABEL_141;
                  }
                  v74 = *(int *)Str2;
LABEL_146:
                  v73 = __OFSUB__(*(_QWORD *)a2, v74);
                  v72 = *(_QWORD *)a2 - v74 < 0;
                  goto LABEL_147;
                }
                v77 = *(int *)Str2;
                goto LABEL_151;
              }
              v81 = *(int *)Str2;
            }
            else
            {
              if ( a5 != 7 )
                goto LABEL_384;
              v530 = v14 - 2;
              if ( !v530 )
              {
LABEL_1114:
                v83 = *(unsigned int *)Str2;
                goto LABEL_161;
              }
              v531 = v530 - 1;
              if ( v531 )
              {
                v532 = v531 - 1;
                if ( v532 )
                {
                  v533 = v532 - 1;
                  if ( v533 )
                  {
                    if ( v533 != 1 )
                      goto LABEL_384;
                    v534 = *(unsigned int *)Str2;
                    goto LABEL_141;
                  }
                  v74 = *(unsigned int *)Str2;
                  goto LABEL_146;
                }
                v77 = *(unsigned int *)Str2;
LABEL_151:
                v76 = __OFSUB__(*(_QWORD *)a2, v77);
                v75 = *(_QWORD *)a2 - v77 < 0;
                goto LABEL_152;
              }
              v81 = *(unsigned int *)Str2;
            }
LABEL_156:
            v80 = __OFSUB__(*(_QWORD *)a2, v81);
            v78 = *(_QWORD *)a2 == v81;
            v79 = *(_QWORD *)a2 - v81 < 0;
            goto LABEL_157;
          }
          v539 = v14 - 2;
          if ( !v539 )
            goto LABEL_1134;
          v540 = v539 - 1;
          if ( !v540 )
          {
            v81 = *Str2;
            goto LABEL_156;
          }
          v541 = v540 - 1;
          if ( !v541 )
          {
            v77 = *Str2;
            goto LABEL_151;
          }
          v542 = v541 - 1;
          if ( !v542 )
          {
            v74 = *Str2;
            goto LABEL_146;
          }
          if ( v542 != 1 )
            goto LABEL_384;
          v534 = *Str2;
        }
LABEL_141:
        v71 = __OFSUB__(*(_QWORD *)a2, v534);
        v69 = *(_QWORD *)a2 == v534;
        v70 = *(_QWORD *)a2 - v534 < 0;
        goto LABEL_142;
      }
LABEL_1268:
      v559 = v14 - 2;
      if ( v559 )
      {
        v560 = v559 - 1;
        if ( !v560 )
        {
          v47 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v45 = *(_QWORD *)a2 == *(_QWORD *)Str2;
          v46 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_196;
        }
        v561 = v560 - 1;
        if ( !v561 )
        {
          v44 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v43 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_191;
        }
        v562 = v561 - 1;
        if ( v562 )
        {
          if ( v562 != 1 )
            goto LABEL_384;
          v35 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v33 = *(_QWORD *)a2 == *(_QWORD *)Str2;
          v34 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_181;
        }
        v42 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
        v41 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
        goto LABEL_186;
      }
LABEL_1281:
      v21 = *(_QWORD *)a2 == *(_QWORD *)Str2;
      goto LABEL_46;
    }
    if ( a5 == 9 )
      goto LABEL_1173;
    if ( a5 == 10 )
    {
      v568 = v14 - 2;
      if ( !v568 )
      {
        v131 = (float)(int)*(_QWORD *)a2;
        goto LABEL_257;
      }
      v569 = v568 - 1;
      if ( !v569 )
      {
        v128 = (float)(int)*(_QWORD *)a2;
        goto LABEL_250;
      }
      v570 = v569 - 1;
      if ( !v570 )
      {
        v126 = (float)(int)*(_QWORD *)a2;
        goto LABEL_247;
      }
      v571 = v570 - 1;
      if ( !v571 )
      {
        v123 = (float)(int)*(_QWORD *)a2;
        goto LABEL_240;
      }
      if ( v571 != 1 )
        goto LABEL_384;
      v121 = (float)(int)*(_QWORD *)a2;
      goto LABEL_237;
    }
    if ( a5 != 11 )
    {
      if ( a5 == 14 )
        goto LABEL_1268;
      if ( a5 != 15 )
        goto LABEL_384;
    }
    v555 = v14 - 2;
    if ( !v555 )
    {
      v113 = (double)(int)*(_QWORD *)a2;
      goto LABEL_225;
    }
    v556 = v555 - 1;
    if ( !v556 )
    {
      v110 = (double)(int)*(_QWORD *)a2;
      goto LABEL_219;
    }
    v557 = v556 - 1;
    if ( !v557 )
    {
      v105 = (double)(int)*(_QWORD *)a2;
      goto LABEL_213;
    }
    v558 = v557 - 1;
    if ( !v558 )
    {
      v102 = (double)(int)*(_QWORD *)a2;
      goto LABEL_207;
    }
    if ( v558 != 1 )
      goto LABEL_384;
    v98 = (double)(int)*(_QWORD *)a2;
    goto LABEL_201;
  }
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case 0x15u:
        if ( a5 == 21 && v14 == 2 )
        {
          if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
            goto LABEL_13;
          v573 = *(_QWORD *)a2 - *(_QWORD *)Str2;
          if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
            v573 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
          v19 = v573 == 0;
          goto LABEL_34;
        }
        goto LABEL_1348;
      case 0x16u:
        v572 = a5 == 22;
        break;
      case 0x17u:
        v381 = a5 == 23;
LABEL_835:
        if ( !v381 )
          goto LABEL_384;
        goto LABEL_836;
      case 0x18u:
        v572 = a5 == 24;
        break;
      default:
        if ( a1 != 25 || a5 != 25 && a5 != 18 || v14 != 2 )
          goto LABEL_384;
        goto LABEL_24;
    }
    if ( !v572 || v14 != 2 )
      goto LABEL_384;
    goto LABEL_1332;
  }
  if ( a1 >= 0x13 )
    goto LABEL_384;
  switch ( a1 )
  {
    case 0xEu:
      goto LABEL_1305;
    case 0xFu:
      goto LABEL_1297;
    case 0x10u:
      if ( a5 != 16 )
        goto LABEL_384;
      v563 = v14 - 2;
      if ( v563 )
      {
        v564 = v563 - 1;
        if ( v564 )
        {
          v565 = v564 - 1;
          if ( v565 )
          {
            v566 = v565 - 1;
            if ( v566 )
            {
              if ( v566 != 1 )
                goto LABEL_384;
              v567 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
            }
            else
            {
              v567 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
            }
            if ( v567 )
              goto LABEL_14;
            v383 = CompareFileTimeType(a2, Str2);
            goto LABEL_841;
          }
          v17 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
        }
        else
        {
          v17 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
        }
LABEL_29:
        v18 = v17;
        goto LABEL_30;
      }
      v16 = CompareFileTimeType(a2, Str2);
LABEL_28:
      v17 = v16 == 0;
      goto LABEL_29;
    case 0x11u:
      if ( a5 != 17 || v14 != 2 )
        goto LABEL_384;
      goto LABEL_45;
  }
  if ( a5 != 18 )
    goto LABEL_384;
  if ( v14 != 2 )
  {
    if ( v14 - 9 > 2 )
      goto LABEL_384;
    v20 = SubstringMatch(a2, Str2);
    goto LABEL_41;
  }
LABEL_24:
  if ( !v13 )
  {
LABEL_839:
    if ( (_DWORD)v8 != a7 )
      goto LABEL_13;
    v383 = memcmp(a2, Str2, v8);
LABEL_841:
    v19 = v383 == 0;
    goto LABEL_34;
  }
  if ( (_DWORD)v8 && (_DWORD)v8 == a7 )
  {
    v16 = wcsicmp(a2, Str2);
    goto LABEL_28;
  }
LABEL_1348:
  if ( v12 )
  {
    LOBYTE(v10) = *a8 == 0;
    *a8 = v10;
  }
  return v11;
}
