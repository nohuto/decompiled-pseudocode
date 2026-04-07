/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180047D5C
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000E610 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x1800293C8 (StringCchLengthW.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003D0A0 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180047E38 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180047E58 (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x18004C594 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18004C5C0 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004D898 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004FAFA (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(const unsigned __int16 *a1)
{
  char v1; // r15
  HLOCAL v3; // rax
  int v4; // r14d
  void *v5; // r13
  void *v6; // r12
  HANDLE ProcessHeap; // rax
  void *v8; // rax
  void *v9; // rsi
  size_t v10; // r12
  HANDLE v11; // rax
  void *v12; // rax
  void *v13; // rsi
  unsigned int v14; // r13d
  int v15; // eax
  unsigned int v16; // r11d
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r11d
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // r11d
  int v24; // eax
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // r11d
  int v28; // eax
  size_t v29; // rdx
  int v30; // r9d
  int v31; // eax
  unsigned int v32; // r11d
  int v33; // eax
  int v34; // eax
  unsigned int v35; // r11d
  int v36; // eax
  int v37; // r9d
  int v38; // eax
  unsigned int v39; // r11d
  int v40; // eax
  int v41; // r9d
  unsigned int v42; // esi
  HANDLE v43; // rax
  void *v44; // rax
  void *v45; // rsi
  _DWORD *v46; // r9
  _DWORD *v47; // rcx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  unsigned int *v51; // r9
  int v52; // eax
  __int64 v53; // r9
  unsigned int v54; // r10d
  int v55; // r11d
  _DWORD *v56; // r9
  void *v57; // rdx
  void *v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  unsigned int *v61; // r9
  int v62; // eax
  __int64 v63; // r9
  unsigned int v64; // r10d
  int v65; // r11d
  unsigned int *v66; // r9
  void *v67; // rdx
  void *v68; // rcx
  int v69; // eax
  size_t v70; // rdx
  unsigned int *v71; // r9
  int v72; // eax
  __int64 v73; // r9
  unsigned int v74; // r10d
  int v75; // r11d
  _DWORD *v76; // r9
  _QWORD *v77; // rax
  STRSAFE_PCNZWCH v78; // r12
  int v79; // eax
  __int64 v80; // rdx
  unsigned int *v81; // r9
  int v82; // eax
  __int64 v83; // r9
  unsigned int v84; // r10d
  _DWORD *v85; // r9
  __int64 v86; // r11
  void *v87; // rcx
  int v88; // eax
  __int64 v89; // rdx
  unsigned int *v90; // r9
  int v91; // eax
  __int64 v92; // r9
  unsigned int v93; // r10d
  int v94; // r11d
  _DWORD *v95; // r9
  _DWORD *v96; // rcx
  int v97; // eax
  __int64 v98; // rdx
  unsigned int *v99; // r9
  int v100; // eax
  __int64 v101; // r9
  unsigned int v102; // r10d
  int v103; // r11d
  _DWORD *v104; // r9
  _DWORD *v105; // rcx
  int v106; // eax
  __int64 v107; // rcx
  unsigned int v108; // r10d
  int v109; // eax
  unsigned int v110; // r10d
  unsigned int v111; // r9d
  int v112; // eax
  unsigned int v113; // r9d
  int v114; // eax
  unsigned int v115; // r9d
  int v116; // eax
  unsigned int v117; // r9d
  int v118; // eax
  unsigned int v119; // r9d
  int v120; // eax
  unsigned int v121; // r12d
  unsigned int *v122; // r13
  size_t v123; // r9
  int v124; // r14d
  unsigned int v125; // eax
  unsigned int v126; // esi
  HANDLE v127; // rax
  _DWORD *v128; // rsi
  unsigned int v129; // r10d
  void *v130; // rcx
  HANDLE v131; // rax
  wchar_t *v132; // r13
  int v133; // r14d
  unsigned __int64 v134; // rsi
  char *v135; // r12
  unsigned __int8 *v136; // r9
  unsigned __int8 v137; // al
  unsigned __int64 v138; // rcx
  unsigned int v139; // edx
  int v140; // r11d
  _BYTE *v141; // r14
  unsigned int v142; // r8d
  int v143; // r11d
  char v144; // r10
  int v145; // edi
  int v146; // edx
  int v147; // ecx
  unsigned int v148; // r11d
  int v149; // ecx
  char v150; // r10
  unsigned __int8 *v151; // r8
  int v152; // edi
  int v153; // r13d
  int v154; // esi
  _BYTE *v155; // rax
  size_t v156; // r14
  int v157; // r10d
  int v158; // r9d
  int v159; // r11d
  int v160; // r8d
  int v161; // r11d
  int v162; // r8d
  int v163; // r11d
  unsigned int v164; // r8d
  int v165; // r11d
  int v166; // r8d
  int v167; // r11d
  int v168; // r8d
  int v169; // r11d
  int v170; // r8d
  unsigned int v171; // r11d
  unsigned int v172; // r8d
  int v173; // r11d
  int v174; // r8d
  int v175; // r11d
  int v176; // r8d
  int v177; // r11d
  int v178; // r8d
  int v179; // r11d
  int v180; // r8d
  unsigned int v181; // r11d
  int v182; // r8d
  unsigned int v183; // ecx
  int v184; // r8d
  unsigned int v185; // r14d
  HANDLE v186; // rax
  _DWORD *v187; // rax
  _DWORD *v188; // rsi
  HANDLE v189; // rax
  void *v190; // rax
  HANDLE v191; // rax
  _OWORD *v192; // rax
  HANDLE v193; // rax
  _QWORD *v194; // rax
  void *v195; // r12
  HANDLE v196; // rax
  void *v197; // r12
  HANDLE v198; // rax
  void *v199; // r12
  HANDLE v200; // rax
  HANDLE v201; // rax
  HANDLE v202; // rax
  void *v203; // rsi
  HANDLE v204; // rax
  void *v205; // rsi
  HANDLE v206; // rax
  HANDLE v207; // rax
  HANDLE v208; // rax
  const void **v209; // r12
  int v210; // r14d
  unsigned int v211; // eax
  unsigned int v212; // esi
  HANDLE v213; // rax
  _DWORD *v214; // rsi
  void *v215; // rcx
  void *v216; // rcx
  HANDLE v217; // rax
  int v218; // eax
  unsigned int v219; // ecx
  unsigned int v220; // eax
  _QWORD *v221; // r12
  int v222; // eax
  unsigned int v223; // r9d
  unsigned int *v224; // rcx
  unsigned int v225; // r12d
  int v226; // eax
  int v227; // r10d
  int v228; // r10d
  void *v229; // rax
  unsigned int *v230; // rcx
  unsigned int v231; // r12d
  unsigned int v232; // r9d
  int v233; // eax
  int v234; // r10d
  int v235; // r10d
  void *v236; // rax
  unsigned int v237; // r11d
  unsigned int v238; // eax
  void *v239; // rsi
  HANDLE v240; // rax
  _QWORD *v241; // r12
  void *v242; // rsi
  HANDLE v243; // rax
  void *v244; // rsi
  HANDLE v245; // rax
  void *v246; // rsi
  HANDLE v247; // rax
  HANDLE v248; // rax
  void *v249; // rsi
  HANDLE v250; // rax
  void *v251; // rsi
  HANDLE v252; // rax
  void *v253; // rsi
  HANDLE v254; // rax
  void *v255; // rsi
  HANDLE v256; // rax
  void *v257; // rsi
  HANDLE v258; // rax
  HANDLE v259; // rax
  void *v260; // rsi
  HANDLE v261; // rax
  int v262; // r9d
  STRSAFE_PCNZWCH v263; // rax
  unsigned int v264; // esi
  HANDLE v265; // rax
  _DWORD *v266; // rax
  _DWORD *v267; // rsi
  FARPROC v268; // rax
  int v269; // eax
  unsigned int v270; // r9d
  signed int v271; // eax
  int v272; // r14d
  int v273; // r9d
  const wchar_t *v274; // r10
  unsigned int v275; // r10d
  int v276; // r9d
  SIZE_T v277; // r12
  int v278; // r9d
  int v279; // r9d
  SIZE_T v280; // r13
  int v281; // r9d
  int v282; // r9d
  int v283; // r10d
  HANDLE v284; // rax
  _QWORD *v285; // rsi
  void *v286; // rsi
  __int64 v287; // r14
  unsigned __int64 v288; // r14
  _BYTE *v289; // r12
  STRSAFE_PCNZWCH v290; // r9
  unsigned __int8 v291; // al
  _BYTE *v292; // r10
  unsigned int v293; // r8d
  int v294; // esi
  char v295; // r11
  int v296; // ebx
  int v297; // edx
  int v298; // ecx
  void *v299; // r14
  HANDLE v300; // rax
  void *v301; // rax
  void *v302; // r14
  HANDLE v303; // rax
  void *v304; // rax
  void *v305; // r14
  HANDLE v306; // rax
  void *v307; // rax
  void *v308; // r12
  HANDLE v309; // rax
  void *v310; // r12
  HANDLE v311; // rax
  HANDLE v312; // rax
  HANDLE v313; // rax
  _QWORD *v314; // rsi
  void *v315; // r12
  HANDLE v316; // rax
  void *v317; // r12
  HANDLE v318; // rax
  HANDLE v319; // rax
  HANDLE v320; // rax
  int v321; // r14d
  unsigned int v322; // esi
  unsigned int v323; // edx
  int v324; // ecx
  char v325; // r11
  int v326; // edx
  unsigned __int64 v327; // rcx
  int v328; // r12d
  _BYTE *v329; // r14
  int v330; // r13d
  unsigned __int8 *v331; // r8
  unsigned __int64 v332; // rbx
  int v333; // eax
  int v334; // r11d
  int v335; // esi
  int v336; // r10d
  unsigned int v337; // r9d
  int v338; // esi
  unsigned int v339; // r9d
  int v340; // esi
  int v341; // r9d
  unsigned int v342; // esi
  int v343; // r9d
  int v344; // esi
  int v345; // r9d
  unsigned int v346; // esi
  int v347; // r9d
  int v348; // esi
  unsigned int v349; // r9d
  int v350; // esi
  int v351; // r9d
  int v352; // esi
  int v353; // r9d
  unsigned int v354; // r8d
  int v355; // r9d
  int v356; // r8d
  int v357; // r9d
  unsigned int v358; // r8d
  int v359; // r9d
  int v360; // ecx
  int v361; // edx
  int v362; // r9d
  int v363; // edx
  unsigned __int64 j; // rcx
  int v365; // r14d
  unsigned int v366; // r9d
  HANDLE v367; // rax
  unsigned int v368; // r11d
  int v369; // r9d
  unsigned int v370; // r11d
  SIZE_T v371; // r13
  unsigned int v372; // r11d
  int v373; // r9d
  unsigned int v374; // r9d
  __int64 v375; // r10
  void *v376; // rsi
  void *v377; // rax
  void *v378; // r9
  void *v379; // r11
  unsigned int *v380; // r9
  unsigned __int64 v381; // r11
  int v382; // eax
  __int64 v383; // r9
  unsigned int v384; // r10d
  HANDLE v385; // rax
  __int64 v386; // r11
  size_t v387; // rcx
  unsigned int v388; // r10d
  int v389; // r9d
  int v390; // r9d
  _QWORD *v391; // rax
  size_t v392; // rcx
  unsigned int v393; // r10d
  int v394; // r9d
  int v395; // r9d
  _DWORD *v396; // rax
  size_t v397; // rcx
  unsigned int v398; // r10d
  int v399; // r9d
  int v400; // r10d
  size_t v401; // r11
  unsigned int *v402; // rcx
  unsigned int v403; // esi
  int v404; // r9d
  int v405; // r9d
  unsigned int *v406; // rax
  unsigned int v407; // esi
  unsigned int *v408; // rcx
  unsigned int v409; // r12d
  unsigned int v410; // r10d
  const void *v411; // r11
  int v412; // r9d
  int v413; // r9d
  _DWORD *v414; // rax
  int v415; // ecx
  size_t v416; // r11
  void *v417; // rsi
  HANDLE v418; // rax
  void *v419; // rsi
  HANDLE v420; // rax
  HANDLE v421; // rax
  HANDLE v422; // rax
  void *v423; // r13
  HANDLE v424; // rax
  unsigned int *v425; // rax
  unsigned int *v426; // rsi
  size_t v427; // r12
  HANDLE v428; // rax
  void *v429; // rax
  void *v430; // rsi
  unsigned int v431; // r13d
  unsigned int v432; // r10d
  int v433; // eax
  unsigned int v434; // r10d
  int v435; // r9d
  int v436; // eax
  unsigned int v437; // r10d
  int v438; // r9d
  int v439; // eax
  int v440; // r9d
  unsigned int v441; // esi
  HANDLE v442; // rax
  void *v443; // rax
  unsigned int *v444; // r9
  unsigned int v445; // r10d
  _DWORD *v446; // rcx
  int v447; // r9d
  void *v448; // rbx
  HANDLE v449; // rax
  void *v450; // rbx
  HANDLE v451; // rax
  HANDLE v452; // rax
  HANDLE v453; // rax
  int v454; // ebx
  unsigned int *v455; // r10
  __int64 v456; // r10
  unsigned int v457; // r9d
  int v458; // r11d
  int v459; // eax
  _DWORD *v460; // r10
  int v461; // esi
  void *v462; // rdx
  void *v463; // rcx
  unsigned int v464; // r10d
  unsigned int *v465; // r10
  __int64 v466; // r10
  unsigned int v467; // r9d
  int v468; // r11d
  int v469; // eax
  unsigned int *v470; // r10
  int v471; // esi
  void *v472; // rdx
  void *v473; // rcx
  unsigned int v474; // r10d
  unsigned int *v475; // r10
  __int64 v476; // r10
  unsigned int v477; // r9d
  int v478; // r11d
  int v479; // eax
  _DWORD *v480; // r10
  _QWORD *v481; // rax
  __int64 v482; // rcx
  unsigned int v483; // r9d
  size_t *v484; // r13
  int v485; // esi
  unsigned int v486; // r9d
  size_t v487; // r10
  unsigned int v488; // eax
  unsigned int v489; // esi
  HANDLE v490; // rax
  char *v491; // rax
  char *v492; // r12
  unsigned int v493; // r9d
  void *v494; // rcx
  HANDLE v495; // rax
  int v496; // esi
  _QWORD *v497; // r12
  int v498; // esi
  SIZE_T v499; // rsi
  void *v500; // rax
  SIZE_T v501; // rdx
  unsigned __int8 *v502; // r9
  unsigned __int8 v503; // al
  SIZE_T v504; // rcx
  _BYTE *v505; // rcx
  int v506; // r10d
  int v507; // edx
  char v508; // r10
  int v509; // edi
  int v510; // ebx
  int v511; // r8d
  unsigned int v512; // r10d
  int v513; // r8d
  char v514; // bl
  char *v515; // rdi
  int v516; // r13d
  int v517; // r12d
  unsigned __int8 *v518; // rdx
  unsigned int v519; // r14d
  int v520; // eax
  int v521; // r9d
  int v522; // r8d
  int v523; // r10d
  int v524; // r11d
  int v525; // r10d
  int v526; // r11d
  int v527; // r10d
  unsigned int v528; // r11d
  int v529; // r10d
  int v530; // r11d
  int v531; // r10d
  int v532; // r11d
  int v533; // r10d
  int v534; // r11d
  unsigned int v535; // r10d
  unsigned int v536; // r11d
  int v537; // r10d
  int v538; // r11d
  int v539; // r10d
  int v540; // r11d
  int v541; // r10d
  int v542; // r11d
  int v543; // r10d
  int v544; // r11d
  unsigned int v545; // r10d
  int v546; // r11d
  _BYTE *v547; // rdx
  __int64 v548; // rcx
  void *v549; // rax
  unsigned int v550; // esi
  HANDLE v551; // rax
  _DWORD *v552; // rax
  _DWORD *v553; // rbx
  HANDLE v554; // rax
  void *v555; // rax
  HANDLE v556; // rax
  _OWORD *v557; // rax
  HANDLE v558; // rax
  _QWORD *v559; // rax
  HANDLE v560; // rax
  HANDLE v561; // rax
  HANDLE v562; // rax
  HANDLE v563; // rax
  void *v564; // rbx
  HANDLE v565; // rax
  void *v566; // rbx
  HANDLE v567; // rax
  void *v568; // rbx
  HANDLE v569; // rax
  void *v570; // rbx
  HANDLE v571; // rax
  HANDLE v572; // rax
  const void **v573; // r12
  int v574; // esi
  unsigned int v575; // r9d
  unsigned int v576; // r9d
  unsigned int v577; // eax
  unsigned int v578; // ebx
  HANDLE v579; // rax
  _DWORD *v580; // rax
  void *v581; // rbx
  int v582; // eax
  void *v583; // rcx
  int v584; // eax
  void *v585; // rcx
  int v586; // eax
  HANDLE v587; // rax
  int v588; // eax
  unsigned int v589; // ecx
  unsigned int v590; // eax
  int v591; // eax
  unsigned int v592; // r9d
  unsigned int *v593; // rcx
  int v594; // ebx
  unsigned int v595; // r12d
  int v596; // ebx
  void *v597; // rax
  unsigned int v598; // ebx
  HANDLE v599; // rax
  _DWORD *v600; // rax
  _DWORD *v601; // rbx
  unsigned int *v602; // rcx
  int v603; // ebx
  unsigned int v604; // r12d
  unsigned int v605; // r9d
  int v606; // ebx
  void *v607; // rax
  unsigned int v608; // r10d
  unsigned int v609; // r11d
  unsigned int v610; // eax
  FARPROC ProcAddress; // rax
  int v612; // eax
  unsigned int v613; // r9d
  signed int LastError; // eax
  int v615; // esi
  unsigned int v616; // r10d
  int v617; // r9d
  SIZE_T v618; // r11
  unsigned int v619; // r11d
  int v620; // r9d
  __int64 v621; // r10
  SIZE_T v622; // r12
  unsigned int v623; // r10d
  int v624; // r9d
  int v625; // r9d
  unsigned int v626; // r10d
  int v627; // r9d
  unsigned int v628; // r10d
  int v629; // r9d
  int v630; // r10d
  int v631; // r11d
  HANDLE v632; // rax
  _QWORD *v633; // rax
  size_t v634; // rbx
  const void *v635; // rsi
  HANDLE v636; // rax
  SIZE_T v637; // r13
  void *v638; // rax
  void *v639; // rsi
  HANDLE v640; // rax
  void *v641; // rax
  void *v642; // rsi
  unsigned int v643; // eax
  unsigned int v644; // r12d
  HANDLE v645; // rax
  void *v646; // rax
  void *v647; // r12
  HANDLE v648; // rax
  void *v649; // r12
  HANDLE v650; // rax
  void *v651; // r12
  HANDLE v652; // rax
  HANDLE v653; // rax
  _QWORD *v654; // rbx
  void *v655; // r12
  HANDLE v656; // rax
  void *v657; // r12
  HANDLE v658; // rax
  void *v659; // r12
  HANDLE v660; // rax
  HANDLE v661; // rax
  wchar_t *v662; // rbx
  __int64 v663; // rsi
  SIZE_T v664; // rsi
  void *v665; // rax
  _BYTE *v666; // r12
  unsigned __int8 *v667; // r9
  unsigned __int8 v668; // al
  _BYTE *v669; // r10
  int v670; // ebx
  int v671; // r8d
  char v672; // di
  int v673; // edx
  int v674; // ecx
  unsigned int v675; // edx
  int v676; // ecx
  char v677; // di
  int v678; // edx
  _BYTE *v679; // r13
  int v680; // r12d
  unsigned __int8 *v681; // r14
  unsigned int v682; // esi
  SIZE_T v683; // rax
  int v684; // r10d
  int v685; // r9d
  int v686; // ecx
  int v687; // r10d
  int v688; // r11d
  int v689; // r9d
  unsigned int v690; // r8d
  int v691; // r11d
  unsigned int v692; // r8d
  int v693; // r11d
  int v694; // r8d
  unsigned int v695; // r11d
  int v696; // r8d
  int v697; // r11d
  int v698; // r8d
  unsigned int v699; // r11d
  int v700; // r8d
  int v701; // r11d
  unsigned int v702; // r8d
  int v703; // r11d
  int v704; // r8d
  int v705; // r11d
  int v706; // r8d
  int v707; // r11d
  int v708; // r8d
  int v709; // r11d
  int v710; // r8d
  unsigned int v711; // r11d
  int v712; // r8d
  int v713; // edx
  SIZE_T i; // rcx
  int v715; // edi
  unsigned int v716; // r9d
  HANDLE v717; // rax
  int v718; // esi
  int v719; // r9d
  SIZE_T v720; // r12
  int v721; // r9d
  unsigned int v722; // r9d
  __int64 v723; // r10
  void *v724; // rbx
  void *v725; // rax
  SIZE_T v726; // r9
  SIZE_T v727; // r11
  unsigned int *v728; // r9
  SIZE_T v729; // r11
  int v730; // eax
  __int64 v731; // r9
  unsigned int v732; // r10d
  HANDLE v733; // rax
  void *v734; // rbx
  HANDLE v735; // rax
  _QWORD *v736; // r12
  void *v737; // rbx
  HANDLE v738; // rax
  void *v739; // rbx
  HANDLE v740; // rax
  void *v741; // rbx
  HANDLE v742; // rax
  HANDLE v743; // rax
  void *v744; // rbx
  HANDLE v745; // rax
  void *v746; // rbx
  HANDLE v747; // rax
  void *v748; // rbx
  HANDLE v749; // rax
  void *v750; // rbx
  HANDLE v751; // rax
  void *v752; // rbx
  HANDLE v753; // rax
  HANDLE v754; // rax
  wchar_t *v755; // rbx
  HANDLE v756; // rax
  unsigned int *v757; // rbx
  unsigned int v758; // r9d
  int v759; // r10d
  int *v760; // rax
  __int64 v761; // r10
  int v762; // r9d
  int v763; // r9d
  _QWORD *v764; // rax
  SIZE_T dwBytes; // [rsp+38h] [rbp-D0h] BYREF
  size_t v766; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v767; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID v768; // [rsp+50h] [rbp-B8h]
  __int64 v769; // [rsp+58h] [rbp-B0h]
  unsigned int *v770; // [rsp+60h] [rbp-A8h]
  LPVOID v771; // [rsp+68h] [rbp-A0h] BYREF
  void *v772; // [rsp+70h] [rbp-98h] BYREF
  size_t v773; // [rsp+78h] [rbp-90h] BYREF
  void *v774; // [rsp+80h] [rbp-88h]
  SIZE_T v775; // [rsp+88h] [rbp-80h] BYREF
  int v776; // [rsp+90h] [rbp-78h]
  int v777; // [rsp+94h] [rbp-74h]
  int v778; // [rsp+98h] [rbp-70h]
  int v779; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v780; // [rsp+A0h] [rbp-68h] BYREF
  int v781; // [rsp+A4h] [rbp-64h]
  int v782; // [rsp+A8h] [rbp-60h]
  unsigned int v783; // [rsp+ACh] [rbp-5Ch]
  unsigned int v784; // [rsp+B0h] [rbp-58h]
  void *v785; // [rsp+B8h] [rbp-50h] BYREF
  size_t v786; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID v787; // [rsp+C8h] [rbp-40h]
  void *v788; // [rsp+D0h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+D8h] [rbp-30h] BYREF
  SIZE_T v790; // [rsp+E0h] [rbp-28h] BYREF
  void *v791; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v792; // [rsp+F0h] [rbp-18h]
  unsigned int v793; // [rsp+F4h] [rbp-14h]
  STRSAFE_PCNZWCH psz; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v795; // [rsp+100h] [rbp-8h]
  void *v796; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v797; // [rsp+110h] [rbp+8h]
  unsigned int v798; // [rsp+114h] [rbp+Ch] BYREF
  unsigned int v799; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v800; // [rsp+11Ch] [rbp+14h]
  int v801; // [rsp+120h] [rbp+18h]
  void *v802; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v803; // [rsp+130h] [rbp+28h]
  LPVOID v804; // [rsp+138h] [rbp+30h]
  int v805; // [rsp+140h] [rbp+38h]
  void *v806; // [rsp+148h] [rbp+40h]
  unsigned int v807; // [rsp+150h] [rbp+48h]
  unsigned int v808; // [rsp+154h] [rbp+4Ch]
  unsigned int v809; // [rsp+158h] [rbp+50h]
  unsigned int v810; // [rsp+15Ch] [rbp+54h]
  unsigned int v811; // [rsp+160h] [rbp+58h]
  unsigned int v812; // [rsp+164h] [rbp+5Ch]
  unsigned int v813; // [rsp+168h] [rbp+60h]
  unsigned int v814; // [rsp+16Ch] [rbp+64h] BYREF
  unsigned int v815; // [rsp+170h] [rbp+68h]
  int v816; // [rsp+174h] [rbp+6Ch]
  int v817; // [rsp+178h] [rbp+70h]
  SIZE_T v818; // [rsp+180h] [rbp+78h] BYREF
  unsigned int v819; // [rsp+188h] [rbp+80h]
  int v820; // [rsp+18Ch] [rbp+84h]
  int v821; // [rsp+190h] [rbp+88h]
  LPVOID v822; // [rsp+198h] [rbp+90h]
  unsigned int v823; // [rsp+1A0h] [rbp+98h]
  unsigned int v824; // [rsp+1A4h] [rbp+9Ch] BYREF
  wchar_t *v825; // [rsp+1A8h] [rbp+A0h]
  void *v826; // [rsp+1B0h] [rbp+A8h]
  unsigned int v827; // [rsp+1B8h] [rbp+B0h]
  unsigned int v828; // [rsp+1BCh] [rbp+B4h]
  int v829; // [rsp+1C0h] [rbp+B8h]
  unsigned int v830; // [rsp+1C4h] [rbp+BCh] BYREF
  int v831; // [rsp+1C8h] [rbp+C0h]
  unsigned int v832; // [rsp+1CCh] [rbp+C4h] BYREF
  unsigned int v833; // [rsp+1D0h] [rbp+C8h]
  int v834; // [rsp+1D4h] [rbp+CCh]
  unsigned int v835; // [rsp+1D8h] [rbp+D0h]
  unsigned int v836; // [rsp+1DCh] [rbp+D4h]
  unsigned __int64 v837; // [rsp+1E0h] [rbp+D8h]
  LPVOID v838; // [rsp+1E8h] [rbp+E0h]
  LPVOID v839; // [rsp+1F0h] [rbp+E8h]
  LPVOID v840; // [rsp+1F8h] [rbp+F0h]
  int *v841; // [rsp+200h] [rbp+F8h] BYREF
  int v842; // [rsp+208h] [rbp+100h]
  int v843; // [rsp+210h] [rbp+108h]
  int v844; // [rsp+218h] [rbp+110h]
  int v845; // [rsp+21Ch] [rbp+114h]
  unsigned int v846; // [rsp+220h] [rbp+118h]
  int v847; // [rsp+224h] [rbp+11Ch]
  int v848; // [rsp+228h] [rbp+120h]
  int v849; // [rsp+22Ch] [rbp+124h]
  LPVOID lpMem; // [rsp+230h] [rbp+128h]
  int v851; // [rsp+238h] [rbp+130h]
  int v852; // [rsp+23Ch] [rbp+134h]
  unsigned int v853; // [rsp+240h] [rbp+138h]
  LPVOID v854; // [rsp+248h] [rbp+140h]
  int v855; // [rsp+250h] [rbp+148h]
  int v856; // [rsp+254h] [rbp+14Ch]
  int v857; // [rsp+258h] [rbp+150h]
  int v858; // [rsp+260h] [rbp+158h]
  int v859; // [rsp+264h] [rbp+15Ch]
  int v860; // [rsp+268h] [rbp+160h]
  int v861; // [rsp+26Ch] [rbp+164h]
  int v862; // [rsp+270h] [rbp+168h]
  int v863; // [rsp+274h] [rbp+16Ch]
  unsigned int v864; // [rsp+278h] [rbp+170h]
  size_t v865; // [rsp+280h] [rbp+178h]
  size_t v866; // [rsp+288h] [rbp+180h]
  unsigned __int64 v867; // [rsp+290h] [rbp+188h]
  size_t Size; // [rsp+298h] [rbp+190h]
  SIZE_T v869; // [rsp+2A0h] [rbp+198h]
  void *v870; // [rsp+2A8h] [rbp+1A0h]
  size_t v871; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int64 v872; // [rsp+2B8h] [rbp+1B0h]
  _QWORD *v873; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int64 v874; // [rsp+2C8h] [rbp+1C0h]
  unsigned int v875; // [rsp+2D0h] [rbp+1C8h]
  char *v876; // [rsp+2D8h] [rbp+1D0h]
  int v877; // [rsp+2E0h] [rbp+1D8h]
  __int64 v878; // [rsp+2E8h] [rbp+1E0h]
  _OWORD *v879; // [rsp+2F0h] [rbp+1E8h]
  __int64 v880; // [rsp+2F8h] [rbp+1F0h]
  void *v881; // [rsp+300h] [rbp+1F8h]
  void *v882; // [rsp+308h] [rbp+200h]
  HMODULE phModule; // [rsp+310h] [rbp+208h] BYREF
  const wchar_t *v884; // [rsp+318h] [rbp+210h]
  _QWORD *v885; // [rsp+320h] [rbp+218h]
  _DWORD *v886; // [rsp+328h] [rbp+220h]
  size_t v887; // [rsp+330h] [rbp+228h]
  unsigned int *v888; // [rsp+338h] [rbp+230h]
  _DWORD *v889; // [rsp+340h] [rbp+238h]
  __int64 v890; // [rsp+348h] [rbp+240h]
  void *v891; // [rsp+350h] [rbp+248h]
  void *v892; // [rsp+358h] [rbp+250h]
  unsigned __int64 v893; // [rsp+360h] [rbp+258h]
  unsigned __int64 v894; // [rsp+368h] [rbp+260h]
  __int64 *v895; // [rsp+370h] [rbp+268h]
  SIZE_T v896; // [rsp+378h] [rbp+270h]
  __int64 *v897; // [rsp+380h] [rbp+278h]
  __int64 v898; // [rsp+388h] [rbp+280h]
  _OWORD *v899; // [rsp+390h] [rbp+288h]
  __int64 v900; // [rsp+398h] [rbp+290h]
  size_t v901; // [rsp+3A0h] [rbp+298h]
  size_t v902; // [rsp+3A8h] [rbp+2A0h]
  HMODULE hModule; // [rsp+3B0h] [rbp+2A8h] BYREF
  int v904; // [rsp+3B8h] [rbp+2B0h]
  void *Src; // [rsp+3C0h] [rbp+2B8h]
  void *v906; // [rsp+3C8h] [rbp+2C0h]
  unsigned __int64 v907; // [rsp+3D0h] [rbp+2C8h]
  _QWORD v908[2]; // [rsp+3D8h] [rbp+2D0h] BYREF
  int v909; // [rsp+3E8h] [rbp+2E0h]
  unsigned int v910; // [rsp+3ECh] [rbp+2E4h]
  int v911; // [rsp+3F0h] [rbp+2E8h]
  _QWORD v912[2]; // [rsp+3F8h] [rbp+2F0h] BYREF
  int v913; // [rsp+408h] [rbp+300h]
  unsigned int v914; // [rsp+40Ch] [rbp+304h]
  int v915; // [rsp+410h] [rbp+308h]
  int *v916; // [rsp+418h] [rbp+310h]
  _QWORD *v917; // [rsp+420h] [rbp+318h]
  __int64 v918; // [rsp+428h] [rbp+320h]
  void *v919; // [rsp+430h] [rbp+328h] BYREF

  psz = a1;
  v834 = 0;
  v841 = 0LL;
  v801 = 0;
  v1 = 1;
  if ( !a1 )
  {
    v801 = -2147024809;
    goto LABEL_6;
  }
  v831 = 0;
  v796 = 0LL;
  v821 = 0;
  v835 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v796, v3);
  v870 = v796;
  if ( v796 )
  {
    v772 = 0LL;
    v803 = 0LL;
    v804 = 0LL;
    v5 = 0LL;
    v774 = 0LL;
    Src = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
    v6 = 0LL;
    v829 = 0;
    v805 = 0;
    Size = 160LL;
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
    v780 = -1;
    v788 = v8;
    v9 = v8;
    if ( !v8 )
    {
      v4 = -1073741801;
      LODWORD(dwBytes) = -1073741801;
      goto LABEL_605;
    }
    memcpy_0(v8, Src, Size);
    v10 = (unsigned int)Size;
    v5 = v9;
    v768 = v9;
    v906 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
    v871 = 8LL;
    v11 = GetProcessHeap();
    v12 = HeapAlloc(v11, 8u, 8uLL);
    v806 = v12;
    v13 = v12;
    if ( !v12 )
    {
      v4 = -1073741801;
      LODWORD(dwBytes) = -1073741801;
LABEL_604:
      v6 = v772;
LABEL_605:
      v773 = 0LL;
      v416 = 0LL;
      v417 = v774;
      if ( v774 )
      {
        v418 = GetProcessHeap();
        HeapFree(v418, 0, v417);
        v416 = 0LL;
        v774 = 0LL;
      }
      v803 = 0LL;
      v419 = v804;
      if ( v804 )
      {
        v420 = GetProcessHeap();
        HeapFree(v420, 0, v419);
        v416 = 0LL;
        v804 = 0LL;
      }
      if ( v5 )
      {
        v421 = GetProcessHeap();
        HeapFree(v421, 0, v5);
        v416 = 0LL;
      }
      if ( v6 )
      {
        v422 = GetProcessHeap();
        HeapFree(v422, 0, v6);
        v416 = 0LL;
      }
      if ( v4 < 0 )
        goto LABEL_1017;
      if ( !v821 )
      {
LABEL_643:
        v454 = v831;
        v875 = v835;
        v841 = (int *)v870;
        v796 = (void *)v416;
        goto LABEL_1018;
      }
      v768 = 0LL;
      v837 = 0LL;
      v838 = 0LL;
      v423 = 0LL;
      v787 = 0LL;
      v891 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
      v816 = 0;
      v865 = 160LL;
      v424 = GetProcessHeap();
      v425 = (unsigned int *)HeapAlloc(v424, 8u, 0xA0uLL);
      v416 = 0LL;
      v785 = v425;
      v426 = v425;
      if ( !v425 )
      {
        v430 = 0LL;
        goto LABEL_635;
      }
      memcpy_0(v425, v891, v865);
      v427 = (unsigned int)v865;
      v423 = v426;
      v770 = v426;
      v892 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
      v866 = 8LL;
      v428 = GetProcessHeap();
      v429 = HeapAlloc(v428, 8u, 8uLL);
      v416 = 0LL;
      v802 = v429;
      v430 = v429;
      if ( !v429 )
        goto LABEL_634;
      memcpy_0(v429, v892, v866);
      v431 = v866;
      v768 = v430;
      v893 = __rdtsc();
      HIDWORD(dwBytes) = 0;
      if ( (int)RtlUIntAdd(4LL, 4LL, &v775) < 0
        || (v820 = v775, (int)RtlUIntAdd(0LL, (unsigned int)v775, (char *)&dwBytes + 4) < 0)
        || (int)RtlUIntAdd(v432, (unsigned int)v427, &v775) < 0
        || (v820 = v775, v433 = RtlUIntAdd(HIDWORD(dwBytes), (unsigned int)v775, (char *)&dwBytes + 4),
                         (v435 | v433) < 0)
        || (int)RtlUIntAdd(v434, v431, &v775) < 0
        || (v820 = v775, v436 = RtlUIntAdd(HIDWORD(dwBytes), (unsigned int)v775, (char *)&dwBytes + 4),
                         (v438 | v436) < 0)
        || (int)RtlUIntAdd(v437, (unsigned int)(v416 + 8), &v775) < 0
        || (v820 = v775, v439 = RtlUIntAdd(HIDWORD(dwBytes), (unsigned int)v775, (char *)&dwBytes + 4),
                         (v440 | v439) < 0) )
      {
        v423 = v770;
        goto LABEL_635;
      }
      HIDWORD(v786) = HIDWORD(dwBytes);
      v441 = HIDWORD(dwBytes);
      v442 = GetProcessHeap();
      v443 = HeapAlloc(v442, 8u, v441);
      v416 = 0LL;
      if ( !v443 )
        goto LABEL_633;
      v787 = v443;
      LODWORD(v786) = 0;
      v857 = 4;
      if ( (int)RtlULongLongAdd(v443, 4LL, &v791) < 0 || v444 + 2 > (unsigned int *)((char *)v444 + HIDWORD(v786)) )
        goto LABEL_633;
      v446 = v791;
      *v444 = v445;
      *v446 = v857;
      v447 = v786 + 1;
      LODWORD(v786) = v786 + 1;
      if ( (_DWORD)v427 )
      {
        if ( v787 == (LPVOID)v416 )
        {
          if ( (int)RtlUIntAdd(v445, (unsigned int)v427, &v775) < 0 )
            goto LABEL_633;
          v858 = v775;
          if ( (int)RtlUIntAdd(HIDWORD(v786), (unsigned int)v775, (char *)&v786 + 4) < 0 )
            goto LABEL_633;
          v447 = v786 + 1;
          LODWORD(v786) = v786 + 1;
          goto LABEL_654;
        }
        v455 = (unsigned int *)v787;
        v788 = v787;
        if ( v447 )
        {
          while ( (int)RtlUIntAdd(4LL, *v455, &v775) >= 0 )
          {
            v858 = v775;
            if ( (int)RtlULongLongAdd(v456, (unsigned int)v775, &v788) < 0 )
              break;
            v455 = (unsigned int *)v788;
            if ( v458 + 1 >= v457 )
              goto LABEL_648;
          }
          goto LABEL_651;
        }
LABEL_648:
        v459 = RtlULongLongAdd(v455, 4LL, &v791);
        v416 = 0LL;
        v461 = v459;
        if ( v459 < 0 || (char *)v460 + v427 + 4 > (char *)v787 + HIDWORD(v786) )
          goto LABEL_633;
        v462 = v785;
        v463 = v791;
        *v460 = v427;
        memcpy_0(v463, v462, v427);
        v447 = v786 + 1;
        v416 = 0LL;
        LODWORD(v786) = v786 + 1;
        v445 = 4;
      }
      else
      {
        v461 = -1073741811;
      }
      if ( v461 < 0 )
        goto LABEL_633;
LABEL_654:
      if ( v431 )
      {
        if ( v787 == (LPVOID)v416 )
        {
          if ( (int)RtlUIntAdd(v445, v431, &v775) < 0 )
            goto LABEL_633;
          v859 = v775;
          if ( (int)RtlUIntAdd(HIDWORD(v786), (unsigned int)v775, (char *)&v786 + 4) < 0 )
            goto LABEL_633;
          v447 = v786 + 1;
          LODWORD(v786) = v786 + 1;
LABEL_669:
          v894 = v893;
          if ( v787 == (LPVOID)v416 )
          {
            if ( (int)RtlUIntAdd(v464, 8LL, &v775) < 0 )
              goto LABEL_633;
            v860 = v775;
            if ( (int)RtlUIntAdd(HIDWORD(v786), (unsigned int)v775, (char *)&v786 + 4) < 0 )
              goto LABEL_633;
LABEL_680:
            LODWORD(v786) = v786 + 1;
            if ( (int)RtlUIntAdd(v474, v474, &v775) >= 0 )
            {
              v861 = v775;
              LODWORD(v771) = v775;
              if ( (int)RtlUIntAdd(v482, 8LL, &v775) >= 0 )
              {
                v861 = v775;
                if ( (int)RtlUIntAdd(v483, (unsigned int)v775, &v771) >= 0 )
                {
                  LODWORD(v772) = (_DWORD)v771;
                  LODWORD(v771) = v416;
                  v484 = (size_t *)v416;
                  v766 = v416;
                  LODWORD(v767) = v416;
                  v840 = (LPVOID)v416;
                  v806 = (void *)v416;
                  v822 = (LPVOID)v416;
                  v793 = v416;
                  v796 = (void *)v416;
                  psz = (STRSAFE_PCNZWCH)v416;
                  v815 = v416;
                  v867 = __rdtsc();
                  v799 = 8;
                  v485 = RtlUIntAdd(8LL, HIDWORD(v786), &v799);
                  if ( v485 >= 0 )
                  {
                    v488 = (v799 + 7) & 0xFFFFFFF8;
                    if ( v488 >= v799 )
                    {
                      v799 = (v799 + 7) & 0xFFFFFFF8;
                      v489 = v488;
                      v490 = GetProcessHeap();
                      v491 = (char *)HeapAlloc(v490, 8u, v489);
                      v416 = 0LL;
                      v492 = v491;
                      if ( v491 )
                      {
                        v919 = v491;
                        *(_DWORD *)v491 = v786;
                        v485 = RtlULongLongAdd(v491, 4LL, &v919);
                        if ( v485 < 0
                          || (v494 = v919,
                              *(_DWORD *)v919 = HIDWORD(v786),
                              v485 = RtlULongLongAdd(v494, v493, &v919),
                              v485 < 0) )
                        {
                          v487 = (size_t)v484;
                          v486 = (unsigned int)v484;
                        }
                        else
                        {
                          *(_QWORD *)&v492[v799 - 8] = v867;
                          memcpy_0(v919, v787, HIDWORD(v786));
                          v486 = v799;
                          v416 = 0LL;
                          v487 = (size_t)v492;
                          v766 = (size_t)v492;
                          v492 = 0LL;
                          LODWORD(v767) = v799;
                        }
                        if ( v492 )
                        {
                          v495 = GetProcessHeap();
                          HeapFree(v495, 0, v492);
                          v486 = v767;
                          v416 = 0LL;
                          v487 = v766;
                        }
                      }
                      else
                      {
                        v485 = -1073741801;
                        v486 = (unsigned int)v484;
                        v487 = (size_t)v484;
                      }
                    }
                    else
                    {
                      v485 = -1073741675;
                    }
                  }
                  v496 = v485 | 0x10000000;
                  if ( v496 < 0 )
                    goto LABEL_971;
                  v897 = (__int64 *)v416;
                  v497 = (_QWORD *)v416;
                  v898 = v416;
                  v899 = (_OWORD *)v416;
                  v900 = v416;
                  v854 = (LPVOID)v416;
                  v896 = v416;
                  v802 = (void *)v416;
                  if ( !v487 )
                  {
                    v498 = -1073741811;
LABEL_751:
                    v496 = v498 | 0x10000000;
                    if ( v496 < 0 )
                      goto LABEL_971;
                    v573 = (const void **)v840;
                    HIDWORD(dwBytes) = 4;
                    v574 = RtlUIntAdd(4LL, *(unsigned int *)v840, (char *)&dwBytes + 4);
                    if ( v574 < 0
                      || (v574 = RtlUIntAdd(HIDWORD(dwBytes), v575, (char *)&dwBytes + 4), v574 < 0)
                      || (v574 = RtlUIntAdd(HIDWORD(dwBytes), *((unsigned int *)v573 + 4), (char *)&dwBytes + 4),
                          v574 < 0)
                      || (v574 = RtlUIntAdd(HIDWORD(dwBytes), v576, (char *)&dwBytes + 4), v574 < 0) )
                    {
                      v577 = v819;
                    }
                    else
                    {
                      v574 = RtlUIntAdd(HIDWORD(dwBytes), *((unsigned int *)v573 + 8), (char *)&dwBytes + 4);
                      v577 = v819;
                      if ( v574 >= 0 )
                        v577 = HIDWORD(dwBytes);
                      v819 = v577;
                    }
                    if ( v574 >= 0 )
                    {
                      v578 = v577;
                      v579 = GetProcessHeap();
                      v580 = HeapAlloc(v579, 8u, v578);
                      v416 = 0LL;
                      v581 = v580;
                      if ( v580 )
                      {
                        *v580 = *(_DWORD *)v573;
                        v919 = v580;
                        v574 = RtlULongLongAdd(v580, 4LL, &v919);
                        if ( v574 >= 0 )
                        {
                          memcpy_0(v919, v573[1], *(unsigned int *)v573);
                          v582 = RtlULongLongAdd(v919, *(unsigned int *)v573, &v919);
                          v416 = 0LL;
                          v574 = v582;
                          if ( v582 >= 0 )
                          {
                            v583 = v919;
                            *(_DWORD *)v919 = *((_DWORD *)v573 + 4);
                            v574 = RtlULongLongAdd(v583, 4LL, &v919);
                            if ( v574 >= 0 )
                            {
                              memcpy_0(v919, v573[3], *((unsigned int *)v573 + 4));
                              v584 = RtlULongLongAdd(v919, *((unsigned int *)v573 + 4), &v919);
                              v416 = 0LL;
                              v574 = v584;
                              if ( v584 >= 0 )
                              {
                                v585 = v919;
                                *(_DWORD *)v919 = *((_DWORD *)v573 + 8);
                                v574 = RtlULongLongAdd(v585, 4LL, &v919);
                                if ( v574 >= 0 )
                                {
                                  memcpy_0(v919, v573[5], *((unsigned int *)v573 + 8));
                                  v586 = RtlULongLongAdd(v919, *((unsigned int *)v573 + 8), &v919);
                                  v416 = 0LL;
                                  v574 = v586;
                                  if ( v586 >= 0 )
                                  {
                                    v806 = v581;
                                    v581 = 0LL;
                                    LODWORD(v771) = v819;
                                  }
                                }
                              }
                            }
                          }
                        }
                        if ( v581 )
                        {
                          v587 = GetProcessHeap();
                          HeapFree(v587, 0, v581);
                          v416 = 0LL;
                        }
                      }
                      else
                      {
                        v574 = -1073741801;
                      }
                    }
                    v496 = v574 | 0x10000000;
                    if ( v496 < 0 )
                      goto LABEL_971;
                    v901 = v416;
                    v862 = v416;
                    v902 = v416;
                    v863 = v416;
                    v814 = 8;
                    v588 = RtlUIntAdd(8LL, (unsigned int)v772, &v814);
                    v496 = v588 | 0x10000000;
                    if ( v588 < 0 )
                      goto LABEL_791;
                    v590 = (v814 + 7) & 0xFFFFFFF8;
                    if ( v590 >= v814 )
                    {
                      v830 = (v814 + 7) & 0xFFFFFFF8;
                      v591 = RtlUIntAdd(v590, v589, &v830);
                      v592 = v836;
                      v496 = v591;
                      if ( v591 >= 0 )
                        v592 = v830;
                      v836 = v592;
                    }
                    else
                    {
                      v496 = -1073741675;
                    }
                    if ( v496 < 0 )
                      goto LABEL_791;
                    if ( !v787 || (unsigned int)v786 <= 1 )
                      goto LABEL_790;
                    v593 = (unsigned int *)v787;
                    v594 = 0;
                    v919 = v787;
                    while ( 1 )
                    {
                      v595 = *v593;
                      v496 = RtlULongLongAdd(v593, 4LL, &v919);
                      if ( v496 < 0 )
                        break;
                      v496 = RtlULongLongAdd(v919, v595, &v919);
                      if ( v496 < 0 )
                        break;
                      v593 = (unsigned int *)v919;
                      if ( ++v594 )
                      {
                        v596 = *(_DWORD *)v919;
                        v496 = RtlULongLongAdd(v919, 4LL, &v919);
                        if ( v496 >= 0 )
                        {
                          v597 = v919;
                          v862 = v596;
                          if ( !v596 )
                            v597 = 0LL;
                          v901 = (size_t)v597;
                        }
                        break;
                      }
                    }
                    if ( v496 < 0 )
                      goto LABEL_791;
                    if ( (unsigned int)v786 > 2 )
                    {
                      v602 = (unsigned int *)v787;
                      v603 = 0;
                      v919 = v787;
                      while ( 1 )
                      {
                        v604 = *v602;
                        v496 = RtlULongLongAdd(v602, 4LL, &v919);
                        if ( v496 < 0 )
                          break;
                        v496 = RtlULongLongAdd(v919, v604, &v919);
                        if ( v496 < 0 )
                          goto LABEL_805;
                        v602 = (unsigned int *)v919;
                        if ( (unsigned int)++v603 >= 2 )
                        {
                          v606 = *(_DWORD *)v919;
                          v496 = RtlULongLongAdd(v919, 4LL, &v919);
                          if ( v496 >= 0 )
                          {
                            v607 = v919;
                            v863 = v606;
                            if ( !v606 )
                              v607 = 0LL;
                            v902 = (size_t)v607;
                          }
LABEL_805:
                          if ( v496 < 0 )
                            break;
                          HIDWORD(dwBytes) = 4;
                          v496 = RtlUIntAdd(4LL, v605, (char *)&dwBytes + 4);
                          if ( v496 < 0
                            || (v496 = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4), v496 < 0)
                            || (v496 = RtlUIntAdd(HIDWORD(dwBytes), v608, (char *)&dwBytes + 4), v496 < 0)
                            || (v496 = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4), v496 < 0) )
                          {
                            v610 = v833;
                            v416 = 0LL;
                          }
                          else
                          {
                            v496 = RtlUIntAdd(HIDWORD(dwBytes), v609, (char *)&dwBytes + 4);
                            v416 = 0LL;
                            v610 = v833;
                            if ( v496 >= 0 )
                              v610 = HIDWORD(dwBytes);
                            v833 = v610;
                          }
                          if ( v496 < 0 )
                            goto LABEL_971;
                          if ( v610 > 0x400000 )
                          {
                            v496 = -2147418113;
                            goto LABEL_971;
                          }
                          v793 = v610;
                          goto LABEL_792;
                        }
                      }
                    }
                    else
                    {
LABEL_790:
                      v496 = -1073741811;
                    }
LABEL_791:
                    v416 = 0LL;
LABEL_792:
                    if ( v496 < 0 )
                      goto LABEL_971;
                    v598 = v793;
                    v599 = GetProcessHeap();
                    v600 = HeapAlloc(v599, 8u, v598);
                    v416 = 0LL;
                    if ( v600 )
                    {
                      v601 = v600;
                      v822 = v600;
                      v496 = 0x10000000;
                    }
                    else
                    {
                      v601 = v822;
                      v496 = -805306345;
                    }
                    if ( v496 < 0 )
                      goto LABEL_971;
                    if ( !v806 || !v601 )
                    {
                      v496 = -2147024809;
                      goto LABEL_971;
                    }
                    v908[0] = v806;
                    v909 = (int)v771;
                    v910 = v793;
                    v908[1] = v601;
                    v911 = 0;
                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                      && (ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                    {
                      v612 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v908);
                      v613 = v793;
                      v496 = v612 | 0x10000000;
                      if ( v612 >= 0 )
                        v613 = v910;
                      v793 = v613;
                    }
                    else
                    {
                      LastError = GetLastError();
                      v496 = LastError;
                      if ( LastError > 0 )
                        v496 = (unsigned __int16)LastError | 0x80070000;
                      if ( v496 >= 0 )
                        v496 = -2147467259;
                      v613 = v793;
                    }
                    v416 = 0LL;
                    if ( v496 == -805306333 )
                    {
                      v496 = -2147024774;
                      goto LABEL_971;
                    }
                    if ( v496 < 0 )
                      goto LABEL_971;
                    pcchLength = 0LL;
                    HIDWORD(dwBytes) = 0;
                    v919 = v601;
                    if ( v613 < 4 )
                    {
                      v615 = -1073741762;
                      goto LABEL_892;
                    }
                    LODWORD(v772) = *v601;
                    v615 = RtlULongLongAdd(v601, 4LL, &v919);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    v615 = RtlUIntAdd(0LL, v616, (char *)&dwBytes + 4);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    if ( v617 - HIDWORD(dwBytes) < (unsigned int)v618 )
                      goto LABEL_858;
                    v790 = (SIZE_T)v919;
                    v818 = v618;
                    v615 = RtlULongLongAdd(v919, (unsigned int)v618, &v919);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    v615 = RtlUIntAdd(HIDWORD(dwBytes), v619, (char *)&dwBytes + 4);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    if ( v620 - HIDWORD(dwBytes) < (unsigned int)v621 )
                      goto LABEL_858;
                    v622 = *(unsigned int *)v919;
                    v615 = RtlULongLongAdd(v919, v621, &v919);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    v615 = RtlUIntAdd(HIDWORD(dwBytes), v623, (char *)&dwBytes + 4);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    if ( v624 - HIDWORD(dwBytes) < (unsigned int)v622 )
                      goto LABEL_858;
                    v785 = v919;
                    v615 = RtlULongLongAdd(v919, (unsigned int)v622, &v919);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    v615 = RtlUIntAdd(HIDWORD(dwBytes), (unsigned int)v622, (char *)&dwBytes + 4);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    if ( v625 - HIDWORD(dwBytes) < v626 )
                      goto LABEL_858;
                    LODWORD(v775) = *(_DWORD *)v919;
                    v615 = RtlULongLongAdd(v919, 4LL, &v919);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    v615 = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    if ( v627 - HIDWORD(dwBytes) < v628 )
                      goto LABEL_858;
                    v615 = RtlUIntAdd(HIDWORD(dwBytes), v628, (char *)&dwBytes + 4);
                    if ( v615 < 0 )
                      goto LABEL_891;
                    if ( v629 != HIDWORD(dwBytes) || (unsigned int)(v630 + v622 + v631) + 12LL != v629 )
                    {
LABEL_858:
                      v615 = -1073741762;
                      goto LABEL_891;
                    }
                    v632 = GetProcessHeap();
                    v633 = HeapAlloc(v632, 8u, 0x30uLL);
                    v416 = 0LL;
                    v634 = (size_t)v633;
                    if ( !v633 )
                    {
                      v615 = -1073741801;
LABEL_881:
                      v484 = (size_t *)pcchLength;
                      v654 = 0LL;
                      if ( v615 < 0 )
                      {
                        v654 = (_QWORD *)pcchLength;
                        v484 = 0LL;
                      }
                      v796 = v484;
                      if ( !v654 )
                      {
LABEL_892:
                        v496 = v615 | 0x10000000;
                        if ( v496 < 0 )
                          goto LABEL_971;
                        v869 = 0LL;
                        v662 = 0LL;
                        v825 = 0LL;
                        if ( !v484 || (pcchLength = v484[1]) == 0 || !*(_DWORD *)v484 )
                        {
                          v496 = -805306355;
                          goto LABEL_971;
                        }
                        v663 = *(unsigned int *)v484;
                        LODWORD(v771) = 0;
                        if ( !v663 )
                          goto LABEL_931;
                        v664 = v663 - 8;
                        v818 = v664;
                        v665 = MemoryAlloc(v664);
                        v416 = 0LL;
                        v785 = v665;
                        v666 = v665;
                        if ( !v665 )
                        {
                          v662 = v825;
                          goto LABEL_931;
                        }
                        v667 = (unsigned __int8 *)pcchLength;
                        v919 = (void *)0x7F1137FAB69605ELL;
                        v668 = 0;
                        LOBYTE(v769) = 0;
                        v669 = v666;
                        v782 = 0;
                        v670 = 0;
                        v671 = v664 & 7;
                        if ( (v664 & 7) != 0 )
                        {
                          v777 = -1;
                          v780 = 0;
                          v672 = 56;
                          do
                          {
                            v673 = *v667++;
                            if ( (int)v416 >= 4 )
                            {
                              v674 = (v673 << v672) | v780;
                              v780 = v674;
                            }
                            else
                            {
                              v674 = v780;
                              v670 |= v673 << (v672 - 32);
                            }
                            LODWORD(v416) = v416 + 1;
                            v672 -= 8;
                          }
                          while ( (int)v416 < v671 );
                          LODWORD(v416) = v670 ^ 0x92F65A5;
                          v675 = v674 ^ 0x699A899C;
                          v676 = 0;
                          v782 = v670 ^ 0x92F65A5;
                          v777 = v675;
                          if ( (v664 & 7) != 0 )
                          {
                            do
                            {
                              v790 = (SIZE_T)(v669 + 1);
                              if ( v676 >= 4 )
                              {
                                v675 = __ROL4__(v675, 8);
                                v677 = v675;
                              }
                              else
                              {
                                LODWORD(v416) = __ROL4__(v416, 8);
                                v677 = v416;
                              }
                              *v669 = v677;
                              ++v676;
                              v669 = (_BYTE *)v790;
                            }
                            while ( v676 < v671 );
                            LODWORD(v416) = v782;
                            v675 = v777;
                          }
                          if ( (unsigned int)v671 <= 4 )
                          {
                            v777 = 0;
                            v678 = 0;
                            if ( (unsigned int)v671 < 4 )
                            {
                              LODWORD(v416) = (unsigned int)v416 >> (8 * (4 - v671)) << (8 * (4 - v671));
                              v782 = v416;
                            }
LABEL_917:
                            v790 = v664 >> 3;
                            if ( v664 >> 3 )
                            {
                              v679 = v669 + 7;
                              v680 = HIDWORD(v919);
                              v681 = v667 + 2;
                              HIDWORD(dwBytes) = WORD2(v919);
                              LODWORD(v775) = WORD1(v919);
                              v682 = HIDWORD(v919) ^ 0xAB69605E;
                              LODWORD(v767) = 24670;
                              v683 = v790;
                              do
                              {
                                v684 = *(v681 - 1) | (*(v681 - 2) << 8);
                                v685 = v681[2] << 8;
                                v686 = *v681;
                                v681 += 8;
                                v687 = *(v681 - 7) | ((v686 | (v684 << 8)) << 8);
                                v688 = v687 ^ v416;
                                v689 = *(v681 - 3) | ((*(v681 - 4) | ((*(v681 - 5) | v685) << 8)) << 8);
                                v690 = v688 ^ v689 ^ v678 ^ v680 ^ 0xAB69605E;
                                v691 = (__ROL4__(v690, 10) + HIDWORD(dwBytes) * __ROL4__(v690 + 1419157410, 5)) ^ v688;
                                v692 = (WORD1(v919) * __ROR4__(v680 + v691, 9) - __ROL4__(v691, 2)) ^ v690;
                                v693 = (v767 * (v692 - HIDWORD(dwBytes)) - (v692 >> 13)) ^ v691;
                                v694 = (HIWORD(v919) * __ROL4__(v693 ^ WORD1(v919), 6) - __ROL4__(v693, 2)) ^ v692;
                                v695 = (v680 - (v694 ^ 0xAB69605E)) ^ v693;
                                v696 = (v775 * (v695 ^ HIDWORD(dwBytes))) ^ __ROR4__(v695, 6) ^ v694;
                                v697 = (__ROL4__(v696, 2) + v767 * __ROR4__(v696 + v680, 15)) ^ v695;
                                v698 = (HIWORD(v919) * __ROR4__(v697 + 1419157410, 14) - __ROL4__(v697, 8)) ^ v696;
                                v699 = __ROR4__(v698, 10) ^ (HIDWORD(dwBytes) * __ROR4__(v698 ^ 0xAB69605E, 12)) ^ v697;
                                v700 = (v699 >> 10) ^ (WORD1(v919) * (HIWORD(v919) ^ v699)) ^ v698;
                                v701 = (HIWORD(v919) * (v767 + __ROR4__(~v700, 5))) ^ v699;
                                v702 = (v701 - HIWORD(v919)) ^ 0xAB69605E ^ v700;
                                v703 = ((v702 >> 2) + HIDWORD(dwBytes) * __ROL4__(v702 ^ HIWORD(v919), 2)) ^ v701;
                                v704 = (__ROL4__(v703, 7) + WORD1(v919) * __ROR4__(v703 - v680, 6)) ^ v702;
                                v705 = (v767 * (v704 ^ HIDWORD(dwBytes)) + __ROR4__(v704, 9)) ^ v703;
                                v706 = (__ROL4__(v705, 7) + HIWORD(v919) * __ROL4__(v705 ^ WORD1(v919), 5)) ^ v704;
                                v707 = v706 ^ v682 ^ v705;
                                v708 = (HIDWORD(dwBytes) * (__ROR4__(v707, 3) - WORD1(v919))) ^ v706;
                                v709 = (v767 * __ROR4__(v708 - v680, 1) - __ROR4__(v708, 6)) ^ v707;
                                v710 = (__ROL4__(v709, 14) + HIWORD(v919) * __ROL4__(v709 - 1419157410, 3)) ^ v708;
                                v711 = (HIDWORD(dwBytes) * __ROL4__(v710 - 1419157410, 15) - __ROR4__(v710, 14)) ^ v709;
                                v712 = (v711 >> 3) ^ (WORD1(v919) * (v711 ^ v767)) ^ v710;
                                v777 = v780 ^ v712;
                                v780 = v689;
                                v713 = v670 ^ __ROL4__(v712, 2) ^ (v767 * __ROL4__(v712 ^ v680, 4));
                                v670 = v687;
                                v782 = v713 ^ v711;
                                *(v679 - 4) = v713 ^ v711;
                                v782 = __ROR4__(v782, 8);
                                *v679 = v777;
                                v679 += 8;
                                v777 = __ROR4__(v777, 8);
                                *(v679 - 13) = v782;
                                v782 = __ROR4__(v782, 8);
                                *(v679 - 9) = v777;
                                v777 = __ROR4__(v777, 8);
                                *(v679 - 14) = v782;
                                v782 = __ROR4__(v782, 8);
                                *(v679 - 10) = v777;
                                v777 = __ROR4__(v777, 8);
                                *(v679 - 15) = v782;
                                *(v679 - 11) = v777;
                                LODWORD(v416) = __ROR4__(v782, 8);
                                v678 = __ROR4__(v777, 8);
                                v782 = v416;
                                v777 = v678;
                                --v683;
                              }
                              while ( v683 );
                              v668 = v769;
                              v4 = dwBytes;
                              v484 = (size_t *)v796;
                              v664 = v818;
                              v666 = v785;
                            }
                            v416 = 0LL;
                            for ( i = 0LL; i < v664; ++i )
                              v668 ^= v666[i];
                            if ( v668 == *(_QWORD *)(v664 + pcchLength) )
                            {
                              v715 = (int)v771;
                              v662 = (wchar_t *)v666;
                              v825 = (wchar_t *)v666;
                              v666 = 0LL;
                              v869 = v664;
                            }
                            else
                            {
                              v662 = v825;
                              v715 = -1073425151;
                            }
                            if ( v666 )
                            {
                              MemoryFree(v666);
                              v662 = v825;
                              v416 = 0LL;
                            }
                            if ( v715 >= 0 )
                            {
                              v716 = v869;
                              v496 = 0x10000000;
                              psz = v662;
                              v662 = 0LL;
                              v825 = 0LL;
                              v815 = v869;
                              goto LABEL_932;
                            }
LABEL_931:
                            v716 = v815;
                            v496 = -805306367;
LABEL_932:
                            if ( v662 )
                            {
                              v717 = GetProcessHeap();
                              HeapFree(v717, 0, v662);
                              v716 = v815;
                              v416 = 0LL;
                              v825 = 0LL;
                            }
                            if ( v496 >= 0 )
                            {
                              v780 = 0;
                              v796 = (void *)psz;
                              if ( v716 >= 4 )
                              {
                                LODWORD(v775) = *(_DWORD *)psz;
                                v718 = RtlULongLongAdd(psz, 4LL, &v796);
                                if ( v718 < 0 )
                                  goto LABEL_970;
                                v718 = RtlUIntAdd(0LL, 4LL, &v780);
                                if ( v718 < 0 )
                                  goto LABEL_970;
                                if ( v719 - v780 >= 4 )
                                {
                                  v720 = *(unsigned int *)v796;
                                  v718 = RtlULongLongAdd(v796, 4LL, &v796);
                                  if ( v718 < 0 )
                                    goto LABEL_970;
                                  v718 = RtlUIntAdd(v780, 4LL, &v780);
                                  if ( v718 < 0 )
                                    goto LABEL_970;
                                  if ( v721 - v780 >= (unsigned int)v720 )
                                  {
                                    v718 = RtlUIntAdd(v780, (unsigned int)v720, &v780);
                                    if ( v718 < 0 )
                                      goto LABEL_970;
                                    v724 = v796;
                                    if ( (unsigned __int64)v722 + v723 >= (unsigned __int64)v796 + v720
                                      && v723 + v722 - (_QWORD)v796 - v720 < 8 )
                                    {
                                      v780 = v416;
                                      v725 = (void *)v416;
                                      v788 = (void *)v416;
                                      v718 = v416;
                                      if ( !v796 )
                                      {
LABEL_958:
                                        if ( (_DWORD)v720 )
                                        {
                                          v733 = GetProcessHeap();
                                          v725 = HeapAlloc(v733, 8u, v720);
                                          v416 = 0LL;
                                          v788 = v725;
                                          if ( !v725 )
                                          {
                                            v718 = -1073741801;
                                            goto LABEL_967;
                                          }
                                          v718 = 0;
                                        }
                                        if ( v724 )
                                        {
                                          memcpy_0(v725, v724, v720);
                                          v725 = v788;
                                          v416 = 0LL;
                                        }
                                        v838 = v725;
                                        v837 = __PAIR64__(v720, v780);
LABEL_967:
                                        if ( v718 < 0 || (_DWORD)v775 == (_DWORD)v837 )
                                          goto LABEL_970;
                                        goto LABEL_969;
                                      }
                                      v718 = RtlULongLongAdd(v796, (unsigned int)v720, &v790);
                                      if ( v718 < 0 )
                                        goto LABEL_967;
                                      v727 = v790;
                                      if ( (unsigned __int64)v724 < v790 )
                                      {
                                        while ( 1 )
                                        {
                                          v718 = RtlULongLongAdd(v726, 4LL, &v790);
                                          if ( v718 < 0 )
                                            break;
                                          if ( v790 > v729 )
                                            goto LABEL_961;
                                          v730 = RtlUIntAdd(4LL, *v728, &v772);
                                          v718 = v730;
                                          if ( v730 >= 0 )
                                            v732 = (unsigned int)v772;
                                          v864 = v732;
                                          if ( v730 < 0 )
                                            break;
                                          v718 = RtlULongLongAdd(v731, v732, &v818);
                                          if ( v718 < 0 )
                                            break;
                                          v726 = v818;
                                          if ( v818 > v727 )
                                            goto LABEL_961;
                                          ++v780;
                                          if ( v818 >= v727 )
                                            goto LABEL_956;
                                        }
                                        v416 = 0LL;
                                        goto LABEL_967;
                                      }
LABEL_956:
                                      if ( v726 == v727 )
                                      {
                                        v725 = v788;
                                        v416 = 0LL;
                                        goto LABEL_958;
                                      }
LABEL_961:
                                      v718 = -1073741811;
                                      v416 = 0LL;
LABEL_970:
                                      v496 = v718 | 0x10000000;
                                      goto LABEL_971;
                                    }
                                  }
                                }
                              }
LABEL_969:
                              v718 = -1073741762;
                              goto LABEL_970;
                            }
LABEL_971:
                            v734 = (void *)v766;
                            if ( v766 )
                            {
                              v735 = GetProcessHeap();
                              HeapFree(v735, 0, v734);
                              v416 = 0LL;
                            }
                            v736 = v840;
                            if ( v840 )
                            {
                              v737 = (void *)*((_QWORD *)v840 + 1);
                              if ( v737 )
                              {
                                v738 = GetProcessHeap();
                                HeapFree(v738, 0, v737);
                                v736[1] = 0LL;
                              }
                              v739 = (void *)v736[3];
                              if ( v739 )
                              {
                                v740 = GetProcessHeap();
                                HeapFree(v740, 0, v739);
                                v736[3] = 0LL;
                              }
                              v741 = (void *)v736[5];
                              if ( v741 )
                              {
                                v742 = GetProcessHeap();
                                HeapFree(v742, 0, v741);
                                v736[5] = 0LL;
                              }
                              v743 = GetProcessHeap();
                              HeapFree(v743, 0, v736);
                              v416 = 0LL;
                              v840 = 0LL;
                            }
                            v744 = v806;
                            if ( v806 )
                            {
                              v745 = GetProcessHeap();
                              HeapFree(v745, 0, v744);
                              v416 = 0LL;
                            }
                            v746 = v822;
                            if ( v822 )
                            {
                              v747 = GetProcessHeap();
                              HeapFree(v747, 0, v746);
                              v416 = 0LL;
                            }
                            if ( v484 )
                            {
                              v748 = (void *)v484[1];
                              if ( v748 )
                              {
                                v749 = GetProcessHeap();
                                HeapFree(v749, 0, v748);
                                v484[1] = 0LL;
                              }
                              v750 = (void *)v484[3];
                              if ( v750 )
                              {
                                v751 = GetProcessHeap();
                                HeapFree(v751, 0, v750);
                                v484[3] = 0LL;
                              }
                              v752 = (void *)v484[5];
                              if ( v752 )
                              {
                                v753 = GetProcessHeap();
                                HeapFree(v753, 0, v752);
                                v484[5] = 0LL;
                              }
                              v754 = GetProcessHeap();
                              HeapFree(v754, 0, v484);
                              v416 = 0LL;
                            }
                            v755 = (wchar_t *)psz;
                            if ( psz )
                            {
                              v756 = GetProcessHeap();
                              HeapFree(v756, 0, v755);
                              v416 = 0LL;
                            }
                            if ( v496 >= 0 )
                            {
                              if ( (_DWORD)v837 )
                              {
                                v757 = (unsigned int *)v838;
                                if ( v838 )
                                {
                                  pcchLength = (size_t)v838;
                                  if ( (int)RtlULongLongAdd(v838, 4LL, &pcchLength) >= 0 )
                                  {
                                    v760 = (int *)pcchLength;
                                    v877 = v759;
                                    if ( !v759 )
                                      v760 = (int *)v416;
                                    v916 = v760;
                                    if ( v759 == 4 )
                                    {
                                      v816 = *v760;
                                      if ( v816 >= 0 && v758 > 1 )
                                      {
                                        v766 = (size_t)v757;
                                        v761 = 4LL;
                                        while ( (int)RtlULongLongAdd(v757, v761, &v766) >= 0
                                             && (int)RtlULongLongAdd(v766, *v757, &v766) >= 0 )
                                        {
                                          if ( v762 != -1 )
                                          {
                                            if ( (int)RtlULongLongAdd(v766, v761, &v766) >= 0 )
                                            {
                                              v764 = (_QWORD *)v766;
                                              v904 = v763;
                                              if ( !v763 )
                                                v764 = (_QWORD *)v416;
                                              v917 = v764;
                                              if ( v763 == 8 )
                                                v918 = *v764;
                                            }
                                            goto LABEL_633;
                                          }
                                          v757 = (unsigned int *)v766;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_633;
                          }
                          v678 = v675 >> (8 * (8 - v671)) << (8 * (8 - v671));
                        }
                        else
                        {
                          v678 = 0;
                        }
                        v777 = v678;
                        goto LABEL_917;
                      }
                      v655 = (void *)v654[1];
                      if ( v655 )
                      {
                        v656 = GetProcessHeap();
                        HeapFree(v656, 0, v655);
                        v654[1] = 0LL;
                      }
                      v657 = (void *)v654[3];
                      if ( v657 )
                      {
                        v658 = GetProcessHeap();
                        HeapFree(v658, 0, v657);
                        v654[3] = 0LL;
                      }
                      v659 = (void *)v654[5];
                      if ( v659 )
                      {
                        v660 = GetProcessHeap();
                        HeapFree(v660, 0, v659);
                        v654[5] = 0LL;
                      }
                      v661 = GetProcessHeap();
                      HeapFree(v661, 0, v654);
                      v796 = v484;
LABEL_891:
                      v416 = 0LL;
                      goto LABEL_892;
                    }
                    v635 = (const void *)v790;
                    if ( v790 )
                    {
                      *(_DWORD *)v633 = (_DWORD)v772;
                      v636 = GetProcessHeap();
                      v637 = v818;
                      v638 = HeapAlloc(v636, 8u, v818);
                      v416 = 0LL;
                      if ( !v638 )
                        goto LABEL_862;
                      *(_QWORD *)(v634 + 8) = v638;
                      memcpy_0(v638, v635, v637);
                      v416 = 0LL;
                    }
                    else
                    {
                      *(_DWORD *)v633 = 0;
                      v633[1] = 0LL;
                    }
                    v639 = v785;
                    if ( v785 )
                    {
                      *(_DWORD *)(v634 + 16) = v622;
                      v640 = GetProcessHeap();
                      v641 = HeapAlloc(v640, 8u, v622);
                      v416 = 0LL;
                      if ( !v641 )
                        goto LABEL_862;
                      *(_QWORD *)(v634 + 24) = v641;
                      memcpy_0(v641, v639, v622);
                      v416 = 0LL;
                    }
                    else
                    {
                      *(_DWORD *)(v634 + 16) = 0;
                      *(_QWORD *)(v634 + 24) = 0LL;
                    }
                    v642 = v919;
                    if ( !v919 )
                    {
                      *(_DWORD *)(v634 + 32) = 0;
                      *(_QWORD *)(v634 + 40) = 0LL;
                      goto LABEL_872;
                    }
                    v643 = v775;
                    *(_DWORD *)(v634 + 32) = v775;
                    v644 = v643;
                    v645 = GetProcessHeap();
                    v646 = HeapAlloc(v645, 8u, v644);
                    v416 = 0LL;
                    if ( v646 )
                    {
                      *(_QWORD *)(v634 + 40) = v646;
                      memcpy_0(v646, v642, v644);
                      v416 = 0LL;
LABEL_872:
                      pcchLength = v634;
                      v615 = 0;
                      v634 = 0LL;
LABEL_873:
                      if ( v634 )
                      {
                        v647 = *(void **)(v634 + 8);
                        if ( v647 )
                        {
                          v648 = GetProcessHeap();
                          HeapFree(v648, 0, v647);
                          *(_QWORD *)(v634 + 8) = 0LL;
                        }
                        v649 = *(void **)(v634 + 24);
                        if ( v649 )
                        {
                          v650 = GetProcessHeap();
                          HeapFree(v650, 0, v649);
                          *(_QWORD *)(v634 + 24) = 0LL;
                        }
                        v651 = *(void **)(v634 + 40);
                        if ( v651 )
                        {
                          v652 = GetProcessHeap();
                          HeapFree(v652, 0, v651);
                          *(_QWORD *)(v634 + 40) = 0LL;
                        }
                        v653 = GetProcessHeap();
                        HeapFree(v653, 0, (LPVOID)v634);
                        v416 = 0LL;
                      }
                      goto LABEL_881;
                    }
LABEL_862:
                    v615 = -1073741801;
                    goto LABEL_873;
                  }
                  v499 = v486;
                  v818 = v486;
                  if ( !v486
                    || (v790 = v486 + 8LL,
                        v500 = MemoryAlloc(v790),
                        v416 = 0LL,
                        pcchLength = (size_t)v500,
                        (v501 = (SIZE_T)v500) == 0) )
                  {
                    v498 = -1073741823;
LABEL_741:
                    v564 = v854;
                    if ( v854 )
                    {
                      v565 = GetProcessHeap();
                      HeapFree(v565, 0, v564);
                      v416 = 0LL;
                      v854 = 0LL;
                    }
                    if ( v497 )
                    {
                      v566 = (void *)v497[1];
                      if ( v566 )
                      {
                        v567 = GetProcessHeap();
                        HeapFree(v567, 0, v566);
                        v497[1] = 0LL;
                      }
                      v568 = (void *)v497[3];
                      if ( v568 )
                      {
                        v569 = GetProcessHeap();
                        HeapFree(v569, 0, v568);
                        v497[3] = 0LL;
                      }
                      v570 = (void *)v497[5];
                      if ( v570 )
                      {
                        v571 = GetProcessHeap();
                        HeapFree(v571, 0, v570);
                        v497[5] = 0LL;
                      }
                      v572 = GetProcessHeap();
                      HeapFree(v572, 0, v497);
                      v416 = 0LL;
                    }
                    goto LABEL_751;
                  }
                  v502 = (unsigned __int8 *)v766;
                  v503 = 0;
                  LOBYTE(v769) = 0;
                  v504 = 0LL;
                  if ( v499 )
                  {
                    do
                    {
                      v503 ^= *(_BYTE *)(v504 + v766);
                      ++v504;
                    }
                    while ( v504 < v499 );
                    LOBYTE(v769) = v503;
                  }
                  v505 = (_BYTE *)v501;
                  v775 = v501;
                  v919 = (void *)0xC81ECB17B1B54A58LL;
                  LODWORD(v767) = 0;
                  v506 = -1;
                  HIDWORD(dwBytes) = 0;
                  v783 = 0;
                  v779 = -1;
                  v507 = v499 & 7;
                  if ( (v499 & 7) != 0 )
                  {
                    LODWORD(v767) = 0;
                    HIDWORD(dwBytes) = 0;
                    v508 = 56;
                    v509 = 0;
                    v510 = 0;
                    do
                    {
                      v511 = *v502++;
                      if ( (int)v416 >= 4 )
                        v509 |= v511 << v508;
                      else
                        v510 |= v511 << (v508 - 32);
                      LODWORD(v416) = v416 + 1;
                      v508 -= 8;
                    }
                    while ( (int)v416 < v507 );
                    v505 = (_BYTE *)v775;
                    HIDWORD(dwBytes) = v510;
                    LODWORD(v767) = v509;
                    v512 = v509 ^ 0x42F6B18D;
                    LODWORD(v416) = v510 ^ 0xB17A307A;
                    v513 = 0;
                    v783 = v510 ^ 0xB17A307A;
                    v779 = v509 ^ 0x42F6B18D;
                    if ( (v499 & 7) != 0 )
                    {
                      do
                      {
                        v785 = v505 + 1;
                        if ( v513 >= 4 )
                        {
                          v512 = __ROL4__(v512, 8);
                          v514 = v512;
                        }
                        else
                        {
                          LODWORD(v416) = __ROL4__(v416, 8);
                          v514 = v416;
                        }
                        *v505 = v514;
                        ++v513;
                        v505 = v785;
                      }
                      while ( v513 < v507 );
                      LODWORD(v416) = v783;
                      v512 = v779;
                      v775 = (SIZE_T)v785;
                    }
                    if ( (unsigned int)v507 > 4 )
                    {
                      v506 = v512 >> (8 * (8 - v507)) << (8 * (8 - v507));
                      v779 = v506;
LABEL_718:
                      v505 = (_BYTE *)v775;
                      goto LABEL_719;
                    }
                    v506 = 0;
                    v779 = 0;
                    if ( (unsigned int)v507 < 4 )
                    {
                      LODWORD(v416) = (unsigned int)v416 >> (8 * (4 - v507)) << (8 * (4 - v507));
                      v783 = v416;
                      goto LABEL_718;
                    }
                  }
LABEL_719:
                  v785 = (void *)(v499 >> 3);
                  if ( v499 >> 3 )
                  {
                    v515 = (char *)v785;
                    v516 = v767;
                    v517 = HIDWORD(dwBytes);
                    LODWORD(v775) = HIDWORD(v919) ^ 0xB1B54A58;
                    v518 = v502 + 2;
                    v519 = HIDWORD(v919) ^ 0xB1B54A58;
                    v800 = WORD1(v919);
                    v520 = WORD2(v919);
                    v788 = v505 + 7;
                    do
                    {
                      v521 = v518[1] | ((*v518 | ((*(v518 - 1) | (*(v518 - 2) << 8)) << 8)) << 8);
                      v522 = v518[5] | ((v518[4] | ((v518[3] | (v518[2] << 8)) << 8)) << 8);
                      v785 = v518 + 8;
                      v523 = v522 ^ v506;
                      v524 = v521 ^ HIDWORD(v919) ^ (v523 - 19032) ^ v416;
                      v525 = (__ROR4__(v524, 7) + WORD1(v919) * __ROR4__(v524 ^ HIDWORD(v919), 15)) ^ v523;
                      v526 = (v520 * __ROR4__(v525 - 1313519016, 9) - __ROR4__(v525, 10)) ^ v524;
                      v527 = (__ROL4__(v526, 5) + HIWORD(v919) * __ROL4__(v526 ^ v520, 4)) ^ v525;
                      v528 = (HIDWORD(v919) - (v527 ^ 0xB1B54A58)) ^ v526;
                      v529 = (WORD1(v919) * (v528 - 19032) - (v528 >> 6)) ^ v527;
                      v530 = (19032 * (v520 ^ __ROR4__(v529, 15))) ^ v528;
                      v531 = (v520 * (HIWORD(v919) + __ROR4__(~v530, 3))) ^ v529;
                      v532 = (v531 - HIDWORD(v919) - 19032) ^ v530;
                      v533 = (v800 * (v532 ^ HIWORD(v919))) ^ __ROR4__(v532, 10) ^ v531;
                      v534 = __ROR4__(v533, 3) ^ (v520 * __ROL4__(v533 ^ 0x4A58, 6)) ^ v532;
                      v535 = (19032 * (__ROR4__(v534, 15) - HIWORD(v919))) ^ v533;
                      v536 = (v535 >> 15) ^ (19032 * __ROL4__(v535 - v520, 3)) ^ (v535 >> 1) ^ (19032
                                                                                              * (v535 ^ HIWORD(v919))) ^ v534;
                      v537 = (WORD1(v919) * (v536 - v520) - (v536 >> 13)) ^ v535;
                      v538 = __ROR4__(v537, 11) ^ (v520 * __ROR4__(-1313519016 - v537, 9)) ^ v536;
                      v539 = (v538 - HIWORD(v919) + 1313519016) ^ v537;
                      v540 = (19032 * (v539 ^ WORD1(v919)) - __ROR4__(v539, 7)) ^ v538;
                      v541 = (WORD1(v919) * __ROL4__(v540 ^ HIWORD(v919), 4) - __ROR4__(v540, 16)) ^ v539;
                      v542 = (__ROR4__(v541, 4) + v520 * __ROR4__(-1313519016 - v541, 10)) ^ v540;
                      v543 = __ROR4__(v542, 9) ^ (HIWORD(v919) * __ROR4__(v542 + 1313519016, 4)) ^ v541;
                      v544 = (19032 * __ROL4__(v543 ^ HIDWORD(v919), 8) - __ROL4__(v543, 2)) ^ v542;
                      v545 = (WORD1(v919) * __ROR4__(HIDWORD(v919) - v544, 11) - __ROR4__(v544, 12)) ^ v543;
                      v546 = (v545 >> 8) ^ (v520 * (v545 ^ WORD1(v919))) ^ v544;
                      v547 = v788;
                      v783 = v517 ^ v546;
                      v517 = v521;
                      v779 = v516 ^ v519 ^ v546 ^ v545;
                      v516 = v522;
                      *((char *)v788 - 4) = v783;
                      v783 = __ROR4__(v783, 8);
                      *v547 = v779;
                      v779 = __ROR4__(v779, 8);
                      *(v547 - 5) = v783;
                      v783 = __ROR4__(v783, 8);
                      *(v547 - 1) = v779;
                      v779 = __ROR4__(v779, 8);
                      *(v547 - 6) = v783;
                      v783 = __ROR4__(v783, 8);
                      *(v547 - 2) = v779;
                      v779 = __ROR4__(v779, 8);
                      *(v547 - 7) = v783;
                      *(v547 - 3) = v779;
                      LODWORD(v416) = __ROR4__(v783, 8);
                      v506 = __ROR4__(v779, 8);
                      v788 = v547 + 8;
                      v518 = (unsigned __int8 *)v785;
                      v783 = v416;
                      v779 = v506;
                      --v515;
                    }
                    while ( v515 );
                    v503 = v769;
                    v4 = dwBytes;
                    v484 = (size_t *)v796;
                    v497 = v802;
                    v499 = v818;
                  }
                  v548 = v503;
                  v549 = (void *)pcchLength;
                  *(_QWORD *)(pcchLength + v499) = v548;
                  v550 = v790;
                  v896 = v790;
                  v854 = v549;
                  v897 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                  v898 = 8LL;
                  v900 = 160LL;
                  v899 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                  v551 = GetProcessHeap();
                  v552 = HeapAlloc(v551, 8u, 0x30uLL);
                  v416 = 0LL;
                  v553 = v552;
                  if ( v552 )
                  {
                    *v552 = v550;
                    v554 = GetProcessHeap();
                    v555 = HeapAlloc(v554, 8u, v550);
                    v416 = 0LL;
                    if ( !v555 )
                      goto LABEL_729;
                    *((_QWORD *)v553 + 1) = v555;
                    memcpy_0(v555, (const void *)pcchLength, v550);
                    v553[4] = 160;
                    v556 = GetProcessHeap();
                    v557 = HeapAlloc(v556, 8u, 0xA0uLL);
                    v416 = 0LL;
                    if ( !v557 )
                      goto LABEL_729;
                    *((_QWORD *)v553 + 3) = v557;
                    *v557 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                    v557[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                    v557[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                    v557[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                    v557[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                    v557[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                    v557[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                    v557[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                    v557[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                    v557[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                    v553[8] = 8;
                    v558 = GetProcessHeap();
                    v559 = HeapAlloc(v558, 8u, 8uLL);
                    v416 = 0LL;
                    if ( v559 )
                    {
                      *((_QWORD *)v553 + 5) = v559;
                      v497 = v553;
                      *v559 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                      v498 = 0;
                      v553 = 0LL;
                    }
                    else
                    {
LABEL_729:
                      v498 = -1073741801;
                    }
                    if ( v553 )
                    {
                      v790 = *((_QWORD *)v553 + 1);
                      if ( v790 )
                      {
                        v560 = GetProcessHeap();
                        HeapFree(v560, 0, (LPVOID)v790);
                        *((_QWORD *)v553 + 1) = 0LL;
                      }
                      v790 = *((_QWORD *)v553 + 3);
                      if ( v790 )
                      {
                        v561 = GetProcessHeap();
                        HeapFree(v561, 0, (LPVOID)v790);
                        *((_QWORD *)v553 + 3) = 0LL;
                      }
                      v790 = *((_QWORD *)v553 + 5);
                      if ( v790 )
                      {
                        v562 = GetProcessHeap();
                        HeapFree(v562, 0, (LPVOID)v790);
                        *((_QWORD *)v553 + 5) = 0LL;
                      }
                      v563 = GetProcessHeap();
                      HeapFree(v563, 0, v553);
                      v416 = 0LL;
                    }
                  }
                  else
                  {
                    v498 = -1073741801;
                  }
                  if ( v498 >= 0 )
                  {
                    v840 = v497;
                    v497 = 0LL;
                  }
                  goto LABEL_741;
                }
              }
            }
LABEL_633:
            v423 = v770;
LABEL_634:
            v430 = v768;
LABEL_635:
            v786 = 0LL;
            v448 = v787;
            if ( v787 )
            {
              v449 = GetProcessHeap();
              HeapFree(v449, 0, v448);
              v416 = 0LL;
              v787 = 0LL;
            }
            v837 = 0LL;
            v450 = v838;
            if ( v838 )
            {
              v451 = GetProcessHeap();
              HeapFree(v451, 0, v450);
              v416 = 0LL;
              v838 = 0LL;
            }
            if ( v423 )
            {
              v452 = GetProcessHeap();
              HeapFree(v452, 0, v423);
              v416 = 0LL;
            }
            if ( v430 )
            {
              v453 = GetProcessHeap();
              HeapFree(v453, 0, v430);
              v416 = 0LL;
            }
            goto LABEL_643;
          }
          v475 = (unsigned int *)v787;
          v788 = v787;
          if ( !v447 )
          {
LABEL_677:
            v479 = RtlULongLongAdd(v475, 4LL, &v791);
            v416 = 0LL;
            if ( v479 < 0 || v480 + 3 > (_DWORD *)((char *)v787 + HIDWORD(v786)) )
              goto LABEL_633;
            v481 = v791;
            *v480 = 8;
            v474 = 4;
            *v481 = v894;
            goto LABEL_680;
          }
          while ( (int)RtlUIntAdd(4LL, *v475, &v775) >= 0 )
          {
            v860 = v775;
            if ( (int)RtlULongLongAdd(v476, (unsigned int)v775, &v788) < 0 )
            {
              v423 = v770;
              v416 = 0LL;
              goto LABEL_634;
            }
            v475 = (unsigned int *)v788;
            if ( v478 + 1 >= v477 )
              goto LABEL_677;
          }
LABEL_651:
          v416 = 0LL;
          goto LABEL_633;
        }
        v465 = (unsigned int *)v787;
        v788 = v787;
        if ( v447 )
        {
          while ( (int)RtlUIntAdd(4LL, *v465, &v775) >= 0 )
          {
            v859 = v775;
            if ( (int)RtlULongLongAdd(v466, (unsigned int)v775, &v788) < 0 )
              break;
            v465 = (unsigned int *)v788;
            if ( v468 + 1 >= v467 )
              goto LABEL_663;
          }
          goto LABEL_651;
        }
LABEL_663:
        v469 = RtlULongLongAdd(v465, 4LL, &v791);
        v416 = 0LL;
        v471 = v469;
        if ( v469 < 0 || (char *)v470 + v431 + 4 > (char *)v787 + HIDWORD(v786) )
          goto LABEL_633;
        v472 = v802;
        v473 = v791;
        *v470 = v431;
        memcpy_0(v473, v472, v431);
        v447 = v786 + 1;
        LODWORD(v786) = v786 + 1;
        v416 = 0LL;
      }
      else
      {
        v471 = -1073741811;
      }
      if ( v471 < 0 )
        goto LABEL_633;
      v464 = 4;
      goto LABEL_669;
    }
    memcpy_0(v12, v906, v871);
    v14 = v871;
    v772 = v13;
    v874 = __rdtsc();
    v15 = RtlUIntAdd(4LL, 4LL, &v771);
    v16 = v795;
    v4 = v15;
    dwBytes = (unsigned int)v15;
    if ( v15 >= 0 )
      v16 = (unsigned int)v771;
    v795 = v16;
    if ( v15 < 0 )
      goto LABEL_603;
    v17 = RtlUIntAdd(0LL, v16, (char *)&dwBytes + 4);
    v4 = v17 | 0x10000000;
    LODWORD(dwBytes) = v17 | 0x10000000;
    if ( v17 < 0 )
      goto LABEL_603;
    v18 = RtlUIntAdd(4LL, (unsigned int)v10, &v771);
    LODWORD(dwBytes) = v18;
    v4 = v18;
    if ( v18 >= 0 )
      v19 = (unsigned int)v771;
    v795 = v19;
    if ( v18 < 0 )
      goto LABEL_603;
    v20 = RtlUIntAdd(HIDWORD(dwBytes), v19, (char *)&dwBytes + 4);
    v4 = v21 | v20;
    LODWORD(dwBytes) = v21 | v20;
    if ( (v21 | v20) < 0 )
      goto LABEL_603;
    v22 = RtlUIntAdd(4LL, v14, &v771);
    LODWORD(dwBytes) = v22;
    v4 = v22;
    if ( v22 >= 0 )
      v23 = (unsigned int)v771;
    v795 = v23;
    if ( v22 < 0 )
      goto LABEL_603;
    v24 = RtlUIntAdd(HIDWORD(dwBytes), v23, (char *)&dwBytes + 4);
    v4 = v25 | v24;
    LODWORD(dwBytes) = v25 | v24;
    if ( (v25 | v24) < 0 )
      goto LABEL_603;
    v26 = RtlUIntAdd(4LL, 8LL, &v771);
    LODWORD(dwBytes) = v26;
    v4 = v26;
    if ( v26 >= 0 )
      v27 = (unsigned int)v771;
    v795 = v27;
    if ( v26 < 0 )
      goto LABEL_603;
    v28 = RtlUIntAdd(HIDWORD(dwBytes), v27, (char *)&dwBytes + 4);
    v4 = v30 | v28;
    LODWORD(dwBytes) = v30 | v28;
    if ( (v30 | v28) < 0 )
      goto LABEL_603;
    if ( StringCchLengthW(psz, v29, &pcchLength) < 0 )
      goto LABEL_49;
    v31 = RtlUIntAdd(4LL, (unsigned int)(2 * (pcchLength + 1)), &v771);
    LODWORD(dwBytes) = v31;
    v4 = v31;
    if ( v31 >= 0 )
      v32 = (unsigned int)v771;
    v795 = v32;
    if ( v31 < 0 )
      goto LABEL_603;
    v33 = RtlUIntAdd(HIDWORD(dwBytes), v32, (char *)&dwBytes + 4);
    v4 = v33 | 0x10000000;
    LODWORD(dwBytes) = v33 | 0x10000000;
    if ( v33 < 0 )
      goto LABEL_603;
    v34 = RtlUIntAdd(4LL, 4LL, &v771);
    LODWORD(dwBytes) = v34;
    v4 = v34;
    if ( v34 >= 0 )
      v35 = (unsigned int)v771;
    v795 = v35;
    if ( v34 < 0 )
      goto LABEL_603;
    v36 = RtlUIntAdd(HIDWORD(dwBytes), v35, (char *)&dwBytes + 4);
    v4 = v37 | v36;
    LODWORD(dwBytes) = v37 | v36;
    if ( (v37 | v36) < 0 )
      goto LABEL_603;
    v38 = RtlUIntAdd(4LL, 4LL, &v771);
    LODWORD(dwBytes) = v38;
    v4 = v38;
    if ( v38 >= 0 )
      v39 = (unsigned int)v771;
    v795 = v39;
    if ( v38 < 0 )
      goto LABEL_603;
    v40 = RtlUIntAdd(HIDWORD(dwBytes), v39, (char *)&dwBytes + 4);
    v4 = v41 | v40;
    LODWORD(dwBytes) = v41 | v40;
    if ( (v41 | v40) < 0 )
      goto LABEL_603;
    HIDWORD(v773) = HIDWORD(dwBytes);
    v42 = HIDWORD(dwBytes);
    v43 = GetProcessHeap();
    v44 = HeapAlloc(v43, 8u, v42);
    v45 = 0LL;
    if ( !v44 )
    {
      v4 = -1073741801;
LABEL_602:
      LODWORD(dwBytes) = v4;
      goto LABEL_603;
    }
    v774 = v44;
    LODWORD(v773) = 0;
    v842 = 0;
    v4 = RtlULongLongAdd(v44, 4LL, &v791);
    LODWORD(dwBytes) = v4;
    if ( v4 < 0 )
      goto LABEL_603;
    if ( v46 + 2 > (_DWORD *)((char *)v46 + HIDWORD(v773)) )
      goto LABEL_59;
    v47 = v791;
    *v46 = 4;
    *v47 = v842;
    v48 = v773 + 1;
    LODWORD(v773) = v773 + 1;
    if ( (_DWORD)v10 )
    {
      if ( v774 )
      {
        v51 = (unsigned int *)v774;
        v766 = (size_t)v774;
        if ( v48 )
        {
          while ( 1 )
          {
            v52 = RtlUIntAdd(4LL, *v51, &v771);
            LODWORD(dwBytes) = v52;
            v4 = v52;
            if ( v52 >= 0 )
              v54 = (unsigned int)v771;
            v807 = v54;
            if ( v52 < 0 )
              break;
            LODWORD(dwBytes) = RtlULongLongAdd(v53, v54, &v766);
            v4 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              break;
            v51 = (unsigned int *)v766;
            if ( v55 + 1 >= (unsigned int)v773 )
              goto LABEL_66;
          }
        }
        else
        {
LABEL_66:
          LODWORD(dwBytes) = RtlULongLongAdd(v51, 4LL, &v791);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            if ( (char *)v56 + v10 + 4 > (char *)v774 + HIDWORD(v773) )
              goto LABEL_59;
            v57 = v788;
            v58 = v791;
            *v56 = v10;
            memcpy_0(v58, v57, v10);
            LODWORD(v773) = v773 + 1;
          }
        }
      }
      else
      {
        v49 = RtlUIntAdd(4LL, (unsigned int)v10, &v771);
        v50 = v807;
        v4 = v49;
        LODWORD(dwBytes) = v49;
        if ( v49 >= 0 )
          v50 = (unsigned int)v771;
        v807 = v50;
        if ( v49 >= 0 )
        {
          LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v773), v50, (char *)&v773 + 4);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            LODWORD(v773) = v773 + 1;
            goto LABEL_71;
          }
        }
      }
    }
    else
    {
      v4 = -1073741811;
      LODWORD(dwBytes) = -1073741811;
    }
    if ( v4 < 0 )
      goto LABEL_603;
LABEL_71:
    if ( v14 )
    {
      if ( v774 )
      {
        v61 = (unsigned int *)v774;
        v766 = (size_t)v774;
        if ( (_DWORD)v773 )
        {
          while ( 1 )
          {
            v62 = RtlUIntAdd(4LL, *v61, &v771);
            LODWORD(dwBytes) = v62;
            v4 = v62;
            if ( v62 >= 0 )
              v64 = (unsigned int)v771;
            v808 = v64;
            if ( v62 < 0 )
              break;
            LODWORD(dwBytes) = RtlULongLongAdd(v63, v64, &v766);
            v4 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              break;
            v61 = (unsigned int *)v766;
            if ( v65 + 1 >= (unsigned int)v773 )
              goto LABEL_84;
          }
        }
        else
        {
LABEL_84:
          LODWORD(dwBytes) = RtlULongLongAdd(v61, 4LL, &v791);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            if ( (char *)v66 + v14 + 4 > (char *)v774 + HIDWORD(v773) )
              goto LABEL_59;
            v67 = v806;
            v68 = v791;
            *v66 = v14;
            memcpy_0(v68, v67, v14);
            LODWORD(v773) = v773 + 1;
          }
        }
      }
      else
      {
        v59 = RtlUIntAdd(4LL, v14, &v771);
        v60 = v808;
        v4 = v59;
        LODWORD(dwBytes) = v59;
        if ( v59 >= 0 )
          v60 = (unsigned int)v771;
        v808 = v60;
        if ( v59 >= 0 )
        {
          LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v773), v60, (char *)&v773 + 4);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            LODWORD(v773) = v773 + 1;
            goto LABEL_89;
          }
        }
      }
    }
    else
    {
      v4 = -1073741811;
      LODWORD(dwBytes) = -1073741811;
    }
    if ( v4 < 0 )
      goto LABEL_603;
LABEL_89:
    v907 = v874;
    if ( v774 )
    {
      v71 = (unsigned int *)v774;
      v766 = (size_t)v774;
      if ( (_DWORD)v773 )
      {
        while ( 1 )
        {
          v72 = RtlUIntAdd(4LL, *v71, &v771);
          LODWORD(dwBytes) = v72;
          v4 = v72;
          if ( v72 >= 0 )
            v74 = (unsigned int)v771;
          v809 = v74;
          if ( v72 < 0 )
            break;
          LODWORD(dwBytes) = RtlULongLongAdd(v73, v74, &v766);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) != 0LL )
            break;
          v71 = (unsigned int *)v766;
          if ( v75 + 1 >= (unsigned int)v773 )
            goto LABEL_101;
        }
      }
      else
      {
LABEL_101:
        LODWORD(dwBytes) = RtlULongLongAdd(v71, 4LL, &v791);
        v4 = dwBytes;
        if ( (dwBytes & 0x80000000) == 0LL )
        {
          if ( v76 + 3 > (_DWORD *)((char *)v774 + HIDWORD(v773)) )
            goto LABEL_59;
          v77 = v791;
          *v76 = 8;
          *v77 = v907;
          LODWORD(v773) = v773 + 1;
        }
      }
    }
    else
    {
      v69 = RtlUIntAdd(4LL, 8LL, &v771);
      v70 = v809;
      v4 = v69;
      LODWORD(dwBytes) = v69;
      if ( v69 >= 0 )
        v70 = (unsigned int)v771;
      v809 = v70;
      if ( v69 >= 0 )
      {
        LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v773), v70, (char *)&v773 + 4);
        v4 = dwBytes;
        if ( (dwBytes & 0x80000000) == 0LL )
        {
          LODWORD(v773) = v773 + 1;
          goto LABEL_105;
        }
      }
    }
    if ( v4 < 0 )
      goto LABEL_603;
LABEL_105:
    v78 = psz;
    if ( StringCchLengthW(psz, v70, &v766) >= 0 )
    {
      LODWORD(dwBytes) = RtlULongLongAdd(v766, 1LL, &v766);
      v4 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        if ( 2 * (_DWORD)v766 )
        {
          if ( v774 )
          {
            v81 = (unsigned int *)v774;
            v766 = (size_t)v774;
            if ( (_DWORD)v773 )
            {
              while ( 1 )
              {
                v82 = RtlUIntAdd(4LL, *v81, &v771);
                LODWORD(dwBytes) = v82;
                v4 = v82;
                if ( v82 >= 0 )
                  v84 = (unsigned int)v771;
                v813 = v84;
                if ( v82 < 0 )
                  break;
                LODWORD(dwBytes) = RtlULongLongAdd(v83, v84, &v766);
                v4 = dwBytes;
                if ( (dwBytes & 0x80000000) != 0LL )
                  break;
                v81 = (unsigned int *)v766;
                LODWORD(v45) = (_DWORD)v45 + 1;
                if ( (unsigned int)v45 >= (unsigned int)v773 )
                  goto LABEL_120;
              }
              v45 = 0LL;
            }
            else
            {
LABEL_120:
              v45 = 0LL;
              LODWORD(dwBytes) = RtlULongLongAdd(v81, 4LL, &v791);
              v4 = dwBytes;
              if ( (dwBytes & 0x80000000) == 0LL )
              {
                if ( (char *)v85 + v86 + 4 <= (char *)v774 + HIDWORD(v773) )
                {
                  v87 = v791;
                  *v85 = v86;
                  memcpy_0(v87, v78, (unsigned int)v86);
                  LODWORD(v773) = v773 + 1;
                }
                else
                {
                  v4 = -1073741789;
                  LODWORD(dwBytes) = -1073741789;
                }
              }
            }
          }
          else
          {
            v79 = RtlUIntAdd(4LL, (unsigned int)(2 * v766), &v771);
            v80 = v813;
            v4 = v79;
            LODWORD(dwBytes) = v79;
            if ( v79 >= 0 )
              v80 = (unsigned int)v771;
            v813 = v80;
            if ( v79 >= 0 )
            {
              LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v773), v80, (char *)&v773 + 4);
              v4 = dwBytes;
              if ( (dwBytes & 0x80000000) == 0LL )
              {
                LODWORD(v773) = v773 + 1;
                v4 = 0;
                LODWORD(dwBytes) = 0;
              }
            }
          }
        }
        else
        {
          v4 = -1073741811;
          LODWORD(dwBytes) = -1073741811;
        }
      }
      if ( v4 < 0 )
        goto LABEL_603;
      v843 = v821;
      if ( v774 )
      {
        v90 = (unsigned int *)v774;
        v766 = (size_t)v774;
        if ( (_DWORD)v773 )
        {
          while ( 1 )
          {
            v91 = RtlUIntAdd(4LL, *v90, &v771);
            LODWORD(dwBytes) = v91;
            v4 = v91;
            if ( v91 >= 0 )
              v93 = (unsigned int)v771;
            v812 = v93;
            if ( v91 < 0 )
              break;
            LODWORD(dwBytes) = RtlULongLongAdd(v92, v93, &v766);
            v4 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              break;
            v90 = (unsigned int *)v766;
            if ( v94 + 1 >= (unsigned int)v773 )
              goto LABEL_139;
          }
        }
        else
        {
LABEL_139:
          LODWORD(dwBytes) = RtlULongLongAdd(v90, 4LL, &v791);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            if ( v95 + 2 > (_DWORD *)((char *)v774 + HIDWORD(v773)) )
              goto LABEL_149;
            v96 = v791;
            *v95 = 4;
            *v96 = v843;
            LODWORD(v773) = v773 + 1;
          }
        }
      }
      else
      {
        v88 = RtlUIntAdd(4LL, 4LL, &v771);
        v89 = v812;
        v4 = v88;
        LODWORD(dwBytes) = v88;
        if ( v88 >= 0 )
          v89 = (unsigned int)v771;
        v812 = v89;
        if ( v88 >= 0 )
        {
          LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v773), v89, (char *)&v773 + 4);
          v4 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            LODWORD(v773) = v773 + 1;
LABEL_143:
            v817 = 4;
            if ( !v774 )
            {
              v97 = RtlUIntAdd(4LL, 4LL, &v771);
              v98 = v811;
              v4 = v97;
              LODWORD(dwBytes) = v97;
              if ( v97 >= 0 )
                v98 = (unsigned int)v771;
              v811 = v98;
              if ( v97 >= 0 )
              {
                LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v773), v98, (char *)&v773 + 4);
                v4 = dwBytes;
                if ( (dwBytes & 0x80000000) == 0LL )
                {
                  LODWORD(v773) = v773 + 1;
                  goto LABEL_160;
                }
              }
LABEL_159:
              if ( v4 < 0 )
                goto LABEL_603;
LABEL_160:
              v106 = RtlUIntAdd(4LL, 4LL, &v771);
              v108 = v797;
              v4 = v106;
              LODWORD(dwBytes) = v106;
              if ( v106 >= 0 )
                v108 = (unsigned int)v771;
              v797 = v108;
              if ( v106 < 0 )
                goto LABEL_185;
              HIDWORD(dwBytes) = v108;
              v109 = RtlUIntAdd(v107, (unsigned int)(v107 + 4), &v771);
              LODWORD(dwBytes) = v109;
              v111 = v110;
              v4 = v109;
              if ( v109 >= 0 )
                v111 = (unsigned int)v771;
              v797 = v111;
              if ( v109 < 0 )
                goto LABEL_185;
              LODWORD(dwBytes) = RtlUIntAdd(v110, v111, (char *)&dwBytes + 4);
              v4 = dwBytes;
              if ( (dwBytes & 0x80000000) != 0LL )
                goto LABEL_185;
              v112 = RtlUIntAdd(4LL, 4LL, &v771);
              LODWORD(dwBytes) = v112;
              v4 = v112;
              if ( v112 >= 0 )
                v113 = (unsigned int)v771;
              v797 = v113;
              if ( v112 < 0 )
                goto LABEL_185;
              LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v113, (char *)&dwBytes + 4);
              v4 = dwBytes;
              if ( (dwBytes & 0x80000000) != 0LL )
                goto LABEL_185;
              v114 = RtlUIntAdd(4LL, 4LL, &v771);
              LODWORD(dwBytes) = v114;
              v4 = v114;
              if ( v114 >= 0 )
                v115 = (unsigned int)v771;
              v797 = v115;
              if ( v114 < 0 )
                goto LABEL_185;
              LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v115, (char *)&dwBytes + 4);
              v4 = dwBytes;
              if ( (dwBytes & 0x80000000) != 0LL )
                goto LABEL_185;
              v116 = RtlUIntAdd(4LL, 4LL, &v771);
              LODWORD(dwBytes) = v116;
              v4 = v116;
              if ( v116 >= 0 )
                v117 = (unsigned int)v771;
              v797 = v117;
              if ( v116 < 0 )
                goto LABEL_185;
              LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v117, (char *)&dwBytes + 4);
              v4 = dwBytes;
              if ( (dwBytes & 0x80000000) != 0LL )
                goto LABEL_185;
              v118 = RtlUIntAdd(4LL, 4LL, &v771);
              LODWORD(dwBytes) = v118;
              v4 = v118;
              if ( v118 >= 0 )
                v119 = (unsigned int)v771;
              v797 = v119;
              if ( v118 < 0 )
              {
LABEL_185:
                v120 = v817;
              }
              else
              {
                v4 = RtlUIntAdd(HIDWORD(dwBytes), v119, (char *)&dwBytes + 4);
                LODWORD(dwBytes) = v4;
                v120 = v817;
                if ( v4 >= 0 )
                  v120 = HIDWORD(dwBytes);
              }
              v800 = v120;
              if ( v4 < 0 )
                goto LABEL_603;
              v766 = 0LL;
              v121 = 0;
              v839 = 0LL;
              v822 = 0LL;
              v122 = 0LL;
              LODWORD(v771) = 0;
              v806 = 0LL;
              v792 = 0;
              v770 = 0LL;
              v788 = 0LL;
              v823 = 0;
              v872 = __rdtsc();
              v798 = 8;
              v124 = RtlUIntAdd(8LL, HIDWORD(v773), &v798);
              if ( v124 >= 0 )
              {
                v125 = (v798 + 7) & 0xFFFFFFF8;
                if ( v125 >= v798 )
                {
                  v798 = (v798 + 7) & 0xFFFFFFF8;
                  v126 = v125;
                  v127 = GetProcessHeap();
                  v128 = HeapAlloc(v127, 8u, v126);
                  if ( v128 )
                  {
                    v919 = v128;
                    *v128 = v773;
                    v124 = RtlULongLongAdd(v128, 4LL, &v919);
                    if ( v124 < 0
                      || (v130 = v919,
                          *(_DWORD *)v919 = HIDWORD(v773),
                          v124 = RtlULongLongAdd(v130, v129, &v919),
                          v124 < 0) )
                    {
                      v123 = 0LL;
                    }
                    else
                    {
                      *(_QWORD *)((char *)v128 + v798 - 8) = v872;
                      memcpy_0(v919, v774, HIDWORD(v773));
                      v766 = (size_t)v128;
                      v123 = (size_t)v128;
                      v128 = 0LL;
                      v121 = v798;
                    }
                    if ( v128 )
                    {
                      v131 = GetProcessHeap();
                      HeapFree(v131, 0, v128);
                      v123 = v766;
                    }
                  }
                  else
                  {
                    v124 = -1073741801;
                    v123 = 0LL;
                  }
                  v45 = 0LL;
                }
                else
                {
                  v124 = -1073741675;
                }
              }
              v4 = v124 | 0x10000000;
              LODWORD(dwBytes) = v4;
              if ( v4 < 0 )
                goto LABEL_323;
              v895 = 0LL;
              v132 = 0LL;
              v878 = 0LL;
              v879 = 0LL;
              v880 = 0LL;
              lpMem = 0LL;
              v876 = 0LL;
              psz = 0LL;
              if ( v123 )
              {
                v134 = v121;
                v802 = (void *)v121;
                if ( v121 && (v785 = MemoryAlloc(v121 + 8LL), (v135 = (char *)v785) != 0LL) )
                {
                  v136 = (unsigned __int8 *)v766;
                  v137 = 0;
                  LOBYTE(v769) = 0;
                  v138 = 0LL;
                  if ( v134 )
                  {
                    do
                    {
                      v137 ^= *(_BYTE *)(v138 + v766);
                      ++v138;
                    }
                    while ( v138 < v134 );
                    LOBYTE(v769) = v137;
                  }
                  v139 = 0;
                  LODWORD(v767) = 0;
                  HIDWORD(dwBytes) = 0;
                  v140 = -1;
                  v919 = (void *)0xC81ECB17B1B54A58LL;
                  v784 = 0;
                  v141 = v785;
                  v778 = -1;
                  v142 = v134 & 7;
                  if ( (v134 & 7) != 0 )
                  {
                    LODWORD(v767) = 0;
                    HIDWORD(dwBytes) = 0;
                    v143 = 0;
                    v144 = 56;
                    v145 = 0;
                    do
                    {
                      v146 = *v136++;
                      if ( v143 >= 4 )
                      {
                        v147 = (v146 << v144) | v767;
                        LODWORD(v767) = v147;
                      }
                      else
                      {
                        v147 = v767;
                        v145 |= v146 << (v144 - 32);
                      }
                      ++v143;
                      v144 -= 8;
                    }
                    while ( v143 < (int)v142 );
                    HIDWORD(dwBytes) = v145;
                    v139 = v145 ^ 0xB17A307A;
                    v148 = v147 ^ 0x42F6B18D;
                    v784 = v145 ^ 0xB17A307A;
                    v778 = v147 ^ 0x42F6B18D;
                    v149 = 0;
                    if ( (v134 & 7) != 0 )
                    {
                      do
                      {
                        pcchLength = (size_t)(v141 + 1);
                        if ( v149 >= 4 )
                        {
                          v148 = __ROL4__(v148, 8);
                          v150 = v148;
                        }
                        else
                        {
                          v139 = __ROL4__(v139, 8);
                          v150 = v139;
                        }
                        *v141 = v150;
                        ++v149;
                        v141 = (_BYTE *)pcchLength;
                      }
                      while ( v149 < (int)v142 );
                      v139 = v784;
                      v148 = v778;
                    }
                    if ( v142 <= 4 )
                    {
                      v140 = 0;
                      v778 = 0;
                      if ( v142 < 4 )
                      {
                        v139 = v139 >> (8 * (4 - v142)) << (8 * (4 - v142));
                        v784 = v139;
                      }
                    }
                    else
                    {
                      v140 = v148 >> (8 * (8 - v142)) << (8 * (8 - v142));
                      v778 = v140;
                    }
                  }
                  pcchLength = v134 >> 3;
                  if ( v134 >> 3 )
                  {
                    v151 = v136 + 2;
                    v152 = v767;
                    v153 = HIDWORD(dwBytes);
                    v154 = WORD2(v919);
                    LODWORD(dwBytes) = WORD1(v919);
                    v155 = v141 + 7;
                    v156 = pcchLength;
                    do
                    {
                      v157 = v151[1] | ((*v151 | ((*(v151 - 1) | (*(v151 - 2) << 8)) << 8)) << 8);
                      v158 = v151[5] | ((v151[4] | ((v151[3] | (v151[2] << 8)) << 8)) << 8);
                      pcchLength = (size_t)(v151 + 8);
                      v159 = v158 ^ v140;
                      v160 = HIDWORD(v919) ^ v139 ^ v157 ^ (v159 - 19032);
                      v161 = (__ROR4__(v160, 7) + WORD1(v919) * __ROR4__(v139 ^ v157 ^ (v159 - 19032), 15)) ^ v159;
                      v162 = (v154 * __ROR4__(v161 - 1313519016, 9) - __ROR4__(v161, 10)) ^ v160;
                      v163 = (__ROL4__(v162, 5) + HIWORD(v919) * __ROL4__(v162 ^ v154, 4)) ^ v161;
                      v164 = (HIDWORD(v919) - (v163 ^ 0xB1B54A58)) ^ v162;
                      v165 = (WORD1(v919) * (v164 - 19032) - (v164 >> 6)) ^ v163;
                      v166 = (19032 * (v154 ^ __ROR4__(v165, 15))) ^ v164;
                      v167 = (v154 * (HIWORD(v919) + __ROR4__(~v166, 3))) ^ v165;
                      v168 = (v167 - 19032 - HIDWORD(v919)) ^ v166;
                      v169 = (dwBytes * (v168 ^ HIWORD(v919))) ^ __ROR4__(v168, 10) ^ v167;
                      v170 = __ROR4__(v169, 3) ^ (v154 * __ROL4__(v169 ^ 0x4A58, 6)) ^ v168;
                      v171 = (19032 * (__ROR4__(v170, 15) - HIWORD(v919))) ^ v169;
                      v172 = (v171 >> 15) ^ (19032 * __ROL4__(v171 - v154, 3)) ^ (v171 >> 1) ^ (19032
                                                                                              * (v171 ^ HIWORD(v919))) ^ v170;
                      v173 = (WORD1(v919) * (v172 - v154) - (v172 >> 13)) ^ v171;
                      v174 = __ROR4__(v173, 11) ^ (v154 * __ROR4__(-1313519016 - v173, 9)) ^ v172;
                      v175 = (v174 + 1313519016 - HIWORD(v919)) ^ v173;
                      v176 = (19032 * (dwBytes ^ v175) - __ROR4__(v175, 7)) ^ v174;
                      v177 = (WORD1(v919) * __ROL4__(v176 ^ HIWORD(v919), 4) - __ROR4__(v176, 16)) ^ v175;
                      v178 = (__ROR4__(v177, 4) + v154 * __ROR4__(-1313519016 - v177, 10)) ^ v176;
                      v179 = __ROR4__(v178, 9) ^ (HIWORD(v919) * __ROR4__(v178 + 1313519016, 4)) ^ v177;
                      v180 = (19032 * __ROL4__(HIDWORD(v919) ^ v179, 8) - __ROL4__(v179, 2)) ^ v178;
                      v181 = (WORD1(v919) * __ROR4__(HIDWORD(v919) - v180, 11) - __ROR4__(v180, 12)) ^ v179;
                      v182 = (v181 >> 8) ^ (v154 * (v181 ^ WORD1(v919))) ^ v180;
                      v183 = v182 ^ v181 ^ 0xB1B54A58;
                      v184 = v153 ^ v182;
                      v153 = v157;
                      v784 = v184;
                      v778 = v152 ^ HIDWORD(v919) ^ v183;
                      v152 = v158;
                      *(v155 - 4) = v184;
                      v784 = __ROR4__(v784, 8);
                      v151 = (unsigned __int8 *)pcchLength;
                      *v155 = v778;
                      v778 = __ROR4__(v778, 8);
                      *(v155 - 5) = v784;
                      v784 = __ROR4__(v784, 8);
                      *(v155 - 1) = v778;
                      v778 = __ROR4__(v778, 8);
                      *(v155 - 6) = v784;
                      v784 = __ROR4__(v784, 8);
                      *(v155 - 2) = v778;
                      v778 = __ROR4__(v778, 8);
                      *(v155 - 7) = v784;
                      *(v155 - 3) = v778;
                      v155 += 8;
                      v139 = __ROR4__(v784, 8);
                      v140 = __ROR4__(v778, 8);
                      v784 = v139;
                      v778 = v140;
                      --v156;
                    }
                    while ( v156 );
                    v137 = v769;
                    v132 = (wchar_t *)psz;
                    v134 = (unsigned __int64)v802;
                    v135 = (char *)v785;
                  }
                  v185 = v134 + 8;
                  *(_QWORD *)&v135[v134] = v137;
                  lpMem = v135;
                  v876 = (char *)(v134 + 8);
                  v878 = 8LL;
                  v895 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                  v880 = 160LL;
                  v879 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                  v186 = GetProcessHeap();
                  v187 = HeapAlloc(v186, 8u, 0x30uLL);
                  v188 = v187;
                  if ( v187 )
                  {
                    *v187 = v185;
                    v189 = GetProcessHeap();
                    v190 = HeapAlloc(v189, 8u, v185);
                    if ( !v190 )
                      goto LABEL_233;
                    *((_QWORD *)v188 + 1) = v190;
                    memcpy_0(v190, v135, v185);
                    v188[4] = 160;
                    v191 = GetProcessHeap();
                    v192 = HeapAlloc(v191, 8u, 0xA0uLL);
                    if ( !v192 )
                      goto LABEL_233;
                    *((_QWORD *)v188 + 3) = v192;
                    *v192 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                    v192[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                    v192[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                    v192[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                    v192[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                    v192[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                    v192[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                    v192[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                    v192[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                    v192[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                    v188[8] = 8;
                    v193 = GetProcessHeap();
                    v194 = HeapAlloc(v193, 8u, 8uLL);
                    if ( v194 )
                    {
                      *((_QWORD *)v188 + 5) = v194;
                      v132 = (wchar_t *)v188;
                      *v194 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                      v133 = 0;
                      v188 = 0LL;
                    }
                    else
                    {
LABEL_233:
                      v133 = -1073741801;
                    }
                    if ( v188 )
                    {
                      v195 = (void *)*((_QWORD *)v188 + 1);
                      if ( v195 )
                      {
                        v196 = GetProcessHeap();
                        HeapFree(v196, 0, v195);
                        *((_QWORD *)v188 + 1) = 0LL;
                      }
                      v197 = (void *)*((_QWORD *)v188 + 3);
                      if ( v197 )
                      {
                        v198 = GetProcessHeap();
                        HeapFree(v198, 0, v197);
                        *((_QWORD *)v188 + 3) = 0LL;
                      }
                      v199 = (void *)*((_QWORD *)v188 + 5);
                      if ( v199 )
                      {
                        v200 = GetProcessHeap();
                        HeapFree(v200, 0, v199);
                        *((_QWORD *)v188 + 5) = 0LL;
                      }
                      v201 = GetProcessHeap();
                      HeapFree(v201, 0, v188);
                    }
                  }
                  else
                  {
                    v133 = -1073741801;
                  }
                  if ( v133 >= 0 )
                  {
                    v839 = v132;
                    v132 = 0LL;
                  }
                }
                else
                {
                  v133 = -1073741823;
                }
                v45 = lpMem;
                if ( lpMem )
                {
                  v202 = GetProcessHeap();
                  HeapFree(v202, 0, v45);
                  v45 = 0LL;
                  lpMem = 0LL;
                }
                if ( v132 )
                {
                  v203 = (void *)*((_QWORD *)v132 + 1);
                  if ( v203 )
                  {
                    v204 = GetProcessHeap();
                    HeapFree(v204, 0, v203);
                    *((_QWORD *)v132 + 1) = 0LL;
                  }
                  v205 = (void *)*((_QWORD *)v132 + 3);
                  if ( v205 )
                  {
                    v206 = GetProcessHeap();
                    HeapFree(v206, 0, v205);
                    *((_QWORD *)v132 + 3) = 0LL;
                  }
                  v45 = (void *)*((_QWORD *)v132 + 5);
                  if ( v45 )
                  {
                    v207 = GetProcessHeap();
                    HeapFree(v207, 0, v45);
                    v45 = 0LL;
                    *((_QWORD *)v132 + 5) = 0LL;
                  }
                  v208 = GetProcessHeap();
                  HeapFree(v208, 0, v132);
                }
              }
              else
              {
                v133 = -1073741811;
              }
              v4 = v133 | 0x10000000;
              LODWORD(dwBytes) = v4;
              if ( v4 < 0 )
                goto LABEL_322;
              v209 = (const void **)v839;
              HIDWORD(dwBytes) = 4;
              v210 = RtlUIntAdd(4LL, *(unsigned int *)v839, (char *)&dwBytes + 4);
              if ( v210 < 0
                || (v210 = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4), v210 < 0)
                || (v210 = RtlUIntAdd(HIDWORD(dwBytes), *((unsigned int *)v209 + 4), (char *)&dwBytes + 4), v210 < 0)
                || (v210 = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4), v210 < 0) )
              {
                v211 = v810;
              }
              else
              {
                v210 = RtlUIntAdd(HIDWORD(dwBytes), *((unsigned int *)v209 + 8), (char *)&dwBytes + 4);
                v211 = v810;
                if ( v210 >= 0 )
                  v211 = HIDWORD(dwBytes);
                v810 = v211;
              }
              if ( v210 >= 0 )
              {
                v212 = v211;
                v213 = GetProcessHeap();
                v214 = HeapAlloc(v213, 8u, v212);
                if ( v214 )
                {
                  *v214 = *(_DWORD *)v209;
                  v919 = v214;
                  v210 = RtlULongLongAdd(v214, 4LL, &v919);
                  if ( v210 >= 0 )
                  {
                    memcpy_0(v919, v209[1], *(unsigned int *)v209);
                    v210 = RtlULongLongAdd(v919, *(unsigned int *)v209, &v919);
                    if ( v210 >= 0 )
                    {
                      v215 = v919;
                      *(_DWORD *)v919 = *((_DWORD *)v209 + 4);
                      v210 = RtlULongLongAdd(v215, 4LL, &v919);
                      if ( v210 >= 0 )
                      {
                        memcpy_0(v919, v209[3], *((unsigned int *)v209 + 4));
                        v210 = RtlULongLongAdd(v919, *((unsigned int *)v209 + 4), &v919);
                        if ( v210 >= 0 )
                        {
                          v216 = v919;
                          *(_DWORD *)v919 = *((_DWORD *)v209 + 8);
                          v210 = RtlULongLongAdd(v216, 4LL, &v919);
                          if ( v210 >= 0 )
                          {
                            memcpy_0(v919, v209[5], *((unsigned int *)v209 + 8));
                            v210 = RtlULongLongAdd(v919, *((unsigned int *)v209 + 8), &v919);
                            if ( v210 >= 0 )
                            {
                              v822 = v214;
                              v214 = 0LL;
                              LODWORD(v771) = v810;
                            }
                          }
                        }
                      }
                    }
                  }
                  if ( v214 )
                  {
                    v217 = GetProcessHeap();
                    HeapFree(v217, 0, v214);
                  }
                }
                else
                {
                  v210 = -1073741801;
                }
                v45 = 0LL;
              }
              v4 = v210 | 0x10000000;
              LODWORD(dwBytes) = v4;
              if ( v4 < 0 )
                goto LABEL_322;
              v881 = v45;
              v844 = (int)v45;
              v882 = v45;
              v845 = (int)v45;
              v824 = 8;
              v218 = RtlUIntAdd(8LL, v800, &v824);
              v4 = v218 | 0x10000000;
              LODWORD(dwBytes) = v218 | 0x10000000;
              if ( v218 < 0 )
              {
                v221 = 0LL;
              }
              else
              {
                v220 = (v824 + 7) & 0xFFFFFFF8;
                if ( v220 >= v824 )
                {
                  v832 = (v824 + 7) & 0xFFFFFFF8;
                  v222 = RtlUIntAdd(v220, v219, &v832);
                  v223 = v827;
                  v221 = 0LL;
                  LODWORD(dwBytes) = v222;
                  v4 = v222;
                  if ( v222 >= 0 )
                    v223 = v832;
                  v827 = v223;
                }
                else
                {
                  v4 = -1073741675;
                  LODWORD(dwBytes) = -1073741675;
                  v221 = 0LL;
                }
                if ( v4 < 0 )
                  goto LABEL_322;
                if ( !v774 || (unsigned int)v773 <= 1 )
                  goto LABEL_295;
                v224 = (unsigned int *)v774;
                v919 = v774;
                do
                {
                  v225 = *v224;
                  LODWORD(dwBytes) = RtlULongLongAdd(v224, 4LL, &v919);
                  v4 = dwBytes;
                  if ( (dwBytes & 0x80000000) != 0LL )
                  {
                    v221 = 0LL;
                    goto LABEL_297;
                  }
                  v226 = RtlULongLongAdd(v919, v225, &v919);
                  v221 = 0LL;
                  LODWORD(dwBytes) = v226;
                  v4 = v226;
                  if ( v226 < 0 )
                    goto LABEL_297;
                  v224 = (unsigned int *)v919;
                }
                while ( v227 == -1 );
                LODWORD(dwBytes) = RtlULongLongAdd(v919, 4LL, &v919);
                v4 = dwBytes;
                if ( (dwBytes & 0x80000000) == 0LL )
                {
                  v229 = v919;
                  v844 = v228;
                  if ( !v228 )
                    v229 = 0LL;
                  v881 = v229;
                }
LABEL_297:
                if ( v4 < 0 )
                  goto LABEL_322;
                if ( (unsigned int)v773 > 2 )
                {
                  v230 = (unsigned int *)v774;
                  v919 = v774;
                  do
                  {
                    v231 = *v230;
                    LODWORD(dwBytes) = RtlULongLongAdd(v230, 4LL, &v919);
                    v4 = dwBytes;
                    if ( (dwBytes & 0x80000000) != 0LL )
                    {
                      v221 = 0LL;
                      goto LABEL_308;
                    }
                    v233 = RtlULongLongAdd(v919, v231, &v919);
                    v221 = 0LL;
                    LODWORD(dwBytes) = v233;
                    v4 = v233;
                    if ( v233 < 0 )
                      goto LABEL_308;
                    v230 = (unsigned int *)v919;
                  }
                  while ( (unsigned int)(v234 + 1) < 2 );
                  LODWORD(dwBytes) = RtlULongLongAdd(v919, 4LL, &v919);
                  v4 = dwBytes;
                  if ( (dwBytes & 0x80000000) == 0LL )
                  {
                    v236 = v919;
                    LODWORD(v45) = v235;
                    v845 = v235;
                    if ( !v235 )
                      v236 = 0LL;
                    v882 = v236;
                  }
LABEL_308:
                  if ( v4 < 0 )
                    goto LABEL_322;
                  HIDWORD(dwBytes) = 4;
                  LODWORD(dwBytes) = RtlUIntAdd(4LL, v232, (char *)&dwBytes + 4);
                  v4 = dwBytes;
                  if ( (dwBytes & 0x80000000) != 0LL
                    || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4),
                        v4 = dwBytes,
                        (dwBytes & 0x80000000) != 0LL)
                    || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v237, (char *)&dwBytes + 4),
                        v4 = dwBytes,
                        (dwBytes & 0x80000000) != 0LL)
                    || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), 4LL, (char *)&dwBytes + 4),
                        v4 = dwBytes,
                        (dwBytes & 0x80000000) != 0LL) )
                  {
                    v238 = v828;
                  }
                  else
                  {
                    v4 = RtlUIntAdd(HIDWORD(dwBytes), (unsigned int)v45, (char *)&dwBytes + 4);
                    LODWORD(dwBytes) = v4;
                    v238 = v828;
                    if ( v4 >= 0 )
                      v238 = HIDWORD(dwBytes);
                    v828 = v238;
                  }
                  if ( v4 < 0 )
                    goto LABEL_322;
                  if ( v238 > 0x400000 )
                  {
                    v4 = -2147418113;
LABEL_321:
                    LODWORD(dwBytes) = v4;
LABEL_322:
                    v122 = v770;
                    goto LABEL_323;
                  }
                  v792 = v238;
                }
                else
                {
LABEL_295:
                  v4 = -1073741811;
                  LODWORD(dwBytes) = -1073741811;
                }
              }
              if ( v4 < 0 )
                goto LABEL_322;
              v264 = v792;
              v265 = GetProcessHeap();
              v266 = HeapAlloc(v265, 8u, v264);
              if ( v266 )
              {
                v267 = v266;
                v806 = v266;
                v4 = 0x10000000;
              }
              else
              {
                v267 = v806;
                v4 = -805306345;
              }
              LODWORD(dwBytes) = v4;
              if ( v4 < 0 )
                goto LABEL_322;
              if ( !v822 || !v267 )
              {
                v4 = -2147024809;
                goto LABEL_321;
              }
              v912[0] = v822;
              v913 = (int)v771;
              v914 = v792;
              v912[1] = v267;
              v915 = 0;
              if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                && (v268 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
              {
                v269 = ((__int64 (__fastcall *)(__int64, _QWORD *))v268)(134LL, v912);
                v270 = v792;
                v4 = v269 | 0x10000000;
                if ( v269 >= 0 )
                  v270 = v914;
                v792 = v270;
              }
              else
              {
                v271 = GetLastError();
                LODWORD(dwBytes) = v271;
                v4 = v271;
                if ( v271 > 0 )
                {
                  v4 = (unsigned __int16)v271 | 0x80070000;
                  LODWORD(dwBytes) = v4;
                }
                v270 = v792;
                if ( v4 < 0 )
                {
LABEL_374:
                  if ( v4 == -805306333 )
                  {
                    v4 = -2147024774;
                    goto LABEL_321;
                  }
                  if ( v4 < 0 )
                    goto LABEL_322;
                  v771 = 0LL;
                  LODWORD(dwBytes) = 0;
                  v919 = v267;
                  if ( v270 < 4 )
                    goto LABEL_397;
                  LODWORD(v775) = *v267;
                  v272 = RtlULongLongAdd(v267, 4LL, &v919);
                  if ( v272 < 0 )
                    goto LABEL_400;
                  v272 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                  if ( v272 < 0 )
                    goto LABEL_400;
                  if ( v273 - (int)dwBytes < (unsigned int)v274 )
                    goto LABEL_397;
                  v785 = v919;
                  psz = v274;
                  v272 = RtlULongLongAdd(v919, (unsigned int)v274, &v919);
                  if ( v272 < 0 )
                    goto LABEL_400;
                  v272 = RtlUIntAdd((unsigned int)dwBytes, v275, &dwBytes);
                  if ( v272 < 0 )
                    goto LABEL_400;
                  if ( (unsigned int)(v276 - dwBytes) < 4 )
                  {
LABEL_397:
                    v272 = -1073741762;
LABEL_400:
                    v122 = v770;
                    goto LABEL_401;
                  }
                  v277 = *(unsigned int *)v919;
                  v272 = RtlULongLongAdd(v919, 4LL, &v919);
                  if ( v272 >= 0 )
                  {
                    v272 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                    if ( v272 >= 0 )
                    {
                      if ( v278 - (int)dwBytes < (unsigned int)v277 )
                        goto LABEL_398;
                      v802 = v919;
                      v272 = RtlULongLongAdd(v919, (unsigned int)v277, &v919);
                      if ( v272 < 0 )
                        goto LABEL_399;
                      v272 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v277, &dwBytes);
                      if ( v272 < 0 )
                        goto LABEL_399;
                      if ( (unsigned int)(v279 - dwBytes) < 4 )
                        goto LABEL_398;
                      v280 = *(unsigned int *)v919;
                      v272 = RtlULongLongAdd(v919, 4LL, &v919);
                      if ( v272 < 0 )
                        goto LABEL_399;
                      v272 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                      if ( v272 < 0 )
                        goto LABEL_399;
                      if ( v281 - (int)dwBytes < (unsigned int)v280 )
                        goto LABEL_398;
                      v272 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v280, &dwBytes);
                      if ( v272 >= 0 )
                      {
                        if ( v282 == (_DWORD)dwBytes && (unsigned int)(v283 + v277 + v280) + 12LL == v282 )
                        {
                          v284 = GetProcessHeap();
                          v285 = HeapAlloc(v284, 8u, 0x30uLL);
                          if ( !v285 )
                          {
                            v272 = -1073741801;
                            v221 = 0LL;
LABEL_433:
                            v122 = (unsigned int *)v771;
                            v314 = v221;
                            if ( v272 < 0 )
                            {
                              v314 = v771;
                              v122 = (unsigned int *)v221;
                            }
                            v770 = v122;
                            if ( v314 )
                            {
                              v315 = (void *)v314[1];
                              if ( v315 )
                              {
                                v316 = GetProcessHeap();
                                HeapFree(v316, 0, v315);
                                v314[1] = 0LL;
                              }
                              v317 = (void *)v314[3];
                              if ( v317 )
                              {
                                v318 = GetProcessHeap();
                                HeapFree(v318, 0, v317);
                                v314[3] = 0LL;
                              }
                              v221 = (_QWORD *)v314[5];
                              if ( v221 )
                              {
                                v319 = GetProcessHeap();
                                HeapFree(v319, 0, v221);
                                v221 = 0LL;
                                v314[5] = 0LL;
                              }
                              v320 = GetProcessHeap();
                              HeapFree(v320, 0, v314);
                              v770 = v122;
                            }
LABEL_401:
                            v4 = v272 | 0x10000000;
                            LODWORD(dwBytes) = v4;
                            if ( v4 < 0 )
                              goto LABEL_323;
                            v826 = v221;
                            v286 = v221;
                            v873 = v221;
                            if ( !v122 || (psz = (STRSAFE_PCNZWCH)*((_QWORD *)v122 + 1)) == 0LL || *v122 == (_DWORD)v221 )
                            {
                              v4 = -805306355;
LABEL_447:
                              LODWORD(dwBytes) = v4;
                              goto LABEL_323;
                            }
                            v287 = *v122;
                            v800 = (unsigned int)v221;
                            if ( !v287 )
                              goto LABEL_476;
                            v288 = v287 - 8;
                            v802 = (void *)v288;
                            pcchLength = (size_t)MemoryAlloc(v288);
                            v289 = (_BYTE *)pcchLength;
                            if ( !pcchLength )
                            {
                              v286 = v826;
                              v221 = 0LL;
                              goto LABEL_476;
                            }
                            v290 = psz;
                            v919 = (void *)0x7F1137FAB69605ELL;
                            v291 = 0;
                            LOBYTE(v769) = 0;
                            v292 = (_BYTE *)pcchLength;
                            v781 = 0;
                            LODWORD(dwBytes) = 0;
                            v293 = v288 & 7;
                            if ( (v288 & 7) != 0 )
                            {
                              v776 = -1;
                              v294 = 0;
                              HIDWORD(dwBytes) = 0;
                              v295 = 56;
                              v296 = 0;
                              do
                              {
                                v297 = *(unsigned __int8 *)v290;
                                v290 = (STRSAFE_PCNZWCH)((char *)v290 + 1);
                                if ( v294 >= 4 )
                                {
                                  v298 = (v297 << v295) | HIDWORD(dwBytes);
                                  HIDWORD(dwBytes) = v298;
                                }
                                else
                                {
                                  v298 = HIDWORD(dwBytes);
                                  v296 |= v297 << (v295 - 32);
                                }
                                ++v294;
                                v295 -= 8;
                              }
                              while ( v294 < (int)v293 );
                              LODWORD(dwBytes) = v296;
                              v322 = v296 ^ 0x92F65A5;
                              v323 = v298 ^ 0x699A899C;
                              v781 = v296 ^ 0x92F65A5;
                              v776 = v298 ^ 0x699A899C;
                              v324 = 0;
                              if ( (v288 & 7) != 0 )
                              {
                                do
                                {
                                  v785 = v292 + 1;
                                  if ( v324 >= 4 )
                                  {
                                    v323 = __ROL4__(v323, 8);
                                    v325 = v323;
                                  }
                                  else
                                  {
                                    v322 = __ROL4__(v322, 8);
                                    v325 = v322;
                                  }
                                  *v292 = v325;
                                  ++v324;
                                  v292 = v785;
                                }
                                while ( v324 < (int)v293 );
                                v322 = v781;
                                v323 = v776;
                              }
                              if ( v293 <= 4 )
                              {
                                v326 = 0;
                                v776 = 0;
                                if ( v293 < 4 )
                                {
                                  v322 = v322 >> (8 * (4 - v293)) << (8 * (4 - v293));
                                  v781 = v322;
                                }
LABEL_462:
                                v327 = v288 >> 3;
                                if ( v288 >> 3 )
                                {
                                  v328 = HIDWORD(v919);
                                  v329 = v292 + 7;
                                  v330 = HIDWORD(dwBytes);
                                  v331 = (unsigned __int8 *)(v290 + 1);
                                  v332 = v327;
                                  LODWORD(v771) = WORD2(v919);
                                  LODWORD(v775) = WORD1(v919);
                                  LODWORD(v767) = 24670;
                                  v333 = dwBytes;
                                  do
                                  {
                                    v334 = v331[1] | ((*v331 | ((*(v331 - 1) | (*(v331 - 2) << 8)) << 8)) << 8);
                                    v335 = v334 ^ v322;
                                    v336 = v331[5] | ((v331[4] | ((v331[3] | (v331[2] << 8)) << 8)) << 8);
                                    v785 = v331 + 8;
                                    v337 = v328 ^ v335 ^ v336 ^ v326 ^ 0xAB69605E;
                                    v338 = (__ROL4__(v337, 10) + (_DWORD)v771 * __ROL4__(v337 + 1419157410, 5)) ^ v335;
                                    v339 = (WORD1(v919) * __ROR4__(v338 + v328, 9) - __ROL4__(v338, 2)) ^ v337;
                                    v340 = (v767 * (v339 - (_DWORD)v771) - (v339 >> 13)) ^ v338;
                                    v341 = (HIWORD(v919) * __ROL4__(WORD1(v919) ^ v340, 6) - __ROL4__(v340, 2)) ^ v339;
                                    v342 = (v328 - (v341 ^ 0xAB69605E)) ^ v340;
                                    v343 = (v775 * ((unsigned int)v771 ^ v342)) ^ __ROR4__(v342, 6) ^ v341;
                                    v344 = (__ROL4__(v343, 2) + v767 * __ROR4__(v343 + v328, 15)) ^ v342;
                                    v345 = (HIWORD(v919) * __ROR4__(v344 + 1419157410, 14) - __ROL4__(v344, 8)) ^ v343;
                                    v346 = __ROR4__(v345, 10) ^ ((_DWORD)v771 * __ROR4__(v345 ^ 0xAB69605E, 12)) ^ v344;
                                    v347 = (v346 >> 10) ^ (WORD1(v919) * (HIWORD(v919) ^ v346)) ^ v345;
                                    v348 = (HIWORD(v919) * (v767 + __ROR4__(~v347, 5))) ^ v346;
                                    v349 = (v348 - HIWORD(v919)) ^ 0xAB69605E ^ v347;
                                    v350 = ((v349 >> 2) + (_DWORD)v771 * __ROL4__(HIWORD(v919) ^ v349, 2)) ^ v348;
                                    v351 = (__ROL4__(v350, 7) + WORD1(v919) * __ROR4__(v350 - v328, 6)) ^ v349;
                                    v352 = (v767 * (v351 ^ (unsigned int)v771) + __ROR4__(v351, 9)) ^ v350;
                                    v353 = (__ROL4__(v352, 7) + HIWORD(v919) * __ROL4__(WORD1(v919) ^ v352, 5)) ^ v351;
                                    v354 = v328 ^ v352 ^ v353 ^ 0xAB69605E;
                                    v355 = ((_DWORD)v771 * (__ROR4__(v354, 3) - WORD1(v919))) ^ v353;
                                    v356 = (v767 * __ROR4__(v355 - v328, 1) - __ROR4__(v355, 6)) ^ v354;
                                    v357 = (__ROL4__(v356, 14) + HIWORD(v919) * __ROL4__(v356 - 1419157410, 3)) ^ v355;
                                    v358 = ((_DWORD)v771 * __ROL4__(v357 - 1419157410, 15) - __ROR4__(v357, 14)) ^ v356;
                                    v359 = (v358 >> 3) ^ (WORD1(v919) * (v767 ^ v358)) ^ v357;
                                    v360 = __ROL4__(v359, 2);
                                    v361 = __ROL4__(v328 ^ v359, 4);
                                    v362 = v330 ^ v359;
                                    v330 = v336;
                                    v776 = v362;
                                    v363 = v333 ^ v360 ^ (v767 * v361);
                                    v333 = v334;
                                    v781 = v363 ^ v358;
                                    *(v329 - 4) = v363 ^ v358;
                                    v781 = __ROR4__(v781, 8);
                                    v331 = (unsigned __int8 *)v785;
                                    *v329 = v776;
                                    v329 += 8;
                                    v776 = __ROR4__(v776, 8);
                                    *(v329 - 13) = v781;
                                    v781 = __ROR4__(v781, 8);
                                    *(v329 - 9) = v776;
                                    v776 = __ROR4__(v776, 8);
                                    *(v329 - 14) = v781;
                                    v781 = __ROR4__(v781, 8);
                                    *(v329 - 10) = v776;
                                    v776 = __ROR4__(v776, 8);
                                    *(v329 - 15) = v781;
                                    *(v329 - 11) = v776;
                                    v322 = __ROR4__(v781, 8);
                                    v326 = __ROR4__(v776, 8);
                                    v781 = v322;
                                    v776 = v326;
                                    --v332;
                                  }
                                  while ( v332 );
                                  v291 = v769;
                                  v288 = (unsigned __int64)v802;
                                  v289 = (_BYTE *)pcchLength;
                                  v122 = v770;
                                }
                                for ( j = 0LL; j < v288; ++j )
                                  v291 ^= v289[j];
                                if ( v291 == *(_QWORD *)((char *)psz + v288) )
                                {
                                  v286 = v289;
                                  v826 = v289;
                                  v873 = (_QWORD *)v288;
                                  v289 = 0LL;
                                  v365 = v800;
                                }
                                else
                                {
                                  v286 = v826;
                                  v365 = -1073425151;
                                }
                                if ( v289 )
                                {
                                  MemoryFree(v289);
                                  v286 = v826;
                                }
                                v221 = 0LL;
                                if ( v365 >= 0 )
                                {
                                  v366 = (unsigned int)v873;
                                  v4 = 0x10000000;
                                  v788 = v286;
                                  v286 = 0LL;
                                  v823 = (unsigned int)v873;
                                  v826 = 0LL;
                                  goto LABEL_477;
                                }
LABEL_476:
                                v366 = v823;
                                v4 = -805306367;
LABEL_477:
                                LODWORD(dwBytes) = v4;
                                if ( v286 )
                                {
                                  v367 = GetProcessHeap();
                                  HeapFree(v367, 0, v286);
                                  v366 = v823;
                                  v826 = v221;
                                }
                                if ( v4 >= 0 )
                                {
                                  LODWORD(v767) = (_DWORD)v221;
                                  v919 = v788;
                                  if ( v366 < 4 )
                                    goto LABEL_513;
                                  LODWORD(v771) = *(_DWORD *)v788;
                                  v321 = RtlULongLongAdd(v788, 4LL, &v919);
                                  if ( v321 < 0 )
                                    goto LABEL_446;
                                  v321 = RtlUIntAdd(0LL, v368, &v767);
                                  if ( v321 < 0 )
                                    goto LABEL_446;
                                  if ( v369 - (int)v767 < v370 )
                                    goto LABEL_513;
                                  v371 = *(unsigned int *)v919;
                                  v321 = RtlULongLongAdd(v919, v370, &v919);
                                  if ( v321 < 0 || (v321 = RtlUIntAdd((unsigned int)v767, v372, &v767), v321 < 0) )
                                  {
LABEL_445:
                                    v122 = v770;
LABEL_446:
                                    v4 = v321 | 0x10000000;
                                    goto LABEL_447;
                                  }
                                  if ( v373 - (int)v767 < (unsigned int)v371 )
                                    goto LABEL_444;
                                  v321 = RtlUIntAdd((unsigned int)v767, (unsigned int)v371, &v767);
                                  if ( v321 < 0 )
                                    goto LABEL_445;
                                  v376 = v919;
                                  if ( v375 + (unsigned __int64)v374 < (unsigned __int64)v919 + v371
                                    || v374 + v375 - (_QWORD)v919 - v371 >= 8 )
                                  {
LABEL_444:
                                    v321 = -1073741762;
                                    goto LABEL_445;
                                  }
                                  LODWORD(v767) = 0;
                                  v377 = 0LL;
                                  v919 = 0LL;
                                  v321 = 0;
                                  if ( v376 )
                                  {
                                    v321 = RtlULongLongAdd(v376, (unsigned int)v371, &v785);
                                    if ( v321 < 0 )
                                      goto LABEL_511;
                                    v379 = v785;
                                    if ( v376 < v785 )
                                    {
                                      do
                                      {
                                        v321 = RtlULongLongAdd(v378, 4LL, &v785);
                                        if ( v321 < 0 )
                                          goto LABEL_445;
                                        if ( (unsigned __int64)v785 > v381 )
                                          goto LABEL_506;
                                        v382 = RtlUIntAdd(4LL, *v380, &v775);
                                        v321 = v382;
                                        if ( v382 >= 0 )
                                          v384 = v775;
                                        v846 = v384;
                                        if ( v382 < 0 )
                                          goto LABEL_445;
                                        v321 = RtlULongLongAdd(v383, v384, &v802);
                                        if ( v321 < 0 )
                                          goto LABEL_445;
                                        v378 = v802;
                                        if ( v802 > v379 )
                                          goto LABEL_506;
                                        LODWORD(v767) = v767 + 1;
                                      }
                                      while ( v802 < v379 );
                                    }
                                    if ( v378 != v379 )
                                    {
LABEL_506:
                                      v321 = -1073741811;
                                      goto LABEL_445;
                                    }
                                    v377 = v919;
                                  }
                                  if ( (_DWORD)v371 )
                                  {
                                    v385 = GetProcessHeap();
                                    v377 = HeapAlloc(v385, 8u, v371);
                                    v919 = v377;
                                    if ( !v377 )
                                    {
                                      v321 = -1073741801;
                                      goto LABEL_511;
                                    }
                                    v321 = 0;
                                  }
                                  if ( v376 )
                                  {
                                    memcpy_0(v377, v376, v371);
                                    v377 = v919;
                                  }
                                  v804 = v377;
                                  v803 = __PAIR64__(v371, v767);
LABEL_511:
                                  if ( v321 >= 0 )
                                  {
                                    v122 = v770;
                                    if ( (_DWORD)v771 == (_DWORD)v803 )
                                      goto LABEL_446;
LABEL_513:
                                    v321 = -1073741762;
                                    goto LABEL_446;
                                  }
                                  goto LABEL_445;
                                }
LABEL_323:
                                v239 = (void *)v766;
                                if ( v766 )
                                {
                                  v240 = GetProcessHeap();
                                  HeapFree(v240, 0, v239);
                                }
                                v241 = v839;
                                if ( v839 )
                                {
                                  v242 = (void *)*((_QWORD *)v839 + 1);
                                  if ( v242 )
                                  {
                                    v243 = GetProcessHeap();
                                    HeapFree(v243, 0, v242);
                                    v241[1] = 0LL;
                                  }
                                  v244 = (void *)v241[3];
                                  if ( v244 )
                                  {
                                    v245 = GetProcessHeap();
                                    HeapFree(v245, 0, v244);
                                    v241[3] = 0LL;
                                  }
                                  v246 = (void *)v241[5];
                                  if ( v246 )
                                  {
                                    v247 = GetProcessHeap();
                                    HeapFree(v247, 0, v246);
                                    v241[5] = 0LL;
                                  }
                                  v248 = GetProcessHeap();
                                  HeapFree(v248, 0, v241);
                                  v241 = 0LL;
                                  v839 = 0LL;
                                }
                                v249 = v822;
                                if ( v822 )
                                {
                                  v250 = GetProcessHeap();
                                  HeapFree(v250, 0, v249);
                                }
                                v251 = v806;
                                if ( v806 )
                                {
                                  v252 = GetProcessHeap();
                                  HeapFree(v252, 0, v251);
                                }
                                if ( v122 )
                                {
                                  v253 = (void *)*((_QWORD *)v122 + 1);
                                  if ( v253 )
                                  {
                                    v254 = GetProcessHeap();
                                    HeapFree(v254, 0, v253);
                                    *((_QWORD *)v122 + 1) = v241;
                                  }
                                  v255 = (void *)*((_QWORD *)v122 + 3);
                                  if ( v255 )
                                  {
                                    v256 = GetProcessHeap();
                                    HeapFree(v256, 0, v255);
                                    *((_QWORD *)v122 + 3) = v241;
                                  }
                                  v257 = (void *)*((_QWORD *)v122 + 5);
                                  if ( v257 )
                                  {
                                    v258 = GetProcessHeap();
                                    HeapFree(v258, 0, v257);
                                    *((_QWORD *)v122 + 5) = v241;
                                  }
                                  v259 = GetProcessHeap();
                                  HeapFree(v259, 0, v122);
                                }
                                v260 = v788;
                                if ( v788 )
                                {
                                  v261 = GetProcessHeap();
                                  HeapFree(v261, 0, v260);
                                }
                                if ( v4 < 0 )
                                  goto LABEL_603;
                                if ( !(_DWORD)v803 )
                                  goto LABEL_514;
                                if ( v804 )
                                {
                                  psz = (STRSAFE_PCNZWCH)v804;
                                  LODWORD(dwBytes) = RtlULongLongAdd(v804, 4LL, &psz);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                  {
                                    v262 = v847;
                                    v263 = v884;
                                  }
                                  else
                                  {
                                    v263 = psz;
                                    v847 = v262;
                                    if ( !v262 )
                                      v263 = 0LL;
                                    v884 = v263;
                                  }
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    goto LABEL_603;
                                  if ( v262 != 4 )
                                    goto LABEL_59;
                                  v805 = *(_DWORD *)v263;
                                }
                                else
                                {
                                  v4 = -1073741811;
                                  LODWORD(dwBytes) = -1073741811;
                                }
                                if ( v4 < 0 )
                                  goto LABEL_603;
                                v4 = v805;
                                if ( v805 == -805306333 )
                                  v4 = -2147024774;
                                LODWORD(dwBytes) = v4;
                                v805 = v4;
                                if ( v4 != -2147024774 && v4 < 0 )
                                  goto LABEL_603;
                                if ( (_DWORD)v803 != 6 )
                                {
LABEL_514:
                                  v4 = -1073425151;
                                  goto LABEL_602;
                                }
                                v386 = 4LL;
                                if ( v804 )
                                {
                                  v387 = (size_t)v804;
                                  v766 = (size_t)v804;
                                  do
                                  {
                                    LODWORD(dwBytes) = RtlULongLongAdd(v387, v386, &v766);
                                    v4 = dwBytes;
                                    if ( (dwBytes & 0x80000000) != 0LL )
                                      goto LABEL_536;
                                    LODWORD(dwBytes) = RtlULongLongAdd(v766, v388, &v766);
                                    v4 = dwBytes;
                                    if ( (dwBytes & 0x80000000) != 0LL )
                                      goto LABEL_536;
                                    v387 = v766;
                                  }
                                  while ( v389 == -1 );
                                  LODWORD(dwBytes) = RtlULongLongAdd(v766, v386, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                  {
LABEL_536:
                                    v390 = v848;
                                    v391 = v885;
                                    goto LABEL_537;
                                  }
                                  v391 = (_QWORD *)v766;
                                  v848 = v390;
                                  if ( !v390 )
                                    v391 = 0LL;
                                  v885 = v391;
LABEL_537:
                                  if ( v4 < 0 )
                                    goto LABEL_603;
                                  if ( v390 != 8 )
                                    goto LABEL_59;
                                  v890 = *v391;
                                }
                                else
                                {
                                  v4 = -1073741811;
                                  LODWORD(dwBytes) = -1073741811;
                                }
                                if ( v4 < 0 )
                                  goto LABEL_603;
                                if ( v804 )
                                {
                                  v392 = (size_t)v804;
                                  v766 = (size_t)v804;
                                  do
                                  {
                                    LODWORD(dwBytes) = RtlULongLongAdd(v392, v386, &v766);
                                    v4 = dwBytes;
                                    if ( (dwBytes & 0x80000000) != 0LL )
                                      goto LABEL_551;
                                    LODWORD(dwBytes) = RtlULongLongAdd(v766, v393, &v766);
                                    v4 = dwBytes;
                                    if ( (dwBytes & 0x80000000) != 0LL )
                                      goto LABEL_551;
                                    v392 = v766;
                                  }
                                  while ( (unsigned int)(v394 + 1) < 2 );
                                  LODWORD(dwBytes) = RtlULongLongAdd(v766, 4LL, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                  {
LABEL_551:
                                    v395 = v849;
                                    v396 = v886;
                                    goto LABEL_552;
                                  }
                                  v396 = (_DWORD *)v766;
                                  v849 = v395;
                                  if ( !v395 )
                                    v396 = 0LL;
                                  v886 = v396;
LABEL_552:
                                  if ( v4 < 0 )
                                    goto LABEL_603;
                                  if ( v395 != 4 )
                                    goto LABEL_59;
                                  v856 = *v396;
                                }
                                else
                                {
                                  v4 = -1073741811;
                                  LODWORD(dwBytes) = -1073741811;
                                }
                                if ( v4 < 0 )
                                  goto LABEL_603;
                                if ( !v804 )
                                {
                                  v4 = -1073741811;
                                  goto LABEL_602;
                                }
                                v397 = (size_t)v804;
                                v766 = (size_t)v804;
                                while ( 1 )
                                {
                                  LODWORD(dwBytes) = RtlULongLongAdd(v397, 4LL, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    break;
                                  LODWORD(dwBytes) = RtlULongLongAdd(v766, v398, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    break;
                                  v397 = v766;
                                  if ( (unsigned int)(v399 + 1) >= 3 )
                                  {
                                    LODWORD(dwBytes) = RtlULongLongAdd(v766, 4LL, &v766);
                                    v4 = dwBytes;
                                    if ( (dwBytes & 0x80000000) == 0LL )
                                    {
                                      v401 = v766;
                                      v851 = v400;
                                      if ( !v400 )
                                        v401 = 0LL;
                                      v887 = v401;
                                    }
                                    break;
                                  }
                                }
                                if ( v4 < 0 )
                                  goto LABEL_603;
                                v402 = (unsigned int *)v804;
                                v766 = (size_t)v804;
                                do
                                {
                                  v403 = *v402;
                                  LODWORD(dwBytes) = RtlULongLongAdd(v402, 4LL, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    goto LABEL_575;
                                  LODWORD(dwBytes) = RtlULongLongAdd(v766, v403, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    goto LABEL_575;
                                  v402 = (unsigned int *)v766;
                                }
                                while ( (unsigned int)(v404 + 1) < 4 );
                                LODWORD(dwBytes) = RtlULongLongAdd(v766, 4LL, &v766);
                                v4 = dwBytes;
                                if ( (dwBytes & 0x80000000) != 0LL )
                                {
LABEL_575:
                                  v405 = v852;
                                  v406 = v888;
                                  goto LABEL_576;
                                }
                                v406 = (unsigned int *)v766;
                                v852 = v405;
                                if ( !v405 )
                                  v406 = 0LL;
                                v888 = v406;
LABEL_576:
                                if ( v4 < 0 )
                                {
                                  v407 = v853;
                                }
                                else
                                {
                                  if ( v405 != 4 )
                                    goto LABEL_59;
                                  v407 = *v406;
                                  v853 = *v406;
                                }
                                if ( v4 < 0 )
                                  goto LABEL_603;
                                v408 = (unsigned int *)v804;
                                v766 = (size_t)v804;
                                do
                                {
                                  v409 = *v408;
                                  LODWORD(dwBytes) = RtlULongLongAdd(v408, 4LL, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    goto LABEL_589;
                                  LODWORD(dwBytes) = RtlULongLongAdd(v766, v409, &v766);
                                  v4 = dwBytes;
                                  if ( (dwBytes & 0x80000000) != 0LL )
                                    goto LABEL_589;
                                  v408 = (unsigned int *)v766;
                                }
                                while ( (unsigned int)(v412 + 1) < 5 );
                                LODWORD(dwBytes) = RtlULongLongAdd(v766, 4LL, &v766);
                                v4 = dwBytes;
                                if ( (dwBytes & 0x80000000) != 0LL )
                                {
LABEL_589:
                                  v413 = v855;
                                  v414 = v889;
                                  goto LABEL_590;
                                }
                                v414 = (_DWORD *)v766;
                                v855 = v413;
                                if ( !v413 )
                                  v414 = 0LL;
                                v889 = v414;
LABEL_590:
                                if ( v4 < 0 )
                                {
                                  v415 = v829;
LABEL_594:
                                  if ( v4 >= 0 )
                                  {
                                    if ( v874 == v890 )
                                    {
                                      v831 = v856;
                                      v835 = v407;
                                      v821 = v415;
                                      if ( v407 > 4 || v410 > 4 )
                                      {
                                        v4 = -2147024774;
                                      }
                                      else
                                      {
                                        memcpy_0(v870, v411, v410);
                                        if ( v805 )
                                          v4 = v805;
                                      }
                                      goto LABEL_602;
                                    }
                                    goto LABEL_514;
                                  }
LABEL_603:
                                  v5 = v768;
                                  goto LABEL_604;
                                }
                                if ( v413 == 4 )
                                {
                                  v415 = *v414;
                                  v829 = *v414;
                                  goto LABEL_594;
                                }
LABEL_59:
                                v4 = -1073741789;
                                goto LABEL_602;
                              }
                              v326 = v323 >> (8 * (8 - v293)) << (8 * (8 - v293));
                            }
                            else
                            {
                              HIDWORD(dwBytes) = -1;
                              v326 = 0;
                              v322 = 0;
                            }
                            v776 = v326;
                            goto LABEL_462;
                          }
                          v299 = v785;
                          if ( v785 )
                          {
                            *(_DWORD *)v285 = v775;
                            v300 = GetProcessHeap();
                            v301 = HeapAlloc(v300, 8u, (SIZE_T)psz);
                            if ( !v301 )
                              goto LABEL_414;
                            v285[1] = v301;
                            memcpy_0(v301, v299, (size_t)psz);
                          }
                          else
                          {
                            *(_DWORD *)v285 = 0;
                            v285[1] = 0LL;
                          }
                          v302 = v802;
                          if ( v802 )
                          {
                            *((_DWORD *)v285 + 4) = v277;
                            v303 = GetProcessHeap();
                            v304 = HeapAlloc(v303, 8u, v277);
                            if ( !v304 )
                              goto LABEL_414;
                            v285[3] = v304;
                            memcpy_0(v304, v302, v277);
                            v221 = 0LL;
                          }
                          else
                          {
                            v221 = 0LL;
                            *((_DWORD *)v285 + 4) = 0;
                            v285[3] = 0LL;
                          }
                          v305 = v919;
                          if ( !v919 )
                          {
                            *((_DWORD *)v285 + 8) = 0;
                            v285[5] = 0LL;
                            goto LABEL_424;
                          }
                          *((_DWORD *)v285 + 8) = v280;
                          v306 = GetProcessHeap();
                          v307 = HeapAlloc(v306, 8u, v280);
                          if ( v307 )
                          {
                            v285[5] = v307;
                            memcpy_0(v307, v305, v280);
                            v221 = 0LL;
LABEL_424:
                            v771 = v285;
                            v272 = 0;
                            v285 = 0LL;
LABEL_425:
                            if ( v285 )
                            {
                              v308 = (void *)v285[1];
                              if ( v308 )
                              {
                                v309 = GetProcessHeap();
                                HeapFree(v309, 0, v308);
                                v285[1] = 0LL;
                              }
                              v310 = (void *)v285[3];
                              if ( v310 )
                              {
                                v311 = GetProcessHeap();
                                HeapFree(v311, 0, v310);
                                v285[3] = 0LL;
                              }
                              v221 = (_QWORD *)v285[5];
                              if ( v221 )
                              {
                                v312 = GetProcessHeap();
                                HeapFree(v312, 0, v221);
                                v221 = 0LL;
                                v285[5] = 0LL;
                              }
                              v313 = GetProcessHeap();
                              HeapFree(v313, 0, v285);
                            }
                            goto LABEL_433;
                          }
LABEL_414:
                          v272 = -1073741801;
                          v221 = 0LL;
                          goto LABEL_425;
                        }
LABEL_398:
                        v272 = -1073741762;
                      }
                    }
                  }
LABEL_399:
                  v221 = 0LL;
                  goto LABEL_400;
                }
                v4 = -2147467259;
              }
              LODWORD(dwBytes) = v4;
              goto LABEL_374;
            }
            v99 = (unsigned int *)v774;
            v766 = (size_t)v774;
            if ( (_DWORD)v773 )
            {
              do
              {
                v100 = RtlUIntAdd(4LL, *v99, &v771);
                LODWORD(dwBytes) = v100;
                v4 = v100;
                if ( v100 >= 0 )
                  v102 = (unsigned int)v771;
                v811 = v102;
                if ( v100 < 0 )
                  goto LABEL_159;
                LODWORD(dwBytes) = RtlULongLongAdd(v101, v102, &v766);
                v4 = dwBytes;
                if ( (dwBytes & 0x80000000) != 0LL )
                  goto LABEL_159;
                v99 = (unsigned int *)v766;
              }
              while ( v103 + 1 < (unsigned int)v773 );
            }
            LODWORD(dwBytes) = RtlULongLongAdd(v99, 4LL, &v791);
            v4 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              goto LABEL_159;
            if ( v104 + 2 <= (_DWORD *)((char *)v774 + HIDWORD(v773)) )
            {
              v105 = v791;
              *v104 = 4;
              *v105 = v817;
              LODWORD(v773) = v773 + 1;
              goto LABEL_159;
            }
LABEL_149:
            v4 = -1073741789;
            LODWORD(dwBytes) = -1073741789;
            goto LABEL_603;
          }
        }
      }
      if ( v4 < 0 )
        goto LABEL_603;
      goto LABEL_143;
    }
LABEL_49:
    v4 = -1073741762;
    goto LABEL_602;
  }
  v4 = -2147024882;
LABEL_1017:
  v454 = v816;
LABEL_1018:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v796);
  if ( v4 < 0 )
  {
    switch ( v4 )
    {
      case -805306316:
        v4 = -1073418222;
LABEL_1027:
        v801 = v4;
        goto LABEL_6;
      case -805306139:
      case -1073425151:
        v4 = -1073418201;
        break;
      case -805306306:
        v4 = -1073418200;
        goto LABEL_1027;
    }
    if ( v4 != -2147024774 )
      goto LABEL_1027;
    goto LABEL_9;
  }
  if ( v454 != 4 )
  {
LABEL_9:
    v801 = -1073418210;
    goto LABEL_6;
  }
  v834 = *v841;
LABEL_6:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v841);
  if ( v801 < 0 || !v834 )
    return 0;
  return v1;
}
