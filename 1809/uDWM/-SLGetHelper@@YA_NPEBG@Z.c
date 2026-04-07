/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180040840
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000EF34 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x180035F08 (StringCchLengthW.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003B7B4 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180040804 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180040824 (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x18004A5B8 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18004A5E4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004B4A8 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004E28A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(const unsigned __int16 *a1)
{
  char v1; // r15
  HLOCAL v2; // rax
  void *v3; // r13
  void *v4; // r12
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  SIZE_T v7; // rsi
  size_t v8; // r12
  HANDLE v9; // rax
  void *v10; // rax
  void *v11; // rsi
  unsigned int v12; // r13d
  int v13; // eax
  int v14; // r11d
  int v15; // r14d
  int v16; // eax
  int v17; // eax
  int v18; // r11d
  int v19; // eax
  int v20; // r9d
  int v21; // eax
  int v22; // r11d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // r11d
  int v27; // eax
  size_t v28; // rdx
  int v29; // r9d
  int v30; // eax
  int v31; // r11d
  int v32; // eax
  int v33; // eax
  int v34; // r11d
  int v35; // eax
  int v36; // r9d
  int v37; // eax
  int v38; // r11d
  int v39; // eax
  int v40; // r9d
  unsigned int v41; // esi
  HANDLE v42; // rax
  void *v43; // rax
  void *v44; // rsi
  _DWORD *v45; // r9
  _DWORD *v46; // rcx
  int v47; // eax
  int *v48; // r9
  int v49; // eax
  unsigned __int64 v50; // r9
  unsigned int v51; // r10d
  int v52; // r11d
  _DWORD *v53; // r9
  void *v54; // rdx
  void *v55; // rcx
  int *v56; // r9
  int v57; // eax
  unsigned __int64 v58; // r9
  unsigned int v59; // r10d
  int v60; // r11d
  unsigned int *v61; // r9
  void *v62; // rdx
  void *v63; // rcx
  int *v64; // r9
  int v65; // eax
  size_t v66; // rdx
  unsigned __int64 v67; // r9
  unsigned int v68; // r10d
  int v69; // r11d
  _DWORD *v70; // r9
  _QWORD *v71; // rax
  STRSAFE_PCNZWCH v72; // r12
  int *v73; // r9
  int v74; // eax
  unsigned __int64 v75; // r9
  unsigned int v76; // r10d
  _DWORD *v77; // r9
  __int64 v78; // r11
  void *v79; // rcx
  int *v80; // r9
  int v81; // eax
  unsigned __int64 v82; // r9
  unsigned int v83; // r10d
  int v84; // r11d
  _DWORD *v85; // r9
  _DWORD *v86; // rcx
  int *v87; // r9
  int v88; // eax
  unsigned __int64 v89; // r9
  unsigned int v90; // r10d
  int v91; // r11d
  _DWORD *v92; // r9
  _DWORD *v93; // rcx
  int v94; // eax
  unsigned int v95; // ecx
  unsigned int v96; // r10d
  int v97; // eax
  unsigned int v98; // r10d
  int v99; // r9d
  int v100; // eax
  int v101; // r9d
  int v102; // eax
  int v103; // r9d
  int v104; // eax
  int v105; // r9d
  int v106; // eax
  int v107; // r9d
  int v108; // eax
  unsigned int v109; // r12d
  unsigned int *v110; // r13
  LPVOID v111; // r9
  int v112; // r14d
  unsigned int v113; // eax
  unsigned int v114; // esi
  HANDLE v115; // rax
  char *v116; // rax
  char *v117; // rsi
  unsigned int v118; // r10d
  size_t v119; // rcx
  wchar_t *v120; // r13
  int v121; // r14d
  size_t v122; // rsi
  char *v123; // r12
  unsigned __int8 *v124; // r9
  unsigned __int8 v125; // al
  size_t v126; // rcx
  int v127; // r11d
  unsigned int v128; // edx
  _BYTE *v129; // r10
  unsigned int v130; // r8d
  size_t v131; // r14
  unsigned __int8 *v132; // r8
  unsigned int v133; // edi
  int v134; // r13d
  int v135; // esi
  int v136; // r12d
  _BYTE *v137; // rax
  int v138; // r10d
  int v139; // r9d
  int v140; // r11d
  int v141; // r8d
  int v142; // r11d
  int v143; // r8d
  int v144; // r11d
  unsigned int v145; // r8d
  int v146; // r11d
  int v147; // r8d
  int v148; // r11d
  int v149; // r8d
  int v150; // r11d
  int v151; // r8d
  unsigned int v152; // r11d
  unsigned int v153; // r8d
  int v154; // r11d
  int v155; // r8d
  int v156; // r11d
  int v157; // r8d
  int v158; // r11d
  int v159; // r8d
  int v160; // r11d
  int v161; // r8d
  unsigned int v162; // r11d
  int v163; // r8d
  unsigned int v164; // r11d
  int v165; // r8d
  unsigned int v166; // r14d
  HANDLE v167; // rax
  _DWORD *v168; // rax
  _DWORD *v169; // rsi
  HANDLE v170; // rax
  void *v171; // rax
  HANDLE v172; // rax
  _OWORD *v173; // rax
  void *v174; // r12
  HANDLE v175; // rax
  _QWORD *v176; // rax
  int v177; // r14d
  HANDLE v178; // rax
  const void **v179; // r12
  int v180; // r14d
  unsigned int v181; // eax
  unsigned int v182; // esi
  HANDLE v183; // rax
  _DWORD *v184; // rax
  void *v185; // rsi
  void *v186; // rcx
  void *v187; // rcx
  int v188; // eax
  int v189; // ecx
  unsigned int v190; // eax
  int v191; // eax
  unsigned int v192; // r9d
  _QWORD *v193; // r12
  unsigned int *v194; // rcx
  unsigned int v195; // r12d
  int v196; // eax
  int v197; // r10d
  int v198; // r10d
  void *v199; // rax
  unsigned int *v200; // rcx
  unsigned int v201; // r12d
  int v202; // r9d
  int v203; // eax
  int v204; // r10d
  int v205; // r10d
  void *v206; // rax
  int v207; // r11d
  unsigned int v208; // eax
  unsigned int v209; // esi
  HANDLE v210; // rax
  _DWORD *v211; // rax
  _DWORD *v212; // rsi
  FARPROC ProcAddress; // rax
  int v214; // eax
  unsigned int v215; // r9d
  int v216; // r14d
  int v217; // r9d
  const wchar_t *v218; // r10
  int v219; // r10d
  int v220; // r9d
  SIZE_T v221; // r12
  int v222; // r9d
  int v223; // r9d
  SIZE_T v224; // r13
  int v225; // r9d
  int v226; // r9d
  int v227; // r10d
  HANDLE v228; // rax
  _QWORD *v229; // rsi
  const void *v230; // r14
  HANDLE v231; // rax
  void *v232; // rax
  void *v233; // r14
  HANDLE v234; // rax
  void *v235; // rax
  void *v236; // r14
  HANDLE v237; // rax
  void *v238; // rax
  _QWORD *v239; // rsi
  void *v240; // rsi
  __int64 v241; // r14
  unsigned __int64 v242; // r14
  _BYTE *v243; // r12
  unsigned __int8 *v244; // r9
  unsigned __int8 v245; // al
  size_t v246; // r10
  unsigned int v247; // r8d
  int v248; // edx
  unsigned int v249; // esi
  int v250; // r13d
  int v251; // r12d
  unsigned int v252; // r8d
  unsigned __int64 v253; // rbx
  int v254; // r14d
  unsigned __int8 *v255; // r9
  unsigned int v256; // eax
  int v257; // r11d
  int v258; // esi
  int v259; // r10d
  int v260; // r9d
  int v261; // esi
  unsigned int v262; // r9d
  int v263; // esi
  int v264; // r9d
  unsigned int v265; // esi
  int v266; // r9d
  int v267; // esi
  int v268; // r9d
  unsigned int v269; // esi
  int v270; // r9d
  int v271; // esi
  unsigned int v272; // r9d
  int v273; // esi
  int v274; // r9d
  int v275; // esi
  int v276; // r9d
  int v277; // r8d
  int v278; // r9d
  int v279; // r8d
  int v280; // r9d
  unsigned int v281; // r8d
  int v282; // r9d
  int v283; // edx
  int v284; // ecx
  wchar_t *v285; // r9
  int v286; // edx
  unsigned __int64 i; // rcx
  int v288; // r14d
  unsigned int v289; // r9d
  int v290; // r11d
  int v291; // r14d
  int v292; // r9d
  unsigned int v293; // r11d
  SIZE_T v294; // r13
  int v295; // r11d
  int v296; // r9d
  unsigned int v297; // r9d
  __int64 v298; // r10
  const void *v299; // rsi
  void *v300; // rax
  STRSAFE_PCNZWCH v301; // r9
  size_t v302; // r11
  int *v303; // r9
  size_t v304; // r11
  int v305; // eax
  unsigned __int64 v306; // r9
  unsigned int v307; // r10d
  HANDLE v308; // rax
  void *v309; // rsi
  HANDLE v310; // rax
  _QWORD *v311; // r12
  void *v312; // rsi
  HANDLE v313; // rax
  void *v314; // rsi
  HANDLE v315; // rax
  void *v316; // rsi
  HANDLE v317; // rax
  HANDLE v318; // rax
  void *v319; // rsi
  HANDLE v320; // rax
  void *v321; // rsi
  HANDLE v322; // rax
  void *v323; // rsi
  HANDLE v324; // rax
  void *v325; // rsi
  HANDLE v326; // rax
  void *v327; // rsi
  HANDLE v328; // rax
  HANDLE v329; // rax
  void *v330; // rsi
  HANDLE v331; // rax
  int v332; // r9d
  STRSAFE_PCNZWCH v333; // rax
  __int64 v334; // r11
  LPVOID v335; // rcx
  unsigned int v336; // r10d
  int v337; // r9d
  int v338; // r9d
  _QWORD *v339; // rax
  LPVOID v340; // rcx
  unsigned int v341; // r10d
  int v342; // r9d
  int v343; // r9d
  _DWORD *v344; // rax
  LPVOID v345; // rcx
  unsigned int v346; // r10d
  int v347; // r9d
  int v348; // r10d
  void *v349; // r11
  unsigned int *v350; // rcx
  unsigned int v351; // esi
  int v352; // r9d
  int v353; // r9d
  unsigned int *v354; // rax
  unsigned int v355; // esi
  unsigned int *v356; // rcx
  unsigned int v357; // r12d
  unsigned int v358; // r10d
  const void *v359; // r11
  int v360; // r9d
  int v361; // r9d
  _DWORD *v362; // rax
  int v363; // ecx
  void *v364; // r11
  void *v365; // rsi
  HANDLE v366; // rax
  void *v367; // rsi
  HANDLE v368; // rax
  HANDLE v369; // rax
  HANDLE v370; // rax
  int v371; // ebx
  int v373; // eax
  int v374; // edx
  int v375; // eax
  int v376; // edx
  int v377; // eax
  int v378; // eax
  int v379; // edx
  int v380; // eax
  int v381; // edx
  int v382; // eax
  int v383; // edx
  HANDLE v384; // rax
  char v385; // r11
  int v386; // edi
  int v387; // edx
  int v388; // ecx
  unsigned int v389; // r11d
  int v390; // ecx
  char v391; // r14
  void *v392; // r12
  HANDLE v393; // rax
  void *v394; // r12
  HANDLE v395; // rax
  HANDLE v396; // rax
  HANDLE v397; // rax
  void *v398; // rsi
  HANDLE v399; // rax
  void *v400; // rsi
  HANDLE v401; // rax
  HANDLE v402; // rax
  HANDLE v403; // rax
  HANDLE v404; // rax
  signed int LastError; // eax
  void *v406; // r12
  HANDLE v407; // rax
  void *v408; // r12
  HANDLE v409; // rax
  HANDLE v410; // rax
  HANDLE v411; // rax
  void *v412; // r12
  HANDLE v413; // rax
  void *v414; // r12
  HANDLE v415; // rax
  HANDLE v416; // rax
  HANDLE v417; // rax
  int v418; // esi
  char v419; // r11
  int v420; // ebx
  int v421; // edx
  int v422; // ecx
  unsigned int v423; // edx
  int v424; // ecx
  char v425; // r11
  HANDLE v426; // rax
  void *v427; // r13
  HANDLE v428; // rax
  void *v429; // rax
  void *v430; // rsi
  size_t v431; // r12
  HANDLE v432; // rax
  wchar_t *v433; // rax
  void *v434; // rsi
  unsigned int v435; // r13d
  unsigned int v436; // r10d
  int v437; // eax
  unsigned int v438; // r10d
  int v439; // r9d
  int v440; // eax
  unsigned int v441; // r10d
  int v442; // r9d
  int v443; // eax
  int v444; // r9d
  unsigned int v445; // esi
  HANDLE v446; // rax
  void *v447; // rax
  unsigned int *v448; // r9
  unsigned int v449; // r10d
  _DWORD *v450; // rcx
  int v451; // r9d
  void *v452; // rbx
  HANDLE v453; // rax
  void *v454; // rbx
  HANDLE v455; // rax
  HANDLE v456; // rax
  HANDLE v457; // rax
  int *v458; // r10
  unsigned __int64 v459; // r10
  unsigned int v460; // r9d
  int v461; // r11d
  int v462; // eax
  _DWORD *v463; // r10
  int v464; // esi
  const void *v465; // rdx
  void *v466; // rcx
  unsigned int v467; // r10d
  int *v468; // r10
  unsigned __int64 v469; // r10
  unsigned int v470; // r9d
  int v471; // r11d
  int v472; // eax
  unsigned int *v473; // r10
  int v474; // esi
  STRSAFE_PCNZWCH v475; // rdx
  void *v476; // rcx
  unsigned int v477; // r10d
  int *v478; // r10
  unsigned __int64 v479; // r10
  unsigned int v480; // r9d
  int v481; // r11d
  int v482; // eax
  _DWORD *v483; // r10
  _QWORD *v484; // rax
  unsigned int v485; // ecx
  unsigned int v486; // r9d
  size_t *v487; // r13
  int v488; // esi
  unsigned int v489; // r9d
  void *v490; // r10
  unsigned int v491; // eax
  unsigned int v492; // esi
  HANDLE v493; // rax
  char *v494; // rax
  char *v495; // r12
  unsigned int v496; // r9d
  size_t v497; // rcx
  HANDLE v498; // rax
  int v499; // esi
  _QWORD *v500; // r12
  int v501; // esi
  SIZE_T v502; // rsi
  _BYTE *v503; // rax
  _BYTE *v504; // rdx
  unsigned __int8 *v505; // r8
  unsigned __int8 v506; // al
  SIZE_T v507; // rcx
  _BYTE *v508; // r9
  unsigned int v509; // r10d
  int v510; // r11d
  unsigned int v511; // edx
  int v512; // r11d
  char v513; // r10
  int v514; // edi
  void *v515; // rcx
  int v516; // r8d
  int v517; // ecx
  unsigned int v518; // r11d
  int v519; // ecx
  char v520; // bl
  int v521; // edx
  SIZE_T v522; // rdi
  unsigned int v523; // r13d
  int v524; // r12d
  int v525; // r14d
  unsigned __int8 *v526; // r8
  unsigned int v527; // esi
  int v528; // eax
  int v529; // r9d
  int v530; // r8d
  size_t v531; // rcx
  int v532; // r8d
  int v533; // r11d
  int v534; // r10d
  int v535; // r11d
  int v536; // r10d
  int v537; // r11d
  unsigned int v538; // r10d
  int v539; // r11d
  int v540; // r10d
  int v541; // r11d
  int v542; // r10d
  int v543; // r11d
  int v544; // r10d
  unsigned int v545; // r11d
  unsigned int v546; // r10d
  int v547; // r11d
  int v548; // r10d
  int v549; // r11d
  int v550; // r10d
  int v551; // r11d
  int v552; // r10d
  int v553; // r11d
  int v554; // r10d
  unsigned int v555; // r11d
  int v556; // r10d
  _BYTE *v557; // rdx
  int v558; // r10d
  __int64 v559; // rcx
  void *v560; // rax
  unsigned int v561; // esi
  HANDLE v562; // rax
  _DWORD *v563; // rax
  _DWORD *v564; // rbx
  HANDLE v565; // rax
  void *v566; // rax
  HANDLE v567; // rax
  _OWORD *v568; // rax
  HANDLE v569; // rax
  _QWORD *v570; // rax
  HANDLE v571; // rax
  HANDLE v572; // rax
  HANDLE v573; // rax
  HANDLE v574; // rax
  void *v575; // rbx
  HANDLE v576; // rax
  void *v577; // rbx
  HANDLE v578; // rax
  void *v579; // rbx
  HANDLE v580; // rax
  void *v581; // rbx
  HANDLE v582; // rax
  HANDLE v583; // rax
  const void **v584; // r12
  int v585; // esi
  int v586; // r9d
  int v587; // r9d
  unsigned int v588; // eax
  unsigned int v589; // ebx
  HANDLE v590; // rax
  _DWORD *v591; // rax
  void *v592; // rbx
  int v593; // eax
  void *v594; // rcx
  int v595; // eax
  void *v596; // rcx
  int v597; // eax
  HANDLE v598; // rax
  int v599; // eax
  int v600; // ecx
  unsigned int v601; // eax
  int v602; // eax
  unsigned int v603; // r9d
  unsigned int *v604; // rcx
  int v605; // ebx
  unsigned int v606; // r12d
  int v607; // ebx
  void *v608; // rax
  unsigned int v609; // ebx
  HANDLE v610; // rax
  _DWORD *v611; // rax
  _DWORD *v612; // rbx
  unsigned int *v613; // rcx
  int v614; // ebx
  unsigned int v615; // r12d
  int v616; // r9d
  int v617; // ebx
  void *v618; // rax
  int v619; // r10d
  int v620; // r11d
  unsigned int v621; // eax
  FARPROC v622; // rax
  int v623; // eax
  unsigned int v624; // r9d
  signed int v625; // eax
  int v626; // esi
  int v627; // r10d
  int v628; // r9d
  SIZE_T v629; // r11
  int v630; // r11d
  int v631; // r9d
  __int64 v632; // r10
  SIZE_T v633; // r12
  int v634; // r10d
  int v635; // r9d
  int v636; // r9d
  unsigned int v637; // r10d
  int v638; // r9d
  unsigned int v639; // r10d
  int v640; // r9d
  int v641; // r10d
  int v642; // r11d
  HANDLE v643; // rax
  _QWORD *v644; // rax
  size_t v645; // rbx
  const void *v646; // rsi
  HANDLE v647; // rax
  SIZE_T v648; // r13
  void *v649; // rax
  void *v650; // rsi
  HANDLE v651; // rax
  void *v652; // rax
  void *v653; // rsi
  unsigned int v654; // eax
  unsigned int v655; // r12d
  HANDLE v656; // rax
  void *v657; // rax
  void *v658; // r12
  HANDLE v659; // rax
  void *v660; // r12
  HANDLE v661; // rax
  void *v662; // r12
  HANDLE v663; // rax
  HANDLE v664; // rax
  _QWORD *v665; // rbx
  void *v666; // r12
  HANDLE v667; // rax
  void *v668; // r12
  HANDLE v669; // rax
  void *v670; // r12
  HANDLE v671; // rax
  HANDLE v672; // rax
  wchar_t *v673; // rbx
  __int64 v674; // rsi
  SIZE_T v675; // rsi
  void *v676; // rax
  _BYTE *v677; // r12
  unsigned __int8 *v678; // r9
  unsigned __int8 v679; // al
  _BYTE *v680; // r10
  int v681; // r8d
  int v682; // ebx
  unsigned int v683; // edi
  char v684; // r14
  int v685; // edx
  unsigned int v686; // edx
  int v687; // ecx
  char v688; // bl
  int v689; // edx
  int v690; // ebx
  _BYTE *v691; // r13
  unsigned __int8 *v692; // r14
  SIZE_T v693; // rsi
  int v694; // r12d
  int v695; // eax
  int v696; // r10d
  int v697; // r9d
  int v698; // ecx
  int v699; // r10d
  unsigned int v700; // r11d
  int v701; // r9d
  unsigned int v702; // r8d
  int v703; // r11d
  unsigned int v704; // r8d
  int v705; // r11d
  int v706; // r8d
  unsigned int v707; // r11d
  int v708; // r8d
  int v709; // r11d
  int v710; // r8d
  unsigned int v711; // r11d
  int v712; // r8d
  int v713; // r11d
  unsigned int v714; // r8d
  int v715; // r11d
  int v716; // r8d
  int v717; // r11d
  int v718; // r8d
  unsigned int v719; // r11d
  int v720; // r8d
  int v721; // r11d
  int v722; // r8d
  unsigned int v723; // r11d
  int v724; // r8d
  int v725; // edx
  SIZE_T j; // rcx
  int v727; // edi
  unsigned int v728; // r9d
  HANDLE v729; // rax
  int v730; // esi
  int v731; // r9d
  SIZE_T v732; // r12
  int v733; // r9d
  unsigned int v734; // r9d
  __int64 v735; // r10
  void *v736; // rbx
  void *v737; // rax
  SIZE_T v738; // r9
  SIZE_T v739; // r11
  int *v740; // r9
  SIZE_T v741; // r11
  int v742; // eax
  unsigned __int64 v743; // r9
  unsigned int v744; // r10d
  HANDLE v745; // rax
  void *v746; // rbx
  HANDLE v747; // rax
  _QWORD *v748; // r12
  void *v749; // rbx
  HANDLE v750; // rax
  void *v751; // rbx
  HANDLE v752; // rax
  void *v753; // rbx
  HANDLE v754; // rax
  HANDLE v755; // rax
  void *v756; // rbx
  HANDLE v757; // rax
  void *v758; // rbx
  HANDLE v759; // rax
  void *v760; // rbx
  HANDLE v761; // rax
  void *v762; // rbx
  HANDLE v763; // rax
  void *v764; // rbx
  HANDLE v765; // rax
  HANDLE v766; // rax
  wchar_t *v767; // rbx
  HANDLE v768; // rax
  unsigned int *v769; // rbx
  unsigned int v770; // r9d
  int v771; // r10d
  int *v772; // rax
  __int64 v773; // r10
  int v774; // r9d
  int v775; // r9d
  _QWORD *v776; // rax
  int v777; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int dwBytes; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int dwBytes_4; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v780; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v781; // [rsp+48h] [rbp-C0h]
  void *v782; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v783; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v784; // [rsp+60h] [rbp-A8h] BYREF
  size_t v785; // [rsp+68h] [rbp-A0h] BYREF
  SIZE_T v786; // [rsp+70h] [rbp-98h]
  unsigned int *v787; // [rsp+78h] [rbp-90h]
  size_t v788; // [rsp+80h] [rbp-88h] BYREF
  void *v789; // [rsp+88h] [rbp-80h]
  int v790; // [rsp+90h] [rbp-78h]
  LPVOID v791; // [rsp+98h] [rbp-70h]
  int v792; // [rsp+A0h] [rbp-68h]
  int v793; // [rsp+A4h] [rbp-64h]
  int v794; // [rsp+A8h] [rbp-60h]
  int v795; // [rsp+ACh] [rbp-5Ch]
  size_t pcchLength; // [rsp+B0h] [rbp-58h] BYREF
  int v797; // [rsp+B8h] [rbp-50h]
  int v798; // [rsp+BCh] [rbp-4Ch]
  unsigned int v799; // [rsp+C0h] [rbp-48h]
  unsigned int v800; // [rsp+C4h] [rbp-44h]
  void *v801; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v802; // [rsp+D0h] [rbp-38h] BYREF
  size_t v803; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v804; // [rsp+E0h] [rbp-28h]
  int v805; // [rsp+E8h] [rbp-20h]
  STRSAFE_PCNZWCH psz; // [rsp+F0h] [rbp-18h] BYREF
  SIZE_T v807; // [rsp+F8h] [rbp-10h] BYREF
  void *v808; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v809; // [rsp+108h] [rbp+0h]
  unsigned int v810; // [rsp+10Ch] [rbp+4h]
  int v811; // [rsp+110h] [rbp+8h]
  int v812; // [rsp+114h] [rbp+Ch]
  void *v813; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v814; // [rsp+120h] [rbp+18h]
  unsigned int v815; // [rsp+124h] [rbp+1Ch] BYREF
  unsigned int v816; // [rsp+128h] [rbp+20h] BYREF
  int v817; // [rsp+12Ch] [rbp+24h]
  unsigned __int64 v818; // [rsp+130h] [rbp+28h]
  LPVOID v819; // [rsp+138h] [rbp+30h]
  int v820; // [rsp+140h] [rbp+38h]
  void *v821; // [rsp+148h] [rbp+40h]
  int v822; // [rsp+150h] [rbp+48h]
  int v823; // [rsp+154h] [rbp+4Ch]
  unsigned int v824; // [rsp+158h] [rbp+50h]
  int v825; // [rsp+15Ch] [rbp+54h]
  int v826; // [rsp+160h] [rbp+58h]
  unsigned int v827; // [rsp+164h] [rbp+5Ch]
  unsigned int v828; // [rsp+168h] [rbp+60h]
  unsigned int v829; // [rsp+16Ch] [rbp+64h] BYREF
  unsigned int v830; // [rsp+170h] [rbp+68h]
  int v831; // [rsp+178h] [rbp+70h]
  int v832; // [rsp+180h] [rbp+78h]
  int v833; // [rsp+184h] [rbp+7Ch]
  int v834; // [rsp+188h] [rbp+80h]
  unsigned int v835; // [rsp+18Ch] [rbp+84h] BYREF
  unsigned int v836; // [rsp+190h] [rbp+88h]
  SIZE_T v837; // [rsp+198h] [rbp+90h] BYREF
  LPVOID v838; // [rsp+1A0h] [rbp+98h]
  int v839; // [rsp+1A8h] [rbp+A0h]
  void *v840; // [rsp+1B0h] [rbp+A8h]
  wchar_t *v841; // [rsp+1B8h] [rbp+B0h]
  unsigned int v842; // [rsp+1C0h] [rbp+B8h]
  int v843; // [rsp+1C4h] [rbp+BCh]
  int v844; // [rsp+1C8h] [rbp+C0h]
  unsigned int v845; // [rsp+1CCh] [rbp+C4h]
  unsigned int v846; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned int v847; // [rsp+1D4h] [rbp+CCh]
  unsigned int v848; // [rsp+1D8h] [rbp+D0h]
  unsigned __int64 v849; // [rsp+1E0h] [rbp+D8h]
  LPVOID v850; // [rsp+1E8h] [rbp+E0h]
  void *v851; // [rsp+1F0h] [rbp+E8h]
  unsigned int v852; // [rsp+1F8h] [rbp+F0h] BYREF
  int v853; // [rsp+1FCh] [rbp+F4h]
  unsigned int v854; // [rsp+200h] [rbp+F8h]
  LPVOID v855; // [rsp+208h] [rbp+100h]
  LPVOID v856; // [rsp+210h] [rbp+108h]
  int v857; // [rsp+218h] [rbp+110h]
  int v858; // [rsp+220h] [rbp+118h]
  int v859; // [rsp+228h] [rbp+120h]
  int v860; // [rsp+230h] [rbp+128h]
  int v861; // [rsp+234h] [rbp+12Ch]
  unsigned int v862; // [rsp+238h] [rbp+130h]
  int v863; // [rsp+23Ch] [rbp+134h]
  int v864; // [rsp+240h] [rbp+138h]
  int v865; // [rsp+244h] [rbp+13Ch]
  LPVOID lpMem; // [rsp+248h] [rbp+140h]
  int v867; // [rsp+250h] [rbp+148h]
  unsigned int v868; // [rsp+254h] [rbp+14Ch]
  int v869; // [rsp+258h] [rbp+150h]
  LPVOID v870; // [rsp+260h] [rbp+158h]
  int v871; // [rsp+268h] [rbp+160h]
  int *v872; // [rsp+270h] [rbp+168h] BYREF
  int v873; // [rsp+278h] [rbp+170h]
  int v874; // [rsp+280h] [rbp+178h]
  int v875; // [rsp+284h] [rbp+17Ch]
  int v876; // [rsp+288h] [rbp+180h]
  int v877; // [rsp+28Ch] [rbp+184h]
  int v878; // [rsp+290h] [rbp+188h]
  int v879; // [rsp+294h] [rbp+18Ch]
  unsigned int v880; // [rsp+298h] [rbp+190h]
  _QWORD *v881; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 v882; // [rsp+2A8h] [rbp+1A0h]
  size_t v883; // [rsp+2B0h] [rbp+1A8h]
  size_t v884; // [rsp+2B8h] [rbp+1B0h]
  unsigned __int64 v885; // [rsp+2C0h] [rbp+1B8h]
  size_t Size; // [rsp+2C8h] [rbp+1C0h]
  SIZE_T v887; // [rsp+2D0h] [rbp+1C8h]
  void *v888; // [rsp+2D8h] [rbp+1D0h]
  size_t v889; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int64 v890; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v891; // [rsp+2F0h] [rbp+1E8h]
  size_t v892; // [rsp+2F8h] [rbp+1F0h]
  __int64 *v893; // [rsp+300h] [rbp+1F8h]
  __int64 v894; // [rsp+308h] [rbp+200h]
  int v895; // [rsp+310h] [rbp+208h]
  __int64 v896; // [rsp+318h] [rbp+210h]
  void *v897; // [rsp+320h] [rbp+218h]
  void *v898; // [rsp+328h] [rbp+220h]
  HMODULE phModule; // [rsp+330h] [rbp+228h] BYREF
  const wchar_t *v900; // [rsp+338h] [rbp+230h]
  _QWORD *v901; // [rsp+340h] [rbp+238h]
  _DWORD *v902; // [rsp+348h] [rbp+240h]
  void *v903; // [rsp+350h] [rbp+248h]
  unsigned int *v904; // [rsp+358h] [rbp+250h]
  _DWORD *v905; // [rsp+360h] [rbp+258h]
  __int64 v906; // [rsp+368h] [rbp+260h]
  void *v907; // [rsp+370h] [rbp+268h]
  void *v908; // [rsp+378h] [rbp+270h]
  unsigned __int64 v909; // [rsp+380h] [rbp+278h]
  unsigned __int64 v910; // [rsp+388h] [rbp+280h]
  SIZE_T v911; // [rsp+390h] [rbp+288h]
  unsigned int v912; // [rsp+398h] [rbp+290h]
  _OWORD *v913; // [rsp+3A0h] [rbp+298h]
  int v914; // [rsp+3A8h] [rbp+2A0h]
  SIZE_T v915; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v916; // [rsp+3B8h] [rbp+2B0h]
  __int64 v917; // [rsp+3C0h] [rbp+2B8h]
  _OWORD *v918; // [rsp+3C8h] [rbp+2C0h]
  __int64 v919; // [rsp+3D0h] [rbp+2C8h]
  void *v920; // [rsp+3D8h] [rbp+2D0h]
  void *v921; // [rsp+3E0h] [rbp+2D8h]
  HMODULE hModule; // [rsp+3E8h] [rbp+2E0h] BYREF
  void *Src; // [rsp+3F0h] [rbp+2E8h]
  void *v924; // [rsp+3F8h] [rbp+2F0h]
  _QWORD v925[2]; // [rsp+400h] [rbp+2F8h] BYREF
  unsigned int v926; // [rsp+410h] [rbp+308h]
  unsigned int v927; // [rsp+414h] [rbp+30Ch]
  int v928; // [rsp+418h] [rbp+310h]
  _QWORD v929[2]; // [rsp+420h] [rbp+318h] BYREF
  unsigned int v930; // [rsp+430h] [rbp+328h]
  unsigned int v931; // [rsp+434h] [rbp+32Ch]
  int v932; // [rsp+438h] [rbp+330h]
  int *v933; // [rsp+440h] [rbp+338h]
  _QWORD *v934; // [rsp+448h] [rbp+340h]
  __int64 v935; // [rsp+450h] [rbp+348h]
  void *v936; // [rsp+458h] [rbp+350h] BYREF
  void *v937; // [rsp+460h] [rbp+358h] BYREF

  psz = a1;
  v844 = 0;
  v872 = 0LL;
  v817 = 0;
  v1 = 1;
  if ( !a1 )
  {
    v817 = -2147024809;
    goto LABEL_450;
  }
  v843 = 0;
  v813 = 0LL;
  v834 = 0;
  v845 = 0;
  v2 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v813, v2);
  v888 = v813;
  if ( !v813 )
  {
    v15 = -2147024882;
    goto LABEL_1015;
  }
  v784 = 0LL;
  v788 = 0LL;
  v789 = 0LL;
  v3 = 0LL;
  v818 = 0LL;
  v4 = 0LL;
  v819 = 0LL;
  Src = &unk_1800D45F0;
  v853 = 0;
  v820 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v802 = -1;
  v801 = v6;
  v7 = (SIZE_T)v6;
  if ( v6 )
  {
    memcpy_0(v6, Src, Size);
    v8 = (unsigned int)Size;
    v3 = (void *)v7;
    v786 = v7;
    v924 = &unk_1800D4538;
    v889 = 8LL;
    v9 = GetProcessHeap();
    v10 = HeapAlloc(v9, 8u, 8uLL);
    v821 = v10;
    v11 = v10;
    if ( !v10 )
    {
      v15 = -1073741801;
      v777 = -1073741801;
      goto LABEL_435;
    }
    memcpy_0(v10, v924, v889);
    v12 = v889;
    v784 = v11;
    v882 = __rdtsc();
    dwBytes = 0;
    v13 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
    v14 = v811;
    v15 = v13;
    v777 = v13;
    if ( v13 >= 0 )
      v14 = dwBytes_4;
    v811 = v14;
    if ( v13 < 0 )
      goto LABEL_434;
    v16 = RtlUIntAdd(0, v14, (int *)&dwBytes);
    v15 = v16 | 0x10000000;
    v777 = v16 | 0x10000000;
    if ( v16 < 0 )
      goto LABEL_434;
    v17 = RtlUIntAdd(4u, v8, (int *)&dwBytes_4);
    v777 = v17;
    v15 = v17;
    if ( v17 >= 0 )
      v18 = dwBytes_4;
    v811 = v18;
    if ( v17 < 0 )
      goto LABEL_434;
    v19 = RtlUIntAdd(dwBytes, v18, (int *)&dwBytes);
    v15 = v20 | v19;
    v777 = v20 | v19;
    if ( (v20 | v19) < 0 )
      goto LABEL_434;
    v21 = RtlUIntAdd(4u, v12, (int *)&dwBytes_4);
    v777 = v21;
    v15 = v21;
    if ( v21 >= 0 )
      v22 = dwBytes_4;
    v811 = v22;
    if ( v21 < 0 )
      goto LABEL_434;
    v23 = RtlUIntAdd(dwBytes, v22, (int *)&dwBytes);
    v15 = v24 | v23;
    v777 = v24 | v23;
    if ( (v24 | v23) < 0 )
      goto LABEL_434;
    v25 = RtlUIntAdd(4u, 8, (int *)&dwBytes_4);
    v777 = v25;
    v15 = v25;
    if ( v25 >= 0 )
      v26 = dwBytes_4;
    v811 = v26;
    if ( v25 < 0 )
      goto LABEL_434;
    v27 = RtlUIntAdd(dwBytes, v26, (int *)&dwBytes);
    v15 = v29 | v27;
    v777 = v29 | v27;
    if ( (v29 | v27) < 0 )
      goto LABEL_434;
    if ( StringCchLengthW(psz, v28, &pcchLength) < 0 )
    {
LABEL_459:
      v15 = -1073741762;
LABEL_433:
      v777 = v15;
      goto LABEL_434;
    }
    v30 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&dwBytes_4);
    v777 = v30;
    v15 = v30;
    if ( v30 >= 0 )
      v31 = dwBytes_4;
    v811 = v31;
    if ( v30 < 0 )
      goto LABEL_434;
    v32 = RtlUIntAdd(dwBytes, v31, (int *)&dwBytes);
    v15 = v32 | 0x10000000;
    v777 = v32 | 0x10000000;
    if ( v32 < 0 )
      goto LABEL_434;
    v33 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
    v777 = v33;
    v15 = v33;
    if ( v33 >= 0 )
      v34 = dwBytes_4;
    v811 = v34;
    if ( v33 < 0 )
      goto LABEL_434;
    v35 = RtlUIntAdd(dwBytes, v34, (int *)&dwBytes);
    v15 = v36 | v35;
    v777 = v36 | v35;
    if ( (v36 | v35) < 0 )
      goto LABEL_434;
    v37 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
    v777 = v37;
    v15 = v37;
    if ( v37 >= 0 )
      v38 = dwBytes_4;
    v811 = v38;
    if ( v37 < 0 )
      goto LABEL_434;
    v39 = RtlUIntAdd(dwBytes, v38, (int *)&dwBytes);
    v15 = v40 | v39;
    v777 = v40 | v39;
    if ( (v40 | v39) < 0 )
      goto LABEL_434;
    HIDWORD(v788) = dwBytes;
    v41 = dwBytes;
    v42 = GetProcessHeap();
    v43 = HeapAlloc(v42, 8u, v41);
    v44 = 0LL;
    if ( !v43 )
    {
      v15 = -1073741801;
      goto LABEL_433;
    }
    v789 = v43;
    LODWORD(v788) = 0;
    v858 = 0;
    v15 = RtlULongLongAdd((unsigned __int64)v43, 4LL, (__int64 *)&v808);
    v777 = v15;
    if ( v15 < 0 )
      goto LABEL_434;
    if ( v45 + 2 > (_DWORD *)((char *)v45 + HIDWORD(v788)) )
      goto LABEL_461;
    v46 = v808;
    *v45 = 4;
    *v46 = v858;
    v47 = v788 + 1;
    LODWORD(v788) = v788 + 1;
    if ( (_DWORD)v8 )
    {
      if ( v789 )
      {
        v48 = (int *)v789;
        v785 = (size_t)v789;
        if ( v47 )
        {
          while ( 1 )
          {
            v49 = RtlUIntAdd(4u, *v48, (int *)&dwBytes_4);
            v777 = v49;
            v15 = v49;
            if ( v49 >= 0 )
              v51 = dwBytes_4;
            v822 = v51;
            if ( v49 < 0 )
              break;
            v777 = RtlULongLongAdd(v50, v51, (__int64 *)&v785);
            v15 = v777;
            if ( v777 < 0 )
              break;
            v48 = (int *)v785;
            if ( v52 + 1 >= (unsigned int)v788 )
              goto LABEL_45;
          }
        }
        else
        {
LABEL_45:
          v777 = RtlULongLongAdd((unsigned __int64)v48, 4LL, (__int64 *)&v808);
          v15 = v777;
          if ( v777 >= 0 )
          {
            if ( (char *)v53 + v8 + 4 > (char *)v789 + HIDWORD(v788) )
              goto LABEL_461;
            v54 = v801;
            v55 = v808;
            *v53 = v8;
            memcpy_0(v55, v54, v8);
            LODWORD(v788) = v788 + 1;
          }
        }
      }
      else
      {
        v373 = RtlUIntAdd(4u, v8, (int *)&dwBytes_4);
        v374 = v822;
        v15 = v373;
        v777 = v373;
        if ( v373 >= 0 )
          v374 = dwBytes_4;
        v822 = v374;
        if ( v373 >= 0 )
        {
          v777 = RtlUIntAdd(HIDWORD(v788), v374, (int *)&v788 + 1);
          v15 = v777;
          if ( v777 >= 0 )
          {
            LODWORD(v788) = v788 + 1;
            goto LABEL_49;
          }
        }
      }
    }
    else
    {
      v15 = -1073741811;
      v777 = -1073741811;
    }
    if ( v15 < 0 )
      goto LABEL_434;
LABEL_49:
    if ( v12 )
    {
      if ( v789 )
      {
        v56 = (int *)v789;
        v785 = (size_t)v789;
        if ( (_DWORD)v788 )
        {
          while ( 1 )
          {
            v57 = RtlUIntAdd(4u, *v56, (int *)&dwBytes_4);
            v777 = v57;
            v15 = v57;
            if ( v57 >= 0 )
              v59 = dwBytes_4;
            v823 = v59;
            if ( v57 < 0 )
              break;
            v777 = RtlULongLongAdd(v58, v59, (__int64 *)&v785);
            v15 = v777;
            if ( v777 < 0 )
              break;
            v56 = (int *)v785;
            if ( v60 + 1 >= (unsigned int)v788 )
              goto LABEL_57;
          }
        }
        else
        {
LABEL_57:
          v777 = RtlULongLongAdd((unsigned __int64)v56, 4LL, (__int64 *)&v808);
          v15 = v777;
          if ( v777 >= 0 )
          {
            if ( (char *)v61 + v12 + 4 > (char *)v789 + HIDWORD(v788) )
              goto LABEL_461;
            v62 = v821;
            v63 = v808;
            *v61 = v12;
            memcpy_0(v63, v62, v12);
            LODWORD(v788) = v788 + 1;
          }
        }
      }
      else
      {
        v375 = RtlUIntAdd(4u, v12, (int *)&dwBytes_4);
        v376 = v823;
        v15 = v375;
        v777 = v375;
        if ( v375 >= 0 )
          v376 = dwBytes_4;
        v823 = v376;
        if ( v375 >= 0 )
        {
          v777 = RtlUIntAdd(HIDWORD(v788), v376, (int *)&v788 + 1);
          v15 = v777;
          if ( v777 >= 0 )
          {
            LODWORD(v788) = v788 + 1;
            goto LABEL_61;
          }
        }
      }
    }
    else
    {
      v15 = -1073741811;
      v777 = -1073741811;
    }
    if ( v15 < 0 )
      goto LABEL_434;
LABEL_61:
    v891 = v882;
    if ( v789 )
    {
      v64 = (int *)v789;
      v785 = (size_t)v789;
      if ( (_DWORD)v788 )
      {
        while ( 1 )
        {
          v65 = RtlUIntAdd(4u, *v64, (int *)&dwBytes_4);
          v777 = v65;
          v15 = v65;
          if ( v65 >= 0 )
            v68 = dwBytes_4;
          v824 = v68;
          if ( v65 < 0 )
            break;
          v777 = RtlULongLongAdd(v67, v68, (__int64 *)&v785);
          v15 = v777;
          if ( v777 < 0 )
            break;
          v64 = (int *)v785;
          if ( v69 + 1 >= (unsigned int)v788 )
            goto LABEL_68;
        }
      }
      else
      {
LABEL_68:
        v777 = RtlULongLongAdd((unsigned __int64)v64, 4LL, (__int64 *)&v808);
        v15 = v777;
        if ( v777 >= 0 )
        {
          if ( v70 + 3 > (_DWORD *)((char *)v789 + HIDWORD(v788)) )
            goto LABEL_461;
          v71 = v808;
          *v70 = 8;
          *v71 = v891;
          LODWORD(v788) = v788 + 1;
        }
      }
    }
    else
    {
      v377 = RtlUIntAdd(4u, 8, (int *)&dwBytes_4);
      v66 = v824;
      v15 = v377;
      v777 = v377;
      if ( v377 >= 0 )
        v66 = dwBytes_4;
      v824 = v66;
      if ( v377 >= 0 )
      {
        v777 = RtlUIntAdd(HIDWORD(v788), v66, (int *)&v788 + 1);
        v15 = v777;
        if ( v777 >= 0 )
        {
          LODWORD(v788) = v788 + 1;
          goto LABEL_72;
        }
      }
    }
    if ( v15 < 0 )
      goto LABEL_434;
LABEL_72:
    v72 = psz;
    if ( StringCchLengthW(psz, v66, &v785) >= 0 )
    {
      v777 = RtlULongLongAdd(v785, 1LL, (__int64 *)&v785);
      v15 = v777;
      if ( v777 >= 0 )
      {
        if ( 2 * (_DWORD)v785 )
        {
          if ( v789 )
          {
            v73 = (int *)v789;
            v785 = (size_t)v789;
            if ( (_DWORD)v788 )
            {
              while ( 1 )
              {
                v74 = RtlUIntAdd(4u, *v73, (int *)&dwBytes_4);
                v777 = v74;
                v15 = v74;
                if ( v74 >= 0 )
                  v76 = dwBytes_4;
                v825 = v76;
                if ( v74 < 0 )
                  break;
                v777 = RtlULongLongAdd(v75, v76, (__int64 *)&v785);
                v15 = v777;
                if ( v777 < 0 )
                  break;
                v73 = (int *)v785;
                LODWORD(v44) = (_DWORD)v44 + 1;
                if ( (unsigned int)v44 >= (unsigned int)v788 )
                  goto LABEL_82;
              }
              v44 = 0LL;
            }
            else
            {
LABEL_82:
              v44 = 0LL;
              v777 = RtlULongLongAdd((unsigned __int64)v73, 4LL, (__int64 *)&v808);
              v15 = v777;
              if ( v777 >= 0 )
              {
                if ( (char *)v77 + v78 + 4 > (char *)v789 + HIDWORD(v788) )
                {
                  v15 = -1073741789;
                  v777 = -1073741789;
                }
                else
                {
                  v79 = v808;
                  *v77 = v78;
                  memcpy_0(v79, v72, (unsigned int)v78);
                  LODWORD(v788) = v788 + 1;
                }
              }
            }
          }
          else
          {
            v378 = RtlUIntAdd(4u, 2 * (int)v785, (int *)&dwBytes_4);
            v379 = v825;
            v15 = v378;
            v777 = v378;
            if ( v378 >= 0 )
              v379 = dwBytes_4;
            v825 = v379;
            if ( v378 >= 0 )
            {
              v777 = RtlUIntAdd(HIDWORD(v788), v379, (int *)&v788 + 1);
              v15 = v777;
              if ( v777 >= 0 )
              {
                LODWORD(v788) = v788 + 1;
                v15 = 0;
                v777 = 0;
              }
            }
          }
        }
        else
        {
          v15 = -1073741811;
          v777 = -1073741811;
        }
      }
      if ( v15 < 0 )
        goto LABEL_434;
      v859 = v834;
      if ( v789 )
      {
        v80 = (int *)v789;
        v785 = (size_t)v789;
        if ( (_DWORD)v788 )
        {
          while ( 1 )
          {
            v81 = RtlUIntAdd(4u, *v80, (int *)&dwBytes_4);
            v777 = v81;
            v15 = v81;
            if ( v81 >= 0 )
              v83 = dwBytes_4;
            v826 = v83;
            if ( v81 < 0 )
              break;
            v777 = RtlULongLongAdd(v82, v83, (__int64 *)&v785);
            v15 = v777;
            if ( v777 < 0 )
              break;
            v80 = (int *)v785;
            if ( v84 + 1 >= (unsigned int)v788 )
              goto LABEL_93;
          }
        }
        else
        {
LABEL_93:
          v777 = RtlULongLongAdd((unsigned __int64)v80, 4LL, (__int64 *)&v808);
          v15 = v777;
          if ( v777 >= 0 )
          {
            if ( v85 + 2 > (_DWORD *)((char *)v789 + HIDWORD(v788)) )
              goto LABEL_492;
            v86 = v808;
            *v85 = 4;
            *v86 = v859;
            LODWORD(v788) = v788 + 1;
          }
        }
      }
      else
      {
        v380 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
        v381 = v826;
        v15 = v380;
        v777 = v380;
        if ( v380 >= 0 )
          v381 = dwBytes_4;
        v826 = v381;
        if ( v380 >= 0 )
        {
          v777 = RtlUIntAdd(HIDWORD(v788), v381, (int *)&v788 + 1);
          v15 = v777;
          if ( v777 >= 0 )
          {
            LODWORD(v788) = v788 + 1;
LABEL_97:
            v831 = 4;
            if ( !v789 )
            {
              v382 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
              v383 = v839;
              v15 = v382;
              v777 = v382;
              if ( v382 >= 0 )
                v383 = dwBytes_4;
              v839 = v383;
              if ( v382 >= 0 )
              {
                v777 = RtlUIntAdd(HIDWORD(v788), v383, (int *)&v788 + 1);
                v15 = v777;
                if ( v777 >= 0 )
                {
                  LODWORD(v788) = v788 + 1;
                  goto LABEL_108;
                }
              }
LABEL_107:
              if ( v15 < 0 )
                goto LABEL_434;
LABEL_108:
              v94 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
              v96 = v814;
              v15 = v94;
              v777 = v94;
              if ( v94 >= 0 )
                v96 = dwBytes_4;
              v814 = v96;
              if ( v94 < 0 )
                goto LABEL_498;
              dwBytes = v96;
              v97 = RtlUIntAdd(v95, v95 + 4, (int *)&dwBytes_4);
              v777 = v97;
              v99 = v98;
              v15 = v97;
              if ( v97 >= 0 )
                v99 = dwBytes_4;
              v814 = v99;
              if ( v97 < 0 )
                goto LABEL_498;
              v777 = RtlUIntAdd(v98, v99, (int *)&dwBytes);
              v15 = v777;
              if ( v777 < 0 )
                goto LABEL_498;
              v100 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
              v777 = v100;
              v15 = v100;
              if ( v100 >= 0 )
                v101 = dwBytes_4;
              v814 = v101;
              if ( v100 < 0 )
                goto LABEL_498;
              v777 = RtlUIntAdd(dwBytes, v101, (int *)&dwBytes);
              v15 = v777;
              if ( v777 < 0 )
                goto LABEL_498;
              v102 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
              v777 = v102;
              v15 = v102;
              if ( v102 >= 0 )
                v103 = dwBytes_4;
              v814 = v103;
              if ( v102 < 0 )
                goto LABEL_498;
              v777 = RtlUIntAdd(dwBytes, v103, (int *)&dwBytes);
              v15 = v777;
              if ( v777 < 0 )
                goto LABEL_498;
              v104 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
              v777 = v104;
              v15 = v104;
              if ( v104 >= 0 )
                v105 = dwBytes_4;
              v814 = v105;
              if ( v104 < 0 )
                goto LABEL_498;
              v777 = RtlUIntAdd(dwBytes, v105, (int *)&dwBytes);
              v15 = v777;
              if ( v777 < 0 )
                goto LABEL_498;
              v106 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
              v777 = v106;
              v15 = v106;
              if ( v106 >= 0 )
                v107 = dwBytes_4;
              v814 = v107;
              if ( v106 < 0 )
              {
LABEL_498:
                v108 = v831;
              }
              else
              {
                v15 = RtlUIntAdd(dwBytes, v107, (int *)&dwBytes);
                v777 = v15;
                v108 = v831;
                if ( v15 >= 0 )
                  v108 = dwBytes;
              }
              v790 = v108;
              if ( v15 < 0 )
                goto LABEL_434;
              v791 = 0LL;
              v109 = 0;
              v855 = 0LL;
              v838 = 0LL;
              v110 = 0LL;
              dwBytes_4 = 0;
              v821 = 0LL;
              v810 = 0;
              v787 = 0LL;
              v801 = 0LL;
              v830 = 0;
              v890 = __rdtsc();
              v815 = 8;
              v112 = RtlUIntAdd(8u, SHIDWORD(v788), (int *)&v815);
              if ( v112 >= 0 )
              {
                v113 = (v815 + 7) & 0xFFFFFFF8;
                if ( v113 < v815 )
                {
                  v112 = -1073741675;
                }
                else
                {
                  v815 = (v815 + 7) & 0xFFFFFFF8;
                  v114 = v113;
                  v115 = GetProcessHeap();
                  v116 = (char *)HeapAlloc(v115, 8u, v114);
                  v117 = v116;
                  if ( v116 )
                  {
                    v785 = (size_t)v116;
                    *(_DWORD *)v116 = v788;
                    v112 = RtlULongLongAdd((unsigned __int64)v116, 4LL, (__int64 *)&v785);
                    if ( v112 < 0
                      || (v119 = v785,
                          *(_DWORD *)v785 = HIDWORD(v788),
                          v112 = RtlULongLongAdd(v119, v118, (__int64 *)&v785),
                          v112 < 0) )
                    {
                      v111 = 0LL;
                    }
                    else
                    {
                      *(_QWORD *)&v117[v815 - 8] = v890;
                      memcpy_0((void *)v785, v789, HIDWORD(v788));
                      v791 = v117;
                      v111 = v117;
                      v117 = 0LL;
                      v109 = v815;
                    }
                    if ( v117 )
                    {
                      v384 = GetProcessHeap();
                      HeapFree(v384, 0, v117);
                      v111 = v791;
                    }
                  }
                  else
                  {
                    v112 = -1073741801;
                    v111 = 0LL;
                  }
                  v44 = 0LL;
                }
              }
              v15 = v112 | 0x10000000;
              v777 = v15;
              if ( v15 < 0 )
                goto LABEL_328;
              v893 = 0LL;
              v120 = 0LL;
              v894 = 0LL;
              v913 = 0LL;
              v896 = 0LL;
              lpMem = 0LL;
              v892 = 0LL;
              psz = 0LL;
              if ( v111 )
              {
                v121 = 0;
                v122 = v109;
                v785 = v109;
                if ( v109 && (v782 = MemoryAlloc(v109 + 8LL), (v123 = (char *)v782) != 0LL) )
                {
                  v124 = (unsigned __int8 *)v791;
                  v125 = 0;
                  LOBYTE(v781) = 0;
                  v126 = 0LL;
                  if ( v122 )
                  {
                    do
                      v125 ^= *((_BYTE *)v791 + v126++);
                    while ( v126 < v122 );
                    LOBYTE(v781) = v125;
                  }
                  v127 = -1;
                  v937 = (void *)0xC81ECB17B1B54A58LL;
                  v794 = -1;
                  dwBytes = 0;
                  v128 = 0;
                  v799 = 0;
                  v129 = v782;
                  v777 = 0;
                  v130 = v122 & 7;
                  if ( (v122 & 7) != 0 )
                  {
                    v777 = 0;
                    dwBytes = 0;
                    v385 = 56;
                    v386 = 0;
                    do
                    {
                      v387 = *v124;
                      pcchLength = (size_t)(v124 + 1);
                      if ( v121 >= 4 )
                      {
                        v388 = (v387 << v385) | dwBytes;
                        dwBytes = v388;
                      }
                      else
                      {
                        v388 = dwBytes;
                        v386 |= v387 << (v385 - 32);
                      }
                      ++v121;
                      v385 -= 8;
                      v124 = (unsigned __int8 *)pcchLength;
                    }
                    while ( v121 < (int)v130 );
                    v777 = v386;
                    v128 = v386 ^ 0xB17A307A;
                    v389 = v388 ^ 0x42F6B18D;
                    v799 = v386 ^ 0xB17A307A;
                    v794 = v388 ^ 0x42F6B18D;
                    v390 = 0;
                    if ( (v122 & 7) != 0 )
                    {
                      do
                      {
                        pcchLength = (size_t)(v129 + 1);
                        if ( v390 >= 4 )
                        {
                          v389 = __ROL4__(v389, 8);
                          v391 = v389;
                        }
                        else
                        {
                          v128 = __ROL4__(v128, 8);
                          v391 = v128;
                        }
                        *v129 = v391;
                        ++v390;
                        v129 = (_BYTE *)pcchLength;
                      }
                      while ( v390 < (int)v130 );
                      v128 = v799;
                      v389 = v794;
                    }
                    if ( v130 <= 4 )
                    {
                      v794 = 0;
                      v127 = 0;
                      if ( v130 < 4 )
                      {
                        v128 = v128 >> (8 * (4 - v130)) << (8 * (4 - v130));
                        v799 = v128;
                      }
                    }
                    else
                    {
                      v127 = v389 >> (8 * (8 - v130)) << (8 * (8 - v130));
                      v794 = v127;
                    }
                  }
                  v131 = v122 >> 3;
                  if ( v122 >> 3 )
                  {
                    v132 = v124 + 2;
                    v133 = dwBytes;
                    v134 = v777;
                    v135 = WORD2(v937);
                    v805 = 19032;
                    v780 = 19032;
                    LODWORD(v783) = WORD1(v937);
                    v136 = HIWORD(HIDWORD(v937));
                    v137 = v129 + 7;
                    do
                    {
                      v138 = v132[1] | ((*v132 | ((*(v132 - 1) | (*(v132 - 2) << 8)) << 8)) << 8);
                      v139 = v132[5] | ((v132[4] | ((v132[3] | (v132[2] << 8)) << 8)) << 8);
                      pcchLength = (size_t)(v132 + 8);
                      v140 = v139 ^ v127;
                      v141 = HIDWORD(v937) ^ v128 ^ v138 ^ (v140 - v780);
                      v142 = (__ROR4__(v141, 7) + WORD1(v937) * __ROR4__(v128 ^ v138 ^ (v140 - v780), 15)) ^ v140;
                      v143 = (v135 * __ROR4__(v142 - 1313519016, 9) - __ROR4__(v142, 10)) ^ v141;
                      v144 = (__ROL4__(v143, 5) + v136 * __ROL4__(v143 ^ v135, 4)) ^ v142;
                      v145 = (HIDWORD(v937) - (v144 ^ 0xB1B54A58)) ^ v143;
                      v146 = (WORD1(v937) * (v145 - v805) - (v145 >> 6)) ^ v144;
                      v147 = (v805 * (v135 ^ __ROR4__(v146, 15))) ^ v145;
                      v148 = (v135 * (v136 + __ROR4__(~v147, 3))) ^ v146;
                      v149 = (v148 - v780 - HIDWORD(v937)) ^ v147;
                      v150 = (v783 * (v136 ^ v149)) ^ __ROR4__(v149, 10) ^ v148;
                      v151 = __ROR4__(v150, 3) ^ (v135 * __ROL4__(v805 ^ v150, 6)) ^ v149;
                      v152 = (v805 * (__ROR4__(v151, 15) - v136)) ^ v150;
                      v153 = (v152 >> 15) ^ (v780 * __ROL4__(v152 - v135, 3)) ^ (v152 >> 1) ^ (v780 * (v136 ^ v152)) ^ v151;
                      v154 = (WORD1(v937) * (v153 - v135) - (v153 >> 13)) ^ v152;
                      v155 = __ROR4__(v154, 11) ^ (v135 * __ROR4__(-1313519016 - v154, 9)) ^ v153;
                      v156 = (v155 + 1313519016 - v136) ^ v154;
                      v157 = (v780 * (v156 ^ WORD1(v937)) - __ROR4__(v156, 7)) ^ v155;
                      v158 = (WORD1(v937) * __ROL4__(v136 ^ v157, 4) - __ROR4__(v157, 16)) ^ v156;
                      v159 = (__ROR4__(v158, 4) + v135 * __ROR4__(-1313519016 - v158, 10)) ^ v157;
                      v160 = __ROR4__(v159, 9) ^ (v136 * __ROR4__(v159 + 1313519016, 4)) ^ v158;
                      v161 = (v780 * __ROL4__(HIDWORD(v937) ^ v160, 8) - __ROL4__(v160, 2)) ^ v159;
                      v162 = (WORD1(v937) * __ROR4__(HIDWORD(v937) - v161, 11) - __ROR4__(v161, 12)) ^ v160;
                      v163 = (v162 >> 8) ^ (v135 * (WORD1(v937) ^ v162)) ^ v161;
                      v164 = v163 ^ v162 ^ 0xB1B54A58;
                      v165 = v134 ^ v163;
                      v134 = v138;
                      v799 = v165;
                      v794 = v133 ^ HIDWORD(v937) ^ v164;
                      v133 = v139;
                      *(v137 - 4) = v165;
                      v799 = __ROR4__(v799, 8);
                      v132 = (unsigned __int8 *)pcchLength;
                      *v137 = v794;
                      v794 = __ROR4__(v794, 8);
                      *(v137 - 5) = v799;
                      v799 = __ROR4__(v799, 8);
                      *(v137 - 1) = v794;
                      v794 = __ROR4__(v794, 8);
                      *(v137 - 6) = v799;
                      v799 = __ROR4__(v799, 8);
                      *(v137 - 2) = v794;
                      v794 = __ROR4__(v794, 8);
                      *(v137 - 7) = v799;
                      *(v137 - 3) = v794;
                      v137 += 8;
                      v128 = __ROR4__(v799, 8);
                      v127 = __ROR4__(v794, 8);
                      v799 = v128;
                      v794 = v127;
                      --v131;
                    }
                    while ( v131 );
                    v125 = v781;
                    v120 = (wchar_t *)psz;
                    v122 = v785;
                    v123 = (char *)v782;
                  }
                  v166 = v122 + 8;
                  *(_QWORD *)&v123[v122] = v125;
                  lpMem = v123;
                  v892 = v122 + 8;
                  v893 = &qword_1800D45E0;
                  v894 = 8LL;
                  v896 = 160LL;
                  v913 = xmmword_1800D4540;
                  v167 = GetProcessHeap();
                  v168 = HeapAlloc(v167, 8u, 0x30uLL);
                  v169 = v168;
                  if ( v168 )
                  {
                    *v168 = v166;
                    v170 = GetProcessHeap();
                    v171 = HeapAlloc(v170, 8u, v166);
                    if ( v171 )
                    {
                      *((_QWORD *)v169 + 1) = v171;
                      memcpy_0(v171, v123, v166);
                      v169[4] = 160;
                      v172 = GetProcessHeap();
                      v173 = HeapAlloc(v172, 8u, 0xA0uLL);
                      v174 = 0LL;
                      if ( !v173 )
                        goto LABEL_520;
                      *((_QWORD *)v169 + 3) = v173;
                      *v173 = xmmword_1800D4540[0];
                      v173[1] = xmmword_1800D4540[1];
                      v173[2] = xmmword_1800D4540[2];
                      v173[3] = xmmword_1800D4540[3];
                      v173[4] = xmmword_1800D4540[4];
                      v173[5] = xmmword_1800D4540[5];
                      v173[6] = xmmword_1800D4540[6];
                      v173[7] = xmmword_1800D4540[7];
                      v173[8] = xmmword_1800D4540[8];
                      v173[9] = xmmword_1800D4540[9];
                      v169[8] = 8;
                      v175 = GetProcessHeap();
                      v176 = HeapAlloc(v175, 8u, 8uLL);
                      if ( v176 )
                      {
                        *((_QWORD *)v169 + 5) = v176;
                        v120 = (wchar_t *)v169;
                        *v176 = qword_1800D45E0;
                        v177 = 0;
                        v169 = 0LL;
                      }
                      else
                      {
LABEL_520:
                        v177 = -1073741801;
                      }
                    }
                    else
                    {
                      v177 = -1073741801;
                      v174 = 0LL;
                    }
                    if ( v169 )
                    {
                      v392 = (void *)*((_QWORD *)v169 + 1);
                      if ( v392 )
                      {
                        v393 = GetProcessHeap();
                        HeapFree(v393, 0, v392);
                        *((_QWORD *)v169 + 1) = 0LL;
                      }
                      v394 = (void *)*((_QWORD *)v169 + 3);
                      if ( v394 )
                      {
                        v395 = GetProcessHeap();
                        HeapFree(v395, 0, v394);
                        *((_QWORD *)v169 + 3) = 0LL;
                      }
                      v174 = (void *)*((_QWORD *)v169 + 5);
                      if ( v174 )
                      {
                        v396 = GetProcessHeap();
                        HeapFree(v396, 0, v174);
                        v174 = 0LL;
                        *((_QWORD *)v169 + 5) = 0LL;
                      }
                      v397 = GetProcessHeap();
                      HeapFree(v397, 0, v169);
                    }
                  }
                  else
                  {
                    v177 = -1073741801;
                    v174 = 0LL;
                  }
                  if ( v177 >= 0 )
                  {
                    v855 = v120;
                    v120 = (wchar_t *)v174;
                  }
                }
                else
                {
                  v177 = -1073741823;
                }
                v44 = lpMem;
                if ( lpMem )
                {
                  v178 = GetProcessHeap();
                  HeapFree(v178, 0, v44);
                  v44 = 0LL;
                  lpMem = 0LL;
                }
                if ( v120 )
                {
                  v398 = (void *)*((_QWORD *)v120 + 1);
                  if ( v398 )
                  {
                    v399 = GetProcessHeap();
                    HeapFree(v399, 0, v398);
                    *((_QWORD *)v120 + 1) = 0LL;
                  }
                  v400 = (void *)*((_QWORD *)v120 + 3);
                  if ( v400 )
                  {
                    v401 = GetProcessHeap();
                    HeapFree(v401, 0, v400);
                    *((_QWORD *)v120 + 3) = 0LL;
                  }
                  v44 = (void *)*((_QWORD *)v120 + 5);
                  if ( v44 )
                  {
                    v402 = GetProcessHeap();
                    HeapFree(v402, 0, v44);
                    v44 = 0LL;
                    *((_QWORD *)v120 + 5) = 0LL;
                  }
                  v403 = GetProcessHeap();
                  HeapFree(v403, 0, v120);
                }
              }
              else
              {
                v177 = -1073741811;
              }
              v15 = v177 | 0x10000000;
              v777 = v15;
              if ( v15 < 0 )
                goto LABEL_546;
              v179 = (const void **)v855;
              dwBytes = 4;
              v180 = RtlUIntAdd(4u, *(_DWORD *)v855, (int *)&dwBytes);
              if ( v180 < 0
                || (v180 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v180 < 0)
                || (v180 = RtlUIntAdd(dwBytes, *((_DWORD *)v179 + 4), (int *)&dwBytes), v180 < 0)
                || (v180 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v180 < 0) )
              {
                v181 = v836;
              }
              else
              {
                v180 = RtlUIntAdd(dwBytes, *((_DWORD *)v179 + 8), (int *)&dwBytes);
                v181 = v836;
                if ( v180 >= 0 )
                  v181 = dwBytes;
                v836 = v181;
              }
              if ( v180 >= 0 )
              {
                v182 = v181;
                v183 = GetProcessHeap();
                v184 = HeapAlloc(v183, 8u, v182);
                v185 = v184;
                if ( v184 )
                {
                  v937 = v184;
                  *v184 = *(_DWORD *)v179;
                  v180 = RtlULongLongAdd((unsigned __int64)v184, 4LL, (__int64 *)&v937);
                  if ( v180 >= 0 )
                  {
                    memcpy_0(v937, v179[1], *(unsigned int *)v179);
                    v180 = RtlULongLongAdd((unsigned __int64)v937, *(unsigned int *)v179, (__int64 *)&v937);
                    if ( v180 >= 0 )
                    {
                      v186 = v937;
                      *(_DWORD *)v937 = *((_DWORD *)v179 + 4);
                      v180 = RtlULongLongAdd((unsigned __int64)v186, 4LL, (__int64 *)&v937);
                      if ( v180 >= 0 )
                      {
                        memcpy_0(v937, v179[3], *((unsigned int *)v179 + 4));
                        v180 = RtlULongLongAdd((unsigned __int64)v937, *((unsigned int *)v179 + 4), (__int64 *)&v937);
                        if ( v180 >= 0 )
                        {
                          v187 = v937;
                          *(_DWORD *)v937 = *((_DWORD *)v179 + 8);
                          v180 = RtlULongLongAdd((unsigned __int64)v187, 4LL, (__int64 *)&v937);
                          if ( v180 >= 0 )
                          {
                            memcpy_0(v937, v179[5], *((unsigned int *)v179 + 8));
                            v180 = RtlULongLongAdd(
                                     (unsigned __int64)v937,
                                     *((unsigned int *)v179 + 8),
                                     (__int64 *)&v937);
                            if ( v180 >= 0 )
                            {
                              v838 = v185;
                              v185 = 0LL;
                              dwBytes_4 = v836;
                            }
                          }
                        }
                      }
                    }
                  }
                  if ( v185 )
                  {
                    v404 = GetProcessHeap();
                    HeapFree(v404, 0, v185);
                  }
                }
                else
                {
                  v180 = -1073741801;
                }
                v44 = 0LL;
              }
              v15 = v180 | 0x10000000;
              v777 = v15;
              if ( v15 < 0 )
                goto LABEL_546;
              v897 = v44;
              v860 = (int)v44;
              v898 = v44;
              v861 = (int)v44;
              v835 = 8;
              v188 = RtlUIntAdd(8u, v790, (int *)&v835);
              v15 = v188 | 0x10000000;
              v777 = v188 | 0x10000000;
              if ( v188 < 0 )
              {
                v193 = 0LL;
              }
              else
              {
                v190 = (v835 + 7) & 0xFFFFFFF8;
                if ( v190 < v835 )
                {
                  v15 = -1073741675;
                  v777 = -1073741675;
                  v193 = 0LL;
                }
                else
                {
                  v846 = (v835 + 7) & 0xFFFFFFF8;
                  v191 = RtlUIntAdd(v190, v189, (int *)&v846);
                  v192 = v842;
                  v193 = 0LL;
                  v777 = v191;
                  v15 = v191;
                  if ( v191 >= 0 )
                    v192 = v846;
                  v842 = v192;
                }
                if ( v15 < 0 )
                  goto LABEL_546;
                if ( !v789 || (unsigned int)v788 <= 1 )
                  goto LABEL_539;
                v194 = (unsigned int *)v789;
                v782 = v789;
                do
                {
                  v195 = *v194;
                  v777 = RtlULongLongAdd((unsigned __int64)v194, 4LL, (__int64 *)&v782);
                  v15 = v777;
                  if ( v777 < 0 )
                  {
                    v193 = 0LL;
                    goto LABEL_202;
                  }
                  v196 = RtlULongLongAdd((unsigned __int64)v782, v195, (__int64 *)&v782);
                  v193 = 0LL;
                  v777 = v196;
                  v15 = v196;
                  if ( v196 < 0 )
                    goto LABEL_202;
                  v194 = (unsigned int *)v782;
                }
                while ( v197 == -1 );
                v777 = RtlULongLongAdd((unsigned __int64)v782, 4LL, (__int64 *)&v782);
                v15 = v777;
                if ( v777 >= 0 )
                {
                  v199 = v782;
                  v860 = v198;
                  if ( !v198 )
                    v199 = 0LL;
                  v897 = v199;
                }
LABEL_202:
                if ( v15 < 0 )
                  goto LABEL_546;
                if ( (unsigned int)v788 > 2 )
                {
                  v200 = (unsigned int *)v789;
                  v782 = v789;
                  do
                  {
                    v201 = *v200;
                    v777 = RtlULongLongAdd((unsigned __int64)v200, 4LL, (__int64 *)&v782);
                    v15 = v777;
                    if ( v777 < 0 )
                    {
                      v193 = 0LL;
                      goto LABEL_212;
                    }
                    v203 = RtlULongLongAdd((unsigned __int64)v782, v201, (__int64 *)&v782);
                    v193 = 0LL;
                    v777 = v203;
                    v15 = v203;
                    if ( v203 < 0 )
                      goto LABEL_212;
                    v200 = (unsigned int *)v782;
                  }
                  while ( (unsigned int)(v204 + 1) < 2 );
                  v777 = RtlULongLongAdd((unsigned __int64)v782, 4LL, (__int64 *)&v782);
                  v15 = v777;
                  if ( v777 >= 0 )
                  {
                    v206 = v782;
                    LODWORD(v44) = v205;
                    v861 = v205;
                    if ( !v205 )
                      v206 = 0LL;
                    v898 = v206;
                  }
LABEL_212:
                  if ( v15 < 0 )
                    goto LABEL_546;
                  dwBytes = 4;
                  v777 = RtlUIntAdd(4u, v202, (int *)&dwBytes);
                  v15 = v777;
                  if ( v777 < 0
                    || (v777 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v15 = v777, v777 < 0)
                    || (v777 = RtlUIntAdd(dwBytes, v207, (int *)&dwBytes), v15 = v777, v777 < 0)
                    || (v777 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v15 = v777, v777 < 0) )
                  {
                    v208 = v854;
                  }
                  else
                  {
                    v15 = RtlUIntAdd(dwBytes, (int)v44, (int *)&dwBytes);
                    v777 = v15;
                    v208 = v854;
                    if ( v15 >= 0 )
                      v208 = dwBytes;
                    v854 = v208;
                  }
                  if ( v15 < 0 )
                    goto LABEL_546;
                  if ( v208 > 0x400000 )
                  {
                    v15 = -2147418113;
                    goto LABEL_545;
                  }
                  v810 = v208;
                }
                else
                {
LABEL_539:
                  v15 = -1073741811;
                  v777 = -1073741811;
                }
              }
              if ( v15 < 0 )
                goto LABEL_546;
              v209 = v810;
              v210 = GetProcessHeap();
              v211 = HeapAlloc(v210, 8u, v209);
              if ( v211 )
              {
                v212 = v211;
                v821 = v211;
                v15 = 0x10000000;
              }
              else
              {
                v212 = v821;
                v15 = -805306345;
              }
              v777 = v15;
              if ( v15 < 0 )
                goto LABEL_546;
              if ( !v838 || !v212 )
              {
                v15 = -2147024809;
                goto LABEL_545;
              }
              v929[0] = v838;
              v930 = dwBytes_4;
              v931 = v810;
              v929[1] = v212;
              v932 = 0;
              if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
              {
                v214 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v929);
                v215 = v810;
                v15 = v214 | 0x10000000;
                if ( v214 >= 0 )
                  v215 = v931;
                v810 = v215;
              }
              else
              {
                LastError = GetLastError();
                v777 = LastError;
                v15 = LastError;
                if ( LastError > 0 )
                {
                  v15 = (unsigned __int16)LastError | 0x80070000;
                  v777 = v15;
                }
                v215 = v810;
                if ( v15 < 0 )
                  goto LABEL_235;
                v15 = -2147467259;
              }
              v777 = v15;
LABEL_235:
              if ( v15 != -805306333 )
              {
                if ( v15 >= 0 )
                {
                  v785 = 0LL;
                  v777 = 0;
                  v936 = v212;
                  if ( v215 < 4 )
                    goto LABEL_554;
                  LODWORD(v783) = *v212;
                  v216 = RtlULongLongAdd((unsigned __int64)v212, 4LL, (__int64 *)&v936);
                  if ( v216 < 0 )
                    goto LABEL_557;
                  v216 = RtlUIntAdd(0, 4, &v777);
                  if ( v216 < 0 )
                    goto LABEL_557;
                  if ( v217 - v777 < (unsigned int)v218 )
                    goto LABEL_554;
                  pcchLength = (size_t)v936;
                  psz = v218;
                  v216 = RtlULongLongAdd((unsigned __int64)v936, (unsigned int)v218, (__int64 *)&v936);
                  if ( v216 < 0 )
                    goto LABEL_557;
                  v216 = RtlUIntAdd(v777, v219, &v777);
                  if ( v216 < 0 )
                    goto LABEL_557;
                  if ( (unsigned int)(v220 - v777) < 4 )
                  {
LABEL_554:
                    v216 = -1073741762;
LABEL_557:
                    v110 = v787;
                    goto LABEL_271;
                  }
                  v221 = *(unsigned int *)v936;
                  v216 = RtlULongLongAdd((unsigned __int64)v936, 4LL, (__int64 *)&v936);
                  if ( v216 >= 0 )
                  {
                    v216 = RtlUIntAdd(v777, 4, &v777);
                    if ( v216 >= 0 )
                    {
                      if ( v222 - v777 < (unsigned int)v221 )
                        goto LABEL_555;
                      v782 = v936;
                      v216 = RtlULongLongAdd((unsigned __int64)v936, (unsigned int)v221, (__int64 *)&v936);
                      if ( v216 < 0 )
                        goto LABEL_556;
                      v216 = RtlUIntAdd(v777, v221, &v777);
                      if ( v216 < 0 )
                        goto LABEL_556;
                      if ( (unsigned int)(v223 - v777) < 4 )
                        goto LABEL_555;
                      v224 = *(unsigned int *)v936;
                      v216 = RtlULongLongAdd((unsigned __int64)v936, 4LL, (__int64 *)&v936);
                      if ( v216 < 0 )
                        goto LABEL_556;
                      v216 = RtlUIntAdd(v777, 4, &v777);
                      if ( v216 < 0 )
                        goto LABEL_556;
                      if ( v225 - v777 < (unsigned int)v224 )
                        goto LABEL_555;
                      v216 = RtlUIntAdd(v777, v224, &v777);
                      if ( v216 >= 0 )
                      {
                        if ( v226 == v777 && (unsigned int)(v227 + v221 + v224) + 12LL == v226 )
                        {
                          v228 = GetProcessHeap();
                          v229 = HeapAlloc(v228, 8u, 0x30uLL);
                          if ( !v229 )
                          {
                            v216 = -1073741801;
                            v193 = 0LL;
LABEL_268:
                            v110 = (unsigned int *)v785;
                            v239 = v193;
                            if ( v216 < 0 )
                            {
                              v239 = (_QWORD *)v785;
                              v110 = (unsigned int *)v193;
                            }
                            v787 = v110;
                            if ( v239 )
                            {
                              v412 = (void *)v239[1];
                              if ( v412 )
                              {
                                v413 = GetProcessHeap();
                                HeapFree(v413, 0, v412);
                                v239[1] = 0LL;
                              }
                              v414 = (void *)v239[3];
                              if ( v414 )
                              {
                                v415 = GetProcessHeap();
                                HeapFree(v415, 0, v414);
                                v239[3] = 0LL;
                              }
                              v193 = (_QWORD *)v239[5];
                              if ( v193 )
                              {
                                v416 = GetProcessHeap();
                                HeapFree(v416, 0, v193);
                                v193 = 0LL;
                                v239[5] = 0LL;
                              }
                              v417 = GetProcessHeap();
                              HeapFree(v417, 0, v239);
                              v787 = v110;
                            }
LABEL_271:
                            v15 = v216 | 0x10000000;
                            v777 = v15;
                            if ( v15 < 0 )
                              goto LABEL_328;
                            v840 = v193;
                            v240 = v193;
                            v881 = v193;
                            if ( !v110 || (v785 = *((_QWORD *)v110 + 1)) == 0 || *v110 == (_DWORD)v193 )
                            {
                              v15 = -805306355;
                              goto LABEL_327;
                            }
                            v241 = *v110;
                            v812 = (int)v193;
                            if ( !v241 )
                              goto LABEL_595;
                            v242 = v241 - 8;
                            v782 = (void *)v242;
                            v937 = MemoryAlloc(v242);
                            v243 = v937;
                            if ( !v937 )
                            {
                              v240 = v840;
                              v193 = 0LL;
                              goto LABEL_595;
                            }
                            v244 = (unsigned __int8 *)v785;
                            v936 = (void *)0x7F1137FAB69605ELL;
                            v245 = 0;
                            LOBYTE(v781) = 0;
                            v246 = (size_t)v937;
                            v797 = 0;
                            v777 = 0;
                            v247 = v242 & 7;
                            if ( (v242 & 7) != 0 )
                            {
                              v792 = -1;
                              v418 = 0;
                              dwBytes = 0;
                              v419 = 56;
                              v420 = 0;
                              do
                              {
                                v421 = *v244;
                                pcchLength = (size_t)(v244 + 1);
                                if ( v418 >= 4 )
                                {
                                  v422 = (v421 << v419) | dwBytes;
                                  dwBytes = v422;
                                }
                                else
                                {
                                  v422 = dwBytes;
                                  v420 |= v421 << (v419 - 32);
                                }
                                ++v418;
                                v419 -= 8;
                                v244 = (unsigned __int8 *)pcchLength;
                              }
                              while ( v418 < (int)v247 );
                              v777 = v420;
                              v249 = v420 ^ 0x92F65A5;
                              v423 = v422 ^ 0x699A899C;
                              v797 = v420 ^ 0x92F65A5;
                              v792 = v422 ^ 0x699A899C;
                              v424 = 0;
                              if ( (v242 & 7) != 0 )
                              {
                                do
                                {
                                  pcchLength = v246 + 1;
                                  if ( v424 >= 4 )
                                  {
                                    v423 = __ROL4__(v423, 8);
                                    v425 = v423;
                                  }
                                  else
                                  {
                                    v249 = __ROL4__(v249, 8);
                                    v425 = v249;
                                  }
                                  *(_BYTE *)v246 = v425;
                                  ++v424;
                                  v246 = pcchLength;
                                }
                                while ( v424 < (int)v247 );
                                v249 = v797;
                                v423 = v792;
                              }
                              if ( v247 <= 4 )
                              {
                                v248 = 0;
                                v792 = 0;
                                if ( v247 < 4 )
                                {
                                  v249 = v249 >> (8 * (4 - v247)) << (8 * (4 - v247));
                                  v797 = v249;
                                }
LABEL_280:
                                if ( v242 >> 3 )
                                {
                                  v250 = HIDWORD(v936);
                                  v251 = v777;
                                  dwBytes_4 = WORD2(v936);
                                  v252 = HIDWORD(v936) ^ 0xAB69605E;
                                  v253 = v242 >> 3;
                                  v780 = 24670;
                                  v254 = HIWORD(HIDWORD(v936));
                                  LODWORD(v783) = WORD1(v936);
                                  v255 = v244 + 2;
                                  v256 = dwBytes;
                                  v790 = HIDWORD(v936) ^ 0xAB69605E;
                                  psz = (STRSAFE_PCNZWCH)(v246 + 7);
                                  do
                                  {
                                    v257 = v255[1] | ((*v255 | ((*(v255 - 1) | (*(v255 - 2) << 8)) << 8)) << 8);
                                    v258 = v257 ^ v249;
                                    v259 = v255[5] | ((v255[4] | ((v255[3] | (v255[2] << 8)) << 8)) << 8);
                                    pcchLength = (size_t)(v255 + 8);
                                    v260 = v258 ^ v259 ^ v248 ^ v252;
                                    v261 = (__ROL4__(v260, 10) + dwBytes_4 * __ROL4__(v260 + 1419157410, 5)) ^ v258;
                                    v262 = (WORD1(v936) * __ROR4__(v261 + v250, 9) - __ROL4__(v261, 2)) ^ v260;
                                    v263 = (v780 * (v262 - dwBytes_4) - (v262 >> 13)) ^ v261;
                                    v264 = (v254 * __ROL4__(WORD1(v936) ^ v263, 6) - __ROL4__(v263, 2)) ^ v262;
                                    v265 = (v250 - (v264 ^ 0xAB69605E)) ^ v263;
                                    v266 = (v783 * (dwBytes_4 ^ v265)) ^ __ROR4__(v265, 6) ^ v264;
                                    v267 = (__ROL4__(v266, 2) + v780 * __ROR4__(v266 + v250, 15)) ^ v265;
                                    v268 = (v254 * __ROR4__(v267 + 1419157410, 14) - __ROL4__(v267, 8)) ^ v266;
                                    v269 = __ROR4__(v268, 10) ^ (dwBytes_4 * __ROR4__(v268 ^ 0xAB69605E, 12)) ^ v267;
                                    v270 = (v269 >> 10) ^ (WORD1(v936) * (v254 ^ v269)) ^ v268;
                                    v271 = (v254 * (v780 + __ROR4__(~v270, 5))) ^ v269;
                                    v272 = (v271 - v254) ^ 0xAB69605E ^ v270;
                                    v273 = ((v272 >> 2) + dwBytes_4 * __ROL4__(v254 ^ v272, 2)) ^ v271;
                                    v274 = (__ROL4__(v273, 7) + WORD1(v936) * __ROR4__(v273 - v250, 6)) ^ v272;
                                    v275 = (v780 * (dwBytes_4 ^ v274) + __ROR4__(v274, 9)) ^ v273;
                                    v276 = (__ROL4__(v275, 7) + v254 * __ROL4__(v275 ^ WORD1(v936), 5)) ^ v274;
                                    v277 = v790 ^ v275 ^ v276;
                                    v278 = (dwBytes_4 * (__ROR4__(v277, 3) - WORD1(v936))) ^ v276;
                                    v279 = (v780 * __ROR4__(v278 - v250, 1) - __ROR4__(v278, 6)) ^ v277;
                                    v280 = (__ROL4__(v279, 14) + v254 * __ROL4__(v279 - 1419157410, 3)) ^ v278;
                                    v281 = (dwBytes_4 * __ROL4__(v280 - 1419157410, 15) - __ROR4__(v280, 14)) ^ v279;
                                    v282 = (v281 >> 3) ^ (WORD1(v936) * (v780 ^ v281)) ^ v280;
                                    v283 = v282 ^ v250;
                                    v284 = __ROL4__(v282, 2);
                                    v792 = v256 ^ v282;
                                    v256 = v259;
                                    v285 = (wchar_t *)psz;
                                    v286 = v251 ^ v284 ^ (v780 * __ROL4__(v283, 4));
                                    v251 = v257;
                                    v797 = v286 ^ v281;
                                    *((_BYTE *)psz - 4) = v286 ^ v281;
                                    v797 = __ROR4__(v797, 8);
                                    v252 = v790;
                                    *(_BYTE *)v285 = v792;
                                    v792 = __ROR4__(v792, 8);
                                    *((_BYTE *)v285 - 5) = v797;
                                    v797 = __ROR4__(v797, 8);
                                    *((_BYTE *)v285 - 1) = v792;
                                    v792 = __ROR4__(v792, 8);
                                    *((_BYTE *)v285 - 6) = v797;
                                    v797 = __ROR4__(v797, 8);
                                    *((_BYTE *)v285 - 2) = v792;
                                    v792 = __ROR4__(v792, 8);
                                    *((_BYTE *)v285 - 7) = v797;
                                    *((_BYTE *)v285 - 3) = v792;
                                    v249 = __ROR4__(v797, 8);
                                    v248 = __ROR4__(v792, 8);
                                    psz = v285 + 4;
                                    v255 = (unsigned __int8 *)pcchLength;
                                    v797 = v249;
                                    v792 = v248;
                                    --v253;
                                  }
                                  while ( v253 );
                                  v245 = v781;
                                  v242 = (unsigned __int64)v782;
                                  v243 = v937;
                                  v110 = v787;
                                }
                                for ( i = 0LL; i < v242; ++i )
                                  v245 ^= v243[i];
                                if ( v245 == *(_QWORD *)(v242 + v785) )
                                {
                                  v240 = v243;
                                  v840 = v243;
                                  v881 = (_QWORD *)v242;
                                  v243 = 0LL;
                                  v288 = v812;
                                }
                                else
                                {
                                  v240 = v840;
                                  v288 = -1073425151;
                                }
                                if ( v243 )
                                {
                                  MemoryFree(v243);
                                  v240 = v840;
                                }
                                v193 = 0LL;
                                if ( v288 >= 0 )
                                {
                                  v289 = (unsigned int)v881;
                                  v15 = 0x10000000;
                                  v801 = v240;
                                  v240 = 0LL;
                                  v830 = (unsigned int)v881;
                                  v840 = 0LL;
                                  goto LABEL_292;
                                }
LABEL_595:
                                v289 = v830;
                                v15 = -805306367;
LABEL_292:
                                v777 = v15;
                                if ( v240 )
                                {
                                  v426 = GetProcessHeap();
                                  HeapFree(v426, 0, v240);
                                  v289 = v830;
                                  v840 = v193;
                                }
                                if ( v15 >= 0 )
                                {
                                  v780 = (unsigned int)v193;
                                  v785 = (size_t)v801;
                                  if ( v289 < 4 )
                                    goto LABEL_596;
                                  v812 = *(_DWORD *)v801;
                                  v291 = RtlULongLongAdd((unsigned __int64)v801, 4LL, (__int64 *)&v785);
                                  if ( v291 < 0 )
                                    goto LABEL_326;
                                  v291 = RtlUIntAdd(0, v290, (int *)&v780);
                                  if ( v291 < 0 )
                                    goto LABEL_326;
                                  if ( v292 - v780 < v293 )
                                    goto LABEL_596;
                                  v294 = *(unsigned int *)v785;
                                  v291 = RtlULongLongAdd(v785, v293, (__int64 *)&v785);
                                  if ( v291 < 0 || (v291 = RtlUIntAdd(v780, v295, (int *)&v780), v291 < 0) )
                                  {
LABEL_600:
                                    v110 = v787;
                                    goto LABEL_326;
                                  }
                                  if ( v296 - v780 < (unsigned int)v294 )
                                    goto LABEL_599;
                                  v291 = RtlUIntAdd(v780, v294, (int *)&v780);
                                  if ( v291 < 0 )
                                    goto LABEL_600;
                                  v299 = (const void *)v785;
                                  if ( v298 + (unsigned __int64)v297 < v785 + v294 || v297 + v298 - v294 - v785 >= 8 )
                                  {
LABEL_599:
                                    v291 = -1073741762;
                                    goto LABEL_600;
                                  }
                                  v790 = 0;
                                  v300 = 0LL;
                                  v785 = 0LL;
                                  v291 = 0;
                                  if ( v299 )
                                  {
                                    v291 = RtlULongLongAdd(
                                             (unsigned __int64)v299,
                                             (unsigned int)v294,
                                             (__int64 *)&pcchLength);
                                    if ( v291 < 0 )
                                      goto LABEL_324;
                                    v302 = pcchLength;
                                    if ( (unsigned __int64)v299 < pcchLength )
                                    {
                                      do
                                      {
                                        v291 = RtlULongLongAdd((unsigned __int64)v301, 4LL, (__int64 *)&pcchLength);
                                        if ( v291 < 0 )
                                          goto LABEL_600;
                                        if ( pcchLength > v304 )
                                          goto LABEL_597;
                                        v305 = RtlUIntAdd(4u, *v303, (int *)&v783);
                                        v291 = v305;
                                        if ( v305 >= 0 )
                                          v307 = v783;
                                        v862 = v307;
                                        if ( v305 < 0 )
                                          goto LABEL_600;
                                        v291 = RtlULongLongAdd(v306, v307, (__int64 *)&psz);
                                        if ( v291 < 0 )
                                          goto LABEL_600;
                                        v301 = psz;
                                        if ( (unsigned __int64)psz > v302 )
                                          goto LABEL_597;
                                        ++v790;
                                      }
                                      while ( (unsigned __int64)psz < v302 );
                                    }
                                    if ( v301 != (STRSAFE_PCNZWCH)v302 )
                                    {
LABEL_597:
                                      v291 = -1073741811;
                                      goto LABEL_600;
                                    }
                                    v300 = (void *)v785;
                                  }
                                  if ( (_DWORD)v294 )
                                  {
                                    v308 = GetProcessHeap();
                                    v300 = HeapAlloc(v308, 8u, v294);
                                    v785 = (size_t)v300;
                                    if ( !v300 )
                                    {
                                      v291 = -1073741801;
                                      goto LABEL_324;
                                    }
                                    v291 = 0;
                                  }
                                  if ( v299 )
                                  {
                                    memcpy_0(v300, v299, v294);
                                    v300 = (void *)v785;
                                  }
                                  v819 = v300;
                                  v818 = __PAIR64__(v294, v790);
LABEL_324:
                                  if ( v291 >= 0 )
                                  {
                                    v110 = v787;
                                    if ( v812 == (_DWORD)v818 )
                                    {
LABEL_326:
                                      v15 = v291 | 0x10000000;
LABEL_327:
                                      v777 = v15;
                                      goto LABEL_328;
                                    }
LABEL_596:
                                    v291 = -1073741762;
                                    goto LABEL_326;
                                  }
                                  goto LABEL_600;
                                }
LABEL_328:
                                v309 = v791;
                                if ( v791 )
                                {
                                  v310 = GetProcessHeap();
                                  HeapFree(v310, 0, v309);
                                }
                                v311 = v855;
                                if ( v855 )
                                {
                                  v312 = (void *)*((_QWORD *)v855 + 1);
                                  if ( v312 )
                                  {
                                    v313 = GetProcessHeap();
                                    HeapFree(v313, 0, v312);
                                    v311[1] = 0LL;
                                  }
                                  v314 = (void *)v311[3];
                                  if ( v314 )
                                  {
                                    v315 = GetProcessHeap();
                                    HeapFree(v315, 0, v314);
                                    v311[3] = 0LL;
                                  }
                                  v316 = (void *)v311[5];
                                  if ( v316 )
                                  {
                                    v317 = GetProcessHeap();
                                    HeapFree(v317, 0, v316);
                                    v311[5] = 0LL;
                                  }
                                  v318 = GetProcessHeap();
                                  HeapFree(v318, 0, v311);
                                  v311 = 0LL;
                                  v855 = 0LL;
                                }
                                v319 = v838;
                                if ( v838 )
                                {
                                  v320 = GetProcessHeap();
                                  HeapFree(v320, 0, v319);
                                }
                                v321 = v821;
                                if ( v821 )
                                {
                                  v322 = GetProcessHeap();
                                  HeapFree(v322, 0, v321);
                                }
                                if ( v110 )
                                {
                                  v323 = (void *)*((_QWORD *)v110 + 1);
                                  if ( v323 )
                                  {
                                    v324 = GetProcessHeap();
                                    HeapFree(v324, 0, v323);
                                    *((_QWORD *)v110 + 1) = v311;
                                  }
                                  v325 = (void *)*((_QWORD *)v110 + 3);
                                  if ( v325 )
                                  {
                                    v326 = GetProcessHeap();
                                    HeapFree(v326, 0, v325);
                                    *((_QWORD *)v110 + 3) = v311;
                                  }
                                  v327 = (void *)*((_QWORD *)v110 + 5);
                                  if ( v327 )
                                  {
                                    v328 = GetProcessHeap();
                                    HeapFree(v328, 0, v327);
                                    *((_QWORD *)v110 + 5) = v311;
                                  }
                                  v329 = GetProcessHeap();
                                  HeapFree(v329, 0, v110);
                                }
                                v330 = v801;
                                if ( v801 )
                                {
                                  v331 = GetProcessHeap();
                                  HeapFree(v331, 0, v330);
                                }
                                if ( v15 < 0 )
                                  goto LABEL_434;
                                if ( !(_DWORD)v818 )
                                  goto LABEL_601;
                                if ( v819 )
                                {
                                  psz = (STRSAFE_PCNZWCH)v819;
                                  v777 = RtlULongLongAdd((unsigned __int64)v819, 4LL, (__int64 *)&psz);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                  {
                                    v332 = v863;
                                    v333 = v900;
                                  }
                                  else
                                  {
                                    v333 = psz;
                                    v863 = v332;
                                    if ( !v332 )
                                      v333 = 0LL;
                                    v900 = v333;
                                  }
                                  if ( v777 < 0 )
                                    goto LABEL_434;
                                  if ( v332 != 4 )
                                    goto LABEL_461;
                                  v820 = *(_DWORD *)v333;
                                }
                                else
                                {
                                  v15 = -1073741811;
                                  v777 = -1073741811;
                                }
                                if ( v15 < 0 )
                                  goto LABEL_434;
                                v15 = v820;
                                if ( v820 == -805306333 )
                                  v15 = -2147024774;
                                v777 = v15;
                                v820 = v15;
                                if ( v15 != -2147024774 && v15 < 0 )
                                  goto LABEL_434;
                                if ( (_DWORD)v818 != 6 )
                                {
LABEL_601:
                                  v15 = -1073425151;
                                  goto LABEL_433;
                                }
                                v334 = 4LL;
                                if ( v819 )
                                {
                                  v335 = v819;
                                  v782 = v819;
                                  do
                                  {
                                    v777 = RtlULongLongAdd((unsigned __int64)v335, v334, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 < 0 )
                                      goto LABEL_605;
                                    v777 = RtlULongLongAdd((unsigned __int64)v782, v336, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 < 0 )
                                      goto LABEL_605;
                                    v335 = v782;
                                  }
                                  while ( v337 == -1 );
                                  v777 = RtlULongLongAdd((unsigned __int64)v782, v334, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                  {
LABEL_605:
                                    v338 = v857;
                                    v339 = v901;
                                    goto LABEL_377;
                                  }
                                  v339 = v782;
                                  v857 = v338;
                                  if ( !v338 )
                                    v339 = 0LL;
                                  v901 = v339;
LABEL_377:
                                  if ( v15 < 0 )
                                    goto LABEL_434;
                                  if ( v338 != 8 )
                                    goto LABEL_461;
                                  v906 = *v339;
                                }
                                else
                                {
                                  v15 = -1073741811;
                                  v777 = -1073741811;
                                }
                                if ( v15 < 0 )
                                  goto LABEL_434;
                                if ( v819 )
                                {
                                  v340 = v819;
                                  v782 = v819;
                                  do
                                  {
                                    v777 = RtlULongLongAdd((unsigned __int64)v340, v334, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 < 0 )
                                      goto LABEL_607;
                                    v777 = RtlULongLongAdd((unsigned __int64)v782, v341, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 < 0 )
                                      goto LABEL_607;
                                    v340 = v782;
                                  }
                                  while ( (unsigned int)(v342 + 1) < 2 );
                                  v777 = RtlULongLongAdd((unsigned __int64)v782, 4LL, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                  {
LABEL_607:
                                    v343 = v864;
                                    v344 = v902;
                                    goto LABEL_390;
                                  }
                                  v344 = v782;
                                  v864 = v343;
                                  if ( !v343 )
                                    v344 = 0LL;
                                  v902 = v344;
LABEL_390:
                                  if ( v15 < 0 )
                                    goto LABEL_434;
                                  if ( v343 != 4 )
                                    goto LABEL_461;
                                  v871 = *v344;
                                }
                                else
                                {
                                  v15 = -1073741811;
                                  v777 = -1073741811;
                                }
                                if ( v15 < 0 )
                                  goto LABEL_434;
                                if ( !v819 )
                                {
                                  v15 = -1073741811;
                                  goto LABEL_433;
                                }
                                v345 = v819;
                                v782 = v819;
                                while ( 1 )
                                {
                                  v777 = RtlULongLongAdd((unsigned __int64)v345, 4LL, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                    break;
                                  v777 = RtlULongLongAdd((unsigned __int64)v782, v346, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                    break;
                                  v345 = v782;
                                  if ( (unsigned int)(v347 + 1) >= 3 )
                                  {
                                    v777 = RtlULongLongAdd((unsigned __int64)v782, 4LL, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 >= 0 )
                                    {
                                      v349 = v782;
                                      v865 = v348;
                                      if ( !v348 )
                                        v349 = 0LL;
                                      v903 = v349;
                                    }
                                    break;
                                  }
                                }
                                if ( v15 < 0 )
                                  goto LABEL_434;
                                v350 = (unsigned int *)v819;
                                v782 = v819;
                                do
                                {
                                  v351 = *v350;
                                  v777 = RtlULongLongAdd((unsigned __int64)v350, 4LL, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                    goto LABEL_610;
                                  v777 = RtlULongLongAdd((unsigned __int64)v782, v351, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                    goto LABEL_610;
                                  v350 = (unsigned int *)v782;
                                }
                                while ( (unsigned int)(v352 + 1) < 4 );
                                v777 = RtlULongLongAdd((unsigned __int64)v782, 4LL, (__int64 *)&v782);
                                v15 = v777;
                                if ( v777 < 0 )
                                {
LABEL_610:
                                  v353 = v867;
                                  v354 = v904;
                                  goto LABEL_412;
                                }
                                v354 = (unsigned int *)v782;
                                v867 = v353;
                                if ( !v353 )
                                  v354 = 0LL;
                                v904 = v354;
LABEL_412:
                                if ( v15 < 0 )
                                {
                                  v355 = v868;
                                  goto LABEL_415;
                                }
                                if ( v353 == 4 )
                                {
                                  v355 = *v354;
                                  v868 = *v354;
LABEL_415:
                                  if ( v15 < 0 )
                                    goto LABEL_434;
                                  v356 = (unsigned int *)v819;
                                  v782 = v819;
                                  do
                                  {
                                    v357 = *v356;
                                    v777 = RtlULongLongAdd((unsigned __int64)v356, 4LL, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 < 0 )
                                      goto LABEL_612;
                                    v777 = RtlULongLongAdd((unsigned __int64)v782, v357, (__int64 *)&v782);
                                    v15 = v777;
                                    if ( v777 < 0 )
                                      goto LABEL_612;
                                    v356 = (unsigned int *)v782;
                                  }
                                  while ( (unsigned int)(v360 + 1) < 5 );
                                  v777 = RtlULongLongAdd((unsigned __int64)v782, 4LL, (__int64 *)&v782);
                                  v15 = v777;
                                  if ( v777 < 0 )
                                  {
LABEL_612:
                                    v361 = v869;
                                    v362 = v905;
                                    goto LABEL_424;
                                  }
                                  v362 = v782;
                                  v869 = v361;
                                  if ( !v361 )
                                    v362 = 0LL;
                                  v905 = v362;
LABEL_424:
                                  if ( v15 < 0 )
                                  {
                                    v363 = v853;
LABEL_427:
                                    if ( v15 >= 0 )
                                    {
                                      if ( v882 == v906 )
                                      {
                                        v843 = v871;
                                        v845 = v355;
                                        v834 = v363;
                                        if ( v355 > 4 || v358 > 4 )
                                        {
                                          v15 = -2147024774;
                                        }
                                        else
                                        {
                                          memcpy_0(v888, v359, v358);
                                          if ( v820 )
                                            v15 = v820;
                                        }
                                        goto LABEL_433;
                                      }
                                      goto LABEL_601;
                                    }
LABEL_434:
                                    v3 = (void *)v786;
LABEL_435:
                                    v4 = v784;
                                    goto LABEL_436;
                                  }
                                  if ( v361 == 4 )
                                  {
                                    v363 = *v362;
                                    v853 = *v362;
                                    goto LABEL_427;
                                  }
                                }
LABEL_461:
                                v15 = -1073741789;
                                goto LABEL_433;
                              }
                              v248 = v423 >> (8 * (8 - v247)) << (8 * (8 - v247));
                            }
                            else
                            {
                              dwBytes = -1;
                              v248 = 0;
                              v249 = 0;
                            }
                            v792 = v248;
                            goto LABEL_280;
                          }
                          v230 = (const void *)pcchLength;
                          if ( pcchLength )
                          {
                            *(_DWORD *)v229 = v783;
                            v231 = GetProcessHeap();
                            v232 = HeapAlloc(v231, 8u, (SIZE_T)psz);
                            if ( !v232 )
                              goto LABEL_559;
                            v229[1] = v232;
                            memcpy_0(v232, v230, (size_t)psz);
                          }
                          else
                          {
                            *(_DWORD *)v229 = 0;
                            v229[1] = 0LL;
                          }
                          v233 = v782;
                          if ( v782 )
                          {
                            *((_DWORD *)v229 + 4) = v221;
                            v234 = GetProcessHeap();
                            v235 = HeapAlloc(v234, 8u, v221);
                            if ( !v235 )
                              goto LABEL_559;
                            v229[3] = v235;
                            memcpy_0(v235, v233, v221);
                            v193 = 0LL;
                          }
                          else
                          {
                            v193 = 0LL;
                            *((_DWORD *)v229 + 4) = 0;
                            v229[3] = 0LL;
                          }
                          v236 = v936;
                          if ( !v936 )
                          {
                            *((_DWORD *)v229 + 8) = 0;
                            v229[5] = 0LL;
                            goto LABEL_266;
                          }
                          *((_DWORD *)v229 + 8) = v224;
                          v237 = GetProcessHeap();
                          v238 = HeapAlloc(v237, 8u, v224);
                          if ( v238 )
                          {
                            v229[5] = v238;
                            memcpy_0(v238, v236, v224);
                            v193 = 0LL;
LABEL_266:
                            v785 = (size_t)v229;
                            v216 = 0;
                            v229 = 0LL;
                            goto LABEL_267;
                          }
LABEL_559:
                          v216 = -1073741801;
                          v193 = 0LL;
LABEL_267:
                          if ( v229 )
                          {
                            v406 = (void *)v229[1];
                            if ( v406 )
                            {
                              v407 = GetProcessHeap();
                              HeapFree(v407, 0, v406);
                              v229[1] = 0LL;
                            }
                            v408 = (void *)v229[3];
                            if ( v408 )
                            {
                              v409 = GetProcessHeap();
                              HeapFree(v409, 0, v408);
                              v229[3] = 0LL;
                            }
                            v193 = (_QWORD *)v229[5];
                            if ( v193 )
                            {
                              v410 = GetProcessHeap();
                              HeapFree(v410, 0, v193);
                              v193 = 0LL;
                              v229[5] = 0LL;
                            }
                            v411 = GetProcessHeap();
                            HeapFree(v411, 0, v229);
                          }
                          goto LABEL_268;
                        }
LABEL_555:
                        v216 = -1073741762;
                      }
                    }
                  }
LABEL_556:
                  v193 = 0LL;
                  goto LABEL_557;
                }
LABEL_546:
                v110 = v787;
                goto LABEL_328;
              }
              v15 = -2147024774;
LABEL_545:
              v777 = v15;
              goto LABEL_546;
            }
            v87 = (int *)v789;
            v785 = (size_t)v789;
            if ( (_DWORD)v788 )
            {
              do
              {
                v88 = RtlUIntAdd(4u, *v87, (int *)&dwBytes_4);
                v777 = v88;
                v15 = v88;
                if ( v88 >= 0 )
                  v90 = dwBytes_4;
                v839 = v90;
                if ( v88 < 0 )
                  goto LABEL_107;
                v777 = RtlULongLongAdd(v89, v90, (__int64 *)&v785);
                v15 = v777;
                if ( v777 < 0 )
                  goto LABEL_107;
                v87 = (int *)v785;
              }
              while ( v91 + 1 < (unsigned int)v788 );
            }
            v777 = RtlULongLongAdd((unsigned __int64)v87, 4LL, (__int64 *)&v808);
            v15 = v777;
            if ( v777 < 0 )
              goto LABEL_107;
            if ( v92 + 2 <= (_DWORD *)((char *)v789 + HIDWORD(v788)) )
            {
              v93 = v808;
              *v92 = 4;
              *v93 = v831;
              LODWORD(v788) = v788 + 1;
              goto LABEL_107;
            }
LABEL_492:
            v15 = -1073741789;
            v777 = -1073741789;
            goto LABEL_434;
          }
        }
      }
      if ( v15 < 0 )
        goto LABEL_434;
      goto LABEL_97;
    }
    goto LABEL_459;
  }
  v15 = -1073741801;
  v777 = -1073741801;
LABEL_436:
  v788 = 0LL;
  v364 = 0LL;
  v365 = v789;
  if ( v789 )
  {
    v366 = GetProcessHeap();
    HeapFree(v366, 0, v365);
    v364 = 0LL;
    v789 = 0LL;
  }
  v818 = 0LL;
  v367 = v819;
  if ( v819 )
  {
    v368 = GetProcessHeap();
    HeapFree(v368, 0, v367);
    v364 = 0LL;
    v819 = 0LL;
  }
  if ( v3 )
  {
    v369 = GetProcessHeap();
    HeapFree(v369, 0, v3);
    v364 = 0LL;
  }
  if ( v4 )
  {
    v370 = GetProcessHeap();
    HeapFree(v370, 0, v4);
    v364 = 0LL;
  }
  if ( v15 >= 0 )
  {
    if ( !v834 )
    {
LABEL_446:
      v371 = v843;
      v912 = v845;
      v872 = (int *)v888;
      v813 = v364;
      goto LABEL_447;
    }
    v937 = 0LL;
    v803 = 0LL;
    v804 = 0LL;
    v427 = 0LL;
    v849 = 0LL;
    v850 = 0LL;
    v907 = &unk_1800D45F0;
    v833 = 0;
    v883 = 160LL;
    v428 = GetProcessHeap();
    v429 = HeapAlloc(v428, 8u, 0xA0uLL);
    v364 = 0LL;
    pcchLength = (size_t)v429;
    v430 = v429;
    if ( !v429 )
    {
      v434 = 0LL;
      goto LABEL_635;
    }
    memcpy_0(v429, v907, v883);
    v431 = (unsigned int)v883;
    v427 = v430;
    v791 = v430;
    v908 = &unk_1800D4538;
    v884 = 8LL;
    v432 = GetProcessHeap();
    v433 = (wchar_t *)HeapAlloc(v432, 8u, 8uLL);
    v364 = 0LL;
    psz = v433;
    v434 = v433;
    if ( !v433 )
      goto LABEL_634;
    memcpy_0(v433, v908, v884);
    v435 = v884;
    v937 = v434;
    v909 = __rdtsc();
    dwBytes = 0;
    if ( (int)RtlUIntAdd(4u, 4, (int *)&v783) < 0
      || (v832 = v783, (int)RtlUIntAdd(0, v783, (int *)&dwBytes) < 0)
      || (int)RtlUIntAdd(v436, v431, (int *)&v783) < 0
      || (v832 = v783, v437 = RtlUIntAdd(dwBytes, v783, (int *)&dwBytes), (v439 | v437) < 0)
      || (int)RtlUIntAdd(v438, v435, (int *)&v783) < 0
      || (v832 = v783, v440 = RtlUIntAdd(dwBytes, v783, (int *)&dwBytes), (v442 | v440) < 0)
      || (int)RtlUIntAdd(v441, (int)v364 + 8, (int *)&v783) < 0
      || (v832 = v783, v443 = RtlUIntAdd(dwBytes, v783, (int *)&dwBytes), (v444 | v443) < 0) )
    {
      v427 = v791;
      goto LABEL_635;
    }
    HIDWORD(v803) = dwBytes;
    v445 = dwBytes;
    v446 = GetProcessHeap();
    v447 = HeapAlloc(v446, 8u, v445);
    v364 = 0LL;
    if ( !v447 )
      goto LABEL_633;
    v804 = v447;
    LODWORD(v803) = 0;
    v873 = 4;
    if ( (int)RtlULongLongAdd((unsigned __int64)v447, 4LL, (__int64 *)&v808) < 0
      || v448 + 2 > (unsigned int *)((char *)v448 + HIDWORD(v803)) )
    {
      goto LABEL_633;
    }
    v450 = v808;
    *v448 = v449;
    *v450 = v873;
    v451 = v803 + 1;
    LODWORD(v803) = v803 + 1;
    if ( (_DWORD)v431 )
    {
      if ( v804 == v364 )
      {
        if ( (int)RtlUIntAdd(v449, v431, (int *)&v783) < 0 )
          goto LABEL_633;
        v874 = v783;
        if ( (int)RtlUIntAdd(HIDWORD(v803), v783, (int *)&v803 + 1) < 0 )
          goto LABEL_633;
        v451 = v803 + 1;
        LODWORD(v803) = v803 + 1;
        goto LABEL_653;
      }
      v458 = (int *)v804;
      v801 = v804;
      if ( v451 )
      {
        while ( (int)RtlUIntAdd(4u, *v458, (int *)&v783) >= 0 )
        {
          v874 = v783;
          if ( (int)RtlULongLongAdd(v459, (unsigned int)v783, (__int64 *)&v801) < 0 )
            break;
          v458 = (int *)v801;
          if ( v461 + 1 >= v460 )
            goto LABEL_647;
        }
        goto LABEL_650;
      }
LABEL_647:
      v462 = RtlULongLongAdd((unsigned __int64)v458, 4LL, (__int64 *)&v808);
      v364 = 0LL;
      v464 = v462;
      if ( v462 < 0 || (char *)v463 + v431 + 4 > (char *)v804 + HIDWORD(v803) )
        goto LABEL_633;
      v465 = (const void *)pcchLength;
      v466 = v808;
      *v463 = v431;
      memcpy_0(v466, v465, v431);
      v451 = v803 + 1;
      v364 = 0LL;
      LODWORD(v803) = v803 + 1;
      v449 = 4;
    }
    else
    {
      v464 = -1073741811;
    }
    if ( v464 < 0 )
      goto LABEL_633;
LABEL_653:
    if ( v435 )
    {
      if ( v804 == v364 )
      {
        if ( (int)RtlUIntAdd(v449, v435, (int *)&v783) < 0 )
          goto LABEL_633;
        v875 = v783;
        if ( (int)RtlUIntAdd(HIDWORD(v803), v783, (int *)&v803 + 1) < 0 )
          goto LABEL_633;
        v451 = v803 + 1;
        LODWORD(v803) = v803 + 1;
LABEL_668:
        v910 = v909;
        if ( v804 == v364 )
        {
          if ( (int)RtlUIntAdd(v467, 8, (int *)&v783) < 0 )
            goto LABEL_633;
          v876 = v783;
          if ( (int)RtlUIntAdd(HIDWORD(v803), v783, (int *)&v803 + 1) < 0 )
            goto LABEL_633;
LABEL_679:
          LODWORD(v803) = v803 + 1;
          if ( (int)RtlUIntAdd(v477, v477, (int *)&v783) >= 0 )
          {
            v877 = v783;
            dwBytes_4 = v783;
            if ( (int)RtlUIntAdd(v485, 8, (int *)&v783) >= 0 )
            {
              v877 = v783;
              if ( (int)RtlUIntAdd(v486, v783, (int *)&dwBytes_4) >= 0 )
              {
                LODWORD(v784) = dwBytes_4;
                dwBytes_4 = (unsigned int)v364;
                v487 = (size_t *)v364;
                v782 = v364;
                v780 = (unsigned int)v364;
                v856 = v364;
                v821 = v364;
                v838 = v364;
                v809 = (unsigned int)v364;
                v813 = v364;
                psz = (STRSAFE_PCNZWCH)v364;
                v827 = (unsigned int)v364;
                v885 = __rdtsc();
                v816 = 8;
                v488 = RtlUIntAdd(8u, SHIDWORD(v803), (int *)&v816);
                if ( v488 >= 0 )
                {
                  v491 = (v816 + 7) & 0xFFFFFFF8;
                  if ( v491 >= v816 )
                  {
                    v816 = (v816 + 7) & 0xFFFFFFF8;
                    v492 = v491;
                    v493 = GetProcessHeap();
                    v494 = (char *)HeapAlloc(v493, 8u, v492);
                    v364 = 0LL;
                    v495 = v494;
                    if ( v494 )
                    {
                      v785 = (size_t)v494;
                      *(_DWORD *)v494 = v803;
                      v488 = RtlULongLongAdd((unsigned __int64)v494, 4LL, (__int64 *)&v785);
                      if ( v488 < 0
                        || (v497 = v785,
                            *(_DWORD *)v785 = HIDWORD(v803),
                            v488 = RtlULongLongAdd(v497, v496, (__int64 *)&v785),
                            v488 < 0) )
                      {
                        v490 = v487;
                        v489 = (unsigned int)v487;
                      }
                      else
                      {
                        *(_QWORD *)&v495[v816 - 8] = v885;
                        memcpy_0((void *)v785, v804, HIDWORD(v803));
                        v489 = v816;
                        v364 = 0LL;
                        v490 = v495;
                        v782 = v495;
                        v495 = 0LL;
                        v780 = v816;
                      }
                      if ( v495 )
                      {
                        v498 = GetProcessHeap();
                        HeapFree(v498, 0, v495);
                        v489 = v780;
                        v364 = 0LL;
                        v490 = v782;
                      }
                    }
                    else
                    {
                      v488 = -1073741801;
                      v489 = (unsigned int)v487;
                      v490 = v487;
                    }
                  }
                  else
                  {
                    v488 = -1073741675;
                  }
                }
                v499 = v488 | 0x10000000;
                if ( v499 < 0 )
                  goto LABEL_969;
                v916 = (__int64 *)v364;
                v500 = v364;
                v917 = (__int64)v364;
                v918 = v364;
                v919 = (__int64)v364;
                v870 = v364;
                v915 = (SIZE_T)v364;
                v851 = v364;
                if ( v490 )
                {
                  v502 = v489;
                  v837 = v489;
                  if ( v489
                    && (v807 = v489 + 8LL,
                        v503 = MemoryAlloc(v807),
                        v364 = 0LL,
                        pcchLength = (size_t)v503,
                        (v504 = v503) != 0LL) )
                  {
                    v505 = (unsigned __int8 *)v782;
                    v506 = 0;
                    LOBYTE(v781) = 0;
                    v507 = 0LL;
                    if ( v502 )
                    {
                      do
                        v506 ^= *((_BYTE *)v782 + v507++);
                      while ( v507 < v502 );
                      LOBYTE(v781) = v506;
                    }
                    v800 = 0;
                    v508 = v504;
                    v936 = (void *)0xC81ECB17B1B54A58LL;
                    v509 = 0;
                    dwBytes = 0;
                    v510 = -1;
                    v805 = 0;
                    v795 = -1;
                    v511 = v502 & 7;
                    if ( (v502 & 7) != 0 )
                    {
                      v512 = 0;
                      dwBytes = 0;
                      v805 = 0;
                      v513 = 56;
                      v514 = 0;
                      do
                      {
                        v515 = v505 + 1;
                        v516 = *v505;
                        v801 = v515;
                        if ( v512 >= 4 )
                        {
                          v517 = (v516 << v513) | dwBytes;
                          dwBytes = v517;
                        }
                        else
                        {
                          v517 = dwBytes;
                          v514 |= v516 << (v513 - 32);
                        }
                        v505 = (unsigned __int8 *)v801;
                        ++v512;
                        v513 -= 8;
                      }
                      while ( v512 < (int)v511 );
                      v805 = v514;
                      v509 = v514 ^ 0xB17A307A;
                      v518 = v517 ^ 0x42F6B18D;
                      v800 = v514 ^ 0xB17A307A;
                      v519 = 0;
                      v795 = v518;
                      if ( (v502 & 7) != 0 )
                      {
                        do
                        {
                          v801 = v508 + 1;
                          if ( v519 >= 4 )
                          {
                            v518 = __ROL4__(v518, 8);
                            v520 = v518;
                          }
                          else
                          {
                            v509 = __ROL4__(v509, 8);
                            v520 = v509;
                          }
                          *v508 = v520;
                          ++v519;
                          v508 = v801;
                        }
                        while ( v519 < (int)v511 );
                        v509 = v800;
                        v518 = v795;
                      }
                      if ( v511 <= 4 )
                      {
                        v795 = 0;
                        v510 = 0;
                        if ( v511 < 4 )
                        {
                          v509 = v509 >> (8 * (4 - v511)) << (8 * (4 - v511));
                          v800 = v509;
                        }
                      }
                      else
                      {
                        v510 = v518 >> (8 * (8 - v511)) << (8 * (8 - v511));
                        v795 = v510;
                      }
                    }
                    v911 = v502 >> 3;
                    if ( v502 >> 3 )
                    {
                      v521 = HIDWORD(v936);
                      v522 = v911;
                      v523 = dwBytes;
                      v524 = v805;
                      LODWORD(v783) = HIWORD(HIDWORD(v936));
                      v525 = HIWORD(HIDWORD(v936));
                      LODWORD(v787) = WORD2(v936);
                      v790 = 19032;
                      v526 = v505 + 2;
                      v527 = HIDWORD(v936) ^ 0xB1B54A58;
                      v780 = 19032;
                      LODWORD(v786) = WORD1(v936);
                      v528 = WORD2(v936);
                      v785 = (size_t)v526;
                      v801 = v508 + 7;
                      do
                      {
                        v529 = v526[1] | ((*v526 | ((*(v526 - 1) | (*(v526 - 2) << 8)) << 8)) << 8);
                        v530 = *(unsigned __int8 *)(v785 + 4) | ((*(unsigned __int8 *)(v785 + 3) | (v526[2] << 8)) << 8);
                        v531 = v785;
                        v785 += 8LL;
                        v532 = *(unsigned __int8 *)(v531 + 5) | (v530 << 8);
                        v533 = v532 ^ v510;
                        v534 = v529 ^ v521 ^ (v533 - v780) ^ v509;
                        v535 = (__ROR4__(v534, 7) + WORD1(v936) * __ROR4__(v534 ^ v521, 15)) ^ v533;
                        v536 = (v528 * __ROR4__(v535 - 1313519016, 9) - __ROR4__(v535, 10)) ^ v534;
                        v537 = (__ROL4__(v536, 5) + v525 * __ROL4__(v536 ^ v528, 4)) ^ v535;
                        v538 = (HIDWORD(v936) - (v537 ^ 0xB1B54A58)) ^ v536;
                        v539 = (WORD1(v936) * (v538 - v790) - (v538 >> 6)) ^ v537;
                        v540 = (v790 * (v528 ^ __ROR4__(v539, 15))) ^ v538;
                        v541 = (v528 * (v525 + __ROR4__(~v540, 3))) ^ v539;
                        v542 = (v541 - HIDWORD(v936) - v780) ^ v540;
                        v543 = (v786 * (v525 ^ v542)) ^ __ROR4__(v542, 10) ^ v541;
                        v544 = __ROR4__(v543, 3) ^ (v528 * __ROL4__(v543 ^ v790, 6)) ^ v542;
                        v545 = (v790 * (__ROR4__(v544, 15) - v525)) ^ v543;
                        v546 = (v545 >> 15) ^ (v780 * __ROL4__(v545 - v528, 3)) ^ (v545 >> 1) ^ (v780 * (v525 ^ v545)) ^ v544;
                        v547 = (WORD1(v936) * (v546 - v528) - (v546 >> 13)) ^ v545;
                        v548 = __ROR4__(v547, 11) ^ (v528 * __ROR4__(-1313519016 - v547, 9)) ^ v546;
                        v549 = (v548 + 1313519016 - v525) ^ v547;
                        v550 = (v780 * (v549 ^ WORD1(v936)) - __ROR4__(v549, 7)) ^ v548;
                        v551 = (WORD1(v936) * __ROL4__(v525 ^ v550, 4) - __ROR4__(v550, 16)) ^ v549;
                        v552 = (__ROR4__(v551, 4) + v528 * __ROR4__(-1313519016 - v551, 10)) ^ v550;
                        v553 = __ROR4__(v552, 9) ^ (v525 * __ROR4__(v552 + 1313519016, 4)) ^ v551;
                        v554 = (v780 * __ROL4__(v553 ^ HIDWORD(v936), 8) - __ROL4__(v553, 2)) ^ v552;
                        v555 = (WORD1(v936) * __ROR4__(HIDWORD(v936) - v554, 11) - __ROR4__(v554, 12)) ^ v553;
                        v556 = (v555 >> 8) ^ (v528 * (WORD1(v936) ^ v555)) ^ v554;
                        v557 = v801;
                        LODWORD(v531) = v523 ^ v556 ^ v555 ^ v527;
                        v558 = v524 ^ v556;
                        v795 = v531;
                        v523 = v532;
                        v526 = (unsigned __int8 *)v785;
                        v524 = v529;
                        v800 = v558;
                        *((char *)v801 - 4) = v558;
                        v800 = __ROR4__(v800, 8);
                        *v557 = v795;
                        v795 = __ROR4__(v795, 8);
                        *(v557 - 5) = v800;
                        v800 = __ROR4__(v800, 8);
                        *(v557 - 1) = v795;
                        v795 = __ROR4__(v795, 8);
                        *(v557 - 6) = v800;
                        v800 = __ROR4__(v800, 8);
                        *(v557 - 2) = v795;
                        v795 = __ROR4__(v795, 8);
                        *(v557 - 7) = v800;
                        *(v557 - 3) = v795;
                        v509 = __ROR4__(v800, 8);
                        v510 = __ROR4__(v795, 8);
                        v801 = v557 + 8;
                        v521 = HIDWORD(v936);
                        v800 = v509;
                        v795 = v510;
                        --v522;
                      }
                      while ( v522 );
                      v506 = v781;
                      v15 = v777;
                      v487 = (size_t *)v813;
                      v500 = v851;
                      v502 = v837;
                    }
                    v559 = v506;
                    v560 = (void *)pcchLength;
                    *(_QWORD *)(pcchLength + v502) = v559;
                    v561 = v807;
                    v915 = v807;
                    v870 = v560;
                    v916 = &qword_1800D45E0;
                    v917 = 8LL;
                    v919 = 160LL;
                    v918 = xmmword_1800D4540;
                    v562 = GetProcessHeap();
                    v563 = HeapAlloc(v562, 8u, 0x30uLL);
                    v364 = 0LL;
                    v564 = v563;
                    if ( v563 )
                    {
                      *v563 = v561;
                      v565 = GetProcessHeap();
                      v566 = HeapAlloc(v565, 8u, v561);
                      v364 = 0LL;
                      if ( !v566 )
                        goto LABEL_727;
                      *((_QWORD *)v564 + 1) = v566;
                      memcpy_0(v566, (const void *)pcchLength, v561);
                      v564[4] = 160;
                      v567 = GetProcessHeap();
                      v568 = HeapAlloc(v567, 8u, 0xA0uLL);
                      v364 = 0LL;
                      if ( !v568 )
                        goto LABEL_727;
                      *((_QWORD *)v564 + 3) = v568;
                      *v568 = xmmword_1800D4540[0];
                      v568[1] = xmmword_1800D4540[1];
                      v568[2] = xmmword_1800D4540[2];
                      v568[3] = xmmword_1800D4540[3];
                      v568[4] = xmmword_1800D4540[4];
                      v568[5] = xmmword_1800D4540[5];
                      v568[6] = xmmword_1800D4540[6];
                      v568[7] = xmmword_1800D4540[7];
                      v568[8] = xmmword_1800D4540[8];
                      v568[9] = xmmword_1800D4540[9];
                      v564[8] = 8;
                      v569 = GetProcessHeap();
                      v570 = HeapAlloc(v569, 8u, 8uLL);
                      v364 = 0LL;
                      if ( v570 )
                      {
                        *((_QWORD *)v564 + 5) = v570;
                        v500 = v564;
                        *v570 = qword_1800D45E0;
                        v501 = 0;
                        v564 = 0LL;
                      }
                      else
                      {
LABEL_727:
                        v501 = -1073741801;
                      }
                      if ( v564 )
                      {
                        v807 = *((_QWORD *)v564 + 1);
                        if ( v807 )
                        {
                          v571 = GetProcessHeap();
                          HeapFree(v571, 0, (LPVOID)v807);
                          *((_QWORD *)v564 + 1) = 0LL;
                        }
                        v807 = *((_QWORD *)v564 + 3);
                        if ( v807 )
                        {
                          v572 = GetProcessHeap();
                          HeapFree(v572, 0, (LPVOID)v807);
                          *((_QWORD *)v564 + 3) = 0LL;
                        }
                        v807 = *((_QWORD *)v564 + 5);
                        if ( v807 )
                        {
                          v573 = GetProcessHeap();
                          HeapFree(v573, 0, (LPVOID)v807);
                          *((_QWORD *)v564 + 5) = 0LL;
                        }
                        v574 = GetProcessHeap();
                        HeapFree(v574, 0, v564);
                        v364 = 0LL;
                      }
                    }
                    else
                    {
                      v501 = -1073741801;
                    }
                    if ( v501 >= 0 )
                    {
                      v856 = v500;
                      v500 = 0LL;
                    }
                  }
                  else
                  {
                    v501 = -1073741823;
                  }
                  v575 = v870;
                  if ( v870 )
                  {
                    v576 = GetProcessHeap();
                    HeapFree(v576, 0, v575);
                    v364 = 0LL;
                    v870 = 0LL;
                  }
                  if ( v500 )
                  {
                    v577 = (void *)v500[1];
                    if ( v577 )
                    {
                      v578 = GetProcessHeap();
                      HeapFree(v578, 0, v577);
                      v500[1] = 0LL;
                    }
                    v579 = (void *)v500[3];
                    if ( v579 )
                    {
                      v580 = GetProcessHeap();
                      HeapFree(v580, 0, v579);
                      v500[3] = 0LL;
                    }
                    v581 = (void *)v500[5];
                    if ( v581 )
                    {
                      v582 = GetProcessHeap();
                      HeapFree(v582, 0, v581);
                      v500[5] = 0LL;
                    }
                    v583 = GetProcessHeap();
                    HeapFree(v583, 0, v500);
                    v364 = 0LL;
                  }
                }
                else
                {
                  v501 = -1073741811;
                }
                v499 = v501 | 0x10000000;
                if ( v499 < 0 )
                  goto LABEL_969;
                v584 = (const void **)v856;
                dwBytes = 4;
                v585 = RtlUIntAdd(4u, *(_DWORD *)v856, (int *)&dwBytes);
                if ( v585 < 0
                  || (v585 = RtlUIntAdd(dwBytes, v586, (int *)&dwBytes), v585 < 0)
                  || (v585 = RtlUIntAdd(dwBytes, *((_DWORD *)v584 + 4), (int *)&dwBytes), v585 < 0)
                  || (v585 = RtlUIntAdd(dwBytes, v587, (int *)&dwBytes), v585 < 0) )
                {
                  v588 = v828;
                }
                else
                {
                  v585 = RtlUIntAdd(dwBytes, *((_DWORD *)v584 + 8), (int *)&dwBytes);
                  v588 = v828;
                  if ( v585 >= 0 )
                    v588 = dwBytes;
                  v828 = v588;
                }
                if ( v585 >= 0 )
                {
                  v589 = v588;
                  v590 = GetProcessHeap();
                  v591 = HeapAlloc(v590, 8u, v589);
                  v364 = 0LL;
                  v592 = v591;
                  if ( v591 )
                  {
                    *v591 = *(_DWORD *)v584;
                    v936 = v591;
                    v585 = RtlULongLongAdd((unsigned __int64)v591, 4LL, (__int64 *)&v936);
                    if ( v585 >= 0 )
                    {
                      memcpy_0(v936, v584[1], *(unsigned int *)v584);
                      v593 = RtlULongLongAdd((unsigned __int64)v936, *(unsigned int *)v584, (__int64 *)&v936);
                      v364 = 0LL;
                      v585 = v593;
                      if ( v593 >= 0 )
                      {
                        v594 = v936;
                        *(_DWORD *)v936 = *((_DWORD *)v584 + 4);
                        v585 = RtlULongLongAdd((unsigned __int64)v594, 4LL, (__int64 *)&v936);
                        if ( v585 >= 0 )
                        {
                          memcpy_0(v936, v584[3], *((unsigned int *)v584 + 4));
                          v595 = RtlULongLongAdd((unsigned __int64)v936, *((unsigned int *)v584 + 4), (__int64 *)&v936);
                          v364 = 0LL;
                          v585 = v595;
                          if ( v595 >= 0 )
                          {
                            v596 = v936;
                            *(_DWORD *)v936 = *((_DWORD *)v584 + 8);
                            v585 = RtlULongLongAdd((unsigned __int64)v596, 4LL, (__int64 *)&v936);
                            if ( v585 >= 0 )
                            {
                              memcpy_0(v936, v584[5], *((unsigned int *)v584 + 8));
                              v597 = RtlULongLongAdd(
                                       (unsigned __int64)v936,
                                       *((unsigned int *)v584 + 8),
                                       (__int64 *)&v936);
                              v364 = 0LL;
                              v585 = v597;
                              if ( v597 >= 0 )
                              {
                                v821 = v592;
                                v592 = 0LL;
                                dwBytes_4 = v828;
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( v592 )
                    {
                      v598 = GetProcessHeap();
                      HeapFree(v598, 0, v592);
                      v364 = 0LL;
                    }
                  }
                  else
                  {
                    v585 = -1073741801;
                  }
                }
                v499 = v585 | 0x10000000;
                if ( v499 < 0 )
                  goto LABEL_969;
                v920 = v364;
                v878 = (int)v364;
                v921 = v364;
                v879 = (int)v364;
                v829 = 8;
                v599 = RtlUIntAdd(8u, (int)v784, (int *)&v829);
                v499 = v599 | 0x10000000;
                if ( v599 < 0 )
                  goto LABEL_789;
                v601 = (v829 + 7) & 0xFFFFFFF8;
                if ( v601 >= v829 )
                {
                  v852 = (v829 + 7) & 0xFFFFFFF8;
                  v602 = RtlUIntAdd(v601, v600, (int *)&v852);
                  v603 = v848;
                  v499 = v602;
                  if ( v602 >= 0 )
                    v603 = v852;
                  v848 = v603;
                }
                else
                {
                  v499 = -1073741675;
                }
                if ( v499 < 0 )
                  goto LABEL_789;
                if ( !v804 || (unsigned int)v803 <= 1 )
                  goto LABEL_788;
                v604 = (unsigned int *)v804;
                v605 = 0;
                v936 = v804;
                while ( 1 )
                {
                  v606 = *v604;
                  v499 = RtlULongLongAdd((unsigned __int64)v604, 4LL, (__int64 *)&v936);
                  if ( v499 < 0 )
                    break;
                  v499 = RtlULongLongAdd((unsigned __int64)v936, v606, (__int64 *)&v936);
                  if ( v499 < 0 )
                    break;
                  v604 = (unsigned int *)v936;
                  if ( ++v605 )
                  {
                    v607 = *(_DWORD *)v936;
                    v499 = RtlULongLongAdd((unsigned __int64)v936, 4LL, (__int64 *)&v936);
                    if ( v499 >= 0 )
                    {
                      v608 = v936;
                      v878 = v607;
                      if ( !v607 )
                        v608 = 0LL;
                      v920 = v608;
                    }
                    break;
                  }
                }
                if ( v499 < 0 )
                  goto LABEL_789;
                if ( (unsigned int)v803 > 2 )
                {
                  v613 = (unsigned int *)v804;
                  v614 = 0;
                  v936 = v804;
                  while ( 1 )
                  {
                    v615 = *v613;
                    v499 = RtlULongLongAdd((unsigned __int64)v613, 4LL, (__int64 *)&v936);
                    if ( v499 < 0 )
                      break;
                    v499 = RtlULongLongAdd((unsigned __int64)v936, v615, (__int64 *)&v936);
                    if ( v499 < 0 )
                      goto LABEL_803;
                    v613 = (unsigned int *)v936;
                    if ( (unsigned int)++v614 >= 2 )
                    {
                      v617 = *(_DWORD *)v936;
                      v499 = RtlULongLongAdd((unsigned __int64)v936, 4LL, (__int64 *)&v936);
                      if ( v499 >= 0 )
                      {
                        v618 = v936;
                        v879 = v617;
                        if ( !v617 )
                          v618 = 0LL;
                        v921 = v618;
                      }
LABEL_803:
                      if ( v499 < 0 )
                        break;
                      dwBytes = 4;
                      v499 = RtlUIntAdd(4u, v616, (int *)&dwBytes);
                      if ( v499 < 0
                        || (v499 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v499 < 0)
                        || (v499 = RtlUIntAdd(dwBytes, v619, (int *)&dwBytes), v499 < 0)
                        || (v499 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v499 < 0) )
                      {
                        v621 = v847;
                        v364 = 0LL;
                      }
                      else
                      {
                        v499 = RtlUIntAdd(dwBytes, v620, (int *)&dwBytes);
                        v364 = 0LL;
                        v621 = v847;
                        if ( v499 >= 0 )
                          v621 = dwBytes;
                        v847 = v621;
                      }
                      if ( v499 < 0 )
                        goto LABEL_969;
                      if ( v621 > 0x400000 )
                      {
                        v499 = -2147418113;
                        goto LABEL_969;
                      }
                      v809 = v621;
                      goto LABEL_790;
                    }
                  }
                }
                else
                {
LABEL_788:
                  v499 = -1073741811;
                }
LABEL_789:
                v364 = 0LL;
LABEL_790:
                if ( v499 < 0 )
                  goto LABEL_969;
                v609 = v809;
                v610 = GetProcessHeap();
                v611 = HeapAlloc(v610, 8u, v609);
                v364 = 0LL;
                if ( v611 )
                {
                  v612 = v611;
                  v838 = v611;
                  v499 = 0x10000000;
                }
                else
                {
                  v612 = v838;
                  v499 = -805306345;
                }
                if ( v499 < 0 )
                  goto LABEL_969;
                if ( !v821 || !v612 )
                {
                  v499 = -2147024809;
                  goto LABEL_969;
                }
                v925[0] = v821;
                v926 = dwBytes_4;
                v927 = v809;
                v925[1] = v612;
                v928 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                  && (v622 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v623 = ((__int64 (__fastcall *)(__int64, _QWORD *))v622)(134LL, v925);
                  v624 = v809;
                  v499 = v623 | 0x10000000;
                  if ( v623 >= 0 )
                    v624 = v927;
                  v809 = v624;
                }
                else
                {
                  v625 = GetLastError();
                  v499 = v625;
                  if ( v625 > 0 )
                    v499 = (unsigned __int16)v625 | 0x80070000;
                  if ( v499 >= 0 )
                    v499 = -2147467259;
                  v624 = v809;
                }
                v364 = 0LL;
                if ( v499 == -805306333 )
                {
                  v499 = -2147024774;
                  goto LABEL_969;
                }
                if ( v499 < 0 )
                  goto LABEL_969;
                pcchLength = 0LL;
                dwBytes = 0;
                v936 = v612;
                if ( v624 < 4 )
                {
                  v626 = -1073741762;
                  goto LABEL_890;
                }
                LODWORD(v784) = *v612;
                v626 = RtlULongLongAdd((unsigned __int64)v612, 4LL, (__int64 *)&v936);
                if ( v626 < 0 )
                  goto LABEL_889;
                v626 = RtlUIntAdd(0, v627, (int *)&dwBytes);
                if ( v626 < 0 )
                  goto LABEL_889;
                if ( v628 - dwBytes < (unsigned int)v629 )
                  goto LABEL_856;
                v807 = (SIZE_T)v936;
                v837 = v629;
                v626 = RtlULongLongAdd((unsigned __int64)v936, (unsigned int)v629, (__int64 *)&v936);
                if ( v626 < 0 )
                  goto LABEL_889;
                v626 = RtlUIntAdd(dwBytes, v630, (int *)&dwBytes);
                if ( v626 < 0 )
                  goto LABEL_889;
                if ( v631 - dwBytes < (unsigned int)v632 )
                  goto LABEL_856;
                v633 = *(unsigned int *)v936;
                v626 = RtlULongLongAdd((unsigned __int64)v936, v632, (__int64 *)&v936);
                if ( v626 < 0 )
                  goto LABEL_889;
                v626 = RtlUIntAdd(dwBytes, v634, (int *)&dwBytes);
                if ( v626 < 0 )
                  goto LABEL_889;
                if ( v635 - dwBytes < (unsigned int)v633 )
                  goto LABEL_856;
                v851 = v936;
                v626 = RtlULongLongAdd((unsigned __int64)v936, (unsigned int)v633, (__int64 *)&v936);
                if ( v626 < 0 )
                  goto LABEL_889;
                v626 = RtlUIntAdd(dwBytes, v633, (int *)&dwBytes);
                if ( v626 < 0 )
                  goto LABEL_889;
                if ( v636 - dwBytes < v637 )
                  goto LABEL_856;
                LODWORD(v786) = *(_DWORD *)v936;
                v626 = RtlULongLongAdd((unsigned __int64)v936, 4LL, (__int64 *)&v936);
                if ( v626 < 0 )
                  goto LABEL_889;
                v626 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                if ( v626 < 0 )
                  goto LABEL_889;
                if ( v638 - dwBytes < v639 )
                  goto LABEL_856;
                v626 = RtlUIntAdd(dwBytes, v639, (int *)&dwBytes);
                if ( v626 < 0 )
                  goto LABEL_889;
                if ( v640 != dwBytes || (unsigned int)(v641 + v633 + v642) + 12LL != v640 )
                {
LABEL_856:
                  v626 = -1073741762;
                  goto LABEL_889;
                }
                v643 = GetProcessHeap();
                v644 = HeapAlloc(v643, 8u, 0x30uLL);
                v364 = 0LL;
                v645 = (size_t)v644;
                if ( !v644 )
                {
                  v626 = -1073741801;
LABEL_879:
                  v487 = (size_t *)pcchLength;
                  v665 = 0LL;
                  if ( v626 < 0 )
                  {
                    v665 = (_QWORD *)pcchLength;
                    v487 = 0LL;
                  }
                  v813 = v487;
                  if ( !v665 )
                  {
LABEL_890:
                    v499 = v626 | 0x10000000;
                    if ( v499 < 0 )
                      goto LABEL_969;
                    v887 = 0LL;
                    v673 = 0LL;
                    v841 = 0LL;
                    if ( !v487 || (pcchLength = v487[1]) == 0 || !*(_DWORD *)v487 )
                    {
                      v499 = -805306355;
                      goto LABEL_969;
                    }
                    v674 = *(unsigned int *)v487;
                    LODWORD(v783) = 0;
                    if ( !v674 )
                      goto LABEL_929;
                    v675 = v674 - 8;
                    v837 = v675;
                    v676 = MemoryAlloc(v675);
                    v364 = 0LL;
                    v851 = v676;
                    v677 = v676;
                    if ( !v676 )
                    {
                      v673 = v841;
                      goto LABEL_929;
                    }
                    v678 = (unsigned __int8 *)pcchLength;
                    v936 = (void *)0x7F1137FAB69605ELL;
                    v679 = 0;
                    LOBYTE(v781) = 0;
                    v680 = v677;
                    v798 = 0;
                    v681 = v675 & 7;
                    if ( (v675 & 7) != 0 )
                    {
                      v682 = 0;
                      v793 = -1;
                      v802 = 0;
                      v790 = 0;
                      v683 = 0;
                      v684 = 56;
                      do
                      {
                        v685 = *v678;
                        v807 = (SIZE_T)(v678 + 1);
                        if ( (int)v364 >= 4 )
                          v683 |= v685 << v684;
                        else
                          v682 |= v685 << (v684 - 32);
                        LODWORD(v364) = (_DWORD)v364 + 1;
                        v684 -= 8;
                        v678 = (unsigned __int8 *)v807;
                      }
                      while ( (int)v364 < v681 );
                      v15 = v777;
                      v802 = v683;
                      v790 = v682;
                      LODWORD(v364) = v682 ^ 0x92F65A5;
                      v686 = v683 ^ 0x699A899C;
                      v798 = v682 ^ 0x92F65A5;
                      v793 = v683 ^ 0x699A899C;
                      v687 = 0;
                      if ( (v675 & 7) != 0 )
                      {
                        do
                        {
                          v807 = (SIZE_T)(v680 + 1);
                          if ( v687 >= 4 )
                          {
                            v686 = __ROL4__(v686, 8);
                            v688 = v686;
                          }
                          else
                          {
                            LODWORD(v364) = __ROL4__((_DWORD)v364, 8);
                            v688 = (char)v364;
                          }
                          *v680 = v688;
                          ++v687;
                          v680 = (_BYTE *)v807;
                        }
                        while ( v687 < v681 );
                        LODWORD(v364) = v798;
                        v686 = v793;
                      }
                      if ( (unsigned int)v681 <= 4 )
                      {
                        v793 = 0;
                        v689 = 0;
                        if ( (unsigned int)v681 < 4 )
                        {
                          LODWORD(v364) = (unsigned int)v364 >> (8 * (4 - v681)) << (8 * (4 - v681));
                          v798 = (int)v364;
                        }
LABEL_915:
                        if ( v675 >> 3 )
                        {
                          v690 = HIDWORD(v936);
                          v691 = v680 + 7;
                          v692 = v678 + 2;
                          v693 = v675 >> 3;
                          LODWORD(v784) = HIWORD(HIDWORD(v936));
                          v694 = HIWORD(HIDWORD(v936));
                          dwBytes = WORD2(v936);
                          LODWORD(v787) = HIDWORD(v936) ^ 0xAB69605E;
                          v780 = 24670;
                          LODWORD(v786) = WORD1(v936);
                          v695 = v790;
                          do
                          {
                            v696 = *(v692 - 1) | (*(v692 - 2) << 8);
                            v697 = v692[2] << 8;
                            v698 = *v692;
                            v692 += 8;
                            v699 = *(v692 - 7) | ((v698 | (v696 << 8)) << 8);
                            v700 = v699 ^ (unsigned int)v364;
                            v701 = *(v692 - 3) | ((*(v692 - 4) | ((*(v692 - 5) | v697) << 8)) << 8);
                            v702 = v700 ^ v701 ^ v689 ^ v690 ^ 0xAB69605E;
                            v703 = (__ROL4__(v702, 10) + dwBytes * __ROL4__(v702 + 1419157410, 5)) ^ v700;
                            v704 = (WORD1(v936) * __ROR4__(v690 + v703, 9) - __ROL4__(v703, 2)) ^ v702;
                            v705 = (v780 * (v704 - dwBytes) - (v704 >> 13)) ^ v703;
                            v706 = (v694 * __ROL4__(v705 ^ WORD1(v936), 6) - __ROL4__(v705, 2)) ^ v704;
                            v707 = (v690 - (v706 ^ 0xAB69605E)) ^ v705;
                            v708 = (v786 * (v707 ^ dwBytes)) ^ __ROR4__(v707, 6) ^ v706;
                            v709 = (__ROL4__(v708, 2) + v780 * __ROR4__(v708 + v690, 15)) ^ v707;
                            v710 = (v694 * __ROR4__(v709 + 1419157410, 14) - __ROL4__(v709, 8)) ^ v708;
                            v711 = __ROR4__(v710, 10) ^ (dwBytes * __ROR4__(v710 ^ 0xAB69605E, 12)) ^ v709;
                            v712 = (v711 >> 10) ^ (WORD1(v936) * (v711 ^ v694)) ^ v710;
                            v713 = (v694 * (v780 + __ROR4__(~v712, 5))) ^ v711;
                            v714 = (v713 - v694) ^ 0xAB69605E ^ v712;
                            v715 = ((v714 >> 2) + dwBytes * __ROL4__(v714 ^ v694, 2)) ^ v713;
                            v716 = (__ROL4__(v715, 7) + WORD1(v936) * __ROR4__(v715 - v690, 6)) ^ v714;
                            v717 = (v780 * (v716 ^ dwBytes) + __ROR4__(v716, 9)) ^ v715;
                            v718 = (__ROL4__(v717, 7) + v694 * __ROL4__(v717 ^ WORD1(v936), 5)) ^ v716;
                            v719 = v718 ^ (unsigned int)v787 ^ v717;
                            v720 = (dwBytes * (__ROR4__(v719, 3) - WORD1(v936))) ^ v718;
                            v721 = (v780 * __ROR4__(v720 - v690, 1) - __ROR4__(v720, 6)) ^ v719;
                            v722 = (__ROL4__(v721, 14) + v694 * __ROL4__(v721 - 1419157410, 3)) ^ v720;
                            v723 = (dwBytes * __ROL4__(v722 - 1419157410, 15) - __ROR4__(v722, 14)) ^ v721;
                            v724 = (v723 >> 3) ^ (WORD1(v936) * (v723 ^ v780)) ^ v722;
                            v793 = v802 ^ v724;
                            v802 = v701;
                            v725 = v695 ^ __ROL4__(v724, 2) ^ (v780 * __ROL4__(v724 ^ v690, 4));
                            v695 = v699;
                            v798 = v725 ^ v723;
                            *(v691 - 4) = v725 ^ v723;
                            v798 = __ROR4__(v798, 8);
                            *v691 = v793;
                            v691 += 8;
                            v793 = __ROR4__(v793, 8);
                            *(v691 - 13) = v798;
                            v798 = __ROR4__(v798, 8);
                            *(v691 - 9) = v793;
                            v793 = __ROR4__(v793, 8);
                            *(v691 - 14) = v798;
                            v798 = __ROR4__(v798, 8);
                            *(v691 - 10) = v793;
                            v793 = __ROR4__(v793, 8);
                            *(v691 - 15) = v798;
                            *(v691 - 11) = v793;
                            LODWORD(v364) = __ROR4__(v798, 8);
                            v689 = __ROR4__(v793, 8);
                            v798 = (int)v364;
                            v793 = v689;
                            --v693;
                          }
                          while ( v693 );
                          v679 = v781;
                          v15 = v777;
                          v487 = (size_t *)v813;
                          v675 = v837;
                          v677 = v851;
                        }
                        v364 = 0LL;
                        for ( j = 0LL; j < v675; ++j )
                          v679 ^= v677[j];
                        if ( v679 == *(_QWORD *)(v675 + pcchLength) )
                        {
                          v727 = v783;
                          v673 = (wchar_t *)v677;
                          v841 = (wchar_t *)v677;
                          v677 = 0LL;
                          v887 = v675;
                        }
                        else
                        {
                          v673 = v841;
                          v727 = -1073425151;
                        }
                        if ( v677 )
                        {
                          MemoryFree(v677);
                          v673 = v841;
                          v364 = 0LL;
                        }
                        if ( v727 >= 0 )
                        {
                          v728 = v887;
                          v499 = 0x10000000;
                          psz = v673;
                          v673 = 0LL;
                          v841 = 0LL;
                          v827 = v887;
                          goto LABEL_930;
                        }
LABEL_929:
                        v728 = v827;
                        v499 = -805306367;
LABEL_930:
                        if ( v673 )
                        {
                          v729 = GetProcessHeap();
                          HeapFree(v729, 0, v673);
                          v728 = v827;
                          v364 = 0LL;
                          v841 = 0LL;
                        }
                        if ( v499 >= 0 )
                        {
                          v802 = 0;
                          v813 = (void *)psz;
                          if ( v728 >= 4 )
                          {
                            LODWORD(v786) = *(_DWORD *)psz;
                            v730 = RtlULongLongAdd((unsigned __int64)psz, 4LL, (__int64 *)&v813);
                            if ( v730 < 0 )
                              goto LABEL_968;
                            v730 = RtlUIntAdd(0, 4, (int *)&v802);
                            if ( v730 < 0 )
                              goto LABEL_968;
                            if ( v731 - v802 >= 4 )
                            {
                              v732 = *(unsigned int *)v813;
                              v730 = RtlULongLongAdd((unsigned __int64)v813, 4LL, (__int64 *)&v813);
                              if ( v730 < 0 )
                                goto LABEL_968;
                              v730 = RtlUIntAdd(v802, 4, (int *)&v802);
                              if ( v730 < 0 )
                                goto LABEL_968;
                              if ( v733 - v802 >= (unsigned int)v732 )
                              {
                                v730 = RtlUIntAdd(v802, v732, (int *)&v802);
                                if ( v730 < 0 )
                                  goto LABEL_968;
                                v736 = v813;
                                if ( (unsigned __int64)v734 + v735 >= (unsigned __int64)v813 + v732
                                  && v735 + v734 - (_QWORD)v813 - v732 < 8 )
                                {
                                  v790 = (int)v364;
                                  v737 = v364;
                                  v801 = v364;
                                  v730 = (int)v364;
                                  if ( !v813 )
                                  {
LABEL_956:
                                    if ( (_DWORD)v732 )
                                    {
                                      v745 = GetProcessHeap();
                                      v737 = HeapAlloc(v745, 8u, v732);
                                      v364 = 0LL;
                                      v801 = v737;
                                      if ( !v737 )
                                      {
                                        v730 = -1073741801;
                                        goto LABEL_965;
                                      }
                                      v730 = 0;
                                    }
                                    if ( v736 )
                                    {
                                      memcpy_0(v737, v736, v732);
                                      v737 = v801;
                                      v364 = 0LL;
                                    }
                                    v850 = v737;
                                    v849 = __PAIR64__(v732, v790);
LABEL_965:
                                    if ( v730 < 0 || (_DWORD)v786 == (_DWORD)v849 )
                                      goto LABEL_968;
                                    goto LABEL_967;
                                  }
                                  v730 = RtlULongLongAdd((unsigned __int64)v813, (unsigned int)v732, (__int64 *)&v807);
                                  if ( v730 < 0 )
                                    goto LABEL_965;
                                  v739 = v807;
                                  if ( (unsigned __int64)v736 < v807 )
                                  {
                                    while ( 1 )
                                    {
                                      v730 = RtlULongLongAdd(v738, 4LL, (__int64 *)&v807);
                                      if ( v730 < 0 )
                                        break;
                                      if ( v807 > v741 )
                                        goto LABEL_959;
                                      v742 = RtlUIntAdd(4u, *v740, (int *)&v784);
                                      v730 = v742;
                                      if ( v742 >= 0 )
                                        v744 = (unsigned int)v784;
                                      v880 = v744;
                                      if ( v742 < 0 )
                                        break;
                                      v730 = RtlULongLongAdd(v743, v744, (__int64 *)&v837);
                                      if ( v730 < 0 )
                                        break;
                                      v738 = v837;
                                      if ( v837 > v739 )
                                        goto LABEL_959;
                                      ++v790;
                                      if ( v837 >= v739 )
                                        goto LABEL_954;
                                    }
                                    v364 = 0LL;
                                    goto LABEL_965;
                                  }
LABEL_954:
                                  if ( v738 == v739 )
                                  {
                                    v737 = v801;
                                    v364 = 0LL;
                                    goto LABEL_956;
                                  }
LABEL_959:
                                  v730 = -1073741811;
                                  v364 = 0LL;
LABEL_968:
                                  v499 = v730 | 0x10000000;
                                  goto LABEL_969;
                                }
                              }
                            }
                          }
LABEL_967:
                          v730 = -1073741762;
                          goto LABEL_968;
                        }
LABEL_969:
                        v746 = v782;
                        if ( v782 )
                        {
                          v747 = GetProcessHeap();
                          HeapFree(v747, 0, v746);
                          v364 = 0LL;
                        }
                        v748 = v856;
                        if ( v856 )
                        {
                          v749 = (void *)*((_QWORD *)v856 + 1);
                          if ( v749 )
                          {
                            v750 = GetProcessHeap();
                            HeapFree(v750, 0, v749);
                            v748[1] = 0LL;
                          }
                          v751 = (void *)v748[3];
                          if ( v751 )
                          {
                            v752 = GetProcessHeap();
                            HeapFree(v752, 0, v751);
                            v748[3] = 0LL;
                          }
                          v753 = (void *)v748[5];
                          if ( v753 )
                          {
                            v754 = GetProcessHeap();
                            HeapFree(v754, 0, v753);
                            v748[5] = 0LL;
                          }
                          v755 = GetProcessHeap();
                          HeapFree(v755, 0, v748);
                          v364 = 0LL;
                          v856 = 0LL;
                        }
                        v756 = v821;
                        if ( v821 )
                        {
                          v757 = GetProcessHeap();
                          HeapFree(v757, 0, v756);
                          v364 = 0LL;
                        }
                        v758 = v838;
                        if ( v838 )
                        {
                          v759 = GetProcessHeap();
                          HeapFree(v759, 0, v758);
                          v364 = 0LL;
                        }
                        if ( v487 )
                        {
                          v760 = (void *)v487[1];
                          if ( v760 )
                          {
                            v761 = GetProcessHeap();
                            HeapFree(v761, 0, v760);
                            v487[1] = 0LL;
                          }
                          v762 = (void *)v487[3];
                          if ( v762 )
                          {
                            v763 = GetProcessHeap();
                            HeapFree(v763, 0, v762);
                            v487[3] = 0LL;
                          }
                          v764 = (void *)v487[5];
                          if ( v764 )
                          {
                            v765 = GetProcessHeap();
                            HeapFree(v765, 0, v764);
                            v487[5] = 0LL;
                          }
                          v766 = GetProcessHeap();
                          HeapFree(v766, 0, v487);
                          v364 = 0LL;
                        }
                        v767 = (wchar_t *)psz;
                        if ( psz )
                        {
                          v768 = GetProcessHeap();
                          HeapFree(v768, 0, v767);
                          v364 = 0LL;
                        }
                        if ( v499 >= 0 )
                        {
                          if ( (_DWORD)v849 )
                          {
                            v769 = (unsigned int *)v850;
                            if ( v850 )
                            {
                              pcchLength = (size_t)v850;
                              if ( (int)RtlULongLongAdd((unsigned __int64)v850, 4LL, (__int64 *)&pcchLength) >= 0 )
                              {
                                v772 = (int *)pcchLength;
                                v914 = v771;
                                if ( !v771 )
                                  v772 = (int *)v364;
                                v933 = v772;
                                if ( v771 == 4 )
                                {
                                  v833 = *v772;
                                  if ( v833 >= 0 && v770 > 1 )
                                  {
                                    v782 = v769;
                                    v773 = 4LL;
                                    while ( (int)RtlULongLongAdd((unsigned __int64)v769, v773, (__int64 *)&v782) >= 0
                                         && (int)RtlULongLongAdd((unsigned __int64)v782, *v769, (__int64 *)&v782) >= 0 )
                                    {
                                      if ( v774 != -1 )
                                      {
                                        if ( (int)RtlULongLongAdd((unsigned __int64)v782, v773, (__int64 *)&v782) >= 0 )
                                        {
                                          v776 = v782;
                                          v895 = v775;
                                          if ( !v775 )
                                            v776 = v364;
                                          v934 = v776;
                                          if ( v775 == 8 )
                                            v935 = *v776;
                                        }
                                        goto LABEL_633;
                                      }
                                      v769 = (unsigned int *)v782;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LABEL_633;
                      }
                      v689 = v686 >> (8 * (8 - v681)) << (8 * (8 - v681));
                    }
                    else
                    {
                      v790 = 0;
                      v689 = 0;
                    }
                    v793 = v689;
                    goto LABEL_915;
                  }
                  v666 = (void *)v665[1];
                  if ( v666 )
                  {
                    v667 = GetProcessHeap();
                    HeapFree(v667, 0, v666);
                    v665[1] = 0LL;
                  }
                  v668 = (void *)v665[3];
                  if ( v668 )
                  {
                    v669 = GetProcessHeap();
                    HeapFree(v669, 0, v668);
                    v665[3] = 0LL;
                  }
                  v670 = (void *)v665[5];
                  if ( v670 )
                  {
                    v671 = GetProcessHeap();
                    HeapFree(v671, 0, v670);
                    v665[5] = 0LL;
                  }
                  v672 = GetProcessHeap();
                  HeapFree(v672, 0, v665);
                  v813 = v487;
LABEL_889:
                  v364 = 0LL;
                  goto LABEL_890;
                }
                v646 = (const void *)v807;
                if ( v807 )
                {
                  *(_DWORD *)v644 = (_DWORD)v784;
                  v647 = GetProcessHeap();
                  v648 = v837;
                  v649 = HeapAlloc(v647, 8u, v837);
                  v364 = 0LL;
                  if ( !v649 )
                    goto LABEL_860;
                  *(_QWORD *)(v645 + 8) = v649;
                  memcpy_0(v649, v646, v648);
                  v364 = 0LL;
                }
                else
                {
                  *(_DWORD *)v644 = 0;
                  v644[1] = 0LL;
                }
                v650 = v851;
                if ( v851 )
                {
                  *(_DWORD *)(v645 + 16) = v633;
                  v651 = GetProcessHeap();
                  v652 = HeapAlloc(v651, 8u, v633);
                  v364 = 0LL;
                  if ( !v652 )
                    goto LABEL_860;
                  *(_QWORD *)(v645 + 24) = v652;
                  memcpy_0(v652, v650, v633);
                  v364 = 0LL;
                }
                else
                {
                  *(_DWORD *)(v645 + 16) = 0;
                  *(_QWORD *)(v645 + 24) = 0LL;
                }
                v653 = v936;
                if ( !v936 )
                {
                  *(_DWORD *)(v645 + 32) = 0;
                  *(_QWORD *)(v645 + 40) = 0LL;
                  goto LABEL_870;
                }
                v654 = v786;
                *(_DWORD *)(v645 + 32) = v786;
                v655 = v654;
                v656 = GetProcessHeap();
                v657 = HeapAlloc(v656, 8u, v655);
                v364 = 0LL;
                if ( v657 )
                {
                  *(_QWORD *)(v645 + 40) = v657;
                  memcpy_0(v657, v653, v655);
                  v364 = 0LL;
LABEL_870:
                  pcchLength = v645;
                  v626 = 0;
                  v645 = 0LL;
LABEL_871:
                  if ( v645 )
                  {
                    v658 = *(void **)(v645 + 8);
                    if ( v658 )
                    {
                      v659 = GetProcessHeap();
                      HeapFree(v659, 0, v658);
                      *(_QWORD *)(v645 + 8) = 0LL;
                    }
                    v660 = *(void **)(v645 + 24);
                    if ( v660 )
                    {
                      v661 = GetProcessHeap();
                      HeapFree(v661, 0, v660);
                      *(_QWORD *)(v645 + 24) = 0LL;
                    }
                    v662 = *(void **)(v645 + 40);
                    if ( v662 )
                    {
                      v663 = GetProcessHeap();
                      HeapFree(v663, 0, v662);
                      *(_QWORD *)(v645 + 40) = 0LL;
                    }
                    v664 = GetProcessHeap();
                    HeapFree(v664, 0, (LPVOID)v645);
                    v364 = 0LL;
                  }
                  goto LABEL_879;
                }
LABEL_860:
                v626 = -1073741801;
                goto LABEL_871;
              }
            }
          }
LABEL_633:
          v427 = v791;
LABEL_634:
          v434 = v937;
LABEL_635:
          v803 = 0LL;
          v452 = v804;
          if ( v804 )
          {
            v453 = GetProcessHeap();
            HeapFree(v453, 0, v452);
            v364 = 0LL;
            v804 = 0LL;
          }
          v849 = 0LL;
          v454 = v850;
          if ( v850 )
          {
            v455 = GetProcessHeap();
            HeapFree(v455, 0, v454);
            v364 = 0LL;
            v850 = 0LL;
          }
          if ( v427 )
          {
            v456 = GetProcessHeap();
            HeapFree(v456, 0, v427);
            v364 = 0LL;
          }
          if ( v434 )
          {
            v457 = GetProcessHeap();
            HeapFree(v457, 0, v434);
            v364 = 0LL;
          }
          goto LABEL_446;
        }
        v478 = (int *)v804;
        v801 = v804;
        if ( !v451 )
        {
LABEL_676:
          v482 = RtlULongLongAdd((unsigned __int64)v478, 4LL, (__int64 *)&v808);
          v364 = 0LL;
          if ( v482 < 0 || v483 + 3 > (_DWORD *)((char *)v804 + HIDWORD(v803)) )
            goto LABEL_633;
          v484 = v808;
          *v483 = 8;
          v477 = 4;
          *v484 = v910;
          goto LABEL_679;
        }
        while ( (int)RtlUIntAdd(4u, *v478, (int *)&v783) >= 0 )
        {
          v876 = v783;
          if ( (int)RtlULongLongAdd(v479, (unsigned int)v783, (__int64 *)&v801) < 0 )
          {
            v427 = v791;
            v364 = 0LL;
            goto LABEL_634;
          }
          v478 = (int *)v801;
          if ( v481 + 1 >= v480 )
            goto LABEL_676;
        }
LABEL_650:
        v364 = 0LL;
        goto LABEL_633;
      }
      v468 = (int *)v804;
      v801 = v804;
      if ( v451 )
      {
        while ( (int)RtlUIntAdd(4u, *v468, (int *)&v783) >= 0 )
        {
          v875 = v783;
          if ( (int)RtlULongLongAdd(v469, (unsigned int)v783, (__int64 *)&v801) < 0 )
            break;
          v468 = (int *)v801;
          if ( v471 + 1 >= v470 )
            goto LABEL_662;
        }
        goto LABEL_650;
      }
LABEL_662:
      v472 = RtlULongLongAdd((unsigned __int64)v468, 4LL, (__int64 *)&v808);
      v364 = 0LL;
      v474 = v472;
      if ( v472 < 0 || (char *)v473 + v435 + 4 > (char *)v804 + HIDWORD(v803) )
        goto LABEL_633;
      v475 = psz;
      v476 = v808;
      *v473 = v435;
      memcpy_0(v476, v475, v435);
      v451 = v803 + 1;
      LODWORD(v803) = v803 + 1;
      v364 = 0LL;
    }
    else
    {
      v474 = -1073741811;
    }
    if ( v474 < 0 )
      goto LABEL_633;
    v467 = 4;
    goto LABEL_668;
  }
LABEL_1015:
  v371 = v833;
LABEL_447:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v813);
  if ( v15 < 0 )
  {
    switch ( v15 )
    {
      case -805306316:
        v15 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v15 = -1073418201;
        break;
      case -805306306:
        v15 = -1073418200;
        break;
      case -2147024774:
        goto LABEL_453;
    }
    v817 = v15;
    goto LABEL_450;
  }
  if ( v371 != 4 )
  {
LABEL_453:
    v817 = -1073418210;
    goto LABEL_450;
  }
  v844 = *v872;
LABEL_450:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v872);
  if ( v817 < 0 || !v844 )
    return 0;
  return v1;
}
