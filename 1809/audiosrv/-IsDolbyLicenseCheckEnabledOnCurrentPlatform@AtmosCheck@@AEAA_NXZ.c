/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180016B00
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180009BA0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1800155E4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180015BD4 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ??$GetPtrAs@K@?$SP@EV?$SP_HLOCAL@E@@@@QEBAPEAKXZ @ 0x180019A84 (--$GetPtrAs@K@-$SP@EV-$SP_HLOCAL@E@@@@QEBAPEAKXZ.c)
 *     StringLengthWorkerW_0 @ 0x180019A90 (StringLengthWorkerW_0.c)
 *     RtlULongLongAdd @ 0x180019ADC (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180019AFC (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x18005F850 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x18006869C (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800686C8 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     wcscmp_0 @ 0x18006887F (wcscmp_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800FB728 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

bool __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  unsigned int *v1; // rcx
  unsigned int v2; // eax
  int v3; // ecx
  bool result; // al
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  int v8; // r14d
  _BYTE *j; // rbx
  _BYTE *v10; // r11
  int v11; // r12d
  int v12; // r13d
  int v13; // ecx
  char *v14; // rsi
  __int64 v15; // r15
  int v16; // r10d
  int v17; // eax
  int v18; // r9d
  int v19; // r8d
  int v20; // r9d
  int v21; // r10d
  int v22; // r8d
  unsigned int v23; // edi
  int v24; // r10d
  unsigned int v25; // edi
  int v26; // r10d
  int v27; // edi
  unsigned int v28; // r10d
  int v29; // edi
  int v30; // r10d
  int v31; // edi
  unsigned int v32; // r10d
  int v33; // ecx
  int v34; // r10d
  unsigned int v35; // edi
  int v36; // r10d
  int v37; // edi
  int v38; // r10d
  int v39; // edi
  unsigned int v40; // r10d
  int v41; // edi
  int v42; // r10d
  int v43; // edi
  unsigned int v44; // r10d
  int v45; // edi
  int v46; // ecx
  __m128i v47; // xmm2
  unsigned __int64 v48; // rax
  __m128i v49; // xmm1
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  char i; // cl
  const WCHAR *v57; // rdx
  __int64 v58; // rax
  bool v59; // zf
  _BYTE *v60; // rbx
  char *v61; // rsi
  int v62; // r12d
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned int v65; // r15d
  unsigned int v66; // edi
  const CHAR *v67; // rdx
  __int64 v68; // rax
  __int64 (__fastcall *ProcAddress)(); // rax
  HANDLE ProcessHeap; // rax
  int v71; // ebx
  signed int v72; // edi
  HLOCAL v73; // rax
  void *v74; // rbx
  HANDLE v75; // rax
  void *v76; // rax
  const void *v77; // r12
  size_t v78; // rbx
  HANDLE v79; // rax
  void *v80; // rax
  unsigned __int16 *v81; // rdi
  unsigned int v82; // r13d
  __int64 v83; // rcx
  int v84; // r15d
  size_t v85; // rdx
  int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // edi
  int v89; // r10d
  int v90; // ecx
  unsigned int v91; // eax
  unsigned int v92; // edi
  HANDLE v93; // rax
  _DWORD *v94; // rax
  int v95; // r10d
  unsigned int v96; // edi
  _DWORD *v97; // rdx
  unsigned int v98; // r8d
  unsigned int v99; // ecx
  _DWORD *v100; // rdx
  unsigned int v101; // r9d
  unsigned int v102; // r8d
  size_t v103; // rdx
  unsigned int v104; // r9d
  unsigned int v105; // r8d
  const wchar_t *v106; // rcx
  __int64 v107; // r9
  unsigned int v108; // r8d
  _DWORD *v109; // rdx
  unsigned int v110; // edi
  unsigned int v111; // r8d
  _DWORD *v112; // rdx
  unsigned int v113; // edi
  unsigned int v114; // r8d
  _DWORD *v115; // rdx
  unsigned int v116; // edi
  unsigned int v117; // ecx
  unsigned int v118; // eax
  void *v119; // r12
  unsigned int v120; // ebx
  int v121; // r15d
  unsigned int v122; // ecx
  unsigned int v123; // edi
  HANDLE v124; // rax
  char *v125; // rax
  char *v126; // rdi
  unsigned int v127; // r9d
  void *v128; // rcx
  unsigned __int8 *v129; // r15
  _QWORD *v130; // r12
  unsigned __int64 v131; // r13
  HANDLE v132; // rax
  char *v133; // rax
  char *v134; // r8
  unsigned __int8 v135; // r10
  unsigned __int64 v136; // rcx
  __m128i v137; // xmm2
  __m128i v138; // xmm1
  __m128i v139; // xmm0
  __m128i v140; // xmm0
  __m128i v141; // xmm1
  __m128i v142; // xmm1
  __m128i v143; // xmm1
  __m128i v144; // xmm1
  char *v145; // rbx
  int v146; // r9d
  unsigned int v147; // eax
  int v148; // ecx
  _BYTE *v149; // rbx
  int v150; // esi
  unsigned __int64 v151; // r10
  int v152; // r12d
  unsigned __int8 *v153; // r15
  int v154; // r11d
  int v155; // eax
  int v156; // r8d
  int v157; // edi
  int v158; // r8d
  int v159; // edi
  int v160; // r9d
  int v161; // edx
  int v162; // r9d
  int v163; // edx
  int v164; // r9d
  unsigned int v165; // edx
  int v166; // r9d
  int v167; // edx
  int v168; // r9d
  int v169; // edx
  int v170; // r9d
  int v171; // edx
  unsigned int v172; // r9d
  unsigned int v173; // edx
  int v174; // r9d
  int v175; // edx
  int v176; // r9d
  int v177; // edx
  int v178; // r9d
  int v179; // edx
  int v180; // r9d
  int v181; // edx
  unsigned int v182; // r9d
  int v183; // eax
  unsigned int v184; // ebx
  HANDLE v185; // rax
  _DWORD *v186; // rax
  _DWORD *v187; // rdi
  HANDLE v188; // rax
  void *v189; // rax
  HANDLE v190; // rax
  _OWORD *v191; // rax
  HANDLE v192; // rax
  _QWORD *v193; // rax
  int v194; // r15d
  void *v195; // rdi
  HANDLE v196; // rax
  const void **v197; // rbx
  int v198; // r15d
  unsigned int v199; // edx
  unsigned int v200; // edi
  HANDLE v201; // rax
  _DWORD *v202; // rax
  void *v203; // r12
  void *v204; // rcx
  void *v205; // rcx
  unsigned int v206; // r12d
  unsigned int v207; // ebx
  int v208; // eax
  unsigned int v209; // ecx
  void *v210; // rcx
  int v211; // edi
  unsigned int v212; // r10d
  int v213; // edi
  __int64 v214; // r10
  int *v215; // rax
  unsigned int *v216; // rcx
  unsigned int v217; // edi
  unsigned int *v218; // rdx
  unsigned int v219; // edi
  unsigned int v220; // r9d
  unsigned int v221; // r10d
  void *v222; // rax
  unsigned int v223; // r10d
  unsigned int v224; // r11d
  unsigned int v225; // r10d
  unsigned int v226; // eax
  unsigned int v227; // edi
  HANDLE v228; // rax
  unsigned int *v229; // rax
  unsigned int *v230; // rdi
  FARPROC v231; // rax
  int v232; // eax
  unsigned int v233; // edx
  unsigned int *v234; // rcx
  unsigned int *v235; // rdi
  SIZE_T v236; // rbx
  char *v237; // r12
  unsigned int v238; // edi
  unsigned int *v239; // rcx
  unsigned int v240; // r8d
  SIZE_T v241; // r15
  unsigned int v242; // ecx
  HANDLE v243; // rax
  _QWORD *v244; // rdi
  HANDLE v245; // rax
  void *v246; // rax
  char *v247; // rdx
  HANDLE v248; // rax
  void *v249; // rax
  HANDLE v250; // rax
  void *v251; // rax
  int v252; // r15d
  _QWORD *v253; // rax
  int v254; // ebx
  unsigned __int8 *v255; // r15
  unsigned int v256; // eax
  SIZE_T v257; // rdi
  HANDLE v258; // rax
  unsigned int *v259; // rax
  unsigned int *v260; // r8
  unsigned int *v261; // r10
  unsigned __int8 v262; // cl
  unsigned __int8 *v263; // r11
  unsigned int v264; // eax
  unsigned int v265; // edx
  unsigned int v266; // r9d
  int v267; // ebx
  _BYTE *v268; // r10
  int v269; // r13d
  int v270; // r15d
  unsigned __int8 *v271; // r11
  int v272; // r12d
  int v273; // eax
  int v274; // r8d
  int v275; // edi
  int v276; // r8d
  int v277; // r9d
  int v278; // edi
  unsigned int v279; // edx
  int v280; // r9d
  unsigned int v281; // edx
  int v282; // r9d
  int v283; // edx
  unsigned int v284; // r9d
  int v285; // edx
  int v286; // r9d
  int v287; // edx
  unsigned int v288; // r9d
  int v289; // edx
  int v290; // r9d
  unsigned int v291; // edx
  int v292; // r9d
  int v293; // edx
  int v294; // r9d
  int v295; // edx
  unsigned int v296; // r9d
  int v297; // edx
  int v298; // r9d
  int v299; // edx
  unsigned int v300; // r9d
  int v301; // edx
  int v302; // ecx
  unsigned __int64 v303; // rax
  __m128i v304; // xmm2
  __m128i v305; // xmm1
  __m128i v306; // xmm0
  __m128i v307; // xmm0
  __m128i v308; // xmm1
  __m128i v309; // xmm1
  __m128i v310; // xmm1
  __m128i v311; // xmm1
  __int64 v312; // r15
  char *v313; // r12
  __int64 v314; // rcx
  size_t v315; // r9
  unsigned __int64 v316; // rdi
  void *v317; // rax
  int v318; // ebx
  char *v319; // rcx
  unsigned int v320; // r8d
  int v321; // r15d
  char *v322; // rdx
  HANDLE v323; // rax
  HANDLE v324; // rax
  _QWORD *v325; // rbx
  void *v326; // rdi
  HANDLE v327; // rax
  void *v328; // rdi
  HANDLE v329; // rax
  void *v330; // rdi
  HANDLE v331; // rax
  HANDLE v332; // rax
  HANDLE v333; // rax
  void *v334; // rdi
  HANDLE v335; // rax
  void *v336; // rdi
  HANDLE v337; // rax
  void *v338; // rdi
  HANDLE v339; // rax
  void *v340; // rdi
  HANDLE v341; // rax
  HANDLE v342; // rax
  HANDLE v343; // rax
  __int64 v344; // r11
  int v345; // r9d
  int *v346; // rax
  int v347; // eax
  LPVOID v348; // rcx
  int v349; // edi
  unsigned int v350; // r9d
  int v351; // edi
  int *v352; // rax
  unsigned int *v353; // rcx
  unsigned int v354; // edi
  unsigned int *v355; // rdx
  unsigned int v356; // edi
  _DWORD *v357; // rax
  unsigned int *v358; // rcx
  unsigned int v359; // edi
  unsigned int *v360; // rdx
  int v361; // eax
  unsigned int v362; // r9d
  __int64 v363; // r11
  const void *v364; // r10
  unsigned int *v365; // rcx
  unsigned int v366; // edi
  unsigned int *v367; // rdx
  unsigned int v368; // edi
  unsigned int *v369; // rax
  unsigned int *v370; // rcx
  unsigned int v371; // edi
  unsigned int *v372; // rdx
  unsigned int v373; // edi
  int *v374; // rax
  void *v375; // rdi
  HANDLE v376; // rax
  void *v377; // rdi
  HANDLE v378; // rax
  HANDLE v379; // rax
  HANDLE v380; // rax
  int v381; // ebx
  int v382; // eax
  HMODULE *v383; // rdi
  _DWORD *Ptr; // rax
  AtmosCheck *v385; // rdi
  HMODULE *v386; // rdi
  __int64 v387; // rbx
  __int64 v388; // r14
  signed int LastError; // eax
  __int64 v390; // r9
  void *k; // rsi
  void *v392; // r8
  signed int v393; // eax
  DWORD CurrentThreadId; // eax
  __int64 v395; // r14
  signed int v396; // eax
  __int64 v397; // r9
  void *m; // rsi
  void *v399; // r8
  signed int v400; // eax
  HANDLE CurrentProcess; // rax
  signed int v402; // eax
  int v403; // eax
  __int64 v404; // rdx
  int v405; // eax
  int v406; // eax
  __int64 v407; // rdx
  int v408; // eax
  int v409; // eax
  int v410; // eax
  __int64 v411; // rdx
  int v412; // eax
  __int64 v413; // rdx
  int v414; // eax
  __int64 v415; // rdx
  HANDLE v416; // rax
  int v417; // r12d
  int v418; // r8d
  char v419; // di
  int v420; // edx
  unsigned int v421; // edx
  unsigned int v422; // r9d
  int v423; // ecx
  unsigned int v424; // esi
  char v425; // dl
  void *v426; // rbx
  HANDLE v427; // rax
  void *v428; // rbx
  HANDLE v429; // rax
  void *v430; // rbx
  HANDLE v431; // rax
  HANDLE v432; // rax
  void *v433; // rdi
  HANDLE v434; // rax
  void *v435; // rdi
  HANDLE v436; // rax
  void *v437; // rdi
  HANDLE v438; // rax
  HANDLE v439; // rax
  HANDLE v440; // rax
  signed int v441; // eax
  void *v442; // rbx
  HANDLE v443; // rax
  void *v444; // rbx
  HANDLE v445; // rax
  void *v446; // rbx
  HANDLE v447; // rax
  HANDLE v448; // rax
  void *v449; // rbx
  HANDLE v450; // rax
  void *v451; // rbx
  HANDLE v452; // rax
  void *v453; // rbx
  HANDLE v454; // rax
  HANDLE v455; // rax
  int v456; // r12d
  char v457; // r9
  int v458; // edx
  unsigned int v459; // edx
  int v460; // ebx
  char v461; // r15
  void *v462; // rbx
  HANDLE v463; // rax
  DWORD ModuleFileNameW; // eax
  void *v465; // rbx
  void *v466; // r12
  HANDLE v467; // rax
  void *v468; // rax
  void *v469; // r13
  size_t v470; // rbx
  HANDLE v471; // rax
  void *v472; // rax
  void *v473; // rdi
  unsigned int v474; // r12d
  __int64 v475; // rcx
  unsigned int v476; // edi
  HANDLE v477; // rax
  _DWORD *v478; // rax
  _DWORD *v479; // rdi
  LPVOID v480; // r9
  __int64 v481; // r11
  int *v482; // rcx
  int v483; // r10d
  __int64 v484; // rax
  unsigned int v485; // edi
  int v486; // ebx
  int v487; // eax
  int v488; // r12d
  _BYTE *v489; // rax
  _BYTE *v490; // rbx
  int v491; // ecx
  int v492; // r15d
  int v493; // r11d
  char *v494; // rsi
  int v495; // edi
  char *v496; // r13
  __int64 v497; // r14
  int v498; // eax
  int v499; // r10d
  int v500; // r9d
  int v501; // r10d
  int v502; // r11d
  int v503; // r9d
  unsigned int v504; // r8d
  int v505; // r11d
  unsigned int v506; // r8d
  int v507; // r11d
  int v508; // r8d
  unsigned int v509; // r11d
  int v510; // r8d
  int v511; // r11d
  int v512; // r8d
  unsigned int v513; // r11d
  int v514; // ecx
  int v515; // r11d
  unsigned int v516; // r8d
  int v517; // r11d
  int v518; // r8d
  int v519; // r11d
  int v520; // r8d
  unsigned int v521; // r11d
  int v522; // r8d
  int v523; // r11d
  int v524; // r8d
  unsigned int v525; // r11d
  int v526; // r8d
  int v527; // ecx
  unsigned __int64 v528; // rax
  __m128i v529; // xmm2
  __m128i v530; // xmm1
  __m128i v531; // xmm0
  __m128i v532; // xmm0
  __m128i v533; // xmm1
  __m128i v534; // xmm1
  __m128i v535; // xmm1
  __m128i v536; // xmm1
  char n; // cl
  const WCHAR *v538; // rdx
  __int64 v539; // rax
  _BYTE *v540; // rbx
  char *v541; // r13
  __int64 v542; // rcx
  unsigned __int64 v543; // rcx
  unsigned int v544; // eax
  unsigned int v545; // ecx
  const CHAR *v546; // rdx
  __int64 v547; // rax
  __int64 (__fastcall *v548)(); // rax
  HANDLE v549; // rax
  HMODULE *v550; // rbx
  __int64 v551; // r12
  int v552; // eax
  int v553; // r12d
  _BYTE *v554; // rax
  _BYTE *v555; // rbx
  int v556; // ecx
  int v557; // r15d
  int v558; // r11d
  char *v559; // rsi
  int v560; // edi
  char *v561; // r13
  __int64 v562; // r14
  int v563; // eax
  int v564; // r10d
  int v565; // r9d
  int v566; // r10d
  int v567; // r11d
  int v568; // r9d
  unsigned int v569; // r8d
  int v570; // r11d
  unsigned int v571; // r8d
  int v572; // r11d
  int v573; // r8d
  unsigned int v574; // r11d
  int v575; // r8d
  int v576; // r11d
  int v577; // r8d
  unsigned int v578; // r11d
  int v579; // ecx
  int v580; // r11d
  unsigned int v581; // r8d
  int v582; // r11d
  int v583; // r8d
  int v584; // r11d
  int v585; // r8d
  unsigned int v586; // edx
  int v587; // r8d
  int v588; // edx
  int v589; // r8d
  unsigned int v590; // edx
  int v591; // r8d
  int v592; // ecx
  unsigned __int64 v593; // rax
  __m128i v594; // xmm2
  __m128i v595; // xmm1
  __m128i v596; // xmm0
  __m128i v597; // xmm0
  __m128i v598; // xmm1
  __m128i v599; // xmm1
  __m128i v600; // xmm1
  __m128i v601; // xmm1
  char jj; // cl
  const WCHAR *v603; // rdx
  __int64 v604; // rax
  _BYTE *v605; // rbx
  char *v606; // r13
  __int64 v607; // rcx
  unsigned __int64 v608; // rcx
  unsigned int v609; // eax
  unsigned int v610; // ecx
  const CHAR *v611; // rdx
  __int64 v612; // rax
  __int64 (__fastcall *v613)(); // rax
  HANDLE v614; // rax
  HMODULE *v615; // rbx
  __int64 v616; // r12
  signed int v617; // eax
  signed int v618; // r12d
  _DWORD *v619; // rbx
  signed int v620; // eax
  LPVOID v621; // rax
  LPVOID v622; // rax
  _DWORD *v623; // rdi
  signed int v624; // eax
  _DWORD *v625; // rbx
  unsigned int i1; // r14d
  __int64 v627; // rax
  unsigned int v628; // r8d
  __int64 v629; // rdi
  unsigned int v630; // ecx
  _DWORD *v631; // rdx
  __int64 v632; // rax
  wchar_t *v633; // rcx
  __int64 v634; // rax
  wchar_t *v635; // rcx
  wchar_t *v636; // rcx
  __int64 v637; // rax
  wchar_t *v638; // rcx
  wchar_t *v639; // rdx
  __int64 v640; // rax
  wchar_t *v641; // rcx
  __int64 v642; // rax
  wchar_t *v643; // rdx
  __int64 v644; // rax
  wchar_t *v645; // rcx
  __int64 v646; // rax
  wchar_t *v647; // rdx
  __int64 v648; // rax
  wchar_t *v649; // rcx
  __int64 v650; // rax
  __int64 v651; // rdx
  __int64 v652; // rax
  __int64 v653; // rcx
  __int64 v654; // rax
  __int64 v655; // rdx
  __int64 v656; // rax
  __int64 v657; // rcx
  __int64 v658; // rax
  __int64 v659; // rdx
  __int64 v660; // rax
  __int64 v661; // rcx
  __int64 v662; // rax
  __int64 v663; // rdx
  __int64 v664; // rax
  __int64 v665; // rcx
  __int64 v666; // rax
  __int64 v667; // rdx
  __int64 v668; // rax
  char *v669; // rax
  char *v670; // rbx
  char *v671; // rsi
  int v672; // r11d
  int v673; // r15d
  int v674; // edi
  int v675; // r10d
  char *v676; // rbx
  __int64 v677; // r14
  int v678; // eax
  int v679; // r9d
  int v680; // r8d
  int v681; // r9d
  int v682; // r10d
  int v683; // r8d
  unsigned int v684; // edi
  int v685; // r10d
  unsigned int v686; // edi
  int v687; // r10d
  int v688; // edi
  unsigned int v689; // r10d
  int v690; // edi
  int v691; // r10d
  int v692; // edi
  unsigned int v693; // r10d
  int v694; // ecx
  int v695; // r10d
  unsigned int v696; // edi
  int v697; // r10d
  int v698; // edi
  int v699; // r10d
  int v700; // edi
  unsigned int v701; // r10d
  int v702; // edi
  int v703; // r10d
  int v704; // edi
  unsigned int v705; // r10d
  int v706; // edi
  int v707; // ecx
  unsigned __int64 v708; // rax
  __m128i v709; // xmm2
  __m128i v710; // xmm1
  __m128i v711; // xmm0
  __m128i v712; // xmm0
  __m128i v713; // xmm1
  __m128i v714; // xmm1
  __m128i v715; // xmm1
  __m128i v716; // xmm1
  char i2; // cl
  _BYTE *v718; // rdx
  __int64 *v719; // rax
  __int64 v720; // rdi
  __int64 v721; // rcx
  char *v722; // rdx
  __int64 v723; // rcx
  __int64 v724; // rdx
  __int64 v725; // rcx
  __int64 v726; // rdx
  __int64 v727; // rcx
  __int64 v728; // rdx
  __int64 v729; // rcx
  __int64 v730; // rdx
  __int64 v731; // rcx
  __int64 v732; // rdx
  __int64 v733; // rcx
  __int64 v734; // rdx
  __int64 v735; // rcx
  __int64 v736; // rdx
  __int64 v737; // rcx
  __int64 v738; // rdx
  __int64 v739; // rcx
  __int64 v740; // rdx
  __int64 v741; // rcx
  __int64 v742; // rdx
  __int64 v743; // rcx
  __int64 v744; // rdx
  __int64 v745; // rcx
  __int64 v746; // rdx
  __int64 v747; // rcx
  __int64 v748; // rdx
  __int64 v749; // rcx
  __int64 v750; // rdx
  __int64 v751; // rcx
  __int64 v752; // rdx
  __int64 v753; // rcx
  __int64 v754; // rdx
  __int64 v755; // rcx
  __int64 v756; // rdx
  __int64 v757; // rcx
  __int64 v758; // rdx
  __int64 v759; // rcx
  __int64 v760; // rdx
  __int64 v761; // rcx
  __int64 v762; // rdx
  __int64 v763; // rcx
  __int64 v764; // rdx
  __int64 v765; // rcx
  __int64 v766; // rdx
  __int64 v767; // rcx
  __int64 v768; // rdx
  __int64 v769; // rcx
  __int64 v770; // rdx
  __int64 v771; // rcx
  __int64 v772; // rdx
  __int64 v773; // rcx
  __int64 v774; // rdx
  __int64 v775; // rcx
  __int64 v776; // rdx
  __int64 v777; // rcx
  __int64 v778; // rdx
  __int64 v779; // rcx
  __int64 v780; // rdx
  __int64 v781; // rcx
  __int64 v782; // rdx
  __int64 v783; // rcx
  __int64 v784; // rdx
  __int64 v785; // rcx
  __int64 v786; // rdx
  __int64 v787; // rcx
  __int64 v788; // rdx
  __int64 v789; // rcx
  __int64 v790; // rdx
  __int64 v791; // rcx
  __int64 v792; // rdx
  __int64 v793; // rcx
  __int64 v794; // rdx
  __int64 v795; // rcx
  LPVOID v796; // rax
  _QWORD *v797; // rbx
  __int16 *v798; // rcx
  unsigned int v799; // edi
  _QWORD *v800; // rdx
  __int16 v801; // r8
  _WORD *v802; // rcx
  __int64 v803; // rax
  __int64 v804; // rdi
  __int64 v805; // rax
  int v806; // eax
  int v807; // r13d
  LPVOID v808; // rax
  __int64 v809; // rcx
  signed int v810; // eax
  signed int v811; // eax
  _WORD *v812; // rdi
  __int64 v813; // rcx
  int v814; // edi
  signed int v815; // eax
  int v816; // eax
  unsigned int v817; // edi
  __int64 v818; // r13
  signed int v819; // eax
  int v820; // eax
  __int64 v821; // rax
  signed int v822; // eax
  unsigned __int16 *v823; // rax
  __int64 v824; // rbx
  signed int v825; // eax
  int v826; // eax
  __int64 v827; // rax
  signed int v828; // eax
  int v829; // ebx
  unsigned int v830; // edx
  int v831; // eax
  unsigned int v832; // ebx
  void *v833; // rdi
  void *v834; // rdi
  __int64 v835; // rdx
  __int64 v836; // rdi
  signed int v837; // eax
  unsigned int v838; // r13d
  int v839; // eax
  __int64 v840; // rax
  signed int v841; // eax
  void *v842; // rdi
  __int64 v843; // rbx
  int v844; // eax
  int v845; // r12d
  int v846; // ebx
  int v847; // edi
  __int64 v848; // rax
  int v849; // edx
  int v850; // ecx
  __int64 v851; // rax
  int v852; // eax
  HMODULE *v853; // rdi
  __int64 v854; // rbx
  unsigned int v855; // edi
  __int64 v856; // r12
  __int64 v857; // rax
  int v858; // edi
  int v859; // eax
  void *v860; // rbx
  int v861; // edi
  __int64 v862; // rax
  __int64 v863; // r12
  signed int v864; // ebx
  __int64 v865; // rax
  signed int v866; // eax
  int v867; // eax
  SIZE_T v868; // rcx
  __int64 v869; // rax
  int v870; // r9d
  int v871; // edx
  int v872; // r8d
  int v873; // ecx
  int v874; // r10d
  int v875; // r13d
  int v876; // edi
  unsigned __int16 *v877; // rdi
  unsigned __int16 *v878; // rax
  __int64 v879; // r14
  int v880; // r8d
  unsigned __int8 *v881; // r9
  signed __int64 v882; // r11
  int v883; // r8d
  int v884; // edi
  int v885; // edx
  int v886; // edi
  int v887; // edx
  int v888; // edi
  int v889; // ecx
  int v890; // ecx
  void *v891; // rdi
  signed int v892; // ebx
  int v893; // r13d
  __int64 v894; // rax
  __int64 v895; // r12
  signed int v896; // eax
  int v897; // eax
  SIZE_T v898; // rcx
  __int64 v899; // rax
  int v900; // eax
  int v901; // edx
  int v902; // edi
  int v903; // r8d
  int v904; // ecx
  int v905; // r10d
  int v906; // r13d
  char v907; // r15
  unsigned __int16 *v908; // rdi
  unsigned __int16 *v909; // rax
  __int64 v910; // r14
  int v911; // r8d
  unsigned __int8 *v912; // r9
  signed __int64 v913; // r11
  int v914; // r8d
  int v915; // edi
  int v916; // edx
  int v917; // edi
  int v918; // edx
  int v919; // edi
  int v920; // ecx
  int v921; // ecx
  void *v922; // rdi
  char v923; // al
  unsigned int v924; // r13d
  int v925; // edx
  int v926; // r12d
  int v927; // edi
  int v928; // r12d
  int v929; // ebx
  __int64 v930; // rax
  void *v931; // rbx
  __int64 v932; // rax
  signed int v933; // ebx
  int v934; // edi
  void *v935; // rax
  signed int v936; // eax
  void *v937; // rdi
  int v938; // eax
  char *v939; // rcx
  __int64 v940; // rax
  int v941; // edx
  int v942; // r9d
  int v943; // r11d
  int v944; // ecx
  int v945; // r10d
  int v946; // r8d
  unsigned __int8 *v947; // rdi
  unsigned __int16 *v948; // rax
  unsigned __int16 *v949; // rax
  int v950; // esi
  unsigned __int8 *v951; // r9
  signed __int64 v952; // r11
  int v953; // r8d
  int v954; // edi
  int v955; // edx
  int v956; // edi
  int v957; // edx
  int v958; // ecx
  void *v959; // rdi
  signed int v960; // ebx
  __int64 v961; // rax
  SIZE_T v962; // rdi
  int v963; // r12d
  __int64 v964; // rax
  signed int v965; // eax
  int v966; // eax
  unsigned __int16 *v967; // rcx
  int v968; // r12d
  __int64 v969; // rax
  int v970; // eax
  int v971; // edx
  int v972; // r8d
  int v973; // r9d
  int v974; // ecx
  int v975; // r10d
  int v976; // r12d
  unsigned __int8 *v977; // rdi
  char *v978; // rax
  __int64 v979; // r14
  int v980; // r8d
  unsigned __int8 *v981; // r9
  signed __int64 v982; // r11
  int v983; // r8d
  int v984; // edi
  int v985; // edx
  int v986; // edi
  int v987; // edx
  int v988; // edi
  int v989; // ecx
  int v990; // ecx
  __int64 v991; // rcx
  __int64 v992; // rcx
  __int64 v993; // rcx
  int v994; // eax
  HMODULE *v995; // rdi
  __int64 v996; // rbx
  int v997; // eax
  int v998; // r13d
  int v999; // eax
  _BYTE *v1000; // rax
  _BYTE *v1001; // rbx
  int v1002; // esi
  int v1003; // r14d
  int v1004; // r11d
  char *v1005; // r13
  int v1006; // r10d
  char *v1007; // r15
  __int64 v1008; // r12
  int v1009; // eax
  int v1010; // r9d
  int v1011; // r8d
  int v1012; // r9d
  int v1013; // r10d
  int v1014; // r8d
  unsigned int v1015; // r11d
  int v1016; // r10d
  unsigned int v1017; // r11d
  int v1018; // r10d
  int v1019; // r11d
  unsigned int v1020; // r10d
  int v1021; // r11d
  int v1022; // r10d
  int v1023; // r11d
  unsigned int v1024; // r10d
  int v1025; // r11d
  int v1026; // r10d
  unsigned int v1027; // edi
  int v1028; // r10d
  int v1029; // edi
  int v1030; // r10d
  int v1031; // edi
  unsigned int v1032; // edx
  int v1033; // edi
  int v1034; // edx
  int v1035; // edi
  unsigned int v1036; // edx
  int v1037; // edi
  int v1038; // ecx
  unsigned __int64 v1039; // rax
  __m128i v1040; // xmm1
  int v1041; // r12d
  __m128i v1042; // xmm2
  __m128i v1043; // xmm0
  __m128i v1044; // xmm0
  __m128i v1045; // xmm1
  __m128i v1046; // xmm1
  __m128i v1047; // xmm1
  __m128i v1048; // xmm1
  char mm; // cl
  const WCHAR *v1050; // rdx
  __int64 v1051; // rax
  _BYTE *v1052; // rbx
  char *v1053; // rdi
  __int64 v1054; // rcx
  unsigned __int64 v1055; // rcx
  unsigned int v1056; // eax
  unsigned int v1057; // r13d
  const CHAR *v1058; // rdx
  __int64 v1059; // rax
  __int64 (__fastcall *v1060)(); // rax
  HANDLE v1061; // rax
  HMODULE *v1062; // rdi
  __int64 v1063; // rbx
  __int64 v1064; // rbx
  int v1065; // eax
  HMODULE *v1066; // rdi
  _DWORD *v1067; // rdi
  int v1068; // r9d
  unsigned int v1069; // r10d
  void *v1070; // rcx
  unsigned int v1071; // edi
  __int64 v1072; // r11
  unsigned int v1073; // edi
  _QWORD *v1074; // r13
  void *v1075; // rdi
  HANDLE v1076; // rax
  void *v1077; // rdi
  HANDLE v1078; // rax
  HANDLE v1079; // rax
  HANDLE v1080; // rax
  unsigned int *v1081; // r9
  __int64 v1082; // r9
  int v1083; // r10d
  unsigned int *v1084; // r9
  void *v1085; // rcx
  unsigned int v1086; // r11d
  unsigned int *v1087; // r9
  __int64 v1088; // r9
  int v1089; // r10d
  _DWORD *v1090; // r9
  unsigned __int64 *v1091; // rax
  __int64 v1092; // rcx
  unsigned int v1093; // edi
  unsigned int v1094; // r12d
  int v1095; // edi
  _QWORD *v1096; // r10
  _DWORD *v1097; // r11
  unsigned int v1098; // ecx
  unsigned int v1099; // edi
  HANDLE v1100; // rax
  _DWORD *v1101; // rbx
  unsigned int v1102; // r9d
  void *v1103; // rcx
  HANDLE v1104; // rax
  int v1105; // edi
  _QWORD *v1106; // r13
  int v1107; // edi
  unsigned __int64 v1108; // rbx
  unsigned __int16 *v1109; // rdi
  unsigned __int8 v1110; // al
  unsigned __int64 v1111; // rcx
  __m128i v1112; // xmm1
  __m128i v1113; // xmm2
  __m128i v1114; // xmm0
  __m128i v1115; // xmm0
  __m128i v1116; // xmm1
  __m128i v1117; // xmm1
  __m128i v1118; // xmm1
  __m128i v1119; // xmm1
  int v1120; // r9d
  unsigned __int8 *v1121; // rdx
  unsigned __int16 *v1122; // r11
  unsigned int v1123; // r10d
  int v1124; // eax
  int v1125; // r9d
  int v1126; // r8d
  char v1127; // di
  unsigned __int8 *v1128; // r12
  int v1129; // edx
  unsigned int v1130; // r9d
  int v1131; // ecx
  char v1132; // r8
  unsigned __int64 v1133; // r12
  _BYTE *v1134; // rbx
  int v1135; // r15d
  int v1136; // r13d
  unsigned __int8 *v1137; // rcx
  int v1138; // r11d
  int v1139; // esi
  int v1140; // r8d
  int v1141; // edi
  int v1142; // r9d
  int v1143; // edx
  int v1144; // r9d
  int v1145; // edx
  int v1146; // r9d
  unsigned int v1147; // edx
  int v1148; // r9d
  int v1149; // edx
  int v1150; // r9d
  int v1151; // edx
  int v1152; // r9d
  int v1153; // edx
  unsigned int v1154; // r9d
  unsigned int v1155; // edx
  int v1156; // r9d
  int v1157; // edx
  int v1158; // r9d
  int v1159; // edx
  int v1160; // r9d
  int v1161; // edx
  int v1162; // r9d
  int v1163; // edx
  unsigned int v1164; // r9d
  int v1165; // edx
  unsigned int v1166; // r14d
  HANDLE v1167; // rax
  _DWORD *v1168; // rax
  _DWORD *v1169; // rbx
  HANDLE v1170; // rax
  void *v1171; // rax
  HANDLE v1172; // rax
  _OWORD *v1173; // rax
  HANDLE v1174; // rax
  _QWORD *v1175; // rax
  void *v1176; // rdi
  HANDLE v1177; // rax
  void *v1178; // rdi
  HANDLE v1179; // rax
  void *v1180; // rdi
  HANDLE v1181; // rax
  HANDLE v1182; // rax
  void *v1183; // rbx
  HANDLE v1184; // rax
  void *v1185; // rbx
  HANDLE v1186; // rax
  void *v1187; // rbx
  HANDLE v1188; // rax
  void *v1189; // rbx
  HANDLE v1190; // rax
  HANDLE v1191; // rax
  const void **v1192; // rbx
  int v1193; // edi
  unsigned int v1194; // r9d
  unsigned int *v1195; // r10
  unsigned int v1196; // eax
  unsigned int v1197; // edi
  HANDLE v1198; // rax
  _DWORD *v1199; // r14
  void *v1200; // rcx
  void *v1201; // rcx
  unsigned int v1202; // r13d
  HANDLE v1203; // rax
  unsigned int v1204; // ebx
  int v1205; // eax
  __int64 v1206; // rcx
  int v1207; // eax
  unsigned int v1208; // r9d
  unsigned int *v1209; // rcx
  unsigned int v1210; // r14d
  int v1211; // r10d
  int v1212; // r10d
  unsigned int *v1213; // rax
  unsigned int v1214; // edi
  HANDLE v1215; // rax
  unsigned int *v1216; // rax
  unsigned int *v1217; // r12
  unsigned int *v1218; // rcx
  unsigned int v1219; // r14d
  unsigned int v1220; // r9d
  int v1221; // r10d
  unsigned int v1222; // r10d
  unsigned int *v1223; // rax
  unsigned int v1224; // r11d
  unsigned int v1225; // eax
  signed int v1226; // eax
  unsigned int v1227; // edx
  _QWORD *v1228; // rbx
  signed int v1229; // edi
  FARPROC v1230; // rax
  int v1231; // eax
  __int64 v1232; // r11
  unsigned __int64 v1233; // r14
  unsigned __int64 v1234; // r8
  unsigned int v1235; // ecx
  SIZE_T v1236; // r13
  unsigned __int64 v1237; // r12
  unsigned int v1238; // eax
  unsigned int v1239; // r8d
  unsigned int v1240; // r9d
  unsigned __int64 v1241; // r10
  unsigned int v1242; // eax
  unsigned int v1243; // r9d
  __int64 v1244; // rcx
  unsigned int v1245; // eax
  unsigned int v1246; // ecx
  unsigned int v1247; // eax
  int v1248; // r8d
  HANDLE v1249; // rax
  _QWORD *v1250; // rax
  _QWORD *v1251; // rdi
  HANDLE v1252; // rax
  void *v1253; // rax
  HANDLE v1254; // rax
  void *v1255; // rax
  HANDLE v1256; // rax
  void *v1257; // rax
  void *v1258; // r14
  HANDLE v1259; // rax
  void *v1260; // r14
  HANDLE v1261; // rax
  void *v1262; // r14
  HANDLE v1263; // rax
  HANDLE v1264; // rax
  void *v1265; // r14
  HANDLE v1266; // rax
  void *v1267; // r14
  HANDLE v1268; // rax
  void *v1269; // r14
  HANDLE v1270; // rax
  HANDLE v1271; // rax
  unsigned __int8 *v1272; // r14
  __int64 v1273; // rax
  unsigned __int64 v1274; // rbx
  unsigned __int8 v1275; // cl
  unsigned __int8 *v1276; // rax
  unsigned __int16 *v1277; // rdi
  unsigned int v1278; // edx
  int v1279; // r13d
  int v1280; // r8d
  char v1281; // r12
  unsigned __int8 *v1282; // r9
  int v1283; // eax
  int v1284; // ecx
  unsigned int v1285; // r9d
  unsigned int v1286; // r8d
  int v1287; // ecx
  char v1288; // r10
  int v1289; // r8d
  unsigned __int64 v1290; // r12
  int v1291; // r10d
  _BYTE *v1292; // r11
  unsigned __int8 *v1293; // rbx
  int v1294; // r14d
  unsigned int v1295; // r15d
  int v1296; // eax
  int v1297; // edi
  int v1298; // edx
  int v1299; // edi
  int v1300; // r9d
  int v1301; // edx
  int v1302; // r8d
  int v1303; // r9d
  unsigned int v1304; // r8d
  int v1305; // r9d
  int v1306; // r8d
  unsigned int v1307; // r9d
  int v1308; // r8d
  int v1309; // r9d
  int v1310; // r8d
  unsigned int v1311; // r9d
  int v1312; // r8d
  int v1313; // r9d
  unsigned int v1314; // r8d
  int v1315; // r9d
  int v1316; // r8d
  int v1317; // r9d
  int v1318; // r8d
  int v1319; // r9d
  int v1320; // r8d
  int v1321; // r9d
  int v1322; // r8d
  unsigned int v1323; // r9d
  int v1324; // r8d
  int v1325; // ecx
  unsigned __int64 v1326; // rax
  __m128i v1327; // xmm2
  __m128i v1328; // xmm1
  __m128i v1329; // xmm0
  __m128i v1330; // xmm0
  __m128i v1331; // xmm1
  __m128i v1332; // xmm1
  __m128i v1333; // xmm1
  __m128i v1334; // xmm1
  void *v1335; // rbx
  HANDLE v1336; // rax
  int v1337; // edi
  SIZE_T v1338; // r14
  unsigned int v1339; // r9d
  int v1340; // r10d
  __int64 v1341; // rdx
  void *v1342; // rbx
  void *v1343; // r12
  unsigned int v1344; // r13d
  unsigned __int64 v1345; // r9
  unsigned __int64 v1346; // r11
  unsigned int *v1347; // r9
  unsigned __int64 v1348; // r11
  int v1349; // eax
  __int64 v1350; // r9
  unsigned int v1351; // r10d
  HANDLE v1352; // rax
  LPVOID v1353; // rax
  HANDLE v1354; // rax
  _QWORD *v1355; // rbx
  void *v1356; // rsi
  HANDLE v1357; // rax
  void *v1358; // rsi
  HANDLE v1359; // rax
  void *v1360; // rsi
  HANDLE v1361; // rax
  HANDLE v1362; // rax
  HANDLE v1363; // rax
  HANDLE v1364; // rax
  void *v1365; // rbx
  HANDLE v1366; // rax
  void *v1367; // rbx
  HANDLE v1368; // rax
  void *v1369; // rbx
  HANDLE v1370; // rax
  HANDLE v1371; // rax
  HANDLE v1372; // rax
  unsigned int *v1373; // rdi
  int v1374; // r9d
  unsigned int v1375; // r10d
  int *v1376; // rax
  int v1377; // r9d
  int v1378; // edi
  _QWORD *v1379; // rax
  unsigned int ii; // [rsp+60h] [rbp-A0h]
  int v1381; // [rsp+60h] [rbp-A0h]
  int v1382; // [rsp+60h] [rbp-A0h]
  int v1383; // [rsp+60h] [rbp-A0h]
  int v1384; // [rsp+60h] [rbp-A0h]
  int v1385; // [rsp+60h] [rbp-A0h]
  int v1386; // [rsp+64h] [rbp-9Ch]
  int v1387; // [rsp+64h] [rbp-9Ch]
  unsigned int v1388; // [rsp+64h] [rbp-9Ch]
  unsigned int v1389; // [rsp+64h] [rbp-9Ch]
  unsigned int v1390; // [rsp+64h] [rbp-9Ch]
  unsigned int kk; // [rsp+68h] [rbp-98h]
  unsigned int v1392; // [rsp+68h] [rbp-98h]
  unsigned int v1393; // [rsp+68h] [rbp-98h]
  int v1394; // [rsp+68h] [rbp-98h]
  int v1395; // [rsp+68h] [rbp-98h]
  int v1396; // [rsp+68h] [rbp-98h]
  int v1397; // [rsp+68h] [rbp-98h]
  int v1398; // [rsp+6Ch] [rbp-94h]
  unsigned int v1399; // [rsp+6Ch] [rbp-94h]
  int v1400; // [rsp+6Ch] [rbp-94h]
  char v1401; // [rsp+6Ch] [rbp-94h]
  int v1402; // [rsp+6Ch] [rbp-94h]
  int v1403; // [rsp+70h] [rbp-90h]
  int v1404; // [rsp+70h] [rbp-90h]
  unsigned int v1405; // [rsp+70h] [rbp-90h]
  unsigned int v1406; // [rsp+70h] [rbp-90h]
  int v1407; // [rsp+70h] [rbp-90h]
  int v1408; // [rsp+70h] [rbp-90h]
  int v1409; // [rsp+70h] [rbp-90h]
  int v1410; // [rsp+70h] [rbp-90h]
  unsigned int v1411; // [rsp+74h] [rbp-8Ch]
  int v1412; // [rsp+74h] [rbp-8Ch]
  unsigned int v1413; // [rsp+74h] [rbp-8Ch]
  int v1414; // [rsp+74h] [rbp-8Ch]
  int v1415; // [rsp+74h] [rbp-8Ch]
  SIZE_T v1416; // [rsp+78h] [rbp-88h]
  _BYTE *v1417; // [rsp+78h] [rbp-88h]
  _QWORD *v1418; // [rsp+78h] [rbp-88h]
  SIZE_T v1419; // [rsp+78h] [rbp-88h]
  SIZE_T v1420; // [rsp+78h] [rbp-88h]
  SIZE_T v1421; // [rsp+78h] [rbp-88h]
  SIZE_T v1422; // [rsp+78h] [rbp-88h]
  int v1423; // [rsp+78h] [rbp-88h]
  int v1424; // [rsp+78h] [rbp-88h]
  int v1425; // [rsp+78h] [rbp-88h]
  int v1426; // [rsp+78h] [rbp-88h]
  int v1427; // [rsp+78h] [rbp-88h]
  unsigned int v1428; // [rsp+78h] [rbp-88h]
  int v1429; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1430; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1431; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1432; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1433; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1434; // [rsp+80h] [rbp-80h]
  int v1435; // [rsp+80h] [rbp-80h]
  int v1436; // [rsp+80h] [rbp-80h]
  int v1437; // [rsp+80h] [rbp-80h]
  int v1438; // [rsp+80h] [rbp-80h]
  int v1439; // [rsp+80h] [rbp-80h]
  unsigned int v1440; // [rsp+80h] [rbp-80h]
  unsigned int v1441; // [rsp+80h] [rbp-80h]
  int v1442; // [rsp+80h] [rbp-80h]
  void *v1443; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v1444; // [rsp+88h] [rbp-78h]
  int *v1445; // [rsp+88h] [rbp-78h]
  int v1446; // [rsp+88h] [rbp-78h]
  int v1447; // [rsp+88h] [rbp-78h]
  int v1448; // [rsp+88h] [rbp-78h]
  int v1449; // [rsp+88h] [rbp-78h]
  unsigned int nn; // [rsp+88h] [rbp-78h]
  unsigned __int8 v1451; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v1452; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1453; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1454; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1455; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1456; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1457; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1458; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1459; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1460; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1461; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1462; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1463; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1464; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1465; // [rsp+90h] [rbp-70h]
  unsigned int *v1466; // [rsp+98h] [rbp-68h]
  SIZE_T v1467; // [rsp+98h] [rbp-68h]
  SIZE_T v1468; // [rsp+98h] [rbp-68h]
  SIZE_T v1469; // [rsp+98h] [rbp-68h]
  SIZE_T v1470; // [rsp+98h] [rbp-68h]
  SIZE_T v1471; // [rsp+98h] [rbp-68h]
  SIZE_T v1472; // [rsp+98h] [rbp-68h]
  SIZE_T v1473; // [rsp+98h] [rbp-68h]
  SIZE_T v1474; // [rsp+98h] [rbp-68h]
  SIZE_T v1475; // [rsp+98h] [rbp-68h]
  SIZE_T v1476; // [rsp+98h] [rbp-68h]
  SIZE_T v1477; // [rsp+98h] [rbp-68h]
  int v1478; // [rsp+A0h] [rbp-60h]
  int v1479; // [rsp+A0h] [rbp-60h]
  int v1480; // [rsp+A0h] [rbp-60h]
  int v1481; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1482; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1483; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1484; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1485; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1486; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1487; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1488; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1489; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1490; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1491; // [rsp+A8h] [rbp-58h]
  unsigned int v1492; // [rsp+B0h] [rbp-50h]
  int v1493; // [rsp+B0h] [rbp-50h]
  int v1494; // [rsp+B0h] [rbp-50h]
  int v1495; // [rsp+B0h] [rbp-50h]
  __int64 v1496; // [rsp+B0h] [rbp-50h]
  unsigned int v1497; // [rsp+B8h] [rbp-48h]
  int v1498; // [rsp+B8h] [rbp-48h]
  unsigned __int8 v1499; // [rsp+B8h] [rbp-48h]
  void *v1500; // [rsp+C0h] [rbp-40h]
  int v1501; // [rsp+C0h] [rbp-40h]
  unsigned int v1502; // [rsp+C0h] [rbp-40h]
  int v1503; // [rsp+C0h] [rbp-40h]
  int v1504; // [rsp+C0h] [rbp-40h]
  LPVOID v1505; // [rsp+C8h] [rbp-38h]
  char *v1506; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v1507; // [rsp+C8h] [rbp-38h]
  LPVOID v1508; // [rsp+C8h] [rbp-38h]
  LPVOID v1509; // [rsp+C8h] [rbp-38h]
  int v1510; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v1511; // [rsp+D0h] [rbp-30h]
  void *v1512; // [rsp+D0h] [rbp-30h]
  __int64 v1513; // [rsp+D0h] [rbp-30h]
  _DWORD *v1514; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v1515; // [rsp+D8h] [rbp-28h]
  void *v1516; // [rsp+D8h] [rbp-28h]
  unsigned int *v1517; // [rsp+D8h] [rbp-28h]
  void *v1518; // [rsp+D8h] [rbp-28h]
  _QWORD *v1519; // [rsp+D8h] [rbp-28h]
  char *v1520; // [rsp+E0h] [rbp-20h]
  void *v1521; // [rsp+E0h] [rbp-20h]
  void *v1522; // [rsp+E0h] [rbp-20h]
  unsigned int *v1523; // [rsp+E0h] [rbp-20h]
  void *v1524; // [rsp+E8h] [rbp-18h]
  void *v1525; // [rsp+E8h] [rbp-18h]
  char *v1526; // [rsp+E8h] [rbp-18h]
  char *v1527; // [rsp+E8h] [rbp-18h]
  char *v1528; // [rsp+E8h] [rbp-18h]
  int v1529; // [rsp+F0h] [rbp-10h]
  int v1530; // [rsp+F0h] [rbp-10h]
  int v1531; // [rsp+F0h] [rbp-10h]
  int v1532; // [rsp+F0h] [rbp-10h]
  int v1533; // [rsp+F4h] [rbp-Ch]
  int v1534; // [rsp+F8h] [rbp-8h]
  int v1535; // [rsp+FCh] [rbp-4h] BYREF
  LPVOID v1536; // [rsp+100h] [rbp+0h]
  LPVOID v1537; // [rsp+108h] [rbp+8h]
  LPVOID v1538; // [rsp+110h] [rbp+10h]
  unsigned __int16 *v1539; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v1540; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v1541; // [rsp+124h] [rbp+24h]
  int v1542; // [rsp+128h] [rbp+28h]
  unsigned int v1543; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v1544; // [rsp+134h] [rbp+34h]
  int v1545; // [rsp+138h] [rbp+38h]
  unsigned int v1546; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v1547; // [rsp+144h] [rbp+44h]
  unsigned int v1548; // [rsp+148h] [rbp+48h] BYREF
  SIZE_T dwBytes; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v1550; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1551; // [rsp+158h] [rbp+58h]
  unsigned int v1552; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v1553; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1554; // [rsp+164h] [rbp+64h]
  int v1555; // [rsp+168h] [rbp+68h]
  unsigned int v1556; // [rsp+16Ch] [rbp+6Ch]
  _DWORD v1557[2]; // [rsp+170h] [rbp+70h] BYREF
  int v1558; // [rsp+178h] [rbp+78h]
  unsigned int v1559; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1560; // [rsp+180h] [rbp+80h]
  int v1561; // [rsp+184h] [rbp+84h]
  unsigned int v1562; // [rsp+188h] [rbp+88h]
  int v1563; // [rsp+18Ch] [rbp+8Ch]
  int v1564; // [rsp+190h] [rbp+90h]
  unsigned int v1565; // [rsp+194h] [rbp+94h]
  int v1566; // [rsp+198h] [rbp+98h]
  unsigned int v1567; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v1568; // [rsp+1A0h] [rbp+A0h]
  unsigned int v1569; // [rsp+1A4h] [rbp+A4h]
  unsigned int v1570; // [rsp+1A8h] [rbp+A8h]
  int v1571; // [rsp+1ACh] [rbp+ACh]
  int v1572; // [rsp+1B0h] [rbp+B0h]
  int v1573; // [rsp+1B4h] [rbp+B4h]
  int v1574; // [rsp+1B8h] [rbp+B8h]
  int v1575; // [rsp+1BCh] [rbp+BCh]
  unsigned int v1576; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1577; // [rsp+1C4h] [rbp+C4h] BYREF
  int v1578; // [rsp+1C8h] [rbp+C8h]
  int v1579; // [rsp+1CCh] [rbp+CCh]
  unsigned int v1580; // [rsp+1D0h] [rbp+D0h]
  int v1581; // [rsp+1D4h] [rbp+D4h]
  int v1582; // [rsp+1D8h] [rbp+D8h]
  int v1583; // [rsp+1DCh] [rbp+DCh]
  unsigned int v1584; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1585; // [rsp+1E4h] [rbp+E4h]
  int v1586; // [rsp+1E8h] [rbp+E8h]
  int v1587; // [rsp+1ECh] [rbp+ECh]
  unsigned int v1588; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1589; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1590; // [rsp+1F8h] [rbp+F8h]
  unsigned int v1591; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1592; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1593; // [rsp+204h] [rbp+104h] BYREF
  int v1594; // [rsp+208h] [rbp+108h]
  unsigned int v1595; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1596; // [rsp+214h] [rbp+114h]
  unsigned int v1597; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1598; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1599; // [rsp+220h] [rbp+120h]
  unsigned int v1600; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1601; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1602; // [rsp+22Ch] [rbp+12Ch]
  unsigned int v1603; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1604; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1605; // [rsp+238h] [rbp+138h]
  unsigned int v1606; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1607; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1608; // [rsp+244h] [rbp+144h] BYREF
  int v1609; // [rsp+248h] [rbp+148h]
  unsigned int v1610; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1611; // [rsp+250h] [rbp+150h]
  unsigned int v1612; // [rsp+254h] [rbp+154h]
  unsigned int v1613; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1614; // [rsp+25Ch] [rbp+15Ch]
  int v1615; // [rsp+260h] [rbp+160h]
  unsigned int v1616; // [rsp+264h] [rbp+164h]
  unsigned int v1617; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1618; // [rsp+26Ch] [rbp+16Ch]
  unsigned int v1619; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1620; // [rsp+274h] [rbp+174h] BYREF
  unsigned int v1621; // [rsp+278h] [rbp+178h]
  int v1622; // [rsp+27Ch] [rbp+17Ch]
  int v1623; // [rsp+280h] [rbp+180h]
  unsigned int v1624; // [rsp+284h] [rbp+184h]
  unsigned int v1625; // [rsp+288h] [rbp+188h]
  _DWORD v1626[4]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v1627; // [rsp+29Ch] [rbp+19Ch]
  int v1628; // [rsp+2A0h] [rbp+1A0h]
  int v1629; // [rsp+2A4h] [rbp+1A4h]
  int v1630; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1631; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1632; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1633; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1634; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1635; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v1636; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1637; // [rsp+2C8h] [rbp+1C8h] BYREF
  void *v1638; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1639; // [rsp+2D8h] [rbp+1D8h] BYREF
  void *Src; // [rsp+2E0h] [rbp+1E0h]
  size_t Size; // [rsp+2E8h] [rbp+1E8h]
  void *v1642; // [rsp+2F0h] [rbp+1F0h]
  size_t v1643; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 v1644; // [rsp+300h] [rbp+200h]
  size_t pcchLength; // [rsp+308h] [rbp+208h] BYREF
  unsigned __int64 v1646; // [rsp+310h] [rbp+210h]
  size_t v1647; // [rsp+318h] [rbp+218h] BYREF
  LPVOID v1648; // [rsp+320h] [rbp+220h]
  unsigned __int64 v1649; // [rsp+328h] [rbp+228h]
  void *v1650; // [rsp+330h] [rbp+230h] BYREF
  __int64 *v1651; // [rsp+338h] [rbp+238h]
  __int64 v1652; // [rsp+340h] [rbp+240h]
  void *v1653; // [rsp+348h] [rbp+248h]
  __int64 v1654; // [rsp+350h] [rbp+250h]
  LPVOID v1655; // [rsp+358h] [rbp+258h]
  char *v1656; // [rsp+360h] [rbp+260h]
  AtmosCheck *v1657; // [rsp+368h] [rbp+268h]
  unsigned __int16 *v1658; // [rsp+370h] [rbp+270h] BYREF
  LPVOID lpMem; // [rsp+378h] [rbp+278h]
  void *v1660; // [rsp+380h] [rbp+280h] BYREF
  int *v1661; // [rsp+388h] [rbp+288h]
  void *v1662; // [rsp+390h] [rbp+290h]
  int *v1663; // [rsp+398h] [rbp+298h] BYREF
  void *v1664; // [rsp+3A0h] [rbp+2A0h] BYREF
  HMODULE phModule; // [rsp+3A8h] [rbp+2A8h] BYREF
  void *v1666; // [rsp+3B0h] [rbp+2B0h]
  SIZE_T v1667; // [rsp+3B8h] [rbp+2B8h]
  int *v1668; // [rsp+3C0h] [rbp+2C0h] BYREF
  int *v1669; // [rsp+3C8h] [rbp+2C8h]
  int *v1670; // [rsp+3D0h] [rbp+2D0h] BYREF
  int *v1671; // [rsp+3D8h] [rbp+2D8h]
  __int64 v1672; // [rsp+3E0h] [rbp+2E0h]
  _DWORD *v1673; // [rsp+3E8h] [rbp+2E8h] BYREF
  _DWORD *v1674; // [rsp+3F0h] [rbp+2F0h]
  const void *v1675; // [rsp+3F8h] [rbp+2F8h] BYREF
  const void *v1676; // [rsp+400h] [rbp+300h]
  unsigned int *v1677; // [rsp+408h] [rbp+308h] BYREF
  unsigned int *v1678; // [rsp+410h] [rbp+310h]
  int *v1679; // [rsp+418h] [rbp+318h] BYREF
  int *v1680; // [rsp+420h] [rbp+320h]
  __int64 v1681; // [rsp+428h] [rbp+328h] BYREF
  LPVOID v1682; // [rsp+430h] [rbp+330h]
  __int64 v1683; // [rsp+438h] [rbp+338h]
  void **v1684; // [rsp+440h] [rbp+340h] BYREF
  LPVOID v1685; // [rsp+448h] [rbp+348h]
  __int64 v1686; // [rsp+450h] [rbp+350h]
  _DWORD *v1687; // [rsp+458h] [rbp+358h] BYREF
  _BYTE *v1688; // [rsp+460h] [rbp+360h] BYREF
  unsigned __int64 v1689; // [rsp+468h] [rbp+368h]
  _QWORD *v1690; // [rsp+470h] [rbp+370h] BYREF
  __int64 v1691; // [rsp+478h] [rbp+378h] BYREF
  _DWORD *v1692; // [rsp+480h] [rbp+380h] BYREF
  __int64 v1693; // [rsp+488h] [rbp+388h]
  __int64 v1694; // [rsp+490h] [rbp+390h] BYREF
  __int64 v1695; // [rsp+498h] [rbp+398h] BYREF
  __int64 v1696; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int64 v1697; // [rsp+4A8h] [rbp+3A8h]
  __int64 v1698; // [rsp+4B0h] [rbp+3B0h] BYREF
  wchar_t *String1; // [rsp+4B8h] [rbp+3B8h] BYREF
  wchar_t *v1700; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int64 v1701; // [rsp+4C8h] [rbp+3C8h] BYREF
  LPVOID v1702; // [rsp+4D0h] [rbp+3D0h]
  __int64 v1703; // [rsp+4D8h] [rbp+3D8h]
  void *v1704; // [rsp+4E0h] [rbp+3E0h]
  size_t v1705; // [rsp+4E8h] [rbp+3E8h]
  void *v1706; // [rsp+4F0h] [rbp+3F0h]
  size_t v1707; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v1708; // [rsp+500h] [rbp+400h]
  _DWORD *v1709; // [rsp+508h] [rbp+408h] BYREF
  unsigned int *v1710; // [rsp+510h] [rbp+410h] BYREF
  unsigned __int64 v1711; // [rsp+518h] [rbp+418h]
  unsigned int *v1712; // [rsp+520h] [rbp+420h] BYREF
  LPVOID v1713; // [rsp+528h] [rbp+428h]
  unsigned __int64 v1714; // [rsp+530h] [rbp+430h]
  void *v1715; // [rsp+538h] [rbp+438h] BYREF
  __int64 *v1716; // [rsp+540h] [rbp+440h]
  __int64 v1717; // [rsp+548h] [rbp+448h]
  void *v1718; // [rsp+550h] [rbp+450h]
  __int64 v1719; // [rsp+558h] [rbp+458h]
  LPVOID v1720; // [rsp+560h] [rbp+460h]
  _QWORD *v1721; // [rsp+568h] [rbp+468h]
  void *v1722; // [rsp+570h] [rbp+470h] BYREF
  unsigned int *v1723; // [rsp+578h] [rbp+478h]
  unsigned int *v1724; // [rsp+580h] [rbp+480h]
  unsigned int *v1725; // [rsp+588h] [rbp+488h] BYREF
  unsigned int *v1726; // [rsp+590h] [rbp+490h] BYREF
  HMODULE hModule; // [rsp+598h] [rbp+498h] BYREF
  LPVOID v1728; // [rsp+5A0h] [rbp+4A0h]
  unsigned __int64 v1729; // [rsp+5A8h] [rbp+4A8h]
  void *v1730; // [rsp+5B0h] [rbp+4B0h] BYREF
  unsigned __int64 v1731; // [rsp+5B8h] [rbp+4B8h] BYREF
  unsigned __int64 v1732; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned __int64 v1733; // [rsp+5C8h] [rbp+4C8h] BYREF
  _QWORD v1734[2]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _QWORD v1735[3]; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v1736; // [rsp+5F8h] [rbp+4F8h]
  LPVOID v1737; // [rsp+600h] [rbp+500h]
  void *v1738; // [rsp+610h] [rbp+510h] BYREF
  unsigned __int64 *v1739; // [rsp+620h] [rbp+520h] BYREF
  size_t v1740; // [rsp+628h] [rbp+528h] BYREF
  LPVOID v1741; // [rsp+630h] [rbp+530h]
  size_t v1742; // [rsp+638h] [rbp+538h] BYREF
  void *v1743; // [rsp+640h] [rbp+540h]
  __int128 v1744; // [rsp+648h] [rbp+548h]
  __int64 v1745; // [rsp+658h] [rbp+558h]
  unsigned __int64 v1746; // [rsp+660h] [rbp+560h]
  __int64 v1747; // [rsp+668h] [rbp+568h]
  __int64 v1748; // [rsp+670h] [rbp+570h]
  _QWORD v1749[2]; // [rsp+678h] [rbp+578h] BYREF
  unsigned __int64 v1750; // [rsp+688h] [rbp+588h]
  LPVOID v1751; // [rsp+690h] [rbp+590h]
  int *v1752; // [rsp+6A0h] [rbp+5A0h] BYREF
  void *v1753; // [rsp+6B0h] [rbp+5B0h] BYREF
  __int128 v1754; // [rsp+6B8h] [rbp+5B8h]
  unsigned __int16 *v1755; // [rsp+6C8h] [rbp+5C8h]
  unsigned __int16 *v1756; // [rsp+6D0h] [rbp+5D0h]
  unsigned __int16 *v1757; // [rsp+6D8h] [rbp+5D8h]
  _QWORD v1758[2]; // [rsp+6E0h] [rbp+5E0h] BYREF
  unsigned int v1759; // [rsp+6F0h] [rbp+5F0h]
  unsigned int v1760; // [rsp+6F4h] [rbp+5F4h]
  int v1761; // [rsp+6F8h] [rbp+5F8h]
  _QWORD v1762[2]; // [rsp+700h] [rbp+600h] BYREF
  unsigned int v1763; // [rsp+710h] [rbp+610h]
  unsigned int v1764; // [rsp+714h] [rbp+614h]
  int v1765; // [rsp+718h] [rbp+618h]
  _BYTE v1766[4]; // [rsp+720h] [rbp+620h] BYREF
  int v1767; // [rsp+724h] [rbp+624h]
  int v1768; // [rsp+728h] [rbp+628h]
  __int16 v1769; // [rsp+732h] [rbp+632h]
  __int64 v1770; // [rsp+738h] [rbp+638h]
  _BYTE v1771[4]; // [rsp+790h] [rbp+690h] BYREF
  int v1772; // [rsp+794h] [rbp+694h]
  int v1773; // [rsp+798h] [rbp+698h]
  unsigned __int16 *v1774; // [rsp+7A8h] [rbp+6A8h]
  _BYTE v1775[24]; // [rsp+800h] [rbp+700h] BYREF
  SIZE_T v1776; // [rsp+818h] [rbp+718h]
  _BYTE v1777[4]; // [rsp+870h] [rbp+770h] BYREF
  int v1778; // [rsp+874h] [rbp+774h]
  int v1779; // [rsp+878h] [rbp+778h]
  unsigned __int16 *v1780; // [rsp+888h] [rbp+788h]
  _BYTE v1781[24]; // [rsp+8E0h] [rbp+7E0h] BYREF
  SIZE_T v1782; // [rsp+8F8h] [rbp+7F8h]
  _BYTE v1783[4]; // [rsp+950h] [rbp+850h] BYREF
  int v1784; // [rsp+954h] [rbp+854h]
  int v1785; // [rsp+958h] [rbp+858h]
  unsigned __int16 *v1786; // [rsp+968h] [rbp+868h]
  _BYTE v1787[24]; // [rsp+9C0h] [rbp+8C0h] BYREF
  char *v1788; // [rsp+9D8h] [rbp+8D8h]
  _BYTE v1789[4]; // [rsp+A30h] [rbp+930h] BYREF
  int v1790; // [rsp+A34h] [rbp+934h]
  int v1791; // [rsp+A38h] [rbp+938h]
  char *v1792; // [rsp+A48h] [rbp+948h]
  _BYTE v1793[24]; // [rsp+AA0h] [rbp+9A0h] BYREF
  unsigned __int16 *v1794; // [rsp+AB8h] [rbp+9B8h]
  int v1795; // [rsp+B10h] [rbp+A10h] BYREF
  int v1796; // [rsp+B14h] [rbp+A14h]
  void *v1797; // [rsp+B18h] [rbp+A18h]
  void *v1798; // [rsp+B20h] [rbp+A20h]
  void *v1799; // [rsp+B28h] [rbp+A28h]
  SIZE_T v1800; // [rsp+B30h] [rbp+A30h]
  void *v1801; // [rsp+B38h] [rbp+A38h]
  __int64 v1802; // [rsp+B40h] [rbp+A40h]
  int v1803; // [rsp+B48h] [rbp+A48h]
  __int128 v1804; // [rsp+B4Ch] [rbp+A4Ch] BYREF
  __int128 v1805; // [rsp+B5Ch] [rbp+A5Ch] BYREF
  unsigned int v1806; // [rsp+B6Ch] [rbp+A6Ch] BYREF
  unsigned int v1807; // [rsp+B70h] [rbp+A70h]
  unsigned int v1808; // [rsp+B74h] [rbp+A74h]
  unsigned int v1809; // [rsp+B78h] [rbp+A78h]
  unsigned __int64 v1810; // [rsp+B80h] [rbp+A80h]
  __int64 v1811; // [rsp+B88h] [rbp+A88h]
  unsigned __int64 v1812; // [rsp+B90h] [rbp+A90h]
  __int64 v1813; // [rsp+B98h] [rbp+A98h]
  __int64 v1814; // [rsp+BA0h] [rbp+AA0h] BYREF
  __int64 v1815; // [rsp+BA8h] [rbp+AA8h]
  __int64 v1816; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int64 v1817; // [rsp+BB8h] [rbp+AB8h]
  __int64 v1818; // [rsp+BC0h] [rbp+AC0h] BYREF
  unsigned int v1819; // [rsp+BC8h] [rbp+AC8h]
  int v1820; // [rsp+BCCh] [rbp+ACCh]
  __int64 v1821; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int64 v1822; // [rsp+BD8h] [rbp+AD8h]
  __int64 v1823; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int64 v1824; // [rsp+BE8h] [rbp+AE8h]
  char v1825; // [rsp+BF0h] [rbp+AF0h] BYREF
  unsigned int v1826; // [rsp+BFCh] [rbp+AFCh]
  _DWORD v1827[5]; // [rsp+C10h] [rbp+B10h] BYREF
  char v1828; // [rsp+C24h] [rbp+B24h] BYREF
  _DWORD v1829[3]; // [rsp+C2Ch] [rbp+B2Ch] BYREF
  _DWORD v1830[5]; // [rsp+C38h] [rbp+B38h] BYREF
  int v1831; // [rsp+C4Ch] [rbp+B4Ch] BYREF
  _DWORD v1832[3]; // [rsp+C54h] [rbp+B54h] BYREF
  _DWORD v1833[3]; // [rsp+C60h] [rbp+B60h] BYREF
  __int16 v1834; // [rsp+C6Ch] [rbp+B6Ch]
  __int16 v1835; // [rsp+C6Eh] [rbp+B6Eh]
  _DWORD v1836[3]; // [rsp+C90h] [rbp+B90h] BYREF
  __int16 v1837; // [rsp+C9Ch] [rbp+B9Ch]
  __int16 v1838; // [rsp+C9Eh] [rbp+B9Eh]
  _DWORD v1839[3]; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int16 v1840; // [rsp+CCCh] [rbp+BCCh]
  __int16 v1841; // [rsp+CCEh] [rbp+BCEh]
  _DWORD v1842[3]; // [rsp+CF0h] [rbp+BF0h] BYREF
  __int16 v1843; // [rsp+CFCh] [rbp+BFCh]
  __int16 v1844; // [rsp+CFEh] [rbp+BFEh]
  _DWORD v1845[3]; // [rsp+D20h] [rbp+C20h] BYREF
  __int16 v1846; // [rsp+D2Ch] [rbp+C2Ch]
  __int16 v1847; // [rsp+D2Eh] [rbp+C2Eh]
  _DWORD v1848[6]; // [rsp+D50h] [rbp+C50h] BYREF
  char v1849; // [rsp+D6Ah] [rbp+C6Ah]
  unsigned __int16 v1850; // [rsp+D6Ch] [rbp+C6Ch] BYREF
  _DWORD v1851[6]; // [rsp+DB0h] [rbp+CB0h] BYREF
  char v1852; // [rsp+DCAh] [rbp+CCAh]
  unsigned __int16 v1853; // [rsp+DCCh] [rbp+CCCh] BYREF
  _DWORD v1854[6]; // [rsp+E10h] [rbp+D10h] BYREF
  char v1855; // [rsp+E2Ah] [rbp+D2Ah]
  unsigned __int16 v1856; // [rsp+E2Ch] [rbp+D2Ch] BYREF
  _BYTE v1857[68]; // [rsp+E70h] [rbp+D70h] BYREF
  __int16 v1858; // [rsp+EB4h] [rbp+DB4h]
  unsigned __int16 v1859; // [rsp+F16h] [rbp+E16h]
  __int64 v1860; // [rsp+F1Ch] [rbp+E1Ch]
  _QWORD v1861[6]; // [rsp+F50h] [rbp+E50h] BYREF
  int v1862; // [rsp+F80h] [rbp+E80h] BYREF
  _DWORD v1863[14]; // [rsp+F88h] [rbp+E88h] BYREF
  _QWORD v1864[20]; // [rsp+FC0h] [rbp+EC0h]
  int v1865; // [rsp+1060h] [rbp+F60h] BYREF
  __int16 v1866; // [rsp+1064h] [rbp+F64h]
  _BYTE v1867[176]; // [rsp+1070h] [rbp+F70h] BYREF
  WCHAR Filename; // [rsp+1120h] [rbp+1020h] BYREF

  v1657 = this;
  v1 = (unsigned int *)((char *)this + 160);
  v2 = *v1;
  if ( !*v1 )
  {
    LODWORD(v5) = 0;
    v1658 = 0LL;
    if ( !v1 )
      goto LABEL_462;
    v1579 = 0;
    v1580 = 0;
    v1539 = 0LL;
    v1581 = 0;
    while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
      ;
    v6 = dword_1801B31F0;
    v1534 = -1;
    v7 = 4LL;
    if ( dword_1801B31F0 )
      goto LABEL_39;
    v1497 = 0;
    v8 = 0;
    lpMem = 0LL;
    v1697 = 0LL;
    j = operator new(0x338uLL);
    if ( j )
    {
      v10 = j + 7;
      v11 = 0;
      v1582 = 0;
      v12 = -1;
      v1583 = 0;
      v13 = 0;
      v14 = (char *)&unk_18015E562;
      v15 = 103LL;
      v16 = 0;
      do
      {
        v17 = (unsigned __int8)*(v14 - 1);
        v18 = (unsigned __int8)*(v14 - 2);
        v19 = (unsigned __int8)v14[2];
        v14 += 8;
        v20 = (unsigned __int8)*(v14 - 7) | (((unsigned __int8)*(v14 - 8) | ((v17 | (v18 << 8)) << 8)) << 8);
        v21 = v20 ^ v16;
        v22 = (unsigned __int8)*(v14 - 3) | (((unsigned __int8)*(v14 - 4) | (((unsigned __int8)*(v14 - 5) | (v19 << 8)) << 8)) << 8);
        v23 = v13 ^ v22 ^ v21 ^ 0xAC987321;
        v24 = (__ROL4__(v23, 10) + 4991 * __ROL4__(v23 + 1419157410, 5)) ^ v21;
        v25 = (43881 * __ROR4__(v24 + 133239679, 9) - __ROL4__(v24, 2)) ^ v23;
        v26 = (24670 * v25 - (v25 >> 13) - 123127970) ^ v24;
        v27 = (2033 * __ROL4__(v26 ^ 0xAB69, 6) - __ROL4__(v26, 2)) ^ v25;
        v28 = (133239679 - (v27 ^ 0xAB69605E)) ^ v26;
        v29 = (43881 * (v28 ^ 0x137F)) ^ __ROR4__(v28, 6) ^ v27;
        v30 = (__ROL4__(v29, 2) + 24670 * __ROR4__(v29 + 133239679, 15)) ^ v28;
        v31 = (2033 * __ROR4__(v30 + 1419157410, 14) - __ROL4__(v30, 8)) ^ v29;
        v32 = __ROR4__(v31, 10) ^ (4991 * __ROR4__(v31 ^ 0xAB69605E, 12)) ^ v30;
        v33 = v31 ^ (v32 >> 10) ^ (43881 * (v32 ^ 0x7F1));
        v34 = (2033 * (__ROR4__(~v33, 5) + 24670)) ^ v32;
        v35 = v33 ^ (v34 - 2033) ^ 0xAB69605E;
        v36 = ((v35 >> 2) + 4991 * __ROL4__(v33 ^ (v34 - 2033) ^ 0xAB6967AF, 2)) ^ v34;
        v37 = (__ROL4__(v36, 7) + 43881 * __ROR4__(v36 - 133239679, 6)) ^ v35;
        v38 = (24670 * (v37 ^ 0x137F) + __ROR4__(v37, 9)) ^ v36;
        v39 = (__ROL4__(v38, 7) + 2033 * __ROL4__(v38 ^ 0xAB69, 5)) ^ v37;
        v40 = v39 ^ v38 ^ 0xAC987321;
        v41 = (4991 * __ROR4__(v40, 3) - 219010071) ^ v39;
        v42 = (24670 * __ROR4__(v41 - 133239679, 1) - __ROR4__(v41, 6)) ^ v40;
        v43 = (__ROL4__(v42, 14) + 2033 * __ROL4__(v42 - 1419157410, 3)) ^ v41;
        v44 = (4991 * __ROL4__(v43 - 1419157410, 15) - __ROR4__(v43, 14)) ^ v42;
        v10 += 8;
        v45 = (v44 >> 3) ^ (43881 * (v44 ^ 0x605E)) ^ v43;
        v1582 = v12 ^ v45;
        v12 = v22;
        v46 = v11 ^ __ROL4__(v45, 2) ^ (24670 * __ROL4__(v45 ^ 0x7F1137F, 4));
        v11 = v20;
        v1583 = v46 ^ v44;
        *(v10 - 12) = v46 ^ v44;
        v1583 = __ROR4__(v1583, 8);
        *(v10 - 8) = v1582;
        v1582 = __ROR4__(v1582, 8);
        *(v10 - 13) = v1583;
        v1583 = __ROR4__(v1583, 8);
        *(v10 - 9) = v1582;
        v1582 = __ROR4__(v1582, 8);
        *(v10 - 14) = v1583;
        v1583 = __ROR4__(v1583, 8);
        *(v10 - 10) = v1582;
        v1582 = __ROR4__(v1582, 8);
        *(v10 - 15) = v1583;
        *(v10 - 11) = v1582;
        v16 = __ROR4__(v1583, 8);
        v13 = __ROR4__(v1582, 8);
        v1583 = v16;
        v1582 = v13;
        --v15;
      }
      while ( v15 );
      LODWORD(v5) = 0;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      do
      {
        v47 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&j[v48]), v47);
        v50 = _mm_loadu_si128((const __m128i *)&j[v48 + 16]);
        v48 += 32LL;
        v51 = _mm_xor_si128(v50, v49);
        v49 = v51;
      }
      while ( v48 < 0x320 );
      v52 = _mm_xor_si128(v51, v47);
      v53 = _mm_xor_si128(v52, _mm_srli_si128(v52, 8));
      v54 = _mm_xor_si128(v53, _mm_srli_si128(v53, 4));
      v55 = _mm_xor_si128(v54, _mm_srli_si128(v54, 2));
      for ( i = _mm_cvtsi128_si32(_mm_xor_si128(v55, _mm_srli_si128(v55, 1))); v48 < 0x338; ++v48 )
        i ^= j[v48];
      if ( i == 64LL )
      {
        lpMem = j;
        v1697 = 824LL;
        j[823] = 0;
        memset_0(&unk_1801B3750, 0, 0x60uLL);
        if ( *j )
        {
          while ( 1 )
          {
            v57 = (const WCHAR *)j;
            v58 = -1LL;
            do
              v59 = *(_WORD *)&j[2 * v58++ + 2] == 0;
            while ( !v59 );
            v60 = &j[2 * v58];
            v61 = (char *)&unk_1801B3750 + 24 * v1497;
            if ( !GetModuleHandleExW(0, v57, (HMODULE *)v61) )
              break;
            v62 = 0;
            if ( **(_WORD **)v61 == 23117 )
            {
              v63 = *(int *)(*(_QWORD *)v61 + 60LL);
              if ( (unsigned int)v63 >= 0x10000000 )
              {
                v62 = -1073741701;
              }
              else
              {
                v64 = *(_QWORD *)v61 + v63;
                if ( v64 < *(_QWORD *)v61 )
                {
                  v62 = -1073741701;
                }
                else if ( *(_DWORD *)v64 == 17744 )
                {
                  if ( ((*(_WORD *)(v64 + 24) - 267) & 0xFEFF) != 0 )
                  {
                    v62 = -1073741811;
                  }
                  else
                  {
                    *(_QWORD *)(v61 + 12) = *(_QWORD *)(v64 + 136);
                    *((_DWORD *)v61 + 2) = *(_DWORD *)(v64 + 80);
                  }
                }
                else
                {
                  v62 = -1073741701;
                }
              }
            }
            else
            {
              v62 = -1073741701;
            }
            v65 = *(_DWORD *)(v60 + 2);
            v66 = 0;
            for ( j = v60 + 6; v66 < v65; ++v66 )
            {
              v67 = j;
              v68 = -1LL;
              do
                ++v68;
              while ( j[v68] );
              j += v68 + 1;
              if ( v62 >= 0 )
              {
                ProcAddress = GetProcAddress(*(HMODULE *)v61, v67);
                if ( !ProcAddress )
                  goto LABEL_34;
                off_1801B1000[v8] = ProcAddress;
              }
              ++v8;
            }
            ++v1497;
            if ( !*j )
              goto LABEL_34;
          }
          v62 = -1073741702;
        }
        else
        {
          v62 = 0;
        }
LABEL_34:
        v7 = 4LL;
        goto LABEL_35;
      }
      operator delete(j);
      v7 = 4LL;
    }
    v62 = -1073741702;
LABEL_35:
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    if ( v62 < 0 )
    {
      v386 = (HMODULE *)&unk_1801B3750;
      v387 = 4LL;
      do
      {
        if ( *v386 )
          FreeLibrary(*v386);
        v386 += 3;
        --v387;
      }
      while ( v387 );
      memset_0(&unk_1801B3750, 0, 0x60uLL);
      qword_1801B10D0 = 0LL;
      off_1801B1000[0] = sub_18013D300;
      off_1801B1008[0] = sub_18013D300;
      off_1801B1010[0] = sub_18013D300;
      off_1801B1018[0] = sub_18013D300;
      off_1801B1020[0] = sub_18013D300;
      off_1801B1028 = sub_18013D300;
      off_1801B1030[0] = sub_18013D300;
      off_1801B1038 = sub_18013D300;
      off_1801B1040[0] = CPolicyConfig::GetName;
      off_1801B1048 = CPolicyConfig::GetName;
      off_1801B1050[0] = sub_18013D300;
      off_1801B1058[0] = sub_18013D300;
      off_1801B1060[0] = sub_18013D300;
      off_1801B1068[0] = sub_18013D300;
      off_1801B1070[0] = sub_18013D300;
      off_1801B1078 = sub_18013D300;
      off_1801B1080 = CPolicyConfig::GetName;
      off_1801B1088[0] = sub_18013D300;
      off_1801B1090[0] = sub_18013D300;
      off_1801B1098[0] = sub_18013D300;
      off_1801B10A0[0] = sub_18013D300;
      off_1801B10A8[0] = sub_18013D300;
      off_1801B10B0[0] = sub_18013D300;
      off_1801B10B8[0] = sub_180043D80;
      off_1801B10C0[0] = sub_18013D300;
      off_1801B10C8 = sub_18013D300;
      off_1801B10D8 = CPolicyConfig::GetName;
      off_1801B10E0[0] = sub_18013D300;
      off_1801B10E8[0] = sub_18013D300;
      off_1801B10F0[0] = sub_18013D300;
      off_1801B10F8[0] = sub_18013D300;
      off_1801B1100 = sub_18013D300;
      off_1801B1108 = CPolicyConfig::GetName;
      off_1801B1110[0] = sub_18013D300;
      off_1801B1118[0] = sub_18013D300;
      off_1801B1120[0] = sub_18013D300;
      off_1801B1128[0] = sub_18013D300;
      off_1801B1130[0] = sub_18013D300;
      off_1801B1138 = sub_18013D300;
      off_1801B1140[0] = CPolicyConfig::GetName;
      off_1801B1148[0] = CPolicyConfig::GetName;
      off_1801B1150 = CPolicyConfig::GetName;
      off_1801B1158 = CPolicyConfig::GetName;
      off_1801B1160[0] = sub_18013D300;
      off_1801B1168 = sub_18013D300;
LABEL_40:
      v71 = 0;
      _InterlockedExchange(&dword_1801B3830, 0);
      v72 = 0;
      String1 = 0LL;
      v1700 = 0LL;
      if ( !NtCurrentPeb()->SessionId )
      {
LABEL_41:
        v1581 = v71;
        goto LABEL_42;
      }
      v388 = off_1801B1110[0]();
      if ( !v388 )
      {
        LastError = GetLastError();
        v72 = LastError;
        if ( LastError > 0 )
          v72 = (unsigned __int16)LastError | 0x80070000;
        if ( v72 >= 0 )
          v72 = -2147467259;
        goto LABEL_42;
      }
      v1638 = 0LL;
      v390 = 0LL;
      for ( k = 0LL; ; v1638 = k )
      {
        v392 = 0LL;
        if ( k )
          v392 = k;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, void *, __int64, unsigned int *))off_1801B1130[0])(
               v388,
               2LL,
               v392,
               v390,
               &v1584) )
        {
          String1 = (wchar_t *)k;
          goto LABEL_497;
        }
        v393 = GetLastError();
        if ( v393 != 122 )
          break;
        if ( k )
          goto LABEL_494;
        k = operator new(v1584);
        SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1638);
        if ( !k )
        {
          v72 = -2147024882;
LABEL_497:
          v1638 = 0LL;
          goto LABEL_498;
        }
        v390 = v1584;
      }
      if ( !v393 )
      {
LABEL_494:
        v72 = -2147467259;
        goto LABEL_498;
      }
      if ( v393 > 0 )
        v72 = (unsigned __int16)v393 | 0x80070000;
      else
        v72 = v393;
LABEL_498:
      SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1638);
      if ( v72 >= 0 )
      {
        CurrentThreadId = GetCurrentThreadId();
        v395 = ((__int64 (__fastcall *)(_QWORD))off_1801B1128[0])(CurrentThreadId);
        if ( !v395 )
        {
          v396 = GetLastError();
          v72 = v396;
          if ( v396 > 0 )
            v72 = (unsigned __int16)v396 | 0x80070000;
          v7 = 4LL;
          if ( v72 >= 0 )
            v72 = -2147467259;
          goto LABEL_42;
        }
        v1639 = 0LL;
        v72 = 0;
        v397 = 0LL;
        for ( m = 0LL; ; v1639 = m )
        {
          v399 = 0LL;
          if ( m )
            v399 = m;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, void *, __int64, unsigned int *))off_1801B1130[0])(
                 v395,
                 2LL,
                 v399,
                 v397,
                 &v1608) )
          {
            v1700 = (wchar_t *)m;
            goto LABEL_519;
          }
          v400 = GetLastError();
          if ( v400 != 122 )
            break;
          if ( m )
            goto LABEL_516;
          m = operator new(v1608);
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1639);
          if ( !m )
          {
            v72 = -2147024882;
LABEL_519:
            v1639 = 0LL;
            goto LABEL_520;
          }
          v397 = v1608;
        }
        if ( !v400 )
        {
LABEL_516:
          v72 = -2147467259;
          goto LABEL_520;
        }
        if ( v400 > 0 )
          v72 = (unsigned __int16)v400 | 0x80070000;
        else
          v72 = v400;
LABEL_520:
        SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1639);
        if ( v72 >= 0 )
        {
          if ( !String1 || wcscmp_0(String1, L"WinSta0") || !v1700 || wcscmp_0(v1700, L"Default") )
          {
            v7 = 4LL;
            goto LABEL_41;
          }
          v1535 = 0;
          CurrentProcess = GetCurrentProcess();
          v7 = 4LL;
          if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1535, 4LL) )
          {
            if ( (v1535 & 0xF) == 0 )
              v71 = 1;
            goto LABEL_41;
          }
          v402 = GetLastError();
          v72 = v402;
          if ( v402 > 0 )
            v72 = (unsigned __int16)v402 | 0x80070000;
          if ( v72 >= 0 )
            v72 = -2147467259;
LABEL_42:
          SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1700);
          SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
          if ( v72 < 0 )
            v1581 = 0;
          v1580 = 0;
          v73 = LocalAlloc(0x40u, 4uLL);
          SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1539, v73);
          v1482 = v1539;
          if ( !v1539 )
          {
            v84 = -2147024882;
            goto LABEL_1994;
          }
          v1430 = 0LL;
          v1742 = 0LL;
          v74 = 0LL;
          v1743 = 0LL;
          v1736 = 0LL;
          v1737 = 0LL;
          Src = &unk_1801B26F0;
          v1627 = 0;
          v1628 = 0;
          Size = 160LL;
          v75 = GetProcessHeap();
          v76 = HeapAlloc(v75, 8u, 0xA0uLL);
          v77 = v76;
          if ( !v76 )
          {
            v84 = -1073741801;
            v1498 = -1073741801;
LABEL_436:
            v375 = v1743;
            v1742 = 0LL;
            if ( v1743 )
            {
              v376 = GetProcessHeap();
              HeapFree(v376, 0, v375);
              v1743 = 0LL;
            }
            v377 = v1737;
            v1736 = 0LL;
            if ( v1737 )
            {
              v378 = GetProcessHeap();
              HeapFree(v378, 0, v377);
              v1737 = 0LL;
            }
            if ( v74 )
            {
              v379 = GetProcessHeap();
              HeapFree(v379, 0, v74);
            }
            if ( v1430 )
            {
              v380 = GetProcessHeap();
              HeapFree(v380, 0, v1430);
            }
            if ( v84 >= 0 )
            {
              if ( !v1581 )
              {
                v7 = 4LL;
LABEL_447:
                v381 = v1579;
                v1626[3] = v1580;
                v1658 = v1482;
                v1539 = 0LL;
                goto LABEL_448;
              }
              v1681 = 0LL;
              dword_1801B3150 = v1581;
              ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
              if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
              {
LABEL_766:
                ATL::CHandle::Close((ATL::CHandle *)&v1681);
                if ( !v1581 )
                {
                  v7 = 4LL;
                  goto LABEL_447;
                }
                v1587 = 0;
                v1740 = 0LL;
                v465 = 0LL;
                v1741 = 0LL;
                v466 = 0LL;
                v1750 = 0LL;
                v1751 = 0LL;
                v1704 = &unk_1801B26F0;
                v1505 = 0LL;
                v1705 = 160LL;
                v467 = GetProcessHeap();
                v468 = HeapAlloc(v467, 8u, 0xA0uLL);
                v469 = v468;
                if ( !v468 )
                {
                  v7 = 4LL;
                  goto LABEL_1582;
                }
                memcpy_0(v468, v1704, v1705);
                v470 = (unsigned int)v1705;
                v1706 = &unk_1801B2630;
                v466 = v469;
                v1537 = v469;
                v1707 = 8LL;
                v471 = GetProcessHeap();
                v472 = HeapAlloc(v471, 8u, 8uLL);
                v1524 = v472;
                v473 = v472;
                if ( !v472 )
                {
                  v7 = 4LL;
                  goto LABEL_1581;
                }
                memcpy_0(v472, v1706, v1707);
                v474 = v1707;
                v1505 = v473;
                v1588 = 0;
                v1708 = __rdtsc();
                if ( (int)RtlUIntAdd(4LL, 4LL, &v1589) >= 0 )
                {
                  v1590 = v1589;
                  if ( (int)RtlUIntAdd(0LL, v1589, &v1588) < 0 )
                    goto LABEL_1991;
                  if ( (int)RtlUIntAdd(4LL, (unsigned int)v470, &v1591) >= 0 )
                  {
                    v1590 = v1591;
                    if ( (int)RtlUIntAdd(v1588, v1591, &v1588) < 0 )
                      goto LABEL_1991;
                    if ( (int)RtlUIntAdd(4LL, v474, &v1592) >= 0 )
                    {
                      v1590 = v1592;
                      if ( (int)RtlUIntAdd(v1588, v1592, &v1588) < 0 )
                        goto LABEL_1991;
                      if ( (int)RtlUIntAdd(4LL, 8LL, &v1593) >= 0 )
                      {
                        v1590 = v1593;
                        if ( (int)RtlUIntAdd(v1588, v1593, &v1588) >= 0 )
                        {
                          HIDWORD(v1740) = v1588;
                          v476 = v1588;
                          v477 = GetProcessHeap();
                          v478 = HeapAlloc(v477, 8u, v476);
                          v479 = v478;
                          if ( !v478 )
                            goto LABEL_1579;
                          v1741 = v478;
                          LODWORD(v1740) = 0;
                          v1594 = 4;
                          if ( (int)RtlULongLongAdd(v478, 4LL, &v1752) < 0 )
                            goto LABEL_784;
                          if ( v479 + 2 > (_DWORD *)((char *)v479 + HIDWORD(v1740)) )
                            goto LABEL_784;
                          v482 = v1752;
                          *v479 = v481;
                          *v482 = v1594;
                          v483 = v1740 + 1;
                          LODWORD(v1740) = v1740 + 1;
                          if ( !(_DWORD)v470 )
                            goto LABEL_784;
                          if ( v1741 == v480 )
                          {
                            if ( (int)RtlUIntAdd((unsigned int)v481, (unsigned int)v470, &v1595) < 0 )
                              goto LABEL_1579;
                            v1596 = v1595;
                            if ( (int)RtlUIntAdd(HIDWORD(v1740), v1595, (char *)&v1740 + 4) < 0 )
                            {
LABEL_784:
                              v7 = v481;
LABEL_1580:
                              v466 = v1537;
LABEL_1581:
                              v465 = v1505;
LABEL_1582:
                              v1075 = v1741;
                              v1740 = 0LL;
                              if ( v1741 )
                              {
                                v1076 = GetProcessHeap();
                                HeapFree(v1076, 0, v1075);
                                v1741 = 0LL;
                              }
                              v1077 = v1751;
                              v1750 = 0LL;
                              if ( v1751 )
                              {
                                v1078 = GetProcessHeap();
                                HeapFree(v1078, 0, v1077);
                                v1751 = 0LL;
                              }
                              if ( v466 )
                              {
                                v1079 = GetProcessHeap();
                                HeapFree(v1079, 0, v466);
                              }
                              if ( v465 )
                              {
                                v1080 = GetProcessHeap();
                                HeapFree(v1080, 0, v465);
                              }
                              goto LABEL_447;
                            }
                          }
                          else
                          {
                            v1067 = v1741;
                            v1709 = v1741;
                            if ( v483 )
                            {
                              while ( (int)RtlUIntAdd((unsigned int)v481, (unsigned int)*v1067, &v1597) >= 0 )
                              {
                                v1596 = v1597;
                                if ( (int)RtlULongLongAdd(v1067, v1597, &v1709) < 0 )
                                  goto LABEL_784;
                                v1067 = v1709;
                                if ( v1068 + 1 >= v1069 )
                                  goto LABEL_1571;
                              }
                              goto LABEL_1579;
                            }
LABEL_1571:
                            if ( (int)RtlULongLongAdd(v1067, v481, &v1753) < 0
                              || (char *)v1067 + v470 + 4 > (char *)v1741 + HIDWORD(v1740) )
                            {
                              goto LABEL_784;
                            }
                            v1070 = v1753;
                            *v1067 = v470;
                            memcpy_0(v1070, v469, v470);
                            v481 = 4LL;
                          }
                          v1071 = v1740 + 1;
                          LODWORD(v1740) = v1740 + 1;
                          if ( !v474 )
                            goto LABEL_1579;
                          if ( v1741 )
                          {
                            v1081 = (unsigned int *)v1741;
                            v1074 = 0LL;
                            v1710 = (unsigned int *)v1741;
                            if ( v1071 )
                            {
                              while ( (int)RtlUIntAdd((unsigned int)v481, *v1081, &v1600) >= 0 )
                              {
                                v1599 = v1600;
                                if ( (int)RtlULongLongAdd(v1082, v1600, &v1710) < 0 )
                                  break;
                                v1081 = v1710;
                                if ( v1083 + 1 >= v1071 )
                                  goto LABEL_1594;
                              }
                              goto LABEL_1579;
                            }
LABEL_1594:
                            if ( (int)RtlULongLongAdd(v1081, v481, &v1738) < 0
                              || (char *)v1084 + v474 + 4 > (char *)v1741 + HIDWORD(v1740) )
                            {
                              goto LABEL_1579;
                            }
                            v1085 = v1738;
                            *v1084 = v474;
                            memcpy_0(v1085, v1524, v474);
                            v1072 = 4LL;
                            v1073 = v1740 + 1;
                          }
                          else
                          {
                            if ( (int)RtlUIntAdd((unsigned int)v481, v474, &v1598) < 0 )
                              goto LABEL_1579;
                            v1599 = v1598;
                            if ( (int)RtlUIntAdd(HIDWORD(v1740), v1598, (char *)&v1740 + 4) < 0 )
                              goto LABEL_1579;
                            v1073 = v1740 + 1;
                            v1074 = 0LL;
                          }
                          LODWORD(v1740) = v1073;
                          v1711 = v1708;
                          if ( !v1741 )
                          {
                            if ( (int)RtlUIntAdd((unsigned int)v1072, 8LL, &v1601) < 0 )
                              goto LABEL_1579;
                            v1602 = v1601;
                            if ( (int)RtlUIntAdd(HIDWORD(v1740), v1601, (char *)&v1740 + 4) < 0 )
                              goto LABEL_1579;
                            goto LABEL_1608;
                          }
                          v1087 = (unsigned int *)v1741;
                          v1712 = (unsigned int *)v1741;
                          if ( v1073 )
                          {
                            while ( (int)RtlUIntAdd((unsigned int)v1072, *v1087, &v1603) >= 0 )
                            {
                              v1602 = v1603;
                              if ( (int)RtlULongLongAdd(v1088, v1603, &v1712) < 0 )
                                break;
                              v1087 = v1712;
                              if ( v1089 + 1 >= v1073 )
                                goto LABEL_1605;
                            }
                            goto LABEL_1579;
                          }
LABEL_1605:
                          if ( (int)RtlULongLongAdd(v1087, v1072, &v1739) >= 0
                            && v1090 + 3 <= (_DWORD *)((char *)v1741 + HIDWORD(v1740)) )
                          {
                            v1091 = v1739;
                            *v1090 = 8;
                            *v1091 = v1711;
LABEL_1608:
                            LODWORD(v1740) = v1740 + 1;
                            if ( (int)RtlUIntAdd(v1086, v1086, &v1604) >= 0 )
                            {
                              v1093 = v1604;
                              v1605 = v1604;
                              v1606 = v1604;
                              if ( (int)RtlUIntAdd(v1092, 8LL, &v1607) >= 0 )
                              {
                                v1605 = v1607;
                                if ( (int)RtlUIntAdd(v1093, v1607, &v1606) >= 0 )
                                {
                                  v1536 = 0LL;
                                  v1609 = 0;
                                  v1094 = 0;
                                  v1440 = v1606;
                                  v1528 = 0LL;
                                  v1713 = 0LL;
                                  v1514 = 0LL;
                                  v1523 = 0LL;
                                  v1624 = 0;
                                  v1519 = 0LL;
                                  v1714 = __rdtsc();
                                  v1610 = 8;
                                  v1095 = RtlUIntAdd(8LL, HIDWORD(v1740), &v1610);
                                  if ( v1095 >= 0 )
                                  {
                                    v1098 = (v1610 + 7) & 0xFFFFFFF8;
                                    if ( v1098 >= v1610 )
                                    {
                                      v1610 = (v1610 + 7) & 0xFFFFFFF8;
                                      v1099 = v1098;
                                      v1100 = GetProcessHeap();
                                      v1101 = HeapAlloc(v1100, 8u, v1099);
                                      if ( v1101 )
                                      {
                                        v1715 = v1101;
                                        *v1101 = v1740;
                                        v1095 = RtlULongLongAdd(v1101, 4LL, &v1715);
                                        if ( v1095 < 0
                                          || (v1103 = v1715,
                                              *(_DWORD *)v1715 = HIDWORD(v1740),
                                              v1095 = RtlULongLongAdd(v1103, v1102, &v1715),
                                              v1095 < 0) )
                                        {
                                          v1104 = GetProcessHeap();
                                          HeapFree(v1104, 0, v1101);
                                        }
                                        else
                                        {
                                          *(_QWORD *)((char *)v1101 + v1610 - 8) = v1714;
                                          memcpy_0(v1715, v1741, HIDWORD(v1740));
                                          v1094 = v1610;
                                          v1528 = (char *)v1101;
                                        }
                                      }
                                      else
                                      {
                                        v1095 = -1073741801;
                                      }
                                      v1096 = 0LL;
                                      v1097 = v1536;
                                    }
                                    else
                                    {
                                      v1095 = -1073741675;
                                    }
                                  }
                                  v1105 = v1095 | 0x10000000;
                                  if ( v1105 < 0 )
                                    goto LABEL_1939;
                                  v1106 = v1096;
                                  v1716 = v1096;
                                  v1717 = (__int64)v1096;
                                  v1718 = v1096;
                                  v1719 = (__int64)v1096;
                                  v1720 = v1096;
                                  v1721 = v1096;
                                  v1475 = (SIZE_T)v1096;
                                  if ( !v1528 )
                                  {
                                    v1107 = -1073741811;
LABEL_1680:
                                    v1105 = v1107 | 0x10000000;
                                    if ( v1105 >= 0 )
                                    {
                                      v1192 = (const void **)v1713;
                                      v1613 = 4;
                                      v1193 = RtlUIntAdd(4LL, *(unsigned int *)v1713, &v1613);
                                      if ( v1193 < 0
                                        || (v1193 = RtlUIntAdd(v1613, 4LL, &v1613), v1193 < 0)
                                        || (v1193 = RtlUIntAdd(v1613, *((unsigned int *)v1192 + 4), &v1613), v1193 < 0)
                                        || (v1193 = RtlUIntAdd(v1613, 4LL, &v1613), v1193 < 0) )
                                      {
                                        v1196 = v1614;
                                      }
                                      else
                                      {
                                        v1193 = RtlUIntAdd(v1613, *((unsigned int *)v1192 + 8), &v1613);
                                        v1196 = v1614;
                                        if ( v1193 >= 0 )
                                          v1196 = v1613;
                                        v1614 = v1196;
                                      }
                                      if ( v1193 >= 0 )
                                      {
                                        v1197 = v1196;
                                        v1198 = GetProcessHeap();
                                        v1199 = HeapAlloc(v1198, 8u, v1197);
                                        if ( v1199 )
                                        {
                                          *v1199 = *(_DWORD *)v1192;
                                          v1722 = v1199;
                                          v1193 = RtlULongLongAdd(v1199, 4LL, &v1722);
                                          if ( v1193 >= 0 )
                                          {
                                            memcpy_0(v1722, v1192[1], *(unsigned int *)v1192);
                                            v1193 = RtlULongLongAdd(v1722, *(unsigned int *)v1192, &v1722);
                                            if ( v1193 >= 0 )
                                            {
                                              v1200 = v1722;
                                              *(_DWORD *)v1722 = *((_DWORD *)v1192 + 4);
                                              v1193 = RtlULongLongAdd(v1200, 4LL, &v1722);
                                              if ( v1193 >= 0 )
                                              {
                                                memcpy_0(v1722, v1192[3], *((unsigned int *)v1192 + 4));
                                                v1193 = RtlULongLongAdd(v1722, *((unsigned int *)v1192 + 4), &v1722);
                                                if ( v1193 >= 0 )
                                                {
                                                  v1201 = v1722;
                                                  *(_DWORD *)v1722 = *((_DWORD *)v1192 + 8);
                                                  v1193 = RtlULongLongAdd(v1201, 4LL, &v1722);
                                                  if ( v1193 >= 0 )
                                                  {
                                                    memcpy_0(v1722, v1192[5], *((unsigned int *)v1192 + 8));
                                                    v1193 = RtlULongLongAdd(v1722, *((unsigned int *)v1192 + 8), &v1722);
                                                    if ( v1193 >= 0 )
                                                    {
                                                      v1202 = v1614;
                                                      v1195 = 0LL;
                                                      v1194 = v1440;
                                                      v1097 = v1536;
                                                      v1514 = v1199;
                                                      goto LABEL_1702;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          v1203 = GetProcessHeap();
                                          HeapFree(v1203, 0, v1199);
                                        }
                                        else
                                        {
                                          v1193 = -1073741801;
                                        }
                                        v1097 = v1536;
                                        v1195 = 0LL;
                                        v1194 = v1440;
                                      }
                                      v1202 = 0;
                                      v1199 = 0LL;
LABEL_1702:
                                      v1105 = v1193 | 0x10000000;
                                      if ( v1105 < 0 )
                                      {
                                        v1074 = 0LL;
                                        v1217 = 0LL;
                                        goto LABEL_1943;
                                      }
                                      v1204 = (unsigned int)v1195;
                                      v1723 = v1195;
                                      v1616 = (unsigned int)v1195;
                                      v1615 = (int)v1195;
                                      v1724 = v1195;
                                      v1617 = 8;
                                      v1205 = RtlUIntAdd(8LL, v1194, &v1617);
                                      v1105 = v1205 | 0x10000000;
                                      if ( v1205 >= 0 )
                                      {
                                        v1206 = (v1617 + 7) & 0xFFFFFFF8;
                                        if ( (unsigned int)v1206 >= v1617 )
                                        {
                                          v1619 = (v1617 + 7) & 0xFFFFFFF8;
                                          v1207 = RtlUIntAdd(v1206, 8LL, &v1619);
                                          v1208 = v1618;
                                          v1105 = v1207;
                                          if ( v1207 >= 0 )
                                            v1208 = v1619;
                                          v1618 = v1208;
                                        }
                                        else
                                        {
                                          v1105 = -1073741675;
                                        }
                                        if ( v1105 < 0 )
                                          goto LABEL_1749;
                                        if ( !v1741 )
                                        {
                                          v1105 = -1073741811;
                                          goto LABEL_1726;
                                        }
                                        if ( (unsigned int)v1740 <= 1 )
                                        {
                                          v1105 = -1073741811;
                                          goto LABEL_1726;
                                        }
                                        v1209 = (unsigned int *)v1741;
                                        v1725 = (unsigned int *)v1741;
                                        while ( 1 )
                                        {
                                          v1210 = *v1209;
                                          v1105 = RtlULongLongAdd(v1209, 4LL, &v1725);
                                          if ( v1105 < 0 )
                                            break;
                                          v1105 = RtlULongLongAdd(v1725, v1210, &v1725);
                                          if ( v1105 < 0 )
                                            break;
                                          v1209 = v1725;
                                          if ( v1211 != -1 )
                                          {
                                            v1105 = RtlULongLongAdd(v1725, 4LL, &v1725);
                                            if ( v1105 >= 0 )
                                            {
                                              v1213 = v1725;
                                              v1615 = v1212;
                                              if ( !v1212 )
                                                v1213 = 0LL;
                                              v1725 = v1213;
                                              v1723 = v1213;
                                            }
                                            break;
                                          }
                                        }
                                        if ( v1105 < 0 )
                                          goto LABEL_1725;
                                        if ( (unsigned int)v1740 <= 2 )
                                        {
                                          v1105 = -1073741811;
LABEL_1725:
                                          v1199 = v1514;
                                          goto LABEL_1726;
                                        }
                                        v1218 = (unsigned int *)v1741;
                                        v1726 = (unsigned int *)v1741;
                                        while ( 1 )
                                        {
                                          v1219 = *v1218;
                                          v1105 = RtlULongLongAdd(v1218, 4LL, &v1726);
                                          if ( v1105 < 0 )
                                            break;
                                          v1105 = RtlULongLongAdd(v1726, v1219, &v1726);
                                          if ( v1105 < 0 )
                                            break;
                                          v1218 = v1726;
                                          if ( (unsigned int)(v1221 + 1) >= 2 )
                                          {
                                            v1105 = RtlULongLongAdd(v1726, 4LL, &v1726);
                                            if ( v1105 >= 0 )
                                            {
                                              v1223 = v1726;
                                              v1204 = v1222;
                                              if ( !v1222 )
                                                v1223 = 0LL;
                                              v1616 = v1222;
                                              v1726 = v1223;
                                              v1724 = v1223;
                                            }
                                            break;
                                          }
                                        }
                                        if ( v1105 < 0 )
                                          goto LABEL_1725;
                                        v1620 = 4;
                                        v1105 = RtlUIntAdd(4LL, v1220, &v1620);
                                        if ( v1105 < 0
                                          || (v1105 = RtlUIntAdd(v1620, 4LL, &v1620), v1105 < 0)
                                          || (v1105 = RtlUIntAdd(v1620, v1224, &v1620), v1105 < 0)
                                          || (v1105 = RtlUIntAdd(v1620, 4LL, &v1620), v1105 < 0) )
                                        {
                                          v1225 = v1621;
                                        }
                                        else
                                        {
                                          v1105 = RtlUIntAdd(v1620, v1204, &v1620);
                                          v1225 = v1621;
                                          if ( v1105 >= 0 )
                                            v1225 = v1620;
                                          v1621 = v1225;
                                        }
                                        if ( v1105 < 0 )
                                          goto LABEL_1725;
                                        v1199 = v1514;
                                        if ( v1225 > 0x400000 )
                                        {
                                          v1105 = -2147418113;
                                          goto LABEL_1749;
                                        }
                                        v1624 = v1225;
                                      }
LABEL_1726:
                                      if ( v1105 >= 0 )
                                      {
                                        v1214 = v1624;
                                        v1215 = GetProcessHeap();
                                        v1216 = (unsigned int *)HeapAlloc(v1215, 8u, v1214);
                                        if ( v1216 )
                                        {
                                          v1217 = v1216;
                                          v1523 = v1216;
                                          v1105 = 0x10000000;
                                        }
                                        else
                                        {
                                          v1217 = 0LL;
                                          v1105 = -805306345;
                                        }
                                        if ( v1105 < 0 )
                                          goto LABEL_1773;
                                        if ( !v1199 )
                                        {
                                          v1074 = 0LL;
                                          v1105 = -2147024809;
                                          v1097 = v1536;
                                          goto LABEL_1943;
                                        }
                                        if ( !v1217 )
                                        {
                                          v1074 = 0LL;
                                          v1105 = -2147024809;
                                          v1097 = v1536;
                                          goto LABEL_1943;
                                        }
                                        v1764 = v1624;
                                        v1762[0] = v1199;
                                        v1763 = v1202;
                                        v1762[1] = v1217;
                                        v1765 = 0;
                                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                                        {
                                          v1230 = GetProcAddress(hModule, "NtQuerySystemInformation");
                                          if ( v1230 )
                                          {
                                            v1231 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1230)(134LL, v1762);
                                            v1227 = v1624;
                                            v1105 = v1231 | 0x10000000;
                                            if ( v1231 >= 0 )
                                              v1227 = v1764;
                                            v1624 = v1227;
                                            goto LABEL_1771;
                                          }
                                          v1226 = GetLastError();
                                          v1105 = v1226;
                                          if ( v1226 <= 0 )
                                          {
LABEL_1760:
                                            v1227 = v1624;
                                            if ( v1105 >= 0 )
                                            {
                                              v1105 = -2147467259;
                                              goto LABEL_1762;
                                            }
LABEL_1771:
                                            if ( v1105 == -805306333 )
                                            {
                                              v1105 = -2147024774;
                                              goto LABEL_1773;
                                            }
LABEL_1762:
                                            if ( v1105 >= 0 )
                                            {
                                              v1228 = 0LL;
                                              if ( v1227 < 4 )
                                              {
                                                v1229 = -1073741762;
LABEL_1853:
                                                v1074 = 0LL;
LABEL_1854:
                                                v1105 = v1229 | 0x10000000;
                                                if ( v1105 >= 0 )
                                                {
                                                  v1729 = 0LL;
                                                  v1728 = 0LL;
                                                  if ( !v1074 )
                                                  {
                                                    v1097 = v1536;
                                                    v1105 = -805306355;
                                                    goto LABEL_1943;
                                                  }
                                                  v1272 = (unsigned __int8 *)v1074[1];
                                                  v1477 = (SIZE_T)v1272;
                                                  if ( !v1272 || (v1273 = *(unsigned int *)v1074, !(_DWORD)v1273) )
                                                  {
                                                    v1097 = v1536;
                                                    v1105 = -805306355;
                                                    goto LABEL_1942;
                                                  }
                                                  v1274 = v1273 - 8;
                                                  v1465 = (unsigned __int16 *)(v1273 - 8);
                                                  v1539 = (unsigned __int16 *)operator new(v1273 - 8);
                                                  v1097 = v1539;
                                                  if ( v1539 )
                                                  {
                                                    v1275 = 0;
                                                    v1813 = 0x7F1137FAB69605ELL;
                                                    v1276 = v1272;
                                                    v1277 = v1539;
                                                    v1278 = v1274 & 7;
                                                    if ( (v1274 & 7) != 0 )
                                                    {
                                                      v1623 = -1;
                                                      v1534 = 0;
                                                      v1279 = 0;
                                                      v1622 = 0;
                                                      v1280 = 0;
                                                      v1281 = 56;
                                                      do
                                                      {
                                                        v1282 = v1276 + 1;
                                                        v1283 = *v1276;
                                                        if ( v1280 >= 4 )
                                                        {
                                                          v1284 = (v1283 << v1281) | v1534;
                                                          v1534 = v1284;
                                                        }
                                                        else
                                                        {
                                                          v1284 = v1534;
                                                          v1279 |= v1283 << (v1281 - 32);
                                                        }
                                                        ++v1280;
                                                        v1281 -= 8;
                                                        v1276 = v1282;
                                                      }
                                                      while ( v1280 < (int)v1278 );
                                                      v1285 = v1279 ^ 0x92F65A5;
                                                      v1286 = v1284 ^ 0x699A899C;
                                                      v1622 = v1279 ^ 0x92F65A5;
                                                      v1287 = 0;
                                                      v1623 = v1286;
                                                      if ( (v1274 & 7) != 0 )
                                                      {
                                                        do
                                                        {
                                                          if ( v1287 >= 4 )
                                                          {
                                                            v1286 = __ROL4__(v1286, 8);
                                                            v1288 = v1286;
                                                          }
                                                          else
                                                          {
                                                            v1285 = __ROL4__(v1285, 8);
                                                            v1288 = v1285;
                                                          }
                                                          ++v1287;
                                                          *(_BYTE *)v1277 = v1288;
                                                          v1277 = (unsigned __int16 *)((char *)v1277 + 1);
                                                        }
                                                        while ( v1287 < (int)v1278 );
                                                        v1285 = v1622;
                                                        v1286 = v1623;
                                                      }
                                                      if ( v1278 <= 4 )
                                                      {
                                                        v1623 = 0;
                                                        v1289 = 0;
                                                        if ( v1278 < 4 )
                                                        {
                                                          v1285 = v1285 >> (8 * (4 - v1278)) << (8 * (4 - v1278));
                                                          v1622 = v1285;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v1289 = v1286 >> (8 * (8 - v1278)) << (8 * (8 - v1278));
                                                        v1623 = v1289;
                                                      }
                                                      v1275 = 0;
                                                    }
                                                    else
                                                    {
                                                      v1279 = 0;
                                                      v1623 = 0;
                                                      v1289 = 0;
                                                      v1622 = 0;
                                                      v1285 = 0;
                                                    }
                                                    v1290 = v1274 >> 3;
                                                    if ( v1274 >> 3 )
                                                    {
                                                      v1291 = HIDWORD(v1813);
                                                      v1292 = (char *)v1277 + 7;
                                                      v1293 = v1276 + 2;
                                                      v1429 = WORD2(v1813);
                                                      v1294 = HIWORD(HIDWORD(v1813));
                                                      v1504 = WORD1(v1813);
                                                      v1295 = HIDWORD(v1813) ^ 0xAB69605E;
                                                      do
                                                      {
                                                        v1296 = *(v1293 - 1);
                                                        v1297 = *(v1293 - 2);
                                                        v1298 = v1293[2];
                                                        v1293 += 8;
                                                        v1299 = *(v1293 - 7) | ((*(v1293 - 8) | ((v1296 | (v1297 << 8)) << 8)) << 8);
                                                        v1300 = v1299 ^ v1285;
                                                        v1301 = *(v1293 - 3) | ((*(v1293 - 4) | ((*(v1293 - 5) | (v1298 << 8)) << 8)) << 8);
                                                        v1302 = v1295 ^ v1300 ^ v1301 ^ v1289;
                                                        v1303 = (__ROL4__(v1302, 10)
                                                               + v1429 * __ROL4__(v1302 + 1419157410, 5)) ^ v1300;
                                                        v1304 = (WORD1(v1813) * __ROR4__(v1291 + v1303, 9)
                                                               - __ROL4__(v1303, 2)) ^ v1302;
                                                        v1305 = (24670 * (v1304 - v1429) - (v1304 >> 13)) ^ v1303;
                                                        v1306 = (v1294 * __ROL4__(WORD1(v1813) ^ v1305, 6)
                                                               - __ROL4__(v1305, 2)) ^ v1304;
                                                        v1307 = (v1291 - (v1306 ^ 0xAB69605E)) ^ v1305;
                                                        v1308 = (v1504 * (v1307 ^ v1429)) ^ __ROR4__(v1307, 6) ^ v1306;
                                                        v1309 = (__ROL4__(v1308, 2) + 24670
                                                                                    * __ROR4__(v1291 + v1308, 15)) ^ v1307;
                                                        v1310 = (v1294 * __ROR4__(v1309 + 1419157410, 14)
                                                               - __ROL4__(v1309, 8)) ^ v1308;
                                                        v1311 = __ROR4__(v1310, 10) ^ (v1429
                                                                                     * __ROR4__(v1310 ^ 0xAB69605E, 12)) ^ v1309;
                                                        v1312 = (v1311 >> 10) ^ (WORD1(v1813) * (v1311 ^ v1294)) ^ v1310;
                                                        v1313 = (v1294 * (__ROR4__(~v1312, 5) + 24670)) ^ v1311;
                                                        v1314 = (v1313 - v1294) ^ 0xAB69605E ^ v1312;
                                                        v1315 = ((v1314 >> 2) + v1429 * __ROL4__(v1314 ^ v1294, 2)) ^ v1313;
                                                        v1316 = (__ROL4__(v1315, 7)
                                                               + WORD1(v1813) * __ROR4__(v1315 - v1291, 6)) ^ v1314;
                                                        v1317 = (24670 * (v1316 ^ v1429) + __ROR4__(v1316, 9)) ^ v1315;
                                                        v1318 = (__ROL4__(v1317, 7)
                                                               + v1294 * __ROL4__(WORD1(v1813) ^ v1317, 5)) ^ v1316;
                                                        v1319 = v1318 ^ v1295 ^ v1317;
                                                        v1320 = (v1429 * (__ROR4__(v1319, 3) - WORD1(v1813))) ^ v1318;
                                                        v1321 = (24670 * __ROR4__(v1320 - v1291, 1) - __ROR4__(v1320, 6)) ^ v1319;
                                                        v1292 += 8;
                                                        v1322 = (__ROL4__(v1321, 14)
                                                               + v1294 * __ROL4__(v1321 - 1419157410, 3)) ^ v1320;
                                                        v1323 = (v1429 * __ROL4__(v1322 - 1419157410, 15)
                                                               - __ROR4__(v1322, 14)) ^ v1321;
                                                        v1324 = (v1323 >> 3) ^ (WORD1(v1813) * (v1323 ^ 0x605E)) ^ v1322;
                                                        v1623 = v1534 ^ v1324;
                                                        v1534 = v1301;
                                                        v1325 = v1279 ^ __ROL4__(v1324, 2) ^ (24670
                                                                                            * __ROL4__(v1324 ^ v1291, 4));
                                                        v1279 = v1299;
                                                        v1622 = v1325 ^ v1323;
                                                        *(v1292 - 12) = v1325 ^ v1323;
                                                        v1622 = __ROR4__(v1622, 8);
                                                        *(v1292 - 8) = v1623;
                                                        v1623 = __ROR4__(v1623, 8);
                                                        *(v1292 - 13) = v1622;
                                                        v1622 = __ROR4__(v1622, 8);
                                                        *(v1292 - 9) = v1623;
                                                        v1623 = __ROR4__(v1623, 8);
                                                        *(v1292 - 14) = v1622;
                                                        v1622 = __ROR4__(v1622, 8);
                                                        *(v1292 - 10) = v1623;
                                                        v1623 = __ROR4__(v1623, 8);
                                                        *(v1292 - 15) = v1622;
                                                        *(v1292 - 11) = v1623;
                                                        v1285 = __ROR4__(v1622, 8);
                                                        v1289 = __ROR4__(v1623, 8);
                                                        v1622 = v1285;
                                                        v1623 = v1289;
                                                        --v1290;
                                                      }
                                                      while ( v1290 );
                                                      v84 = v1498;
                                                      v1274 = (unsigned __int64)v1465;
                                                      v1097 = v1539;
                                                      v1275 = 0;
                                                      v1272 = (unsigned __int8 *)v1477;
                                                    }
                                                    v1326 = 0LL;
                                                    if ( v1274 )
                                                    {
                                                      if ( v1274 >= 0x20 )
                                                      {
                                                        v1327 = 0LL;
                                                        v1328 = 0LL;
                                                        do
                                                        {
                                                          v1327 = _mm_xor_si128(
                                                                    _mm_loadu_si128((const __m128i *)((char *)v1097 + v1326)),
                                                                    v1327);
                                                          v1329 = _mm_loadu_si128((const __m128i *)((char *)v1097
                                                                                                  + v1326
                                                                                                  + 16));
                                                          v1326 += 32LL;
                                                          v1330 = _mm_xor_si128(v1329, v1328);
                                                          v1328 = v1330;
                                                        }
                                                        while ( v1326 < (v1274 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                        v1331 = _mm_xor_si128(v1330, v1327);
                                                        v1332 = _mm_xor_si128(v1331, _mm_srli_si128(v1331, 8));
                                                        v1333 = _mm_xor_si128(v1332, _mm_srli_si128(v1332, 4));
                                                        v1334 = _mm_xor_si128(v1333, _mm_srli_si128(v1333, 2));
                                                        v1275 = _mm_cvtsi128_si32(_mm_xor_si128(v1334, _mm_srli_si128(v1334, 1)));
                                                      }
                                                      for ( ; v1326 < v1274; ++v1326 )
                                                        v1275 ^= *((_BYTE *)v1097 + v1326);
                                                    }
                                                    if ( v1275 == *(_QWORD *)&v1272[v1274] )
                                                    {
                                                      v1074 = v1519;
                                                      v1105 = 0x10000000;
                                                      v1217 = v1523;
                                                      v1729 = v1274;
                                                      v1536 = v1097;
                                                      v1728 = 0LL;
                                                      v1609 = v1274;
LABEL_1896:
                                                      if ( v1105 < 0 )
                                                      {
LABEL_1942:
                                                        v1199 = v1514;
LABEL_1943:
                                                        if ( v1528 )
                                                        {
                                                          v1354 = GetProcessHeap();
                                                          HeapFree(v1354, 0, v1528);
                                                          v1097 = v1536;
                                                        }
                                                        v1355 = v1713;
                                                        if ( v1713 )
                                                        {
                                                          v1356 = (void *)*((_QWORD *)v1713 + 1);
                                                          if ( v1356 )
                                                          {
                                                            v1357 = GetProcessHeap();
                                                            HeapFree(v1357, 0, v1356);
                                                            v1355[1] = 0LL;
                                                          }
                                                          v1358 = (void *)v1355[3];
                                                          if ( v1358 )
                                                          {
                                                            v1359 = GetProcessHeap();
                                                            HeapFree(v1359, 0, v1358);
                                                            v1355[3] = 0LL;
                                                          }
                                                          v1360 = (void *)v1355[5];
                                                          if ( v1360 )
                                                          {
                                                            v1361 = GetProcessHeap();
                                                            HeapFree(v1361, 0, v1360);
                                                            v1360 = 0LL;
                                                            v1355[5] = 0LL;
                                                          }
                                                          v1362 = GetProcessHeap();
                                                          HeapFree(v1362, 0, v1355);
                                                          v1097 = v1536;
                                                          v1713 = v1360;
                                                        }
                                                        else
                                                        {
                                                          v1360 = 0LL;
                                                        }
                                                        if ( v1199 )
                                                        {
                                                          v1363 = GetProcessHeap();
                                                          HeapFree(v1363, 0, v1199);
                                                          v1097 = v1536;
                                                        }
                                                        if ( v1217 )
                                                        {
                                                          v1364 = GetProcessHeap();
                                                          HeapFree(v1364, 0, v1217);
                                                          v1097 = v1536;
                                                        }
                                                        if ( v1074 )
                                                        {
                                                          v1365 = (void *)v1074[1];
                                                          if ( v1365 )
                                                          {
                                                            v1366 = GetProcessHeap();
                                                            HeapFree(v1366, 0, v1365);
                                                            v1074[1] = v1360;
                                                          }
                                                          v1367 = (void *)v1074[3];
                                                          if ( v1367 )
                                                          {
                                                            v1368 = GetProcessHeap();
                                                            HeapFree(v1368, 0, v1367);
                                                            v1074[3] = v1360;
                                                          }
                                                          v1369 = (void *)v1074[5];
                                                          if ( v1369 )
                                                          {
                                                            v1370 = GetProcessHeap();
                                                            HeapFree(v1370, 0, v1369);
                                                            v1074[5] = v1360;
                                                          }
                                                          v1371 = GetProcessHeap();
                                                          HeapFree(v1371, 0, v1074);
                                                          v1097 = v1536;
                                                        }
                                                        if ( v1097 )
                                                        {
                                                          v1372 = GetProcessHeap();
                                                          HeapFree(v1372, 0, v1536);
                                                        }
                                                        if ( v1105 >= 0 )
                                                        {
                                                          if ( (_DWORD)v1750 )
                                                          {
                                                            v1373 = (unsigned int *)v1751;
                                                            if ( v1751 )
                                                            {
                                                              v7 = 4LL;
                                                              v1734[0] = v1751;
                                                              if ( (int)RtlULongLongAdd(v1751, 4LL, v1734) >= 0 )
                                                              {
                                                                v1376 = (int *)v1734[0];
                                                                v1626[1] = v1374;
                                                                if ( !v1374 )
                                                                  v1376 = 0LL;
                                                                v1734[0] = v1376;
                                                                v1734[1] = v1376;
                                                                if ( v1374 == 4 )
                                                                {
                                                                  v1587 = *v1376;
                                                                  if ( v1587 >= 0 && v1375 > 1 )
                                                                  {
                                                                    for ( v1735[0] = v1373;
                                                                          (int)RtlULongLongAdd(v1373, 4LL, v1735) >= 0
                                                                       && (int)RtlULongLongAdd(v1735[0], *v1373, v1735) >= 0;
                                                                          v1373 = (unsigned int *)v1735[0] )
                                                                    {
                                                                      if ( v1377 != -1 )
                                                                      {
                                                                        v1378 = *(_DWORD *)v1735[0];
                                                                        if ( (int)RtlULongLongAdd(v1735[0], 4LL, v1735) >= 0 )
                                                                        {
                                                                          v1379 = (_QWORD *)v1735[0];
                                                                          v1626[2] = v1378;
                                                                          if ( !v1378 )
                                                                            v1379 = 0LL;
                                                                          v1735[0] = v1379;
                                                                          v1735[1] = v1379;
                                                                          if ( v1378 == 8 )
                                                                            v1735[2] = *v1379;
                                                                        }
                                                                        goto LABEL_1580;
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              goto LABEL_1580;
                                                            }
                                                          }
                                                        }
                                                        goto LABEL_1579;
                                                      }
                                                      v1637 = 0;
                                                      v1730 = v1097;
                                                      if ( (unsigned int)v1274 < 4 )
                                                        goto LABEL_1902;
                                                      v1442 = *v1097;
                                                      v1337 = RtlULongLongAdd(v1097, 4LL, &v1730);
                                                      if ( v1337 < 0 )
                                                        goto LABEL_1937;
                                                      v1337 = RtlUIntAdd(0LL, 4LL, &v1637);
                                                      if ( v1337 < 0 )
                                                        goto LABEL_1937;
                                                      if ( (unsigned int)v1274 - v1637 < 4 )
                                                      {
                                                        v1337 = -1073741762;
LABEL_1937:
                                                        v1105 = v1337 | 0x10000000;
                                                        goto LABEL_1942;
                                                      }
                                                      v1338 = *(unsigned int *)v1730;
                                                      v1337 = RtlULongLongAdd(v1730, 4LL, &v1730);
                                                      if ( v1337 < 0 )
                                                        goto LABEL_1937;
                                                      v1337 = RtlUIntAdd(v1339, 4LL, &v1637);
                                                      if ( v1337 < 0 )
                                                        goto LABEL_1937;
                                                      if ( (unsigned int)v1274 - v1637 < (unsigned int)v1338 )
                                                      {
                                                        v1337 = -1073741762;
                                                        goto LABEL_1937;
                                                      }
                                                      v1337 = RtlUIntAdd(v1637, (unsigned int)v1338, &v1637);
                                                      if ( v1337 < 0 )
                                                        goto LABEL_1937;
                                                      v1341 = (unsigned int)v1274;
                                                      v1342 = v1730;
                                                      if ( (char *)v1097 + v1341 < (char *)v1730 + v1338
                                                        || (unsigned __int64)v1097 + v1341 - v1338 - (_QWORD)v1730 >= 8 )
                                                      {
LABEL_1902:
                                                        v1337 = -1073741762;
                                                        goto LABEL_1937;
                                                      }
                                                      v1343 = 0LL;
                                                      v1337 = 0;
                                                      v1344 = 0;
                                                      if ( v1730 )
                                                      {
                                                        v1337 = RtlULongLongAdd(v1730, v1338, &v1731);
                                                        if ( v1337 < 0 )
                                                        {
LABEL_1933:
                                                          if ( v1337 >= 0 && v1340 != (_DWORD)v1750 )
                                                            v1337 = -1073741762;
                                                          goto LABEL_1936;
                                                        }
                                                        v1346 = v1731;
                                                        if ( (unsigned __int64)v1342 < v1731 )
                                                        {
                                                          while ( 1 )
                                                          {
                                                            v1337 = RtlULongLongAdd(v1345, 4LL, &v1732);
                                                            if ( v1337 < 0 )
                                                              break;
                                                            if ( v1732 > v1348 )
                                                              goto LABEL_1924;
                                                            v1349 = RtlUIntAdd(4LL, *v1347, v1626);
                                                            v1337 = v1349;
                                                            if ( v1349 >= 0 )
                                                              v1351 = v1626[0];
                                                            v1625 = v1351;
                                                            if ( v1349 < 0 )
                                                              break;
                                                            v1337 = RtlULongLongAdd(v1350, v1351, &v1733);
                                                            if ( v1337 < 0 )
                                                              break;
                                                            v1345 = v1733;
                                                            if ( v1733 > v1346 )
                                                            {
LABEL_1924:
                                                              v1097 = v1536;
                                                              v1337 = -1073741811;
                                                              goto LABEL_1936;
                                                            }
                                                            ++v1344;
                                                            if ( v1733 >= v1346 )
                                                            {
                                                              v1340 = v1442;
                                                              goto LABEL_1922;
                                                            }
                                                          }
                                                          v1340 = v1442;
                                                          v1097 = v1536;
                                                          goto LABEL_1933;
                                                        }
LABEL_1922:
                                                        v59 = v1345 == v1346;
                                                        v1097 = v1536;
                                                        if ( !v59 )
                                                        {
                                                          v1337 = -1073741811;
LABEL_1936:
                                                          v1217 = v1523;
                                                          v1074 = v1519;
                                                          goto LABEL_1937;
                                                        }
                                                      }
                                                      if ( (_DWORD)v1338 )
                                                      {
                                                        v1352 = GetProcessHeap();
                                                        v1353 = HeapAlloc(v1352, 8u, v1338);
                                                        v1340 = v1442;
                                                        v1343 = v1353;
                                                        v1097 = v1536;
                                                        if ( !v1353 )
                                                        {
                                                          v1337 = -1073741801;
                                                          goto LABEL_1933;
                                                        }
                                                        v1337 = 0;
                                                      }
                                                      if ( v1342 )
                                                      {
                                                        memcpy_0(v1343, v1342, v1338);
                                                        v1340 = v1442;
                                                        v1097 = v1536;
                                                      }
                                                      v1751 = v1343;
                                                      v1750 = __PAIR64__(v1338, v1344);
                                                      goto LABEL_1933;
                                                    }
                                                    operator delete(v1097);
                                                    v1074 = v1519;
                                                    v1217 = v1523;
                                                  }
                                                  v1335 = v1728;
                                                  v1105 = -805306367;
                                                  if ( v1728 )
                                                  {
                                                    v1336 = GetProcessHeap();
                                                    HeapFree(v1336, 0, v1335);
                                                    v1728 = 0LL;
                                                    v1097 = 0LL;
                                                  }
                                                  else
                                                  {
                                                    v1097 = v1536;
                                                  }
                                                  LODWORD(v1274) = v1609;
                                                  goto LABEL_1896;
                                                }
LABEL_1774:
                                                v1097 = v1536;
                                                goto LABEL_1943;
                                              }
                                              v1232 = *v1217;
                                              v1441 = *v1217;
                                              v1233 = -1LL;
                                              if ( v1217 + 1 >= v1217 )
                                                v1233 = (unsigned __int64)(v1217 + 1);
                                              v1229 = v1217 + 1 < v1217 ? 0xC0000095 : 0;
                                              if ( v1217 + 1 < v1217 )
                                              {
LABEL_1852:
                                                v1199 = v1514;
                                                goto LABEL_1853;
                                              }
                                              if ( v1227 - 4 < (unsigned int)v1232 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1852;
                                              }
                                              v1234 = -1LL;
                                              v1476 = *v1217;
                                              if ( v1233 + v1232 >= v1233 )
                                                v1234 = v1233 + v1232;
                                              v1229 = v1233 + v1232 < v1233 ? 0xC0000095 : 0;
                                              if ( v1233 + v1232 < v1233 )
                                                goto LABEL_1852;
                                              v1235 = -1;
                                              if ( (unsigned int)v1232 < 0xFFFFFFFC )
                                                v1235 = v1232 + 4;
                                              v1229 = (unsigned int)v1232 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                                              if ( (unsigned int)(v1232 + 4) < 4 )
                                                goto LABEL_1852;
                                              if ( v1227 - v1235 < 4 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1852;
                                              }
                                              v1236 = *(unsigned int *)v1234;
                                              v1237 = -1LL;
                                              if ( v1234 + 4 >= v1234 )
                                                v1237 = v1234 + 4;
                                              v1229 = v1234 + 4 < v1234 ? 0xC0000095 : 0;
                                              if ( v1234 + 4 < v1234 )
                                                goto LABEL_1851;
                                              v1238 = v1235 + 4;
                                              v1239 = -1;
                                              v1240 = -1;
                                              if ( v1235 + 4 >= v1235 )
                                                v1240 = v1235 + 4;
                                              v1229 = v1238 < v1235 ? 0xC0000095 : 0;
                                              if ( v1238 < v1235 )
                                              {
LABEL_1851:
                                                v1217 = v1523;
                                                goto LABEL_1852;
                                              }
                                              if ( v1227 - v1240 < (unsigned int)v1236 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1851;
                                              }
                                              v1241 = -1LL;
                                              if ( v1237 + v1236 >= v1237 )
                                                v1241 = v1237 + v1236;
                                              v1229 = v1237 + v1236 < v1237 ? 0xC0000095 : 0;
                                              if ( v1237 + v1236 < v1237 )
                                                goto LABEL_1851;
                                              v1242 = v1240 + v1236;
                                              if ( v1240 + (unsigned int)v1236 >= v1240 )
                                                v1239 = v1240 + v1236;
                                              v1229 = v1242 < v1240 ? 0xC0000095 : 0;
                                              if ( v1242 < v1240 )
                                                goto LABEL_1851;
                                              if ( v1227 - v1239 < 4 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1851;
                                              }
                                              v1243 = *(_DWORD *)v1241;
                                              v1428 = *(_DWORD *)v1241;
                                              v1244 = -1LL;
                                              if ( v1241 + 4 >= v1241 )
                                                v1244 = v1241 + 4;
                                              v1229 = v1241 + 4 < v1241 ? 0xC0000095 : 0;
                                              v1464 = (unsigned __int16 *)v1244;
                                              if ( v1241 + 4 < v1241 )
                                                goto LABEL_1851;
                                              v1245 = v1239 + 4;
                                              v1246 = -1;
                                              if ( v1239 + 4 >= v1239 )
                                                v1246 = v1239 + 4;
                                              v1229 = v1245 < v1239 ? 0xC0000095 : 0;
                                              if ( v1245 < v1239 )
                                                goto LABEL_1851;
                                              if ( v1227 - v1246 < v1243 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1851;
                                              }
                                              v1247 = v1243 + v1246;
                                              v1248 = -1;
                                              if ( v1243 + v1246 >= v1246 )
                                                v1248 = v1243 + v1246;
                                              v1229 = v1247 < v1246 ? 0xC0000095 : 0;
                                              if ( v1247 < v1246 )
                                                goto LABEL_1851;
                                              if ( v1227 != v1248 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1851;
                                              }
                                              if ( (unsigned int)v1232 + v1243 + (_DWORD)v1236 + 12LL != v1227 )
                                              {
                                                v1229 = -1073741762;
                                                goto LABEL_1851;
                                              }
                                              v1249 = GetProcessHeap();
                                              v1250 = HeapAlloc(v1249, 8u, 0x30uLL);
                                              v1251 = v1250;
                                              if ( !v1250 )
                                              {
                                                v1229 = -1073741801;
LABEL_1841:
                                                if ( v1229 >= 0 )
                                                {
                                                  v1217 = v1523;
                                                  v1074 = v1228;
                                                  v1199 = v1514;
                                                  v1519 = v1228;
                                                  goto LABEL_1854;
                                                }
                                                if ( v1228 )
                                                {
                                                  v1265 = (void *)v1228[1];
                                                  if ( v1265 )
                                                  {
                                                    v1266 = GetProcessHeap();
                                                    HeapFree(v1266, 0, v1265);
                                                    v1228[1] = 0LL;
                                                  }
                                                  v1267 = (void *)v1228[3];
                                                  if ( v1267 )
                                                  {
                                                    v1268 = GetProcessHeap();
                                                    HeapFree(v1268, 0, v1267);
                                                    v1228[3] = 0LL;
                                                  }
                                                  v1269 = (void *)v1228[5];
                                                  if ( v1269 )
                                                  {
                                                    v1270 = GetProcessHeap();
                                                    HeapFree(v1270, 0, v1269);
                                                    v1228[5] = 0LL;
                                                  }
                                                  v1271 = GetProcessHeap();
                                                  HeapFree(v1271, 0, v1228);
                                                }
                                                goto LABEL_1851;
                                              }
                                              if ( v1233 )
                                              {
                                                *(_DWORD *)v1250 = v1441;
                                                v1252 = GetProcessHeap();
                                                v1253 = HeapAlloc(v1252, 8u, v1476);
                                                if ( !v1253 )
                                                  goto LABEL_1832;
                                                v1251[1] = v1253;
                                                memcpy_0(v1253, (const void *)v1233, v1476);
                                              }
                                              else
                                              {
                                                *(_DWORD *)v1250 = 0;
                                                v1250[1] = 0LL;
                                              }
                                              if ( v1237 )
                                              {
                                                *((_DWORD *)v1251 + 4) = v1236;
                                                v1254 = GetProcessHeap();
                                                v1255 = HeapAlloc(v1254, 8u, v1236);
                                                if ( !v1255 )
                                                  goto LABEL_1832;
                                                v1251[3] = v1255;
                                                memcpy_0(v1255, (const void *)v1237, v1236);
                                              }
                                              else
                                              {
                                                *((_DWORD *)v1251 + 4) = 0;
                                                v1251[3] = 0LL;
                                              }
                                              if ( !v1464 )
                                              {
                                                *((_DWORD *)v1251 + 8) = 0;
                                                v1251[5] = 0LL;
                                                goto LABEL_1840;
                                              }
                                              *((_DWORD *)v1251 + 8) = v1428;
                                              v1256 = GetProcessHeap();
                                              v1257 = HeapAlloc(v1256, 8u, v1428);
                                              if ( v1257 )
                                              {
                                                v1251[5] = v1257;
                                                memcpy_0(v1257, v1464, v1428);
LABEL_1840:
                                                v1228 = v1251;
                                                v1229 = 0;
                                                goto LABEL_1841;
                                              }
LABEL_1832:
                                              v1258 = (void *)v1251[1];
                                              if ( v1258 )
                                              {
                                                v1259 = GetProcessHeap();
                                                HeapFree(v1259, 0, v1258);
                                                v1251[1] = 0LL;
                                              }
                                              v1260 = (void *)v1251[3];
                                              if ( v1260 )
                                              {
                                                v1261 = GetProcessHeap();
                                                HeapFree(v1261, 0, v1260);
                                                v1251[3] = 0LL;
                                              }
                                              v1262 = (void *)v1251[5];
                                              if ( v1262 )
                                              {
                                                v1263 = GetProcessHeap();
                                                HeapFree(v1263, 0, v1262);
                                                v1251[5] = 0LL;
                                              }
                                              v1264 = GetProcessHeap();
                                              HeapFree(v1264, 0, v1251);
                                              v1229 = -1073741801;
                                              goto LABEL_1841;
                                            }
LABEL_1773:
                                            v1074 = 0LL;
                                            goto LABEL_1774;
                                          }
                                        }
                                        else
                                        {
                                          v1226 = GetLastError();
                                          v1105 = v1226;
                                          if ( v1226 <= 0 )
                                            goto LABEL_1760;
                                        }
                                        v1105 = (unsigned __int16)v1226 | 0x80070000;
                                        goto LABEL_1760;
                                      }
LABEL_1749:
                                      v1074 = 0LL;
                                      v1097 = v1536;
                                      v1217 = 0LL;
                                      goto LABEL_1943;
                                    }
                                    v1074 = 0LL;
LABEL_1939:
                                    v1217 = 0LL;
                                    v1199 = 0LL;
                                    goto LABEL_1943;
                                  }
                                  v1108 = v1094;
                                  v1463 = (unsigned __int16 *)v1094;
                                  if ( v1094 )
                                  {
                                    v1539 = (unsigned __int16 *)operator new(v1094 + 8LL);
                                    v1109 = v1539;
                                    if ( v1539 )
                                    {
                                      v1110 = 0;
                                      v1451 = 0;
                                      v1111 = 0LL;
                                      if ( v1094 >= 0x20uLL )
                                      {
                                        v1112 = 0LL;
                                        v1113 = 0LL;
                                        do
                                        {
                                          v1112 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1528[v1111]), v1112);
                                          v1114 = _mm_loadu_si128((const __m128i *)&v1528[v1111 + 16]);
                                          v1111 += 32LL;
                                          v1115 = _mm_xor_si128(v1114, v1113);
                                          v1113 = v1115;
                                        }
                                        while ( v1111 < (v1094 & 0xFFFFFFE0) );
                                        v1116 = _mm_xor_si128(v1112, v1115);
                                        v1117 = _mm_xor_si128(v1116, _mm_srli_si128(v1116, 8));
                                        v1118 = _mm_xor_si128(v1117, _mm_srli_si128(v1117, 4));
                                        v1119 = _mm_xor_si128(v1118, _mm_srli_si128(v1118, 2));
                                        v1110 = _mm_cvtsi128_si32(_mm_xor_si128(v1119, _mm_srli_si128(v1119, 1)));
                                        v1451 = v1110;
                                      }
                                      if ( v1111 < v1094 )
                                      {
                                        do
                                          v1110 ^= v1528[v1111++];
                                        while ( v1111 < v1094 );
                                        v1451 = v1110;
                                      }
                                      v1812 = 0xC81ECB17B1B54A58uLL;
                                      v1611 = 0;
                                      v1120 = -1;
                                      v1612 = -1;
                                      v1121 = (unsigned __int8 *)v1528;
                                      v1503 = 0;
                                      v1122 = v1539;
                                      LODWORD(v1538) = 0;
                                      v1123 = 0;
                                      v1124 = v1094 & 7;
                                      if ( (v1094 & 7) != 0 )
                                      {
                                        v1125 = 0;
                                        LODWORD(v1538) = 0;
                                        v1126 = 0;
                                        v1127 = 56;
                                        do
                                        {
                                          v1128 = v1121 + 1;
                                          v1129 = *v1121;
                                          if ( v1126 >= 4 )
                                            v1125 |= v1129 << v1127;
                                          else
                                            v1123 |= v1129 << (v1127 - 32);
                                          ++v1126;
                                          v1127 -= 8;
                                          v1121 = v1128;
                                        }
                                        while ( v1126 < v1124 );
                                        LODWORD(v1538) = v1123;
                                        v1109 = v1539;
                                        v1503 = v1125;
                                        v1123 ^= 0xB17A307A;
                                        v1130 = v1125 ^ 0x42F6B18D;
                                        v1611 = v1123;
                                        v1131 = 0;
                                        v1612 = v1130;
                                        if ( (v1108 & 7) != 0 )
                                        {
                                          do
                                          {
                                            if ( v1131 >= 4 )
                                            {
                                              v1130 = __ROL4__(v1130, 8);
                                              v1132 = v1130;
                                            }
                                            else
                                            {
                                              v1123 = __ROL4__(v1123, 8);
                                              v1132 = v1123;
                                            }
                                            ++v1131;
                                            *(_BYTE *)v1122 = v1132;
                                            v1122 = (unsigned __int16 *)((char *)v1122 + 1);
                                          }
                                          while ( v1131 < v1124 );
                                          v1123 = v1611;
                                          v1130 = v1612;
                                        }
                                        if ( (unsigned int)v1124 <= 4 )
                                        {
                                          v1612 = 0;
                                          v1120 = 0;
                                          if ( (unsigned int)v1124 < 4 )
                                          {
                                            v1123 = v1123 >> (8 * (4 - v1124)) << (8 * (4 - v1124));
                                            v1611 = v1123;
                                          }
                                        }
                                        else
                                        {
                                          v1120 = v1130 >> (8 * (8 - v1124)) << (8 * (8 - v1124));
                                          v1612 = v1120;
                                        }
                                      }
                                      v1133 = v1108 >> 3;
                                      if ( v1108 >> 3 )
                                      {
                                        v1134 = (char *)v1122 + 7;
                                        v1135 = v1503;
                                        v1136 = (int)v1538;
                                        v1410 = WORD1(v1812);
                                        v1137 = v1121 + 2;
                                        v1138 = WORD2(v1812);
                                        v1139 = HIWORD(HIDWORD(v1812));
                                        do
                                        {
                                          v1140 = v1137[1] | ((*v1137 | ((*(v1137 - 1) | (*(v1137 - 2) << 8)) << 8)) << 8);
                                          v1141 = v1137[5] | ((v1137[4] | ((v1137[3] | (v1137[2] << 8)) << 8)) << 8);
                                          v1142 = v1141 ^ v1120;
                                          v1143 = HIDWORD(v1812) ^ v1123 ^ v1140 ^ (v1142 - 19032);
                                          v1144 = (__ROR4__(v1143, 7)
                                                 + WORD1(v1812) * __ROR4__(v1123 ^ v1140 ^ (v1142 - 19032), 15)) ^ v1142;
                                          v1145 = (v1138 * __ROR4__(v1144 - 1313519016, 9) - __ROR4__(v1144, 10)) ^ v1143;
                                          v1146 = (__ROL4__(v1145, 5) + v1139 * __ROL4__(v1138 ^ v1145, 4)) ^ v1144;
                                          v1147 = (HIDWORD(v1812) - (v1146 ^ 0xB1B54A58)) ^ v1145;
                                          v1148 = (WORD1(v1812) * (v1147 - 19032) - (v1147 >> 6)) ^ v1146;
                                          v1149 = (19032 * (v1138 ^ __ROR4__(v1148, 15))) ^ v1147;
                                          v1150 = (v1138 * (v1139 + __ROR4__(~v1149, 3))) ^ v1148;
                                          v1151 = (v1150 - HIDWORD(v1812) - 19032) ^ v1149;
                                          v1152 = (v1410 * (v1151 ^ v1139)) ^ __ROR4__(v1151, 10) ^ v1150;
                                          v1153 = __ROR4__(v1152, 3) ^ (v1138 * __ROL4__(v1152 ^ 0x4A58, 6)) ^ v1151;
                                          v1154 = (19032 * (__ROR4__(v1153, 15) - v1139)) ^ v1152;
                                          v1155 = (v1154 >> 15) ^ (19032 * __ROL4__(v1154 - v1138, 3)) ^ (v1154 >> 1) ^ (19032 * (v1154 ^ v1139)) ^ v1153;
                                          v1156 = (WORD1(v1812) * (v1155 - v1138) - (v1155 >> 13)) ^ v1154;
                                          v1157 = __ROR4__(v1156, 11) ^ (v1138 * __ROR4__(-1313519016 - v1156, 9)) ^ v1155;
                                          v1158 = (v1157 - v1139 + 1313519016) ^ v1156;
                                          v1159 = (19032 * (v1410 ^ v1158) - __ROR4__(v1158, 7)) ^ v1157;
                                          v1160 = (WORD1(v1812) * __ROL4__(v1159 ^ v1139, 4) - __ROR4__(v1159, 16)) ^ v1158;
                                          v1161 = (__ROR4__(v1160, 4) + v1138 * __ROR4__(-1313519016 - v1160, 10)) ^ v1159;
                                          v1134 += 8;
                                          v1162 = __ROR4__(v1161, 9) ^ (v1139 * __ROR4__(v1161 + 1313519016, 4)) ^ v1160;
                                          v1163 = (19032 * __ROL4__(HIDWORD(v1812) ^ v1162, 8) - __ROL4__(v1162, 2)) ^ v1161;
                                          v1164 = (WORD1(v1812) * __ROR4__(HIDWORD(v1812) - v1163, 11)
                                                 - __ROR4__(v1163, 12)) ^ v1162;
                                          v1165 = (v1164 >> 8) ^ (v1138 * (WORD1(v1812) ^ v1164)) ^ v1163;
                                          v1137 += 8;
                                          v1611 = v1136 ^ v1165;
                                          v1612 = v1135 ^ v1165 ^ v1164 ^ HIDWORD(v1812) ^ 0xB1B54A58;
                                          v1136 = v1140;
                                          *(v1134 - 12) = v1611;
                                          v1135 = v1141;
                                          v1611 = __ROR4__(v1611, 8);
                                          *(v1134 - 8) = v1612;
                                          v1612 = __ROR4__(v1612, 8);
                                          *(v1134 - 13) = v1611;
                                          v1611 = __ROR4__(v1611, 8);
                                          *(v1134 - 9) = v1612;
                                          v1612 = __ROR4__(v1612, 8);
                                          *(v1134 - 14) = v1611;
                                          v1611 = __ROR4__(v1611, 8);
                                          *(v1134 - 10) = v1612;
                                          v1612 = __ROR4__(v1612, 8);
                                          *(v1134 - 15) = v1611;
                                          *(v1134 - 11) = v1612;
                                          v1123 = __ROR4__(v1611, 8);
                                          v1120 = __ROR4__(v1612, 8);
                                          v1611 = v1123;
                                          v1612 = v1120;
                                          --v1133;
                                        }
                                        while ( v1133 );
                                        v84 = v1498;
                                        v1108 = (unsigned __int64)v1463;
                                        v1106 = (_QWORD *)v1475;
                                        v1109 = v1539;
                                      }
                                      v1166 = v1108 + 8;
                                      *(_QWORD *)((char *)v1109 + v1108) = v1451;
                                      v1720 = v1109;
                                      v1716 = &qword_1801B26E0;
                                      v1721 = (_QWORD *)(v1108 + 8);
                                      v1717 = 8LL;
                                      v1718 = &unk_1801B2640;
                                      v1719 = 160LL;
                                      v1167 = GetProcessHeap();
                                      v1168 = HeapAlloc(v1167, 8u, 0x30uLL);
                                      v1169 = v1168;
                                      if ( v1168 )
                                      {
                                        *v1168 = v1166;
                                        v1170 = GetProcessHeap();
                                        v1171 = HeapAlloc(v1170, 8u, v1166);
                                        if ( v1171 )
                                        {
                                          *((_QWORD *)v1169 + 1) = v1171;
                                          memcpy_0(v1171, v1109, v1166);
                                          v1169[4] = 160;
                                          v1172 = GetProcessHeap();
                                          v1173 = HeapAlloc(v1172, 8u, 0xA0uLL);
                                          if ( v1173 )
                                          {
                                            *((_QWORD *)v1169 + 3) = v1173;
                                            *v1173 = unk_1801B2640;
                                            v1173[1] = *((_OWORD *)&unk_1801B2640 + 1);
                                            v1173[2] = *((_OWORD *)&unk_1801B2640 + 2);
                                            v1173[3] = *((_OWORD *)&unk_1801B2640 + 3);
                                            v1173[4] = *((_OWORD *)&unk_1801B2640 + 4);
                                            v1173[5] = *((_OWORD *)&unk_1801B2640 + 5);
                                            v1173[6] = *((_OWORD *)&unk_1801B2640 + 6);
                                            v1173[7] = *((_OWORD *)&unk_1801B2640 + 7);
                                            v1173[8] = *((_OWORD *)&unk_1801B2640 + 8);
                                            v1173[9] = *((_OWORD *)&unk_1801B2640 + 9);
                                            v1169[8] = 8;
                                            v1174 = GetProcessHeap();
                                            v1175 = HeapAlloc(v1174, 8u, 8uLL);
                                            if ( v1175 )
                                            {
                                              *((_QWORD *)v1169 + 5) = v1175;
                                              v1107 = 0;
                                              *v1175 = qword_1801B26E0;
                                              v1106 = v1169;
                                              goto LABEL_1666;
                                            }
                                          }
                                        }
                                        v1176 = (void *)*((_QWORD *)v1169 + 1);
                                        if ( v1176 )
                                        {
                                          v1177 = GetProcessHeap();
                                          HeapFree(v1177, 0, v1176);
                                          *((_QWORD *)v1169 + 1) = 0LL;
                                        }
                                        v1178 = (void *)*((_QWORD *)v1169 + 3);
                                        if ( v1178 )
                                        {
                                          v1179 = GetProcessHeap();
                                          HeapFree(v1179, 0, v1178);
                                          *((_QWORD *)v1169 + 3) = 0LL;
                                        }
                                        v1180 = (void *)*((_QWORD *)v1169 + 5);
                                        if ( v1180 )
                                        {
                                          v1181 = GetProcessHeap();
                                          HeapFree(v1181, 0, v1180);
                                          *((_QWORD *)v1169 + 5) = 0LL;
                                        }
                                        v1182 = GetProcessHeap();
                                        HeapFree(v1182, 0, v1169);
                                      }
                                      v1107 = -1073741801;
LABEL_1666:
                                      v1097 = v1536;
                                      if ( v1107 >= 0 )
                                      {
                                        v1713 = v1106;
                                        v1106 = 0LL;
                                      }
                                      goto LABEL_1670;
                                    }
                                    v1097 = v1536;
                                  }
                                  v1107 = -1073741823;
LABEL_1670:
                                  v1183 = v1720;
                                  if ( v1720 )
                                  {
                                    v1184 = GetProcessHeap();
                                    HeapFree(v1184, 0, v1183);
                                    v1720 = 0LL;
                                    v1097 = 0LL;
                                  }
                                  if ( v1106 )
                                  {
                                    v1185 = (void *)v1106[1];
                                    if ( v1185 )
                                    {
                                      v1186 = GetProcessHeap();
                                      HeapFree(v1186, 0, v1185);
                                      v1106[1] = 0LL;
                                    }
                                    v1187 = (void *)v1106[3];
                                    if ( v1187 )
                                    {
                                      v1188 = GetProcessHeap();
                                      HeapFree(v1188, 0, v1187);
                                      v1106[3] = 0LL;
                                    }
                                    v1189 = (void *)v1106[5];
                                    if ( v1189 )
                                    {
                                      v1190 = GetProcessHeap();
                                      HeapFree(v1190, 0, v1189);
                                      v1106[5] = 0LL;
                                    }
                                    v1191 = GetProcessHeap();
                                    HeapFree(v1191, 0, v1106);
                                    v1097 = v1536;
                                  }
                                  goto LABEL_1680;
                                }
                              }
                            }
                          }
LABEL_1579:
                          v7 = 4LL;
                          goto LABEL_1580;
                        }
LABEL_1991:
                        v7 = 4LL;
                        goto LABEL_1580;
                      }
                    }
                  }
                }
                v7 = v475;
                goto LABEL_1580;
              }
              v1513 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10F8[0])(0LL, 0LL, 1027LL);
              if ( !v1513 )
              {
                GetLastError();
                goto LABEL_766;
              }
              v484 = off_1801B1098[0]();
              v485 = dword_1801B3150;
              qword_1801B31E8 = v484;
              v1412 = dword_1801B3150;
              memset_0(&v1795, 0, 0x70uLL);
              v486 = 1;
              v1745 = 0LL;
              v1746 = 0LL;
              v1571 = 1;
              v1518 = 0LL;
              memset_0(v1833, 0, 0x2CuLL);
              v1536 = 0LL;
              while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
                ;
              v487 = dword_1801B31F0;
              if ( dword_1801B31F0 )
                goto LABEL_832;
              v1387 = 0;
              v488 = 0;
              v1405 = 0;
              v1682 = 0LL;
              v1683 = 0LL;
              v489 = operator new(0x338uLL);
              v490 = v489;
              if ( v489 )
              {
                v491 = 0;
                v1573 = 0;
                v492 = 0;
                v1572 = 0;
                v493 = 0;
                v494 = (char *)&unk_18015E562;
                v495 = -1;
                v496 = v489 + 7;
                v497 = 103LL;
                do
                {
                  v498 = (unsigned __int8)*(v494 - 1);
                  v499 = (unsigned __int8)*(v494 - 2);
                  v500 = (unsigned __int8)v494[2];
                  v494 += 8;
                  v501 = (unsigned __int8)*(v494 - 7) | (((unsigned __int8)*(v494 - 8) | ((v498 | (v499 << 8)) << 8)) << 8);
                  v502 = v501 ^ v493;
                  v503 = (unsigned __int8)*(v494 - 3) | (((unsigned __int8)*(v494 - 4) | (((unsigned __int8)*(v494 - 5) | (v500 << 8)) << 8)) << 8);
                  v504 = v491 ^ v503 ^ v502 ^ 0xAC987321;
                  v505 = (__ROL4__(v504, 10) + 4991 * __ROL4__(v504 + 1419157410, 5)) ^ v502;
                  v506 = (43881 * __ROR4__(v505 + 133239679, 9) - __ROL4__(v505, 2)) ^ v504;
                  v507 = (24670 * v506 - (v506 >> 13) - 123127970) ^ v505;
                  v508 = (2033 * __ROL4__(v507 ^ 0xAB69, 6) - __ROL4__(v507, 2)) ^ v506;
                  v509 = (133239679 - (v508 ^ 0xAB69605E)) ^ v507;
                  v510 = (43881 * (v509 ^ 0x137F)) ^ __ROR4__(v509, 6) ^ v508;
                  v511 = (__ROL4__(v510, 2) + 24670 * __ROR4__(v510 + 133239679, 15)) ^ v509;
                  v512 = (2033 * __ROR4__(v511 + 1419157410, 14) - __ROL4__(v511, 8)) ^ v510;
                  v513 = __ROR4__(v512, 10) ^ (4991 * __ROR4__(v512 ^ 0xAB69605E, 12)) ^ v511;
                  v514 = v512 ^ (v513 >> 10) ^ (43881 * (v513 ^ 0x7F1));
                  v515 = (2033 * (__ROR4__(~v514, 5) + 24670)) ^ v513;
                  v516 = v514 ^ (v515 - 2033) ^ 0xAB69605E;
                  v517 = ((v516 >> 2) + 4991 * __ROL4__(v514 ^ (v515 - 2033) ^ 0xAB6967AF, 2)) ^ v515;
                  v518 = (__ROL4__(v517, 7) + 43881 * __ROR4__(v517 - 133239679, 6)) ^ v516;
                  v519 = (24670 * (v518 ^ 0x137F) + __ROR4__(v518, 9)) ^ v517;
                  v520 = (__ROL4__(v519, 7) + 2033 * __ROL4__(v519 ^ 0xAB69, 5)) ^ v518;
                  v521 = v520 ^ v519 ^ 0xAC987321;
                  v522 = (4991 * __ROR4__(v521, 3) - 219010071) ^ v520;
                  v523 = (24670 * __ROR4__(v522 - 133239679, 1) - __ROR4__(v522, 6)) ^ v521;
                  v524 = (__ROL4__(v523, 14) + 2033 * __ROL4__(v523 - 1419157410, 3)) ^ v522;
                  v525 = (4991 * __ROL4__(v524 - 1419157410, 15) - __ROR4__(v524, 14)) ^ v523;
                  v496 += 8;
                  v526 = (v525 >> 3) ^ (43881 * (v525 ^ 0x605E)) ^ v524;
                  v1572 = v495 ^ v526;
                  v495 = v503;
                  v527 = v492 ^ __ROL4__(v526, 2) ^ (24670 * __ROL4__(v526 ^ 0x7F1137F, 4));
                  v492 = v501;
                  v1573 = v527 ^ v525;
                  *(v496 - 12) = v527 ^ v525;
                  v1573 = __ROR4__(v1573, 8);
                  *(v496 - 8) = v1572;
                  v1572 = __ROR4__(v1572, 8);
                  *(v496 - 13) = v1573;
                  v1573 = __ROR4__(v1573, 8);
                  *(v496 - 9) = v1572;
                  v1572 = __ROR4__(v1572, 8);
                  *(v496 - 14) = v1573;
                  v1573 = __ROR4__(v1573, 8);
                  *(v496 - 10) = v1572;
                  v1572 = __ROR4__(v1572, 8);
                  *(v496 - 15) = v1573;
                  *(v496 - 11) = v1572;
                  v493 = __ROR4__(v1573, 8);
                  v491 = __ROR4__(v1572, 8);
                  v1573 = v493;
                  v1572 = v491;
                  --v497;
                }
                while ( v497 );
                v485 = v1412;
                LODWORD(v5) = 0;
                v84 = v1498;
                v528 = 0LL;
                v529 = 0LL;
                v530 = 0LL;
                do
                {
                  v529 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v490[v528]), v529);
                  v531 = _mm_loadu_si128((const __m128i *)&v490[v528 + 16]);
                  v528 += 32LL;
                  v532 = _mm_xor_si128(v531, v530);
                  v530 = v532;
                }
                while ( v528 < 0x320 );
                v533 = _mm_xor_si128(v532, v529);
                v534 = _mm_xor_si128(v533, _mm_srli_si128(v533, 8));
                v535 = _mm_xor_si128(v534, _mm_srli_si128(v534, 4));
                v536 = _mm_xor_si128(v535, _mm_srli_si128(v535, 2));
                for ( n = _mm_cvtsi128_si32(_mm_xor_si128(v536, _mm_srli_si128(v536, 1))); v528 < 0x338; ++v528 )
                  n ^= v490[v528];
                if ( n == 64LL )
                {
                  v1682 = v490;
                  v1683 = 824LL;
                  v490[823] = 0;
                  memset_0(&unk_1801B3750, 0, 0x60uLL);
                  if ( *v490 )
                  {
                    while ( 1 )
                    {
                      v538 = (const WCHAR *)v490;
                      v539 = -1LL;
                      do
                        v59 = *(_WORD *)&v490[2 * v539++ + 2] == 0;
                      while ( !v59 );
                      v540 = &v490[2 * v539];
                      v541 = (char *)&unk_1801B3750 + 24 * v1405;
                      if ( !GetModuleHandleExW(0, v538, (HMODULE *)v541) )
                        break;
                      v488 = 0;
                      if ( **(_WORD **)v541 == 23117 )
                      {
                        v542 = *(int *)(*(_QWORD *)v541 + 60LL);
                        if ( (unsigned int)v542 < 0x10000000 )
                        {
                          v543 = *(_QWORD *)v541 + v542;
                          if ( v543 >= *(_QWORD *)v541 )
                          {
                            if ( *(_DWORD *)v543 == 17744 )
                            {
                              if ( ((*(_WORD *)(v543 + 24) - 267) & 0xFEFF) != 0 )
                              {
                                v488 = -1073741811;
                              }
                              else
                              {
                                *(_QWORD *)(v541 + 12) = *(_QWORD *)(v543 + 136);
                                *((_DWORD *)v541 + 2) = *(_DWORD *)(v543 + 80);
                              }
                            }
                            else
                            {
                              v488 = -1073741701;
                            }
                          }
                          else
                          {
                            v488 = -1073741701;
                          }
                        }
                        else
                        {
                          v488 = -1073741701;
                        }
                      }
                      else
                      {
                        v488 = -1073741701;
                      }
                      v544 = *(_DWORD *)(v540 + 2);
                      v545 = 0;
                      v490 = v540 + 6;
                      v1399 = v544;
                      for ( ii = 0; v545 < v1399; ii = v545 )
                      {
                        v546 = v490;
                        v547 = -1LL;
                        do
                          ++v547;
                        while ( v490[v547] );
                        v490 += v547 + 1;
                        if ( v488 >= 0 )
                        {
                          v548 = GetProcAddress(*(HMODULE *)v541, v546);
                          if ( !v548 )
                            goto LABEL_819;
                          off_1801B1000[v1387] = v548;
                          v545 = ii;
                        }
                        ++v1387;
                        ++v545;
                      }
                      ++v1405;
                      if ( !*v490 )
                        goto LABEL_819;
                    }
                    v488 = -1073741702;
LABEL_819:
                    LODWORD(v5) = 0;
                  }
                  goto LABEL_820;
                }
                operator delete(v490);
              }
              v488 = -1073741702;
LABEL_820:
              if ( v1682 )
              {
                v549 = GetProcessHeap();
                HeapFree(v549, 0, v1682);
              }
              if ( v488 < 0 )
              {
                v550 = (HMODULE *)&unk_1801B3750;
                v551 = 4LL;
                do
                {
                  if ( *v550 )
                    FreeLibrary(*v550);
                  v550 += 3;
                  --v551;
                }
                while ( v551 );
                memset_0(&unk_1801B3750, 0, 0x60uLL);
                qword_1801B10D0 = 0LL;
                off_1801B1000[0] = sub_18013D300;
                off_1801B1008[0] = sub_18013D300;
                off_1801B1010[0] = sub_18013D300;
                off_1801B1018[0] = sub_18013D300;
                off_1801B1020[0] = sub_18013D300;
                off_1801B1028 = sub_18013D300;
                off_1801B1030[0] = sub_18013D300;
                off_1801B1038 = sub_18013D300;
                off_1801B1040[0] = CPolicyConfig::GetName;
                off_1801B1048 = CPolicyConfig::GetName;
                off_1801B1050[0] = sub_18013D300;
                off_1801B1058[0] = sub_18013D300;
                off_1801B1060[0] = sub_18013D300;
                off_1801B1068[0] = sub_18013D300;
                off_1801B1070[0] = sub_18013D300;
                off_1801B1078 = sub_18013D300;
                off_1801B1080 = CPolicyConfig::GetName;
                off_1801B1088[0] = sub_18013D300;
                off_1801B1090[0] = sub_18013D300;
                off_1801B1098[0] = sub_18013D300;
                off_1801B10A0[0] = sub_18013D300;
                off_1801B10A8[0] = sub_18013D300;
                off_1801B10B0[0] = sub_18013D300;
                off_1801B10B8[0] = sub_180043D80;
                off_1801B10C0[0] = sub_18013D300;
                off_1801B10C8 = sub_18013D300;
                off_1801B10D8 = CPolicyConfig::GetName;
                off_1801B10E0[0] = sub_18013D300;
                off_1801B10E8[0] = sub_18013D300;
                off_1801B10F0[0] = sub_18013D300;
                off_1801B10F8[0] = sub_18013D300;
                off_1801B1100 = sub_18013D300;
                off_1801B1108 = CPolicyConfig::GetName;
                off_1801B1110[0] = sub_18013D300;
                off_1801B1118[0] = sub_18013D300;
                off_1801B1120[0] = sub_18013D300;
                off_1801B1128[0] = sub_18013D300;
                off_1801B1130[0] = sub_18013D300;
                off_1801B1138 = sub_18013D300;
                v486 = 1;
                off_1801B1140[0] = CPolicyConfig::GetName;
                off_1801B1148[0] = CPolicyConfig::GetName;
                off_1801B1150 = CPolicyConfig::GetName;
                off_1801B1158 = CPolicyConfig::GetName;
                off_1801B1160[0] = sub_18013D300;
                off_1801B1168 = sub_18013D300;
LABEL_833:
                v1388 = 0;
                v1406 = 0;
                _InterlockedExchange(&dword_1801B3830, 0);
                v1865 = 0;
                v1755 = 0LL;
                v1756 = 0LL;
                v1757 = 0LL;
                v1747 = 0LL;
                v1748 = 0LL;
                v1866 = 0;
                v1684 = 0LL;
                while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
                  ;
                v552 = dword_1801B31F0;
                if ( dword_1801B31F0 )
                  goto LABEL_880;
                v1400 = 0;
                v553 = 0;
                ii = 0;
                v1685 = 0LL;
                v1686 = 0LL;
                v554 = operator new(0x338uLL);
                v555 = v554;
                if ( v554 )
                {
                  v556 = 0;
                  v1575 = 0;
                  v557 = 0;
                  v1574 = 0;
                  v558 = 0;
                  v559 = (char *)&unk_18015E562;
                  v560 = -1;
                  v561 = v554 + 7;
                  v562 = 103LL;
                  do
                  {
                    v563 = (unsigned __int8)*(v559 - 1);
                    v564 = (unsigned __int8)*(v559 - 2);
                    v565 = (unsigned __int8)v559[2];
                    v559 += 8;
                    v566 = (unsigned __int8)*(v559 - 7) | (((unsigned __int8)*(v559 - 8) | ((v563 | (v564 << 8)) << 8)) << 8);
                    v567 = v566 ^ v558;
                    v568 = (unsigned __int8)*(v559 - 3) | (((unsigned __int8)*(v559 - 4) | (((unsigned __int8)*(v559 - 5) | (v565 << 8)) << 8)) << 8);
                    v569 = v567 ^ v556 ^ v568 ^ 0xAC987321;
                    v570 = (__ROL4__(v569, 10) + 4991 * __ROL4__(v569 + 1419157410, 5)) ^ v567;
                    v571 = (43881 * __ROR4__(v570 + 133239679, 9) - __ROL4__(v570, 2)) ^ v569;
                    v572 = (24670 * v571 - (v571 >> 13) - 123127970) ^ v570;
                    v573 = (2033 * __ROL4__(v572 ^ 0xAB69, 6) - __ROL4__(v572, 2)) ^ v571;
                    v574 = (133239679 - (v573 ^ 0xAB69605E)) ^ v572;
                    v575 = (43881 * (v574 ^ 0x137F)) ^ __ROR4__(v574, 6) ^ v573;
                    v576 = (__ROL4__(v575, 2) + 24670 * __ROR4__(v575 + 133239679, 15)) ^ v574;
                    v577 = (2033 * __ROR4__(v576 + 1419157410, 14) - __ROL4__(v576, 8)) ^ v575;
                    v578 = __ROR4__(v577, 10) ^ (4991 * __ROR4__(v577 ^ 0xAB69605E, 12)) ^ v576;
                    v579 = v577 ^ (v578 >> 10) ^ (43881 * (v578 ^ 0x7F1));
                    v580 = (2033 * (__ROR4__(~v579, 5) + 24670)) ^ v578;
                    v581 = v579 ^ (v580 - 2033) ^ 0xAB69605E;
                    v582 = ((v581 >> 2) + 4991 * __ROL4__(v579 ^ (v580 - 2033) ^ 0xAB6967AF, 2)) ^ v580;
                    v583 = (__ROL4__(v582, 7) + 43881 * __ROR4__(v582 - 133239679, 6)) ^ v581;
                    v584 = (24670 * (v583 ^ 0x137F) + __ROR4__(v583, 9)) ^ v582;
                    v585 = (__ROL4__(v584, 7) + 2033 * __ROL4__(v584 ^ 0xAB69, 5)) ^ v583;
                    v586 = v584 ^ v585 ^ 0xAC987321;
                    v587 = (4991 * __ROR4__(v586, 3) - 219010071) ^ v585;
                    v588 = (24670 * __ROR4__(v587 - 133239679, 1) - __ROR4__(v587, 6)) ^ v586;
                    v589 = (__ROL4__(v588, 14) + 2033 * __ROL4__(v588 - 1419157410, 3)) ^ v587;
                    v590 = (4991 * __ROL4__(v589 - 1419157410, 15) - __ROR4__(v589, 14)) ^ v588;
                    v561 += 8;
                    v591 = (v590 >> 3) ^ (43881 * (v590 ^ 0x605E)) ^ v589;
                    v1574 = v560 ^ v591;
                    v560 = v568;
                    v592 = v557 ^ __ROL4__(v591, 2) ^ (24670 * __ROL4__(v591 ^ 0x7F1137F, 4));
                    v557 = v566;
                    v1575 = v592 ^ v590;
                    *(v561 - 12) = v592 ^ v590;
                    v1575 = __ROR4__(v1575, 8);
                    *(v561 - 8) = v1574;
                    v1574 = __ROR4__(v1574, 8);
                    *(v561 - 13) = v1575;
                    v1575 = __ROR4__(v1575, 8);
                    *(v561 - 9) = v1574;
                    v1574 = __ROR4__(v1574, 8);
                    *(v561 - 14) = v1575;
                    v1575 = __ROR4__(v1575, 8);
                    *(v561 - 10) = v1574;
                    v1574 = __ROR4__(v1574, 8);
                    *(v561 - 15) = v1575;
                    *(v561 - 11) = v1574;
                    v558 = __ROR4__(v1575, 8);
                    v556 = __ROR4__(v1574, 8);
                    v1575 = v558;
                    v1574 = v556;
                    --v562;
                  }
                  while ( v562 );
                  v485 = v1412;
                  LODWORD(v5) = 0;
                  v84 = v1498;
                  v593 = 0LL;
                  v594 = 0LL;
                  v595 = 0LL;
                  do
                  {
                    v594 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v555[v593]), v594);
                    v596 = _mm_loadu_si128((const __m128i *)&v555[v593 + 16]);
                    v593 += 32LL;
                    v597 = _mm_xor_si128(v596, v595);
                    v595 = v597;
                  }
                  while ( v593 < 0x320 );
                  v598 = _mm_xor_si128(v597, v594);
                  v599 = _mm_xor_si128(v598, _mm_srli_si128(v598, 8));
                  v600 = _mm_xor_si128(v599, _mm_srli_si128(v599, 4));
                  v601 = _mm_xor_si128(v600, _mm_srli_si128(v600, 2));
                  for ( jj = _mm_cvtsi128_si32(_mm_xor_si128(v601, _mm_srli_si128(v601, 1))); v593 < 0x338; ++v593 )
                    jj ^= v555[v593];
                  if ( jj == 64LL )
                  {
                    v1685 = v555;
                    v1686 = 824LL;
                    v555[823] = 0;
                    memset_0(&unk_1801B3750, 0, 0x60uLL);
                    if ( *v555 )
                    {
                      while ( 1 )
                      {
                        v603 = (const WCHAR *)v555;
                        v604 = -1LL;
                        do
                          v59 = *(_WORD *)&v555[2 * v604++ + 2] == 0;
                        while ( !v59 );
                        v605 = &v555[2 * v604];
                        v606 = (char *)&unk_1801B3750 + 24 * ii;
                        if ( !GetModuleHandleExW(0, v603, (HMODULE *)v606) )
                          break;
                        v553 = 0;
                        if ( **(_WORD **)v606 == 23117 )
                        {
                          v607 = *(int *)(*(_QWORD *)v606 + 60LL);
                          if ( (unsigned int)v607 < 0x10000000 )
                          {
                            v608 = *(_QWORD *)v606 + v607;
                            if ( v608 >= *(_QWORD *)v606 )
                            {
                              if ( *(_DWORD *)v608 == 17744 )
                              {
                                if ( ((*(_WORD *)(v608 + 24) - 267) & 0xFEFF) != 0 )
                                {
                                  v553 = -1073741811;
                                }
                                else
                                {
                                  *(_QWORD *)(v606 + 12) = *(_QWORD *)(v608 + 136);
                                  *((_DWORD *)v606 + 2) = *(_DWORD *)(v608 + 80);
                                }
                              }
                              else
                              {
                                v553 = -1073741701;
                              }
                            }
                            else
                            {
                              v553 = -1073741701;
                            }
                          }
                          else
                          {
                            v553 = -1073741701;
                          }
                        }
                        else
                        {
                          v553 = -1073741701;
                        }
                        v609 = *(_DWORD *)(v605 + 2);
                        v610 = 0;
                        v555 = v605 + 6;
                        v1413 = v609;
                        for ( kk = 0; v610 < v1413; kk = v610 )
                        {
                          v611 = v555;
                          v612 = -1LL;
                          do
                            ++v612;
                          while ( v555[v612] );
                          v555 += v612 + 1;
                          if ( v553 >= 0 )
                          {
                            v613 = GetProcAddress(*(HMODULE *)v606, v611);
                            if ( !v613 )
                              goto LABEL_867;
                            off_1801B1000[v1400] = v613;
                            v610 = kk;
                          }
                          ++v1400;
                          ++v610;
                        }
                        ++ii;
                        if ( !*v555 )
                          goto LABEL_867;
                      }
                      v553 = -1073741702;
LABEL_867:
                      LODWORD(v5) = 0;
                    }
                    goto LABEL_868;
                  }
                  operator delete(v555);
                }
                v553 = -1073741702;
LABEL_868:
                if ( v1685 )
                {
                  v614 = GetProcessHeap();
                  HeapFree(v614, 0, v1685);
                }
                if ( v553 < 0 )
                {
                  v615 = (HMODULE *)&unk_1801B3750;
                  v616 = 4LL;
                  do
                  {
                    if ( *v615 )
                      FreeLibrary(*v615);
                    v615 += 3;
                    --v616;
                  }
                  while ( v616 );
                  memset_0(&unk_1801B3750, 0, 0x60uLL);
                  qword_1801B10D0 = 0LL;
                  off_1801B1000[0] = sub_18013D300;
                  off_1801B1008[0] = sub_18013D300;
                  off_1801B1010[0] = sub_18013D300;
                  off_1801B1018[0] = sub_18013D300;
                  off_1801B1020[0] = sub_18013D300;
                  off_1801B1028 = sub_18013D300;
                  off_1801B1030[0] = sub_18013D300;
                  off_1801B1038 = sub_18013D300;
                  off_1801B1040[0] = CPolicyConfig::GetName;
                  off_1801B1048 = CPolicyConfig::GetName;
                  off_1801B1050[0] = sub_18013D300;
                  off_1801B1058[0] = sub_18013D300;
                  off_1801B1060[0] = sub_18013D300;
                  off_1801B1068[0] = sub_18013D300;
                  off_1801B1070[0] = sub_18013D300;
                  off_1801B1078 = sub_18013D300;
                  off_1801B1080 = CPolicyConfig::GetName;
                  off_1801B1088[0] = sub_18013D300;
                  off_1801B1090[0] = sub_18013D300;
                  off_1801B1098[0] = sub_18013D300;
                  off_1801B10A0[0] = sub_18013D300;
                  off_1801B10A8[0] = sub_18013D300;
                  off_1801B10B0[0] = sub_18013D300;
                  off_1801B10B8[0] = sub_180043D80;
                  off_1801B10C0[0] = sub_18013D300;
                  off_1801B10C8 = sub_18013D300;
                  off_1801B10D8 = CPolicyConfig::GetName;
                  off_1801B10E0[0] = sub_18013D300;
                  off_1801B10E8[0] = sub_18013D300;
                  off_1801B10F0[0] = sub_18013D300;
                  off_1801B10F8[0] = sub_18013D300;
                  off_1801B1100 = sub_18013D300;
                  off_1801B1108 = CPolicyConfig::GetName;
                  off_1801B1110[0] = sub_18013D300;
                  off_1801B1118[0] = sub_18013D300;
                  off_1801B1120[0] = sub_18013D300;
                  off_1801B1128[0] = sub_18013D300;
                  off_1801B1130[0] = sub_18013D300;
                  off_1801B1138 = sub_18013D300;
                  v486 = 1;
                  off_1801B1140[0] = CPolicyConfig::GetName;
                  off_1801B1148[0] = CPolicyConfig::GetName;
                  off_1801B1150 = CPolicyConfig::GetName;
                  off_1801B1158 = CPolicyConfig::GetName;
                  off_1801B1160[0] = sub_18013D300;
                  off_1801B1168 = sub_18013D300;
LABEL_881:
                  _InterlockedExchange(&dword_1801B3830, 0);
                  memset_0(&v1795, 0, 0x70uLL);
                  v1745 = 0LL;
                  v1414 = v485 & 0xF;
                  LOWORD(v1865) = (v485 >> 4) & 0xF;
                  HIWORD(v1865) = (v485 >> 8) & 0xF;
                  v1866 = (v485 >> 12) & 0xF;
                  v1467 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10F8[0])(0LL, 0LL, 1027LL);
                  v1401 = -1;
                  if ( !v1467 )
                  {
                    v617 = GetLastError();
                    v618 = v617;
                    if ( v617 > 0 )
                      v618 = (unsigned __int16)v617 | 0x80070000;
                    if ( v618 >= 0 )
                      v618 = -2147467259;
LABEL_1272:
                    while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
                      ;
                    v852 = dword_1801B31F0;
                    if ( dword_1801B31F0 > 0 )
                    {
                      --dword_1801B31F0;
                      if ( v852 == 1 )
                      {
                        v853 = (HMODULE *)&unk_1801B3750;
                        v854 = 4LL;
                        do
                        {
                          if ( *v853 )
                            FreeLibrary(*v853);
                          v853 += 3;
                          --v854;
                        }
                        while ( v854 );
                        memset_0(&unk_1801B3750, 0, 0x60uLL);
                        qword_1801B10D0 = 0LL;
                        off_1801B1000[0] = sub_18013D300;
                        off_1801B1008[0] = sub_18013D300;
                        off_1801B1010[0] = sub_18013D300;
                        off_1801B1018[0] = sub_18013D300;
                        off_1801B1020[0] = sub_18013D300;
                        off_1801B1028 = sub_18013D300;
                        off_1801B1030[0] = sub_18013D300;
                        off_1801B1038 = sub_18013D300;
                        off_1801B1040[0] = CPolicyConfig::GetName;
                        off_1801B1048 = CPolicyConfig::GetName;
                        off_1801B1050[0] = sub_18013D300;
                        off_1801B1058[0] = sub_18013D300;
                        off_1801B1060[0] = sub_18013D300;
                        off_1801B1068[0] = sub_18013D300;
                        off_1801B1070[0] = sub_18013D300;
                        off_1801B1078 = sub_18013D300;
                        off_1801B1080 = CPolicyConfig::GetName;
                        off_1801B1088[0] = sub_18013D300;
                        off_1801B1090[0] = sub_18013D300;
                        off_1801B1098[0] = sub_18013D300;
                        off_1801B10A0[0] = sub_18013D300;
                        off_1801B10A8[0] = sub_18013D300;
                        off_1801B10B0[0] = sub_18013D300;
                        off_1801B10B8[0] = sub_180043D80;
                        off_1801B10C0[0] = sub_18013D300;
                        off_1801B10C8 = sub_18013D300;
                        off_1801B10D8 = CPolicyConfig::GetName;
                        off_1801B10E0[0] = sub_18013D300;
                        off_1801B10E8[0] = sub_18013D300;
                        off_1801B10F0[0] = sub_18013D300;
                        off_1801B10F8[0] = sub_18013D300;
                        off_1801B1100 = sub_18013D300;
                        off_1801B1108 = CPolicyConfig::GetName;
                        off_1801B1110[0] = sub_18013D300;
                        off_1801B1118[0] = sub_18013D300;
                        off_1801B1120[0] = sub_18013D300;
                        off_1801B1128[0] = sub_18013D300;
                        off_1801B1130[0] = sub_18013D300;
                        v486 = 1;
                        off_1801B1138 = sub_18013D300;
                        off_1801B1140[0] = CPolicyConfig::GetName;
                        off_1801B1148[0] = CPolicyConfig::GetName;
                        off_1801B1150 = CPolicyConfig::GetName;
                        off_1801B1158 = CPolicyConfig::GetName;
                        off_1801B1160[0] = sub_18013D300;
                        off_1801B1168 = sub_18013D300;
                      }
                    }
                    _InterlockedExchange(&dword_1801B3830, 0);
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1684);
                    if ( v618 < 0 )
                    {
                      v856 = v1513;
                      goto LABEL_1483;
                    }
                    v855 = v1745;
                    v1693 = v1745;
                    memset_0(v1766, 0, 0x68uLL);
                    v856 = v1513;
                    v857 = ((__int64 (__fastcall *)(__int64, __int64))off_1801B1050[0])(v1513, 7LL);
                    if ( !v857
                      || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(v857, 104LL, v1766)
                      || v1769 != 32
                      || !v1770
                      || v1767 <= 0
                      || v1768 <= 0 )
                    {
                      v486 = 0;
                    }
                    v1571 = v486;
                    if ( v486 || v1414 == 1 )
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801B1150)(&v1804, v855, HIDWORD(v1693));
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801B1150)(&v1805, v855, HIDWORD(v1693));
                      v858 = v1414;
                      if ( v1414 == 1 )
                        v1536 = (LPVOID)off_1801B1028();
                    }
                    else
                    {
                      v858 = v1414;
                    }
                    v1390 = ((__int64 (__fastcall *)(__int64, __int64))off_1801B1080)(v1513, 1LL);
                    v859 = 2064;
                    if ( v1795 )
                      v859 = 133138;
                    v1408 = v859;
                    if ( v1571 )
                    {
                      v860 = v1797;
                      v1382 = v1796;
                      v1468 = v1800;
                      v1456 = (unsigned __int16 *)v1797;
                      memset_0(v1771, 0, 0x68uLL);
                      memset_0(v1775, 0, 0x68uLL);
                      v861 = 0;
                      v1484 = 0LL;
                      v1394 = 0;
                      memset_0(v1836, 0, 0x2CuLL);
                      v1814 = 0LL;
                      v1815 = 0LL;
                      if ( !v860 )
                        goto LABEL_1443;
                      v862 = ((__int64 (__fastcall *)(__int64, __int64))off_1801B1050[0])(v1513, 7LL);
                      if ( !v862 )
                        goto LABEL_1379;
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(
                             v862,
                             104LL,
                             v1771) )
                      {
                        LODWORD(v5) = v1772;
                        v861 = v1773;
                        v1484 = v1774;
                        v1394 = v1772;
                      }
                      v863 = ((__int64 (__fastcall *)(__int64))off_1801B1010[0])(v1513);
                      if ( !v863 )
                      {
                        GetLastError();
LABEL_1302:
                        v856 = v1513;
                        goto LABEL_1443;
                      }
                      v1694 = 0LL;
                      v864 = 0;
                      memset_0(v1836, 0, 0x2CuLL);
                      v1836[1] = DWORD2(v1804) - v1804;
                      v1836[2] = DWORD1(v1804) - HIDWORD(v1804);
                      v1837 = 1;
                      v1838 = 32;
                      v1836[0] = 40;
                      v865 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B1018[0])(
                               v863,
                               v1836,
                               0LL,
                               &v1694,
                               0LL,
                               0);
                      v1433 = (unsigned __int16 *)v865;
                      if ( v865 )
                      {
                        v867 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(v865, 104LL, v1775);
                        v868 = 0LL;
                        if ( v867 )
                          v868 = v1776;
                        LODWORD(v1815) = DWORD2(v1804) - v1804;
                        HIDWORD(v1815) = HIDWORD(v1804) - DWORD1(v1804);
                        v1419 = v868;
                        ((void (__fastcall *)(__int64, unsigned __int16 *))off_1801B1078)(v863, v1433);
                        ((void (__fastcall *)(__int64, __int64))off_1801B1080)(v863, 1LL);
                        v1469 = ((__int64 (__fastcall *)(__int64, SIZE_T))off_1801B1078)(v863, v1468);
                        v869 = ((__int64 (__fastcall *)(_QWORD))off_1801B1070[0])(0LL);
                        ((void (__fastcall *)(__int64, __int64 *, __int64))off_1801B10E8[0])(v863, &v1814, v869);
                        ((void (__fastcall *)(__int64, unsigned __int16 *, __int64, __int64 *, int, _QWORD))off_1801B10D8)(
                          v863,
                          v1456,
                          0xFFFFFFFFLL,
                          &v1814,
                          v1408,
                          0LL);
                        if ( v1414 == 1 )
                        {
                          if ( v1382 )
                            v1383 = ((__int64 (__fastcall *)(__int64))off_1801B1118[0])(8LL);
                          else
                            v1383 = 0xFFFFFF;
                        }
                        else
                        {
                          v1383 = -5723992;
                        }
                        v870 = 0;
                        v871 = -(int)v1804;
                        v872 = 0;
                        if ( (int)v1804 >= 0 )
                        {
                          v872 = v1804;
                          v871 = 0;
                        }
                        v873 = -DWORD1(v1804);
                        if ( (SDWORD1(v1804) & 0x80000000) == 0 )
                        {
                          v873 = 0;
                          v870 = DWORD1(v1804);
                        }
                        v874 = v1815 - v871;
                        if ( (int)v1815 - v871 >= (int)v5 - v872 )
                          v874 = v5 - v872;
                        v875 = HIDWORD(v1815) - v873;
                        v876 = v861 - v870;
                        if ( HIDWORD(v1815) - v873 >= v876 )
                          v875 = v876;
                        if ( v874 > 0 && v875 > 0 )
                        {
                          v877 = (unsigned __int16 *)(v1419 + 4 * (v871 + (__int64)(v873 * (int)v1815)));
                          v1457 = v877;
                          v1420 = 2LL * (int)v1815;
                          v878 = &v1484[2 * v872 + 2 * (__int64)(v870 * v1394)];
                          v879 = 2LL * v1394;
                          v1485 = v878;
                          v1395 = 0;
                          do
                          {
                            v880 = 0;
                            v1493 = 0;
                            v881 = (unsigned __int8 *)(v877 + 1);
                            v882 = (char *)v878 - (char *)v877;
                            do
                            {
                              if ( (unsigned __int8)((*v881 + *(v881 - 2) + 2 * (unsigned int)*(v881 - 1)) >> 2) != 0xFF )
                              {
                                v883 = (unsigned __int8)~((*v881 + *(v881 - 2) + 2 * (unsigned int)*(v881 - 1)) >> 2);
                                v881[v882] -= ~((*v881 + *(v881 - 2) + 2 * (unsigned int)*(v881 - 1)) >> 2)
                                            * (v1383 - v881[v882]);
                                v884 = v881[v882 - 1];
                                v885 = (unsigned __int64)(2155905153LL * v883 * (BYTE1(v1383) - v884)) >> 32;
                                v881[v882 - 1] = v884 + (v885 >> 7 < 0) + (v885 >> 7);
                                v886 = v881[v882 - 2];
                                v887 = (unsigned __int64)(2155905153LL * v883 * (BYTE2(v1383) - v886)) >> 32;
                                v881[v882 - 2] = v886 + (v887 >> 7 < 0) + (v887 >> 7);
                                v888 = v881[v882 + 1];
                                v889 = v883 * (255 - v888);
                                v880 = v1493;
                                v881[v882 + 1] = v888 + v889 / 255;
                              }
                              ++v880;
                              v881 += 4;
                              v1493 = v880;
                            }
                            while ( v880 < v874 );
                            v890 = v1395;
                            v877 = &v1457[v1420];
                            v878 = &v1485[v879];
                            v1457 = (unsigned __int16 *)((char *)v1457 + v1420 * 2);
                            v1485 = (unsigned __int16 *)((char *)v1485 + v879 * 2);
                            ++v1395;
                          }
                          while ( v890 + 1 < v875 );
                        }
                        ((void (__fastcall *)(unsigned __int16 *))off_1801B1038)(v1433);
                        if ( v1469 )
                          ((void (__fastcall *)(__int64, SIZE_T))off_1801B1078)(v863, v1469);
                      }
                      else
                      {
                        v866 = GetLastError();
                        v864 = v866;
                        if ( v866 > 0 )
                          v864 = (unsigned __int16)v866 | 0x80070000;
                        if ( v864 >= 0 )
                          v864 = -2147467259;
                      }
                      ((void (__fastcall *)(__int64))off_1801B1030[0])(v863);
                      if ( v864 < 0 )
                        goto LABEL_1302;
                      v891 = v1798;
                      v1384 = v1796;
                      v1470 = (SIZE_T)v1801;
                      v1458 = (unsigned __int16 *)v1798;
                      memset_0(v1777, 0, 0x68uLL);
                      memset_0(v1781, 0, 0x68uLL);
                      v892 = 0;
                      v1486 = 0LL;
                      v893 = 0;
                      v1396 = 0;
                      v1494 = 0;
                      memset_0(v1839, 0, 0x2CuLL);
                      v856 = v1513;
                      v1816 = 0LL;
                      v1817 = 0LL;
                      if ( !v891 )
                      {
LABEL_1443:
                        if ( v1536 )
                          ((void (__fastcall *)(LPVOID))off_1801B1038)(v1536);
LABEL_1483:
                        if ( v1797 )
                        {
                          v991 = -1LL;
                          do
                            v59 = *((_WORD *)v1797 + ++v991) == 0;
                          while ( !v59 );
                          memset(v1797, 0, 2 * v991 + 2);
                          operator delete(v1797);
                          v1797 = 0LL;
                        }
                        if ( v1798 )
                        {
                          v992 = -1LL;
                          do
                            v59 = *((_WORD *)v1798 + ++v992) == 0;
                          while ( !v59 );
                          memset(v1798, 0, 2 * v992 + 2);
                          operator delete(v1798);
                          v1798 = 0LL;
                        }
                        if ( v1799 )
                        {
                          v993 = -1LL;
                          do
                            v59 = *((_WORD *)v1799 + ++v993) == 0;
                          while ( !v59 );
                          memset(v1799, 0, 2 * v993 + 2);
                          operator delete(v1799);
                          v1799 = 0LL;
                        }
                        if ( v1800 )
                        {
                          off_1801B1038();
                          v1800 = 0LL;
                        }
                        if ( v1801 )
                        {
                          off_1801B1038();
                          v1801 = 0LL;
                        }
                        if ( v1802 )
                        {
                          off_1801B1038();
                          v1802 = 0LL;
                        }
                        while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
                          ;
                        v994 = dword_1801B31F0;
                        if ( dword_1801B31F0 > 0 )
                        {
                          --dword_1801B31F0;
                          if ( v994 == 1 )
                          {
                            v995 = (HMODULE *)&unk_1801B3750;
                            v996 = 4LL;
                            do
                            {
                              if ( *v995 )
                                FreeLibrary(*v995);
                              v995 += 3;
                              --v996;
                            }
                            while ( v996 );
                            memset_0(&unk_1801B3750, 0, 0x60uLL);
                            qword_1801B10D0 = 0LL;
                            off_1801B1000[0] = sub_18013D300;
                            off_1801B1008[0] = sub_18013D300;
                            off_1801B1010[0] = sub_18013D300;
                            off_1801B1018[0] = sub_18013D300;
                            off_1801B1020[0] = sub_18013D300;
                            off_1801B1028 = sub_18013D300;
                            off_1801B1030[0] = sub_18013D300;
                            off_1801B1038 = sub_18013D300;
                            off_1801B1040[0] = CPolicyConfig::GetName;
                            off_1801B1048 = CPolicyConfig::GetName;
                            off_1801B1050[0] = sub_18013D300;
                            off_1801B1058[0] = sub_18013D300;
                            off_1801B1060[0] = sub_18013D300;
                            off_1801B1068[0] = sub_18013D300;
                            off_1801B1070[0] = sub_18013D300;
                            off_1801B1078 = sub_18013D300;
                            off_1801B1080 = CPolicyConfig::GetName;
                            off_1801B1088[0] = sub_18013D300;
                            off_1801B1090[0] = sub_18013D300;
                            off_1801B1098[0] = sub_18013D300;
                            off_1801B10A0[0] = sub_18013D300;
                            off_1801B10A8[0] = sub_18013D300;
                            off_1801B10B0[0] = sub_18013D300;
                            off_1801B10B8[0] = sub_180043D80;
                            off_1801B10C0[0] = sub_18013D300;
                            off_1801B10C8 = sub_18013D300;
                            off_1801B10D8 = CPolicyConfig::GetName;
                            off_1801B10E0[0] = sub_18013D300;
                            off_1801B10E8[0] = sub_18013D300;
                            off_1801B10F0[0] = sub_18013D300;
                            off_1801B10F8[0] = sub_18013D300;
                            off_1801B1100 = sub_18013D300;
                            off_1801B1108 = CPolicyConfig::GetName;
                            off_1801B1110[0] = sub_18013D300;
                            off_1801B1118[0] = sub_18013D300;
                            off_1801B1120[0] = sub_18013D300;
                            off_1801B1128[0] = sub_18013D300;
                            off_1801B1130[0] = sub_18013D300;
                            off_1801B1138 = sub_18013D300;
                            off_1801B1140[0] = CPolicyConfig::GetName;
                            off_1801B1148[0] = CPolicyConfig::GetName;
                            off_1801B1150 = CPolicyConfig::GetName;
                            off_1801B1158 = CPolicyConfig::GetName;
                            off_1801B1160[0] = sub_18013D300;
                            off_1801B1168 = sub_18013D300;
                          }
                        }
                        _InterlockedExchange(&dword_1801B3830, 0);
                        v1439 = dword_1801B3150;
                        v997 = off_1801B1098[0]();
                        v1862 = 0;
                        v998 = v997 - qword_1801B31E8;
                        v1510 = v997 - qword_1801B31E8;
                        memset_0(v1863, 0, sizeof(v1863));
                        while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
                          ;
                        v999 = dword_1801B31F0;
                        if ( dword_1801B31F0 )
                          goto LABEL_1556;
                        v1427 = 0;
                        v1502 = 0;
                        v1702 = 0LL;
                        v1703 = 0LL;
                        v1000 = operator new(0x338uLL);
                        v1001 = v1000;
                        if ( v1000 )
                        {
                          v1002 = 0;
                          v1585 = 0;
                          v1003 = -1;
                          v1586 = 0;
                          v1004 = 0;
                          v1005 = v1000 + 7;
                          v1006 = 0;
                          v1007 = (char *)&unk_18015E562;
                          v1008 = 103LL;
                          do
                          {
                            v1009 = (unsigned __int8)*(v1007 - 1);
                            v1010 = (unsigned __int8)*(v1007 - 2);
                            v1011 = (unsigned __int8)v1007[2];
                            v1007 += 8;
                            v1012 = (unsigned __int8)*(v1007 - 7) | (((unsigned __int8)*(v1007 - 8) | ((v1009 | (v1010 << 8)) << 8)) << 8);
                            v1013 = v1012 ^ v1006;
                            v1014 = (unsigned __int8)*(v1007 - 3) | (((unsigned __int8)*(v1007 - 4) | (((unsigned __int8)*(v1007 - 5) | (v1011 << 8)) << 8)) << 8);
                            v1015 = v1013 ^ v1014 ^ v1004 ^ 0xAC987321;
                            v1016 = (__ROL4__(v1015, 10) + 4991 * __ROL4__(v1015 + 1419157410, 5)) ^ v1013;
                            v1017 = (43881 * __ROR4__(v1016 + 133239679, 9) - __ROL4__(v1016, 2)) ^ v1015;
                            v1018 = (24670 * v1017 - (v1017 >> 13) - 123127970) ^ v1016;
                            v1019 = (2033 * __ROL4__(v1018 ^ 0xAB69, 6) - __ROL4__(v1018, 2)) ^ v1017;
                            v1020 = (133239679 - (v1019 ^ 0xAB69605E)) ^ v1018;
                            v1021 = (43881 * (v1020 ^ 0x137F)) ^ __ROR4__(v1020, 6) ^ v1019;
                            v1022 = (__ROL4__(v1021, 2) + 24670 * __ROR4__(v1021 + 133239679, 15)) ^ v1020;
                            v1023 = (2033 * __ROR4__(v1022 + 1419157410, 14) - __ROL4__(v1022, 8)) ^ v1021;
                            v1024 = __ROR4__(v1023, 10) ^ (4991 * __ROR4__(v1023 ^ 0xAB69605E, 12)) ^ v1022;
                            v1025 = (v1024 >> 10) ^ (43881 * (v1024 ^ 0x7F1)) ^ v1023;
                            v1026 = (2033 * (__ROR4__(~v1025, 5) + 24670)) ^ v1024;
                            v1027 = v1025 ^ (v1026 - 2033) ^ 0xAB69605E;
                            v1028 = ((v1027 >> 2) + 4991 * __ROL4__(v1025 ^ (v1026 - 2033) ^ 0xAB6967AF, 2)) ^ v1026;
                            v1029 = (__ROL4__(v1028, 7) + 43881 * __ROR4__(v1028 - 133239679, 6)) ^ v1027;
                            v1030 = (24670 * (v1029 ^ 0x137F) + __ROR4__(v1029, 9)) ^ v1028;
                            v1031 = (__ROL4__(v1030, 7) + 2033 * __ROL4__(v1030 ^ 0xAB69, 5)) ^ v1029;
                            v1032 = v1030 ^ v1031 ^ 0xAC987321;
                            v1033 = (4991 * __ROR4__(v1032, 3) - 219010071) ^ v1031;
                            v1034 = (24670 * __ROR4__(v1033 - 133239679, 1) - __ROR4__(v1033, 6)) ^ v1032;
                            v1035 = (__ROL4__(v1034, 14) + 2033 * __ROL4__(v1034 - 1419157410, 3)) ^ v1033;
                            v1036 = (4991 * __ROL4__(v1035 - 1419157410, 15) - __ROR4__(v1035, 14)) ^ v1034;
                            v1005 += 8;
                            v1037 = (v1036 >> 3) ^ (43881 * (v1036 ^ 0x605E)) ^ v1035;
                            v1585 = v1003 ^ v1037;
                            v1003 = v1014;
                            v1038 = v1002 ^ __ROL4__(v1037, 2) ^ (24670 * __ROL4__(v1037 ^ 0x7F1137F, 4));
                            v1002 = v1012;
                            v1586 = v1038 ^ v1036;
                            *(v1005 - 12) = v1038 ^ v1036;
                            v1586 = __ROR4__(v1586, 8);
                            *(v1005 - 8) = v1585;
                            v1585 = __ROR4__(v1585, 8);
                            *(v1005 - 13) = v1586;
                            v1586 = __ROR4__(v1586, 8);
                            *(v1005 - 9) = v1585;
                            v1585 = __ROR4__(v1585, 8);
                            *(v1005 - 14) = v1586;
                            v1586 = __ROR4__(v1586, 8);
                            *(v1005 - 10) = v1585;
                            v1585 = __ROR4__(v1585, 8);
                            *(v1005 - 15) = v1586;
                            *(v1005 - 11) = v1585;
                            v1006 = __ROR4__(v1586, 8);
                            v1004 = __ROR4__(v1585, 8);
                            v1586 = v1006;
                            v1585 = v1004;
                            --v1008;
                          }
                          while ( v1008 );
                          v84 = v1498;
                          v1039 = 0LL;
                          v1040 = 0LL;
                          v1041 = 0;
                          v1042 = 0LL;
                          do
                          {
                            v1040 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1001[v1039]), v1040);
                            v1043 = _mm_loadu_si128((const __m128i *)&v1001[v1039 + 16]);
                            v1039 += 32LL;
                            v1044 = _mm_xor_si128(v1043, v1042);
                            v1042 = v1044;
                          }
                          while ( v1039 < 0x320 );
                          v1045 = _mm_xor_si128(v1040, v1044);
                          v1046 = _mm_xor_si128(v1045, _mm_srli_si128(v1045, 8));
                          v1047 = _mm_xor_si128(v1046, _mm_srli_si128(v1046, 4));
                          v1048 = _mm_xor_si128(v1047, _mm_srli_si128(v1047, 2));
                          for ( mm = _mm_cvtsi128_si32(_mm_xor_si128(v1048, _mm_srli_si128(v1048, 1)));
                                v1039 < 0x338;
                                ++v1039 )
                          {
                            mm ^= v1001[v1039];
                          }
                          if ( mm == 64LL )
                          {
                            v1702 = v1001;
                            v1703 = 824LL;
                            v1001[823] = 0;
                            memset_0(&unk_1801B3750, 0, 0x60uLL);
                            if ( *v1001 )
                            {
                              while ( 1 )
                              {
                                v1050 = (const WCHAR *)v1001;
                                v1051 = -1LL;
                                do
                                  v59 = *(_WORD *)&v1001[2 * v1051++ + 2] == 0;
                                while ( !v59 );
                                v1052 = &v1001[2 * v1051];
                                v1053 = (char *)&unk_1801B3750 + 24 * v1502;
                                if ( !GetModuleHandleExW(0, v1050, (HMODULE *)v1053) )
                                  break;
                                v1041 = 0;
                                if ( **(_WORD **)v1053 == 23117 )
                                {
                                  v1054 = *(int *)(*(_QWORD *)v1053 + 60LL);
                                  if ( (unsigned int)v1054 < 0x10000000 )
                                  {
                                    v1055 = *(_QWORD *)v1053 + v1054;
                                    if ( v1055 >= *(_QWORD *)v1053 )
                                    {
                                      if ( *(_DWORD *)v1055 == 17744 )
                                      {
                                        if ( ((*(_WORD *)(v1055 + 24) - 267) & 0xFEFF) != 0 )
                                        {
                                          v1041 = -1073741811;
                                        }
                                        else
                                        {
                                          *(_QWORD *)(v1053 + 12) = *(_QWORD *)(v1055 + 136);
                                          *((_DWORD *)v1053 + 2) = *(_DWORD *)(v1055 + 80);
                                        }
                                      }
                                      else
                                      {
                                        v1041 = -1073741701;
                                      }
                                    }
                                    else
                                    {
                                      v1041 = -1073741701;
                                    }
                                  }
                                  else
                                  {
                                    v1041 = -1073741701;
                                  }
                                }
                                else
                                {
                                  v1041 = -1073741701;
                                }
                                v1056 = *(_DWORD *)(v1052 + 2);
                                v1057 = 0;
                                v1001 = v1052 + 6;
                                for ( nn = v1056; v1057 < nn; ++v1057 )
                                {
                                  v1058 = v1001;
                                  v1059 = -1LL;
                                  do
                                    ++v1059;
                                  while ( v1001[v1059] );
                                  v1001 += v1059 + 1;
                                  if ( v1041 >= 0 )
                                  {
                                    v1060 = GetProcAddress(*(HMODULE *)v1053, v1058);
                                    if ( !v1060 )
                                      goto LABEL_1543;
                                    off_1801B1000[v1427] = v1060;
                                  }
                                  ++v1427;
                                }
                                ++v1502;
                                if ( !*v1001 )
                                  goto LABEL_1543;
                              }
                              v1041 = -1073741702;
                            }
LABEL_1543:
                            v998 = v1510;
                            goto LABEL_1544;
                          }
                          operator delete(v1001);
                          v998 = v1510;
                        }
                        v1041 = -1073741702;
LABEL_1544:
                        if ( v1702 )
                        {
                          v1061 = GetProcessHeap();
                          HeapFree(v1061, 0, v1702);
                        }
                        if ( v1041 < 0 )
                        {
                          v1062 = (HMODULE *)&unk_1801B3750;
                          v1063 = 4LL;
                          do
                          {
                            if ( *v1062 )
                              FreeLibrary(*v1062);
                            v1062 += 3;
                            --v1063;
                          }
                          while ( v1063 );
                          memset_0(&unk_1801B3750, 0, 0x60uLL);
                          off_1801B1000[0] = sub_18013D300;
                          off_1801B1008[0] = sub_18013D300;
                          off_1801B1010[0] = sub_18013D300;
                          off_1801B1018[0] = sub_18013D300;
                          off_1801B1020[0] = sub_18013D300;
                          off_1801B1028 = sub_18013D300;
                          off_1801B1030[0] = sub_18013D300;
                          off_1801B1038 = sub_18013D300;
                          off_1801B1040[0] = CPolicyConfig::GetName;
                          off_1801B1048 = CPolicyConfig::GetName;
                          off_1801B1050[0] = sub_18013D300;
                          off_1801B1058[0] = sub_18013D300;
                          off_1801B1060[0] = sub_18013D300;
                          off_1801B1068[0] = sub_18013D300;
                          off_1801B1070[0] = sub_18013D300;
                          off_1801B1078 = sub_18013D300;
                          off_1801B1080 = CPolicyConfig::GetName;
                          off_1801B1088[0] = sub_18013D300;
                          off_1801B1090[0] = sub_18013D300;
                          off_1801B1098[0] = sub_18013D300;
                          off_1801B10A0[0] = sub_18013D300;
                          off_1801B10A8[0] = sub_18013D300;
                          off_1801B10B0[0] = sub_18013D300;
                          off_1801B10B8[0] = sub_180043D80;
                          off_1801B10C0[0] = sub_18013D300;
                          off_1801B10C8 = sub_18013D300;
                          off_1801B10D8 = CPolicyConfig::GetName;
                          off_1801B10E0[0] = sub_18013D300;
                          off_1801B10E8[0] = sub_18013D300;
                          off_1801B10F0[0] = sub_18013D300;
                          off_1801B10F8[0] = sub_18013D300;
                          off_1801B1100 = sub_18013D300;
                          off_1801B1108 = CPolicyConfig::GetName;
                          off_1801B1110[0] = sub_18013D300;
                          off_1801B1118[0] = sub_18013D300;
                          off_1801B1120[0] = sub_18013D300;
                          off_1801B1128[0] = sub_18013D300;
                          qword_1801B10D0 = 0LL;
                          v856 = v1513;
                          off_1801B1130[0] = sub_18013D300;
                          off_1801B1138 = sub_18013D300;
                          off_1801B1140[0] = CPolicyConfig::GetName;
                          off_1801B1148[0] = CPolicyConfig::GetName;
                          off_1801B1150 = CPolicyConfig::GetName;
                          off_1801B1158 = CPolicyConfig::GetName;
                          off_1801B1160[0] = sub_18013D300;
                          off_1801B1168 = sub_18013D300;
                          goto LABEL_1557;
                        }
                        v999 = dword_1801B31F0;
                        v856 = v1513;
LABEL_1556:
                        dword_1801B31F0 = v999 + 1;
LABEL_1557:
                        _InterlockedExchange(&dword_1801B3830, 0);
                        v1863[12] = v1439;
                        v1064 = 4LL;
                        v1863[0] = v998;
                        v1862 = 1;
                        v1863[4] = -1721306479;
                        v1863[2] = 1;
                        v1863[8] = 1;
                        v1863[6] = 1;
                        v1863[10] = 1;
                        ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1801B10D0)(
                          0LL,
                          8225LL,
                          4LL,
                          &v1862);
                        while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
                          ;
                        v1065 = dword_1801B31F0;
                        if ( dword_1801B31F0 > 0 )
                        {
                          --dword_1801B31F0;
                          if ( v1065 == 1 )
                          {
                            v1066 = (HMODULE *)&unk_1801B3750;
                            do
                            {
                              if ( *v1066 )
                                FreeLibrary(*v1066);
                              v1066 += 3;
                              --v1064;
                            }
                            while ( v1064 );
                            memset_0(&unk_1801B3750, 0, 0x60uLL);
                            off_1801B1000[0] = sub_18013D300;
                            off_1801B1008[0] = sub_18013D300;
                            off_1801B1010[0] = sub_18013D300;
                            off_1801B1018[0] = sub_18013D300;
                            off_1801B1020[0] = sub_18013D300;
                            off_1801B1028 = sub_18013D300;
                            off_1801B1030[0] = sub_18013D300;
                            off_1801B1038 = sub_18013D300;
                            off_1801B1040[0] = CPolicyConfig::GetName;
                            off_1801B1048 = CPolicyConfig::GetName;
                            off_1801B1050[0] = sub_18013D300;
                            off_1801B1058[0] = sub_18013D300;
                            off_1801B1060[0] = sub_18013D300;
                            off_1801B1068[0] = sub_18013D300;
                            off_1801B1070[0] = sub_18013D300;
                            off_1801B1078 = sub_18013D300;
                            off_1801B1080 = CPolicyConfig::GetName;
                            off_1801B1088[0] = sub_18013D300;
                            off_1801B1090[0] = sub_18013D300;
                            off_1801B1098[0] = sub_18013D300;
                            off_1801B10A0[0] = sub_18013D300;
                            off_1801B10A8[0] = sub_18013D300;
                            off_1801B10B0[0] = sub_18013D300;
                            off_1801B10B8[0] = sub_180043D80;
                            off_1801B10C0[0] = sub_18013D300;
                            off_1801B10C8 = sub_18013D300;
                            off_1801B10D8 = CPolicyConfig::GetName;
                            off_1801B10E0[0] = sub_18013D300;
                            off_1801B10E8[0] = sub_18013D300;
                            off_1801B10F0[0] = sub_18013D300;
                            off_1801B10F8[0] = sub_18013D300;
                            off_1801B1100 = sub_18013D300;
                            off_1801B1108 = CPolicyConfig::GetName;
                            off_1801B1110[0] = sub_18013D300;
                            off_1801B1118[0] = sub_18013D300;
                            off_1801B1120[0] = sub_18013D300;
                            off_1801B1128[0] = sub_18013D300;
                            qword_1801B10D0 = 0LL;
                            off_1801B1130[0] = sub_18013D300;
                            off_1801B1138 = sub_18013D300;
                            off_1801B1140[0] = CPolicyConfig::GetName;
                            off_1801B1148[0] = CPolicyConfig::GetName;
                            off_1801B1150 = CPolicyConfig::GetName;
                            off_1801B1158 = CPolicyConfig::GetName;
                            off_1801B1160[0] = sub_18013D300;
                            off_1801B1168 = sub_18013D300;
                          }
                        }
                        _InterlockedExchange(&dword_1801B3830, 0);
                        ((void (__fastcall *)(_QWORD, __int64))off_1801B1160[0])(0LL, v856);
                        v1482 = v1539;
                        goto LABEL_766;
                      }
                      v894 = ((__int64 (__fastcall *)(__int64, __int64))off_1801B1050[0])(v1513, 7LL);
                      if ( !v894 )
                      {
LABEL_1379:
                        GetLastError();
                        goto LABEL_1443;
                      }
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(
                             v894,
                             104LL,
                             v1777) )
                      {
                        v893 = v1778;
                        v1486 = v1780;
                        v1494 = v1779;
                        v1396 = v1778;
                      }
                      v895 = ((__int64 (__fastcall *)(__int64))off_1801B1010[0])(v1513);
                      if ( !v895 )
                      {
                        GetLastError();
                        v856 = v1513;
                        goto LABEL_1443;
                      }
                      v1695 = 0LL;
                      memset_0(v1839, 0, 0x2CuLL);
                      v1839[1] = DWORD2(v1805) - v1805;
                      v1839[2] = DWORD1(v1805) - HIDWORD(v1805);
                      v1840 = 1;
                      v1841 = 32;
                      v1839[0] = 40;
                      v1434 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B1018[0])(
                                                    v895,
                                                    v1839,
                                                    0LL,
                                                    &v1695,
                                                    0LL,
                                                    0);
                      if ( !v1434 )
                      {
                        v896 = GetLastError();
                        v892 = v896;
                        if ( v896 > 0 )
                          v892 = (unsigned __int16)v896 | 0x80070000;
                        if ( v892 >= 0 )
                          v892 = -2147467259;
LABEL_1373:
                        ((void (__fastcall *)(__int64))off_1801B1030[0])(v895);
                        if ( v892 < 0 )
                          goto LABEL_1302;
                        v922 = 0LL;
                        v856 = v1513;
                        goto LABEL_1481;
                      }
                      v897 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_1801B1068[0])(
                               v1434,
                               104LL,
                               v1781);
                      v898 = 0LL;
                      if ( v897 )
                        v898 = v1782;
                      LODWORD(v1817) = DWORD2(v1805) - v1805;
                      HIDWORD(v1817) = HIDWORD(v1805) - DWORD1(v1805);
                      v1421 = v898;
                      ((void (__fastcall *)(__int64, unsigned __int16 *))off_1801B1078)(v895, v1434);
                      ((void (__fastcall *)(__int64, __int64))off_1801B1080)(v895, 1LL);
                      v1471 = ((__int64 (__fastcall *)(__int64, SIZE_T))off_1801B1078)(v895, v1470);
                      v899 = ((__int64 (__fastcall *)(_QWORD))off_1801B1070[0])(0LL);
                      ((void (__fastcall *)(__int64, __int64 *, __int64))off_1801B10E8[0])(v895, &v1816, v899);
                      ((void (__fastcall *)(__int64, unsigned __int16 *, __int64, __int64 *, int, _QWORD))off_1801B10D8)(
                        v895,
                        v1458,
                        0xFFFFFFFFLL,
                        &v1816,
                        v1408,
                        0LL);
                      if ( v1414 == 1 )
                      {
                        if ( !v1384 )
                        {
                          v1415 = 0xFFFFFF;
LABEL_1354:
                          v901 = 0;
                          v902 = -(int)v1805;
                          v903 = 0;
                          if ( (int)v1805 >= 0 )
                          {
                            v903 = v1805;
                            v902 = 0;
                          }
                          v904 = -DWORD1(v1805);
                          if ( (SDWORD1(v1805) & 0x80000000) == 0 )
                          {
                            v904 = 0;
                            v901 = DWORD1(v1805);
                          }
                          v905 = v1817 - v902;
                          if ( (int)v1817 - v902 >= v893 - v903 )
                            v905 = v893 - v903;
                          v906 = HIDWORD(v1817) - v904;
                          if ( HIDWORD(v1817) - v904 >= v1494 - v901 )
                            v906 = v1494 - v901;
                          if ( v905 > 0 && v906 > 0 )
                          {
                            v907 = v1401;
                            v908 = (unsigned __int16 *)(v1421 + 4 * (v902 + (__int64)((int)v1817 * v904)));
                            v1459 = v908;
                            v1422 = 2LL * (int)v1817;
                            v909 = &v1486[2 * v903 + 2 * (__int64)(v1396 * v901)];
                            v910 = 2LL * v1396;
                            v1487 = v909;
                            v1409 = 0;
                            do
                            {
                              v911 = 0;
                              v1402 = 0;
                              v912 = (unsigned __int8 *)(v908 + 1);
                              v913 = (char *)v909 - (char *)v908;
                              do
                              {
                                if ( (unsigned __int8)((*v912 + *(v912 - 2) + 2 * (unsigned int)*(v912 - 1)) >> 2) != 0xFF )
                                {
                                  v914 = (unsigned __int8)~((*v912 + *(v912 - 2) + 2 * (unsigned int)*(v912 - 1)) >> 2);
                                  v912[v913] -= ~((*v912 + *(v912 - 2) + 2 * (unsigned int)*(v912 - 1)) >> 2)
                                              * (v907 - v912[v913]);
                                  v915 = v912[v913 - 1];
                                  v916 = (unsigned __int64)(2155905153LL * v914 * (BYTE1(v1415) - v915)) >> 32;
                                  v912[v913 - 1] = v915 + (v916 >> 7 < 0) + (v916 >> 7);
                                  v917 = v912[v913 - 2];
                                  v918 = (unsigned __int64)(2155905153LL * v914 * (BYTE2(v1415) - v917)) >> 32;
                                  v912[v913 - 2] = v917 + (v918 >> 7 < 0) + (v918 >> 7);
                                  v919 = v912[v913 + 1];
                                  v920 = v914 * (255 - v919);
                                  v911 = v1402;
                                  v912[v913 + 1] = v919 + v920 / 255;
                                }
                                ++v911;
                                v912 += 4;
                                v1402 = v911;
                              }
                              while ( v911 < v905 );
                              v921 = v1409;
                              v908 = &v1459[v1422];
                              v909 = &v1487[v910];
                              v1459 = (unsigned __int16 *)((char *)v1459 + v1422 * 2);
                              v1487 = (unsigned __int16 *)((char *)v1487 + v910 * 2);
                              ++v1409;
                            }
                            while ( v921 + 1 < v906 );
                            v84 = v1498;
                          }
                          ((void (__fastcall *)(unsigned __int16 *))off_1801B1038)(v1434);
                          if ( v1471 )
                            ((void (__fastcall *)(__int64, SIZE_T))off_1801B1078)(v895, v1471);
                          goto LABEL_1373;
                        }
                        v900 = ((__int64 (__fastcall *)(__int64))off_1801B1118[0])(8LL);
                      }
                      else
                      {
                        v900 = -5723992;
                      }
                      v1415 = v900;
                      v1401 = v900;
                      goto LABEL_1354;
                    }
                    if ( v1796 || (v923 = -64, v858 == 1) )
                      v923 = -1;
                    BYTE2(v1385) = v923;
                    LOWORD(v1385) = 0;
                    v1744 = 0uLL;
                    v1754 = 0uLL;
                    HIBYTE(v1385) = 1;
                    v1522 = (void *)((__int64 (__fastcall *)(__int64))off_1801B1010[0])(v1513);
                    if ( !v1522 )
                      goto LABEL_1379;
                    if ( v858 == 1 )
                    {
                      v924 = DWORD2(v1805) - v1805;
                      if ( DWORD2(v1805) - (int)v1805 <= DWORD2(v1804) - (int)v1804 )
                        v924 = DWORD2(v1804) - v1804;
                      v1397 = HIDWORD(v1805) - DWORD1(v1804);
                      v925 = 0;
                      v926 = 0;
                      if ( v1795 )
                      {
                        v925 = v924 + v1804 - DWORD2(v1804);
                        v926 = v924 + v1805 - DWORD2(v1805);
                        LODWORD(v1744) = v925;
                        LODWORD(v1754) = v926;
                      }
                      v1495 = HIDWORD(v1804) - DWORD1(v1804);
                      HIDWORD(v1744) = HIDWORD(v1804) - DWORD1(v1804);
                      v927 = v925 + DWORD2(v1804) - v1804;
                      v928 = DWORD2(v1805) + v926 - v1805;
                      DWORD2(v1744) = v927;
                      LODWORD(v1538) = DWORD1(v1805) - DWORD1(v1804);
                      DWORD1(v1754) = DWORD1(v1805) - DWORD1(v1804);
                      v929 = HIDWORD(v1805) - DWORD1(v1804);
                      v1501 = HIDWORD(v1805) - DWORD1(v1804);
                      HIDWORD(v1754) = HIDWORD(v1805) - DWORD1(v1804);
                      DWORD2(v1754) = v928;
                    }
                    else
                    {
                      v929 = HIDWORD(v1746);
                      v924 = v1746;
                      v1744 = v1804;
                      v927 = DWORD2(v1804);
                      v1495 = HIDWORD(v1804);
                      v1754 = v1805;
                      v928 = DWORD2(v1805);
                      v1501 = HIDWORD(v1805);
                      LODWORD(v1538) = DWORD1(v1805);
                      v1397 = HIDWORD(v1746);
                    }
                    v1696 = 0LL;
                    memset_0(v1833, 0, 0x2CuLL);
                    v1833[0] = 40;
                    v1833[1] = v924;
                    v1833[2] = -v929;
                    v1834 = 1;
                    v1835 = 32;
                    v930 = ((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B1018[0])(
                             v1522,
                             v1833,
                             0LL,
                             &v1696,
                             0LL,
                             0);
                    v1518 = (void *)v930;
                    if ( !v930 )
                    {
                      GetLastError();
                      v922 = v1522;
                      v856 = v1513;
LABEL_1441:
                      if ( v922 )
                        ((void (__fastcall *)(void *))off_1801B1030[0])(v922);
                      goto LABEL_1443;
                    }
                    ((void (__fastcall *)(void *, __int64))off_1801B1078)(v1522, v930);
                    if ( v1414 == 1 && v1536 )
                    {
                      v1818 = 0LL;
                      v1819 = v924;
                      v1820 = v929;
                      ((void (__fastcall *)(void *, __int64 *))off_1801B10E8[0])(v1522, &v1818);
                    }
                    v931 = v1797;
                    v1446 = v1796;
                    v1472 = v1800;
                    v1460 = (unsigned __int16 *)v1797;
                    memset_0(v1783, 0, 0x68uLL);
                    memset_0(v1787, 0, 0x68uLL);
                    v1488 = 0LL;
                    v1423 = 0;
                    v1435 = 0;
                    memset_0(v1842, 0, 0x2CuLL);
                    v1821 = 0LL;
                    v1822 = 0LL;
                    if ( !v931 )
                      goto LABEL_1437;
                    v932 = ((__int64 (__fastcall *)(void *, __int64))off_1801B1050[0])(v1522, 7LL);
                    if ( !v932 )
                      goto LABEL_1394;
                    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(v932, 104LL, v1783) )
                    {
                      v1488 = v1786;
                      v1423 = v1784;
                      v1435 = v1785;
                    }
                    v1525 = (void *)((__int64 (__fastcall *)(void *))off_1801B1010[0])(v1522);
                    if ( v1525 )
                    {
                      v1698 = 0LL;
                      v933 = 0;
                      memset_0(v1842, 0, 0x2CuLL);
                      v934 = v927 - v1744;
                      v1842[2] = DWORD1(v1744) - v1495;
                      v1843 = 1;
                      v1844 = 32;
                      v1842[0] = 40;
                      v1842[1] = v934;
                      v935 = (void *)((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B1018[0])(
                                       v1525,
                                       v1842,
                                       0LL,
                                       &v1698,
                                       0LL,
                                       0);
                      v1537 = v935;
                      if ( v935 )
                      {
                        v938 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_1801B1068[0])(v935, 104LL, v1787);
                        v939 = 0LL;
                        LODWORD(v1822) = v934;
                        if ( v938 )
                          v939 = v1788;
                        v937 = v1525;
                        HIDWORD(v1822) = v1495 - DWORD1(v1744);
                        v1506 = v939;
                        ((void (__fastcall *)(void *, LPVOID))off_1801B1078)(v1525, v1537);
                        ((void (__fastcall *)(void *, __int64))off_1801B1080)(v1525, 1LL);
                        v1473 = ((__int64 (__fastcall *)(void *, SIZE_T))off_1801B1078)(v1525, v1472);
                        v940 = ((__int64 (__fastcall *)(_QWORD))off_1801B1070[0])(0LL);
                        ((void (__fastcall *)(void *, __int64 *, __int64))off_1801B10E8[0])(v1525, &v1821, v940);
                        ((void (__fastcall *)(void *, unsigned __int16 *, __int64, __int64 *, int, _QWORD))off_1801B10D8)(
                          v1525,
                          v1460,
                          0xFFFFFFFFLL,
                          &v1821,
                          v1408,
                          0LL);
                        if ( v1414 == 1 )
                        {
                          if ( v1446 )
                            v1447 = ((__int64 (__fastcall *)(__int64))off_1801B1118[0])(8LL);
                          else
                            v1447 = 0xFFFFFF;
                        }
                        else
                        {
                          v1447 = -5723992;
                        }
                        v941 = 0;
                        v942 = -(int)v1744;
                        v943 = 0;
                        if ( (int)v1744 >= 0 )
                        {
                          v943 = v1744;
                          v942 = 0;
                        }
                        v944 = -DWORD1(v1744);
                        if ( (SDWORD1(v1744) & 0x80000000) == 0 )
                        {
                          v944 = 0;
                          v941 = DWORD1(v1744);
                        }
                        v945 = v1822 - v942;
                        if ( (int)v1822 - v942 >= v1423 - v943 )
                          v945 = v1423 - v943;
                        v946 = HIDWORD(v1822) - v944;
                        if ( HIDWORD(v1822) - v944 >= v1435 - v941 )
                          v946 = v1435 - v941;
                        v1436 = v946;
                        if ( v945 > 0 && v946 > 0 )
                        {
                          v947 = (unsigned __int8 *)&v1506[4 * v942 + 4 * (__int64)((int)v1822 * v944)];
                          v948 = v1488;
                          v1507 = v947;
                          v1489 = (unsigned __int16 *)(4LL * (int)v1822);
                          v949 = &v948[2 * v943 + 2 * (__int64)(v1423 * v941)];
                          v1496 = 2LL * v1423;
                          v1461 = v949;
                          v1424 = 0;
                          do
                          {
                            v950 = 0;
                            v951 = v947 + 2;
                            v952 = (char *)v949 - (char *)v947;
                            do
                            {
                              if ( (unsigned __int8)((*v951 + *(v951 - 2) + 2 * (unsigned int)*(v951 - 1)) >> 2) != 0xFF )
                              {
                                v953 = (unsigned __int8)~((*v951 + *(v951 - 2) + 2 * (unsigned int)*(v951 - 1)) >> 2);
                                v951[v952] -= ~((*v951 + *(v951 - 2) + 2 * (unsigned int)*(v951 - 1)) >> 2)
                                            * (v1447 - v951[v952]);
                                v954 = v951[v952 - 1];
                                v955 = (unsigned __int64)(2155905153LL * v953 * (BYTE1(v1447) - v954)) >> 32;
                                v951[v952 - 1] = v954 + (v955 >> 7 < 0) + (v955 >> 7);
                                v956 = v951[v952 - 2];
                                v957 = (unsigned __int64)(2155905153LL * v953 * (BYTE2(v1447) - v956)) >> 32;
                                v951[v952 - 2] = v956 + (v957 >> 7 < 0) + (v957 >> 7);
                                v951[v952 + 1] += v953 * (255 - v951[v952 + 1]) / 255;
                              }
                              v951 += 4;
                              ++v950;
                            }
                            while ( v950 < v945 );
                            v958 = v1424;
                            v947 = &v1507[(_QWORD)v1489];
                            v949 = &v1461[v1496];
                            v1507 = &v1507[(_QWORD)v1489];
                            v1461 = (unsigned __int16 *)((char *)v1461 + v1496 * 2);
                            ++v1424;
                          }
                          while ( v958 + 1 < v1436 );
                          v937 = v1525;
                        }
                        ((void (__fastcall *)(LPVOID))off_1801B1038)(v1537);
                        if ( v1473 )
                          ((void (__fastcall *)(void *, SIZE_T))off_1801B1078)(v937, v1473);
                      }
                      else
                      {
                        v936 = GetLastError();
                        v933 = v936;
                        if ( v936 > 0 )
                          v933 = (unsigned __int16)v936 | 0x80070000;
                        v937 = v1525;
                        if ( v933 >= 0 )
                          v933 = -2147467259;
                      }
                      ((void (__fastcall *)(void *))off_1801B1030[0])(v937);
                      if ( v933 < 0 )
                        goto LABEL_1437;
                      v959 = v1798;
                      v1437 = v1796;
                      v1508 = v1801;
                      v1537 = v1798;
                      memset_0(v1789, 0, 0x68uLL);
                      memset_0(v1793, 0, 0x68uLL);
                      v960 = 0;
                      v1526 = 0LL;
                      v1425 = 0;
                      v1448 = 0;
                      memset_0(v1845, 0, 0x2CuLL);
                      v59 = v959 == 0LL;
                      v1823 = 0LL;
                      v922 = v1522;
                      v1824 = 0LL;
                      if ( !v59 )
                      {
                        v961 = ((__int64 (__fastcall *)(void *, __int64))off_1801B1050[0])(v1522, 7LL);
                        if ( !v961 )
                        {
                          GetLastError();
                          goto LABEL_1438;
                        }
                        if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(
                               v961,
                               104LL,
                               v1789) )
                        {
                          v1526 = v1792;
                          v1425 = v1790;
                          v1448 = v1791;
                        }
                        v1474 = ((__int64 (__fastcall *)(void *))off_1801B1010[0])(v1522);
                        v962 = v1474;
                        if ( !v1474 )
                        {
                          GetLastError();
LABEL_1437:
                          v922 = v1522;
                          goto LABEL_1438;
                        }
                        v1701 = 0LL;
                        memset_0(v1845, 0, 0x2CuLL);
                        v963 = v928 - v1754;
                        v1845[2] = (_DWORD)v1538 - v1501;
                        v1845[0] = 40;
                        v1846 = 1;
                        v1847 = 32;
                        v1845[1] = v963;
                        v964 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B1018[0])(
                                 v1474,
                                 v1845,
                                 0LL,
                                 &v1701,
                                 0LL,
                                 0);
                        v1462 = (unsigned __int16 *)v964;
                        if ( !v964 )
                        {
                          v965 = GetLastError();
                          v960 = v965;
                          if ( v965 > 0 )
                            v960 = (unsigned __int16)v965 | 0x80070000;
                          if ( v960 >= 0 )
                            v960 = -2147467259;
                          goto LABEL_1477;
                        }
                        v966 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801B1068[0])(v964, 104LL, v1793);
                        v967 = 0LL;
                        LODWORD(v1824) = v963;
                        if ( v966 )
                          v967 = v1794;
                        v968 = (int)v1538;
                        HIDWORD(v1824) = v1501 - (_DWORD)v1538;
                        v1490 = v967;
                        ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1801B1078)(v1474, v1462);
                        ((void (__fastcall *)(SIZE_T, __int64))off_1801B1080)(v1474, 1LL);
                        v1509 = (LPVOID)((__int64 (__fastcall *)(SIZE_T, LPVOID))off_1801B1078)(v1474, v1508);
                        v969 = ((__int64 (__fastcall *)(_QWORD))off_1801B1070[0])(0LL);
                        ((void (__fastcall *)(SIZE_T, __int64 *, __int64))off_1801B10E8[0])(v1474, &v1823, v969);
                        ((void (__fastcall *)(SIZE_T, LPVOID, __int64, __int64 *, int, _QWORD))off_1801B10D8)(
                          v1474,
                          v1537,
                          0xFFFFFFFFLL,
                          &v1823,
                          v1408,
                          0LL);
                        if ( v1414 == 1 )
                        {
                          if ( !v1437 )
                          {
                            v1438 = 0xFFFFFF;
LABEL_1458:
                            v971 = 0;
                            v972 = -(int)v1754;
                            v973 = 0;
                            if ( (int)v1754 >= 0 )
                            {
                              v973 = v1754;
                              v972 = 0;
                            }
                            v974 = -v968;
                            if ( v968 >= 0 )
                            {
                              v974 = 0;
                              v971 = v968;
                            }
                            v975 = v1824 - v972;
                            if ( (int)v1824 - v972 >= v1425 - v973 )
                              v975 = v1425 - v973;
                            v976 = HIDWORD(v1824) - v974;
                            if ( HIDWORD(v1824) - v974 >= v1448 - v971 )
                              v976 = v1448 - v971;
                            if ( v975 > 0 && v976 > 0 )
                            {
                              v977 = (unsigned __int8 *)&v1490[2 * v972 + 2 * (__int64)((int)v1824 * v974)];
                              v1537 = v977;
                              v1491 = (unsigned __int16 *)(4LL * (int)v1824);
                              v978 = &v1526[4 * v973 + 4 * (__int64)(v1425 * v971)];
                              v979 = 4LL * v1425;
                              v1527 = v978;
                              v1426 = 0;
                              do
                              {
                                v980 = 0;
                                v1449 = 0;
                                v981 = v977 + 2;
                                v982 = v978 - (char *)v977;
                                do
                                {
                                  if ( (unsigned __int8)((*v981 + *(v981 - 2) + 2 * (unsigned int)*(v981 - 1)) >> 2) != 0xFF )
                                  {
                                    v983 = (unsigned __int8)~((*v981 + *(v981 - 2) + 2 * (unsigned int)*(v981 - 1)) >> 2);
                                    v981[v982] -= ~((*v981 + *(v981 - 2) + 2 * (unsigned int)*(v981 - 1)) >> 2)
                                                * (v1401 - v981[v982]);
                                    v984 = v981[v982 - 1];
                                    v985 = (unsigned __int64)(2155905153LL * v983 * (BYTE1(v1438) - v984)) >> 32;
                                    v981[v982 - 1] = v984 + (v985 >> 7 < 0) + (v985 >> 7);
                                    v986 = v981[v982 - 2];
                                    v987 = (unsigned __int64)(2155905153LL * v983 * (BYTE2(v1438) - v986)) >> 32;
                                    v981[v982 - 2] = v986 + (v987 >> 7 < 0) + (v987 >> 7);
                                    v988 = v981[v982 + 1];
                                    v989 = v983 * (255 - v988);
                                    v980 = v1449;
                                    v981[v982 + 1] = v988 + v989 / 255;
                                  }
                                  ++v980;
                                  v981 += 4;
                                  v1449 = v980;
                                }
                                while ( v980 < v975 );
                                v990 = v1426;
                                v977 = (unsigned __int8 *)v1537 + (_QWORD)v1491;
                                v978 = &v1527[v979];
                                v1537 = (char *)v1537 + (_QWORD)v1491;
                                v1527 += v979;
                                ++v1426;
                              }
                              while ( v990 + 1 < v976 );
                              v962 = v1474;
                            }
                            ((void (__fastcall *)(unsigned __int16 *))off_1801B1038)(v1462);
                            if ( v1509 )
                              ((void (__fastcall *)(SIZE_T, LPVOID))off_1801B1078)(v962, v1509);
LABEL_1477:
                            ((void (__fastcall *)(SIZE_T))off_1801B1030[0])(v962);
                            if ( v960 >= 0 )
                            {
                              v922 = v1522;
                              v856 = v1513;
                              if ( v1414 == 1 )
                                ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int, void *, _DWORD, _DWORD, int))off_1801B1000[0])(
                                  v1513,
                                  (unsigned int)v1804,
                                  DWORD1(v1804),
                                  v924,
                                  v1397,
                                  v1522,
                                  0,
                                  0,
                                  13369376);
                              else
                                ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int, void *, _DWORD, _DWORD, unsigned int, int, int))off_1801B1040[0])(
                                  v1513,
                                  (unsigned int)v1745,
                                  HIDWORD(v1745),
                                  v924,
                                  v1397,
                                  v1522,
                                  0,
                                  0,
                                  v924,
                                  v1397,
                                  v1385);
LABEL_1481:
                              ((void (__fastcall *)(__int64, _QWORD))off_1801B1080)(v856, v1390);
LABEL_1439:
                              if ( v1518 )
                                ((void (__fastcall *)(void *))off_1801B1038)(v1518);
                              goto LABEL_1441;
                            }
                            goto LABEL_1437;
                          }
                          v970 = ((__int64 (__fastcall *)(__int64))off_1801B1118[0])(8LL);
                        }
                        else
                        {
                          v970 = -5723992;
                        }
                        v1438 = v970;
                        v1401 = v970;
                        goto LABEL_1458;
                      }
                    }
                    else
                    {
LABEL_1394:
                      GetLastError();
                      v922 = v1522;
                    }
LABEL_1438:
                    v856 = v1513;
                    goto LABEL_1439;
                  }
                  v1688 = 0LL;
                  v619 = 0LL;
                  v1689 = 0LL;
                  v1687 = 0LL;
                  v1690 = 0LL;
                  v618 = 0;
                  v1691 = 0LL;
                  v1692 = 0LL;
                  v1576 = 0;
                  if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1801B10A0[0])(
                         8LL,
                         &v1577,
                         0LL,
                         &v1576) )
                  {
                    v621 = operator new(2LL * v1576);
                    SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1691, v621);
                    v5 = v1691;
                    if ( v1691 )
                    {
                      v622 = operator new(4LL * (v1577 + 1));
                      SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1692, v622);
                      v623 = v1692;
                      if ( v1692 )
                      {
                        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1801B10A0[0])(
                               8LL,
                               &v1577,
                               v5,
                               &v1576) )
                        {
                          v625 = v623;
                          if ( v1577 )
                          {
                            for ( i1 = 0; i1 < v1577; ++i1 )
                            {
                              *v625 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1801B10B0[0])(v5, 0LL);
                              v627 = -1LL;
                              do
                                v59 = *(_WORD *)(v5 + 2 * v627++ + 2) == 0;
                              while ( !v59 );
                              ++v625;
                              v5 += 2 * v627 + 2;
                            }
                          }
                          *v625 = 1033;
                          LODWORD(v5) = 0;
                          v619 = v623;
                          v1692 = 0LL;
                          ii = v1577 + 1;
                          v1687 = v623;
                        }
                        else
                        {
                          v624 = GetLastError();
                          v618 = v624;
                          if ( v624 > 0 )
                            v618 = (unsigned __int16)v624 | 0x80070000;
                          LODWORD(v5) = 0;
                          if ( v618 >= 0 )
                            v618 = -2147467259;
                        }
                      }
                      else
                      {
                        v618 = -2147024882;
                        LODWORD(v5) = 0;
                      }
                    }
                    else
                    {
                      v618 = -2147024882;
                    }
                  }
                  else
                  {
                    v620 = GetLastError();
                    v618 = v620;
                    if ( v620 > 0 )
                      v618 = (unsigned __int16)v620 | 0x80070000;
                    if ( v618 >= 0 )
                      v618 = -2147467259;
                  }
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1692);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1691);
                  if ( v618 < 0 )
                  {
                    v670 = (char *)v1757;
                    v1483 = v1756;
                    v1453 = v1755;
                    v1431 = v1757;
                    goto LABEL_1155;
                  }
                  v628 = 0;
                  if ( ii )
                  {
                    v629 = 0LL;
LABEL_909:
                    v630 = 0;
                    v631 = &unk_180184290;
                    while ( v619[v629] != *v631 )
                    {
                      ++v630;
                      ++v631;
                      if ( v630 >= 0x26 )
                      {
                        ++v628;
                        ++v629;
                        if ( v628 >= ii )
                          goto LABEL_915;
                        goto LABEL_909;
                      }
                    }
                    LODWORD(v5) = v630;
                  }
LABEL_915:
                  v1381 = 0;
                  if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64, _QWORD))off_1801B10A8[0])(
                         *((unsigned int *)&unk_180184290 + (unsigned int)v5),
                         v1867,
                         85LL,
                         0LL)
                    && ((int (__fastcall *)(_BYTE *, __int64, char *, __int64))off_1801B1090[0])(
                         v1867,
                         88LL,
                         &v1825,
                         16LL) > 0 )
                  {
                    v1381 = (v1826 >> 27) & 1;
                  }
                  v1864[0] = L"Segoe UI Light";
                  v632 = -1LL;
                  do
                    v59 = aSegoeUiLight[++v632] == 0;
                  while ( !v59 );
                  v633 = &aSegoeUiLight[v632];
                  v634 = -1LL;
                  v635 = v633 + 1;
                  v1864[1] = v635;
                  do
                    v59 = v635[++v634] == 0;
                  while ( !v59 );
                  v636 = &v635[v634];
                  v637 = -1LL;
                  v638 = v636 + 1;
                  v1864[2] = v638;
                  do
                    ++v637;
                  while ( v638[v637] );
                  v639 = &v638[v637 + 1];
                  v640 = -1LL;
                  v1864[3] = v639;
                  do
                    ++v640;
                  while ( v639[v640] );
                  v641 = &v639[v640 + 1];
                  v642 = -1LL;
                  v1864[4] = v641;
                  do
                    ++v642;
                  while ( v641[v642] );
                  v643 = &v641[v642 + 1];
                  v644 = -1LL;
                  v1864[5] = v643;
                  do
                    ++v644;
                  while ( v643[v644] );
                  v645 = &v643[v644 + 1];
                  v646 = -1LL;
                  v1864[6] = v645;
                  do
                    ++v646;
                  while ( v645[v646] );
                  v647 = &v645[v646 + 1];
                  v648 = -1LL;
                  v1864[7] = v647;
                  do
                    ++v648;
                  while ( v647[v648] );
                  v649 = (__int64)&v647[v648 + 1];
                  v650 = -1LL;
                  v1864[8] = v649;
                  do
                    ++v650;
                  while ( *(_WORD *)(v649 + 2 * v650) );
                  v651 = v649 + 2 * (v650 + 1);
                  v652 = -1LL;
                  v1864[9] = v651;
                  do
                    ++v652;
                  while ( *(_WORD *)(v651 + 2 * v652) );
                  v653 = v651 + 2 * (v652 + 1);
                  v654 = -1LL;
                  v1864[10] = v653;
                  do
                    ++v654;
                  while ( *(_WORD *)(v653 + 2 * v654) );
                  v655 = v653 + 2 * (v654 + 1);
                  v656 = -1LL;
                  v1864[11] = v655;
                  do
                    ++v656;
                  while ( *(_WORD *)(v655 + 2 * v656) );
                  v657 = v655 + 2 * (v656 + 1);
                  v658 = -1LL;
                  v1864[12] = v657;
                  do
                    ++v658;
                  while ( *(_WORD *)(v657 + 2 * v658) );
                  v659 = v657 + 2 * (v658 + 1);
                  v660 = -1LL;
                  v1864[13] = v659;
                  do
                    ++v660;
                  while ( *(_WORD *)(v659 + 2 * v660) );
                  v661 = v659 + 2 * (v660 + 1);
                  v662 = -1LL;
                  v1864[14] = v661;
                  do
                    ++v662;
                  while ( *(_WORD *)(v661 + 2 * v662) );
                  v663 = v661 + 2 * (v662 + 1);
                  v664 = -1LL;
                  v1864[15] = v663;
                  do
                    ++v664;
                  while ( *(_WORD *)(v663 + 2 * v664) );
                  v665 = v663 + 2 * (v664 + 1);
                  v666 = -1LL;
                  v1864[16] = v665;
                  do
                    ++v666;
                  while ( *(_WORD *)(v665 + 2 * v666) );
                  v667 = v665 + 2 * (v666 + 1);
                  v668 = -1LL;
                  v1864[17] = v667;
                  do
                    v59 = *(_WORD *)(v667 + 2 * v668++ + 2) == 0;
                  while ( !v59 );
                  v1864[18] = v667 + 2 + 2 * v668;
                  v1453 = (unsigned __int16 *)v1864[*((unsigned __int8 *)&unk_18016CE20 + 3 * (unsigned int)v5)];
                  v1755 = v1453;
                  v1483 = (unsigned __int16 *)v1864[*((unsigned __int8 *)&unk_18016CE21 + 3 * (unsigned int)v5)];
                  v1756 = v1483;
                  v1431 = (unsigned __int16 *)v1864[*((unsigned __int8 *)&unk_18016CE22 + 3 * (unsigned int)v5)];
                  v1757 = v1431;
                  v618 = 0;
                  v669 = (char *)operator new(0x1C90uLL);
                  v1417 = v669;
                  if ( !v669 )
                  {
                    v618 = -2147024882;
LABEL_956:
                    v670 = (char *)v1431;
                    LODWORD(v5) = 0;
                    goto LABEL_1155;
                  }
                  v671 = (char *)&unk_1801825F2;
                  v672 = -1;
                  v673 = 0;
                  v674 = 0;
                  v1578 = 0;
                  v675 = 0;
                  v676 = v669 + 7;
                  v677 = 914LL;
                  do
                  {
                    v678 = (unsigned __int8)*(v671 - 1);
                    v679 = (unsigned __int8)*(v671 - 2);
                    v680 = (unsigned __int8)v671[2];
                    v671 += 8;
                    v681 = (unsigned __int8)*(v671 - 7) | (((unsigned __int8)*(v671 - 8) | ((v678 | (v679 << 8)) << 8)) << 8);
                    v682 = v681 ^ v675;
                    v683 = (unsigned __int8)*(v671 - 3) | (((unsigned __int8)*(v671 - 4) | (((unsigned __int8)*(v671 - 5) | (v680 << 8)) << 8)) << 8);
                    v684 = v682 ^ v683 ^ v674 ^ 0xAC987321;
                    v685 = (__ROL4__(v684, 10) + 4991 * __ROL4__(v684 + 1419157410, 5)) ^ v682;
                    v686 = (43881 * __ROR4__(v685 + 133239679, 9) - __ROL4__(v685, 2)) ^ v684;
                    v687 = (24670 * v686 - (v686 >> 13) - 123127970) ^ v685;
                    v688 = (2033 * __ROL4__(v687 ^ 0xAB69, 6) - __ROL4__(v687, 2)) ^ v686;
                    v689 = (133239679 - (v688 ^ 0xAB69605E)) ^ v687;
                    v690 = (43881 * (v689 ^ 0x137F)) ^ __ROR4__(v689, 6) ^ v688;
                    v691 = (__ROL4__(v690, 2) + 24670 * __ROR4__(v690 + 133239679, 15)) ^ v689;
                    v692 = (2033 * __ROR4__(v691 + 1419157410, 14) - __ROL4__(v691, 8)) ^ v690;
                    v693 = __ROR4__(v692, 10) ^ (4991 * __ROR4__(v692 ^ 0xAB69605E, 12)) ^ v691;
                    v694 = v692 ^ (v693 >> 10) ^ (43881 * (v693 ^ 0x7F1));
                    v695 = (2033 * (__ROR4__(~v694, 5) + 24670)) ^ v693;
                    v696 = v694 ^ (v695 - 2033) ^ 0xAB69605E;
                    v697 = ((v696 >> 2) + 4991 * __ROL4__(v694 ^ (v695 - 2033) ^ 0xAB6967AF, 2)) ^ v695;
                    v698 = (__ROL4__(v697, 7) + 43881 * __ROR4__(v697 - 133239679, 6)) ^ v696;
                    v699 = (24670 * (v698 ^ 0x137F) + __ROR4__(v698, 9)) ^ v697;
                    v700 = (__ROL4__(v699, 7) + 2033 * __ROL4__(v699 ^ 0xAB69, 5)) ^ v698;
                    v701 = v700 ^ v699 ^ 0xAC987321;
                    v702 = (4991 * __ROR4__(v701, 3) - 219010071) ^ v700;
                    v703 = (24670 * __ROR4__(v702 - 133239679, 1) - __ROR4__(v702, 6)) ^ v701;
                    v704 = (__ROL4__(v703, 14) + 2033 * __ROL4__(v703 - 1419157410, 3)) ^ v702;
                    v705 = (4991 * __ROL4__(v704 - 1419157410, 15) - __ROR4__(v704, 14)) ^ v703;
                    v676 += 8;
                    v706 = (v705 >> 3) ^ (43881 * (v705 ^ 0x605E)) ^ v704;
                    v1578 = v672 ^ v706;
                    v672 = v683;
                    v707 = v673 ^ __ROL4__(v706, 2) ^ (24670 * __ROL4__(v706 ^ 0x7F1137F, 4));
                    v673 = v681;
                    *(v676 - 12) = v707 ^ v705;
                    v1479 = __ROR4__(v707 ^ v705, 8);
                    *(v676 - 8) = v1578;
                    v1578 = __ROR4__(v1578, 8);
                    *(v676 - 13) = v1479;
                    v1480 = __ROR4__(v1479, 8);
                    *(v676 - 9) = v1578;
                    v1578 = __ROR4__(v1578, 8);
                    *(v676 - 14) = v1480;
                    v1481 = __ROR4__(v1480, 8);
                    *(v676 - 10) = v1578;
                    v1578 = __ROR4__(v1578, 8);
                    *(v676 - 15) = v1481;
                    *(v676 - 11) = v1578;
                    v675 = __ROR4__(v1481, 8);
                    v674 = __ROR4__(v1578, 8);
                    v1478 = v675;
                    v1578 = v674;
                    --v677;
                  }
                  while ( v677 );
                  v84 = v1498;
                  v708 = 0LL;
                  v709 = 0LL;
                  v710 = 0LL;
                  do
                  {
                    v709 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1417[v708]), v709);
                    v711 = _mm_loadu_si128((const __m128i *)&v1417[v708 + 16]);
                    v708 += 32LL;
                    v712 = _mm_xor_si128(v711, v710);
                    v710 = v712;
                  }
                  while ( v708 < 0x1C80 );
                  v713 = _mm_xor_si128(v712, v709);
                  v714 = _mm_xor_si128(v713, _mm_srli_si128(v713, 8));
                  v715 = _mm_xor_si128(v714, _mm_srli_si128(v714, 4));
                  v716 = _mm_xor_si128(v715, _mm_srli_si128(v715, 2));
                  for ( i2 = _mm_cvtsi128_si32(_mm_xor_si128(v716, _mm_srli_si128(v716, 1))); v708 < 0x1C90; ++v708 )
                    i2 ^= v1417[v708];
                  if ( i2 == 127LL )
                  {
                    v1688 = v1417;
                    v1689 = 7312LL;
                  }
                  else
                  {
                    v618 = -1073425151;
                    operator delete(v1417);
                  }
                  if ( v618 < 0 )
                    goto LABEL_956;
                  v718 = v1688;
                  v719 = v1861;
                  v720 = 6LL;
                  do
                  {
                    if ( !(_DWORD)v5 )
                      *v719 = (__int64)v718;
                    v721 = -1LL;
                    do
                      ++v721;
                    while ( v718[v721] );
                    v722 = &v718[v721 + 1];
                    if ( (_DWORD)v5 == 1 )
                      *v719 = (__int64)v722;
                    v723 = -1LL;
                    do
                      ++v723;
                    while ( v722[v723] );
                    v724 = (__int64)&v722[v723 + 1];
                    if ( (_DWORD)v5 == 2 )
                      *v719 = v724;
                    v725 = -1LL;
                    do
                      ++v725;
                    while ( *(_BYTE *)(v724 + v725) );
                    v726 = v725 + v724 + 1;
                    if ( (_DWORD)v5 == 3 )
                      *v719 = v726;
                    v727 = -1LL;
                    do
                      ++v727;
                    while ( *(_BYTE *)(v726 + v727) );
                    v728 = v727 + v726 + 1;
                    if ( (_DWORD)v5 == 4 )
                      *v719 = v728;
                    v729 = -1LL;
                    do
                      ++v729;
                    while ( *(_BYTE *)(v728 + v729) );
                    v730 = v729 + v728 + 1;
                    if ( (_DWORD)v5 == 5 )
                      *v719 = v730;
                    v731 = -1LL;
                    do
                      ++v731;
                    while ( *(_BYTE *)(v730 + v731) );
                    v732 = v731 + v730 + 1;
                    if ( (_DWORD)v5 == 6 )
                      *v719 = v732;
                    v733 = -1LL;
                    do
                      ++v733;
                    while ( *(_BYTE *)(v732 + v733) );
                    v734 = v733 + v732 + 1;
                    if ( (_DWORD)v5 == 7 )
                      *v719 = v734;
                    v735 = -1LL;
                    do
                      ++v735;
                    while ( *(_BYTE *)(v734 + v735) );
                    v736 = v735 + v734 + 1;
                    if ( (_DWORD)v5 == 8 )
                      *v719 = v736;
                    v737 = -1LL;
                    do
                      ++v737;
                    while ( *(_BYTE *)(v736 + v737) );
                    v738 = v737 + v736 + 1;
                    if ( (_DWORD)v5 == 9 )
                      *v719 = v738;
                    v739 = -1LL;
                    do
                      ++v739;
                    while ( *(_BYTE *)(v738 + v739) );
                    v740 = v739 + v738 + 1;
                    if ( (_DWORD)v5 == 10 )
                      *v719 = v740;
                    v741 = -1LL;
                    do
                      ++v741;
                    while ( *(_BYTE *)(v740 + v741) );
                    v742 = v741 + v740 + 1;
                    if ( (_DWORD)v5 == 11 )
                      *v719 = v742;
                    v743 = -1LL;
                    do
                      ++v743;
                    while ( *(_BYTE *)(v742 + v743) );
                    v744 = v743 + v742 + 1;
                    if ( (_DWORD)v5 == 12 )
                      *v719 = v744;
                    v745 = -1LL;
                    do
                      ++v745;
                    while ( *(_BYTE *)(v744 + v745) );
                    v746 = v745 + v744 + 1;
                    if ( (_DWORD)v5 == 13 )
                      *v719 = v746;
                    v747 = -1LL;
                    do
                      ++v747;
                    while ( *(_BYTE *)(v746 + v747) );
                    v748 = v747 + v746 + 1;
                    if ( (_DWORD)v5 == 14 )
                      *v719 = v748;
                    v749 = -1LL;
                    do
                      ++v749;
                    while ( *(_BYTE *)(v748 + v749) );
                    v750 = v749 + v748 + 1;
                    if ( (_DWORD)v5 == 15 )
                      *v719 = v750;
                    v751 = -1LL;
                    do
                      ++v751;
                    while ( *(_BYTE *)(v750 + v751) );
                    v752 = v751 + v750 + 1;
                    if ( (_DWORD)v5 == 16 )
                      *v719 = v752;
                    v753 = -1LL;
                    do
                      ++v753;
                    while ( *(_BYTE *)(v752 + v753) );
                    v754 = v753 + v752 + 1;
                    if ( (_DWORD)v5 == 17 )
                      *v719 = v754;
                    v755 = -1LL;
                    do
                      ++v755;
                    while ( *(_BYTE *)(v754 + v755) );
                    v756 = v755 + v754 + 1;
                    if ( (_DWORD)v5 == 18 )
                      *v719 = v756;
                    v757 = -1LL;
                    do
                      ++v757;
                    while ( *(_BYTE *)(v756 + v757) );
                    v758 = v757 + v756 + 1;
                    if ( (_DWORD)v5 == 19 )
                      *v719 = v758;
                    v759 = -1LL;
                    do
                      ++v759;
                    while ( *(_BYTE *)(v758 + v759) );
                    v760 = v759 + v758 + 1;
                    if ( (_DWORD)v5 == 20 )
                      *v719 = v760;
                    v761 = -1LL;
                    do
                      ++v761;
                    while ( *(_BYTE *)(v760 + v761) );
                    v762 = v761 + v760 + 1;
                    if ( (_DWORD)v5 == 21 )
                      *v719 = v762;
                    v763 = -1LL;
                    do
                      ++v763;
                    while ( *(_BYTE *)(v762 + v763) );
                    v764 = v763 + v762 + 1;
                    if ( (_DWORD)v5 == 22 )
                      *v719 = v764;
                    v765 = -1LL;
                    do
                      ++v765;
                    while ( *(_BYTE *)(v764 + v765) );
                    v766 = v765 + v764 + 1;
                    if ( (_DWORD)v5 == 23 )
                      *v719 = v766;
                    v767 = -1LL;
                    do
                      ++v767;
                    while ( *(_BYTE *)(v766 + v767) );
                    v768 = v767 + v766 + 1;
                    if ( (_DWORD)v5 == 24 )
                      *v719 = v768;
                    v769 = -1LL;
                    do
                      ++v769;
                    while ( *(_BYTE *)(v768 + v769) );
                    v770 = v769 + v768 + 1;
                    if ( (_DWORD)v5 == 25 )
                      *v719 = v770;
                    v771 = -1LL;
                    do
                      ++v771;
                    while ( *(_BYTE *)(v770 + v771) );
                    v772 = v771 + v770 + 1;
                    if ( (_DWORD)v5 == 26 )
                      *v719 = v772;
                    v773 = -1LL;
                    do
                      ++v773;
                    while ( *(_BYTE *)(v772 + v773) );
                    v774 = v773 + v772 + 1;
                    if ( (_DWORD)v5 == 27 )
                      *v719 = v774;
                    v775 = -1LL;
                    do
                      ++v775;
                    while ( *(_BYTE *)(v774 + v775) );
                    v776 = v775 + v774 + 1;
                    if ( (_DWORD)v5 == 28 )
                      *v719 = v776;
                    v777 = -1LL;
                    do
                      ++v777;
                    while ( *(_BYTE *)(v776 + v777) );
                    v778 = v777 + v776 + 1;
                    if ( (_DWORD)v5 == 29 )
                      *v719 = v778;
                    v779 = -1LL;
                    do
                      ++v779;
                    while ( *(_BYTE *)(v778 + v779) );
                    v780 = v779 + v778 + 1;
                    if ( (_DWORD)v5 == 30 )
                      *v719 = v780;
                    v781 = -1LL;
                    do
                      ++v781;
                    while ( *(_BYTE *)(v780 + v781) );
                    v782 = v781 + v780 + 1;
                    if ( (_DWORD)v5 == 31 )
                      *v719 = v782;
                    v783 = -1LL;
                    do
                      ++v783;
                    while ( *(_BYTE *)(v782 + v783) );
                    v784 = v783 + v782 + 1;
                    if ( (_DWORD)v5 == 32 )
                      *v719 = v784;
                    v785 = -1LL;
                    do
                      ++v785;
                    while ( *(_BYTE *)(v784 + v785) );
                    v786 = v785 + v784 + 1;
                    if ( (_DWORD)v5 == 33 )
                      *v719 = v786;
                    v787 = -1LL;
                    do
                      ++v787;
                    while ( *(_BYTE *)(v786 + v787) );
                    v788 = v787 + v786 + 1;
                    if ( (_DWORD)v5 == 34 )
                      *v719 = v788;
                    v789 = -1LL;
                    do
                      ++v789;
                    while ( *(_BYTE *)(v788 + v789) );
                    v790 = v789 + v788 + 1;
                    if ( (_DWORD)v5 == 35 )
                      *v719 = v790;
                    v791 = -1LL;
                    do
                      ++v791;
                    while ( *(_BYTE *)(v790 + v791) );
                    v792 = v791 + v790 + 1;
                    if ( (_DWORD)v5 == 36 )
                      *v719 = v792;
                    v793 = -1LL;
                    do
                      ++v793;
                    while ( *(_BYTE *)(v792 + v793) );
                    v794 = v793 + v792 + 1;
                    if ( (_DWORD)v5 == 37 )
                      *v719 = v794;
                    v795 = -1LL;
                    do
                      ++v795;
                    while ( *(_BYTE *)(v794 + v795) );
                    ++v719;
                    v718 = (_BYTE *)(v795 + v794 + 1);
                    --v720;
                  }
                  while ( v720 );
                  v796 = operator new(0x18uLL);
                  SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1690, v796);
                  v797 = v1690;
                  if ( !v1690 )
                  {
                    v670 = (char *)v1431;
                    v618 = -2147024882;
                    LODWORD(v5) = 0;
                    goto LABEL_1155;
                  }
                  v1418 = v1690;
                  *v1690 = 0LL;
                  v798 = (__int16 *)&v1865;
                  LODWORD(v5) = 0;
                  v797[1] = 0LL;
                  v797[2] = 0LL;
                  v799 = 0;
                  v1392 = 0;
                  v800 = v797;
                  v1445 = &v1865;
                  while ( 2 )
                  {
                    v801 = *v798;
                    v802 = &unk_180184328;
                    v803 = 0LL;
                    while ( v801 != *v802 )
                    {
                      v803 = (unsigned int)(v803 + 1);
                      ++v802;
                      if ( (unsigned int)v803 >= 6 )
                        goto LABEL_1136;
                    }
                    v804 = v1861[v803];
                    v805 = -1LL;
                    do
                      v59 = *(_BYTE *)(v804 + v805++ + 1) == 0;
                    while ( !v59 );
                    v806 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1801B10C0[0])(
                             65001LL,
                             0LL,
                             v804,
                             (unsigned int)(v805 + 1),
                             0LL,
                             0);
                    v807 = v806;
                    if ( v806 )
                    {
                      v808 = operator new(2LL * v806);
                      *v1418 = v808;
                      if ( !v808 )
                      {
                        v618 = -2147024882;
                        goto LABEL_1147;
                      }
                      v809 = -1LL;
                      do
                        v59 = *(_BYTE *)(v804 + v809++ + 1) == 0;
                      while ( !v59 );
                      if ( ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, LPVOID, int))off_1801B10C0[0])(
                             65001LL,
                             0LL,
                             v804,
                             (unsigned int)(v809 + 1),
                             v808,
                             v807) )
                      {
                        v800 = v1418;
                        LODWORD(v5) = 0;
                        v799 = v1392;
LABEL_1136:
                        ++v799;
                        v798 = (__int16 *)v1445 + 1;
                        v1392 = v799;
                        ++v800;
                        v1445 = (int *)((char *)v1445 + 2);
                        v1418 = v800;
                        if ( v799 < 3 )
                          continue;
                        v1684 = (void **)v797;
                        v670 = (char *)v1431;
                        v1795 = v1381;
                        v1690 = 0LL;
LABEL_1155:
                        if ( v1688 )
                          memset(v1688, 0, v1689);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1690);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1688);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1687);
                        if ( v618 < 0 )
                          goto LABEL_1271;
                        v814 = 0;
                        v618 = 0;
                        v1797 = *v1684;
                        v1798 = v1684[1];
                        v1799 = v1684[2];
                        v1749[1] = 0LL;
                        v1749[0] = 16LL;
                        if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD))off_1801B1168)(
                                             66LL,
                                             0LL,
                                             v1749,
                                             0LL) )
                        {
                          v814 = BYTE4(v1749[0]) & 1;
                        }
                        else
                        {
                          v815 = GetLastError();
                          v618 = v815;
                          if ( v815 > 0 )
                            v618 = (unsigned __int16)v815 | 0x80070000;
                          if ( v618 >= 0 )
                            v618 = -2147467259;
                        }
                        v1796 = v814;
                        if ( v618 < 0 )
                          goto LABEL_1271;
                        v816 = 42;
                        if ( v1414 != 1 )
                        {
                          if ( v1414 == 2 )
                          {
                            v1388 = 15;
                            v1406 = 11;
                          }
                          else if ( v1414 == 3 )
                          {
                            v816 = 225;
                            v1406 = 225;
LABEL_1171:
                            v1388 = v816;
                          }
                          v817 = 96;
                          v1393 = 96;
                          memset_0(v1857, 0, 0xDCuLL);
                          v1858 = 220;
                          if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1801B10E0[0])(
                                 0LL,
                                 0xFFFFFFFFLL,
                                 v1857) )
                          {
                            v817 = v1859;
                            v1748 = v1860;
                            if ( v1859 < 0x60u )
                              v817 = 96;
                            v1393 = v817;
                            v1747 = 0LL;
                          }
                          if ( v1414 == 1 )
                            v670 = (char *)v1453;
                          memset_0(v1848, 0, 0x5CuLL);
                          v618 = 0;
                          v818 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10F8[0])(0LL, 0LL, 1027LL);
                          if ( v818 )
                          {
                            v820 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10B8[0])(
                                     v1388,
                                     v817,
                                     72LL);
                            v1848[4] = 400;
                            v1849 = 5;
                            v1848[0] = -v820;
                            StringCchCopyW((char *)&v1850, 32LL, v670);
                            v821 = ((__int64 (__fastcall *)(_DWORD *))off_1801B1020[0])(v1848);
                            if ( v821 )
                            {
                              v1800 = v821;
                            }
                            else
                            {
                              v822 = GetLastError();
                              v618 = v822;
                              if ( v822 > 0 )
                                v618 = (unsigned __int16)v822 | 0x80070000;
                              if ( v618 >= 0 )
                                v618 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1801B1160[0])(0LL, v818);
                          }
                          else
                          {
                            v819 = GetLastError();
                            v618 = v819;
                            if ( v819 > 0 )
                              v618 = (unsigned __int16)v819 | 0x80070000;
                            if ( v618 < 0 )
                              goto LABEL_1270;
                            v618 = -2147467259;
                          }
                          if ( v618 < 0 )
                            goto LABEL_1270;
                          v823 = v1431;
                          if ( v1414 == 1 )
                            v823 = v1453;
                          v1432 = v823;
                          memset_0(v1851, 0, 0x5CuLL);
                          LODWORD(v5) = 0;
                          v618 = 0;
                          v824 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10F8[0])(0LL, 0LL, 1027LL);
                          if ( v824 )
                          {
                            v826 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10B8[0])(
                                     v1406,
                                     v817,
                                     72LL);
                            v1851[4] = 400;
                            v1851[0] = -v826;
                            v1852 = 5;
                            StringCchCopyW((char *)&v1853, 32LL, (char *)v1432);
                            v827 = ((__int64 (__fastcall *)(_DWORD *))off_1801B1020[0])(v1851);
                            if ( v827 )
                            {
                              v1801 = (void *)v827;
                            }
                            else
                            {
                              v828 = GetLastError();
                              v618 = v828;
                              if ( v828 > 0 )
                                v618 = (unsigned __int16)v828 | 0x80070000;
                              if ( v618 >= 0 )
                                v618 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1801B1160[0])(0LL, v824);
                          }
                          else
                          {
                            v825 = GetLastError();
                            v618 = v825;
                            if ( v825 > 0 )
                              v618 = (unsigned __int16)v825 | 0x80070000;
                            if ( v618 < 0 )
                              goto LABEL_1271;
                            v618 = -2147467259;
                          }
                          if ( v618 < 0 )
                          {
LABEL_1271:
                            ((void (__fastcall *)(_QWORD, SIZE_T))off_1801B1160[0])(0LL, v1467);
                            v486 = 1;
                            goto LABEL_1272;
                          }
                          v829 = 0;
                          v830 = 0;
                          switch ( v1414 )
                          {
                            case 1:
                              goto LABEL_1209;
                            case 2:
                              v830 = 0;
                              v829 = (int)v1748 / 4;
                              break;
                            case 3:
LABEL_1209:
                              v829 = v1748;
                              v830 = HIDWORD(v1748);
                              break;
                          }
                          v1746 = __PAIR64__(v830, v829);
                          if ( v1414 == 1 )
                          {
                            v831 = 150;
                            v1407 = 32;
                          }
                          else if ( (unsigned int)(v1414 - 2) > 1 )
                          {
                            LODWORD(v5) = v1478;
                            v1407 = v1478;
                            v831 = v1478;
                          }
                          else
                          {
                            v831 = 0;
                            v1407 = 0;
                          }
                          v1389 = v831;
                          v832 = v829 - v831 - v5;
                          v618 = 0;
                          v833 = v1797;
                          DWORD2(v1805) = v832;
                          DWORD2(v1804) = v832;
                          v1454 = (unsigned __int16 *)((__int64 (__fastcall *)(SIZE_T, SIZE_T))off_1801B1078)(
                                                        v1467,
                                                        v1800);
                          if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1801B10D8)(
                                                v1467,
                                                v833,
                                                0xFFFFFFFFLL,
                                                &v1804,
                                                3152,
                                                0LL) )
                            v618 = -2147467259;
                          if ( v1454 )
                            ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1801B1078)(v1467, v1454);
                          if ( v618 < 0 )
                            goto LABEL_1270;
                          v618 = 0;
                          v834 = v1798;
                          v1455 = (unsigned __int16 *)((__int64 (__fastcall *)(SIZE_T, void *))off_1801B1078)(
                                                        v1467,
                                                        v1801);
                          if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1801B10D8)(
                                                v1467,
                                                v834,
                                                0xFFFFFFFFLL,
                                                &v1805,
                                                3152,
                                                0LL) )
                            v618 = -2147467259;
                          if ( v1455 )
                            ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1801B1078)(v1467, v1455);
                          if ( v618 < 0 )
                            goto LABEL_1270;
                          if ( (unsigned int)(v1414 - 2) <= 1 )
                          {
                            v832 = DWORD2(v1805);
                            if ( SDWORD2(v1804) > SDWORD2(v1805) )
                              v832 = DWORD2(v1804);
                          }
                          if ( v1795 )
                          {
                            off_1801B1150((CPolicyConfig *)&v1804);
                            v835 = v832 + (_DWORD)v5 - DWORD2(v1805);
                          }
                          else
                          {
                            off_1801B1150((CPolicyConfig *)&v1804);
                            v835 = v1389;
                          }
                          ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_1801B1150)(
                            &v1805,
                            v835,
                            (unsigned int)(v1407 + HIDWORD(v1804)));
                          if ( (unsigned int)(v1414 - 2) <= 1 )
                          {
                            v1746 = __PAIR64__(HIDWORD(v1805), v832);
                            v1803 = -5723992;
                            goto LABEL_1256;
                          }
                          if ( v1414 != 1 )
                            goto LABEL_1256;
                          v1803 = 0xFFFFFF;
                          memset_0(v1854, 0, 0x5CuLL);
                          v618 = 0;
                          v836 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10F8[0])(0LL, 0LL, 1027LL);
                          if ( v836 )
                          {
                            v838 = v1393;
                            v839 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1801B10B8[0])(11LL, v1393);
                            v1854[4] = 400;
                            v1854[0] = -v839;
                            v1855 = 5;
                            StringCchCopyW((char *)&v1856, 32LL, (char *)v1483);
                            v840 = ((__int64 (__fastcall *)(_DWORD *))off_1801B1020[0])(v1854);
                            if ( v840 )
                            {
                              v1802 = v840;
                            }
                            else
                            {
                              v841 = GetLastError();
                              v618 = v841;
                              if ( v841 > 0 )
                                v618 = (unsigned __int16)v841 | 0x80070000;
                              if ( v618 >= 0 )
                                v618 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1801B1160[0])(0LL, v836);
                          }
                          else
                          {
                            v837 = GetLastError();
                            v618 = v837;
                            if ( v837 > 0 )
                              v618 = (unsigned __int16)v837 | 0x80070000;
                            v838 = v1393;
                            if ( v618 < 0 )
                              goto LABEL_1270;
                            v618 = -2147467259;
                          }
                          if ( v618 >= 0 )
                          {
                            v618 = 0;
                            v842 = v1799;
                            v1808 = v832;
                            v843 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1801B1078)(v1467, v1802);
                            if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, unsigned int *, int, _QWORD))off_1801B10D8)(
                                                  v1467,
                                                  v842,
                                                  0xFFFFFFFFLL,
                                                  &v1806,
                                                  1120,
                                                  0LL) )
                              v618 = -2147467259;
                            if ( v843 )
                              ((void (__fastcall *)(SIZE_T, __int64))off_1801B1078)(v1467, v843);
                            if ( v618 >= 0 )
                            {
                              v844 = v1808 + 24;
                              if ( (int)(v1808 + 24) < 90 )
                                v844 = 90;
                              v1808 = v844;
                              v1809 = 32;
                              v1806 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10B8[0])(
                                        v1806,
                                        v838,
                                        96LL);
                              v1807 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10B8[0])(
                                        v1807,
                                        v838,
                                        96LL);
                              v1808 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10B8[0])(
                                        v1808,
                                        v838,
                                        96LL);
                              v1809 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B10B8[0])(
                                        v1809,
                                        v838,
                                        96LL);
                              off_1801B1150((CPolicyConfig *)&v1806);
LABEL_1256:
                              v845 = v1795;
                              v846 = HIDWORD(v1746);
                              v847 = v1746;
                              switch ( v1414 )
                              {
                                case 1:
                                  LODWORD(v5) = 0;
                                  v1745 = 0LL;
                                  goto LABEL_1265;
                                case 2:
                                  memset_0(v1830, 0, 0x28uLL);
                                  v851 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1801B1148[0])(0LL, 1LL);
                                  v1830[0] = 40;
                                  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_1801B1108)(
                                                        v851,
                                                        v1830) )
                                    goto LABEL_1264;
                                  ((void (__fastcall *)(_QWORD, int *))off_1801B1140[0])(0LL, &v1831);
                                  ((void (__fastcall *)(_QWORD, _DWORD *))off_1801B1140[0])(0LL, v1832);
                                  if ( v845 )
                                    v849 = v1831 + 5 * v1832[0] / 100;
                                  else
                                    v849 = 95 * (v1832[0] - v847) / 100;
                                  v850 = 95 * (v1832[1] - v846);
                                  break;
                                case 3:
                                  memset_0(v1827, 0, 0x28uLL);
                                  v848 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1801B1148[0])(0LL, 1LL);
                                  v1827[0] = 40;
                                  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_1801B1108)(
                                                        v848,
                                                        v1827) )
                                    goto LABEL_1264;
                                  ((void (__fastcall *)(_QWORD, char *))off_1801B1140[0])(0LL, &v1828);
                                  ((void (__fastcall *)(_QWORD, _DWORD *))off_1801B1140[0])(0LL, v1829);
                                  v849 = 50 * (v1829[0] - v847) / 100;
                                  v850 = 50 * (v1829[1] - v846);
                                  break;
                                default:
                                  goto LABEL_1264;
                              }
                              LODWORD(v1745) = v849;
                              HIDWORD(v1745) = v850 / 100;
LABEL_1264:
                              LODWORD(v5) = 0;
LABEL_1265:
                              v618 = 0;
                              goto LABEL_1271;
                            }
                          }
LABEL_1270:
                          LODWORD(v5) = 0;
                          goto LABEL_1271;
                        }
                        v1406 = 11;
                        goto LABEL_1171;
                      }
                      v810 = GetLastError();
                      v618 = v810;
                      if ( v810 > 0 )
                        v618 = (unsigned __int16)v810 | 0x80070000;
                      if ( v618 < 0 )
                      {
LABEL_1147:
                        v5 = 3LL;
                        do
                        {
                          v812 = (_WORD *)*v797;
                          if ( *v797 )
                          {
                            v813 = -1LL;
                            do
                              v59 = v812[++v813] == 0;
                            while ( !v59 );
                            memset(v812, 0, 2 * v813 + 2);
                            operator delete((void *)*v797);
                          }
                          ++v797;
                          --v5;
                        }
                        while ( v5 );
                        v670 = (char *)v1431;
                        goto LABEL_1155;
                      }
                    }
                    else
                    {
                      v811 = GetLastError();
                      v618 = v811;
                      if ( v811 > 0 )
                        v618 = (unsigned __int16)v811 | 0x80070000;
                      if ( v618 < 0 )
                        goto LABEL_1147;
                    }
                    break;
                  }
                  v618 = -2147467259;
                  goto LABEL_1147;
                }
                v552 = dword_1801B31F0;
                v486 = 1;
LABEL_880:
                dword_1801B31F0 = v552 + 1;
                goto LABEL_881;
              }
              v487 = dword_1801B31F0;
              v486 = 1;
LABEL_832:
              dword_1801B31F0 = v487 + 1;
              goto LABEL_833;
            }
            v7 = 4LL;
LABEL_1994:
            v381 = v1535;
LABEL_448:
            while ( _InterlockedCompareExchange(&dword_1801B3830, 1, 0) )
              ;
            v382 = dword_1801B31F0;
            if ( dword_1801B31F0 > 0 )
            {
              --dword_1801B31F0;
              if ( v382 == 1 )
              {
                v383 = (HMODULE *)&unk_1801B3750;
                do
                {
                  if ( *v383 )
                    FreeLibrary(*v383);
                  v383 += 3;
                  --v7;
                }
                while ( v7 );
                memset_0(&unk_1801B3750, 0, 0x60uLL);
                qword_1801B10D0 = 0LL;
                off_1801B1000[0] = sub_18013D300;
                off_1801B1008[0] = sub_18013D300;
                off_1801B1010[0] = sub_18013D300;
                off_1801B1018[0] = sub_18013D300;
                off_1801B1020[0] = sub_18013D300;
                off_1801B1028 = sub_18013D300;
                off_1801B1030[0] = sub_18013D300;
                off_1801B1038 = sub_18013D300;
                off_1801B1040[0] = CPolicyConfig::GetName;
                off_1801B1048 = CPolicyConfig::GetName;
                off_1801B1050[0] = sub_18013D300;
                off_1801B1058[0] = sub_18013D300;
                off_1801B1060[0] = sub_18013D300;
                off_1801B1068[0] = sub_18013D300;
                off_1801B1070[0] = sub_18013D300;
                off_1801B1078 = sub_18013D300;
                off_1801B1080 = CPolicyConfig::GetName;
                off_1801B1088[0] = sub_18013D300;
                off_1801B1090[0] = sub_18013D300;
                off_1801B1098[0] = sub_18013D300;
                off_1801B10A0[0] = sub_18013D300;
                off_1801B10A8[0] = sub_18013D300;
                off_1801B10B0[0] = sub_18013D300;
                off_1801B10B8[0] = sub_180043D80;
                off_1801B10C0[0] = sub_18013D300;
                off_1801B10C8 = sub_18013D300;
                off_1801B10D8 = CPolicyConfig::GetName;
                off_1801B10E0[0] = sub_18013D300;
                off_1801B10E8[0] = sub_18013D300;
                off_1801B10F0[0] = sub_18013D300;
                off_1801B10F8[0] = sub_18013D300;
                off_1801B1100 = sub_18013D300;
                off_1801B1108 = CPolicyConfig::GetName;
                off_1801B1110[0] = sub_18013D300;
                off_1801B1118[0] = sub_18013D300;
                off_1801B1120[0] = sub_18013D300;
                off_1801B1128[0] = sub_18013D300;
                off_1801B1130[0] = sub_18013D300;
                off_1801B1138 = sub_18013D300;
                off_1801B1140[0] = CPolicyConfig::GetName;
                off_1801B1148[0] = CPolicyConfig::GetName;
                off_1801B1150 = CPolicyConfig::GetName;
                off_1801B1158 = CPolicyConfig::GetName;
                off_1801B1160[0] = sub_18013D300;
                off_1801B1168 = sub_18013D300;
              }
            }
            _InterlockedExchange(&dword_1801B3830, 0);
            SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1539);
            if ( v84 >= 0 && v381 == 4 )
            {
              Ptr = (_DWORD *)SP<unsigned char,SP_HLOCAL<unsigned char>>::GetPtrAs<unsigned long>(&v1658);
              v385 = v1657;
              *((_DWORD *)v1657 + 40) = *Ptr;
LABEL_459:
              SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1658);
              v2 = *((_DWORD *)v385 + 40);
              goto LABEL_2;
            }
LABEL_462:
            v385 = v1657;
            goto LABEL_459;
          }
          memcpy_0(v76, Src, Size);
          v78 = (unsigned int)Size;
          v1416 = (SIZE_T)v77;
          v1642 = &unk_1801B2630;
          v1643 = 8LL;
          v79 = GetProcessHeap();
          v80 = HeapAlloc(v79, 8u, 8uLL);
          v1443 = v80;
          v81 = (unsigned __int16 *)v80;
          if ( !v80 )
          {
            v84 = -1073741801;
            v1498 = -1073741801;
            goto LABEL_760;
          }
          memcpy_0(v80, v1642, v1643);
          v82 = v1643;
          v1430 = v81;
          v1644 = __rdtsc();
          v1629 = 8;
          v83 = (unsigned int)(v78 + 4);
          if ( (unsigned int)v78 >= 0xFFFFFFFC )
          {
            v84 = -1073741675;
            v83 = 8LL;
            v1498 = -1073741675;
          }
          else
          {
            v84 = 0;
            v1498 = 0;
            v1629 = v78 + 4;
          }
          if ( v84 < 0 )
            goto LABEL_759;
          v85 = (unsigned int)(v83 + 8);
          if ( (unsigned int)v83 >= 0xFFFFFFF8 )
            goto LABEL_757;
          v86 = v1643 + 4;
          if ( (unsigned int)v1643 >= 0xFFFFFFFC )
          {
            v84 = -1073741675;
            v86 = v83;
            v1498 = -1073741675;
          }
          else
          {
            v84 = 0;
            v1498 = 0;
            v1629 = v1643 + 4;
          }
          if ( v84 < 0 )
            goto LABEL_759;
          v87 = v85 + v86;
          if ( v87 < (unsigned int)v85 )
            goto LABEL_757;
          v1629 = 12;
          v88 = v87 + 12;
          if ( v87 + 12 < v87 )
            goto LABEL_757;
          if ( StringLengthWorkerW_0((STRSAFE_PCNZWCH)v83, v85, &pcchLength) < 0 )
          {
            LODWORD(v5) = 0;
            v84 = -1073741762;
            pcchLength = 0LL;
            v1498 = -1073741762;
            goto LABEL_760;
          }
          v90 = 2 * ++pcchLength + 4;
          if ( (unsigned int)(2 * pcchLength) >= 0xFFFFFFFC )
          {
            v90 = v1629;
            v84 = -1073741675;
            v1498 = -1073741675;
          }
          else
          {
            v84 = v89;
            v1498 = v89;
            v1629 = 2 * pcchLength + 4;
          }
          if ( v84 < 0 )
            goto LABEL_759;
          v91 = v90 + v88;
          if ( v90 + v88 < v88 || (v1629 = 8, v91 + 8 < v91) || (v1629 = 8, v91 + 16 < v91 + 8) )
          {
LABEL_757:
            v84 = -805306219;
            goto LABEL_758;
          }
          HIDWORD(v1742) = v91 + 16;
          v92 = v91 + 16;
          v93 = GetProcessHeap();
          v94 = HeapAlloc(v93, 8u, v92);
          if ( !v94 )
          {
            v84 = -1073741801;
            goto LABEL_758;
          }
          v95 = 0;
          v1743 = v94;
          LODWORD(v1742) = 0;
          v1630 = 0;
          if ( v94 + 1 < v94 )
          {
LABEL_550:
            v84 = -1073741675;
            goto LABEL_758;
          }
          if ( v94 + 2 > (_DWORD *)((char *)v94 + HIDWORD(v1742)) )
          {
            v84 = -1073741789;
            goto LABEL_758;
          }
          *v94 = 4;
          v94[1] = v1630;
          v96 = v1742 + 1;
          LODWORD(v1742) = v1742 + 1;
          if ( (_DWORD)v78 )
          {
            if ( v1743 )
            {
              v97 = v1743;
              v98 = 0;
              if ( v96 )
              {
                v99 = v1632;
                while ( 1 )
                {
                  if ( *v97 >= 0xFFFFFFFC )
                  {
                    v84 = -1073741675;
                    v1498 = -1073741675;
                  }
                  else
                  {
                    v99 = *v97 + 4;
                    v1498 = 0;
                    v84 = 0;
                    v1632 = v99;
                  }
                  if ( v84 < 0 )
                    break;
                  if ( (_DWORD *)((char *)v97 + v99) < v97 )
                    goto LABEL_550;
                  ++v98;
                  v97 = (_DWORD *)((char *)v97 + v99);
                  if ( v98 >= v96 )
                    goto LABEL_75;
                }
              }
              else
              {
LABEL_75:
                if ( v97 + 1 < v97 )
                  goto LABEL_550;
                v1498 = 0;
                v84 = 0;
                if ( (char *)v97 + v78 + 4 > (char *)v1743 + HIDWORD(v1742) )
                {
                  v84 = -1073741789;
                  goto LABEL_758;
                }
                *v97 = v78;
                memcpy_0(v97 + 1, v77, v78);
                v96 = v1742 + 1;
                LODWORD(v1742) = v1742 + 1;
                v95 = 0;
              }
            }
            else
            {
              v403 = RtlUIntAdd(4LL, (unsigned int)v78, &v1631);
              v404 = v1632;
              v84 = v403;
              v1498 = v403;
              if ( v403 >= 0 )
                v404 = v1631;
              v1632 = v404;
              if ( v403 >= 0 )
              {
                v405 = RtlUIntAdd(HIDWORD(v1742), v404, (char *)&v1742 + 4);
                v96 = v1742;
                v84 = v405;
                v1498 = v405;
                if ( v405 >= 0 )
                {
                  v96 = v1742 + 1;
                  LODWORD(v1742) = v1742 + 1;
                  goto LABEL_79;
                }
              }
            }
          }
          else
          {
            v84 = -1073741811;
            v1498 = -1073741811;
          }
          if ( v84 < 0 )
            goto LABEL_759;
LABEL_79:
          if ( !v82 )
          {
            v84 = -1073741811;
            v1498 = -1073741811;
LABEL_91:
            if ( v84 >= 0 )
              goto LABEL_92;
LABEL_759:
            LODWORD(v5) = 0;
            goto LABEL_760;
          }
          if ( !v1743 )
          {
            v406 = RtlUIntAdd(4LL, v82, &v1633);
            v407 = v1634;
            v84 = v406;
            v1498 = v406;
            if ( v406 >= 0 )
              v407 = v1633;
            v1634 = v407;
            if ( v406 >= 0 )
            {
              v408 = RtlUIntAdd(HIDWORD(v1742), v407, (char *)&v1742 + 4);
              v96 = v1742;
              v84 = v408;
              v1498 = v408;
              if ( v408 >= 0 )
              {
                v96 = v1742 + 1;
                LODWORD(v1742) = v1742 + 1;
LABEL_92:
                v1646 = v1644;
                if ( v1743 )
                {
                  v103 = (size_t)v1743;
                  LODWORD(v5) = 0;
                  v104 = 0;
                  if ( v96 )
                  {
                    v105 = v1636;
                    do
                    {
                      if ( *(_DWORD *)v103 >= 0xFFFFFFFC )
                      {
                        v84 = -1073741675;
                        v1498 = -1073741675;
                      }
                      else
                      {
                        v105 = *(_DWORD *)v103 + 4;
                        v1498 = 0;
                        v84 = 0;
                        v1636 = v105;
                      }
                      if ( v84 < 0 )
                        goto LABEL_760;
                      if ( v103 + v105 < v103 )
                        goto LABEL_756;
                      ++v104;
                      v103 += v105;
                    }
                    while ( v104 < v96 );
                  }
                  if ( v103 + 4 < v103 )
                    goto LABEL_756;
                  v106 = (const wchar_t *)((char *)v1743 + HIDWORD(v1742));
                  v84 = 0;
                  v1498 = 0;
                  if ( v103 + 12 > (unsigned __int64)v106 )
                  {
                    v84 = -1073741789;
                    v1498 = -1073741789;
                    goto LABEL_760;
                  }
                  *(_DWORD *)v103 = 8;
                  *(_QWORD *)(v103 + 4) = v1646;
                  LODWORD(v1742) = v1742 + 1;
                }
                else
                {
                  v409 = RtlUIntAdd(4LL, 8LL, &v1635);
                  v103 = v1636;
                  v84 = v409;
                  v1498 = v409;
                  if ( v409 >= 0 )
                    v103 = v1635;
                  v1636 = v103;
                  if ( v409 >= 0 )
                  {
                    v1498 = RtlUIntAdd(HIDWORD(v1742), v103, (char *)&v1742 + 4);
                    v84 = v1498;
                    if ( v1498 >= 0 )
                    {
                      LODWORD(v1742) = v1742 + 1;
                      LODWORD(v5) = 0;
                      goto LABEL_104;
                    }
                  }
                  LODWORD(v5) = 0;
                }
                if ( v84 < 0 )
                  goto LABEL_760;
LABEL_104:
                if ( StringLengthWorkerW_0(v106, v103, &v1647) < 0 )
                {
                  v84 = -1073741762;
                  v1647 = 0LL;
                  v1498 = -1073741762;
                  goto LABEL_760;
                }
                if ( v1647 + 1 < v1647 )
                {
                  v1647 = -1LL;
                  goto LABEL_756;
                }
                v107 = (unsigned int)(2 * ++v1647);
                if ( (_DWORD)v107 )
                {
                  if ( !v1743 )
                  {
                    v410 = RtlUIntAdd(4LL, (unsigned int)v107, &v1540);
                    v411 = v1541;
                    v84 = v410;
                    v1498 = v410;
                    if ( v410 >= 0 )
                      v411 = v1540;
                    v1541 = v411;
                    if ( v410 >= 0 )
                    {
                      v1498 = RtlUIntAdd(HIDWORD(v1742), v411, (char *)&v1742 + 4);
                      v84 = v1498;
                      if ( v1498 >= 0 )
                      {
                        LODWORD(v1742) = v1742 + 1;
                        v84 = 0;
                        v1498 = 0;
                      }
                    }
LABEL_118:
                    if ( v84 < 0 )
                      goto LABEL_760;
                    v1542 = v1581;
                    if ( v1743 )
                    {
                      v111 = 0;
                      v112 = v1743;
                      if ( (_DWORD)v1742 )
                      {
                        v113 = v1544;
                        do
                        {
                          if ( *v112 >= 0xFFFFFFFC )
                          {
                            v84 = -1073741675;
                            v1498 = -1073741675;
                          }
                          else
                          {
                            v113 = *v112 + 4;
                            v1498 = 0;
                            v84 = 0;
                            v1544 = v113;
                          }
                          if ( v84 < 0 )
                            goto LABEL_760;
                          if ( (_DWORD *)((char *)v112 + v113) < v112 )
                            goto LABEL_756;
                          ++v111;
                          v112 = (_DWORD *)((char *)v112 + v113);
                        }
                        while ( v111 < (unsigned int)v1742 );
                      }
                      if ( v112 + 1 < v112 )
                        goto LABEL_756;
                      v84 = 0;
                      v1498 = 0;
                      if ( v112 + 2 > (_DWORD *)((char *)v1743 + HIDWORD(v1742)) )
                      {
                        v84 = -1073741789;
                        v1498 = -1073741789;
                        goto LABEL_760;
                      }
                      *v112 = 4;
                      v112[1] = v1542;
                      LODWORD(v1742) = v1742 + 1;
                    }
                    else
                    {
                      v412 = RtlUIntAdd(4LL, 4LL, &v1543);
                      v413 = v1544;
                      v84 = v412;
                      v1498 = v412;
                      if ( v412 >= 0 )
                        v413 = v1543;
                      v1544 = v413;
                      if ( v412 >= 0 )
                      {
                        v1498 = RtlUIntAdd(HIDWORD(v1742), v413, (char *)&v1742 + 4);
                        v84 = v1498;
                        if ( v1498 >= 0 )
                        {
                          LODWORD(v1742) = v1742 + 1;
LABEL_131:
                          v1545 = 4;
                          if ( !v1743 )
                          {
                            v414 = RtlUIntAdd(4LL, 4LL, &v1546);
                            v415 = v1547;
                            v84 = v414;
                            v1498 = v414;
                            if ( v414 >= 0 )
                              v415 = v1546;
                            v1547 = v415;
                            if ( v414 >= 0 )
                            {
                              v1498 = RtlUIntAdd(HIDWORD(v1742), v415, (char *)&v1742 + 4);
                              v84 = v1498;
                              if ( v1498 >= 0 )
                              {
                                LODWORD(v1742) = v1742 + 1;
                                goto LABEL_143;
                              }
                            }
LABEL_142:
                            if ( v84 >= 0 )
                            {
LABEL_143:
                              v1548 = 8;
                              v1533 = 12;
                              v1498 = RtlUIntAdd(8LL, 12LL, &v1548);
                              v84 = v1498;
                              if ( v1498 < 0 )
                                goto LABEL_594;
                              v1533 = v117;
                              v1498 = RtlUIntAdd(v1548, v117, &v1548);
                              v84 = v1498;
                              if ( v1498 < 0 )
                                goto LABEL_594;
                              v1533 = 8;
                              v1498 = RtlUIntAdd(v1548, 8LL, &v1548);
                              v84 = v1498;
                              if ( v1498 < 0
                                || (v1533 = 8, v1498 = RtlUIntAdd(v1548, 8LL, &v1548), v84 = v1498, v1498 < 0)
                                || (v1533 = 8, v1498 = RtlUIntAdd(v1548, 8LL, &v1548), v84 = v1498, v1498 < 0) )
                              {
LABEL_594:
                                v118 = v1533;
                              }
                              else
                              {
                                v118 = v1548;
                              }
                              v1492 = v118;
                              if ( v84 < 0 )
                                goto LABEL_760;
                              v119 = 0LL;
                              v1444 = 0LL;
                              v120 = 0;
                              v1648 = 0LL;
                              v1500 = 0LL;
                              v1538 = 0LL;
                              dwBytes = 0LL;
                              v1452 = 0LL;
                              v1466 = 0LL;
                              v1649 = __rdtsc();
                              v1550 = 8;
                              v121 = RtlUIntAdd(8LL, HIDWORD(v1742), &v1550);
                              if ( v121 >= 0 )
                              {
                                v122 = (v1550 + 7) & 0xFFFFFFF8;
                                if ( v122 < v1550 )
                                {
                                  v121 = -1073741675;
                                }
                                else
                                {
                                  v1550 = (v1550 + 7) & 0xFFFFFFF8;
                                  v123 = v122;
                                  v124 = GetProcessHeap();
                                  v125 = (char *)HeapAlloc(v124, 8u, v123);
                                  v126 = v125;
                                  if ( v125 )
                                  {
                                    v1650 = v125;
                                    *(_DWORD *)v125 = v1742;
                                    v121 = RtlULongLongAdd(v125, 4LL, &v1650);
                                    if ( v121 < 0
                                      || (v128 = v1650,
                                          *(_DWORD *)v1650 = HIDWORD(v1742),
                                          v121 = RtlULongLongAdd(v128, v127, &v1650),
                                          v121 < 0) )
                                    {
                                      v416 = GetProcessHeap();
                                      HeapFree(v416, 0, v126);
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v126[v1550 - 8] = v1649;
                                      memcpy_0(v1650, v1743, HIDWORD(v1742));
                                      v120 = v1550;
                                      v119 = v126;
                                      v1444 = (unsigned __int8 *)v126;
                                    }
                                  }
                                  else
                                  {
                                    v121 = -1073741801;
                                  }
                                }
                              }
                              v84 = v121 | 0x10000000;
                              v1498 = v84;
                              if ( v84 < 0 )
                              {
LABEL_332:
                                if ( v119 )
                                {
                                  v324 = GetProcessHeap();
                                  HeapFree(v324, 0, v119);
                                }
                                v325 = v1648;
                                if ( v1648 )
                                {
                                  v326 = (void *)*((_QWORD *)v1648 + 1);
                                  if ( v326 )
                                  {
                                    v327 = GetProcessHeap();
                                    HeapFree(v327, 0, v326);
                                    v325[1] = 0LL;
                                  }
                                  v328 = (void *)v325[3];
                                  if ( v328 )
                                  {
                                    v329 = GetProcessHeap();
                                    HeapFree(v329, 0, v328);
                                    v325[3] = 0LL;
                                  }
                                  v330 = (void *)v325[5];
                                  if ( v330 )
                                  {
                                    v331 = GetProcessHeap();
                                    HeapFree(v331, 0, v330);
                                    v325[5] = 0LL;
                                  }
                                  v332 = GetProcessHeap();
                                  HeapFree(v332, 0, v325);
                                  v1648 = 0LL;
                                }
                                if ( v1500 )
                                {
                                  v333 = GetProcessHeap();
                                  HeapFree(v333, 0, v1500);
                                }
                                v334 = v1538;
                                if ( v1538 )
                                {
                                  v335 = GetProcessHeap();
                                  HeapFree(v335, 0, v334);
                                }
                                if ( v1452 )
                                {
                                  v336 = (void *)*((_QWORD *)v1452 + 1);
                                  if ( v336 )
                                  {
                                    v337 = GetProcessHeap();
                                    HeapFree(v337, 0, v336);
                                    *((_QWORD *)v1452 + 1) = 0LL;
                                  }
                                  v338 = (void *)*((_QWORD *)v1452 + 3);
                                  if ( v338 )
                                  {
                                    v339 = GetProcessHeap();
                                    HeapFree(v339, 0, v338);
                                    *((_QWORD *)v1452 + 3) = 0LL;
                                  }
                                  v340 = (void *)*((_QWORD *)v1452 + 5);
                                  if ( v340 )
                                  {
                                    v341 = GetProcessHeap();
                                    HeapFree(v341, 0, v340);
                                    *((_QWORD *)v1452 + 5) = 0LL;
                                  }
                                  v342 = GetProcessHeap();
                                  HeapFree(v342, 0, v1452);
                                }
                                if ( v1466 )
                                {
                                  v343 = GetProcessHeap();
                                  HeapFree(v343, 0, v1466);
                                }
                                if ( v84 < 0 )
                                  goto LABEL_722;
                                if ( !(_DWORD)v1736 )
                                {
                                  v84 = -1073425151;
                                  v1498 = -1073425151;
                                  goto LABEL_722;
                                }
                                v344 = 4LL;
                                if ( v1737 )
                                {
                                  v1668 = (int *)v1737;
                                  v1498 = RtlULongLongAdd(v1737, 4LL, &v1668);
                                  v84 = v1498;
                                  if ( v1498 < 0 )
                                  {
                                    v345 = v1563;
                                    v346 = v1669;
                                  }
                                  else
                                  {
                                    v1563 = v345;
                                    if ( v345 )
                                    {
                                      v346 = v1668;
                                    }
                                    else
                                    {
                                      v346 = 0LL;
                                      v1668 = 0LL;
                                    }
                                    v1669 = v346;
                                  }
                                  if ( v1498 >= 0 )
                                  {
                                    if ( v345 != (_DWORD)v344 )
                                    {
                                      v74 = (void *)v1416;
                                      v84 = -1073741789;
                                      v1498 = -1073741789;
                                      goto LABEL_436;
                                    }
                                    v347 = *v346;
                                    v1628 = v347;
LABEL_366:
                                    if ( v84 >= 0 )
                                    {
                                      if ( v347 == -805306333 )
                                      {
                                        v1628 = -2147024774;
                                      }
                                      else if ( v347 != -2147024774 )
                                      {
                                        v1498 = v347;
                                        v84 = v347;
                                        if ( v347 < 0 )
                                          goto LABEL_722;
                                      }
                                      if ( (_DWORD)v1736 != 6 )
                                      {
                                        v74 = (void *)v1416;
                                        v84 = -1073425151;
                                        v1498 = -1073425151;
                                        goto LABEL_436;
                                      }
                                      if ( !v1737 )
                                      {
                                        v84 = -1073741811;
                                        v1498 = -1073741811;
LABEL_383:
                                        if ( v84 >= 0 )
                                        {
                                          if ( v1737 )
                                          {
                                            v353 = (unsigned int *)v1737;
                                            v354 = 0;
                                            v1673 = v1737;
                                            do
                                            {
                                              v355 = v353 + 1;
                                              if ( v353 + 1 < v353
                                                || (v353 = (unsigned int *)((char *)v355 + *v353), v353 < v355) )
                                              {
                                                v84 = -1073741675;
                                                goto LABEL_739;
                                              }
                                              ++v354;
                                              v1673 = v353;
                                            }
                                            while ( v354 < 2 );
                                            v356 = *v353;
                                            v1498 = RtlULongLongAdd(v353, v344, &v1673);
                                            v84 = v1498;
                                            if ( v1498 < 0 )
                                            {
                                              v356 = v1565;
                                              v357 = v1674;
                                            }
                                            else
                                            {
                                              v1565 = v356;
                                              if ( v356 )
                                              {
                                                v357 = v1673;
                                              }
                                              else
                                              {
                                                v357 = 0LL;
                                                v1673 = 0LL;
                                              }
                                              v1674 = v357;
                                            }
                                            if ( v1498 >= 0 )
                                            {
                                              if ( v356 == 4 )
                                              {
                                                v1566 = *v357;
                                                goto LABEL_396;
                                              }
                                              v74 = (void *)v1416;
                                              v84 = -1073741789;
                                              v1498 = -1073741789;
                                              goto LABEL_436;
                                            }
                                          }
                                          else
                                          {
                                            v84 = -1073741811;
LABEL_739:
                                            v1498 = v84;
LABEL_396:
                                            if ( v84 >= 0 )
                                            {
                                              if ( !v1737 )
                                              {
                                                v74 = (void *)v1416;
                                                v84 = -1073741811;
                                                v1498 = -1073741811;
                                                goto LABEL_436;
                                              }
                                              v358 = (unsigned int *)v1737;
                                              v359 = 0;
                                              v1675 = v1737;
                                              do
                                              {
                                                v360 = v358 + 1;
                                                if ( v358 + 1 < v358
                                                  || (v358 = (unsigned int *)((char *)v360 + *v358), v358 < v360) )
                                                {
                                                  v74 = (void *)v1416;
                                                  v84 = -1073741675;
                                                  v1498 = -1073741675;
                                                  goto LABEL_436;
                                                }
                                                ++v359;
                                                v1675 = v358;
                                              }
                                              while ( v359 < 3 );
                                              v361 = RtlULongLongAdd(v358, v344, &v1675);
                                              v1498 = v361;
                                              v84 = v361;
                                              if ( v361 < 0 )
                                              {
                                                v362 = v1567;
                                                v364 = v1676;
                                              }
                                              else
                                              {
                                                v1567 = v362;
                                                if ( v362 )
                                                {
                                                  v364 = v1675;
                                                }
                                                else
                                                {
                                                  v364 = 0LL;
                                                  v1675 = 0LL;
                                                }
                                                v1676 = v364;
                                              }
                                              if ( v361 >= 0 )
                                              {
                                                v365 = (unsigned int *)v1737;
                                                v366 = 0;
                                                v1677 = (unsigned int *)v1737;
                                                do
                                                {
                                                  v367 = v365 + 1;
                                                  if ( v365 + 1 < v365
                                                    || (v365 = (unsigned int *)((char *)v367 + *v365), v365 < v367) )
                                                  {
                                                    v84 = -1073741675;
                                                    v1498 = -1073741675;
                                                    goto LABEL_418;
                                                  }
                                                  ++v366;
                                                  v1677 = v365;
                                                }
                                                while ( v366 < 4 );
                                                v368 = *v365;
                                                v1498 = RtlULongLongAdd(v365, v363, &v1677);
                                                v84 = v1498;
                                                if ( v1498 < 0 )
                                                {
                                                  v368 = v1568;
                                                  v369 = v1678;
                                                }
                                                else
                                                {
                                                  v1568 = v368;
                                                  if ( v368 )
                                                  {
                                                    v369 = v1677;
                                                  }
                                                  else
                                                  {
                                                    v369 = 0LL;
                                                    v1677 = 0LL;
                                                  }
                                                  v1678 = v369;
                                                }
                                                if ( v1498 < 0 )
                                                  goto LABEL_722;
                                                if ( v368 != 4 )
                                                {
                                                  v74 = (void *)v1416;
                                                  v84 = -1073741789;
                                                  v1498 = -1073741789;
                                                  goto LABEL_436;
                                                }
                                                v1569 = *v369;
LABEL_418:
                                                if ( v84 < 0 )
                                                  goto LABEL_722;
                                                v370 = (unsigned int *)v1737;
                                                v371 = 0;
                                                v1679 = (int *)v1737;
                                                do
                                                {
                                                  v372 = v370 + 1;
                                                  if ( v370 + 1 < v370
                                                    || (v370 = (unsigned int *)((char *)v372 + *v370), v370 < v372) )
                                                  {
                                                    v84 = -1073741675;
                                                    v1498 = -1073741675;
                                                    goto LABEL_430;
                                                  }
                                                  ++v371;
                                                  v1679 = (int *)v370;
                                                }
                                                while ( v371 < 5 );
                                                v373 = *v370;
                                                v1498 = RtlULongLongAdd(v370, v363, &v1679);
                                                v84 = v1498;
                                                if ( v1498 < 0 )
                                                {
                                                  v373 = v1570;
                                                  v374 = v1680;
                                                }
                                                else
                                                {
                                                  v1570 = v373;
                                                  if ( v373 )
                                                  {
                                                    v374 = v1679;
                                                  }
                                                  else
                                                  {
                                                    v374 = 0LL;
                                                    v1679 = 0LL;
                                                  }
                                                  v1680 = v374;
                                                }
                                                if ( v1498 < 0 )
                                                  goto LABEL_722;
                                                if ( v373 != 4 )
                                                {
                                                  v74 = (void *)v1416;
                                                  v84 = -1073741789;
                                                  v1498 = -1073741789;
                                                  goto LABEL_436;
                                                }
                                                v1627 = *v374;
LABEL_430:
                                                if ( v84 < 0 )
                                                  goto LABEL_722;
                                                if ( v1644 == v1672 )
                                                {
                                                  v1581 = v1627;
                                                  v1579 = v1566;
                                                  v1580 = v1569;
                                                  if ( v1569 > 4 )
                                                  {
                                                    v74 = (void *)v1416;
                                                    v84 = -2147024774;
                                                    v1498 = -2147024774;
                                                  }
                                                  else if ( v362 > 4 )
                                                  {
                                                    v74 = (void *)v1416;
                                                    v84 = -2147024774;
                                                    v1498 = -2147024774;
                                                  }
                                                  else
                                                  {
                                                    memcpy_0(v1482, v364, v362);
                                                    v74 = (void *)v1416;
                                                    if ( v1628 )
                                                    {
                                                      v84 = v1628;
                                                      v1498 = v1628;
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  v74 = (void *)v1416;
                                                  v84 = -1073425151;
                                                  v1498 = -1073425151;
                                                }
                                                goto LABEL_436;
                                              }
                                            }
                                          }
                                        }
                                        goto LABEL_722;
                                      }
                                      v348 = v1737;
                                      v349 = 0;
                                      v1670 = (int *)v1737;
                                      do
                                      {
                                        v1498 = RtlULongLongAdd(v348, v344, &v1670);
                                        v84 = v1498;
                                        if ( v1498 < 0 )
                                          goto LABEL_732;
                                        v1498 = RtlULongLongAdd(v1670, v350, &v1670);
                                        v84 = v1498;
                                        if ( v1498 < 0 )
                                          goto LABEL_732;
                                        v348 = v1670;
                                        ++v349;
                                      }
                                      while ( !v349 );
                                      v351 = *v1670;
                                      v1498 = RtlULongLongAdd(v1670, v344, &v1670);
                                      v84 = v1498;
                                      if ( v1498 < 0 )
                                      {
LABEL_732:
                                        v351 = v1564;
                                        v352 = v1671;
                                        goto LABEL_380;
                                      }
                                      v1564 = v351;
                                      if ( v351 )
                                      {
                                        v352 = v1670;
                                      }
                                      else
                                      {
                                        v352 = 0LL;
                                        v1670 = 0LL;
                                      }
                                      v1671 = v352;
LABEL_380:
                                      if ( v84 >= 0 )
                                      {
                                        if ( v351 != 8 )
                                        {
                                          v74 = (void *)v1416;
                                          v84 = -1073741789;
                                          v1498 = -1073741789;
                                          goto LABEL_436;
                                        }
                                        v1672 = *(_QWORD *)v352;
                                        goto LABEL_383;
                                      }
                                    }
LABEL_722:
                                    v74 = (void *)v1416;
                                    goto LABEL_436;
                                  }
                                }
                                else
                                {
                                  v84 = -1073741811;
                                  v1498 = -1073741811;
                                }
                                v347 = v1628;
                                goto LABEL_366;
                              }
                              v129 = v1444;
                              v130 = 0LL;
                              v1651 = 0LL;
                              v1652 = 0LL;
                              v1653 = 0LL;
                              v1654 = 0LL;
                              v1655 = 0LL;
                              v1656 = 0LL;
                              v1536 = 0LL;
                              if ( !v1444 )
                              {
                                v194 = -1073741811;
                                goto LABEL_182;
                              }
                              v131 = v120;
                              v1515 = v120;
                              if ( !v120
                                || (v132 = GetProcessHeap(),
                                    v133 = (char *)HeapAlloc(v132, 0, v120 + 8LL),
                                    v1520 = v133,
                                    (v134 = v133) == 0LL) )
                              {
                                v194 = -1073741823;
                                LODWORD(v5) = 0;
LABEL_179:
                                v195 = v1655;
                                if ( v1655 )
                                {
                                  v196 = GetProcessHeap();
                                  HeapFree(v196, 0, v195);
                                  v1655 = 0LL;
                                }
                                if ( v130 )
                                {
                                  v433 = (void *)v130[1];
                                  if ( v433 )
                                  {
                                    v434 = GetProcessHeap();
                                    HeapFree(v434, 0, v433);
                                    v130[1] = 0LL;
                                  }
                                  v435 = (void *)v130[3];
                                  if ( v435 )
                                  {
                                    v436 = GetProcessHeap();
                                    HeapFree(v436, 0, v435);
                                    v130[3] = 0LL;
                                  }
                                  v437 = (void *)v130[5];
                                  if ( v437 )
                                  {
                                    v438 = GetProcessHeap();
                                    HeapFree(v438, 0, v437);
                                    v130[5] = 0LL;
                                  }
                                  v439 = GetProcessHeap();
                                  HeapFree(v439, 0, v130);
                                }
LABEL_182:
                                v84 = v194 | 0x10000000;
                                v1498 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_331;
                                v197 = (const void **)v1648;
                                v1553 = 4;
                                v198 = RtlUIntAdd(4LL, *(unsigned int *)v1648, &v1553);
                                if ( v198 < 0
                                  || (v198 = RtlUIntAdd(v1553, 4LL, &v1553), v198 < 0)
                                  || (v198 = RtlUIntAdd(v1553, *((unsigned int *)v197 + 4), &v1553), v198 < 0)
                                  || (v198 = RtlUIntAdd(v1553, 4LL, &v1553), v198 < 0) )
                                {
                                  v199 = v1554;
                                }
                                else
                                {
                                  v199 = v1553 + *((_DWORD *)v197 + 8);
                                  if ( v199 < v1553 )
                                  {
                                    v198 = -1073741675;
                                    goto LABEL_638;
                                  }
                                  v198 = 0;
                                  v1554 = v1553 + *((_DWORD *)v197 + 8);
                                }
                                if ( v198 >= 0 )
                                {
                                  v200 = v199;
                                  v201 = GetProcessHeap();
                                  v202 = HeapAlloc(v201, 8u, v200);
                                  v203 = v202;
                                  if ( v202 )
                                  {
                                    v1660 = v202;
                                    *v202 = *(_DWORD *)v197;
                                    v198 = RtlULongLongAdd(v202, 4LL, &v1660);
                                    if ( v198 >= 0 )
                                    {
                                      memcpy_0(v1660, v197[1], *(unsigned int *)v197);
                                      v198 = RtlULongLongAdd(v1660, *(unsigned int *)v197, &v1660);
                                      if ( v198 >= 0 )
                                      {
                                        v204 = v1660;
                                        *(_DWORD *)v1660 = *((_DWORD *)v197 + 4);
                                        v198 = RtlULongLongAdd(v204, 4LL, &v1660);
                                        if ( v198 >= 0 )
                                        {
                                          memcpy_0(v1660, v197[3], *((unsigned int *)v197 + 4));
                                          v198 = RtlULongLongAdd(v1660, *((unsigned int *)v197 + 4), &v1660);
                                          if ( v198 >= 0 )
                                          {
                                            v205 = v1660;
                                            *(_DWORD *)v1660 = *((_DWORD *)v197 + 8);
                                            v198 = RtlULongLongAdd(v205, 4LL, &v1660);
                                            if ( v198 >= 0 )
                                            {
                                              memcpy_0(v1660, v197[5], *((unsigned int *)v197 + 8));
                                              v198 = RtlULongLongAdd(v1660, *((unsigned int *)v197 + 8), &v1660);
                                              if ( v198 >= 0 )
                                              {
                                                v1500 = v203;
                                                v206 = v1554;
                                                goto LABEL_198;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v440 = GetProcessHeap();
                                    HeapFree(v440, 0, v203);
                                  }
                                  else
                                  {
                                    v198 = -1073741801;
                                  }
                                }
LABEL_638:
                                v206 = 0;
LABEL_198:
                                v84 = v198 | 0x10000000;
                                v1498 = v84;
                                if ( v84 < 0 )
                                  goto LABEL_331;
                                v207 = 0;
                                v1661 = 0LL;
                                v1556 = 0;
                                v1555 = 0;
                                v1662 = 0LL;
                                v1557[0] = 8;
                                v208 = RtlUIntAdd(8LL, v1492, v1557);
                                v84 = v208 | 0x10000000;
                                v1498 = v208 | 0x10000000;
                                if ( v208 < 0 )
                                {
LABEL_234:
                                  if ( v84 < 0 )
                                    goto LABEL_331;
                                  v227 = dwBytes;
                                  v228 = GetProcessHeap();
                                  v229 = (unsigned int *)HeapAlloc(v228, 8u, v227);
                                  if ( v229 )
                                  {
                                    v230 = v229;
                                    v1538 = v229;
                                    v84 = 0x10000000;
                                  }
                                  else
                                  {
                                    v84 = -805306345;
                                    v230 = 0LL;
                                  }
                                  v1498 = v84;
                                  if ( v84 < 0 )
                                    goto LABEL_331;
                                  if ( !v1500 )
                                  {
                                    v84 = -2147024809;
                                    goto LABEL_330;
                                  }
                                  if ( !v230 )
                                  {
                                    v84 = -2147024809;
                                    goto LABEL_330;
                                  }
                                  v1758[0] = v1500;
                                  v1760 = dwBytes;
                                  v1759 = v206;
                                  v1758[1] = v230;
                                  v1761 = 0;
                                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                                  {
                                    v231 = GetProcAddress(phModule, "NtQuerySystemInformation");
                                    if ( v231 )
                                    {
                                      v232 = ((__int64 (__fastcall *)(__int64, _QWORD *))v231)(134LL, v1758);
                                      v84 = v232 | 0x10000000;
                                      v1498 = v232 | 0x10000000;
                                      if ( v232 >= 0 )
                                      {
                                        v233 = v1760;
                                        LODWORD(dwBytes) = v1760;
                                        goto LABEL_244;
                                      }
LABEL_660:
                                      v233 = dwBytes;
LABEL_244:
                                      if ( v84 == -805306333 )
                                      {
                                        v84 = -2147024774;
                                        goto LABEL_330;
                                      }
                                      goto LABEL_245;
                                    }
                                    v441 = GetLastError();
                                    v1498 = v441;
                                    v84 = v441;
                                    if ( v441 <= 0 )
                                    {
LABEL_656:
                                      if ( v84 >= 0 )
                                      {
                                        v233 = dwBytes;
                                        v84 = -2147467259;
                                        v1498 = -2147467259;
LABEL_245:
                                        if ( v84 < 0 )
                                          goto LABEL_331;
                                        if ( v233 < 4 )
                                        {
                                          v252 = -1073741762;
LABEL_663:
                                          v253 = 0LL;
                                          goto LABEL_277;
                                        }
                                        v5 = *v230;
                                        v234 = v230 + 1;
                                        if ( v230 + 1 < v230 )
                                          goto LABEL_691;
                                        if ( v233 - 4 < (unsigned int)v5 )
                                        {
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                          goto LABEL_277;
                                        }
                                        v235 = (unsigned int *)((char *)v234 + v5);
                                        if ( (unsigned int *)((char *)v234 + v5) < v234
                                          || (unsigned int)v5 >= 0xFFFFFFFC )
                                        {
                                          goto LABEL_691;
                                        }
                                        if ( v233 - ((_DWORD)v5 + 4) < 4 )
                                        {
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                          goto LABEL_277;
                                        }
                                        v236 = *v235;
                                        v237 = (char *)(v235 + 1);
                                        if ( v235 + 1 < v235 )
                                          goto LABEL_691;
                                        v238 = v5 + 8;
                                        if ( (int)v5 + 8 < (unsigned int)(v5 + 4) )
                                          goto LABEL_691;
                                        if ( v233 - v238 < (unsigned int)v236 )
                                        {
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                          goto LABEL_277;
                                        }
                                        v239 = (unsigned int *)&v237[v236];
                                        if ( &v237[v236] < v237 )
                                          goto LABEL_691;
                                        v240 = v236 + v238;
                                        if ( (unsigned int)v236 + v238 < v238 )
                                          goto LABEL_691;
                                        if ( v233 - v240 < 4 )
                                        {
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                          goto LABEL_277;
                                        }
                                        v241 = *v239;
                                        v1516 = v239 + 1;
                                        if ( v239 + 1 < v239 )
                                          goto LABEL_691;
                                        v242 = v240 + 4;
                                        if ( v240 + 4 < v240 )
                                          goto LABEL_691;
                                        if ( v233 - v242 < (unsigned int)v241 )
                                        {
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                          goto LABEL_277;
                                        }
                                        if ( (unsigned int)v241 + v242 < v242 )
                                        {
LABEL_691:
                                          v253 = 0LL;
                                          v252 = -1073741675;
                                          LODWORD(v5) = 0;
                                        }
                                        else if ( v233 == (_DWORD)v241 + v242 )
                                        {
                                          if ( (unsigned int)(v5 + v241 + v236) + 12LL == v233 )
                                          {
                                            v243 = GetProcessHeap();
                                            v244 = HeapAlloc(v243, 8u, 0x30uLL);
                                            if ( !v244 )
                                            {
                                              v244 = 0LL;
                                              v252 = -1073741801;
                                              LODWORD(v5) = 0;
                                              goto LABEL_275;
                                            }
                                            if ( v1538 == (LPVOID)-4LL )
                                            {
                                              LODWORD(v5) = 0;
                                              *(_DWORD *)v244 = 0;
                                              v244[1] = 0LL;
                                            }
                                            else
                                            {
                                              *(_DWORD *)v244 = v5;
                                              v245 = GetProcessHeap();
                                              v246 = HeapAlloc(v245, 8u, (unsigned int)v5);
                                              if ( !v246 )
                                                goto LABEL_674;
                                              v247 = (char *)v1538 + 4;
                                              v244[1] = v246;
                                              memcpy_0(v246, v247, (unsigned int)v5);
                                              LODWORD(v5) = 0;
                                            }
                                            if ( v237 )
                                            {
                                              *((_DWORD *)v244 + 4) = v236;
                                              v248 = GetProcessHeap();
                                              v249 = HeapAlloc(v248, 8u, v236);
                                              if ( !v249 )
                                                goto LABEL_674;
                                              v244[3] = v249;
                                              memcpy_0(v249, v237, v236);
                                            }
                                            else
                                            {
                                              *((_DWORD *)v244 + 4) = 0;
                                              v244[3] = 0LL;
                                            }
                                            if ( !v1516 )
                                            {
                                              *((_DWORD *)v244 + 8) = 0;
                                              v244[5] = 0LL;
                                              goto LABEL_274;
                                            }
                                            *((_DWORD *)v244 + 8) = v241;
                                            v250 = GetProcessHeap();
                                            v251 = HeapAlloc(v250, 8u, v241);
                                            if ( v251 )
                                            {
                                              v244[5] = v251;
                                              memcpy_0(v251, v1516, v241);
LABEL_274:
                                              v252 = 0;
LABEL_275:
                                              if ( v252 >= 0 )
                                              {
                                                v253 = v244;
                                                v1452 = (unsigned __int16 *)v244;
                                                goto LABEL_277;
                                              }
                                              if ( v244 )
                                              {
                                                v449 = (void *)v244[1];
                                                if ( v449 )
                                                {
                                                  v450 = GetProcessHeap();
                                                  HeapFree(v450, 0, v449);
                                                  v244[1] = 0LL;
                                                }
                                                v451 = (void *)v244[3];
                                                if ( v451 )
                                                {
                                                  v452 = GetProcessHeap();
                                                  HeapFree(v452, 0, v451);
                                                  v244[3] = 0LL;
                                                }
                                                v453 = (void *)v244[5];
                                                if ( v453 )
                                                {
                                                  v454 = GetProcessHeap();
                                                  HeapFree(v454, 0, v453);
                                                  v244[5] = 0LL;
                                                }
                                                v455 = GetProcessHeap();
                                                HeapFree(v455, 0, v244);
                                              }
                                              goto LABEL_663;
                                            }
LABEL_674:
                                            v442 = (void *)v244[1];
                                            if ( v442 )
                                            {
                                              v443 = GetProcessHeap();
                                              HeapFree(v443, 0, v442);
                                              LODWORD(v5) = 0;
                                              v244[1] = 0LL;
                                            }
                                            else
                                            {
                                              LODWORD(v5) = 0;
                                            }
                                            v444 = (void *)v244[3];
                                            if ( v444 )
                                            {
                                              v445 = GetProcessHeap();
                                              HeapFree(v445, 0, v444);
                                              v244[3] = 0LL;
                                            }
                                            v446 = (void *)v244[5];
                                            if ( v446 )
                                            {
                                              v447 = GetProcessHeap();
                                              HeapFree(v447, 0, v446);
                                              v244[5] = 0LL;
                                            }
                                            v448 = GetProcessHeap();
                                            HeapFree(v448, 0, v244);
                                            v244 = 0LL;
                                            v252 = -1073741801;
                                            goto LABEL_275;
                                          }
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                        }
                                        else
                                        {
                                          v253 = 0LL;
                                          v252 = -1073741762;
                                          LODWORD(v5) = 0;
                                        }
LABEL_277:
                                        v84 = v252 | 0x10000000;
                                        v1498 = v84;
                                        if ( v84 < 0 )
                                          goto LABEL_331;
                                        v1667 = 0LL;
                                        v254 = 0;
                                        v1666 = 0LL;
                                        if ( !v253 )
                                        {
                                          v84 = -805306355;
                                          goto LABEL_330;
                                        }
                                        v255 = (unsigned __int8 *)v253[1];
                                        v1511 = v255;
                                        if ( !v255 )
                                        {
                                          v84 = -805306355;
                                          goto LABEL_330;
                                        }
                                        v256 = *(_DWORD *)v253;
                                        if ( !v256 )
                                        {
                                          v84 = -805306355;
                                          goto LABEL_330;
                                        }
                                        v257 = v256 - 8LL;
                                        v1521 = (void *)v257;
                                        v258 = GetProcessHeap();
                                        v259 = (unsigned int *)HeapAlloc(v258, 0, v257);
                                        v1517 = v259;
                                        v260 = v259;
                                        if ( v259 )
                                        {
                                          v261 = v259;
                                          v1811 = 0x7F1137FAB69605ELL;
                                          v262 = 0;
                                          v1561 = 0;
                                          v1404 = 0;
                                          v263 = v255;
                                          v264 = v257 & 7;
                                          if ( (v257 & 7) != 0 )
                                          {
                                            v456 = 0;
                                            v457 = 56;
                                            do
                                            {
                                              v458 = *v263;
                                              if ( v254 >= 4 )
                                                v456 |= v458 << v457;
                                              else
                                                v1404 |= v458 << (v457 - 32);
                                              ++v254;
                                              v457 -= 8;
                                              ++v263;
                                            }
                                            while ( v254 < (int)v264 );
                                            v1386 = v456;
                                            v266 = v1404 ^ 0x92F65A5;
                                            v459 = v456 ^ 0x699A899C;
                                            v1561 = v1404 ^ 0x92F65A5;
                                            v460 = 0;
                                            if ( (v257 & 7) != 0 )
                                            {
                                              do
                                              {
                                                if ( v460 >= 4 )
                                                {
                                                  v459 = __ROL4__(v459, 8);
                                                  v461 = v459;
                                                }
                                                else
                                                {
                                                  v266 = __ROL4__(v266, 8);
                                                  v461 = v266;
                                                }
                                                ++v460;
                                                *(_BYTE *)v261 = v461;
                                                v261 = (unsigned int *)((char *)v261 + 1);
                                              }
                                              while ( v460 < (int)v264 );
                                              v266 = v1561;
                                              v459 = v456 ^ 0x699A899C;
                                            }
                                            if ( v264 <= 4 )
                                            {
                                              v265 = 0;
                                              if ( v264 < 4 )
                                              {
                                                v266 = v266 >> (8 * (4 - v264)) << (8 * (4 - v264));
                                                v1561 = v266;
                                              }
                                            }
                                            else
                                            {
                                              v265 = v459 >> (8 * (8 - v264)) << (8 * (8 - v264));
                                            }
                                          }
                                          else
                                          {
                                            v265 = 0;
                                            v1386 = -1;
                                            v266 = 0;
                                          }
                                          v1536 = (LPVOID)(v257 >> 3);
                                          if ( v257 >> 3 )
                                          {
                                            v267 = HIDWORD(v1811);
                                            v268 = (char *)v261 + 7;
                                            v269 = WORD1(v1811);
                                            v270 = HIWORD(HIDWORD(v1811));
                                            v271 = v263 + 2;
                                            v272 = WORD2(v1811);
                                            do
                                            {
                                              v273 = *(v271 - 1);
                                              v274 = *(v271 - 2);
                                              v275 = v271[2];
                                              v271 += 8;
                                              v276 = *(v271 - 7) | ((*(v271 - 8) | ((v273 | (v274 << 8)) << 8)) << 8);
                                              v277 = v276 ^ v266;
                                              v278 = *(v271 - 3) | ((*(v271 - 4) | ((*(v271 - 5) | (v275 << 8)) << 8)) << 8);
                                              v279 = v277 ^ v278 ^ v265 ^ v267 ^ 0xAB69605E;
                                              v280 = (__ROL4__(v279, 10) + v272 * __ROL4__(v279 + 1419157410, 5)) ^ v277;
                                              v281 = (v269 * __ROR4__(v267 + v280, 9) - __ROL4__(v280, 2)) ^ v279;
                                              v282 = (24670 * (v281 - v272) - (v281 >> 13)) ^ v280;
                                              v283 = (v270 * __ROL4__(v282 ^ v269, 6) - __ROL4__(v282, 2)) ^ v281;
                                              v284 = (v267 - (v283 ^ 0xAB69605E)) ^ v282;
                                              v285 = (v269 * (v284 ^ v272)) ^ __ROR4__(v284, 6) ^ v283;
                                              v286 = (__ROL4__(v285, 2) + 24670 * __ROR4__(v267 + v285, 15)) ^ v284;
                                              v287 = (v270 * __ROR4__(v286 + 1419157410, 14) - __ROL4__(v286, 8)) ^ v285;
                                              v288 = __ROR4__(v287, 10) ^ (v272 * __ROR4__(v287 ^ 0xAB69605E, 12)) ^ v286;
                                              v289 = (v288 >> 10) ^ (v269 * (v288 ^ v270)) ^ v287;
                                              v290 = (v270 * (__ROR4__(~v289, 5) + 24670)) ^ v288;
                                              v291 = (v290 - v270) ^ 0xAB69605E ^ v289;
                                              v292 = ((v291 >> 2) + v272 * __ROL4__(v291 ^ v270, 2)) ^ v290;
                                              v293 = (__ROL4__(v292, 7) + v269 * __ROR4__(v292 - v267, 6)) ^ v291;
                                              v294 = (24670 * (v293 ^ v272) + __ROR4__(v293, 9)) ^ v292;
                                              v295 = (__ROL4__(v294, 7) + v270 * __ROL4__(v294 ^ v269, 5)) ^ v293;
                                              v296 = v295 ^ v267 ^ 0xAB69605E ^ v294;
                                              v297 = (v272 * (__ROR4__(v296, 3) - v269)) ^ v295;
                                              v298 = (24670 * __ROR4__(v297 - v267, 1) - __ROR4__(v297, 6)) ^ v296;
                                              v268 += 8;
                                              v299 = (__ROL4__(v298, 14) + v270 * __ROL4__(v298 - 1419157410, 3)) ^ v297;
                                              v300 = (v272 * __ROL4__(v299 - 1419157410, 15) - __ROR4__(v299, 14)) ^ v298;
                                              v301 = (v300 >> 3) ^ (v269 * (v300 ^ 0x605E)) ^ v299;
                                              v1529 = v1386 ^ v301;
                                              v1386 = v278;
                                              v302 = v1404 ^ __ROL4__(v301, 2) ^ (24670 * __ROL4__(v301 ^ v267, 4));
                                              v1404 = v276;
                                              v1561 = v302 ^ v300;
                                              *(v268 - 12) = v302 ^ v300;
                                              v1561 = __ROR4__(v1561, 8);
                                              *(v268 - 8) = v1529;
                                              v1530 = __ROR4__(v1529, 8);
                                              *(v268 - 13) = v1561;
                                              v1561 = __ROR4__(v1561, 8);
                                              *(v268 - 9) = v1530;
                                              v1531 = __ROR4__(v1530, 8);
                                              *(v268 - 14) = v1561;
                                              v1561 = __ROR4__(v1561, 8);
                                              *(v268 - 10) = v1531;
                                              v1532 = __ROR4__(v1531, 8);
                                              *(v268 - 15) = v1561;
                                              *(v268 - 11) = v1532;
                                              v266 = __ROR4__(v1561, 8);
                                              v265 = __ROR4__(v1532, 8);
                                              v59 = v1536 == (LPVOID)1;
                                              v1536 = (char *)v1536 - 1;
                                              v1561 = v266;
                                            }
                                            while ( !v59 );
                                            v262 = 0;
                                            v257 = (SIZE_T)v1521;
                                            LODWORD(v5) = 0;
                                            v260 = v1517;
                                          }
                                          v303 = 0LL;
                                          if ( v257 )
                                          {
                                            if ( v257 >= 0x20 )
                                            {
                                              v304 = 0LL;
                                              v305 = 0LL;
                                              do
                                              {
                                                v304 = _mm_xor_si128(
                                                         _mm_loadu_si128((const __m128i *)((char *)v260 + v303)),
                                                         v304);
                                                v306 = _mm_loadu_si128((const __m128i *)((char *)v260 + v303 + 16));
                                                v303 += 32LL;
                                                v307 = _mm_xor_si128(v306, v305);
                                                v305 = v307;
                                              }
                                              while ( v303 < (v257 & 0xFFFFFFFFFFFFFFE0uLL) );
                                              v308 = _mm_xor_si128(v307, v304);
                                              v309 = _mm_xor_si128(v308, _mm_srli_si128(v308, 8));
                                              v310 = _mm_xor_si128(v309, _mm_srli_si128(v309, 4));
                                              v311 = _mm_xor_si128(v310, _mm_srli_si128(v310, 2));
                                              v262 = _mm_cvtsi128_si32(_mm_xor_si128(v311, _mm_srli_si128(v311, 1)));
                                            }
                                            for ( ; v303 < v257; ++v303 )
                                              v262 ^= *((_BYTE *)v260 + v303);
                                          }
                                          if ( v262 == *(_QWORD *)&v1511[v257] )
                                          {
                                            v84 = 0x10000000;
                                            v1667 = v257;
                                            v1498 = 0x10000000;
                                            v1466 = v260;
                                            v1666 = 0LL;
                                            HIDWORD(dwBytes) = v257;
                                            goto LABEL_297;
                                          }
                                          operator delete(v260);
                                        }
                                        v462 = v1666;
                                        v84 = -805306367;
                                        v1498 = -805306367;
                                        if ( v1666 )
                                        {
                                          v463 = GetProcessHeap();
                                          HeapFree(v463, 0, v462);
                                          v1666 = 0LL;
                                        }
                                        LODWORD(v257) = HIDWORD(dwBytes);
                                        v260 = 0LL;
LABEL_297:
                                        if ( v84 >= 0 )
                                        {
                                          if ( (unsigned int)v257 >= 4 )
                                          {
                                            v1411 = *v260;
                                            if ( v260 + 1 < v260 )
                                              goto LABEL_720;
                                            if ( (unsigned int)(v257 - 4) < 4 )
                                            {
                                              v321 = -1073741762;
                                              goto LABEL_329;
                                            }
                                            v312 = v260[1];
                                            v313 = (char *)(v260 + 2);
                                            if ( v260 + 2 < v260 + 1 )
                                              goto LABEL_720;
                                            if ( (int)v257 - 8 < (unsigned int)v312 )
                                            {
                                              v321 = -1073741762;
                                              goto LABEL_329;
                                            }
                                            if ( (unsigned int)v312 >= 0xFFFFFFF8 )
                                              goto LABEL_720;
                                            v314 = (unsigned int)v257;
                                            v315 = (unsigned int)v312;
                                            v316 = (unsigned __int64)&v313[v312];
                                            if ( (char *)v260 + v314 >= &v313[v312]
                                              && (unsigned __int64)(v314 + -8 - v312) < 8 )
                                            {
                                              v317 = 0LL;
                                              v318 = 0;
                                              v1512 = 0LL;
                                              if ( v260 == (unsigned int *)-8LL )
                                                goto LABEL_320;
                                              v319 = (char *)(v260 + 2);
                                              if ( v316 >= (unsigned __int64)v313 )
                                              {
                                                if ( (unsigned __int64)v313 < v316 )
                                                {
                                                  v320 = v1562;
                                                  while ( v319 + 4 >= v319 )
                                                  {
                                                    if ( (unsigned __int64)(v319 + 4) > v316 )
                                                      goto LABEL_718;
                                                    if ( *(_DWORD *)v319 >= 0xFFFFFFFC )
                                                    {
                                                      v321 = -1073741675;
                                                    }
                                                    else
                                                    {
                                                      v320 = *(_DWORD *)v319 + 4;
                                                      v1562 = v320;
                                                      v321 = 0;
                                                    }
                                                    if ( v321 < 0 )
                                                      goto LABEL_329;
                                                    v322 = &v319[v320];
                                                    if ( v322 < v319 )
                                                      goto LABEL_720;
                                                    v319 += v320;
                                                    if ( (unsigned __int64)v322 > v316 )
                                                      goto LABEL_718;
                                                    ++v318;
                                                    if ( (unsigned __int64)v322 >= v316 )
                                                    {
                                                      LODWORD(v312) = v315;
                                                      v317 = 0LL;
                                                      goto LABEL_319;
                                                    }
                                                  }
                                                  goto LABEL_720;
                                                }
LABEL_319:
                                                if ( v319 == (char *)v316 )
                                                {
LABEL_320:
                                                  if ( (_DWORD)v312 )
                                                  {
                                                    v323 = GetProcessHeap();
                                                    v317 = HeapAlloc(v323, 8u, (unsigned int)v312);
                                                    v1512 = v317;
                                                    if ( !v317 )
                                                    {
                                                      v321 = -1073741801;
LABEL_326:
                                                      if ( v321 >= 0 && v1411 != (_DWORD)v1736 )
                                                        v321 = -1073741762;
                                                      goto LABEL_329;
                                                    }
                                                    v315 = (unsigned int)v312;
                                                  }
                                                  if ( v313 )
                                                  {
                                                    memcpy_0(v317, v313, v315);
                                                    v317 = v1512;
                                                  }
                                                  HIDWORD(v1736) = v312;
                                                  v321 = 0;
                                                  v1737 = v317;
                                                  LODWORD(v1736) = v318;
                                                  goto LABEL_326;
                                                }
LABEL_718:
                                                v321 = -1073741811;
LABEL_329:
                                                v84 = v321 | 0x10000000;
LABEL_330:
                                                v1498 = v84;
                                                goto LABEL_331;
                                              }
LABEL_720:
                                              v321 = -1073741675;
                                              goto LABEL_329;
                                            }
                                          }
                                          v321 = -1073741762;
                                          goto LABEL_329;
                                        }
LABEL_331:
                                        v119 = v1444;
                                        goto LABEL_332;
                                      }
                                      goto LABEL_660;
                                    }
                                  }
                                  else
                                  {
                                    v441 = GetLastError();
                                    v1498 = v441;
                                    v84 = v441;
                                    if ( v441 <= 0 )
                                      goto LABEL_656;
                                  }
                                  v84 = (unsigned __int16)v441 | 0x80070000;
                                  v1498 = v84;
                                  goto LABEL_656;
                                }
                                v209 = (v1557[0] + 7) & 0xFFFFFFF8;
                                if ( v209 < v1557[0] )
                                {
                                  v84 = -1073741675;
                                  v1498 = -1073741675;
                                }
                                else
                                {
                                  if ( v209 + 8 < v209 )
                                  {
                                    v1558 = -1;
LABEL_649:
                                    v84 = -1073741675;
                                    goto LABEL_650;
                                  }
                                  v1558 = v209 + 8;
                                  v84 = 0;
                                  v1498 = 0;
                                  v1557[1] = v209 + 8;
                                }
                                if ( v84 < 0 )
                                  goto LABEL_331;
                                if ( v1743 )
                                {
                                  if ( (unsigned int)v1742 <= 1 )
                                  {
                                    v84 = -1073741811;
                                  }
                                  else
                                  {
                                    v210 = v1743;
                                    v211 = 0;
                                    v1663 = (int *)v1743;
                                    do
                                    {
                                      v1498 = RtlULongLongAdd(v210, 4LL, &v1663);
                                      v84 = v1498;
                                      if ( v1498 < 0
                                        || (v1498 = RtlULongLongAdd(v1663, v212, &v1663), v84 = v1498, v1498 < 0) )
                                      {
                                        v214 = 4LL;
                                        goto LABEL_214;
                                      }
                                      v210 = v1663;
                                      ++v211;
                                    }
                                    while ( !v211 );
                                    v213 = *v1663;
                                    v1498 = RtlULongLongAdd(v1663, 4LL, &v1663);
                                    v84 = v1498;
                                    if ( v1498 >= 0 )
                                    {
                                      v1555 = v213;
                                      if ( v213 )
                                      {
                                        v215 = v1663;
                                      }
                                      else
                                      {
                                        v215 = 0LL;
                                        v1663 = 0LL;
                                      }
                                      v1661 = v215;
                                    }
LABEL_214:
                                    if ( v84 < 0 )
                                      goto LABEL_331;
                                    if ( (unsigned int)v1742 > 2 )
                                    {
                                      v216 = (unsigned int *)v1743;
                                      v217 = 0;
                                      v1664 = v1743;
                                      while ( 1 )
                                      {
                                        v218 = v216 + 1;
                                        if ( v216 + 1 < v216 )
                                          goto LABEL_649;
                                        v216 = (unsigned int *)((char *)v218 + *v216);
                                        if ( v216 < v218 )
                                          goto LABEL_649;
                                        ++v217;
                                        v1664 = v216;
                                        if ( v217 >= 2 )
                                        {
                                          v219 = *v216;
                                          v1498 = RtlULongLongAdd(v216, v214, &v1664);
                                          v84 = v1498;
                                          if ( v1498 >= 0 )
                                          {
                                            v207 = v219;
                                            v1556 = v219;
                                            if ( v219 )
                                            {
                                              v222 = v1664;
                                            }
                                            else
                                            {
                                              v222 = 0LL;
                                              v1664 = 0LL;
                                            }
                                            v1662 = v222;
                                          }
                                          if ( v1498 < 0 )
                                            goto LABEL_331;
                                          v1559 = v221;
                                          v1498 = RtlUIntAdd(v221, v220, &v1559);
                                          v84 = v1498;
                                          if ( v1498 < 0 )
                                            goto LABEL_646;
                                          v1498 = RtlUIntAdd(v1559, v223, &v1559);
                                          v84 = v1498;
                                          if ( v1498 < 0
                                            || (v1498 = RtlUIntAdd(v1559, v224, &v1559), v84 = v1498, v1498 < 0)
                                            || (v1498 = RtlUIntAdd(v1559, v225, &v1559), v84 = v1498, v1498 < 0)
                                            || (v1498 = RtlUIntAdd(v1559, v207, &v1559), v84 = v1498, v1498 < 0) )
                                          {
LABEL_646:
                                            v226 = v1560;
                                          }
                                          else
                                          {
                                            v226 = v1559;
                                            v1560 = v1559;
                                          }
                                          if ( v84 < 0 )
                                            goto LABEL_331;
                                          if ( v226 <= 0x400000 )
                                          {
                                            LODWORD(dwBytes) = v226;
                                            goto LABEL_234;
                                          }
                                          v84 = -2147418113;
                                          goto LABEL_330;
                                        }
                                      }
                                    }
                                    v84 = -1073741811;
                                  }
                                }
                                else
                                {
                                  v84 = -1073741811;
                                }
LABEL_650:
                                v1498 = v84;
                                goto LABEL_234;
                              }
                              v135 = 0;
                              v1499 = 0;
                              v136 = 0LL;
                              if ( v120 >= 0x20uLL )
                              {
                                v137 = 0LL;
                                v138 = 0LL;
                                do
                                {
                                  v137 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1444[v136]), v137);
                                  v139 = _mm_loadu_si128((const __m128i *)&v1444[v136 + 16]);
                                  v136 += 32LL;
                                  v140 = _mm_xor_si128(v139, v138);
                                  v138 = v140;
                                }
                                while ( v136 < (v120 & 0xFFFFFFE0) );
                                v141 = _mm_xor_si128(v140, v137);
                                v142 = _mm_xor_si128(v141, _mm_srli_si128(v141, 8));
                                v143 = _mm_xor_si128(v142, _mm_srli_si128(v142, 4));
                                v144 = _mm_xor_si128(v143, _mm_srli_si128(v143, 2));
                                v135 = _mm_cvtsi128_si32(_mm_xor_si128(v144, _mm_srli_si128(v144, 1)));
                                v1499 = v135;
                              }
                              if ( v136 < v120 )
                              {
                                do
                                  v135 ^= v1444[v136++];
                                while ( v136 < v120 );
                                v1499 = v135;
                              }
                              v145 = v133;
                              v1810 = 0xC81ECB17B1B54A58uLL;
                              v1398 = 0;
                              ii = 0;
                              v1551 = 0;
                              v146 = -1;
                              v1552 = -1;
                              v1403 = 0;
                              v147 = v131 & 7;
                              if ( (v131 & 7) != 0 )
                              {
                                v417 = 0;
                                v1403 = 0;
                                v418 = 0;
                                v419 = 56;
                                do
                                {
                                  v420 = *v129;
                                  if ( v418 >= 4 )
                                    v417 |= v420 << v419;
                                  else
                                    v1403 |= v420 << (v419 - 32);
                                  ++v418;
                                  v419 -= 8;
                                  ++v129;
                                }
                                while ( v418 < (int)v147 );
                                v1398 = v417;
                                v421 = v1403 ^ 0xB17A307A;
                                v422 = v417 ^ 0x42F6B18D;
                                ii = v1403 ^ 0xB17A307A;
                                v423 = 0;
                                v1551 = v1403 ^ 0xB17A307A;
                                v1552 = v417 ^ 0x42F6B18D;
                                if ( (v131 & 7) != 0 )
                                {
                                  v424 = v1403 ^ 0xB17A307A;
                                  do
                                  {
                                    if ( v423 >= 4 )
                                    {
                                      v422 = __ROL4__(v422, 8);
                                      v425 = v422;
                                    }
                                    else
                                    {
                                      v424 = __ROL4__(v424, 8);
                                      v425 = v424;
                                    }
                                    ++v423;
                                    *v145++ = v425;
                                  }
                                  while ( v423 < (int)v147 );
                                  v421 = v1551;
                                  v422 = v1552;
                                  ii = v1551;
                                }
                                if ( v147 <= 4 )
                                {
                                  v1552 = 0;
                                  v146 = 0;
                                  if ( v147 < 4 )
                                  {
                                    ii = v421 >> (8 * (4 - v147)) << (8 * (4 - v147));
                                    v1551 = ii;
                                  }
                                }
                                else
                                {
                                  v146 = v422 >> (8 * (8 - v147)) << (8 * (8 - v147));
                                  v1552 = v146;
                                }
                                v134 = v1520;
                              }
                              if ( v131 >> 3 )
                              {
                                v148 = HIDWORD(v1810);
                                v149 = v145 + 7;
                                v150 = WORD1(v1810);
                                v151 = v131 >> 3;
                                v152 = HIWORD(HIDWORD(v1810));
                                v153 = v129 + 2;
                                v154 = WORD2(v1810);
                                do
                                {
                                  v155 = *(v153 - 1);
                                  v156 = *(v153 - 2);
                                  v157 = v153[2];
                                  v153 += 8;
                                  v158 = *(v153 - 7) | ((*(v153 - 8) | ((v155 | (v156 << 8)) << 8)) << 8);
                                  v159 = *(v153 - 3) | ((*(v153 - 4) | ((*(v153 - 5) | (v157 << 8)) << 8)) << 8);
                                  v160 = v159 ^ v146;
                                  v161 = v148 ^ ii ^ v158 ^ (v160 - 19032);
                                  v162 = (__ROR4__(v161, 7) + v150 * __ROR4__(HIDWORD(v1810) ^ v161, 15)) ^ v160;
                                  v163 = (v154 * __ROR4__(v162 - 1313519016, 9) - __ROR4__(v162, 10)) ^ v161;
                                  v164 = (__ROL4__(v163, 5) + v152 * __ROL4__(v154 ^ v163, 4)) ^ v162;
                                  v165 = (HIDWORD(v1810) - (v164 ^ 0xB1B54A58)) ^ v163;
                                  v166 = (v150 * (v165 - 19032) - (v165 >> 6)) ^ v164;
                                  v167 = (19032 * (v154 ^ __ROR4__(v166, 15))) ^ v165;
                                  v168 = (v154 * (v152 + __ROR4__(~v167, 3))) ^ v166;
                                  v169 = (v168 - HIDWORD(v1810) - 19032) ^ v167;
                                  v170 = (v150 * (v169 ^ v152)) ^ __ROR4__(v169, 10) ^ v168;
                                  v171 = __ROR4__(v170, 3) ^ (v154 * __ROL4__(v170 ^ 0x4A58, 6)) ^ v169;
                                  v172 = (19032 * (__ROR4__(v171, 15) - v152)) ^ v170;
                                  v173 = (v172 >> 15) ^ (19032 * __ROL4__(v172 - v154, 3)) ^ (v172 >> 1) ^ (19032 * (v172 ^ v152)) ^ v171;
                                  v174 = (v150 * (v173 - v154) - (v173 >> 13)) ^ v172;
                                  v175 = __ROR4__(v174, 11) ^ (v154 * __ROR4__(-1313519016 - v174, 9)) ^ v173;
                                  v176 = (v175 - v152 + 1313519016) ^ v174;
                                  v177 = (19032 * (v150 ^ v176) - __ROR4__(v176, 7)) ^ v175;
                                  v178 = (v150 * __ROL4__(v152 ^ v177, 4) - __ROR4__(v177, 16)) ^ v176;
                                  v179 = (__ROR4__(v178, 4) + v154 * __ROR4__(-1313519016 - v178, 10)) ^ v177;
                                  v180 = __ROR4__(v179, 9) ^ (v152 * __ROR4__(v179 + 1313519016, 4)) ^ v178;
                                  v149 += 8;
                                  v181 = (19032 * __ROL4__(HIDWORD(v1810) ^ v180, 8) - __ROL4__(v180, 2)) ^ v179;
                                  v182 = (v150 * __ROR4__(HIDWORD(v1810) - v181, 11) - __ROR4__(v181, 12)) ^ v180;
                                  v148 = HIDWORD(v1810);
                                  v183 = (v182 >> 8) ^ (v154 * (v150 ^ v182)) ^ v181;
                                  v1551 = v1403 ^ v183;
                                  v1403 = v158;
                                  v1552 = v1398 ^ HIDWORD(v1810) ^ v182 ^ v183 ^ 0xB1B54A58;
                                  *(v149 - 12) = v1551;
                                  v1551 = __ROR4__(v1551, 8);
                                  *(v149 - 8) = v1552;
                                  v1552 = __ROR4__(v1552, 8);
                                  *(v149 - 13) = v1551;
                                  v1551 = __ROR4__(v1551, 8);
                                  *(v149 - 9) = v1552;
                                  v1552 = __ROR4__(v1552, 8);
                                  *(v149 - 14) = v1551;
                                  v1551 = __ROR4__(v1551, 8);
                                  *(v149 - 10) = v1552;
                                  v1552 = __ROR4__(v1552, 8);
                                  *(v149 - 15) = v1551;
                                  *(v149 - 11) = v1552;
                                  v146 = __ROR4__(v1552, 8);
                                  ii = __ROR4__(v1551, 8);
                                  v1551 = ii;
                                  v1552 = v146;
                                  v1398 = v159;
                                  --v151;
                                }
                                while ( v151 );
                                v135 = v1499;
                                v131 = v1515;
                                v134 = v1520;
                              }
                              v184 = v131 + 8;
                              *(_QWORD *)&v134[v131] = v135;
                              v1655 = v134;
                              v1651 = &qword_1801B26E0;
                              v1656 = (char *)(v131 + 8);
                              v1652 = 8LL;
                              v1653 = &unk_1801B2640;
                              v1654 = 160LL;
                              v185 = GetProcessHeap();
                              v186 = HeapAlloc(v185, 8u, 0x30uLL);
                              v187 = v186;
                              if ( v186 )
                              {
                                *v186 = v184;
                                v188 = GetProcessHeap();
                                v189 = HeapAlloc(v188, 8u, v184);
                                if ( v189 )
                                {
                                  *((_QWORD *)v187 + 1) = v189;
                                  memcpy_0(v189, v1520, v184);
                                  v187[4] = 160;
                                  v190 = GetProcessHeap();
                                  v191 = HeapAlloc(v190, 8u, 0xA0uLL);
                                  if ( v191 )
                                  {
                                    *((_QWORD *)v187 + 3) = v191;
                                    *v191 = unk_1801B2640;
                                    v191[1] = *((_OWORD *)&unk_1801B2640 + 1);
                                    v191[2] = *((_OWORD *)&unk_1801B2640 + 2);
                                    v191[3] = *((_OWORD *)&unk_1801B2640 + 3);
                                    v191[4] = *((_OWORD *)&unk_1801B2640 + 4);
                                    v191[5] = *((_OWORD *)&unk_1801B2640 + 5);
                                    v191[6] = *((_OWORD *)&unk_1801B2640 + 6);
                                    v191[7] = *((_OWORD *)&unk_1801B2640 + 7);
                                    v191[8] = *((_OWORD *)&unk_1801B2640 + 8);
                                    v191[9] = *((_OWORD *)&unk_1801B2640 + 9);
                                    v187[8] = 8;
                                    v192 = GetProcessHeap();
                                    v193 = HeapAlloc(v192, 8u, 8uLL);
                                    if ( v193 )
                                    {
                                      *((_QWORD *)v187 + 5) = v193;
                                      LODWORD(v5) = 0;
                                      v194 = 0;
                                      *v193 = qword_1801B26E0;
                                      v130 = v187;
                                      goto LABEL_177;
                                    }
                                  }
                                }
                                v426 = (void *)*((_QWORD *)v187 + 1);
                                if ( v426 )
                                {
                                  v427 = GetProcessHeap();
                                  HeapFree(v427, 0, v426);
                                  LODWORD(v5) = 0;
                                  *((_QWORD *)v187 + 1) = 0LL;
                                }
                                else
                                {
                                  LODWORD(v5) = 0;
                                }
                                v428 = (void *)*((_QWORD *)v187 + 3);
                                if ( v428 )
                                {
                                  v429 = GetProcessHeap();
                                  HeapFree(v429, 0, v428);
                                  *((_QWORD *)v187 + 3) = 0LL;
                                }
                                v430 = (void *)*((_QWORD *)v187 + 5);
                                if ( v430 )
                                {
                                  v431 = GetProcessHeap();
                                  HeapFree(v431, 0, v430);
                                  *((_QWORD *)v187 + 5) = 0LL;
                                }
                                v432 = GetProcessHeap();
                                HeapFree(v432, 0, v187);
                                v130 = 0LL;
                              }
                              else
                              {
                                v130 = v1536;
                                LODWORD(v5) = 0;
                              }
                              v194 = -1073741801;
LABEL_177:
                              if ( v194 >= 0 )
                              {
                                v1648 = v130;
                                v130 = 0LL;
                              }
                              goto LABEL_179;
                            }
LABEL_760:
                            v74 = (void *)v77;
                            goto LABEL_436;
                          }
                          v114 = 0;
                          v115 = v1743;
                          if ( (_DWORD)v1742 )
                          {
                            v116 = v1547;
                            do
                            {
                              if ( *v115 >= 0xFFFFFFFC )
                              {
                                v84 = -1073741675;
                                v1498 = -1073741675;
                              }
                              else
                              {
                                v116 = *v115 + 4;
                                v1498 = 0;
                                v84 = 0;
                                v1547 = v116;
                              }
                              if ( v84 < 0 )
                                goto LABEL_760;
                              if ( (_DWORD *)((char *)v115 + v116) < v115 )
                                goto LABEL_756;
                              ++v114;
                              v115 = (_DWORD *)((char *)v115 + v116);
                            }
                            while ( v114 < (unsigned int)v1742 );
                          }
                          if ( v115 + 1 >= v115 )
                          {
                            v84 = 0;
                            v1498 = 0;
                            if ( v115 + 2 > (_DWORD *)((char *)v1743 + HIDWORD(v1742)) )
                            {
                              v84 = -1073741789;
                              v1498 = -1073741789;
                              goto LABEL_760;
                            }
                            *v115 = 4;
                            v115[1] = v1545;
                            LODWORD(v1742) = v1742 + 1;
                            goto LABEL_142;
                          }
LABEL_756:
                          v84 = -1073741675;
                          v1498 = -1073741675;
                          goto LABEL_760;
                        }
                      }
                    }
                    if ( v84 < 0 )
                      goto LABEL_760;
                    goto LABEL_131;
                  }
                  v108 = 0;
                  v109 = v1743;
                  if ( (_DWORD)v1742 )
                  {
                    v110 = v1541;
                    do
                    {
                      if ( *v109 >= 0xFFFFFFFC )
                      {
                        v84 = -1073741675;
                        v1498 = -1073741675;
                      }
                      else
                      {
                        v110 = *v109 + 4;
                        v1498 = 0;
                        v84 = 0;
                        v1541 = v110;
                      }
                      if ( v84 < 0 )
                        goto LABEL_760;
                      if ( (_DWORD *)((char *)v109 + v110) < v109 )
                        goto LABEL_576;
                      ++v108;
                      v109 = (_DWORD *)((char *)v109 + v110);
                    }
                    while ( v108 < (unsigned int)v1742 );
                  }
                  if ( v109 + 1 < v109 )
                  {
LABEL_576:
                    v84 = -1073741675;
                  }
                  else
                  {
                    v1498 = 0;
                    v84 = 0;
                    if ( (char *)v109 + v107 + 4 <= (char *)v1743 + HIDWORD(v1742) )
                    {
                      *v109 = v107;
                      memcpy_0(v109 + 1, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v107);
                      LODWORD(v1742) = v1742 + 1;
                      goto LABEL_118;
                    }
                    v84 = -1073741789;
                  }
                }
                else
                {
                  v84 = -1073741811;
                }
                v1498 = v84;
                goto LABEL_118;
              }
            }
            goto LABEL_91;
          }
          v100 = v1743;
          v101 = v95;
          if ( v96 )
          {
            v102 = v1634;
            do
            {
              if ( *v100 >= 0xFFFFFFFC )
              {
                v84 = -1073741675;
                v1498 = -1073741675;
              }
              else
              {
                v102 = *v100 + 4;
                v1498 = v95;
                v84 = v95;
                v1634 = v102;
              }
              if ( v84 < 0 )
                goto LABEL_759;
              if ( (_DWORD *)((char *)v100 + v102) < v100 )
                goto LABEL_550;
              ++v101;
              v100 = (_DWORD *)((char *)v100 + v102);
            }
            while ( v101 < v96 );
          }
          if ( v100 + 1 >= v100 )
          {
            v84 = v95;
            v1498 = v95;
            if ( (char *)v100 + v82 + 4 <= (char *)v1743 + HIDWORD(v1742) )
            {
              *v100 = v82;
              memcpy_0(v100 + 1, v1443, v82);
              v96 = v1742 + 1;
              LODWORD(v1742) = v1742 + 1;
              goto LABEL_91;
            }
            v84 = -1073741789;
LABEL_758:
            v1498 = v84;
            goto LABEL_759;
          }
          goto LABEL_550;
        }
      }
      v7 = 4LL;
      goto LABEL_42;
    }
    v6 = dword_1801B31F0;
LABEL_39:
    dword_1801B31F0 = v6 + 1;
    goto LABEL_40;
  }
LABEL_2:
  result = 0;
  if ( v2 <= 0xC )
  {
    v3 = 6184;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
