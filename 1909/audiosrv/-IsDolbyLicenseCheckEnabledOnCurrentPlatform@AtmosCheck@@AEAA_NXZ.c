/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180038280
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180038224 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180058F90 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E1F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     RtlUIntAdd @ 0x180058EF0 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x180058F0C (RtlULongLongAdd.c)
 *     StringCchLengthW @ 0x180058F2C (StringCchLengthW.c)
 *     ??C?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180058F84 (--C-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180062D1C (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180062D48 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180063604 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     wcscmp_0 @ 0x18006C93F (wcscmp_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180107C30 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x180140EA8 (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180140EFC (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

bool __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  AtmosCheck *v1; // r13
  _DWORD *v2; // r15
  unsigned int v3; // eax
  int v4; // ecx
  bool result; // al
  int v6; // eax
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  int v9; // esi
  int v10; // edi
  int v11; // r15d
  char *v12; // r11
  int v13; // r10d
  char *v14; // r14
  __int64 v15; // r13
  int v16; // eax
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  int v21; // r8d
  unsigned int v22; // edi
  int v23; // r10d
  unsigned int v24; // edi
  int v25; // r10d
  int v26; // edi
  unsigned int v27; // r10d
  int v28; // edi
  int v29; // r10d
  int v30; // edi
  unsigned int v31; // r10d
  int v32; // ecx
  int v33; // r10d
  unsigned int v34; // edi
  int v35; // r10d
  int v36; // edi
  int v37; // r10d
  int v38; // edi
  unsigned int v39; // edx
  int v40; // edi
  int v41; // edx
  int v42; // edi
  unsigned int v43; // edx
  int v44; // edi
  int v45; // ecx
  unsigned __int64 v46; // rax
  int v47; // esi
  __m128i v48; // xmm2
  __m128i v49; // xmm1
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  char i; // cl
  HMODULE *v57; // rdi
  const WCHAR *v58; // rdx
  __int64 v59; // rax
  bool v60; // zf
  _BYTE *v61; // rbx
  char *v62; // rdi
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // r14d
  const CHAR *v67; // rdx
  __int64 v68; // rax
  __int64 (__fastcall *ProcAddress)(); // rax
  HANDLE ProcessHeap; // rax
  __int64 v71; // rbx
  int v72; // esi
  signed int v73; // edi
  __int64 v74; // r14
  signed int LastError; // eax
  __int64 v76; // r9
  wchar_t *k; // rbx
  wchar_t *v78; // r8
  signed int v79; // eax
  DWORD CurrentThreadId; // eax
  __int64 v81; // r14
  __int64 v82; // r9
  wchar_t *m; // rbx
  wchar_t *v84; // r8
  signed int v85; // eax
  HANDLE CurrentProcess; // rax
  int v87; // eax
  HLOCAL v88; // rax
  int v89; // ebx
  __int64 v90; // r11
  HANDLE v91; // rax
  void *v92; // rax
  void *v93; // rdi
  HANDLE v94; // rax
  void *v95; // rax
  void *v96; // rdi
  int v97; // eax
  unsigned int v98; // edi
  int v99; // eax
  int v100; // eax
  int v101; // eax
  unsigned int v102; // r9d
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  size_t v107; // rdx
  const wchar_t *v108; // rcx
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  unsigned int v115; // edi
  HANDLE v116; // rax
  LPVOID v117; // rax
  _DWORD *v118; // r9
  _DWORD *v119; // rcx
  unsigned int v120; // edi
  int v121; // eax
  __int64 v122; // rdx
  int v123; // eax
  unsigned int *v124; // r9
  int v125; // eax
  __int64 v126; // r9
  unsigned int v127; // r10d
  int v128; // r11d
  unsigned int *v129; // r9
  unsigned int v130; // r10d
  void *v131; // rcx
  int v132; // eax
  __int64 v133; // rdx
  int v134; // eax
  unsigned int *v135; // r9
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // r9
  unsigned int v139; // r10d
  int v140; // r11d
  unsigned int *v141; // r9
  unsigned int v142; // r10d
  void *v143; // rcx
  int v144; // eax
  const wchar_t *v145; // rcx
  size_t v146; // rdx
  int v147; // eax
  unsigned int *v148; // r9
  int v149; // eax
  __int64 v150; // r9
  unsigned int v151; // r10d
  int v152; // r11d
  _DWORD *v153; // r9
  unsigned __int64 *v154; // rax
  int v155; // eax
  __int64 v156; // rdx
  int v157; // eax
  unsigned int *v158; // r9
  int v159; // eax
  __int64 v160; // r9
  unsigned int v161; // r10d
  _DWORD *v162; // r9
  __int64 v163; // r11
  void *v164; // rcx
  int v165; // eax
  __int64 v166; // rdx
  int v167; // eax
  unsigned int *v168; // r9
  int v169; // eax
  __int64 v170; // rcx
  __int64 v171; // r9
  unsigned int v172; // r10d
  int v173; // r11d
  _DWORD *v174; // r9
  int *v175; // rcx
  int v176; // eax
  __int64 v177; // rdx
  int v178; // eax
  unsigned int *v179; // r9
  int v180; // eax
  __int64 v181; // rcx
  __int64 v182; // r9
  unsigned int v183; // r10d
  int v184; // r11d
  _DWORD *v185; // r9
  _DWORD *v186; // rcx
  int v187; // eax
  __int64 v188; // rcx
  unsigned int v189; // r10d
  int v190; // eax
  unsigned int v191; // r10d
  unsigned int v192; // r9d
  int v193; // eax
  unsigned int v194; // r9d
  int v195; // eax
  unsigned int v196; // r9d
  int v197; // eax
  unsigned int v198; // r9d
  int v199; // eax
  unsigned int v200; // r9d
  int v201; // eax
  unsigned int v202; // r10d
  int v203; // ebx
  unsigned int v204; // r9d
  unsigned int v205; // ecx
  unsigned int v206; // edi
  HANDLE v207; // rax
  _DWORD *v208; // rdi
  unsigned int v209; // r9d
  void *v210; // rcx
  unsigned __int8 *v211; // rcx
  HANDLE v212; // rax
  _QWORD *v213; // rax
  int v214; // ebx
  unsigned __int64 v215; // rbx
  _BYTE *v216; // r8
  unsigned __int8 *v217; // rdi
  unsigned __int8 v218; // al
  unsigned __int64 v219; // rcx
  __m128i v220; // xmm2
  __m128i v221; // xmm1
  __m128i v222; // xmm0
  __m128i v223; // xmm0
  __m128i v224; // xmm1
  __m128i v225; // xmm1
  __m128i v226; // xmm1
  __m128i v227; // xmm1
  _BYTE *v228; // rdx
  int v229; // r9d
  unsigned int v230; // r10d
  unsigned int v231; // eax
  int v232; // r11d
  int v233; // r9d
  char v234; // r8
  int v235; // edx
  unsigned int v236; // r9d
  int v237; // ecx
  char v238; // r8
  unsigned __int64 v239; // r11
  int v240; // ecx
  int v241; // r15d
  int v242; // ebx
  int v243; // r14d
  int v244; // r12d
  unsigned int v245; // r13d
  unsigned __int8 *v246; // rdx
  int v247; // r8d
  int v248; // edi
  int v249; // r9d
  int v250; // edx
  int v251; // r9d
  int v252; // edx
  int v253; // r9d
  unsigned int v254; // edx
  int v255; // r9d
  int v256; // edx
  int v257; // r9d
  int v258; // edx
  int v259; // r9d
  int v260; // edx
  unsigned int v261; // r9d
  unsigned int v262; // edx
  int v263; // r9d
  int v264; // edx
  int v265; // r9d
  int v266; // edx
  int v267; // r9d
  int v268; // edx
  int v269; // r9d
  int v270; // edx
  unsigned int v271; // r9d
  int v272; // edx
  HANDLE v273; // rax
  _DWORD *v274; // rax
  _DWORD *v275; // rdi
  HANDLE v276; // rax
  void *v277; // rax
  HANDLE v278; // rax
  _OWORD *v279; // rax
  HANDLE v280; // rax
  _QWORD *v281; // rax
  void *v282; // rbx
  HANDLE v283; // rax
  void *v284; // rbx
  HANDLE v285; // rax
  void *v286; // rbx
  HANDLE v287; // rax
  HANDLE v288; // rax
  HANDLE v289; // rax
  HANDLE v290; // rax
  HANDLE v291; // rax
  HANDLE v292; // rax
  HANDLE v293; // rax
  int v294; // ebx
  unsigned int v295; // r10d
  __int64 v296; // r9
  __int64 v297; // r9
  unsigned int v298; // eax
  unsigned int v299; // edi
  HANDLE v300; // rax
  _DWORD *v301; // rax
  const void **v302; // r9
  __int64 v303; // r9
  void *v304; // rcx
  __int64 v305; // r9
  __int64 v306; // r9
  void *v307; // rcx
  __int64 v308; // r9
  void *v309; // rdx
  HANDLE v310; // rax
  int v311; // eax
  __int64 v312; // rcx
  int v313; // eax
  unsigned int v314; // r9d
  unsigned int *v315; // rcx
  int v316; // r10d
  int v317; // r10d
  unsigned int *v318; // rax
  _DWORD *v319; // rcx
  int v320; // edi
  unsigned int v321; // r9d
  unsigned int v322; // r10d
  int v323; // edi
  _DWORD *v324; // rax
  __int64 v325; // rcx
  unsigned int v326; // r11d
  unsigned int v327; // r10d
  unsigned int v328; // eax
  _DWORD *v329; // rcx
  HANDLE v330; // rax
  _QWORD *v331; // rdi
  HANDLE v332; // rax
  HANDLE v333; // rax
  HANDLE v334; // rax
  HANDLE v335; // rax
  HANDLE v336; // rax
  HANDLE v337; // rax
  void *v338; // rdi
  HANDLE v339; // rax
  void *v340; // rdi
  HANDLE v341; // rax
  void *v342; // rdi
  HANDLE v343; // rax
  void *v344; // rdi
  unsigned int v345; // edi
  HANDLE v346; // rax
  _DWORD *v347; // rax
  FARPROC v348; // rax
  int v349; // eax
  unsigned int v350; // edi
  signed int v351; // eax
  int v352; // ebx
  unsigned int v353; // r9d
  SIZE_T v354; // r11
  unsigned int v355; // r9d
  unsigned int v356; // r11d
  unsigned int v357; // r10d
  __int64 v358; // r9
  unsigned int v359; // r9d
  unsigned int v360; // r10d
  unsigned int v361; // r10d
  int v362; // r9d
  int v363; // r10d
  int v364; // r11d
  HANDLE v365; // rax
  _QWORD *v366; // rax
  _QWORD *v367; // rdi
  HANDLE v368; // rax
  void *v369; // rax
  HANDLE v370; // rax
  void *v371; // rax
  HANDLE v372; // rax
  void *v373; // rax
  void *v374; // rdx
  void *v375; // rbx
  HANDLE v376; // rax
  void *v377; // rbx
  HANDLE v378; // rax
  void *v379; // rbx
  HANDLE v380; // rax
  HANDLE v381; // rax
  HANDLE v382; // rax
  HANDLE v383; // rax
  HANDLE v384; // rax
  HANDLE v385; // rax
  unsigned __int8 *v386; // rbx
  __int64 v387; // rax
  int v388; // ebx
  unsigned __int64 v389; // rdi
  int *v390; // rax
  int *v391; // rcx
  unsigned __int8 *v392; // r8
  int *v393; // rbx
  int v394; // r10d
  unsigned int v395; // edx
  int v396; // r11d
  char v397; // r9
  int v398; // eax
  unsigned int v399; // r9d
  unsigned int v400; // r10d
  int v401; // eax
  char v402; // r11
  unsigned __int64 v403; // r11
  int v404; // esi
  unsigned __int8 *v405; // rcx
  int v406; // r12d
  unsigned int v407; // r15d
  int v408; // r13d
  _BYTE *v409; // rbx
  int v410; // r8d
  int v411; // r9d
  int v412; // edi
  int v413; // edx
  int v414; // r9d
  unsigned int v415; // edx
  int v416; // r9d
  int v417; // edx
  unsigned int v418; // r9d
  int v419; // edx
  int v420; // r9d
  int v421; // edx
  unsigned int v422; // r9d
  int v423; // edx
  int v424; // r9d
  unsigned int v425; // edx
  int v426; // r9d
  int v427; // edx
  int v428; // r9d
  int v429; // edx
  int v430; // r9d
  int v431; // edx
  int v432; // r9d
  int v433; // edx
  unsigned int v434; // r9d
  int v435; // edx
  int v436; // r9d
  unsigned __int64 v437; // rax
  __m128i v438; // xmm2
  __m128i v439; // xmm1
  __m128i v440; // xmm0
  __m128i v441; // xmm0
  __m128i v442; // xmm1
  __m128i v443; // xmm1
  __m128i v444; // xmm1
  __m128i v445; // xmm1
  unsigned __int8 v446; // dl
  int *v447; // rax
  void *v448; // rdi
  HANDLE v449; // rax
  unsigned int v450; // r9d
  unsigned int v451; // r11d
  int v452; // r10d
  SIZE_T v453; // r11
  size_t v454; // r9
  __int64 v455; // rdx
  unsigned int *v456; // rdi
  void *v457; // rax
  unsigned int v458; // ecx
  unsigned int *v459; // r10
  unsigned __int64 v460; // r10
  int v461; // eax
  unsigned int v462; // r9d
  HANDLE v463; // rax
  HANDLE v464; // rax
  HANDLE v465; // rax
  int v466; // r9d
  _DWORD *v467; // rax
  int v468; // eax
  LPVOID v469; // rcx
  int v470; // edi
  unsigned int v471; // r9d
  int v472; // edi
  int *v473; // rax
  LPVOID v474; // rcx
  unsigned int v475; // edi
  unsigned int v476; // r9d
  int v477; // edi
  int *v478; // rax
  LPVOID v479; // rcx
  int v480; // edi
  unsigned int v481; // r9d
  int v482; // r11d
  __int64 v483; // r9
  LPVOID v484; // rcx
  unsigned int v485; // edi
  unsigned int v486; // r10d
  int v487; // edi
  int *v488; // rax
  unsigned int *v489; // rcx
  unsigned int v490; // edi
  const void *v491; // r9
  unsigned int v492; // r10d
  unsigned int v493; // r11d
  unsigned int v494; // edi
  unsigned int *v495; // rax
  int v496; // ecx
  void *v497; // rdi
  HANDLE v498; // rax
  void *v499; // rdi
  HANDLE v500; // rax
  HANDLE v501; // rax
  HANDLE v502; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v504; // rax
  unsigned int v505; // edi
  int v506; // eax
  WCHAR *v507; // rax
  int v508; // edi
  int v509; // r14d
  int v510; // esi
  char *v511; // r15
  char *v512; // r13
  __int64 v513; // rbx
  int v514; // r11d
  int v515; // eax
  int v516; // r10d
  int v517; // r9d
  int v518; // r10d
  int v519; // esi
  int v520; // r9d
  unsigned int v521; // r14d
  int v522; // esi
  unsigned int v523; // r14d
  int v524; // esi
  int v525; // r14d
  unsigned int v526; // esi
  int v527; // r14d
  int v528; // esi
  int v529; // r14d
  unsigned int v530; // esi
  int v531; // r14d
  int v532; // esi
  unsigned int v533; // r8d
  int v534; // esi
  int v535; // r8d
  int v536; // esi
  int v537; // r8d
  unsigned int v538; // edx
  int v539; // r8d
  int v540; // edx
  int v541; // r8d
  unsigned int v542; // edx
  int v543; // r8d
  int v544; // ecx
  unsigned __int64 v545; // rax
  __m128i v546; // xmm2
  __m128i v547; // xmm1
  __m128i v548; // xmm0
  __m128i v549; // xmm0
  __m128i v550; // xmm1
  __m128i v551; // xmm1
  __m128i v552; // xmm1
  __m128i v553; // xmm1
  char n; // cl
  const WCHAR *v555; // rax
  int v556; // ecx
  __int64 v557; // rcx
  HMODULE *v558; // r8
  __int64 v559; // rdx
  unsigned __int64 v560; // rdx
  unsigned int v561; // edx
  const CHAR *v562; // r10
  __int64 v563; // r9
  __int64 (__fastcall *v564)(); // rax
  int v565; // r9d
  HANDLE v566; // rax
  HMODULE *v567; // rax
  __int64 v568; // rdx
  int v569; // eax
  WCHAR *v570; // rax
  int v571; // ecx
  char *v572; // rsi
  int v573; // edi
  char *v574; // r15
  int v575; // r13d
  int v576; // r14d
  __int64 v577; // rbx
  int v578; // eax
  int v579; // r11d
  int v580; // r10d
  int v581; // r11d
  int v582; // r14d
  int v583; // r10d
  unsigned int v584; // r9d
  int v585; // r14d
  unsigned int v586; // r9d
  int v587; // r14d
  int v588; // r9d
  unsigned int v589; // r14d
  int v590; // r9d
  int v591; // r14d
  int v592; // r9d
  unsigned int v593; // r14d
  int v594; // r9d
  int v595; // r14d
  unsigned int v596; // r8d
  int v597; // r14d
  int v598; // r8d
  int v599; // r14d
  int v600; // r8d
  unsigned int v601; // edx
  int v602; // r8d
  int v603; // edx
  int v604; // r8d
  unsigned int v605; // edx
  int v606; // r8d
  int v607; // ecx
  unsigned __int64 v608; // rax
  __m128i v609; // xmm2
  __m128i v610; // xmm1
  __m128i v611; // xmm0
  __m128i v612; // xmm0
  __m128i v613; // xmm1
  __m128i v614; // xmm1
  __m128i v615; // xmm1
  __m128i v616; // xmm1
  char ii; // dl
  const WCHAR *v618; // rax
  int v619; // ecx
  __int64 v620; // rcx
  HMODULE *v621; // r8
  __int64 v622; // rdx
  unsigned __int64 v623; // rdx
  unsigned int v624; // edx
  const CHAR *v625; // r10
  __int64 v626; // r9
  __int64 (__fastcall *v627)(); // rax
  int v628; // r9d
  HANDLE v629; // rax
  HMODULE *v630; // rax
  __int64 v631; // rdx
  signed int v632; // eax
  signed int v633; // edi
  _DWORD *v634; // rbx
  signed int v635; // eax
  bool v636; // sf
  void *v637; // rax
  void *v638; // rax
  _DWORD *v639; // rdi
  _DWORD *v640; // rax
  __int64 v641; // rbx
  _DWORD *v642; // r14
  unsigned int mm; // esi
  __int64 v644; // rax
  unsigned int v645; // ecx
  unsigned int v646; // r9d
  __int64 v647; // r8
  unsigned int v648; // edx
  _DWORD *v649; // rdi
  __int64 v650; // rdi
  __int64 v651; // rax
  wchar_t *v652; // rcx
  __int64 v653; // rax
  wchar_t *v654; // rcx
  wchar_t *v655; // rcx
  __int64 v656; // rax
  wchar_t *v657; // rcx
  wchar_t *v658; // rdx
  __int64 v659; // rax
  wchar_t *v660; // rcx
  __int64 v661; // rax
  wchar_t *v662; // rdx
  __int64 v663; // rax
  wchar_t *v664; // rcx
  __int64 v665; // rax
  wchar_t *v666; // rdx
  __int64 v667; // rax
  wchar_t *v668; // rcx
  __int64 v669; // rax
  __int64 v670; // rdx
  __int64 v671; // rax
  __int64 v672; // rcx
  __int64 v673; // rax
  __int64 v674; // rdx
  __int64 v675; // rax
  __int64 v676; // rcx
  __int64 v677; // rax
  __int64 v678; // rdx
  __int64 v679; // rax
  __int64 v680; // rcx
  __int64 v681; // rax
  __int64 v682; // rdx
  __int64 v683; // rax
  __int64 v684; // rcx
  __int64 v685; // rax
  __int64 v686; // rdx
  __int64 v687; // rax
  char *v688; // rax
  _BYTE *v689; // r11
  signed int v690; // ebx
  int v691; // ecx
  char *v692; // rsi
  int v693; // r13d
  char *v694; // r14
  int v695; // ebx
  int v696; // r10d
  __int64 v697; // r15
  int v698; // eax
  int v699; // r9d
  int v700; // r8d
  int v701; // r9d
  int v702; // r10d
  int v703; // r8d
  unsigned int v704; // edi
  int v705; // r10d
  unsigned int v706; // edi
  int v707; // r10d
  int v708; // edi
  unsigned int v709; // r10d
  int v710; // edi
  int v711; // r10d
  int v712; // edi
  unsigned int v713; // r10d
  int v714; // ecx
  int v715; // r10d
  unsigned int v716; // edi
  int v717; // r10d
  int v718; // edi
  int v719; // r10d
  int v720; // edi
  unsigned int v721; // r10d
  int v722; // edi
  int v723; // r10d
  int v724; // edi
  unsigned int v725; // r10d
  int v726; // edi
  int v727; // ecx
  unsigned __int64 v728; // rax
  __m128i v729; // xmm2
  __m128i v730; // xmm1
  __m128i v731; // xmm0
  __m128i v732; // xmm0
  __m128i v733; // xmm1
  __m128i v734; // xmm1
  __m128i v735; // xmm1
  __m128i v736; // xmm1
  char nn; // cl
  _BYTE *v738; // rdi
  __int64 *v739; // rax
  __int64 v740; // r8
  __int64 v741; // rdx
  char *v742; // rdi
  __int64 v743; // rdx
  __int64 v744; // rdi
  __int64 v745; // rdx
  __int64 v746; // rdi
  __int64 v747; // rdx
  __int64 v748; // rdi
  __int64 v749; // rdx
  __int64 v750; // rdi
  __int64 v751; // rdx
  __int64 v752; // rdi
  __int64 v753; // rdx
  __int64 v754; // rdi
  __int64 v755; // rdx
  __int64 v756; // rdi
  __int64 v757; // rdx
  __int64 v758; // rdi
  __int64 v759; // rdx
  __int64 v760; // rdi
  __int64 v761; // rdx
  __int64 v762; // rdi
  __int64 v763; // rdx
  __int64 v764; // rdi
  __int64 v765; // rdx
  __int64 v766; // rdi
  __int64 v767; // rdx
  __int64 v768; // rdi
  __int64 v769; // rdx
  __int64 v770; // rdi
  __int64 v771; // rdx
  __int64 v772; // rdi
  __int64 v773; // rdx
  __int64 v774; // rdi
  __int64 v775; // rdx
  __int64 v776; // rdi
  __int64 v777; // rdx
  __int64 v778; // rdi
  __int64 v779; // rdx
  __int64 v780; // rdi
  __int64 v781; // rdx
  __int64 v782; // rdi
  __int64 v783; // rdx
  __int64 v784; // rdi
  __int64 v785; // rdx
  __int64 v786; // rdi
  __int64 v787; // rdx
  __int64 v788; // rdi
  __int64 v789; // rdx
  __int64 v790; // rdi
  __int64 v791; // rdx
  __int64 v792; // rdi
  __int64 v793; // rdx
  __int64 v794; // rdi
  __int64 v795; // rdx
  __int64 v796; // rdi
  __int64 v797; // rdx
  __int64 v798; // rdi
  __int64 v799; // rdx
  __int64 v800; // rdi
  __int64 v801; // rdx
  __int64 v802; // rdi
  __int64 v803; // rdx
  __int64 v804; // rdi
  __int64 v805; // rdx
  __int64 v806; // rdi
  __int64 v807; // rdx
  __int64 v808; // rdi
  __int64 v809; // rdx
  __int64 v810; // rdi
  __int64 v811; // rdx
  __int64 v812; // rdi
  __int64 v813; // rdx
  __int64 v814; // rdi
  __int64 v815; // rdx
  void *v816; // rax
  unsigned __int16 *v817; // rdi
  __int16 *v818; // rcx
  unsigned __int16 *v819; // rdx
  unsigned int v820; // r8d
  __int16 v821; // r9
  _WORD *v822; // rcx
  __int64 v823; // rax
  _BYTE *v824; // rcx
  __int64 v825; // rax
  int v826; // eax
  void *v827; // rax
  __int64 v828; // rcx
  signed int v829; // eax
  signed int v830; // eax
  __int64 v831; // rcx
  __int64 v832; // rcx
  signed int v833; // ebx
  int v834; // edi
  signed int v835; // eax
  int v836; // eax
  unsigned int v837; // edi
  unsigned __int16 *v838; // rax
  signed int v839; // ebx
  signed int v840; // eax
  signed int v841; // ebx
  int v842; // eax
  __int64 v843; // rax
  signed int v844; // eax
  const unsigned __int16 *v845; // rax
  signed int v846; // ebx
  signed int v847; // eax
  signed int v848; // ebx
  int v849; // eax
  __int64 v850; // rax
  signed int v851; // eax
  int v852; // ecx
  unsigned int v853; // edi
  int v854; // edx
  int v855; // eax
  void *v856; // rdi
  int v857; // ebx
  int v858; // ebx
  void *v859; // rdi
  unsigned int v860; // edi
  __int64 v861; // rdx
  int v862; // ecx
  signed int v863; // ebx
  signed int v864; // eax
  signed int v865; // ebx
  int v866; // eax
  __int64 v867; // rax
  signed int v868; // eax
  int v869; // ebx
  void *v870; // rdi
  int v871; // eax
  int v872; // ebx
  int v873; // edi
  int v874; // ecx
  int v875; // ecx
  __int64 v876; // rax
  int v877; // edx
  int v878; // ecx
  __int64 v879; // rax
  int v880; // eax
  HMODULE *v881; // rax
  __int64 v882; // rdx
  unsigned int v883; // edi
  __int64 v884; // rax
  BOOL v885; // eax
  int v886; // edi
  int v887; // eax
  void *v888; // rdi
  __int64 v889; // rax
  signed int v890; // edi
  __int64 v891; // rax
  signed int v892; // eax
  int v893; // eax
  char *v894; // rcx
  __int64 v895; // rax
  int v896; // r9d
  int v897; // edx
  int v898; // r11d
  int v899; // ecx
  int v900; // r10d
  int v901; // r8d
  unsigned __int8 *v902; // rdi
  SIZE_T v903; // rax
  int v904; // r14d
  unsigned __int8 *v905; // r9
  SIZE_T v906; // r11
  int v907; // r8d
  int v908; // edi
  int v909; // edx
  int v910; // edi
  int v911; // edx
  int v912; // ecx
  void *v913; // rdi
  __int64 v914; // rax
  signed int v915; // edi
  __int64 v916; // rax
  signed int v917; // eax
  int v918; // eax
  char *v919; // rcx
  __int64 v920; // rax
  int v921; // eax
  int v922; // r9d
  int v923; // edx
  int v924; // r11d
  int v925; // ecx
  int v926; // r10d
  int v927; // r8d
  unsigned __int8 *v928; // rdi
  SIZE_T v929; // rax
  int v930; // r14d
  unsigned __int8 *v931; // r9
  SIZE_T v932; // r11
  int v933; // r8d
  int v934; // edi
  int v935; // edx
  int v936; // edi
  int v937; // edx
  int v938; // ecx
  LPCWSTR v939; // rdi
  char v940; // al
  int v941; // r9d
  unsigned int v942; // edx
  int v943; // r10d
  int v944; // edi
  __int64 v945; // rax
  __int64 v946; // rax
  int v947; // edi
  __int64 v948; // rax
  signed int v949; // eax
  bool v950; // sf
  unsigned __int16 *v951; // rdi
  int v952; // eax
  char *v953; // rcx
  __int64 v954; // rax
  int v955; // r11d
  int v956; // r9d
  int v957; // edx
  int v958; // ecx
  int v959; // r10d
  int v960; // r8d
  unsigned __int8 *v961; // rdi
  SIZE_T v962; // rax
  SIZE_T v963; // rax
  int v964; // esi
  unsigned __int8 *v965; // r9
  SIZE_T v966; // r11
  int v967; // r8d
  int v968; // edi
  int v969; // edx
  int v970; // edi
  int v971; // edx
  int v972; // ecx
  void *v973; // rdi
  __int64 v974; // rax
  signed int v975; // edi
  __int64 v976; // rax
  signed int v977; // eax
  int v978; // eax
  unsigned __int16 *v979; // rcx
  __int64 v980; // rax
  int v981; // eax
  int v982; // r11d
  int v983; // r9d
  int v984; // edx
  int v985; // ecx
  int v986; // r10d
  int v987; // r8d
  unsigned __int16 *v988; // rdi
  char *v989; // rax
  int v990; // esi
  unsigned __int8 *v991; // r9
  signed __int64 v992; // r11
  int v993; // r8d
  int v994; // edi
  int v995; // edx
  int v996; // edi
  int v997; // edx
  int v998; // ecx
  __int64 v999; // rcx
  __int64 v1000; // rcx
  __int64 v1001; // rcx
  int v1002; // eax
  __int64 v1003; // rax
  HMODULE *v1004; // rdi
  int v1005; // eax
  int v1006; // eax
  WCHAR *v1007; // rax
  int v1008; // r14d
  int v1009; // esi
  int v1010; // edi
  char *v1011; // r11
  int v1012; // r10d
  char *v1013; // r15
  __int64 v1014; // r13
  int v1015; // eax
  int v1016; // r9d
  int v1017; // r8d
  int v1018; // r9d
  int v1019; // r10d
  int v1020; // r8d
  unsigned int v1021; // edi
  int v1022; // r10d
  unsigned int v1023; // edi
  int v1024; // r10d
  int v1025; // edi
  unsigned int v1026; // r10d
  int v1027; // edi
  int v1028; // r10d
  int v1029; // edi
  unsigned int v1030; // r10d
  int v1031; // ecx
  int v1032; // r10d
  unsigned int v1033; // edi
  int v1034; // r10d
  int v1035; // edi
  int v1036; // r10d
  int v1037; // edi
  unsigned int v1038; // edx
  int v1039; // edi
  int v1040; // edx
  int v1041; // edi
  unsigned int v1042; // edx
  int v1043; // edi
  int v1044; // ecx
  unsigned __int64 v1045; // rax
  WCHAR *v1046; // rdi
  __m128i v1047; // xmm1
  __m128i v1048; // xmm2
  __m128i v1049; // xmm0
  __m128i v1050; // xmm0
  __m128i v1051; // xmm1
  __m128i v1052; // xmm1
  __m128i v1053; // xmm1
  __m128i v1054; // xmm1
  char jj; // cl
  int v1056; // ecx
  const WCHAR *v1057; // rdx
  __int64 v1058; // rax
  WCHAR *v1059; // rdi
  HMODULE *v1060; // r8
  __int64 v1061; // rdx
  unsigned __int64 v1062; // rdx
  unsigned int v1063; // eax
  unsigned int v1064; // edx
  const CHAR *v1065; // r9
  __int64 v1066; // rax
  __int64 (__fastcall *v1067)(); // rax
  HANDLE v1068; // rax
  __int64 v1069; // rax
  HMODULE *v1070; // rdi
  int v1071; // eax
  __int64 v1072; // rax
  HMODULE *v1073; // rdi
  HANDLE v1074; // rax
  void *v1075; // rax
  void *v1076; // rdi
  unsigned int v1077; // edi
  HANDLE v1078; // rax
  WCHAR *v1079; // rax
  unsigned int v1080; // r9d
  unsigned int v1081; // edi
  HANDLE v1082; // rax
  _DWORD *v1083; // rax
  _DWORD *v1084; // rdi
  int *v1085; // rcx
  unsigned int v1086; // r11d
  _DWORD *v1087; // rdi
  __int64 v1088; // rcx
  int v1089; // r10d
  unsigned int v1090; // r11d
  size_t v1091; // r9
  void *v1092; // rcx
  unsigned int v1093; // edi
  unsigned int *v1094; // r9
  __int64 v1095; // r9
  int v1096; // r11d
  unsigned int *v1097; // r9
  unsigned int v1098; // r10d
  void *v1099; // rcx
  unsigned int v1100; // edi
  unsigned int *v1101; // r9
  __int64 v1102; // r9
  int v1103; // r10d
  _DWORD *v1104; // r9
  unsigned __int64 *v1105; // rax
  __int64 v1106; // rcx
  unsigned int v1107; // edi
  int v1108; // edi
  unsigned int v1109; // r9d
  unsigned int v1110; // ecx
  unsigned int v1111; // edi
  HANDLE v1112; // rax
  unsigned int v1113; // r10d
  void *v1114; // rcx
  __int64 v1115; // r9
  _DWORD *v1116; // rcx
  HANDLE v1117; // rax
  int v1118; // edi
  int v1119; // edi
  unsigned __int64 v1120; // rdi
  void *v1121; // rax
  unsigned __int8 v1122; // dl
  unsigned __int64 v1123; // rcx
  __m128i v1124; // xmm1
  __m128i v1125; // xmm2
  __m128i v1126; // xmm0
  __m128i v1127; // xmm0
  __m128i v1128; // xmm1
  __m128i v1129; // xmm1
  __m128i v1130; // xmm1
  __m128i v1131; // xmm1
  _BYTE *v1132; // r11
  int v1133; // r9d
  unsigned __int8 *v1134; // r10
  unsigned int v1135; // r8d
  unsigned int v1136; // eax
  int v1137; // r9d
  char v1138; // r8
  int v1139; // r14d
  int v1140; // edx
  int v1141; // ecx
  unsigned int v1142; // r9d
  int v1143; // ecx
  char v1144; // dl
  int v1145; // ecx
  _BYTE *v1146; // rbx
  int v1147; // r14d
  unsigned __int8 *v1148; // r12
  unsigned __int64 v1149; // r10
  int v1150; // r13d
  int v1151; // r11d
  int v1152; // r15d
  int v1153; // eax
  int v1154; // edi
  int v1155; // edx
  int v1156; // edi
  int v1157; // edx
  int v1158; // r9d
  int v1159; // r8d
  int v1160; // r9d
  int v1161; // r8d
  int v1162; // r9d
  unsigned int v1163; // r8d
  int v1164; // r9d
  int v1165; // r8d
  int v1166; // r9d
  int v1167; // r8d
  int v1168; // r9d
  int v1169; // r8d
  unsigned int v1170; // r9d
  unsigned int v1171; // r8d
  int v1172; // r9d
  int v1173; // r8d
  int v1174; // r9d
  int v1175; // r8d
  int v1176; // r9d
  int v1177; // r8d
  int v1178; // r9d
  int v1179; // r8d
  unsigned int v1180; // r9d
  int v1181; // r8d
  void *v1182; // rcx
  HANDLE v1183; // rax
  _DWORD *v1184; // rax
  _DWORD *v1185; // rsi
  HANDLE v1186; // rax
  void *v1187; // rax
  void *v1188; // rdx
  HANDLE v1189; // rax
  _OWORD *v1190; // rax
  HANDLE v1191; // rax
  _QWORD *v1192; // rax
  void *v1193; // rdi
  HANDLE v1194; // rax
  void *v1195; // rdi
  HANDLE v1196; // rax
  void *v1197; // rdi
  HANDLE v1198; // rax
  HANDLE v1199; // rax
  HANDLE v1200; // rax
  HANDLE v1201; // rax
  HANDLE v1202; // rax
  HANDLE v1203; // rax
  HANDLE v1204; // rax
  const void **v1205; // rsi
  int v1206; // edi
  unsigned int v1207; // r10d
  unsigned int v1208; // eax
  unsigned int v1209; // edi
  HANDLE v1210; // rax
  void *v1211; // rcx
  void *v1212; // rcx
  _DWORD *v1213; // rdx
  HANDLE v1214; // rax
  unsigned int v1215; // esi
  int v1216; // eax
  __int64 v1217; // rcx
  int v1218; // eax
  unsigned int v1219; // r9d
  unsigned int *v1220; // rcx
  int v1221; // r10d
  int v1222; // r10d
  unsigned int *v1223; // rax
  unsigned int *v1224; // rcx
  unsigned int v1225; // r9d
  int v1226; // r10d
  unsigned int v1227; // r10d
  unsigned int *v1228; // rax
  __int64 v1229; // rcx
  unsigned int v1230; // r10d
  __int64 v1231; // r10
  unsigned int v1232; // r11d
  unsigned int v1233; // r10d
  unsigned int v1234; // eax
  _DWORD *v1235; // rcx
  unsigned int v1236; // edi
  HANDLE v1237; // rax
  _DWORD *v1238; // rax
  signed int v1239; // eax
  unsigned int v1240; // r9d
  WCHAR *v1241; // rsi
  int v1242; // edi
  FARPROC v1243; // rax
  int v1244; // eax
  int v1245; // r9d
  SIZE_T v1246; // r10
  unsigned int v1247; // r10d
  unsigned int v1248; // r11d
  int v1249; // r9d
  unsigned int v1250; // r11d
  int v1251; // r9d
  unsigned int v1252; // r10d
  unsigned int v1253; // r10d
  unsigned int v1254; // r11d
  int v1255; // r9d
  int v1256; // r9d
  unsigned int v1257; // r11d
  int v1258; // r9d
  int v1259; // r10d
  int v1260; // r11d
  HANDLE v1261; // rax
  _QWORD *v1262; // rax
  _QWORD *v1263; // rdi
  HANDLE v1264; // rax
  HANDLE v1265; // rax
  WCHAR *v1266; // rax
  unsigned __int8 *v1267; // rdi
  __int64 v1268; // rax
  unsigned __int64 v1269; // rsi
  void *v1270; // rax
  int *v1271; // r11
  unsigned __int8 *v1272; // r8
  unsigned __int8 v1273; // cl
  _BYTE *v1274; // r9
  unsigned int v1275; // r10d
  int v1276; // edx
  unsigned int v1277; // edi
  char v1278; // r14
  int v1279; // eax
  HANDLE v1280; // rax
  void *v1281; // rax
  HANDLE v1282; // rax
  void *v1283; // rax
  void *v1284; // rdx
  HANDLE v1285; // rax
  void *v1286; // rax
  void *v1287; // rdx
  HANDLE v1288; // rax
  HANDLE v1289; // rax
  HANDLE v1290; // rax
  HANDLE v1291; // rax
  HANDLE v1292; // rax
  HANDLE v1293; // rax
  unsigned int v1294; // edx
  int v1295; // eax
  char v1296; // r14
  int v1297; // r15d
  _BYTE *v1298; // r12
  char *v1299; // r11
  unsigned __int8 *v1300; // r13
  int v1301; // esi
  int v1302; // ebx
  int v1303; // eax
  int v1304; // r9d
  int v1305; // r8d
  int v1306; // r9d
  int v1307; // r10d
  int v1308; // r8d
  unsigned int v1309; // edi
  int v1310; // r10d
  unsigned int v1311; // edi
  int v1312; // r10d
  int v1313; // edi
  unsigned int v1314; // r10d
  int v1315; // edi
  int v1316; // r10d
  int v1317; // edi
  unsigned int v1318; // r10d
  int v1319; // edi
  int v1320; // r10d
  unsigned int v1321; // edi
  int v1322; // r10d
  int v1323; // edi
  int v1324; // r10d
  int v1325; // edi
  unsigned int v1326; // edx
  int v1327; // edi
  int v1328; // edx
  int v1329; // edi
  unsigned int v1330; // edx
  int v1331; // eax
  int v1332; // ecx
  unsigned __int64 v1333; // rax
  __m128i v1334; // xmm1
  __m128i v1335; // xmm2
  __m128i v1336; // xmm0
  __m128i v1337; // xmm0
  __m128i v1338; // xmm1
  __m128i v1339; // xmm1
  __m128i v1340; // xmm1
  __m128i v1341; // xmm1
  int *v1342; // r9
  void *v1343; // rsi
  HANDLE v1344; // rax
  int v1345; // edi
  unsigned int v1346; // r9d
  unsigned int v1347; // r10d
  __int64 v1348; // r10
  int v1349; // r11d
  SIZE_T v1350; // r14
  __int64 v1351; // rdx
  void *v1352; // rsi
  void *v1353; // rax
  unsigned int v1354; // ecx
  unsigned __int64 v1355; // r9
  unsigned __int64 v1356; // r11
  unsigned int *v1357; // r9
  unsigned __int64 v1358; // r11
  int v1359; // eax
  __int64 v1360; // r9
  unsigned int v1361; // r10d
  HANDLE v1362; // rax
  HANDLE v1363; // rax
  _QWORD *v1364; // rsi
  void *v1365; // r14
  HANDLE v1366; // rax
  void *v1367; // r14
  HANDLE v1368; // rax
  void *v1369; // r14
  HANDLE v1370; // rax
  HANDLE v1371; // rax
  HANDLE v1372; // rax
  HANDLE v1373; // rax
  void *v1374; // rsi
  HANDLE v1375; // rax
  void *v1376; // rsi
  HANDLE v1377; // rax
  void *v1378; // rsi
  HANDLE v1379; // rax
  HANDLE v1380; // rax
  HANDLE v1381; // rax
  unsigned int *v1382; // rdi
  int v1383; // r9d
  unsigned int v1384; // r10d
  int *v1385; // rax
  int v1386; // r9d
  int v1387; // edi
  _QWORD *v1388; // rax
  void *v1389; // rdi
  HANDLE v1390; // rax
  void *v1391; // rdi
  HANDLE v1392; // rax
  HANDLE v1393; // rax
  HANDLE v1394; // rax
  int v1395; // edi
  int v1396; // eax
  HMODULE *v1397; // rsi
  char *v1398; // [rsp+60h] [rbp-A0h]
  const unsigned __int16 *v1399; // [rsp+60h] [rbp-A0h]
  SIZE_T v1400; // [rsp+60h] [rbp-A0h]
  SIZE_T v1401; // [rsp+60h] [rbp-A0h]
  SIZE_T v1402; // [rsp+60h] [rbp-A0h]
  SIZE_T v1403; // [rsp+60h] [rbp-A0h]
  void *v1404; // [rsp+60h] [rbp-A0h]
  SIZE_T v1405; // [rsp+60h] [rbp-A0h]
  SIZE_T v1406; // [rsp+60h] [rbp-A0h]
  _DWORD *v1407; // [rsp+60h] [rbp-A0h]
  SIZE_T v1408; // [rsp+60h] [rbp-A0h]
  void *v1409; // [rsp+60h] [rbp-A0h]
  void *v1410; // [rsp+60h] [rbp-A0h]
  void *v1411; // [rsp+60h] [rbp-A0h]
  void *v1412; // [rsp+60h] [rbp-A0h]
  _DWORD *v1413; // [rsp+60h] [rbp-A0h]
  void *v1414; // [rsp+60h] [rbp-A0h]
  SIZE_T v1415; // [rsp+60h] [rbp-A0h]
  void *v1416; // [rsp+60h] [rbp-A0h]
  void *v1417; // [rsp+60h] [rbp-A0h]
  void *v1418; // [rsp+60h] [rbp-A0h]
  void *v1419; // [rsp+60h] [rbp-A0h]
  void *v1420; // [rsp+60h] [rbp-A0h]
  void *v1421; // [rsp+60h] [rbp-A0h]
  SIZE_T v1422; // [rsp+60h] [rbp-A0h]
  unsigned int v1423; // [rsp+68h] [rbp-98h]
  int v1424; // [rsp+68h] [rbp-98h]
  int v1425; // [rsp+68h] [rbp-98h]
  int v1426; // [rsp+68h] [rbp-98h]
  unsigned int v1427; // [rsp+68h] [rbp-98h]
  unsigned int v1428; // [rsp+68h] [rbp-98h]
  int v1429; // [rsp+68h] [rbp-98h]
  unsigned int v1430; // [rsp+68h] [rbp-98h]
  unsigned int i2; // [rsp+6Ch] [rbp-94h]
  int v1432; // [rsp+6Ch] [rbp-94h]
  signed int v1433; // [rsp+6Ch] [rbp-94h]
  int v1434; // [rsp+6Ch] [rbp-94h]
  int v1435; // [rsp+6Ch] [rbp-94h]
  int v1436; // [rsp+6Ch] [rbp-94h]
  int v1437; // [rsp+6Ch] [rbp-94h]
  int v1438; // [rsp+6Ch] [rbp-94h]
  void *v1439; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1440; // [rsp+70h] [rbp-90h]
  __int64 v1441; // [rsp+70h] [rbp-90h]
  LPVOID v1442; // [rsp+70h] [rbp-90h]
  char *v1443; // [rsp+70h] [rbp-90h]
  __int64 v1444; // [rsp+70h] [rbp-90h]
  char *v1445; // [rsp+70h] [rbp-90h]
  __int64 v1446; // [rsp+70h] [rbp-90h]
  signed int v1447; // [rsp+70h] [rbp-90h]
  int v1448; // [rsp+70h] [rbp-90h]
  int v1449; // [rsp+70h] [rbp-90h]
  int v1450; // [rsp+70h] [rbp-90h]
  unsigned int v1451; // [rsp+70h] [rbp-90h]
  unsigned int v1452; // [rsp+70h] [rbp-90h]
  unsigned int v1453; // [rsp+70h] [rbp-90h]
  unsigned int v1454; // [rsp+70h] [rbp-90h]
  int v1455; // [rsp+70h] [rbp-90h]
  int v1456; // [rsp+70h] [rbp-90h]
  _QWORD *v1457; // [rsp+78h] [rbp-88h]
  char *v1458; // [rsp+78h] [rbp-88h]
  __int64 v1459; // [rsp+78h] [rbp-88h]
  char *v1460; // [rsp+78h] [rbp-88h]
  __int64 v1461; // [rsp+78h] [rbp-88h]
  LPVOID v1462; // [rsp+78h] [rbp-88h]
  LPVOID v1463; // [rsp+78h] [rbp-88h]
  LPVOID v1464; // [rsp+78h] [rbp-88h]
  LPVOID v1465; // [rsp+78h] [rbp-88h]
  LPVOID v1466; // [rsp+78h] [rbp-88h]
  LPVOID v1467; // [rsp+78h] [rbp-88h]
  __int64 v1468; // [rsp+78h] [rbp-88h]
  void *v1469; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v1470; // [rsp+78h] [rbp-88h]
  void *v1471; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v1472; // [rsp+78h] [rbp-88h]
  const WCHAR *v1473; // [rsp+78h] [rbp-88h]
  LPVOID v1474; // [rsp+78h] [rbp-88h]
  char *v1475; // [rsp+78h] [rbp-88h]
  char *v1476; // [rsp+78h] [rbp-88h]
  int *v1477; // [rsp+78h] [rbp-88h]
  int v1478; // [rsp+80h] [rbp-80h]
  unsigned int v1479; // [rsp+80h] [rbp-80h]
  int v1480; // [rsp+80h] [rbp-80h]
  unsigned int v1481; // [rsp+80h] [rbp-80h]
  int v1482; // [rsp+80h] [rbp-80h]
  unsigned int v1483; // [rsp+80h] [rbp-80h]
  int v1484; // [rsp+80h] [rbp-80h]
  int v1485; // [rsp+80h] [rbp-80h]
  int v1486; // [rsp+80h] [rbp-80h]
  unsigned int v1487; // [rsp+84h] [rbp-7Ch]
  unsigned int v1488; // [rsp+84h] [rbp-7Ch]
  unsigned int v1489; // [rsp+84h] [rbp-7Ch]
  unsigned int v1490; // [rsp+84h] [rbp-7Ch]
  unsigned int v1491; // [rsp+84h] [rbp-7Ch]
  int v1492; // [rsp+84h] [rbp-7Ch]
  int v1493; // [rsp+84h] [rbp-7Ch]
  int v1494; // [rsp+84h] [rbp-7Ch]
  int v1495; // [rsp+84h] [rbp-7Ch]
  _BYTE *v1496; // [rsp+88h] [rbp-78h]
  void *v1497; // [rsp+88h] [rbp-78h]
  void *v1498; // [rsp+88h] [rbp-78h]
  void *v1499; // [rsp+88h] [rbp-78h]
  void *v1500; // [rsp+88h] [rbp-78h]
  unsigned int *v1501; // [rsp+88h] [rbp-78h]
  void *v1502; // [rsp+88h] [rbp-78h]
  void *v1503; // [rsp+88h] [rbp-78h]
  void *v1504; // [rsp+88h] [rbp-78h]
  void *v1505; // [rsp+88h] [rbp-78h]
  void *v1506; // [rsp+88h] [rbp-78h]
  void *v1507; // [rsp+88h] [rbp-78h]
  void *v1508; // [rsp+88h] [rbp-78h]
  SIZE_T v1509; // [rsp+88h] [rbp-78h]
  SIZE_T v1510; // [rsp+88h] [rbp-78h]
  SIZE_T v1511; // [rsp+88h] [rbp-78h]
  const void *v1512; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v1513; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v1514; // [rsp+90h] [rbp-70h]
  unsigned int v1515; // [rsp+90h] [rbp-70h]
  int v1516; // [rsp+90h] [rbp-70h]
  int v1517; // [rsp+90h] [rbp-70h]
  unsigned int v1518; // [rsp+90h] [rbp-70h]
  int v1519; // [rsp+90h] [rbp-70h]
  unsigned int i1; // [rsp+90h] [rbp-70h]
  int v1521; // [rsp+90h] [rbp-70h]
  int v1522; // [rsp+90h] [rbp-70h]
  int kk; // [rsp+90h] [rbp-70h]
  void *v1524; // [rsp+98h] [rbp-68h]
  int *v1525; // [rsp+98h] [rbp-68h]
  __int64 v1526; // [rsp+98h] [rbp-68h]
  __int64 v1527; // [rsp+98h] [rbp-68h]
  int v1528; // [rsp+98h] [rbp-68h]
  int v1529; // [rsp+98h] [rbp-68h]
  int v1530; // [rsp+98h] [rbp-68h]
  int v1531; // [rsp+98h] [rbp-68h]
  int v1532; // [rsp+98h] [rbp-68h]
  unsigned __int8 v1533; // [rsp+98h] [rbp-68h]
  unsigned int v1534; // [rsp+98h] [rbp-68h]
  unsigned int v1535; // [rsp+98h] [rbp-68h]
  unsigned __int64 lpModuleName; // [rsp+A0h] [rbp-60h]
  WCHAR *lpModuleNamea; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNameb; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamec; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamed; // [rsp+A0h] [rbp-60h]
  WCHAR *lpModuleNamee; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamef; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNameg; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNameh; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamei; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamej; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamek; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamel; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamem; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNamen; // [rsp+A0h] [rbp-60h]
  LPCWSTR lpModuleNameo; // [rsp+A0h] [rbp-60h]
  WCHAR *lpModuleNamep; // [rsp+A0h] [rbp-60h]
  int v1553; // [rsp+A8h] [rbp-58h]
  unsigned int v1554; // [rsp+A8h] [rbp-58h]
  int v1555; // [rsp+A8h] [rbp-58h]
  char v1556; // [rsp+A8h] [rbp-58h]
  int v1557; // [rsp+A8h] [rbp-58h]
  unsigned int j; // [rsp+ACh] [rbp-54h]
  unsigned int v1559; // [rsp+ACh] [rbp-54h]
  int v1560; // [rsp+ACh] [rbp-54h]
  unsigned int v1561; // [rsp+ACh] [rbp-54h]
  unsigned int v1562; // [rsp+ACh] [rbp-54h]
  int v1563; // [rsp+ACh] [rbp-54h]
  int v1564; // [rsp+ACh] [rbp-54h]
  unsigned int v1565; // [rsp+B0h] [rbp-50h]
  int v1566; // [rsp+B0h] [rbp-50h]
  int v1567; // [rsp+B0h] [rbp-50h]
  int v1568; // [rsp+B0h] [rbp-50h]
  int v1569; // [rsp+B0h] [rbp-50h]
  unsigned int v1570; // [rsp+B0h] [rbp-50h]
  void *v1571; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v1572; // [rsp+B8h] [rbp-48h]
  _BYTE *v1573; // [rsp+B8h] [rbp-48h]
  int v1574; // [rsp+B8h] [rbp-48h]
  int v1575; // [rsp+B8h] [rbp-48h]
  int v1576; // [rsp+B8h] [rbp-48h]
  int v1577; // [rsp+B8h] [rbp-48h]
  int v1578; // [rsp+B8h] [rbp-48h]
  int v1579; // [rsp+B8h] [rbp-48h]
  unsigned int v1580; // [rsp+B8h] [rbp-48h]
  int v1581; // [rsp+B8h] [rbp-48h]
  unsigned int v1582; // [rsp+B8h] [rbp-48h]
  int v1583; // [rsp+C0h] [rbp-40h]
  int v1584; // [rsp+C0h] [rbp-40h]
  int v1585; // [rsp+C0h] [rbp-40h]
  int v1586; // [rsp+C0h] [rbp-40h]
  _QWORD *v1587; // [rsp+C8h] [rbp-38h]
  SIZE_T v1588; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v1589; // [rsp+C8h] [rbp-38h]
  SIZE_T v1590; // [rsp+C8h] [rbp-38h]
  SIZE_T v1591; // [rsp+C8h] [rbp-38h]
  SIZE_T v1592; // [rsp+C8h] [rbp-38h]
  SIZE_T v1593; // [rsp+C8h] [rbp-38h]
  SIZE_T v1594; // [rsp+C8h] [rbp-38h]
  SIZE_T v1595; // [rsp+C8h] [rbp-38h]
  SIZE_T v1596; // [rsp+C8h] [rbp-38h]
  SIZE_T v1597; // [rsp+C8h] [rbp-38h]
  unsigned int v1598; // [rsp+D0h] [rbp-30h]
  int v1599; // [rsp+D0h] [rbp-30h]
  unsigned __int8 v1600; // [rsp+D0h] [rbp-30h]
  void *v1601; // [rsp+D8h] [rbp-28h]
  void *v1602; // [rsp+D8h] [rbp-28h]
  int v1603; // [rsp+D8h] [rbp-28h]
  int v1604; // [rsp+D8h] [rbp-28h]
  unsigned int v1605; // [rsp+D8h] [rbp-28h]
  int v1606; // [rsp+D8h] [rbp-28h]
  char *v1607; // [rsp+E0h] [rbp-20h]
  unsigned __int8 *v1608; // [rsp+E0h] [rbp-20h]
  const WCHAR *v1609; // [rsp+E0h] [rbp-20h]
  LPVOID v1610; // [rsp+E0h] [rbp-20h]
  __int64 v1611; // [rsp+E0h] [rbp-20h]
  int v1612; // [rsp+E0h] [rbp-20h]
  __int64 v1613; // [rsp+E0h] [rbp-20h]
  void *v1614; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v1615; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1616; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1617; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1618; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1619; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1620; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1621; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v1622; // [rsp+E8h] [rbp-18h]
  _BYTE *v1623; // [rsp+F0h] [rbp-10h]
  void *v1624; // [rsp+F0h] [rbp-10h]
  SIZE_T v1625; // [rsp+F0h] [rbp-10h]
  SIZE_T v1626; // [rsp+F0h] [rbp-10h]
  SIZE_T v1627; // [rsp+F0h] [rbp-10h]
  SIZE_T v1628; // [rsp+F0h] [rbp-10h]
  WCHAR *v1629; // [rsp+F0h] [rbp-10h]
  _DWORD *v1630; // [rsp+F0h] [rbp-10h]
  int v1631; // [rsp+F8h] [rbp-8h]
  int v1632; // [rsp+F8h] [rbp-8h]
  int v1633; // [rsp+F8h] [rbp-8h]
  int v1634; // [rsp+F8h] [rbp-8h]
  __int64 v1635; // [rsp+F8h] [rbp-8h]
  unsigned int v1636; // [rsp+100h] [rbp+0h]
  _DWORD *v1637; // [rsp+100h] [rbp+0h]
  int v1638; // [rsp+100h] [rbp+0h]
  __int64 v1639; // [rsp+100h] [rbp+0h]
  unsigned int v1640; // [rsp+100h] [rbp+0h]
  int v1641; // [rsp+100h] [rbp+0h]
  int v1642; // [rsp+100h] [rbp+0h]
  LPCWSTR v1643; // [rsp+108h] [rbp+8h]
  LPCWSTR v1644; // [rsp+108h] [rbp+8h]
  LPCWSTR v1645; // [rsp+108h] [rbp+8h]
  WCHAR *v1646; // [rsp+108h] [rbp+8h]
  WCHAR *v1647; // [rsp+108h] [rbp+8h]
  __int64 v1648; // [rsp+108h] [rbp+8h]
  WCHAR *v1649; // [rsp+108h] [rbp+8h]
  int v1650; // [rsp+110h] [rbp+10h]
  int v1651; // [rsp+110h] [rbp+10h]
  int v1652; // [rsp+110h] [rbp+10h]
  SIZE_T v1653; // [rsp+118h] [rbp+18h]
  void *v1654; // [rsp+118h] [rbp+18h]
  SIZE_T v1655; // [rsp+118h] [rbp+18h]
  SIZE_T v1656; // [rsp+118h] [rbp+18h]
  unsigned int v1657; // [rsp+118h] [rbp+18h]
  _DWORD *v1658; // [rsp+118h] [rbp+18h]
  int v1659; // [rsp+120h] [rbp+20h]
  int v1660; // [rsp+124h] [rbp+24h] BYREF
  unsigned int v1661; // [rsp+128h] [rbp+28h] BYREF
  void *v1662; // [rsp+130h] [rbp+30h] BYREF
  char *v1663; // [rsp+138h] [rbp+38h]
  int v1664; // [rsp+140h] [rbp+40h]
  unsigned int v1665; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1666; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v1667; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1668; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1669; // [rsp+158h] [rbp+58h]
  unsigned int v1670; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1671; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1672; // [rsp+164h] [rbp+64h]
  unsigned int v1673; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1674; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1675; // [rsp+170h] [rbp+70h]
  unsigned int v1676; // [rsp+174h] [rbp+74h] BYREF
  int v1677; // [rsp+178h] [rbp+78h]
  unsigned int v1678; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v1679; // [rsp+184h] [rbp+84h]
  unsigned int v1680; // [rsp+188h] [rbp+88h] BYREF
  int v1681; // [rsp+190h] [rbp+90h]
  unsigned int v1682; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1683; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v1684; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1685; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1686; // [rsp+1A8h] [rbp+A8h]
  unsigned int v1687; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1688; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1689; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1690; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1691; // [rsp+1BCh] [rbp+BCh] BYREF
  SIZE_T v1692; // [rsp+1C0h] [rbp+C0h]
  unsigned int v1693; // [rsp+1C8h] [rbp+C8h] BYREF
  int v1694; // [rsp+1CCh] [rbp+CCh]
  int v1695; // [rsp+1D0h] [rbp+D0h]
  unsigned int v1696; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1697; // [rsp+1D8h] [rbp+D8h]
  int v1698; // [rsp+1DCh] [rbp+DCh]
  int v1699; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1700; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1701; // [rsp+1E8h] [rbp+E8h]
  unsigned int v1702; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1703; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1704; // [rsp+1F4h] [rbp+F4h]
  unsigned int v1705; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1706; // [rsp+1FCh] [rbp+FCh]
  int v1707; // [rsp+200h] [rbp+100h]
  _DWORD v1708[2]; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1709; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1710; // [rsp+210h] [rbp+110h] BYREF
  int v1711; // [rsp+214h] [rbp+114h]
  int v1712; // [rsp+218h] [rbp+118h]
  int v1713; // [rsp+21Ch] [rbp+11Ch]
  int v1714; // [rsp+220h] [rbp+120h]
  int v1715; // [rsp+224h] [rbp+124h]
  int v1716; // [rsp+228h] [rbp+128h]
  unsigned int v1717; // [rsp+22Ch] [rbp+12Ch]
  int v1718; // [rsp+230h] [rbp+130h]
  int v1719; // [rsp+234h] [rbp+134h]
  int v1720; // [rsp+238h] [rbp+138h]
  int v1721; // [rsp+23Ch] [rbp+13Ch]
  int v1722; // [rsp+240h] [rbp+140h]
  unsigned int v1723; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1724; // [rsp+248h] [rbp+148h] BYREF
  int v1725; // [rsp+24Ch] [rbp+14Ch]
  int v1726; // [rsp+250h] [rbp+150h]
  unsigned int v1727; // [rsp+254h] [rbp+154h]
  int v1728; // [rsp+258h] [rbp+158h]
  int v1729; // [rsp+25Ch] [rbp+15Ch]
  int v1730; // [rsp+260h] [rbp+160h]
  int v1731; // [rsp+264h] [rbp+164h]
  int v1732; // [rsp+268h] [rbp+168h]
  int v1733; // [rsp+26Ch] [rbp+16Ch]
  int v1734; // [rsp+270h] [rbp+170h]
  unsigned int v1735; // [rsp+274h] [rbp+174h] BYREF
  unsigned int v1736; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1737; // [rsp+27Ch] [rbp+17Ch]
  unsigned int v1738; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v1739; // [rsp+284h] [rbp+184h] BYREF
  unsigned int v1740; // [rsp+288h] [rbp+188h] BYREF
  int v1741; // [rsp+290h] [rbp+190h]
  unsigned int v1742; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v1743; // [rsp+29Ch] [rbp+19Ch]
  unsigned int v1744; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int v1745; // [rsp+2A4h] [rbp+1A4h] BYREF
  unsigned int v1746; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1747; // [rsp+2ACh] [rbp+1ACh] BYREF
  unsigned int v1748; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1749; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1750; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1751; // [rsp+2BCh] [rbp+1BCh] BYREF
  unsigned int v1752; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v1753; // [rsp+2C4h] [rbp+1C4h] BYREF
  unsigned int v1754; // [rsp+2C8h] [rbp+1C8h] BYREF
  SIZE_T v1755; // [rsp+2CCh] [rbp+1CCh]
  unsigned int v1756; // [rsp+2D4h] [rbp+1D4h] BYREF
  unsigned int v1757; // [rsp+2D8h] [rbp+1D8h]
  unsigned int v1758; // [rsp+2DCh] [rbp+1DCh]
  unsigned int v1759; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v1760; // [rsp+2E4h] [rbp+1E4h]
  int v1761; // [rsp+2E8h] [rbp+1E8h]
  unsigned int v1762; // [rsp+2ECh] [rbp+1ECh]
  unsigned int v1763; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int v1764; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v1765; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1766; // [rsp+2FCh] [rbp+1FCh] BYREF
  unsigned int v1767; // [rsp+300h] [rbp+200h]
  unsigned int v1768; // [rsp+304h] [rbp+204h] BYREF
  unsigned int v1769; // [rsp+308h] [rbp+208h] BYREF
  int v1770; // [rsp+30Ch] [rbp+20Ch]
  _DWORD v1771[2]; // [rsp+310h] [rbp+210h] BYREF
  _DWORD v1772[4]; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1773; // [rsp+328h] [rbp+228h] BYREF
  int v1774; // [rsp+32Ch] [rbp+22Ch]
  int v1775; // [rsp+330h] [rbp+230h]
  unsigned int dwBytes; // [rsp+334h] [rbp+234h] BYREF
  unsigned int dwBytes_4; // [rsp+338h] [rbp+238h] BYREF
  unsigned int v1778; // [rsp+33Ch] [rbp+23Ch]
  unsigned int v1779; // [rsp+340h] [rbp+240h] BYREF
  unsigned int v1780; // [rsp+344h] [rbp+244h] BYREF
  unsigned int v1781; // [rsp+348h] [rbp+248h] BYREF
  unsigned int v1782; // [rsp+34Ch] [rbp+24Ch] BYREF
  _DWORD *v1783; // [rsp+350h] [rbp+250h] BYREF
  unsigned int v1784; // [rsp+358h] [rbp+258h] BYREF
  int v1785; // [rsp+35Ch] [rbp+25Ch]
  void *Src; // [rsp+360h] [rbp+260h]
  size_t Size; // [rsp+368h] [rbp+268h]
  void *v1788; // [rsp+370h] [rbp+270h]
  size_t v1789; // [rsp+378h] [rbp+278h]
  unsigned __int64 v1790; // [rsp+380h] [rbp+280h]
  size_t pcchLength; // [rsp+388h] [rbp+288h] BYREF
  unsigned int *v1792; // [rsp+390h] [rbp+290h] BYREF
  unsigned int *v1793; // [rsp+398h] [rbp+298h] BYREF
  unsigned __int64 v1794; // [rsp+3A0h] [rbp+2A0h]
  unsigned int *v1795; // [rsp+3A8h] [rbp+2A8h] BYREF
  size_t v1796; // [rsp+3B0h] [rbp+2B0h] BYREF
  unsigned int *v1797; // [rsp+3B8h] [rbp+2B8h] BYREF
  unsigned int *v1798; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int *v1799; // [rsp+3C8h] [rbp+2C8h] BYREF
  LPVOID v1800; // [rsp+3D0h] [rbp+2D0h]
  AtmosCheck *v1801; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 v1802; // [rsp+3E0h] [rbp+2E0h]
  void *v1803; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 *v1804; // [rsp+3F0h] [rbp+2F0h]
  __int64 v1805; // [rsp+3F8h] [rbp+2F8h]
  void *v1806; // [rsp+400h] [rbp+300h]
  __int64 v1807; // [rsp+408h] [rbp+308h]
  void *v1808; // [rsp+410h] [rbp+310h]
  SIZE_T v1809; // [rsp+418h] [rbp+318h]
  unsigned __int16 *v1810; // [rsp+420h] [rbp+320h] BYREF
  __int64 v1811; // [rsp+428h] [rbp+328h]
  LPVOID lpMem; // [rsp+430h] [rbp+330h]
  __int64 v1813; // [rsp+438h] [rbp+338h]
  wchar_t *String1; // [rsp+440h] [rbp+340h] BYREF
  void *v1815; // [rsp+448h] [rbp+348h] BYREF
  unsigned int *v1816; // [rsp+450h] [rbp+350h]
  _DWORD *v1817; // [rsp+458h] [rbp+358h]
  unsigned int *v1818; // [rsp+460h] [rbp+360h] BYREF
  _DWORD *v1819; // [rsp+468h] [rbp+368h] BYREF
  HMODULE phModule; // [rsp+470h] [rbp+370h] BYREF
  void *v1821; // [rsp+478h] [rbp+378h] BYREF
  LPVOID v1822; // [rsp+480h] [rbp+380h]
  unsigned __int64 v1823; // [rsp+488h] [rbp+388h]
  void *v1824; // [rsp+490h] [rbp+390h] BYREF
  unsigned __int64 v1825; // [rsp+498h] [rbp+398h] BYREF
  unsigned __int64 v1826; // [rsp+4A0h] [rbp+3A0h] BYREF
  unsigned int *v1827; // [rsp+4A8h] [rbp+3A8h] BYREF
  _DWORD *v1828; // [rsp+4B0h] [rbp+3B0h] BYREF
  _DWORD *v1829; // [rsp+4B8h] [rbp+3B8h]
  int *v1830; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v1831; // [rsp+4C8h] [rbp+3C8h]
  __int64 v1832; // [rsp+4D0h] [rbp+3D0h]
  int *v1833; // [rsp+4D8h] [rbp+3D8h] BYREF
  int *v1834; // [rsp+4E0h] [rbp+3E0h]
  _QWORD v1835[2]; // [rsp+4E8h] [rbp+3E8h] BYREF
  int *v1836; // [rsp+4F8h] [rbp+3F8h] BYREF
  int *v1837; // [rsp+500h] [rbp+400h]
  unsigned int *v1838; // [rsp+508h] [rbp+408h] BYREF
  unsigned int *v1839; // [rsp+510h] [rbp+410h]
  __int64 v1840; // [rsp+518h] [rbp+418h] BYREF
  LPVOID v1841; // [rsp+520h] [rbp+420h]
  __int64 v1842; // [rsp+528h] [rbp+428h]
  void **v1843; // [rsp+530h] [rbp+430h] BYREF
  LPVOID v1844; // [rsp+538h] [rbp+438h]
  __int64 v1845; // [rsp+540h] [rbp+440h]
  _DWORD *v1846; // [rsp+548h] [rbp+448h] BYREF
  void *v1847; // [rsp+550h] [rbp+450h] BYREF
  unsigned __int64 v1848; // [rsp+558h] [rbp+458h]
  unsigned __int16 *v1849; // [rsp+560h] [rbp+460h] BYREF
  __int64 v1850; // [rsp+568h] [rbp+468h] BYREF
  wchar_t *v1851; // [rsp+570h] [rbp+470h] BYREF
  __int64 v1852; // [rsp+578h] [rbp+478h]
  __int64 v1853; // [rsp+580h] [rbp+480h] BYREF
  __int64 v1854; // [rsp+588h] [rbp+488h] BYREF
  __int64 v1855; // [rsp+590h] [rbp+490h] BYREF
  __int64 v1856; // [rsp+598h] [rbp+498h] BYREF
  wchar_t *v1857; // [rsp+5A0h] [rbp+4A0h] BYREF
  wchar_t *v1858; // [rsp+5A8h] [rbp+4A8h] BYREF
  __int64 v1859; // [rsp+5B0h] [rbp+4B0h] BYREF
  LPVOID v1860; // [rsp+5B8h] [rbp+4B8h]
  __int64 v1861; // [rsp+5C0h] [rbp+4C0h]
  void *v1862; // [rsp+5C8h] [rbp+4C8h]
  size_t v1863; // [rsp+5D0h] [rbp+4D0h]
  void *v1864; // [rsp+5D8h] [rbp+4D8h]
  size_t v1865; // [rsp+5E0h] [rbp+4E0h]
  unsigned __int64 v1866; // [rsp+5E8h] [rbp+4E8h]
  _DWORD *v1867; // [rsp+5F0h] [rbp+4F0h] BYREF
  unsigned int *v1868; // [rsp+5F8h] [rbp+4F8h] BYREF
  unsigned __int64 v1869; // [rsp+600h] [rbp+500h]
  unsigned int *v1870; // [rsp+608h] [rbp+508h] BYREF
  LPVOID v1871; // [rsp+610h] [rbp+510h]
  unsigned __int64 v1872; // [rsp+618h] [rbp+518h]
  void *v1873; // [rsp+620h] [rbp+520h] BYREF
  __int64 *v1874; // [rsp+628h] [rbp+528h]
  __int64 v1875; // [rsp+630h] [rbp+530h]
  void *v1876; // [rsp+638h] [rbp+538h]
  __int64 v1877; // [rsp+640h] [rbp+540h]
  void *v1878; // [rsp+648h] [rbp+548h]
  SIZE_T v1879; // [rsp+650h] [rbp+550h]
  void *v1880; // [rsp+658h] [rbp+558h] BYREF
  unsigned int *v1881; // [rsp+660h] [rbp+560h]
  unsigned int *v1882; // [rsp+668h] [rbp+568h]
  unsigned int *v1883; // [rsp+670h] [rbp+570h] BYREF
  unsigned int *v1884; // [rsp+678h] [rbp+578h] BYREF
  HMODULE hModule; // [rsp+680h] [rbp+580h] BYREF
  void *v1886; // [rsp+688h] [rbp+588h] BYREF
  LPVOID v1887; // [rsp+690h] [rbp+590h]
  unsigned __int64 v1888; // [rsp+698h] [rbp+598h]
  void *v1889; // [rsp+6A0h] [rbp+5A0h] BYREF
  unsigned __int64 v1890; // [rsp+6A8h] [rbp+5A8h] BYREF
  unsigned __int64 v1891; // [rsp+6B0h] [rbp+5B0h] BYREF
  unsigned __int64 v1892; // [rsp+6B8h] [rbp+5B8h] BYREF
  _QWORD v1893[2]; // [rsp+6C0h] [rbp+5C0h] BYREF
  _QWORD v1894[4]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _DWORD *v1895; // [rsp+6F0h] [rbp+5F0h] BYREF
  __int128 v1896; // [rsp+6F8h] [rbp+5F8h]
  void *v1897; // [rsp+710h] [rbp+610h] BYREF
  unsigned __int64 *v1898; // [rsp+720h] [rbp+620h] BYREF
  unsigned int v1899; // [rsp+728h] [rbp+628h]
  _DWORD v1900[3]; // [rsp+72Ch] [rbp+62Ch] BYREF
  unsigned int v1901; // [rsp+738h] [rbp+638h]
  _DWORD v1902[3]; // [rsp+73Ch] [rbp+63Ch] BYREF
  unsigned __int64 v1903; // [rsp+748h] [rbp+648h]
  LPVOID v1904; // [rsp+750h] [rbp+650h]
  __int64 v1905; // [rsp+758h] [rbp+658h]
  unsigned __int64 v1906; // [rsp+760h] [rbp+660h]
  void *v1907; // [rsp+770h] [rbp+670h] BYREF
  void *v1908; // [rsp+780h] [rbp+680h] BYREF
  unsigned __int64 *v1909; // [rsp+790h] [rbp+690h] BYREF
  void *v1910; // [rsp+7A0h] [rbp+6A0h] BYREF
  int *v1911; // [rsp+7B0h] [rbp+6B0h] BYREF
  _DWORD *v1912; // [rsp+7C0h] [rbp+6C0h] BYREF
  unsigned __int64 v1913; // [rsp+7C8h] [rbp+6C8h]
  LPVOID v1914; // [rsp+7D0h] [rbp+6D0h]
  __int64 v1915; // [rsp+7D8h] [rbp+6D8h]
  __int64 v1916; // [rsp+7E0h] [rbp+6E0h]
  _QWORD v1917[3]; // [rsp+7E8h] [rbp+6E8h] BYREF
  int *v1918; // [rsp+800h] [rbp+700h] BYREF
  void *v1919; // [rsp+810h] [rbp+710h] BYREF
  __int128 v1920; // [rsp+818h] [rbp+718h]
  void *v1921; // [rsp+828h] [rbp+728h]
  const unsigned __int16 *v1922; // [rsp+830h] [rbp+730h]
  SIZE_T v1923; // [rsp+838h] [rbp+738h]
  _QWORD v1924[2]; // [rsp+840h] [rbp+740h] BYREF
  int v1925; // [rsp+850h] [rbp+750h]
  unsigned int v1926; // [rsp+854h] [rbp+754h]
  int v1927; // [rsp+858h] [rbp+758h]
  _QWORD v1928[2]; // [rsp+860h] [rbp+760h] BYREF
  int v1929; // [rsp+870h] [rbp+770h]
  unsigned int v1930; // [rsp+874h] [rbp+774h]
  int v1931; // [rsp+878h] [rbp+778h]
  _BYTE v1932[24]; // [rsp+880h] [rbp+780h] BYREF
  char *v1933; // [rsp+898h] [rbp+798h]
  _BYTE v1934[4]; // [rsp+8F0h] [rbp+7F0h] BYREF
  int v1935; // [rsp+8F4h] [rbp+7F4h]
  int v1936; // [rsp+8F8h] [rbp+7F8h]
  __int16 v1937; // [rsp+902h] [rbp+802h]
  __int64 v1938; // [rsp+908h] [rbp+808h]
  _BYTE v1939[4]; // [rsp+960h] [rbp+860h] BYREF
  int v1940; // [rsp+964h] [rbp+864h]
  int v1941; // [rsp+968h] [rbp+868h]
  SIZE_T v1942; // [rsp+978h] [rbp+878h]
  _BYTE v1943[24]; // [rsp+9D0h] [rbp+8D0h] BYREF
  char *v1944; // [rsp+9E8h] [rbp+8E8h]
  _BYTE v1945[4]; // [rsp+A40h] [rbp+940h] BYREF
  int v1946; // [rsp+A44h] [rbp+944h]
  int v1947; // [rsp+A48h] [rbp+948h]
  SIZE_T v1948; // [rsp+A58h] [rbp+958h]
  _BYTE v1949[24]; // [rsp+AB0h] [rbp+9B0h] BYREF
  char *v1950; // [rsp+AC8h] [rbp+9C8h]
  _BYTE v1951[4]; // [rsp+B20h] [rbp+A20h] BYREF
  int v1952; // [rsp+B24h] [rbp+A24h]
  int v1953; // [rsp+B28h] [rbp+A28h]
  SIZE_T v1954; // [rsp+B38h] [rbp+A38h]
  _BYTE v1955[4]; // [rsp+B90h] [rbp+A90h] BYREF
  int v1956; // [rsp+B94h] [rbp+A94h]
  int v1957; // [rsp+B98h] [rbp+A98h]
  char *v1958; // [rsp+BA8h] [rbp+AA8h]
  _BYTE v1959[24]; // [rsp+C00h] [rbp+B00h] BYREF
  unsigned __int16 *v1960; // [rsp+C18h] [rbp+B18h]
  int v1961; // [rsp+C70h] [rbp+B70h] BYREF
  int v1962; // [rsp+C74h] [rbp+B74h]
  void *v1963; // [rsp+C78h] [rbp+B78h]
  void *v1964; // [rsp+C80h] [rbp+B80h]
  void *v1965; // [rsp+C88h] [rbp+B88h]
  const WCHAR *v1966; // [rsp+C90h] [rbp+B90h]
  const WCHAR *v1967; // [rsp+C98h] [rbp+B98h]
  __int64 v1968; // [rsp+CA0h] [rbp+BA0h]
  int v1969; // [rsp+CA8h] [rbp+BA8h]
  __int128 v1970; // [rsp+CACh] [rbp+BACh] BYREF
  __int128 v1971; // [rsp+CBCh] [rbp+BBCh] BYREF
  unsigned int v1972; // [rsp+CCCh] [rbp+BCCh] BYREF
  unsigned int v1973; // [rsp+CD0h] [rbp+BD0h]
  unsigned int v1974; // [rsp+CD4h] [rbp+BD4h]
  unsigned int v1975; // [rsp+CD8h] [rbp+BD8h]
  unsigned __int64 v1976; // [rsp+CE0h] [rbp+BE0h]
  __int64 v1977; // [rsp+CE8h] [rbp+BE8h]
  unsigned __int64 v1978; // [rsp+CF0h] [rbp+BF0h]
  __int64 v1979; // [rsp+CF8h] [rbp+BF8h]
  __int64 v1980; // [rsp+D00h] [rbp+C00h] BYREF
  __int64 v1981; // [rsp+D08h] [rbp+C08h]
  _DWORD v1982[4]; // [rsp+D10h] [rbp+C10h] BYREF
  __int64 v1983; // [rsp+D20h] [rbp+C20h] BYREF
  __int64 v1984; // [rsp+D28h] [rbp+C28h]
  __int64 v1985; // [rsp+D30h] [rbp+C30h] BYREF
  __int64 v1986; // [rsp+D38h] [rbp+C38h]
  __int64 v1987; // [rsp+D40h] [rbp+C40h] BYREF
  __int64 v1988; // [rsp+D48h] [rbp+C48h]
  char v1989; // [rsp+D50h] [rbp+C50h] BYREF
  unsigned int v1990; // [rsp+D5Ch] [rbp+C5Ch]
  _DWORD v1991[5]; // [rsp+D70h] [rbp+C70h] BYREF
  char v1992; // [rsp+D84h] [rbp+C84h] BYREF
  _DWORD v1993[3]; // [rsp+D8Ch] [rbp+C8Ch] BYREF
  _DWORD v1994[5]; // [rsp+D98h] [rbp+C98h] BYREF
  int v1995; // [rsp+DACh] [rbp+CACh] BYREF
  _DWORD v1996[3]; // [rsp+DB4h] [rbp+CB4h] BYREF
  _DWORD v1997[3]; // [rsp+DC0h] [rbp+CC0h] BYREF
  __int16 v1998; // [rsp+DCCh] [rbp+CCCh]
  __int16 v1999; // [rsp+DCEh] [rbp+CCEh]
  __int128 v2000; // [rsp+DD0h] [rbp+CD0h]
  __int64 v2001; // [rsp+DE0h] [rbp+CE0h]
  int v2002; // [rsp+DE8h] [rbp+CE8h]
  _DWORD v2003[3]; // [rsp+DF0h] [rbp+CF0h] BYREF
  __int16 v2004; // [rsp+DFCh] [rbp+CFCh]
  __int16 v2005; // [rsp+DFEh] [rbp+CFEh]
  __int128 v2006; // [rsp+E00h] [rbp+D00h]
  __int64 v2007; // [rsp+E10h] [rbp+D10h]
  int v2008; // [rsp+E18h] [rbp+D18h]
  _DWORD v2009[3]; // [rsp+E20h] [rbp+D20h] BYREF
  __int16 v2010; // [rsp+E2Ch] [rbp+D2Ch]
  __int16 v2011; // [rsp+E2Eh] [rbp+D2Eh]
  __int128 v2012; // [rsp+E30h] [rbp+D30h]
  __int64 v2013; // [rsp+E40h] [rbp+D40h]
  int v2014; // [rsp+E48h] [rbp+D48h]
  _DWORD v2015[3]; // [rsp+E50h] [rbp+D50h] BYREF
  __int16 v2016; // [rsp+E5Ch] [rbp+D5Ch]
  __int16 v2017; // [rsp+E5Eh] [rbp+D5Eh]
  __int128 v2018; // [rsp+E60h] [rbp+D60h]
  __int64 v2019; // [rsp+E70h] [rbp+D70h]
  int v2020; // [rsp+E78h] [rbp+D78h]
  _DWORD v2021[3]; // [rsp+E80h] [rbp+D80h] BYREF
  __int16 v2022; // [rsp+E8Ch] [rbp+D8Ch]
  __int16 v2023; // [rsp+E8Eh] [rbp+D8Eh]
  __int128 v2024; // [rsp+E90h] [rbp+D90h]
  __int64 v2025; // [rsp+EA0h] [rbp+DA0h]
  int v2026; // [rsp+EA8h] [rbp+DA8h]
  _DWORD v2027[6]; // [rsp+EB0h] [rbp+DB0h] BYREF
  char v2028; // [rsp+ECAh] [rbp+DCAh]
  unsigned __int16 v2029; // [rsp+ECCh] [rbp+DCCh] BYREF
  _DWORD v2030[6]; // [rsp+F10h] [rbp+E10h] BYREF
  char v2031; // [rsp+F2Ah] [rbp+E2Ah]
  unsigned __int16 v2032; // [rsp+F2Ch] [rbp+E2Ch] BYREF
  _DWORD v2033[6]; // [rsp+F70h] [rbp+E70h] BYREF
  char v2034; // [rsp+F8Ah] [rbp+E8Ah]
  unsigned __int16 v2035; // [rsp+F8Ch] [rbp+E8Ch] BYREF
  _BYTE v2036[68]; // [rsp+FD0h] [rbp+ED0h] BYREF
  __int16 v2037; // [rsp+1014h] [rbp+F14h]
  unsigned __int16 v2038; // [rsp+1076h] [rbp+F76h]
  __int64 v2039; // [rsp+107Ch] [rbp+F7Ch]
  _QWORD v2040[6]; // [rsp+10B0h] [rbp+FB0h] BYREF
  int v2041; // [rsp+10E0h] [rbp+FE0h] BYREF
  _DWORD v2042[14]; // [rsp+10E8h] [rbp+FE8h] BYREF
  _QWORD v2043[20]; // [rsp+1120h] [rbp+1020h]
  int v2044; // [rsp+11C0h] [rbp+10C0h] BYREF
  __int16 v2045; // [rsp+11C4h] [rbp+10C4h]
  _BYTE v2046[176]; // [rsp+11D0h] [rbp+10D0h] BYREF
  WCHAR Filename; // [rsp+1280h] [rbp+1180h] BYREF

  v1 = this;
  v2 = (_DWORD *)((char *)this + 192);
  v3 = *((_DWORD *)this + 48);
  v1801 = this;
  v1663 = (char *)this + 192;
  if ( !v3 )
  {
    v1810 = 0LL;
    if ( this == (AtmosCheck *)-192LL )
    {
LABEL_9:
      SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1810);
      v3 = *((_DWORD *)v1 + 48);
      goto LABEL_2;
    }
    v1726 = 0;
    v1727 = 0;
    v1662 = 0LL;
    v1728 = 0;
    while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
      ;
    v6 = dword_1801B7260;
    v1659 = -1;
    v1811 = 4LL;
    if ( dword_1801B7260 )
      goto LABEL_56;
    v1650 = 0;
    v1598 = 0;
    lpMem = 0LL;
    v1813 = 0LL;
    v7 = operator new(0x338uLL);
    v8 = v7;
    if ( v7 )
    {
      v9 = -1;
      v1729 = 0;
      v10 = 0;
      v1731 = 0;
      v11 = 0;
      v12 = v7 + 7;
      v13 = 0;
      v14 = (char *)&unk_180165D32;
      v15 = 103LL;
      do
      {
        v16 = (unsigned __int8)*(v14 - 1);
        v17 = (unsigned __int8)*(v14 - 2);
        v18 = (unsigned __int8)v14[2];
        v14 += 8;
        v19 = (unsigned __int8)*(v14 - 7) | (((unsigned __int8)*(v14 - 8) | ((v16 | (v17 << 8)) << 8)) << 8);
        v20 = v19 ^ v13;
        v21 = (unsigned __int8)*(v14 - 3) | (((unsigned __int8)*(v14 - 4) | (((unsigned __int8)*(v14 - 5) | (v18 << 8)) << 8)) << 8);
        v22 = v20 ^ v21 ^ v10 ^ 0xAC987321;
        v23 = (__ROL4__(v22, 10) + 4991 * __ROL4__(v22 + 1419157410, 5)) ^ v20;
        v24 = (43881 * __ROR4__(v23 + 133239679, 9) - __ROL4__(v23, 2)) ^ v22;
        v25 = (24670 * v24 - (v24 >> 13) - 123127970) ^ v23;
        v26 = (2033 * __ROL4__(v25 ^ 0xAB69, 6) - __ROL4__(v25, 2)) ^ v24;
        v27 = (133239679 - (v26 ^ 0xAB69605E)) ^ v25;
        v28 = (43881 * (v27 ^ 0x137F)) ^ __ROR4__(v27, 6) ^ v26;
        v29 = (__ROL4__(v28, 2) + 24670 * __ROR4__(v28 + 133239679, 15)) ^ v27;
        v30 = (2033 * __ROR4__(v29 + 1419157410, 14) - __ROL4__(v29, 8)) ^ v28;
        v31 = __ROR4__(v30, 10) ^ (4991 * __ROR4__(v30 ^ 0xAB69605E, 12)) ^ v29;
        v32 = v30 ^ (v31 >> 10) ^ (43881 * (v31 ^ 0x7F1));
        v33 = (2033 * (__ROR4__(~v32, 5) + 24670)) ^ v31;
        v34 = v32 ^ (v33 - 2033) ^ 0xAB69605E;
        v35 = ((v34 >> 2) + 4991 * __ROL4__(v32 ^ (v33 - 2033) ^ 0xAB6967AF, 2)) ^ v33;
        v36 = (__ROL4__(v35, 7) + 43881 * __ROR4__(v35 - 133239679, 6)) ^ v34;
        v37 = (24670 * (v36 ^ 0x137F) + __ROR4__(v36, 9)) ^ v35;
        v38 = (__ROL4__(v37, 7) + 2033 * __ROL4__(v37 ^ 0xAB69, 5)) ^ v36;
        v39 = v37 ^ v38 ^ 0xAC987321;
        v40 = (4991 * __ROR4__(v39, 3) - 219010071) ^ v38;
        v41 = (24670 * __ROR4__(v40 - 133239679, 1) - __ROR4__(v40, 6)) ^ v39;
        v42 = (__ROL4__(v41, 14) + 2033 * __ROL4__(v41 - 1419157410, 3)) ^ v40;
        v43 = (4991 * __ROL4__(v42 - 1419157410, 15) - __ROR4__(v42, 14)) ^ v41;
        v12 += 8;
        v44 = (v43 >> 3) ^ (43881 * (v43 ^ 0x605E)) ^ v42;
        v1729 = v9 ^ v44;
        v9 = v21;
        v45 = v11 ^ __ROL4__(v44, 2) ^ (24670 * __ROL4__(v44 ^ 0x7F1137F, 4));
        v11 = v19;
        v1731 = v45 ^ v43;
        *(v12 - 12) = v45 ^ v43;
        v1731 = __ROR4__(v1731, 8);
        *(v12 - 8) = v1729;
        v1729 = __ROR4__(v1729, 8);
        *(v12 - 13) = v1731;
        v1731 = __ROR4__(v1731, 8);
        *(v12 - 9) = v1729;
        v1729 = __ROR4__(v1729, 8);
        *(v12 - 14) = v1731;
        v1731 = __ROR4__(v1731, 8);
        *(v12 - 10) = v1729;
        v1729 = __ROR4__(v1729, 8);
        *(v12 - 15) = v1731;
        *(v12 - 11) = v1729;
        v13 = __ROR4__(v1731, 8);
        v10 = __ROR4__(v1729, 8);
        v1731 = v13;
        v1729 = v10;
        --v15;
      }
      while ( v15 );
      v2 = v1663;
      v46 = 0LL;
      v1 = v1801;
      v47 = 0;
      v48 = 0LL;
      v49 = 0LL;
      do
      {
        v48 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v8[v46]), v48);
        v50 = _mm_loadu_si128((const __m128i *)&v8[v46 + 16]);
        v46 += 32LL;
        v51 = _mm_xor_si128(v50, v49);
        v49 = v51;
      }
      while ( v46 < 0x320 );
      v52 = _mm_xor_si128(v51, v48);
      v53 = _mm_xor_si128(v52, _mm_srli_si128(v52, 8));
      v54 = _mm_xor_si128(v53, _mm_srli_si128(v53, 4));
      v55 = _mm_xor_si128(v54, _mm_srli_si128(v54, 2));
      for ( i = _mm_cvtsi128_si32(_mm_xor_si128(v55, _mm_srli_si128(v55, 1))); v46 < 0x338; ++v46 )
        i ^= v8[v46];
      if ( i == 64LL )
      {
        lpMem = v8;
        v57 = (HMODULE *)&unk_1801B77C0;
        v1813 = 824LL;
        v8[823] = 0;
        memset_0(&unk_1801B77C0, 0, 0x60uLL);
        if ( *v8 )
        {
          while ( 1 )
          {
            v58 = (const WCHAR *)v8;
            v59 = -1LL;
            do
              v60 = *(_WORD *)&v8[2 * v59++ + 2] == 0;
            while ( !v60 );
            v61 = &v8[2 * v59];
            v62 = (char *)&unk_1801B77C0 + 24 * v1598;
            if ( !GetModuleHandleExW(0, v58, (HMODULE *)v62) )
              break;
            v47 = 0;
            if ( **(_WORD **)v62 == 23117 )
            {
              v63 = *(int *)(*(_QWORD *)v62 + 60LL);
              if ( (unsigned int)v63 < 0x10000000 )
              {
                v64 = *(_QWORD *)v62 + v63;
                if ( v64 >= *(_QWORD *)v62 )
                {
                  if ( *(_DWORD *)v64 == 17744 )
                  {
                    if ( ((*(_WORD *)(v64 + 24) - 267) & 0xFEFF) != 0 )
                    {
                      v47 = -1073741811;
                    }
                    else
                    {
                      *(_QWORD *)(v62 + 12) = *(_QWORD *)(v64 + 136);
                      *((_DWORD *)v62 + 2) = *(_DWORD *)(v64 + 80);
                    }
                  }
                  else
                  {
                    v47 = -1073741701;
                  }
                }
                else
                {
                  v47 = -1073741701;
                }
              }
              else
              {
                v47 = -1073741701;
              }
            }
            else
            {
              v47 = -1073741701;
            }
            v65 = *(_DWORD *)(v61 + 2);
            v66 = 0;
            v8 = v61 + 6;
            for ( j = v65; v66 < j; ++v66 )
            {
              v67 = v8;
              v68 = -1LL;
              do
                ++v68;
              while ( v8[v68] );
              v8 += v68 + 1;
              if ( v47 >= 0 )
              {
                ProcAddress = GetProcAddress(*(HMODULE *)v62, v67);
                if ( !ProcAddress )
                  goto LABEL_43;
                off_1801B5000[v1650] = ProcAddress;
              }
              ++v1650;
            }
            ++v1598;
            if ( !*v8 )
              goto LABEL_43;
          }
          v47 = -1073741702;
LABEL_43:
          v57 = (HMODULE *)&unk_1801B77C0;
        }
        goto LABEL_44;
      }
      operator delete(v8);
    }
    v47 = -1073741702;
    v57 = (HMODULE *)&unk_1801B77C0;
LABEL_44:
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    if ( v47 < 0 )
    {
      v71 = 4LL;
      do
      {
        if ( *v57 )
          FreeLibrary(*v57);
        v57 += 3;
        --v71;
      }
      while ( v71 );
      memset_0(&unk_1801B77C0, 0, 0x60uLL);
      qword_1801B50D0 = 0LL;
      off_1801B5000[0] = sub_180140EE0;
      off_1801B5008[0] = sub_180140EE0;
      off_1801B5010[0] = sub_180140EE0;
      off_1801B5018[0] = sub_180140EE0;
      off_1801B5020[0] = sub_180140EE0;
      off_1801B5028 = sub_180140EE0;
      off_1801B5030[0] = sub_180140EE0;
      off_1801B5038 = sub_180140EE0;
      off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5050[0] = sub_180140EE0;
      off_1801B5058[0] = sub_180140EE0;
      off_1801B5060[0] = sub_180140EE0;
      off_1801B5068[0] = sub_180140EE0;
      off_1801B5070[0] = sub_180140EE0;
      off_1801B5078 = sub_180140EE0;
      off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5088[0] = sub_180140EE0;
      off_1801B5090[0] = sub_180140EE0;
      off_1801B5098[0] = sub_180140EE0;
      off_1801B50A0[0] = sub_180140EE0;
      off_1801B50A8[0] = sub_180140EE0;
      off_1801B50B0[0] = sub_180140EE0;
      off_1801B50B8[0] = sub_18004A5B0;
      off_1801B50C0[0] = sub_180140EE0;
      off_1801B50C8 = sub_180140EE0;
      off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B50E0[0] = sub_180140EE0;
      off_1801B50E8[0] = sub_180140EE0;
      off_1801B50F0[0] = sub_180140EE0;
      off_1801B50F8[0] = sub_180140EE0;
      off_1801B5100 = sub_180140EE0;
      off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5110[0] = sub_180140EE0;
      off_1801B5118[0] = sub_180140EE0;
      off_1801B5120[0] = sub_180140EE0;
      off_1801B5128[0] = sub_180140EE0;
      off_1801B5130[0] = sub_180140EE0;
      off_1801B5138 = sub_180140EE0;
      off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
      off_1801B5160[0] = sub_180140EE0;
      off_1801B5168 = sub_180140EE0;
LABEL_57:
      v72 = 0;
      _InterlockedExchange(&dword_1801B78A0, 0);
      v73 = 0;
      String1 = 0LL;
      v1851 = 0LL;
      if ( NtCurrentPeb()->SessionId )
      {
        v74 = off_1801B5110[0]();
        if ( !v74 )
        {
          LastError = GetLastError();
          v73 = LastError;
          if ( LastError <= 0 )
            goto LABEL_61;
          goto LABEL_60;
        }
        v1857 = 0LL;
        v76 = 0LL;
        for ( k = 0LL; ; v1857 = k )
        {
          v78 = 0LL;
          if ( k )
            v78 = k;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1801B5130[0])(
                 v74,
                 2LL,
                 v78,
                 v76,
                 &v1750) )
          {
            String1 = k;
            goto LABEL_78;
          }
          v79 = GetLastError();
          if ( v79 != 122 )
            break;
          if ( k )
            goto LABEL_75;
          k = (wchar_t *)operator new(v1750);
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1857);
          if ( !k )
          {
            v73 = -2147024882;
LABEL_78:
            v1857 = 0LL;
            goto LABEL_79;
          }
          v76 = v1750;
        }
        if ( !v79 )
        {
LABEL_75:
          v73 = -2147467259;
          goto LABEL_79;
        }
        if ( v79 > 0 )
          v73 = (unsigned __int16)v79 | 0x80070000;
        else
          v73 = v79;
LABEL_79:
        SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1857);
        if ( v73 < 0 )
          goto LABEL_108;
        CurrentThreadId = GetCurrentThreadId();
        v81 = ((__int64 (__fastcall *)(_QWORD))off_1801B5128[0])(CurrentThreadId);
        if ( !v81 )
          goto LABEL_89;
        v1858 = 0LL;
        v73 = 0;
        v82 = 0LL;
        for ( m = 0LL; ; v1858 = m )
        {
          v84 = 0LL;
          if ( m )
            v84 = m;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1801B5130[0])(
                 v81,
                 2LL,
                 v84,
                 v82,
                 &v1773) )
          {
            v1851 = m;
            goto LABEL_98;
          }
          v85 = GetLastError();
          if ( v85 != 122 )
            break;
          if ( m )
            goto LABEL_95;
          m = (wchar_t *)operator new(v1773);
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1858);
          if ( !m )
          {
            v73 = -2147024882;
LABEL_98:
            v1858 = 0LL;
            goto LABEL_99;
          }
          v82 = v1773;
        }
        if ( !v85 )
        {
LABEL_95:
          v73 = -2147467259;
          goto LABEL_99;
        }
        v73 = v85 > 0 ? (unsigned __int16)v85 | 0x80070000 : v85;
LABEL_99:
        SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1858);
        if ( v73 < 0 )
        {
LABEL_108:
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1851);
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
          v87 = v1728;
          if ( v73 < 0 )
            v87 = 0;
          v1728 = v87;
          v1727 = 0;
          v88 = LocalAlloc(0x40u, 4uLL);
          SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1662, v88);
          v1615 = (unsigned __int16 *)v1662;
          if ( !v1662 )
          {
            v89 = -2147024882;
            v90 = 4LL;
LABEL_1969:
            v1395 = v1660;
            goto LABEL_1970;
          }
          v1439 = 0LL;
          v1903 = 0LL;
          v1904 = 0LL;
          Src = &unk_1801B6760;
          v1524 = 0LL;
          *(_QWORD *)&v1902[1] = 0LL;
          v1774 = 0;
          v1775 = 0;
          Size = 160LL;
          v91 = GetProcessHeap();
          v92 = HeapAlloc(v91, 8u, 0xA0uLL);
          v1571 = v92;
          v93 = v92;
          if ( !v92 )
          {
            v89 = -1073741801;
LABEL_745:
            v1599 = v89;
            goto LABEL_746;
          }
          memcpy_0(v92, Src, Size);
          v1559 = Size;
          v1439 = v93;
          v1788 = &unk_1801B66A0;
          v1789 = 8LL;
          v94 = GetProcessHeap();
          v95 = HeapAlloc(v94, 8u, 8uLL);
          v1601 = v95;
          v96 = v95;
          if ( !v95 )
          {
            v89 = -1073741801;
            goto LABEL_745;
          }
          memcpy_0(v95, v1788, v1789);
          v1636 = v1789;
          v1524 = v96;
          v1790 = __rdtsc();
          dwBytes = 0;
          v97 = RtlUIntAdd(4LL, 4LL, &dwBytes_4);
          v98 = v1778;
          v89 = v97;
          v1599 = v97;
          if ( v97 >= 0 )
            v98 = dwBytes_4;
          v1778 = v98;
          if ( v97 < 0 )
            goto LABEL_747;
          v99 = RtlUIntAdd(0LL, v98, &dwBytes);
          v89 = v99 | 0x10000000;
          v1599 = v99 | 0x10000000;
          if ( v99 < 0 )
            goto LABEL_747;
          v100 = RtlUIntAdd((unsigned int)v90, v1559, &v1779);
          v1599 = v100;
          v89 = v100;
          if ( v100 >= 0 )
            v98 = v1779;
          v1778 = v98;
          if ( v100 < 0 )
            goto LABEL_747;
          v101 = RtlUIntAdd(dwBytes, v98, &dwBytes);
          v89 = v101 | 0x10000000;
          v1599 = v101 | 0x10000000;
          if ( v101 < 0 )
            goto LABEL_747;
          v103 = RtlUIntAdd((unsigned int)v90, v102, &v1780);
          v1599 = v103;
          v89 = v103;
          if ( v103 >= 0 )
            v98 = v1780;
          v1778 = v98;
          if ( v103 < 0 )
            goto LABEL_747;
          v104 = RtlUIntAdd(dwBytes, v98, &dwBytes);
          v89 = v104 | 0x10000000;
          v1599 = v104 | 0x10000000;
          if ( v104 < 0 )
            goto LABEL_747;
          v105 = RtlUIntAdd((unsigned int)v90, (unsigned int)(v90 + 4), &v1781);
          v1599 = v105;
          v89 = v105;
          if ( v105 >= 0 )
            v98 = v1781;
          v1778 = v98;
          if ( v105 < 0 )
            goto LABEL_747;
          v106 = RtlUIntAdd(dwBytes, v98, &dwBytes);
          v89 = v106 | 0x10000000;
          v1599 = v106 | 0x10000000;
          if ( v106 < 0 )
            goto LABEL_747;
          if ( StringCchLengthW(v108, v107, &pcchLength) < 0 )
          {
            v89 = -1073741762;
            v1599 = -1073741762;
            goto LABEL_747;
          }
          v109 = RtlUIntAdd((unsigned int)v90, (unsigned int)(2 * ++pcchLength), &v1710);
          v1599 = v109;
          v89 = v109;
          if ( v109 >= 0 )
            v98 = v1710;
          v1778 = v98;
          if ( v109 < 0 )
            goto LABEL_747;
          v110 = RtlUIntAdd(dwBytes, v98, &dwBytes);
          v89 = v110 | 0x10000000;
          v1599 = v110 | 0x10000000;
          if ( v110 < 0 )
            goto LABEL_747;
          v111 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1782);
          v1599 = v111;
          v89 = v111;
          if ( v111 >= 0 )
            v98 = v1782;
          v1778 = v98;
          if ( v111 < 0 )
            goto LABEL_747;
          v112 = RtlUIntAdd(dwBytes, v98, &dwBytes);
          v89 = v112 | 0x10000000;
          v1599 = v112 | 0x10000000;
          if ( v112 < 0 )
            goto LABEL_747;
          v113 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1784);
          v1599 = v113;
          v89 = v113;
          if ( v113 >= 0 )
            v98 = v1784;
          v1778 = v98;
          if ( v113 < 0 )
            goto LABEL_747;
          v114 = RtlUIntAdd(dwBytes, v98, &dwBytes);
          v89 = v114 | 0x10000000;
          v1599 = v114 | 0x10000000;
          if ( v114 < 0 )
            goto LABEL_747;
          v1902[0] = dwBytes;
          v115 = dwBytes;
          v116 = GetProcessHeap();
          v117 = HeapAlloc(v116, 8u, v115);
          v90 = 4LL;
          if ( !v117 )
          {
            v89 = -1073741801;
            v1599 = -1073741801;
            goto LABEL_747;
          }
          *(_QWORD *)&v1902[1] = v117;
          v1901 = 0;
          v1664 = 0;
          v89 = RtlULongLongAdd(v117, 4LL, &v1895);
          v1599 = v89;
          if ( v89 < 0 )
            goto LABEL_747;
          if ( v118 + 2 > (_DWORD *)((char *)v118 + v1902[0]) )
          {
            v89 = -1073741789;
            v1599 = -1073741789;
            goto LABEL_747;
          }
          v119 = v1895;
          *v118 = v90;
          *v119 = v1664;
          v120 = ++v1901;
          if ( v1559 )
          {
            if ( *(_QWORD *)&v1902[1] )
            {
              v124 = *(unsigned int **)&v1902[1];
              v1792 = *(unsigned int **)&v1902[1];
              if ( v120 )
              {
                while ( 1 )
                {
                  v125 = RtlUIntAdd(4LL, *v124, &v1667);
                  v1599 = v125;
                  v89 = v125;
                  if ( v125 >= 0 )
                    v127 = v1667;
                  v1666 = v127;
                  if ( v125 < 0 )
                    break;
                  v1599 = RtlULongLongAdd(v126, v127, &v1792);
                  v89 = v1599;
                  if ( v1599 < 0 )
                    break;
                  v124 = v1792;
                  if ( v128 + 1 >= v120 )
                    goto LABEL_164;
                }
              }
              else
              {
LABEL_164:
                v1599 = RtlULongLongAdd(v124, 4LL, &v1907);
                v89 = v1599;
                if ( v1599 < 0 )
                  goto LABEL_169;
                if ( (unsigned __int64)v129 + v130 + 4 > *(_QWORD *)&v1902[1] + (unsigned __int64)v1902[0] )
                {
                  v89 = -1073741789;
                  v1599 = -1073741789;
                  goto LABEL_747;
                }
                v131 = v1907;
                *v129 = v130;
                memcpy_0(v131, v1571, v130);
                v120 = ++v1901;
              }
              v90 = 4LL;
            }
            else
            {
              v121 = RtlUIntAdd((unsigned int)v90, v1559, &v1665);
              v122 = v1666;
              v89 = v121;
              v1599 = v121;
              if ( v121 >= 0 )
                v122 = v1665;
              v1666 = v122;
              if ( v121 >= 0 )
              {
                v123 = RtlUIntAdd(v1902[0], v122, v1902);
                v120 = v1901;
                v89 = v123;
                v1599 = v123;
                if ( v123 >= 0 )
                {
                  v120 = ++v1901;
                  goto LABEL_170;
                }
              }
            }
          }
          else
          {
            v89 = -1073741811;
            v1599 = -1073741811;
          }
LABEL_169:
          if ( v89 < 0 )
            goto LABEL_747;
LABEL_170:
          if ( v1636 )
          {
            if ( *(_QWORD *)&v1902[1] )
            {
              v135 = *(unsigned int **)&v1902[1];
              v1793 = *(unsigned int **)&v1902[1];
              if ( v120 )
              {
                while ( 1 )
                {
                  v136 = RtlUIntAdd(4LL, *v135, &v1670);
                  v1599 = v136;
                  v89 = v136;
                  if ( v136 >= 0 )
                    v139 = v1670;
                  v1669 = v139;
                  if ( v136 < 0 )
                    break;
                  v1599 = RtlULongLongAdd(v138, v139, &v1793);
                  v89 = v1599;
                  if ( v1599 < 0 )
                    goto LABEL_188;
                  v135 = v1793;
                  if ( v140 + 1 >= v120 )
                    goto LABEL_184;
                }
                v90 = v137;
              }
              else
              {
LABEL_184:
                v1599 = RtlULongLongAdd(v135, 4LL, &v1908);
                v89 = v1599;
                if ( v1599 >= 0 )
                {
                  if ( (unsigned __int64)v141 + v142 + 4 > *(_QWORD *)&v1902[1] + (unsigned __int64)v1902[0] )
                  {
                    v89 = -1073741789;
                    v1599 = -1073741789;
                    goto LABEL_747;
                  }
                  v143 = v1908;
                  *v141 = v142;
                  memcpy_0(v143, v1601, v142);
                  v120 = ++v1901;
LABEL_188:
                  v90 = 4LL;
                }
              }
            }
            else
            {
              v132 = RtlUIntAdd((unsigned int)v90, v1636, &v1668);
              v133 = v1669;
              v89 = v132;
              v1599 = v132;
              if ( v132 >= 0 )
                v133 = v1668;
              v1669 = v133;
              if ( v132 >= 0 )
              {
                v134 = RtlUIntAdd(v1902[0], v133, v1902);
                v120 = v1901;
                v89 = v134;
                v1599 = v134;
                if ( v134 >= 0 )
                {
                  v120 = ++v1901;
                  goto LABEL_192;
                }
              }
            }
          }
          else
          {
            v89 = -1073741811;
            v1599 = -1073741811;
          }
          if ( v89 < 0 )
            goto LABEL_747;
LABEL_192:
          v1794 = v1790;
          if ( *(_QWORD *)&v1902[1] )
          {
            v148 = *(unsigned int **)&v1902[1];
            v1795 = *(unsigned int **)&v1902[1];
            if ( v120 )
            {
              while ( 1 )
              {
                v149 = RtlUIntAdd(4LL, *v148, &v1673);
                v1599 = v149;
                v89 = v149;
                if ( v149 >= 0 )
                  v151 = v1673;
                v1672 = v151;
                if ( v149 < 0 )
                  break;
                v1599 = RtlULongLongAdd(v150, v151, &v1795);
                v89 = v1599;
                if ( v1599 < 0 )
                {
                  v90 = 4LL;
                  goto LABEL_210;
                }
                v148 = v1795;
                if ( v152 + 1 >= v120 )
                  goto LABEL_204;
              }
              v90 = (__int64)v145;
            }
            else
            {
LABEL_204:
              v1599 = RtlULongLongAdd(v148, 4LL, &v1909);
              v89 = v1599;
              if ( v1599 >= 0 )
              {
                v145 = (const wchar_t *)(*(_QWORD *)&v1902[1] + v1902[0]);
                if ( v153 + 3 > (_DWORD *)v145 )
                {
                  v89 = -1073741789;
                  v1599 = -1073741789;
                  goto LABEL_747;
                }
                v154 = v1909;
                *v153 = 8;
                *v154 = v1794;
                v120 = ++v1901;
              }
            }
          }
          else
          {
            v144 = RtlUIntAdd((unsigned int)v90, 8LL, &v1671);
            v146 = v1672;
            v89 = v144;
            v1599 = v144;
            if ( v144 >= 0 )
              v146 = v1671;
            v1672 = v146;
            if ( v144 >= 0 )
            {
              v147 = RtlUIntAdd(v1902[0], v146, v1902);
              v120 = v1901;
              v89 = v147;
              v1599 = v147;
              if ( v147 >= 0 )
              {
                v120 = ++v1901;
                goto LABEL_211;
              }
            }
          }
LABEL_210:
          if ( v89 < 0 )
            goto LABEL_747;
LABEL_211:
          if ( StringCchLengthW(v145, v146, &v1796) < 0 )
          {
            v89 = -1073741762;
            v1599 = -1073741762;
            goto LABEL_747;
          }
          v1599 = RtlULongLongAdd(v1796, 1LL, &v1796);
          v89 = v1599;
          if ( v1599 < 0 )
            goto LABEL_235;
          if ( 2 * (_DWORD)v1796 )
          {
            if ( !*(_QWORD *)&v1902[1] )
            {
              v155 = RtlUIntAdd(4LL, (unsigned int)(2 * v1796), &v1674);
              v156 = v1675;
              v89 = v155;
              v1599 = v155;
              if ( v155 >= 0 )
                v156 = v1674;
              v1675 = v156;
              if ( v155 >= 0 )
              {
                v157 = RtlUIntAdd(v1902[0], v156, v1902);
                v120 = v1901;
                v89 = v157;
                v1599 = v157;
                if ( v157 >= 0 )
                {
                  v120 = v1901 + 1;
                  v89 = 0;
                  ++v1901;
LABEL_234:
                  v1599 = v89;
                }
              }
LABEL_235:
              if ( v89 < 0 )
                goto LABEL_747;
              v1677 = v1728;
              if ( *(_QWORD *)&v1902[1] )
              {
                v168 = *(unsigned int **)&v1902[1];
                v1798 = *(unsigned int **)&v1902[1];
                if ( v120 )
                {
                  while ( 1 )
                  {
                    v169 = RtlUIntAdd(4LL, *v168, &v1680);
                    v1599 = v169;
                    v89 = v169;
                    if ( v169 >= 0 )
                      v172 = v1680;
                    v1679 = v172;
                    if ( v169 < 0 )
                      break;
                    v1599 = RtlULongLongAdd(v171, v172, &v1798);
                    v89 = v1599;
                    if ( v1599 < 0 )
                    {
                      v90 = 4LL;
                      goto LABEL_254;
                    }
                    v168 = v1798;
                    if ( v173 + 1 >= v120 )
                      goto LABEL_248;
                  }
                  v90 = v170;
                }
                else
                {
LABEL_248:
                  v1599 = RtlULongLongAdd(v168, 4LL, &v1911);
                  v89 = v1599;
                  if ( v1599 >= 0 )
                  {
                    if ( (unsigned __int64)(v174 + 2) > *(_QWORD *)&v1902[1] + (unsigned __int64)v1902[0] )
                    {
                      v89 = -1073741789;
                      v1599 = -1073741789;
                      goto LABEL_747;
                    }
                    v175 = v1911;
                    *v174 = v90;
                    *v175 = v1677;
                    v120 = ++v1901;
                  }
                }
              }
              else
              {
                v165 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1678);
                v166 = v1679;
                v89 = v165;
                v1599 = v165;
                if ( v165 >= 0 )
                  v166 = v1678;
                v1679 = v166;
                if ( v165 >= 0 )
                {
                  v167 = RtlUIntAdd(v1902[0], v166, v1902);
                  v120 = v1901;
                  v89 = v167;
                  v1599 = v167;
                  if ( v167 >= 0 )
                  {
                    v120 = ++v1901;
                    goto LABEL_255;
                  }
                }
              }
LABEL_254:
              if ( v89 < 0 )
                goto LABEL_747;
LABEL_255:
              v1681 = v90;
              if ( *(_QWORD *)&v1902[1] )
              {
                v179 = *(unsigned int **)&v1902[1];
                v1799 = *(unsigned int **)&v1902[1];
                if ( v120 )
                {
                  while ( 1 )
                  {
                    v180 = RtlUIntAdd(4LL, *v179, &v1684);
                    v1599 = v180;
                    v89 = v180;
                    if ( v180 >= 0 )
                      v183 = v1684;
                    v1683 = v183;
                    if ( v180 < 0 )
                      break;
                    v1599 = RtlULongLongAdd(v182, v183, &v1799);
                    v89 = v1599;
                    if ( v1599 < 0 )
                    {
                      v90 = 4LL;
                      goto LABEL_273;
                    }
                    v179 = v1799;
                    if ( v184 + 1 >= v120 )
                      goto LABEL_267;
                  }
                  v90 = v181;
                }
                else
                {
LABEL_267:
                  v1599 = RtlULongLongAdd(v179, 4LL, &v1912);
                  v89 = v1599;
                  if ( v1599 >= 0 )
                  {
                    if ( (unsigned __int64)(v185 + 2) > *(_QWORD *)&v1902[1] + (unsigned __int64)v1902[0] )
                    {
                      v89 = -1073741789;
                      v1599 = -1073741789;
                      goto LABEL_747;
                    }
                    v186 = v1912;
                    *v185 = v90;
                    *v186 = v1681;
                    v120 = ++v1901;
                  }
                }
              }
              else
              {
                v176 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1682);
                v177 = v1683;
                v89 = v176;
                v1599 = v176;
                if ( v176 >= 0 )
                  v177 = v1682;
                v1683 = v177;
                if ( v176 >= 0 )
                {
                  v178 = RtlUIntAdd(v1902[0], v177, v1902);
                  v120 = v1901;
                  v89 = v178;
                  v1599 = v178;
                  if ( v178 >= 0 )
                  {
                    v120 = ++v1901;
                    goto LABEL_274;
                  }
                }
              }
LABEL_273:
              if ( v89 < 0 )
                goto LABEL_747;
LABEL_274:
              v187 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1685);
              v189 = v1686;
              v89 = v187;
              v1599 = v187;
              if ( v187 >= 0 )
                v189 = v1685;
              v1686 = v189;
              if ( v187 < 0 )
                goto LABEL_299;
              v1687 = v189;
              v190 = RtlUIntAdd(v188, 8LL, &v1688);
              v1599 = v190;
              v192 = v191;
              v89 = v190;
              if ( v190 >= 0 )
                v192 = v1688;
              v1686 = v192;
              if ( v190 < 0 )
                goto LABEL_299;
              v1599 = RtlUIntAdd(v191, v192, &v1687);
              v89 = v1599;
              if ( v1599 < 0 )
                goto LABEL_299;
              v193 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1689);
              v1599 = v193;
              v89 = v193;
              if ( v193 >= 0 )
                v194 = v1689;
              v1686 = v194;
              if ( v193 < 0 )
                goto LABEL_299;
              v1599 = RtlUIntAdd(v1687, v194, &v1687);
              v89 = v1599;
              if ( v1599 < 0 )
                goto LABEL_299;
              v195 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1690);
              v1599 = v195;
              v89 = v195;
              if ( v195 >= 0 )
                v196 = v1690;
              v1686 = v196;
              if ( v195 < 0 )
                goto LABEL_299;
              v1599 = RtlUIntAdd(v1687, v196, &v1687);
              v89 = v1599;
              if ( v1599 < 0 )
                goto LABEL_299;
              v197 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1691);
              v1599 = v197;
              v89 = v197;
              if ( v197 >= 0 )
                v198 = v1691;
              v1686 = v198;
              if ( v197 < 0 )
                goto LABEL_299;
              v1599 = RtlUIntAdd(v1687, v198, &v1687);
              v89 = v1599;
              if ( v1599 < 0 )
                goto LABEL_299;
              v199 = RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1661);
              v1599 = v199;
              v89 = v199;
              if ( v199 >= 0 )
                v200 = v1661;
              v1686 = v200;
              if ( v199 < 0 )
              {
LABEL_299:
                v202 = v1661;
              }
              else
              {
                v201 = RtlUIntAdd(v1687, v200, &v1687);
                v202 = v1661;
                v89 = v201;
                v1599 = v201;
                if ( v201 >= 0 )
                  v202 = v1687;
              }
              v1561 = v202;
              if ( v89 < 0 )
                goto LABEL_747;
              v1572 = 0LL;
              v1800 = 0LL;
              v1602 = 0LL;
              v1651 = 0;
              v1637 = 0LL;
              v1692 = 0LL;
              v1587 = 0LL;
              v1398 = 0LL;
              v1802 = __rdtsc();
              v1693 = 8;
              v203 = RtlUIntAdd(8LL, v1902[0], &v1693);
              if ( v203 >= 0 )
              {
                v205 = (v1693 + 7) & 0xFFFFFFF8;
                if ( v205 >= v1693 )
                {
                  v1693 = (v1693 + 7) & 0xFFFFFFF8;
                  v206 = v205;
                  v207 = GetProcessHeap();
                  v208 = HeapAlloc(v207, 8u, v206);
                  if ( v208 )
                  {
                    v1803 = v208;
                    *v208 = v1901;
                    v203 = RtlULongLongAdd(v208, 4LL, &v1803);
                    if ( v203 >= 0 )
                    {
                      v210 = v1803;
                      *(_DWORD *)v1803 = v1902[0];
                      v203 = RtlULongLongAdd(v210, v209, &v1803);
                      if ( v203 >= 0 )
                      {
                        *(_QWORD *)((char *)v208 + v1693 - 8) = v1802;
                        memcpy_0(v1803, *(const void **)&v1902[1], v1902[0]);
                        v204 = v1693;
                        v211 = (unsigned __int8 *)v208;
                        v120 = v1901;
                        v90 = 4LL;
                        v1572 = v211;
                        goto LABEL_312;
                      }
                    }
                    v212 = GetProcessHeap();
                    HeapFree(v212, 0, v208);
                  }
                  else
                  {
                    v203 = -1073741801;
                  }
                  v90 = 4LL;
                  v120 = v1901;
                  v204 = 0;
                }
                else
                {
                  v203 = -1073741675;
                }
              }
              v211 = 0LL;
LABEL_312:
              v89 = v203 | 0x10000000;
              v213 = 0LL;
              v1599 = v89;
              if ( v89 < 0 )
              {
                v329 = 0LL;
                v309 = 0LL;
LABEL_439:
                if ( v1572 )
                {
                  v330 = GetProcessHeap();
                  HeapFree(v330, 0, v1572);
                  v213 = v1587;
                  v90 = 4LL;
                  v329 = v1637;
                  v309 = v1602;
                }
                v331 = v1800;
                if ( v1800 )
                {
                  v1502 = (void *)*((_QWORD *)v1800 + 1);
                  if ( v1502 )
                  {
                    v332 = GetProcessHeap();
                    HeapFree(v332, 0, v1502);
                    v331[1] = 0LL;
                  }
                  v1503 = (void *)v331[3];
                  if ( v1503 )
                  {
                    v333 = GetProcessHeap();
                    HeapFree(v333, 0, v1503);
                    v331[3] = 0LL;
                  }
                  v1504 = (void *)v331[5];
                  if ( v1504 )
                  {
                    v334 = GetProcessHeap();
                    HeapFree(v334, 0, v1504);
                    v331[5] = 0LL;
                  }
                  v335 = GetProcessHeap();
                  HeapFree(v335, 0, v331);
                  v213 = v1587;
                  v90 = 4LL;
                  v329 = v1637;
                  v309 = v1602;
                  v1800 = 0LL;
                }
                if ( v309 )
                {
                  v336 = GetProcessHeap();
                  HeapFree(v336, 0, v1602);
                  v213 = v1587;
                  v90 = 4LL;
                  v329 = v1637;
                }
                if ( v329 )
                {
                  v337 = GetProcessHeap();
                  HeapFree(v337, 0, v1637);
                  v213 = v1587;
                  v90 = 4LL;
                }
                if ( v213 )
                {
                  v338 = (void *)v213[1];
                  if ( v338 )
                  {
                    v339 = GetProcessHeap();
                    HeapFree(v339, 0, v338);
                    v213 = v1587;
                    v1587[1] = 0LL;
                  }
                  v340 = (void *)v213[3];
                  if ( v340 )
                  {
                    v341 = GetProcessHeap();
                    HeapFree(v341, 0, v340);
                    v213 = v1587;
                    v1587[3] = 0LL;
                  }
                  v342 = (void *)v213[5];
                  if ( v342 )
                  {
                    v343 = GetProcessHeap();
                    HeapFree(v343, 0, v342);
                    v344 = v1587;
                    v1587[5] = 0LL;
                  }
                  else
                  {
                    v344 = v1587;
                  }
                  v464 = GetProcessHeap();
                  HeapFree(v464, 0, v344);
                  v90 = 4LL;
                }
                if ( v1398 )
                {
                  v465 = GetProcessHeap();
                  HeapFree(v465, 0, v1398);
                  v90 = 4LL;
                }
                if ( v89 < 0 )
                  goto LABEL_747;
                if ( !(_DWORD)v1903 )
                {
                  v89 = -1073425151;
                  v1599 = -1073425151;
                  goto LABEL_747;
                }
                if ( v1904 )
                {
                  v1828 = v1904;
                  v1599 = RtlULongLongAdd(v1904, v90, &v1828);
                  v89 = v1599;
                  if ( v1599 < 0 )
                  {
                    v466 = v1730;
                    v467 = v1829;
                  }
                  else
                  {
                    v467 = v1828;
                    v1730 = v466;
                    if ( !v466 )
                      v467 = 0LL;
                    v1828 = v467;
                    v1829 = v467;
                  }
                  if ( v1599 >= 0 )
                  {
                    if ( v466 != 4 )
                    {
                      v89 = -1073741789;
                      v1599 = -1073741789;
                      goto LABEL_747;
                    }
                    v468 = *v467;
                    v1775 = v468;
                    goto LABEL_658;
                  }
                }
                else
                {
                  v89 = -1073741811;
                  v1599 = -1073741811;
                }
                v468 = v1775;
LABEL_658:
                if ( v89 < 0 )
                  goto LABEL_747;
                if ( v468 == -805306333 )
                {
                  v1775 = -2147024774;
                }
                else if ( v468 != -2147024774 )
                {
                  v1599 = v468;
                  v89 = v468;
                  if ( v468 < 0 )
                    goto LABEL_747;
                }
                if ( (_DWORD)v1903 != 6 )
                {
                  v89 = -1073425151;
                  v1599 = -1073425151;
                  goto LABEL_747;
                }
                if ( v1904 )
                {
                  v469 = v1904;
                  v470 = 0;
                  v1830 = (int *)v1904;
                  do
                  {
                    v1599 = RtlULongLongAdd(v469, v90, &v1830);
                    v89 = v1599;
                    if ( v1599 < 0 )
                      goto LABEL_675;
                    v1599 = RtlULongLongAdd(v1830, v471, &v1830);
                    v89 = v1599;
                    if ( v1599 < 0 )
                      goto LABEL_675;
                    v469 = v1830;
                    ++v470;
                  }
                  while ( !v470 );
                  v472 = *v1830;
                  v1599 = RtlULongLongAdd(v1830, v90, &v1830);
                  v89 = v1599;
                  if ( v1599 < 0 )
                  {
LABEL_675:
                    v472 = v1711;
                    v473 = v1831;
                    goto LABEL_676;
                  }
                  v473 = v1830;
                  v1711 = v472;
                  if ( !v472 )
                    v473 = 0LL;
                  v1830 = v473;
                  v1831 = v473;
LABEL_676:
                  if ( v89 < 0 )
                    goto LABEL_747;
                  if ( v472 != 8 )
                  {
                    v89 = -1073741789;
                    v1599 = -1073741789;
                    goto LABEL_747;
                  }
                  v1832 = *(_QWORD *)v473;
                }
                else
                {
                  v89 = -1073741811;
                  v1599 = -1073741811;
                }
                if ( v89 < 0 )
                  goto LABEL_747;
                if ( !v1904 )
                {
                  v89 = -1073741811;
                  v1599 = -1073741811;
                  goto LABEL_696;
                }
                v474 = v1904;
                v475 = 0;
                v1833 = (int *)v1904;
                do
                {
                  v1599 = RtlULongLongAdd(v474, v90, &v1833);
                  v89 = v1599;
                  if ( v1599 < 0 )
                    goto LABEL_691;
                  v1599 = RtlULongLongAdd(v1833, v476, &v1833);
                  v89 = v1599;
                  if ( v1599 < 0 )
                    goto LABEL_691;
                  v474 = v1833;
                  ++v475;
                }
                while ( v475 < 2 );
                v477 = *v1833;
                v1599 = RtlULongLongAdd(v1833, v90, &v1833);
                v89 = v1599;
                if ( v1599 < 0 )
                {
LABEL_691:
                  v477 = v1712;
                  v478 = v1834;
                  goto LABEL_692;
                }
                v478 = v1833;
                v1712 = v477;
                if ( !v477 )
                  v478 = 0LL;
                v1833 = v478;
                v1834 = v478;
LABEL_692:
                if ( v89 >= 0 )
                {
                  if ( v477 != 4 )
                  {
                    v89 = -1073741789;
                    v1599 = -1073741789;
                    goto LABEL_747;
                  }
                  v1713 = *v478;
LABEL_696:
                  if ( v89 < 0 )
                    goto LABEL_747;
                  if ( !v1904 )
                  {
                    v89 = -1073741811;
                    v1599 = -1073741811;
                    goto LABEL_747;
                  }
                  v479 = v1904;
                  v480 = 0;
                  v1835[0] = v1904;
                  while ( 1 )
                  {
                    v1599 = RtlULongLongAdd(v479, v90, v1835);
                    v89 = v1599;
                    if ( v1599 < 0 )
                      break;
                    v1599 = RtlULongLongAdd(v1835[0], v481, v1835);
                    v89 = v1599;
                    if ( v1599 < 0 )
                      break;
                    v479 = (LPVOID)v1835[0];
                    if ( (unsigned int)++v480 >= 3 )
                    {
                      v1599 = RtlULongLongAdd(v1835[0], 4LL, v1835);
                      v89 = v1599;
                      if ( v1599 >= 0 )
                      {
                        v483 = v1835[0];
                        v1714 = v482;
                        if ( !v482 )
                          v483 = 0LL;
                        v1835[0] = v483;
                        v1835[1] = v483;
                      }
                      break;
                    }
                  }
                  if ( v89 < 0 )
                    goto LABEL_746;
                  v484 = v1904;
                  v485 = 0;
                  v1836 = (int *)v1904;
                  do
                  {
                    v1599 = RtlULongLongAdd(v484, 4LL, &v1836);
                    v89 = v1599;
                    if ( v1599 < 0 )
                      goto LABEL_716;
                    v1599 = RtlULongLongAdd(v1836, v486, &v1836);
                    v89 = v1599;
                    if ( v1599 < 0 )
                      goto LABEL_716;
                    v484 = v1836;
                    ++v485;
                  }
                  while ( v485 < 4 );
                  v487 = *v1836;
                  v1599 = RtlULongLongAdd(v1836, 4LL, &v1836);
                  v89 = v1599;
                  if ( v1599 < 0 )
                  {
LABEL_716:
                    v487 = v1715;
                    v488 = v1837;
                    goto LABEL_717;
                  }
                  v488 = v1836;
                  v1715 = v487;
                  if ( !v487 )
                    v488 = 0LL;
                  v1836 = v488;
                  v1837 = v488;
LABEL_717:
                  if ( v89 >= 0 )
                  {
                    if ( v487 != 4 )
                    {
                      v89 = -1073741789;
                      goto LABEL_745;
                    }
                    v1716 = *v488;
                  }
                  if ( v89 >= 0 )
                  {
                    v489 = (unsigned int *)v1904;
                    v490 = 0;
                    v1838 = (unsigned int *)v1904;
                    do
                    {
                      v1518 = *v489;
                      v1599 = RtlULongLongAdd(v489, 4LL, &v1838);
                      v89 = v1599;
                      if ( v1599 < 0 )
                        goto LABEL_730;
                      v1599 = RtlULongLongAdd(v1838, v1518, &v1838);
                      v89 = v1599;
                      if ( v1599 < 0 )
                        goto LABEL_730;
                      v489 = v1838;
                      ++v490;
                    }
                    while ( v490 < 5 );
                    v494 = *v1838;
                    v1599 = RtlULongLongAdd(v1838, 4LL, &v1838);
                    v89 = v1599;
                    if ( v1599 < 0 )
                    {
LABEL_730:
                      v494 = v1717;
                      v495 = v1839;
                      goto LABEL_731;
                    }
                    v495 = v1838;
                    v1717 = v494;
                    if ( !v494 )
                      v495 = 0LL;
                    v1838 = v495;
                    v1839 = v495;
LABEL_731:
                    if ( v89 < 0 )
                    {
                      v496 = v1774;
                    }
                    else
                    {
                      if ( v494 != 4 )
                      {
                        v89 = -1073741789;
                        goto LABEL_745;
                      }
                      v496 = *v495;
                      v1774 = *v495;
                    }
                    if ( v89 >= 0 )
                    {
                      if ( v1790 == v1832 )
                      {
                        v1726 = v1713;
                        v1727 = v492;
                        v1728 = v496;
                        if ( v492 <= 4 )
                        {
                          if ( v493 <= 4 )
                          {
                            memcpy_0(v1615, v491, v493);
                            if ( v1775 )
                              v89 = v1775;
                          }
                          else
                          {
                            v89 = -2147024774;
                          }
                        }
                        else
                        {
                          v89 = -2147024774;
                        }
                      }
                      else
                      {
                        v89 = -1073425151;
                      }
                      goto LABEL_745;
                    }
                  }
LABEL_746:
                  v90 = 4LL;
                }
LABEL_747:
                v497 = *(void **)&v1902[1];
                v1902[0] = 0;
                v1901 = 0;
                if ( *(_QWORD *)&v1902[1] )
                {
                  v498 = GetProcessHeap();
                  HeapFree(v498, 0, v497);
                  *(_QWORD *)&v1902[1] = 0LL;
                  v90 = 4LL;
                }
                v499 = v1904;
                v1903 = 0LL;
                if ( v1904 )
                {
                  v500 = GetProcessHeap();
                  HeapFree(v500, 0, v499);
                  v1904 = 0LL;
                  v90 = 4LL;
                }
                if ( v1439 )
                {
                  v501 = GetProcessHeap();
                  HeapFree(v501, 0, v1439);
                  v90 = 4LL;
                }
                if ( v1524 )
                {
                  v502 = GetProcessHeap();
                  HeapFree(v502, 0, v1524);
                  v90 = 4LL;
                }
                if ( v89 < 0 )
                  goto LABEL_1969;
                if ( !v1728 )
                {
LABEL_1968:
                  v1395 = v1726;
                  v1772[3] = v1727;
                  v1810 = v1615;
                  v1662 = 0LL;
LABEL_1970:
                  while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                    ;
                  v1396 = dword_1801B7260;
                  if ( dword_1801B7260 > 0 )
                  {
                    --dword_1801B7260;
                    if ( v1396 == 1 )
                    {
                      v1397 = (HMODULE *)&unk_1801B77C0;
                      do
                      {
                        if ( *v1397 )
                        {
                          FreeLibrary(*v1397);
                          v90 = v1811;
                        }
                        v1397 += 3;
                        v1811 = --v90;
                      }
                      while ( v90 );
                      memset_0(&unk_1801B77C0, 0, 0x60uLL);
                      qword_1801B50D0 = 0LL;
                      off_1801B5000[0] = sub_180140EE0;
                      off_1801B5008[0] = sub_180140EE0;
                      off_1801B5010[0] = sub_180140EE0;
                      off_1801B5018[0] = sub_180140EE0;
                      off_1801B5020[0] = sub_180140EE0;
                      off_1801B5028 = sub_180140EE0;
                      off_1801B5030[0] = sub_180140EE0;
                      off_1801B5038 = sub_180140EE0;
                      off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5050[0] = sub_180140EE0;
                      off_1801B5058[0] = sub_180140EE0;
                      off_1801B5060[0] = sub_180140EE0;
                      off_1801B5068[0] = sub_180140EE0;
                      off_1801B5070[0] = sub_180140EE0;
                      off_1801B5078 = sub_180140EE0;
                      off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5088[0] = sub_180140EE0;
                      off_1801B5090[0] = sub_180140EE0;
                      off_1801B5098[0] = sub_180140EE0;
                      off_1801B50A0[0] = sub_180140EE0;
                      off_1801B50A8[0] = sub_180140EE0;
                      off_1801B50B0[0] = sub_180140EE0;
                      off_1801B50B8[0] = sub_18004A5B0;
                      off_1801B50C0[0] = sub_180140EE0;
                      off_1801B50C8 = sub_180140EE0;
                      off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B50E0[0] = sub_180140EE0;
                      off_1801B50E8[0] = sub_180140EE0;
                      off_1801B50F0[0] = sub_180140EE0;
                      off_1801B50F8[0] = sub_180140EE0;
                      off_1801B5100 = sub_180140EE0;
                      off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5110[0] = sub_180140EE0;
                      off_1801B5118[0] = sub_180140EE0;
                      off_1801B5120[0] = sub_180140EE0;
                      off_1801B5128[0] = sub_180140EE0;
                      off_1801B5130[0] = sub_180140EE0;
                      off_1801B5138 = sub_180140EE0;
                      off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                      off_1801B5160[0] = sub_180140EE0;
                      off_1801B5168 = sub_180140EE0;
                    }
                  }
                  _InterlockedExchange(&dword_1801B78A0, 0);
                  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1662);
                  if ( v89 >= 0 && v1395 == 4 )
                    *v2 = *(_DWORD *)ATL::CAutoPtr<CMonitor::SampleDataBlock>::operator->(&v1810);
                  goto LABEL_9;
                }
                v1840 = 0LL;
                dword_1801B71C0 = v1728;
                ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
                if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                  goto LABEL_1547;
                v1511 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50F8[0])(0LL, 0LL, 1027LL);
                if ( !v1511 )
                {
                  GetLastError();
LABEL_1547:
                  ATL::CHandle::Close((ATL::CHandle *)&v1840);
                  if ( !v1728 )
                  {
LABEL_1967:
                    v90 = 4LL;
                    goto LABEL_1968;
                  }
                  v1614 = 0LL;
                  v1913 = 0LL;
                  v1914 = 0LL;
                  v1862 = &unk_1801B6760;
                  v1649 = 0LL;
                  *(_QWORD *)&v1900[1] = 0LL;
                  v1734 = 0;
                  v1863 = 160LL;
                  v1074 = GetProcessHeap();
                  v1075 = HeapAlloc(v1074, 8u, 0xA0uLL);
                  v1512 = v1075;
                  v1076 = v1075;
                  if ( !v1075 )
                    goto LABEL_1958;
                  memcpy_0(v1075, v1862, v1863);
                  v1614 = v1076;
                  v1077 = v1863;
                  v1864 = &unk_1801B66A0;
                  v1451 = v1863;
                  v1865 = 8LL;
                  v1078 = GetProcessHeap();
                  v1079 = (WCHAR *)HeapAlloc(v1078, 8u, 8uLL);
                  v1629 = v1079;
                  if ( !v1079 )
                    goto LABEL_1958;
                  memcpy_0(v1079, v1864, v1865);
                  v1649 = v1629;
                  v1657 = v1865;
                  v1735 = 0;
                  v1866 = __rdtsc();
                  if ( (int)RtlUIntAdd(4LL, 4LL, &v1736) < 0 )
                    goto LABEL_1959;
                  v1737 = v1736;
                  if ( (int)RtlUIntAdd(0LL, v1736, &v1735) < 0 )
                    goto LABEL_1959;
                  if ( (int)RtlUIntAdd((unsigned int)v90, v1077, &v1738) < 0 )
                    goto LABEL_1959;
                  v1737 = v1738;
                  if ( (int)RtlUIntAdd(v1735, v1738, &v1735) < 0 )
                    goto LABEL_1959;
                  if ( (int)RtlUIntAdd((unsigned int)v90, v1080, &v1739) < 0 )
                    goto LABEL_1959;
                  v1737 = v1739;
                  if ( (int)RtlUIntAdd(v1735, v1739, &v1735) < 0 )
                    goto LABEL_1959;
                  if ( (int)RtlUIntAdd((unsigned int)v90, (unsigned int)(v90 + 4), &v1740) < 0 )
                    goto LABEL_1959;
                  v1737 = v1740;
                  if ( (int)RtlUIntAdd(v1735, v1740, &v1735) < 0 )
                    goto LABEL_1959;
                  v1900[0] = v1735;
                  v1081 = v1735;
                  v1082 = GetProcessHeap();
                  v1083 = HeapAlloc(v1082, 8u, v1081);
                  v1084 = v1083;
                  v90 = 4LL;
                  if ( !v1083 )
                    goto LABEL_1959;
                  *(_QWORD *)&v1900[1] = v1083;
                  v1899 = 0;
                  v1741 = 4;
                  if ( (int)RtlULongLongAdd(v1083, 4LL, &v1918) < 0 || v1084 + 2 > (_DWORD *)((char *)v1084 + v1900[0]) )
                    goto LABEL_1959;
                  v1085 = v1918;
                  *v1084 = v90;
                  *v1085 = v1741;
                  v1086 = ++v1899;
                  if ( !v1451 )
                  {
LABEL_1958:
                    v90 = 4LL;
                    goto LABEL_1959;
                  }
                  if ( *(_QWORD *)&v1900[1] )
                  {
                    v1087 = *(_DWORD **)&v1900[1];
                    v1867 = *(_DWORD **)&v1900[1];
                    if ( v1086 )
                    {
                      while ( (int)RtlUIntAdd(4LL, (unsigned int)*v1087, &v1744) >= 0 )
                      {
                        v1743 = v1744;
                        if ( (int)RtlULongLongAdd(v1087, v1744, &v1867) < 0 )
                          goto LABEL_1958;
                        v1087 = v1867;
                        if ( v1089 + 1 >= v1090 )
                          goto LABEL_1570;
                      }
                      goto LABEL_1602;
                    }
LABEL_1570:
                    if ( (int)RtlULongLongAdd(v1087, 4LL, &v1919) < 0
                      || (unsigned __int64)v1087 + v1091 + 4 > *(_QWORD *)&v1900[1] + (unsigned __int64)v1900[0] )
                    {
                      goto LABEL_1959;
                    }
                    v1092 = v1919;
                    *v1087 = v1091;
                    memcpy_0(v1092, v1512, v1091);
                    v90 = 4LL;
                  }
                  else
                  {
                    if ( (int)RtlUIntAdd(4LL, v1451, &v1742) < 0 )
                      goto LABEL_1959;
                    v1743 = v1742;
                    if ( (int)RtlUIntAdd(v1900[0], v1742, v1900) < 0 )
                      goto LABEL_1959;
                  }
                  v1093 = ++v1899;
                  if ( !v1657 )
                    goto LABEL_1959;
                  if ( !*(_QWORD *)&v1900[1] )
                  {
                    if ( (int)RtlUIntAdd((unsigned int)v90, v1657, &v1745) < 0 )
                      goto LABEL_1959;
                    v1746 = v1745;
                    if ( (int)RtlUIntAdd(v1900[0], v1745, v1900) < 0 )
                      goto LABEL_1959;
LABEL_1585:
                    v1100 = ++v1899;
                    v1869 = v1866;
                    if ( *(_QWORD *)&v1900[1] )
                    {
                      v1101 = *(unsigned int **)&v1900[1];
                      v1870 = *(unsigned int **)&v1900[1];
                      if ( v1100 )
                      {
                        while ( (int)RtlUIntAdd((unsigned int)v90, *v1101, &v1769) >= 0 )
                        {
                          v1749 = v1769;
                          if ( (int)RtlULongLongAdd(v1102, v1769, &v1870) < 0 )
                            break;
                          v1101 = v1870;
                          if ( v1103 + 1 >= v1100 )
                            goto LABEL_1593;
                        }
                        goto LABEL_1959;
                      }
LABEL_1593:
                      if ( (int)RtlULongLongAdd(v1101, v90, &v1898) < 0
                        || (unsigned __int64)(v1104 + 3) > *(_QWORD *)&v1900[1] + (unsigned __int64)v1900[0] )
                      {
                        goto LABEL_1959;
                      }
                      v1105 = v1898;
                      *v1104 = 8;
                      *v1105 = v1869;
                    }
                    else
                    {
                      if ( (int)RtlUIntAdd((unsigned int)v90, 8LL, &v1748) < 0 )
                        goto LABEL_1959;
                      v1749 = v1748;
                      if ( (int)RtlUIntAdd(v1900[0], v1748, v1900) < 0 )
                        goto LABEL_1959;
                    }
                    ++v1899;
                    if ( (int)RtlUIntAdd((unsigned int)v90, (unsigned int)v90, &v1751) >= 0 )
                    {
                      v1107 = v1751;
                      v1752 = v1751;
                      v1753 = v1751;
                      if ( (int)RtlUIntAdd(v1106, 8LL, &v1754) >= 0 )
                      {
                        v1752 = v1754;
                        if ( (int)RtlUIntAdd(v1107, v1754, &v1753) >= 0 )
                        {
                          v1452 = v1753;
                          v1513 = 0LL;
                          v1871 = 0LL;
                          v1630 = 0LL;
                          v1579 = 0;
                          v1658 = 0LL;
                          v1755 = 0LL;
                          lpModuleNamep = 0LL;
                          v1477 = 0LL;
                          v1872 = __rdtsc();
                          v1756 = 8;
                          v1108 = RtlUIntAdd(8LL, v1900[0], &v1756);
                          if ( v1108 >= 0 )
                          {
                            v1110 = (v1756 + 7) & 0xFFFFFFF8;
                            if ( v1110 >= v1756 )
                            {
                              v1756 = (v1756 + 7) & 0xFFFFFFF8;
                              v1111 = v1110;
                              v1112 = GetProcessHeap();
                              v1407 = HeapAlloc(v1112, 8u, v1111);
                              if ( v1407 )
                              {
                                v1873 = v1407;
                                *v1407 = v1899;
                                v1108 = RtlULongLongAdd(v1407, 4LL, &v1873);
                                if ( v1108 >= 0 )
                                {
                                  v1114 = v1873;
                                  *(_DWORD *)v1873 = v1900[0];
                                  v1108 = RtlULongLongAdd(v1114, v1113, &v1873);
                                  if ( v1108 >= 0 )
                                  {
                                    *(_QWORD *)(v1756 + v1115 - 8) = v1872;
                                    memcpy_0(v1873, *(const void **)&v1900[1], v1900[0]);
                                    v1116 = v1407;
                                    v90 = 4LL;
                                    v1109 = v1756;
                                    v1513 = (unsigned __int8 *)v1407;
                                    goto LABEL_1611;
                                  }
                                }
                                v1117 = GetProcessHeap();
                                HeapFree(v1117, 0, v1407);
                              }
                              else
                              {
                                v1108 = -1073741801;
                              }
                              v90 = 4LL;
                              v1109 = 0;
                            }
                            else
                            {
                              v1108 = -1073741675;
                            }
                          }
                          v1116 = 0LL;
LABEL_1611:
                          v1118 = v1108 | 0x10000000;
                          if ( v1118 < 0 )
                            goto LABEL_1910;
                          v1874 = 0LL;
                          v1875 = 0LL;
                          v1876 = 0LL;
                          v1877 = 0LL;
                          v1878 = 0LL;
                          v1879 = 0LL;
                          if ( !v1116 )
                          {
                            v1119 = -1073741811;
                            goto LABEL_1672;
                          }
                          v1120 = v1109;
                          v1408 = v1109;
                          if ( v1109 )
                          {
                            v1595 = v1109 + 8LL;
                            v1121 = operator new(v1595);
                            v1662 = v1121;
                            if ( v1121 )
                            {
                              v1122 = 0;
                              v1533 = 0;
                              v1123 = 0LL;
                              if ( v1120 )
                              {
                                if ( v1120 >= 0x20 )
                                {
                                  v1124 = 0LL;
                                  v1125 = 0LL;
                                  do
                                  {
                                    v1124 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1513[v1123]), v1124);
                                    v1126 = _mm_loadu_si128((const __m128i *)&v1513[v1123 + 16]);
                                    v1123 += 32LL;
                                    v1127 = _mm_xor_si128(v1126, v1125);
                                    v1125 = v1127;
                                  }
                                  while ( v1123 < (v1120 & 0xFFFFFFE0) );
                                  v1128 = _mm_xor_si128(v1124, v1127);
                                  v1129 = _mm_xor_si128(v1128, _mm_srli_si128(v1128, 8));
                                  v1130 = _mm_xor_si128(v1129, _mm_srli_si128(v1129, 4));
                                  v1131 = _mm_xor_si128(v1130, _mm_srli_si128(v1130, 2));
                                  v1122 = _mm_cvtsi128_si32(_mm_xor_si128(v1131, _mm_srli_si128(v1131, 1)));
                                  v1533 = v1122;
                                }
                                if ( v1123 < v1120 )
                                {
                                  do
                                    v1122 ^= v1513[v1123++];
                                  while ( v1123 < v1120 );
                                  v1533 = v1122;
                                }
                              }
                              v1132 = v1121;
                              v1978 = 0xC81ECB17B1B54A58uLL;
                              v1757 = 0;
                              v1606 = 0;
                              v1133 = -1;
                              v1758 = -1;
                              v1134 = v1513;
                              v1641 = 0;
                              v1135 = 0;
                              v1136 = v1120 & 7;
                              if ( (v1120 & 7) != 0 )
                              {
                                v1606 = 0;
                                v1137 = 0;
                                v1138 = 56;
                                v1139 = 0;
                                do
                                {
                                  v1140 = *v1134++;
                                  if ( v1137 >= 4 )
                                  {
                                    v1141 = (v1140 << v1138) | v1606;
                                    v1606 = v1141;
                                  }
                                  else
                                  {
                                    v1141 = v1606;
                                    v1139 |= v1140 << (v1138 - 32);
                                  }
                                  ++v1137;
                                  v1138 -= 8;
                                }
                                while ( v1137 < (int)v1136 );
                                v1641 = v1139;
                                v1135 = v1139 ^ 0xB17A307A;
                                v1142 = v1141 ^ 0x42F6B18D;
                                v1757 = v1139 ^ 0xB17A307A;
                                v1143 = 0;
                                v1758 = v1142;
                                if ( (v1120 & 7) != 0 )
                                {
                                  do
                                  {
                                    if ( v1143 >= 4 )
                                    {
                                      v1142 = __ROL4__(v1142, 8);
                                      v1144 = v1142;
                                    }
                                    else
                                    {
                                      v1135 = __ROL4__(v1135, 8);
                                      v1144 = v1135;
                                    }
                                    *v1132 = v1144;
                                    ++v1143;
                                    ++v1132;
                                  }
                                  while ( v1143 < (int)v1136 );
                                  v1135 = v1757;
                                  v1142 = v1758;
                                }
                                if ( v1136 <= 4 )
                                {
                                  v1133 = 0;
                                  v1758 = 0;
                                  if ( v1136 < 4 )
                                  {
                                    v1135 = v1135 >> (8 * (4 - v1136)) << (8 * (4 - v1136));
                                    v1757 = v1135;
                                  }
                                }
                                else
                                {
                                  v1133 = v1142 >> (8 * (8 - v1136)) << (8 * (8 - v1136));
                                  v1758 = v1133;
                                }
                              }
                              if ( v1120 >> 3 )
                              {
                                v1145 = HIDWORD(v1978);
                                v1146 = v1132 + 7;
                                v1147 = v1606;
                                v1148 = v1134 + 2;
                                v1149 = v1120 >> 3;
                                v1150 = v1641;
                                v1151 = HIWORD(HIDWORD(v1978));
                                v1557 = WORD1(v1978);
                                v1152 = WORD2(v1978);
                                do
                                {
                                  v1153 = *(v1148 - 1);
                                  v1154 = *(v1148 - 2);
                                  v1155 = v1148[2];
                                  v1148 += 8;
                                  v1156 = *(v1148 - 7) | ((*(v1148 - 8) | ((v1153 | (v1154 << 8)) << 8)) << 8);
                                  v1157 = *(v1148 - 3) | ((*(v1148 - 4) | ((*(v1148 - 5) | (v1155 << 8)) << 8)) << 8);
                                  v1158 = v1157 ^ v1133;
                                  v1159 = v1156 ^ v1145 ^ (v1158 - 19032) ^ v1135;
                                  v1160 = (__ROR4__(v1159, 7) + WORD1(v1978) * __ROR4__(HIDWORD(v1978) ^ v1159, 15)) ^ v1158;
                                  v1161 = (v1152 * __ROR4__(v1160 - 1313519016, 9) - __ROR4__(v1160, 10)) ^ v1159;
                                  v1162 = (__ROL4__(v1161, 5) + v1151 * __ROL4__(v1152 ^ v1161, 4)) ^ v1160;
                                  v1163 = (HIDWORD(v1978) - (v1162 ^ 0xB1B54A58)) ^ v1161;
                                  v1164 = (WORD1(v1978) * (v1163 - 19032) - (v1163 >> 6)) ^ v1162;
                                  v1165 = (19032 * (v1152 ^ __ROR4__(v1164, 15))) ^ v1163;
                                  v1166 = (v1152 * (v1151 + __ROR4__(~v1165, 3))) ^ v1164;
                                  v1167 = (v1166 - HIDWORD(v1978) - 19032) ^ v1165;
                                  v1168 = (v1557 * (v1167 ^ v1151)) ^ __ROR4__(v1167, 10) ^ v1166;
                                  v1169 = __ROR4__(v1168, 3) ^ (v1152 * __ROL4__(v1168 ^ 0x4A58, 6)) ^ v1167;
                                  v1170 = (19032 * (__ROR4__(v1169, 15) - v1151)) ^ v1168;
                                  v1171 = (v1170 >> 15) ^ (19032 * __ROL4__(v1170 - v1152, 3)) ^ (v1170 >> 1) ^ (19032 * (v1170 ^ v1151)) ^ v1169;
                                  v1172 = (WORD1(v1978) * (v1171 - v1152) - (v1171 >> 13)) ^ v1170;
                                  v1173 = __ROR4__(v1172, 11) ^ (v1152 * __ROR4__(-1313519016 - v1172, 9)) ^ v1171;
                                  v1174 = (v1173 - v1151 + 1313519016) ^ v1172;
                                  v1175 = (19032 * (v1557 ^ v1174) - __ROR4__(v1174, 7)) ^ v1173;
                                  v1176 = (WORD1(v1978) * __ROL4__(v1175 ^ v1151, 4) - __ROR4__(v1175, 16)) ^ v1174;
                                  v1177 = (__ROR4__(v1176, 4) + v1152 * __ROR4__(-1313519016 - v1176, 10)) ^ v1175;
                                  v1146 += 8;
                                  v1178 = __ROR4__(v1177, 9) ^ (v1151 * __ROR4__(v1177 + 1313519016, 4)) ^ v1176;
                                  v1179 = (19032 * __ROL4__(v1178 ^ HIDWORD(v1978), 8) - __ROL4__(v1178, 2)) ^ v1177;
                                  v1180 = (WORD1(v1978) * __ROR4__(HIDWORD(v1978) - v1179, 11) - __ROR4__(v1179, 12)) ^ v1178;
                                  v1181 = (v1180 >> 8) ^ (v1152 * (v1180 ^ WORD1(v1978))) ^ v1179;
                                  v1145 = HIDWORD(v1978);
                                  v1757 = v1150 ^ v1181;
                                  v1758 = v1147 ^ HIDWORD(v1978) ^ v1181 ^ v1180 ^ 0xB1B54A58;
                                  v1150 = v1156;
                                  *(v1146 - 12) = v1757;
                                  v1147 = v1157;
                                  v1757 = __ROR4__(v1757, 8);
                                  *(v1146 - 8) = v1758;
                                  v1758 = __ROR4__(v1758, 8);
                                  *(v1146 - 13) = v1757;
                                  v1757 = __ROR4__(v1757, 8);
                                  *(v1146 - 9) = v1758;
                                  v1758 = __ROR4__(v1758, 8);
                                  *(v1146 - 14) = v1757;
                                  v1757 = __ROR4__(v1757, 8);
                                  *(v1146 - 10) = v1758;
                                  v1758 = __ROR4__(v1758, 8);
                                  *(v1146 - 15) = v1757;
                                  *(v1146 - 11) = v1758;
                                  v1135 = __ROR4__(v1757, 8);
                                  v1133 = __ROR4__(v1758, 8);
                                  v1757 = v1135;
                                  v1758 = v1133;
                                  --v1149;
                                }
                                while ( v1149 );
                                v2 = v1663;
                                v1 = v1801;
                                v89 = v1599;
                                v1120 = v1408;
                              }
                              v1182 = v1662;
                              *(_QWORD *)((char *)v1662 + v1120) = v1533;
                              v1874 = &qword_1801B6750;
                              v1876 = &unk_1801B66B0;
                              v1878 = v1182;
                              v1879 = v1595;
                              v1875 = 8LL;
                              v1877 = 160LL;
                              v1183 = GetProcessHeap();
                              v1184 = HeapAlloc(v1183, 8u, 0x30uLL);
                              v1185 = v1184;
                              if ( v1184 )
                              {
                                *v1184 = v1595;
                                v1186 = GetProcessHeap();
                                v1187 = HeapAlloc(v1186, 8u, (unsigned int)v1595);
                                if ( v1187 )
                                {
                                  v1188 = v1662;
                                  *((_QWORD *)v1185 + 1) = v1187;
                                  memcpy_0(v1187, v1188, (unsigned int)v1595);
                                  v1185[4] = 160;
                                  v1189 = GetProcessHeap();
                                  v1190 = HeapAlloc(v1189, 8u, 0xA0uLL);
                                  if ( v1190 )
                                  {
                                    *((_QWORD *)v1185 + 3) = v1190;
                                    *v1190 = unk_1801B66B0;
                                    v1190[1] = *((_OWORD *)&unk_1801B66B0 + 1);
                                    v1190[2] = *((_OWORD *)&unk_1801B66B0 + 2);
                                    v1190[3] = *((_OWORD *)&unk_1801B66B0 + 3);
                                    v1190[4] = *((_OWORD *)&unk_1801B66B0 + 4);
                                    v1190[5] = *((_OWORD *)&unk_1801B66B0 + 5);
                                    v1190[6] = *((_OWORD *)&unk_1801B66B0 + 6);
                                    v1190[7] = *((_OWORD *)&unk_1801B66B0 + 7);
                                    v1190[8] = *((_OWORD *)&unk_1801B66B0 + 8);
                                    v1190[9] = *((_OWORD *)&unk_1801B66B0 + 9);
                                    v1185[8] = 8;
                                    v1191 = GetProcessHeap();
                                    v1192 = HeapAlloc(v1191, 8u, 8uLL);
                                    if ( v1192 )
                                    {
                                      *((_QWORD *)v1185 + 5) = v1192;
                                      v1119 = 0;
                                      *v1192 = qword_1801B6750;
LABEL_1657:
                                      v90 = 4LL;
                                      if ( v1119 < 0 )
                                      {
LABEL_1662:
                                        v1409 = v1878;
                                        if ( v1878 )
                                        {
                                          v1200 = GetProcessHeap();
                                          HeapFree(v1200, 0, v1409);
                                          v90 = 4LL;
                                          v1878 = 0LL;
                                        }
                                        if ( v1185 )
                                        {
                                          v1410 = (void *)*((_QWORD *)v1185 + 1);
                                          if ( v1410 )
                                          {
                                            v1201 = GetProcessHeap();
                                            HeapFree(v1201, 0, v1410);
                                            *((_QWORD *)v1185 + 1) = 0LL;
                                          }
                                          v1411 = (void *)*((_QWORD *)v1185 + 3);
                                          if ( v1411 )
                                          {
                                            v1202 = GetProcessHeap();
                                            HeapFree(v1202, 0, v1411);
                                            *((_QWORD *)v1185 + 3) = 0LL;
                                          }
                                          v1412 = (void *)*((_QWORD *)v1185 + 5);
                                          if ( v1412 )
                                          {
                                            v1203 = GetProcessHeap();
                                            HeapFree(v1203, 0, v1412);
                                            *((_QWORD *)v1185 + 5) = 0LL;
                                          }
                                          v1204 = GetProcessHeap();
                                          HeapFree(v1204, 0, v1185);
                                          v90 = 4LL;
                                        }
LABEL_1672:
                                        v1118 = v1119 | 0x10000000;
                                        if ( v1118 >= 0 )
                                        {
                                          v1205 = (const void **)v1871;
                                          v1759 = v90;
                                          v1206 = RtlUIntAdd((unsigned int)v90, *(unsigned int *)v1871, &v1759);
                                          if ( v1206 < 0
                                            || (v1206 = RtlUIntAdd(v1759, (unsigned int)v90, &v1759), v1206 < 0)
                                            || (v1206 = RtlUIntAdd(v1759, *((unsigned int *)v1205 + 4), &v1759),
                                                v1206 < 0)
                                            || (v1206 = RtlUIntAdd(v1759, (unsigned int)v90, &v1759), v1206 < 0) )
                                          {
                                            v1208 = v1760;
                                          }
                                          else
                                          {
                                            v1206 = RtlUIntAdd(v1759, *((unsigned int *)v1205 + 8), &v1759);
                                            v1208 = v1760;
                                            if ( v1206 >= 0 )
                                              v1208 = v1759;
                                            v1760 = v1208;
                                          }
                                          if ( v1206 >= 0 )
                                          {
                                            v1209 = v1208;
                                            v1210 = GetProcessHeap();
                                            v1413 = HeapAlloc(v1210, 8u, v1209);
                                            if ( v1413 )
                                            {
                                              *v1413 = *(_DWORD *)v1205;
                                              v1880 = v1413;
                                              v1206 = RtlULongLongAdd(v1413, 4LL, &v1880);
                                              if ( v1206 >= 0 )
                                              {
                                                memcpy_0(v1880, v1205[1], *(unsigned int *)v1205);
                                                v1206 = RtlULongLongAdd(v1880, *(unsigned int *)v1205, &v1880);
                                                if ( v1206 >= 0 )
                                                {
                                                  v1211 = v1880;
                                                  *(_DWORD *)v1880 = *((_DWORD *)v1205 + 4);
                                                  v1206 = RtlULongLongAdd(v1211, 4LL, &v1880);
                                                  if ( v1206 >= 0 )
                                                  {
                                                    memcpy_0(v1880, v1205[3], *((unsigned int *)v1205 + 4));
                                                    v1206 = RtlULongLongAdd(v1880, *((unsigned int *)v1205 + 4), &v1880);
                                                    if ( v1206 >= 0 )
                                                    {
                                                      v1212 = v1880;
                                                      *(_DWORD *)v1880 = *((_DWORD *)v1205 + 8);
                                                      v1206 = RtlULongLongAdd(v1212, 4LL, &v1880);
                                                      if ( v1206 >= 0 )
                                                      {
                                                        memcpy_0(v1880, v1205[5], *((unsigned int *)v1205 + 8));
                                                        v1206 = RtlULongLongAdd(
                                                                  v1880,
                                                                  *((unsigned int *)v1205 + 8),
                                                                  &v1880);
                                                        if ( v1206 >= 0 )
                                                        {
                                                          v1213 = v1413;
                                                          v90 = 4LL;
                                                          v1207 = v1452;
                                                          v1630 = v1413;
                                                          v1579 = v1760;
LABEL_1694:
                                                          v1118 = v1206 | 0x10000000;
                                                          if ( v1118 < 0 )
                                                          {
                                                            v1235 = 0LL;
                                                            goto LABEL_1914;
                                                          }
                                                          v1881 = 0LL;
                                                          v1761 = 0;
                                                          v1215 = 0;
                                                          v1882 = 0LL;
                                                          v1762 = 0;
                                                          v1763 = 8;
                                                          v1216 = RtlUIntAdd(8LL, v1207, &v1763);
                                                          v1118 = v1216 | 0x10000000;
                                                          if ( v1216 < 0 )
                                                            goto LABEL_1739;
                                                          v1217 = (v1763 + 7) & 0xFFFFFFF8;
                                                          if ( (unsigned int)v1217 >= v1763 )
                                                          {
                                                            v1765 = (v1763 + 7) & 0xFFFFFFF8;
                                                            v1218 = RtlUIntAdd(v1217, 8LL, &v1765);
                                                            v1219 = v1764;
                                                            v1118 = v1218;
                                                            if ( v1218 >= 0 )
                                                              v1219 = v1765;
                                                            v1764 = v1219;
                                                          }
                                                          else
                                                          {
                                                            v1118 = -1073741675;
                                                          }
                                                          if ( v1118 < 0 )
                                                            goto LABEL_1739;
                                                          if ( !*(_QWORD *)&v1900[1] || v1899 <= 1 )
                                                            goto LABEL_1738;
                                                          v1220 = *(unsigned int **)&v1900[1];
                                                          v1883 = *(unsigned int **)&v1900[1];
                                                          while ( 1 )
                                                          {
                                                            v1453 = *v1220;
                                                            v1118 = RtlULongLongAdd(v1220, 4LL, &v1883);
                                                            if ( v1118 < 0 )
                                                              break;
                                                            v1118 = RtlULongLongAdd(v1883, v1453, &v1883);
                                                            if ( v1118 < 0 )
                                                              break;
                                                            v1220 = v1883;
                                                            if ( v1221 != -1 )
                                                            {
                                                              v1118 = RtlULongLongAdd(v1883, 4LL, &v1883);
                                                              if ( v1118 >= 0 )
                                                              {
                                                                v1223 = v1883;
                                                                v1761 = v1222;
                                                                if ( !v1222 )
                                                                  v1223 = 0LL;
                                                                v1883 = v1223;
                                                                v1881 = v1223;
                                                              }
                                                              break;
                                                            }
                                                          }
                                                          if ( v1118 < 0 )
                                                            goto LABEL_1739;
                                                          if ( v1899 > 2 )
                                                          {
                                                            v1224 = *(unsigned int **)&v1900[1];
                                                            v1884 = *(unsigned int **)&v1900[1];
                                                            while ( 1 )
                                                            {
                                                              v1454 = *v1224;
                                                              v1118 = RtlULongLongAdd(v1224, 4LL, &v1884);
                                                              if ( v1118 < 0 )
                                                                break;
                                                              v1118 = RtlULongLongAdd(v1884, v1454, &v1884);
                                                              if ( v1118 < 0 )
                                                                break;
                                                              v1224 = v1884;
                                                              if ( (unsigned int)(v1226 + 1) >= 2 )
                                                              {
                                                                v1118 = RtlULongLongAdd(v1884, 4LL, &v1884);
                                                                if ( v1118 >= 0 )
                                                                {
                                                                  v1228 = v1884;
                                                                  v1215 = v1227;
                                                                  v1762 = v1227;
                                                                  if ( !v1227 )
                                                                    v1228 = 0LL;
                                                                  v1884 = v1228;
                                                                  v1882 = v1228;
                                                                }
                                                                break;
                                                              }
                                                            }
                                                            if ( v1118 >= 0 )
                                                            {
                                                              v1766 = 4;
                                                              v1118 = RtlUIntAdd(4LL, v1225, &v1766);
                                                              if ( v1118 < 0 )
                                                              {
                                                                v90 = v1229;
                                                              }
                                                              else
                                                              {
                                                                v1118 = RtlUIntAdd(v1766, v1230, &v1766);
                                                                if ( v1118 < 0 )
                                                                {
                                                                  v90 = v1231;
                                                                }
                                                                else
                                                                {
                                                                  v1118 = RtlUIntAdd(v1766, v1232, &v1766);
                                                                  v90 = v1233;
                                                                  if ( v1118 >= 0 )
                                                                  {
                                                                    v1118 = RtlUIntAdd(v1766, v1233, &v1766);
                                                                    if ( v1118 >= 0 )
                                                                    {
                                                                      v1118 = RtlUIntAdd(v1766, v1215, &v1766);
                                                                      v1234 = v1767;
                                                                      if ( v1118 >= 0 )
                                                                        v1234 = v1766;
                                                                      v1767 = v1234;
                                                                      goto LABEL_1733;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              v1234 = v1767;
LABEL_1733:
                                                              if ( v1118 < 0 )
                                                              {
LABEL_1736:
                                                                v1235 = 0LL;
LABEL_1913:
                                                                v1213 = v1630;
                                                                goto LABEL_1914;
                                                              }
                                                              if ( v1234 > 0x400000 )
                                                              {
                                                                v1118 = -2147418113;
                                                                goto LABEL_1736;
                                                              }
                                                              LODWORD(v1755) = v1234;
LABEL_1740:
                                                              if ( v1118 < 0 )
                                                                goto LABEL_1736;
                                                              v1236 = v1755;
                                                              v1237 = GetProcessHeap();
                                                              v1238 = HeapAlloc(v1237, 8u, v1236);
                                                              if ( v1238 )
                                                              {
                                                                v1235 = v1238;
                                                                v1658 = v1238;
                                                                v1118 = 0x10000000;
                                                              }
                                                              else
                                                              {
                                                                v1118 = -805306345;
                                                                v1235 = 0LL;
                                                              }
                                                              v1213 = v1630;
                                                              if ( v1118 < 0 )
                                                                goto LABEL_1747;
                                                              if ( !v1630 )
                                                              {
                                                                v1118 = -2147024809;
LABEL_1747:
                                                                v90 = 4LL;
LABEL_1914:
                                                                v1342 = 0LL;
LABEL_1915:
                                                                if ( v1513 )
                                                                {
                                                                  v1363 = GetProcessHeap();
                                                                  HeapFree(v1363, 0, v1513);
                                                                  v1235 = v1658;
                                                                  v90 = 4LL;
                                                                  v1342 = v1477;
                                                                  v1213 = v1630;
                                                                }
                                                                v1364 = v1871;
                                                                if ( v1871 )
                                                                {
                                                                  v1365 = (void *)*((_QWORD *)v1871 + 1);
                                                                  if ( v1365 )
                                                                  {
                                                                    v1366 = GetProcessHeap();
                                                                    HeapFree(v1366, 0, v1365);
                                                                    v1364[1] = 0LL;
                                                                  }
                                                                  v1367 = (void *)v1364[3];
                                                                  if ( v1367 )
                                                                  {
                                                                    v1368 = GetProcessHeap();
                                                                    HeapFree(v1368, 0, v1367);
                                                                    v1364[3] = 0LL;
                                                                  }
                                                                  v1369 = (void *)v1364[5];
                                                                  if ( v1369 )
                                                                  {
                                                                    v1370 = GetProcessHeap();
                                                                    HeapFree(v1370, 0, v1369);
                                                                    v1364[5] = 0LL;
                                                                  }
                                                                  v1371 = GetProcessHeap();
                                                                  HeapFree(v1371, 0, v1364);
                                                                  v1235 = v1658;
                                                                  v90 = 4LL;
                                                                  v1342 = v1477;
                                                                  v1213 = v1630;
                                                                  v1871 = 0LL;
                                                                }
                                                                if ( v1213 )
                                                                {
                                                                  v1372 = GetProcessHeap();
                                                                  HeapFree(v1372, 0, v1630);
                                                                  v1235 = v1658;
                                                                  v90 = 4LL;
                                                                  v1342 = v1477;
                                                                }
                                                                if ( v1235 )
                                                                {
                                                                  v1373 = GetProcessHeap();
                                                                  HeapFree(v1373, 0, v1658);
                                                                  v1342 = v1477;
                                                                  v90 = 4LL;
                                                                }
                                                                if ( lpModuleNamep )
                                                                {
                                                                  v1374 = (void *)*((_QWORD *)lpModuleNamep + 1);
                                                                  if ( v1374 )
                                                                  {
                                                                    v1375 = GetProcessHeap();
                                                                    HeapFree(v1375, 0, v1374);
                                                                    *((_QWORD *)lpModuleNamep + 1) = 0LL;
                                                                  }
                                                                  v1376 = (void *)*((_QWORD *)lpModuleNamep + 3);
                                                                  if ( v1376 )
                                                                  {
                                                                    v1377 = GetProcessHeap();
                                                                    HeapFree(v1377, 0, v1376);
                                                                    *((_QWORD *)lpModuleNamep + 3) = 0LL;
                                                                  }
                                                                  v1378 = (void *)*((_QWORD *)lpModuleNamep + 5);
                                                                  if ( v1378 )
                                                                  {
                                                                    v1379 = GetProcessHeap();
                                                                    HeapFree(v1379, 0, v1378);
                                                                    *((_QWORD *)lpModuleNamep + 5) = 0LL;
                                                                  }
                                                                  v1380 = GetProcessHeap();
                                                                  HeapFree(v1380, 0, lpModuleNamep);
                                                                  v1342 = v1477;
                                                                  v90 = 4LL;
                                                                }
                                                                if ( v1342 )
                                                                {
                                                                  v1381 = GetProcessHeap();
                                                                  HeapFree(v1381, 0, v1477);
                                                                  v90 = 4LL;
                                                                }
                                                                if ( v1118 >= 0 )
                                                                {
                                                                  if ( (_DWORD)v1913 )
                                                                  {
                                                                    v1382 = (unsigned int *)v1914;
                                                                    if ( v1914 )
                                                                    {
                                                                      v1893[0] = v1914;
                                                                      if ( (int)RtlULongLongAdd(v1914, v90, v1893) >= 0 )
                                                                      {
                                                                        v1385 = (int *)v1893[0];
                                                                        v1772[1] = v1383;
                                                                        if ( !v1383 )
                                                                          v1385 = 0LL;
                                                                        v1893[0] = v1385;
                                                                        v1893[1] = v1385;
                                                                        if ( v1383 == 4 )
                                                                        {
                                                                          v1734 = *v1385;
                                                                          if ( v1734 >= 0 && v1384 > 1 )
                                                                          {
                                                                            for ( v1894[0] = v1382;
                                                                                  (int)RtlULongLongAdd(
                                                                                         v1382,
                                                                                         v90,
                                                                                         v1894) >= 0
                                                                               && (int)RtlULongLongAdd(
                                                                                         v1894[0],
                                                                                         *v1382,
                                                                                         v1894) >= 0;
                                                                                  v1382 = (unsigned int *)v1894[0] )
                                                                            {
                                                                              if ( v1386 != -1 )
                                                                              {
                                                                                v1387 = *(_DWORD *)v1894[0];
                                                                                if ( (int)RtlULongLongAdd(
                                                                                            v1894[0],
                                                                                            v90,
                                                                                            v1894) >= 0 )
                                                                                {
                                                                                  v1388 = (_QWORD *)v1894[0];
                                                                                  v1772[2] = v1387;
                                                                                  if ( !v1387 )
                                                                                    v1388 = 0LL;
                                                                                  v1894[0] = v1388;
                                                                                  v1894[1] = v1388;
                                                                                  if ( v1387 == 8 )
                                                                                    v1894[2] = *v1388;
                                                                                }
                                                                                goto LABEL_1959;
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                                goto LABEL_1959;
                                                              }
                                                              if ( !v1235 )
                                                              {
                                                                v1118 = -2147024809;
                                                                v90 = 4LL;
                                                                goto LABEL_1914;
                                                              }
                                                              v1929 = v1579;
                                                              v1928[0] = v1630;
                                                              v1928[1] = v1235;
                                                              v1930 = v1755;
                                                              v1931 = 0;
                                                              if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                                                              {
                                                                v1243 = GetProcAddress(
                                                                          hModule,
                                                                          "NtQuerySystemInformation");
                                                                if ( v1243 )
                                                                {
                                                                  v1244 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1243)(
                                                                            134LL,
                                                                            v1928);
                                                                  v1240 = v1755;
                                                                  v1118 = v1244 | 0x10000000;
                                                                  if ( v1244 >= 0 )
                                                                    v1240 = v1930;
                                                                  LODWORD(v1755) = v1240;
                                                                  goto LABEL_1764;
                                                                }
                                                                v1239 = GetLastError();
                                                                v1118 = v1239;
                                                                if ( v1239 <= 0 )
                                                                {
LABEL_1753:
                                                                  v1240 = v1755;
                                                                  if ( v1118 >= 0 )
                                                                  {
                                                                    v1118 = -2147467259;
                                                                    goto LABEL_1755;
                                                                  }
LABEL_1764:
                                                                  if ( v1118 == -805306333 )
                                                                  {
                                                                    v1235 = v1658;
                                                                    v1118 = -2147024774;
                                                                    v90 = 4LL;
                                                                    goto LABEL_1913;
                                                                  }
LABEL_1755:
                                                                  v1235 = v1658;
                                                                  v90 = 4LL;
                                                                  if ( v1118 < 0 )
                                                                    goto LABEL_1913;
                                                                  v1768 = 0;
                                                                  v1241 = 0LL;
                                                                  v1886 = v1658;
                                                                  if ( v1240 < 4 )
                                                                  {
                                                                    v1242 = -1073741762;
LABEL_1790:
                                                                    v1266 = 0LL;
                                                                    goto LABEL_1791;
                                                                  }
                                                                  v1455 = *v1658;
                                                                  v1242 = RtlULongLongAdd(v1658, 4LL, &v1886);
                                                                  if ( v1242 < 0 )
                                                                    goto LABEL_1790;
                                                                  v1242 = RtlUIntAdd(0LL, (unsigned int)v90, &v1768);
                                                                  if ( v1242 < 0 )
                                                                  {
LABEL_1789:
                                                                    v1235 = v1658;
                                                                    goto LABEL_1790;
                                                                  }
                                                                  if ( v1245 - v1768 >= (unsigned int)v1246 )
                                                                  {
                                                                    v1414 = v1886;
                                                                    v1596 = v1246;
                                                                    v1242 = RtlULongLongAdd(
                                                                              v1886,
                                                                              (unsigned int)v1246,
                                                                              &v1886);
                                                                    if ( v1242 < 0 )
                                                                      goto LABEL_1788;
                                                                    v1242 = RtlUIntAdd(v1248, v1247, &v1768);
                                                                    if ( v1242 < 0 )
                                                                      goto LABEL_1788;
                                                                    if ( v1249 - v1768 >= 4 )
                                                                    {
                                                                      v1534 = *(_DWORD *)v1886;
                                                                      v1242 = RtlULongLongAdd(v1886, 4LL, &v1886);
                                                                      if ( v1242 < 0 )
                                                                        goto LABEL_1788;
                                                                      v1242 = RtlUIntAdd(v1250, 4LL, &v1768);
                                                                      if ( v1242 < 0 )
                                                                        goto LABEL_1788;
                                                                      if ( v1251 - v1768 >= v1252 )
                                                                      {
                                                                        v1662 = v1886;
                                                                        v1242 = RtlULongLongAdd(v1886, v1252, &v1886);
                                                                        if ( v1242 < 0 )
                                                                          goto LABEL_1788;
                                                                        v1242 = RtlUIntAdd(v1254, v1253, &v1768);
                                                                        if ( v1242 < 0 )
                                                                          goto LABEL_1788;
                                                                        if ( v1255 - v1768 >= 4 )
                                                                        {
                                                                          v1580 = *(_DWORD *)v1886;
                                                                          v1242 = RtlULongLongAdd(v1886, 4LL, &v1886);
                                                                          if ( v1242 < 0 )
                                                                            goto LABEL_1788;
                                                                          v1242 = RtlUIntAdd(v1768, 4LL, &v1768);
                                                                          if ( v1242 < 0 )
                                                                            goto LABEL_1788;
                                                                          if ( v1256 - v1768 >= v1257 )
                                                                          {
                                                                            v1242 = RtlUIntAdd(v1768, v1257, &v1768);
                                                                            if ( v1242 < 0 )
                                                                            {
LABEL_1788:
                                                                              v90 = 4LL;
                                                                              goto LABEL_1789;
                                                                            }
                                                                            if ( v1258 == v1768
                                                                              && (unsigned int)(v1260 + v1259 + v1455)
                                                                               + 12LL == v1258 )
                                                                            {
                                                                              v1261 = GetProcessHeap();
                                                                              v1262 = HeapAlloc(v1261, 8u, 0x30uLL);
                                                                              v1263 = v1262;
                                                                              if ( !v1262 )
                                                                              {
                                                                                v1242 = -1073741801;
LABEL_1820:
                                                                                if ( v1242 >= 0 )
                                                                                {
                                                                                  v1235 = v1658;
                                                                                  v1266 = v1241;
                                                                                  lpModuleNamep = v1241;
                                                                                  v90 = 4LL;
LABEL_1791:
                                                                                  v1118 = v1242 | 0x10000000;
                                                                                  if ( v1118 < 0 )
                                                                                    goto LABEL_1913;
                                                                                  v1887 = 0LL;
                                                                                  v1888 = 0LL;
                                                                                  if ( !v1266
                                                                                    || (v1267 = (unsigned __int8 *)*((_QWORD *)v1266 + 1),
                                                                                        (v1415 = (SIZE_T)v1267) == 0)
                                                                                    || (v1268 = *(unsigned int *)v1266,
                                                                                        !(_DWORD)v1268) )
                                                                                  {
                                                                                    v1118 = -805306355;
                                                                                    goto LABEL_1913;
                                                                                  }
                                                                                  v1269 = v1268 - 8;
                                                                                  v1597 = v1268 - 8;
                                                                                  v1270 = operator new(v1268 - 8);
                                                                                  v1662 = v1270;
                                                                                  v1271 = (int *)v1270;
                                                                                  if ( !v1270 )
                                                                                    goto LABEL_1857;
                                                                                  v1272 = v1267;
                                                                                  v1979 = 0x7F1137FAB69605ELL;
                                                                                  v1273 = 0;
                                                                                  v1785 = 0;
                                                                                  v1274 = v1270;
                                                                                  v1275 = 0;
                                                                                  v1276 = 0;
                                                                                  v1277 = v1269 & 7;
                                                                                  if ( (v1269 & 7) != 0 )
                                                                                  {
                                                                                    v1770 = -1;
                                                                                    v1659 = 0;
                                                                                    v1278 = 56;
                                                                                    do
                                                                                    {
                                                                                      v1279 = *v1272++;
                                                                                      if ( v1276 >= 4 )
                                                                                        v1659 |= v1279 << v1278;
                                                                                      else
                                                                                        v1275 |= v1279 << (v1278 - 32);
                                                                                      ++v1276;
                                                                                      v1278 -= 8;
                                                                                    }
                                                                                    while ( v1276 < (int)v1277 );
                                                                                    v1535 = v1275;
                                                                                    v1275 ^= 0x92F65A5u;
                                                                                    v1294 = v1659 ^ 0x699A899C;
                                                                                    v1785 = v1275;
                                                                                    v1770 = v1659 ^ 0x699A899C;
                                                                                    v1295 = 0;
                                                                                    if ( (v1269 & 7) != 0 )
                                                                                    {
                                                                                      do
                                                                                      {
                                                                                        v1663 = v1274 + 1;
                                                                                        if ( v1295 >= 4 )
                                                                                        {
                                                                                          v1294 = __ROL4__(v1294, 8);
                                                                                          v1296 = v1294;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v1275 = __ROL4__(v1275, 8);
                                                                                          v1296 = v1275;
                                                                                        }
                                                                                        *v1274 = v1296;
                                                                                        ++v1295;
                                                                                        v1274 = v1663;
                                                                                      }
                                                                                      while ( v1295 < (int)v1277 );
                                                                                      v1275 = v1785;
                                                                                      v1294 = v1770;
                                                                                    }
                                                                                    if ( v1277 <= 4 )
                                                                                    {
                                                                                      v1276 = 0;
                                                                                      v1770 = 0;
                                                                                      if ( v1277 < 4 )
                                                                                      {
                                                                                        v1275 = v1275 >> (8 * (4 - v1277)) << (8 * (4 - v1277));
                                                                                        v1785 = v1275;
                                                                                      }
                                                                                      goto LABEL_1843;
                                                                                    }
                                                                                    v1276 = v1294 >> (8 * (8 - v1277)) << (8 * (8 - v1277));
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v1535 = 0;
                                                                                  }
                                                                                  v1770 = v1276;
LABEL_1843:
                                                                                  v1663 = (char *)(v1269 >> 3);
                                                                                  if ( v1269 >> 3 )
                                                                                  {
                                                                                    v1297 = HIDWORD(v1979);
                                                                                    v1298 = v1274 + 7;
                                                                                    v1299 = v1663;
                                                                                    v1300 = v1272 + 2;
                                                                                    v1301 = v1535;
                                                                                    v1581 = WORD2(v1979);
                                                                                    v1642 = WORD1(v1979);
                                                                                    v1302 = HIWORD(HIDWORD(v1979));
                                                                                    do
                                                                                    {
                                                                                      v1303 = *(v1300 - 1);
                                                                                      v1304 = *(v1300 - 2);
                                                                                      v1305 = v1300[2];
                                                                                      v1300 += 8;
                                                                                      v1306 = *(v1300 - 7) | ((*(v1300 - 8) | ((v1303 | (v1304 << 8)) << 8)) << 8);
                                                                                      v1307 = v1306 ^ v1275;
                                                                                      v1308 = *(v1300 - 3) | ((*(v1300 - 4) | ((*(v1300 - 5) | (v1305 << 8)) << 8)) << 8);
                                                                                      v1309 = v1307 ^ v1308 ^ v1276 ^ v1297 ^ 0xAB69605E;
                                                                                      v1310 = (__ROL4__(v1309, 10)
                                                                                             + v1581
                                                                                             * __ROL4__(
                                                                                                 v1309 + 1419157410,
                                                                                                 5)) ^ v1307;
                                                                                      v1311 = (WORD1(v1979)
                                                                                             * __ROR4__(
                                                                                                 v1310 + v1297,
                                                                                                 9)
                                                                                             - __ROL4__(v1310, 2)) ^ v1309;
                                                                                      v1312 = (24670 * (v1311 - v1581)
                                                                                             - (v1311 >> 13)) ^ v1310;
                                                                                      v1313 = (v1302
                                                                                             * __ROL4__(
                                                                                                 WORD1(v1979) ^ v1312,
                                                                                                 6)
                                                                                             - __ROL4__(v1312, 2)) ^ v1311;
                                                                                      v1314 = (v1297
                                                                                             - (v1313 ^ 0xAB69605E)) ^ v1312;
                                                                                      v1315 = (v1642 * (v1581 ^ v1314)) ^ __ROR4__(v1314, 6) ^ v1313;
                                                                                      v1316 = (__ROL4__(v1315, 2)
                                                                                             + 24670
                                                                                             * __ROR4__(
                                                                                                 v1315 + v1297,
                                                                                                 15)) ^ v1314;
                                                                                      v1317 = (v1302
                                                                                             * __ROR4__(
                                                                                                 v1316 + 1419157410,
                                                                                                 14)
                                                                                             - __ROL4__(v1316, 8)) ^ v1315;
                                                                                      v1318 = __ROR4__(v1317, 10) ^ (v1581 * __ROR4__(v1317 ^ 0xAB69605E, 12)) ^ v1316;
                                                                                      v1319 = (v1318 >> 10) ^ (WORD1(v1979) * (v1318 ^ v1302)) ^ v1317;
                                                                                      v1320 = (v1302
                                                                                             * (__ROR4__(~v1319, 5)
                                                                                              + 24670)) ^ v1318;
                                                                                      v1321 = (v1320 - v1302) ^ 0xAB69605E ^ v1319;
                                                                                      v1322 = ((v1321 >> 2)
                                                                                             + v1581
                                                                                             * __ROL4__(
                                                                                                 v1321 ^ v1302,
                                                                                                 2)) ^ v1320;
                                                                                      v1323 = (__ROL4__(v1322, 7)
                                                                                             + WORD1(v1979)
                                                                                             * __ROR4__(
                                                                                                 v1322 - v1297,
                                                                                                 6)) ^ v1321;
                                                                                      v1324 = (24670 * (v1581 ^ v1323)
                                                                                             + __ROR4__(v1323, 9)) ^ v1322;
                                                                                      v1325 = (__ROL4__(v1324, 7)
                                                                                             + v1302
                                                                                             * __ROL4__(
                                                                                                 WORD1(v1979) ^ v1324,
                                                                                                 5)) ^ v1323;
                                                                                      v1326 = v1297 ^ v1324 ^ v1325 ^ 0xAB69605E;
                                                                                      v1327 = (v1581
                                                                                             * (__ROR4__(v1326, 3)
                                                                                              - WORD1(v1979))) ^ v1325;
                                                                                      v1298 += 8;
                                                                                      v1328 = (24670
                                                                                             * __ROR4__(
                                                                                                 v1327 - v1297,
                                                                                                 1)
                                                                                             - __ROR4__(v1327, 6)) ^ v1326;
                                                                                      v1329 = (__ROL4__(v1328, 14)
                                                                                             + v1302
                                                                                             * __ROL4__(
                                                                                                 v1328 - 1419157410,
                                                                                                 3)) ^ v1327;
                                                                                      v1330 = (v1581
                                                                                             * __ROL4__(
                                                                                                 v1329 - 1419157410,
                                                                                                 15)
                                                                                             - __ROR4__(v1329, 14)) ^ v1328;
                                                                                      v1331 = (v1330 >> 3) ^ (WORD1(v1979) * (v1330 ^ 0x605E)) ^ v1329;
                                                                                      v1770 = v1659 ^ v1331;
                                                                                      v1659 = v1308;
                                                                                      v1332 = v1301 ^ __ROL4__(v1331, 2) ^ (24670 * __ROL4__(v1297 ^ v1331, 4));
                                                                                      v1301 = v1306;
                                                                                      v1785 = v1332 ^ v1330;
                                                                                      *(v1298 - 12) = v1332 ^ v1330;
                                                                                      v1785 = __ROR4__(v1785, 8);
                                                                                      *(v1298 - 8) = v1770;
                                                                                      v1770 = __ROR4__(v1770, 8);
                                                                                      *(v1298 - 13) = v1785;
                                                                                      v1785 = __ROR4__(v1785, 8);
                                                                                      *(v1298 - 9) = v1770;
                                                                                      v1770 = __ROR4__(v1770, 8);
                                                                                      *(v1298 - 14) = v1785;
                                                                                      v1785 = __ROR4__(v1785, 8);
                                                                                      *(v1298 - 10) = v1770;
                                                                                      v1770 = __ROR4__(v1770, 8);
                                                                                      *(v1298 - 15) = v1785;
                                                                                      *(v1298 - 11) = v1770;
                                                                                      v1275 = __ROR4__(v1785, 8);
                                                                                      v1276 = __ROR4__(v1770, 8);
                                                                                      v1785 = v1275;
                                                                                      v1770 = v1276;
                                                                                      --v1299;
                                                                                    }
                                                                                    while ( v1299 );
                                                                                    v1 = v1801;
                                                                                    v89 = v1599;
                                                                                    v1269 = v1597;
                                                                                    v1271 = (int *)v1662;
                                                                                    v1273 = 0;
                                                                                    v2 = (_DWORD *)((char *)v1801 + 192);
                                                                                  }
                                                                                  v1333 = 0LL;
                                                                                  if ( v1269 )
                                                                                  {
                                                                                    if ( v1269 >= 0x20 )
                                                                                    {
                                                                                      v1334 = 0LL;
                                                                                      v1335 = 0LL;
                                                                                      do
                                                                                      {
                                                                                        v1334 = _mm_xor_si128(
                                                                                                  _mm_loadu_si128((const __m128i *)((char *)v1271 + v1333)),
                                                                                                  v1334);
                                                                                        v1336 = _mm_loadu_si128((const __m128i *)((char *)v1271 + v1333 + 16));
                                                                                        v1333 += 32LL;
                                                                                        v1337 = _mm_xor_si128(
                                                                                                  v1336,
                                                                                                  v1335);
                                                                                        v1335 = v1337;
                                                                                      }
                                                                                      while ( v1333 < (v1269 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                                                      v1338 = _mm_xor_si128(
                                                                                                v1334,
                                                                                                v1337);
                                                                                      v1339 = _mm_xor_si128(
                                                                                                v1338,
                                                                                                _mm_srli_si128(v1338, 8));
                                                                                      v1340 = _mm_xor_si128(
                                                                                                v1339,
                                                                                                _mm_srli_si128(v1339, 4));
                                                                                      v1341 = _mm_xor_si128(
                                                                                                v1340,
                                                                                                _mm_srli_si128(v1340, 2));
                                                                                      v1273 = _mm_cvtsi128_si32(
                                                                                                _mm_xor_si128(
                                                                                                  v1341,
                                                                                                  _mm_srli_si128(
                                                                                                    v1341,
                                                                                                    1)));
                                                                                    }
                                                                                    for ( ; v1333 < v1269; ++v1333 )
                                                                                      v1273 ^= *((_BYTE *)v1271 + v1333);
                                                                                  }
                                                                                  if ( v1273 == *(_QWORD *)(v1269 + v1415) )
                                                                                  {
                                                                                    v1342 = v1271;
                                                                                    v1477 = v1271;
                                                                                    v90 = 4LL;
                                                                                    v1888 = v1269;
                                                                                    v1887 = 0LL;
                                                                                    v1118 = 0x10000000;
                                                                                    HIDWORD(v1755) = v1269;
                                                                                    goto LABEL_1860;
                                                                                  }
                                                                                  operator delete(v1271);
LABEL_1857:
                                                                                  v1343 = v1887;
                                                                                  v90 = 4LL;
                                                                                  v1118 = -805306367;
                                                                                  if ( v1887 )
                                                                                  {
                                                                                    v1344 = GetProcessHeap();
                                                                                    HeapFree(v1344, 0, v1343);
                                                                                    v1887 = 0LL;
                                                                                    v90 = 4LL;
                                                                                  }
                                                                                  LODWORD(v1269) = HIDWORD(v1755);
                                                                                  v1342 = 0LL;
LABEL_1860:
                                                                                  if ( v1118 < 0 )
                                                                                  {
LABEL_1909:
                                                                                    v1235 = v1658;
                                                                                    v1213 = v1630;
                                                                                    goto LABEL_1915;
                                                                                  }
                                                                                  v1771[0] = 0;
                                                                                  v1889 = v1342;
                                                                                  if ( (unsigned int)v1269 < 4 )
                                                                                  {
                                                                                    v1345 = -1073741762;
LABEL_1908:
                                                                                    v1118 = v1345 | 0x10000000;
                                                                                    goto LABEL_1909;
                                                                                  }
                                                                                  v1456 = *v1342;
                                                                                  v1345 = RtlULongLongAdd(
                                                                                            v1342,
                                                                                            4LL,
                                                                                            &v1889);
                                                                                  if ( v1345 >= 0 )
                                                                                  {
                                                                                    v1345 = RtlUIntAdd(0LL, 4LL, v1771);
                                                                                    if ( v1345 >= 0 )
                                                                                    {
                                                                                      if ( (unsigned int)(v1269 - v1771[0]) < 4 )
                                                                                        goto LABEL_1905;
                                                                                      v1345 = RtlULongLongAdd(
                                                                                                v1889,
                                                                                                4LL,
                                                                                                &v1889);
                                                                                      if ( v1345 < 0 )
                                                                                        goto LABEL_1906;
                                                                                      v1345 = RtlUIntAdd(
                                                                                                v1346,
                                                                                                4LL,
                                                                                                v1771);
                                                                                      if ( v1345 >= 0 )
                                                                                      {
                                                                                        if ( (int)v1269 - v1771[0] >= v1347 )
                                                                                        {
                                                                                          v1345 = RtlUIntAdd(
                                                                                                    v1771[0],
                                                                                                    v1347,
                                                                                                    v1771);
                                                                                          if ( v1345 >= 0 )
                                                                                          {
                                                                                            v1342 = v1477;
                                                                                            v1350 = (unsigned int)v1348;
                                                                                            v1351 = (unsigned int)v1269;
                                                                                            v1352 = v1889;
                                                                                            if ( (char *)v1477 + v1351 < (char *)v1889 + v1348
                                                                                              || (unsigned __int64)(v1351 + (char *)v1477 - (_BYTE *)v1889 - v1348) >= 8 )
                                                                                            {
                                                                                              v1345 = -1073741762;
                                                                                              v90 = 4LL;
                                                                                              goto LABEL_1908;
                                                                                            }
                                                                                            v1353 = 0LL;
                                                                                            v1354 = 0;
                                                                                            v1422 = 0LL;
                                                                                            v1345 = 0;
                                                                                            v1582 = 0;
                                                                                            if ( v1889 )
                                                                                            {
                                                                                              v1345 = RtlULongLongAdd(v1889, (unsigned int)v1348, &v1890);
                                                                                              if ( v1345 < 0 )
                                                                                              {
LABEL_1890:
                                                                                                v1342 = v1477;
                                                                                                goto LABEL_1899;
                                                                                              }
                                                                                              v1356 = v1890;
                                                                                              if ( (unsigned __int64)v1352 < v1890 )
                                                                                              {
                                                                                                while ( 1 )
                                                                                                {
                                                                                                  v1345 = RtlULongLongAdd(v1355, 4LL, &v1891);
                                                                                                  if ( v1345 < 0 )
                                                                                                    break;
                                                                                                  if ( v1891 > v1358 )
                                                                                                    goto LABEL_1884;
                                                                                                  v1359 = RtlUIntAdd(4LL, *v1357, v1772);
                                                                                                  v1345 = v1359;
                                                                                                  if ( v1359 >= 0 )
                                                                                                    v1361 = v1772[0];
                                                                                                  v1771[1] = v1361;
                                                                                                  if ( v1359 < 0 )
                                                                                                    break;
                                                                                                  v1345 = RtlULongLongAdd(v1360, v1361, &v1892);
                                                                                                  if ( v1345 < 0 )
                                                                                                    break;
                                                                                                  v1355 = v1892;
                                                                                                  if ( v1892 > v1356 )
                                                                                                  {
LABEL_1884:
                                                                                                    v1345 = -1073741811;
                                                                                                    v90 = 4LL;
                                                                                                    goto LABEL_1907;
                                                                                                  }
                                                                                                  v1354 = ++v1582;
                                                                                                  if ( v1892 >= v1356 )
                                                                                                  {
                                                                                                    LODWORD(v1348) = v1350;
                                                                                                    goto LABEL_1886;
                                                                                                  }
                                                                                                }
                                                                                                v1349 = v1456;
                                                                                                goto LABEL_1890;
                                                                                              }
                                                                                              v1354 = 0;
LABEL_1886:
                                                                                              v60 = v1355 == v1356;
                                                                                              v1342 = v1477;
                                                                                              if ( !v60 )
                                                                                              {
                                                                                                v1345 = -1073741811;
LABEL_1888:
                                                                                                v90 = 4LL;
                                                                                                goto LABEL_1908;
                                                                                              }
                                                                                              v1349 = v1456;
                                                                                              v1353 = 0LL;
                                                                                            }
                                                                                            if ( (_DWORD)v1348 )
                                                                                            {
                                                                                              v1362 = GetProcessHeap();
                                                                                              v1353 = HeapAlloc(v1362, 8u, v1350);
                                                                                              v1349 = v1456;
                                                                                              v1342 = v1477;
                                                                                              v1422 = (SIZE_T)v1353;
                                                                                              if ( !v1353 )
                                                                                              {
                                                                                                v1345 = -1073741801;
                                                                                                goto LABEL_1899;
                                                                                              }
                                                                                              v1354 = v1582;
                                                                                              v1345 = 0;
                                                                                              LODWORD(v1348) = v1350;
                                                                                            }
                                                                                            if ( v1352 )
                                                                                            {
                                                                                              memcpy_0(
                                                                                                v1353,
                                                                                                v1352,
                                                                                                v1350);
                                                                                              v1353 = (void *)v1422;
                                                                                              LODWORD(v1348) = v1350;
                                                                                              v1354 = v1582;
                                                                                              v1349 = v1456;
                                                                                              v1342 = v1477;
                                                                                            }
                                                                                            v1914 = v1353;
                                                                                            v1913 = __PAIR64__(v1348, v1354);
LABEL_1899:
                                                                                            if ( v1345 >= 0 )
                                                                                            {
                                                                                              v60 = v1349 == (_DWORD)v1913;
                                                                                              v90 = 4LL;
                                                                                              if ( !v60 )
                                                                                                v1345 = -1073741762;
                                                                                              goto LABEL_1908;
                                                                                            }
                                                                                            goto LABEL_1888;
                                                                                          }
LABEL_1906:
                                                                                          v90 = 4LL;
LABEL_1907:
                                                                                          v1342 = v1477;
                                                                                          goto LABEL_1908;
                                                                                        }
LABEL_1905:
                                                                                        v1345 = -1073741762;
                                                                                        goto LABEL_1906;
                                                                                      }
                                                                                      v1342 = v1477;
                                                                                    }
                                                                                  }
                                                                                  v90 = 4LL;
                                                                                  goto LABEL_1908;
                                                                                }
                                                                                if ( v1241 )
                                                                                {
                                                                                  v1419 = (void *)*((_QWORD *)v1241 + 1);
                                                                                  if ( v1419 )
                                                                                  {
                                                                                    v1292 = GetProcessHeap();
                                                                                    HeapFree(v1292, 0, v1419);
                                                                                    *((_QWORD *)v1241 + 1) = 0LL;
                                                                                  }
                                                                                  v1420 = (void *)*((_QWORD *)v1241 + 3);
                                                                                  if ( v1420 )
                                                                                  {
                                                                                    v1293 = GetProcessHeap();
                                                                                    HeapFree(v1293, 0, v1420);
                                                                                    *((_QWORD *)v1241 + 3) = 0LL;
                                                                                  }
                                                                                  v1421 = (void *)*((_QWORD *)v1241 + 5);
                                                                                  if ( v1421 )
                                                                                  {
                                                                                    v1264 = GetProcessHeap();
                                                                                    HeapFree(v1264, 0, v1421);
                                                                                    *((_QWORD *)v1241 + 5) = 0LL;
                                                                                  }
                                                                                  v1265 = GetProcessHeap();
                                                                                  HeapFree(v1265, 0, v1241);
                                                                                }
                                                                                goto LABEL_1788;
                                                                              }
                                                                              if ( v1414 )
                                                                              {
                                                                                *(_DWORD *)v1262 = v1455;
                                                                                v1280 = GetProcessHeap();
                                                                                v1281 = HeapAlloc(v1280, 8u, v1596);
                                                                                if ( !v1281 )
                                                                                  goto LABEL_1811;
                                                                                v1263[1] = v1281;
                                                                                memcpy_0(v1281, v1414, v1596);
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)v1262 = 0;
                                                                                v1262[1] = 0LL;
                                                                              }
                                                                              if ( v1662 )
                                                                              {
                                                                                *((_DWORD *)v1263 + 4) = v1534;
                                                                                v1282 = GetProcessHeap();
                                                                                v1283 = HeapAlloc(v1282, 8u, v1534);
                                                                                if ( !v1283 )
                                                                                  goto LABEL_1811;
                                                                                v1284 = v1662;
                                                                                v1263[3] = v1283;
                                                                                memcpy_0(v1283, v1284, v1534);
                                                                              }
                                                                              else
                                                                              {
                                                                                *((_DWORD *)v1263 + 4) = 0;
                                                                                v1263[3] = 0LL;
                                                                              }
                                                                              if ( !v1886 )
                                                                              {
                                                                                *((_DWORD *)v1263 + 8) = 0;
                                                                                v1263[5] = 0LL;
                                                                                goto LABEL_1819;
                                                                              }
                                                                              *((_DWORD *)v1263 + 8) = v1580;
                                                                              v1285 = GetProcessHeap();
                                                                              v1286 = HeapAlloc(v1285, 8u, v1580);
                                                                              if ( v1286 )
                                                                              {
                                                                                v1287 = v1886;
                                                                                v1263[5] = v1286;
                                                                                memcpy_0(v1286, v1287, v1580);
LABEL_1819:
                                                                                v1241 = (WCHAR *)v1263;
                                                                                v1242 = 0;
                                                                                goto LABEL_1820;
                                                                              }
LABEL_1811:
                                                                              v1416 = (void *)v1263[1];
                                                                              if ( v1416 )
                                                                              {
                                                                                v1288 = GetProcessHeap();
                                                                                HeapFree(v1288, 0, v1416);
                                                                                v1263[1] = 0LL;
                                                                              }
                                                                              v1417 = (void *)v1263[3];
                                                                              if ( v1417 )
                                                                              {
                                                                                v1289 = GetProcessHeap();
                                                                                HeapFree(v1289, 0, v1417);
                                                                                v1263[3] = 0LL;
                                                                              }
                                                                              v1418 = (void *)v1263[5];
                                                                              if ( v1418 )
                                                                              {
                                                                                v1290 = GetProcessHeap();
                                                                                HeapFree(v1290, 0, v1418);
                                                                                v1263[5] = 0LL;
                                                                              }
                                                                              v1291 = GetProcessHeap();
                                                                              HeapFree(v1291, 0, v1263);
                                                                              v1242 = -1073741801;
                                                                              goto LABEL_1820;
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                  v1242 = -1073741762;
                                                                  goto LABEL_1788;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1239 = GetLastError();
                                                                v1118 = v1239;
                                                                if ( v1239 <= 0 )
                                                                  goto LABEL_1753;
                                                              }
                                                              v1118 = (unsigned __int16)v1239 | 0x80070000;
                                                              goto LABEL_1753;
                                                            }
                                                          }
                                                          else
                                                          {
LABEL_1738:
                                                            v1118 = -1073741811;
                                                          }
LABEL_1739:
                                                          v90 = 4LL;
                                                          goto LABEL_1740;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              v1214 = GetProcessHeap();
                                              HeapFree(v1214, 0, v1413);
                                            }
                                            else
                                            {
                                              v1206 = -1073741801;
                                            }
                                            v1207 = v1452;
                                            v90 = 4LL;
                                          }
                                          v1213 = 0LL;
                                          goto LABEL_1694;
                                        }
LABEL_1910:
                                        v1235 = 0LL;
                                        v1213 = 0LL;
                                        goto LABEL_1914;
                                      }
                                      v1871 = v1185;
LABEL_1661:
                                      v1185 = 0LL;
                                      goto LABEL_1662;
                                    }
                                  }
                                }
                                v1193 = (void *)*((_QWORD *)v1185 + 1);
                                if ( v1193 )
                                {
                                  v1194 = GetProcessHeap();
                                  HeapFree(v1194, 0, v1193);
                                  *((_QWORD *)v1185 + 1) = 0LL;
                                }
                                v1195 = (void *)*((_QWORD *)v1185 + 3);
                                if ( v1195 )
                                {
                                  v1196 = GetProcessHeap();
                                  HeapFree(v1196, 0, v1195);
                                  *((_QWORD *)v1185 + 3) = 0LL;
                                }
                                v1197 = (void *)*((_QWORD *)v1185 + 5);
                                if ( v1197 )
                                {
                                  v1198 = GetProcessHeap();
                                  HeapFree(v1198, 0, v1197);
                                  *((_QWORD *)v1185 + 5) = 0LL;
                                }
                                v1199 = GetProcessHeap();
                                HeapFree(v1199, 0, v1185);
                              }
                              v1185 = 0LL;
                              v1119 = -1073741801;
                              goto LABEL_1657;
                            }
                            v90 = 4LL;
                          }
                          v1119 = -1073741823;
                          goto LABEL_1661;
                        }
                      }
                    }
LABEL_1959:
                    v1389 = *(void **)&v1900[1];
                    v1900[0] = 0;
                    v1899 = 0;
                    if ( *(_QWORD *)&v1900[1] )
                    {
                      v1390 = GetProcessHeap();
                      HeapFree(v1390, 0, v1389);
                      *(_QWORD *)&v1900[1] = 0LL;
                      v90 = 4LL;
                    }
                    v1391 = v1914;
                    v1913 = 0LL;
                    if ( v1914 )
                    {
                      v1392 = GetProcessHeap();
                      HeapFree(v1392, 0, v1391);
                      v1914 = 0LL;
                      v90 = 4LL;
                    }
                    if ( v1614 )
                    {
                      v1393 = GetProcessHeap();
                      HeapFree(v1393, 0, v1614);
                      v90 = 4LL;
                    }
                    if ( !v1649 )
                      goto LABEL_1968;
                    v1394 = GetProcessHeap();
                    HeapFree(v1394, 0, v1649);
                    goto LABEL_1967;
                  }
                  v1094 = *(unsigned int **)&v1900[1];
                  v1868 = *(unsigned int **)&v1900[1];
                  if ( !v1093 )
                  {
LABEL_1582:
                    if ( (int)RtlULongLongAdd(v1094, 4LL, &v1897) < 0
                      || (unsigned __int64)v1097 + v1098 + 4 > *(_QWORD *)&v1900[1] + (unsigned __int64)v1900[0] )
                    {
                      goto LABEL_1959;
                    }
                    v1099 = v1897;
                    *v1097 = v1098;
                    memcpy_0(v1099, v1629, v1098);
                    v90 = 4LL;
                    goto LABEL_1585;
                  }
                  while ( (int)RtlUIntAdd(4LL, *v1094, &v1747) >= 0 )
                  {
                    v1746 = v1747;
                    if ( (int)RtlULongLongAdd(v1095, v1747, &v1868) < 0 )
                      goto LABEL_1958;
                    v1094 = v1868;
                    if ( v1096 + 1 >= v1093 )
                      goto LABEL_1582;
                  }
LABEL_1602:
                  v90 = v1088;
                  goto LABEL_1959;
                }
                v504 = off_1801B5098[0]();
                v505 = dword_1801B71C0;
                qword_1801B7258 = v504;
                v1519 = dword_1801B71C0;
                memset_0(&v1961, 0, 0x70uLL);
                v1628 = 0LL;
                v1905 = 0LL;
                v1906 = 0LL;
                v1718 = 1;
                memset_0(v1997, 0, 0x2CuLL);
                v1656 = 0LL;
                while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                  ;
                v506 = dword_1801B7260;
                if ( dword_1801B7260 )
                  goto LABEL_810;
                v1426 = 0;
                v1482 = 0;
                v1554 = 0;
                v1841 = 0LL;
                v1842 = 0LL;
                v507 = (WCHAR *)operator new(0x338uLL);
                lpModuleNamea = v507;
                if ( v507 )
                {
                  v508 = -1;
                  v1719 = 0;
                  v509 = 0;
                  v1720 = 0;
                  v510 = 0;
                  v511 = (char *)v507 + 7;
                  v512 = (char *)&unk_180165D32;
                  v513 = 103LL;
                  v514 = 0;
                  do
                  {
                    v515 = (unsigned __int8)*(v512 - 1);
                    v516 = (unsigned __int8)*(v512 - 2);
                    v517 = (unsigned __int8)v512[2];
                    v512 += 8;
                    v518 = (unsigned __int8)*(v512 - 7) | (((unsigned __int8)*(v512 - 8) | ((v515 | (v516 << 8)) << 8)) << 8);
                    v519 = v518 ^ v510;
                    v520 = (unsigned __int8)*(v512 - 3) | (((unsigned __int8)*(v512 - 4) | (((unsigned __int8)*(v512 - 5) | (v517 << 8)) << 8)) << 8);
                    v521 = v519 ^ v520 ^ v509 ^ 0xAC987321;
                    v522 = (__ROL4__(v521, 10) + 4991 * __ROL4__(v521 + 1419157410, 5)) ^ v519;
                    v523 = (43881 * __ROR4__(v522 + 133239679, 9) - __ROL4__(v522, 2)) ^ v521;
                    v524 = (24670 * v523 - (v523 >> 13) - 123127970) ^ v522;
                    v525 = (2033 * __ROL4__(v524 ^ 0xAB69, 6) - __ROL4__(v524, 2)) ^ v523;
                    v526 = (133239679 - (v525 ^ 0xAB69605E)) ^ v524;
                    v527 = (43881 * (v526 ^ 0x137F)) ^ __ROR4__(v526, 6) ^ v525;
                    v528 = (__ROL4__(v527, 2) + 24670 * __ROR4__(v527 + 133239679, 15)) ^ v526;
                    v529 = (2033 * __ROR4__(v528 + 1419157410, 14) - __ROL4__(v528, 8)) ^ v527;
                    v530 = __ROR4__(v529, 10) ^ (4991 * __ROR4__(v529 ^ 0xAB69605E, 12)) ^ v528;
                    v531 = (v530 >> 10) ^ (43881 * (v530 ^ 0x7F1)) ^ v529;
                    v532 = (2033 * (__ROR4__(~v531, 5) + 24670)) ^ v530;
                    v533 = v531 ^ (v532 - 2033) ^ 0xAB69605E;
                    v534 = ((v533 >> 2) + 4991 * __ROL4__(v531 ^ (v532 - 2033) ^ 0xAB6967AF, 2)) ^ v532;
                    v535 = (__ROL4__(v534, 7) + 43881 * __ROR4__(v534 - 133239679, 6)) ^ v533;
                    v536 = (24670 * (v535 ^ 0x137F) + __ROR4__(v535, 9)) ^ v534;
                    v537 = (__ROL4__(v536, 7) + 2033 * __ROL4__(v536 ^ 0xAB69, 5)) ^ v535;
                    v538 = v536 ^ v537 ^ 0xAC987321;
                    v539 = (4991 * __ROR4__(v538, 3) - 219010071) ^ v537;
                    v540 = (24670 * __ROR4__(v539 - 133239679, 1) - __ROR4__(v539, 6)) ^ v538;
                    v541 = (__ROL4__(v540, 14) + 2033 * __ROL4__(v540 - 1419157410, 3)) ^ v539;
                    v542 = (4991 * __ROL4__(v541 - 1419157410, 15) - __ROR4__(v541, 14)) ^ v540;
                    v511 += 8;
                    v543 = (v542 >> 3) ^ (43881 * (v542 ^ 0x605E)) ^ v541;
                    v1719 = v508 ^ v543;
                    v508 = v520;
                    v544 = v514 ^ v542 ^ __ROL4__(v543, 2) ^ (24670 * __ROL4__(v543 ^ 0x7F1137F, 4));
                    v514 = v518;
                    v1720 = v544;
                    *(v511 - 12) = v544;
                    v1720 = __ROR4__(v1720, 8);
                    *(v511 - 8) = v1719;
                    v1719 = __ROR4__(v1719, 8);
                    *(v511 - 13) = v1720;
                    v1720 = __ROR4__(v1720, 8);
                    *(v511 - 9) = v1719;
                    v1719 = __ROR4__(v1719, 8);
                    *(v511 - 14) = v1720;
                    v1720 = __ROR4__(v1720, 8);
                    *(v511 - 10) = v1719;
                    v1719 = __ROR4__(v1719, 8);
                    *(v511 - 15) = v1720;
                    *(v511 - 11) = v1719;
                    v510 = __ROR4__(v1720, 8);
                    v509 = __ROR4__(v1719, 8);
                    v1720 = v510;
                    v1719 = v509;
                    --v513;
                  }
                  while ( v513 );
                  v1 = v1801;
                  v545 = 0LL;
                  v505 = v1519;
                  v546 = 0LL;
                  v89 = v1599;
                  v547 = 0LL;
                  v2 = (_DWORD *)((char *)v1801 + 192);
                  do
                  {
                    v546 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)lpModuleNamea + v545)), v546);
                    v548 = _mm_loadu_si128((const __m128i *)((char *)lpModuleNamea + v545 + 16));
                    v545 += 32LL;
                    v549 = _mm_xor_si128(v548, v547);
                    v547 = v549;
                  }
                  while ( v545 < 0x320 );
                  v550 = _mm_xor_si128(v549, v546);
                  v551 = _mm_xor_si128(v550, _mm_srli_si128(v550, 8));
                  v552 = _mm_xor_si128(v551, _mm_srli_si128(v551, 4));
                  v553 = _mm_xor_si128(v552, _mm_srli_si128(v552, 2));
                  for ( n = _mm_cvtsi128_si32(_mm_xor_si128(v553, _mm_srli_si128(v553, 1))); v545 < 0x338; ++v545 )
                    n ^= *((_BYTE *)lpModuleNamea + v545);
                  if ( n == 64LL )
                  {
                    v1841 = lpModuleNamea;
                    v1842 = 824LL;
                    *((_BYTE *)lpModuleNamea + 823) = 0;
                    memset_0(&unk_1801B77C0, 0, 0x60uLL);
                    v555 = lpModuleNamea;
                    if ( !*(_BYTE *)lpModuleNamea )
                    {
                      v556 = 0;
LABEL_801:
                      if ( v1841 )
                      {
                        v566 = GetProcessHeap();
                        HeapFree(v566, 0, v1841);
                        v556 = v1482;
                      }
                      if ( v556 < 0 )
                      {
                        v567 = (HMODULE *)&unk_1801B77C0;
                        v568 = 4LL;
                        lpModuleNamed = (LPCWSTR)&unk_1801B77C0;
                        v1459 = 4LL;
                        do
                        {
                          if ( *v567 )
                          {
                            FreeLibrary(*v567);
                            v567 = (HMODULE *)lpModuleNamed;
                            v568 = v1459;
                          }
                          v567 += 3;
                          --v568;
                          lpModuleNamed = (LPCWSTR)v567;
                          v1459 = v568;
                        }
                        while ( v568 );
                        memset_0(&unk_1801B77C0, 0, 0x60uLL);
                        qword_1801B50D0 = 0LL;
                        off_1801B5000[0] = sub_180140EE0;
                        off_1801B5008[0] = sub_180140EE0;
                        off_1801B5010[0] = sub_180140EE0;
                        off_1801B5018[0] = sub_180140EE0;
                        off_1801B5020[0] = sub_180140EE0;
                        off_1801B5028 = sub_180140EE0;
                        off_1801B5030[0] = sub_180140EE0;
                        off_1801B5038 = sub_180140EE0;
                        off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5050[0] = sub_180140EE0;
                        off_1801B5058[0] = sub_180140EE0;
                        off_1801B5060[0] = sub_180140EE0;
                        off_1801B5068[0] = sub_180140EE0;
                        off_1801B5070[0] = sub_180140EE0;
                        off_1801B5078 = sub_180140EE0;
                        off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5088[0] = sub_180140EE0;
                        off_1801B5090[0] = sub_180140EE0;
                        off_1801B5098[0] = sub_180140EE0;
                        off_1801B50A0[0] = sub_180140EE0;
                        off_1801B50A8[0] = sub_180140EE0;
                        off_1801B50B0[0] = sub_180140EE0;
                        off_1801B50B8[0] = sub_18004A5B0;
                        off_1801B50C0[0] = sub_180140EE0;
                        off_1801B50C8 = sub_180140EE0;
                        off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B50E0[0] = sub_180140EE0;
                        off_1801B50E8[0] = sub_180140EE0;
                        off_1801B50F0[0] = sub_180140EE0;
                        off_1801B50F8[0] = sub_180140EE0;
                        off_1801B5100 = sub_180140EE0;
                        off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5110[0] = sub_180140EE0;
                        off_1801B5118[0] = sub_180140EE0;
                        off_1801B5120[0] = sub_180140EE0;
                        off_1801B5128[0] = sub_180140EE0;
                        off_1801B5130[0] = sub_180140EE0;
                        off_1801B5138 = sub_180140EE0;
                        off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                        off_1801B5160[0] = sub_180140EE0;
                        off_1801B5168 = sub_180140EE0;
LABEL_811:
                        v1427 = 0;
                        v1483 = 0;
                        _InterlockedExchange(&dword_1801B78A0, 0);
                        v2044 = 0;
                        v1921 = 0LL;
                        v1922 = 0LL;
                        v1923 = 0LL;
                        v1915 = 0LL;
                        v1916 = 0LL;
                        v2045 = 0;
                        v1843 = 0LL;
                        while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                          ;
                        v569 = dword_1801B7260;
                        if ( dword_1801B7260 )
                          goto LABEL_859;
                        v1555 = 0;
                        v1432 = 0;
                        v1565 = 0;
                        v1844 = 0LL;
                        v1845 = 0LL;
                        v570 = (WCHAR *)operator new(0x338uLL);
                        lpModuleNamee = v570;
                        if ( v570 )
                        {
                          v571 = 0;
                          v1722 = 0;
                          v1721 = 0;
                          v572 = (char *)v570 + 7;
                          v573 = 0;
                          v574 = (char *)&unk_180165D32;
                          v575 = -1;
                          v576 = 0;
                          v577 = 103LL;
                          do
                          {
                            v578 = (unsigned __int8)*(v574 - 1);
                            v579 = (unsigned __int8)*(v574 - 2);
                            v580 = (unsigned __int8)v574[2];
                            v574 += 8;
                            v581 = (unsigned __int8)*(v574 - 7) | (((unsigned __int8)*(v574 - 8) | ((v578 | (v579 << 8)) << 8)) << 8);
                            v582 = v581 ^ v576;
                            v583 = (unsigned __int8)*(v574 - 3) | (((unsigned __int8)*(v574 - 4) | (((unsigned __int8)*(v574 - 5) | (v580 << 8)) << 8)) << 8);
                            v584 = v571 ^ v582 ^ v583 ^ 0xAC987321;
                            v585 = (__ROL4__(v584, 10) + 4991 * __ROL4__(v584 + 1419157410, 5)) ^ v582;
                            v586 = (43881 * __ROR4__(v585 + 133239679, 9) - __ROL4__(v585, 2)) ^ v584;
                            v587 = (24670 * v586 - (v586 >> 13) - 123127970) ^ v585;
                            v588 = (2033 * __ROL4__(v587 ^ 0xAB69, 6) - __ROL4__(v587, 2)) ^ v586;
                            v589 = (133239679 - (v588 ^ 0xAB69605E)) ^ v587;
                            v590 = (43881 * (v589 ^ 0x137F)) ^ __ROR4__(v589, 6) ^ v588;
                            v591 = (__ROL4__(v590, 2) + 24670 * __ROR4__(v590 + 133239679, 15)) ^ v589;
                            v592 = (2033 * __ROR4__(v591 + 1419157410, 14) - __ROL4__(v591, 8)) ^ v590;
                            v593 = __ROR4__(v592, 10) ^ (4991 * __ROR4__(v592 ^ 0xAB69605E, 12)) ^ v591;
                            v594 = (v593 >> 10) ^ (43881 * (v593 ^ 0x7F1)) ^ v592;
                            v595 = (2033 * (__ROR4__(~v594, 5) + 24670)) ^ v593;
                            v596 = v594 ^ (v595 - 2033) ^ 0xAB69605E;
                            v597 = ((v596 >> 2) + 4991 * __ROL4__(v594 ^ (v595 - 2033) ^ 0xAB6967AF, 2)) ^ v595;
                            v598 = (__ROL4__(v597, 7) + 43881 * __ROR4__(v597 - 133239679, 6)) ^ v596;
                            v599 = (24670 * (v598 ^ 0x137F) + __ROR4__(v598, 9)) ^ v597;
                            v600 = (__ROL4__(v599, 7) + 2033 * __ROL4__(v599 ^ 0xAB69, 5)) ^ v598;
                            v601 = v599 ^ v600 ^ 0xAC987321;
                            v602 = (4991 * __ROR4__(v601, 3) - 219010071) ^ v600;
                            v603 = (24670 * __ROR4__(v602 - 133239679, 1) - __ROR4__(v602, 6)) ^ v601;
                            v604 = (__ROL4__(v603, 14) + 2033 * __ROL4__(v603 - 1419157410, 3)) ^ v602;
                            v605 = (4991 * __ROL4__(v604 - 1419157410, 15) - __ROR4__(v604, 14)) ^ v603;
                            v572 += 8;
                            v606 = (v605 >> 3) ^ (43881 * (v605 ^ 0x605E)) ^ v604;
                            v1721 = v575 ^ v606;
                            v575 = v583;
                            v607 = v573 ^ __ROL4__(v606, 2) ^ (24670 * __ROL4__(v606 ^ 0x7F1137F, 4));
                            v573 = v581;
                            v1722 = v607 ^ v605;
                            *(v572 - 12) = v607 ^ v605;
                            v1722 = __ROR4__(v1722, 8);
                            *(v572 - 8) = v1721;
                            v1721 = __ROR4__(v1721, 8);
                            *(v572 - 13) = v1722;
                            v1722 = __ROR4__(v1722, 8);
                            *(v572 - 9) = v1721;
                            v1721 = __ROR4__(v1721, 8);
                            *(v572 - 14) = v1722;
                            v1722 = __ROR4__(v1722, 8);
                            *(v572 - 10) = v1721;
                            v1721 = __ROR4__(v1721, 8);
                            *(v572 - 15) = v1722;
                            *(v572 - 11) = v1721;
                            v576 = __ROR4__(v1722, 8);
                            v571 = __ROR4__(v1721, 8);
                            v1722 = v576;
                            v1721 = v571;
                            --v577;
                          }
                          while ( v577 );
                          v1 = v1801;
                          v608 = 0LL;
                          v609 = 0LL;
                          v505 = v1519;
                          v610 = 0LL;
                          v89 = v1599;
                          v2 = (_DWORD *)((char *)v1801 + 192);
                          do
                          {
                            v609 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)lpModuleNamee + v608)), v609);
                            v611 = _mm_loadu_si128((const __m128i *)((char *)lpModuleNamee + v608 + 16));
                            v608 += 32LL;
                            v612 = _mm_xor_si128(v611, v610);
                            v610 = v612;
                          }
                          while ( v608 < 0x320 );
                          v613 = _mm_xor_si128(v612, v609);
                          v614 = _mm_xor_si128(v613, _mm_srli_si128(v613, 8));
                          v615 = _mm_xor_si128(v614, _mm_srli_si128(v614, 4));
                          v616 = _mm_xor_si128(v615, _mm_srli_si128(v615, 2));
                          for ( ii = _mm_cvtsi128_si32(_mm_xor_si128(v616, _mm_srli_si128(v616, 1))); v608 < 0x338; ++v608 )
                            ii ^= *((_BYTE *)lpModuleNamee + v608);
                          if ( ii == 64LL )
                          {
                            v1844 = lpModuleNamee;
                            v1845 = 824LL;
                            *((_BYTE *)lpModuleNamee + 823) = 0;
                            memset_0(&unk_1801B77C0, 0, 0x60uLL);
                            v618 = lpModuleNamee;
                            if ( !*(_BYTE *)lpModuleNamee )
                            {
                              v619 = 0;
LABEL_850:
                              if ( v1844 )
                              {
                                v629 = GetProcessHeap();
                                HeapFree(v629, 0, v1844);
                                v619 = v1432;
                              }
                              if ( v619 < 0 )
                              {
                                v630 = (HMODULE *)&unk_1801B77C0;
                                v631 = 4LL;
                                lpModuleNameh = (LPCWSTR)&unk_1801B77C0;
                                v1461 = 4LL;
                                do
                                {
                                  if ( *v630 )
                                  {
                                    FreeLibrary(*v630);
                                    v630 = (HMODULE *)lpModuleNameh;
                                    v631 = v1461;
                                  }
                                  v630 += 3;
                                  --v631;
                                  lpModuleNameh = (LPCWSTR)v630;
                                  v1461 = v631;
                                }
                                while ( v631 );
                                memset_0(&unk_1801B77C0, 0, 0x60uLL);
                                qword_1801B50D0 = 0LL;
                                off_1801B5000[0] = sub_180140EE0;
                                off_1801B5008[0] = sub_180140EE0;
                                off_1801B5010[0] = sub_180140EE0;
                                off_1801B5018[0] = sub_180140EE0;
                                off_1801B5020[0] = sub_180140EE0;
                                off_1801B5028 = sub_180140EE0;
                                off_1801B5030[0] = sub_180140EE0;
                                off_1801B5038 = sub_180140EE0;
                                off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5050[0] = sub_180140EE0;
                                off_1801B5058[0] = sub_180140EE0;
                                off_1801B5060[0] = sub_180140EE0;
                                off_1801B5068[0] = sub_180140EE0;
                                off_1801B5070[0] = sub_180140EE0;
                                off_1801B5078 = sub_180140EE0;
                                off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5088[0] = sub_180140EE0;
                                off_1801B5090[0] = sub_180140EE0;
                                off_1801B5098[0] = sub_180140EE0;
                                off_1801B50A0[0] = sub_180140EE0;
                                off_1801B50A8[0] = sub_180140EE0;
                                off_1801B50B0[0] = sub_180140EE0;
                                off_1801B50B8[0] = sub_18004A5B0;
                                off_1801B50C0[0] = sub_180140EE0;
                                off_1801B50C8 = sub_180140EE0;
                                off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B50E0[0] = sub_180140EE0;
                                off_1801B50E8[0] = sub_180140EE0;
                                off_1801B50F0[0] = sub_180140EE0;
                                off_1801B50F8[0] = sub_180140EE0;
                                off_1801B5100 = sub_180140EE0;
                                off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5110[0] = sub_180140EE0;
                                off_1801B5118[0] = sub_180140EE0;
                                off_1801B5120[0] = sub_180140EE0;
                                off_1801B5128[0] = sub_180140EE0;
                                off_1801B5130[0] = sub_180140EE0;
                                off_1801B5138 = sub_180140EE0;
                                off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                off_1801B5160[0] = sub_180140EE0;
                                off_1801B5168 = sub_180140EE0;
LABEL_860:
                                _InterlockedExchange(&dword_1801B78A0, 0);
                                memset_0(&v1961, 0, 0x70uLL);
                                v1905 = 0LL;
                                v1521 = v505 & 0xF;
                                LOWORD(v2044) = (v505 >> 4) & 0xF;
                                HIWORD(v2044) = (v505 >> 8) & 0xF;
                                v2045 = (v505 >> 12) & 0xF;
                                lpModuleNamei = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50F8[0])(
                                                           0LL,
                                                           0LL,
                                                           1027LL);
                                v1556 = -1;
                                if ( !lpModuleNamei )
                                {
                                  v632 = GetLastError();
                                  v633 = v632;
                                  if ( v632 > 0 )
                                    v633 = (unsigned __int16)v632 | 0x80070000;
                                  if ( v633 >= 0 )
                                    v633 = -2147467259;
LABEL_1252:
                                  while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                                    ;
                                  v880 = dword_1801B7260;
                                  if ( dword_1801B7260 > 0 )
                                  {
                                    --dword_1801B7260;
                                    if ( v880 == 1 )
                                    {
                                      v881 = (HMODULE *)&unk_1801B77C0;
                                      v882 = 4LL;
                                      lpModuleNamej = (LPCWSTR)&unk_1801B77C0;
                                      v1468 = 4LL;
                                      do
                                      {
                                        if ( *v881 )
                                        {
                                          FreeLibrary(*v881);
                                          v881 = (HMODULE *)lpModuleNamej;
                                          v882 = v1468;
                                        }
                                        v881 += 3;
                                        --v882;
                                        lpModuleNamej = (LPCWSTR)v881;
                                        v1468 = v882;
                                      }
                                      while ( v882 );
                                      memset_0(&unk_1801B77C0, 0, 0x60uLL);
                                      qword_1801B50D0 = 0LL;
                                      off_1801B5000[0] = sub_180140EE0;
                                      off_1801B5008[0] = sub_180140EE0;
                                      off_1801B5010[0] = sub_180140EE0;
                                      off_1801B5018[0] = sub_180140EE0;
                                      off_1801B5020[0] = sub_180140EE0;
                                      off_1801B5028 = sub_180140EE0;
                                      off_1801B5030[0] = sub_180140EE0;
                                      off_1801B5038 = sub_180140EE0;
                                      off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5050[0] = sub_180140EE0;
                                      off_1801B5058[0] = sub_180140EE0;
                                      off_1801B5060[0] = sub_180140EE0;
                                      off_1801B5068[0] = sub_180140EE0;
                                      off_1801B5070[0] = sub_180140EE0;
                                      off_1801B5078 = sub_180140EE0;
                                      off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5088[0] = sub_180140EE0;
                                      off_1801B5090[0] = sub_180140EE0;
                                      off_1801B5098[0] = sub_180140EE0;
                                      off_1801B50A0[0] = sub_180140EE0;
                                      off_1801B50A8[0] = sub_180140EE0;
                                      off_1801B50B0[0] = sub_180140EE0;
                                      off_1801B50B8[0] = sub_18004A5B0;
                                      off_1801B50C0[0] = sub_180140EE0;
                                      off_1801B50C8 = sub_180140EE0;
                                      off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B50E0[0] = sub_180140EE0;
                                      off_1801B50E8[0] = sub_180140EE0;
                                      off_1801B50F0[0] = sub_180140EE0;
                                      off_1801B50F8[0] = sub_180140EE0;
                                      off_1801B5100 = sub_180140EE0;
                                      off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5110[0] = sub_180140EE0;
                                      off_1801B5118[0] = sub_180140EE0;
                                      off_1801B5120[0] = sub_180140EE0;
                                      off_1801B5128[0] = sub_180140EE0;
                                      off_1801B5130[0] = sub_180140EE0;
                                      off_1801B5138 = sub_180140EE0;
                                      off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                      off_1801B5160[0] = sub_180140EE0;
                                      off_1801B5168 = sub_180140EE0;
                                    }
                                  }
                                  _InterlockedExchange(&dword_1801B78A0, 0);
                                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1843);
                                  if ( v633 < 0 )
                                  {
LABEL_1461:
                                    if ( v1963 )
                                    {
                                      v999 = -1LL;
                                      do
                                        v60 = *((_WORD *)v1963 + ++v999) == 0;
                                      while ( !v60 );
                                      memset(v1963, 0, 2 * v999 + 2);
                                      operator delete(v1963);
                                      v1963 = 0LL;
                                    }
                                    if ( v1964 )
                                    {
                                      v1000 = -1LL;
                                      do
                                        v60 = *((_WORD *)v1964 + ++v1000) == 0;
                                      while ( !v60 );
                                      memset(v1964, 0, 2 * v1000 + 2);
                                      operator delete(v1964);
                                      v1964 = 0LL;
                                    }
                                    if ( v1965 )
                                    {
                                      v1001 = -1LL;
                                      do
                                        v60 = *((_WORD *)v1965 + ++v1001) == 0;
                                      while ( !v60 );
                                      memset(v1965, 0, 2 * v1001 + 2);
                                      operator delete(v1965);
                                      v1965 = 0LL;
                                    }
                                    if ( v1966 )
                                    {
                                      off_1801B5038();
                                      v1966 = 0LL;
                                    }
                                    if ( v1967 )
                                    {
                                      off_1801B5038();
                                      v1967 = 0LL;
                                    }
                                    if ( v1968 )
                                    {
                                      off_1801B5038();
                                      v1968 = 0LL;
                                    }
                                    while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                                      ;
                                    v1002 = dword_1801B7260;
                                    if ( dword_1801B7260 > 0 )
                                    {
                                      --dword_1801B7260;
                                      if ( v1002 == 1 )
                                      {
                                        v1003 = 4LL;
                                        v1004 = (HMODULE *)&unk_1801B77C0;
                                        v1611 = 4LL;
                                        do
                                        {
                                          if ( *v1004 )
                                          {
                                            FreeLibrary(*v1004);
                                            v1003 = v1611;
                                          }
                                          v1004 += 3;
                                          v1611 = --v1003;
                                        }
                                        while ( v1003 );
                                        memset_0(&unk_1801B77C0, 0, 0x60uLL);
                                        qword_1801B50D0 = 0LL;
                                        off_1801B5000[0] = sub_180140EE0;
                                        off_1801B5008[0] = sub_180140EE0;
                                        off_1801B5010[0] = sub_180140EE0;
                                        off_1801B5018[0] = sub_180140EE0;
                                        off_1801B5020[0] = sub_180140EE0;
                                        off_1801B5028 = sub_180140EE0;
                                        off_1801B5030[0] = sub_180140EE0;
                                        off_1801B5038 = sub_180140EE0;
                                        off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5050[0] = sub_180140EE0;
                                        off_1801B5058[0] = sub_180140EE0;
                                        off_1801B5060[0] = sub_180140EE0;
                                        off_1801B5068[0] = sub_180140EE0;
                                        off_1801B5070[0] = sub_180140EE0;
                                        off_1801B5078 = sub_180140EE0;
                                        off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5088[0] = sub_180140EE0;
                                        off_1801B5090[0] = sub_180140EE0;
                                        off_1801B5098[0] = sub_180140EE0;
                                        off_1801B50A0[0] = sub_180140EE0;
                                        off_1801B50A8[0] = sub_180140EE0;
                                        off_1801B50B0[0] = sub_180140EE0;
                                        off_1801B50B8[0] = sub_18004A5B0;
                                        off_1801B50C0[0] = sub_180140EE0;
                                        off_1801B50C8 = sub_180140EE0;
                                        off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B50E0[0] = sub_180140EE0;
                                        off_1801B50E8[0] = sub_180140EE0;
                                        off_1801B50F0[0] = sub_180140EE0;
                                        off_1801B50F8[0] = sub_180140EE0;
                                        off_1801B5100 = sub_180140EE0;
                                        off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5110[0] = sub_180140EE0;
                                        off_1801B5118[0] = sub_180140EE0;
                                        off_1801B5120[0] = sub_180140EE0;
                                        off_1801B5128[0] = sub_180140EE0;
                                        off_1801B5130[0] = sub_180140EE0;
                                        off_1801B5138 = sub_180140EE0;
                                        off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                        off_1801B5160[0] = sub_180140EE0;
                                        off_1801B5168 = sub_180140EE0;
                                      }
                                    }
                                    _InterlockedExchange(&dword_1801B78A0, 0);
                                    v1450 = dword_1801B71C0;
                                    v1005 = off_1801B5098[0]();
                                    v2041 = 0;
                                    v1612 = v1005 - qword_1801B7258;
                                    memset_0(v2042, 0, sizeof(v2042));
                                    while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                                      ;
                                    v1006 = dword_1801B7260;
                                    if ( dword_1801B7260 )
                                      goto LABEL_1536;
                                    v1532 = 0;
                                    v1578 = 0;
                                    v1605 = 0;
                                    v1860 = 0LL;
                                    v1861 = 0LL;
                                    v1007 = (WCHAR *)operator new(0x338uLL);
                                    v1646 = v1007;
                                    if ( v1007 )
                                    {
                                      v1008 = 0;
                                      v1732 = 0;
                                      v1009 = -1;
                                      v1733 = 0;
                                      v1010 = 0;
                                      v1011 = (char *)v1007 + 7;
                                      v1012 = 0;
                                      v1013 = (char *)&unk_180165D32;
                                      v1014 = 103LL;
                                      do
                                      {
                                        v1015 = (unsigned __int8)*(v1013 - 1);
                                        v1016 = (unsigned __int8)*(v1013 - 2);
                                        v1017 = (unsigned __int8)v1013[2];
                                        v1013 += 8;
                                        v1018 = (unsigned __int8)*(v1013 - 7) | (((unsigned __int8)*(v1013 - 8) | ((v1015 | (v1016 << 8)) << 8)) << 8);
                                        v1019 = v1018 ^ v1012;
                                        v1020 = (unsigned __int8)*(v1013 - 3) | (((unsigned __int8)*(v1013 - 4) | (((unsigned __int8)*(v1013 - 5) | (v1017 << 8)) << 8)) << 8);
                                        v1021 = v1019 ^ v1020 ^ v1010 ^ 0xAC987321;
                                        v1022 = (__ROL4__(v1021, 10) + 4991 * __ROL4__(v1021 + 1419157410, 5)) ^ v1019;
                                        v1023 = (43881 * __ROR4__(v1022 + 133239679, 9) - __ROL4__(v1022, 2)) ^ v1021;
                                        v1024 = (24670 * v1023 - (v1023 >> 13) - 123127970) ^ v1022;
                                        v1025 = (2033 * __ROL4__(v1024 ^ 0xAB69, 6) - __ROL4__(v1024, 2)) ^ v1023;
                                        v1026 = (133239679 - (v1025 ^ 0xAB69605E)) ^ v1024;
                                        v1027 = (43881 * (v1026 ^ 0x137F)) ^ __ROR4__(v1026, 6) ^ v1025;
                                        v1028 = (__ROL4__(v1027, 2) + 24670 * __ROR4__(v1027 + 133239679, 15)) ^ v1026;
                                        v1029 = (2033 * __ROR4__(v1028 + 1419157410, 14) - __ROL4__(v1028, 8)) ^ v1027;
                                        v1030 = __ROR4__(v1029, 10) ^ (4991 * __ROR4__(v1029 ^ 0xAB69605E, 12)) ^ v1028;
                                        v1031 = v1029 ^ (v1030 >> 10) ^ (43881 * (v1030 ^ 0x7F1));
                                        v1032 = (2033 * (__ROR4__(~v1031, 5) + 24670)) ^ v1030;
                                        v1033 = v1031 ^ (v1032 - 2033) ^ 0xAB69605E;
                                        v1034 = ((v1033 >> 2) + 4991 * __ROL4__(v1031 ^ (v1032 - 2033) ^ 0xAB6967AF, 2)) ^ v1032;
                                        v1035 = (__ROL4__(v1034, 7) + 43881 * __ROR4__(v1034 - 133239679, 6)) ^ v1033;
                                        v1036 = (24670 * (v1035 ^ 0x137F) + __ROR4__(v1035, 9)) ^ v1034;
                                        v1037 = (__ROL4__(v1036, 7) + 2033 * __ROL4__(v1036 ^ 0xAB69, 5)) ^ v1035;
                                        v1038 = v1036 ^ v1037 ^ 0xAC987321;
                                        v1039 = (4991 * __ROR4__(v1038, 3) - 219010071) ^ v1037;
                                        v1040 = (24670 * __ROR4__(v1039 - 133239679, 1) - __ROR4__(v1039, 6)) ^ v1038;
                                        v1041 = (__ROL4__(v1040, 14) + 2033 * __ROL4__(v1040 - 1419157410, 3)) ^ v1039;
                                        v1042 = (4991 * __ROL4__(v1041 - 1419157410, 15) - __ROR4__(v1041, 14)) ^ v1040;
                                        v1011 += 8;
                                        v1043 = (v1042 >> 3) ^ (43881 * (v1042 ^ 0x605E)) ^ v1041;
                                        v1732 = v1009 ^ v1043;
                                        v1009 = v1020;
                                        v1044 = v1008 ^ __ROL4__(v1043, 2) ^ (24670 * __ROL4__(v1043 ^ 0x7F1137F, 4));
                                        v1008 = v1018;
                                        v1733 = v1044 ^ v1042;
                                        *(v1011 - 12) = v1044 ^ v1042;
                                        v1733 = __ROR4__(v1733, 8);
                                        *(v1011 - 8) = v1732;
                                        v1732 = __ROR4__(v1732, 8);
                                        *(v1011 - 13) = v1733;
                                        v1733 = __ROR4__(v1733, 8);
                                        *(v1011 - 9) = v1732;
                                        v1732 = __ROR4__(v1732, 8);
                                        *(v1011 - 14) = v1733;
                                        v1733 = __ROR4__(v1733, 8);
                                        *(v1011 - 10) = v1732;
                                        v1732 = __ROR4__(v1732, 8);
                                        *(v1011 - 15) = v1733;
                                        *(v1011 - 11) = v1732;
                                        v1012 = __ROR4__(v1733, 8);
                                        v1010 = __ROR4__(v1732, 8);
                                        v1733 = v1012;
                                        v1732 = v1010;
                                        --v1014;
                                      }
                                      while ( v1014 );
                                      v1 = v1801;
                                      v1045 = 0LL;
                                      v1046 = v1646;
                                      v1047 = 0LL;
                                      v1048 = 0LL;
                                      v2 = (_DWORD *)((char *)v1801 + 192);
                                      do
                                      {
                                        v1047 = _mm_xor_si128(
                                                  _mm_loadu_si128((const __m128i *)((char *)v1646 + v1045)),
                                                  v1047);
                                        v1049 = _mm_loadu_si128((const __m128i *)((char *)v1646 + v1045 + 16));
                                        v1045 += 32LL;
                                        v1050 = _mm_xor_si128(v1049, v1048);
                                        v1048 = v1050;
                                      }
                                      while ( v1045 < 0x320 );
                                      v1051 = _mm_xor_si128(v1047, v1050);
                                      v1052 = _mm_xor_si128(v1051, _mm_srli_si128(v1051, 8));
                                      v1053 = _mm_xor_si128(v1052, _mm_srli_si128(v1052, 4));
                                      v1054 = _mm_xor_si128(v1053, _mm_srli_si128(v1053, 2));
                                      for ( jj = _mm_cvtsi128_si32(_mm_xor_si128(v1054, _mm_srli_si128(v1054, 1)));
                                            v1045 < 0x338;
                                            ++v1045 )
                                      {
                                        jj ^= *((_BYTE *)v1646 + v1045);
                                      }
                                      if ( jj == 64LL )
                                      {
                                        v1860 = v1646;
                                        v1861 = 824LL;
                                        *((_BYTE *)v1646 + 823) = 0;
                                        memset_0(&unk_1801B77C0, 0, 0x60uLL);
                                        if ( !*(_BYTE *)v1646 )
                                        {
                                          v1056 = 0;
                                          goto LABEL_1527;
                                        }
                                        do
                                        {
                                          v1057 = v1046;
                                          v1058 = -1LL;
                                          do
                                            v60 = v1046[++v1058] == 0;
                                          while ( !v60 );
                                          v1059 = &v1046[v1058];
                                          v1647 = (WCHAR *)((char *)&unk_1801B77C0 + 24 * v1605);
                                          if ( !GetModuleHandleExW(0, v1057, (HMODULE *)v1647) )
                                          {
                                            v1056 = -1073741702;
                                            v1578 = -1073741702;
                                            break;
                                          }
                                          v1060 = (HMODULE *)((char *)&unk_1801B77C0 + 24 * v1605);
                                          v1056 = 0;
                                          v1578 = 0;
                                          if ( **(_WORD **)v1647 == 23117 )
                                          {
                                            v1061 = *(int *)(*(_QWORD *)v1647 + 60LL);
                                            if ( (unsigned int)v1061 < 0x10000000 )
                                            {
                                              v1062 = *(_QWORD *)v1647 + v1061;
                                              if ( v1062 >= *(_QWORD *)v1647 )
                                              {
                                                if ( *(_DWORD *)v1062 == 17744 )
                                                {
                                                  if ( ((*(_WORD *)(v1062 + 24) - 267) & 0xFEFF) != 0 )
                                                  {
                                                    v1056 = -1073741811;
                                                    v1578 = -1073741811;
                                                  }
                                                  else
                                                  {
                                                    *(_QWORD *)(v1647 + 6) = *(_QWORD *)(v1062 + 136);
                                                    *((_DWORD *)v1647 + 2) = *(_DWORD *)(v1062 + 80);
                                                  }
                                                }
                                                else
                                                {
                                                  v1056 = -1073741701;
                                                  v1578 = -1073741701;
                                                }
                                              }
                                              else
                                              {
                                                v1056 = -1073741701;
                                                v1578 = -1073741701;
                                              }
                                            }
                                            else
                                            {
                                              v1056 = -1073741701;
                                              v1578 = -1073741701;
                                            }
                                          }
                                          else
                                          {
                                            v1056 = -1073741701;
                                            v1578 = -1073741701;
                                          }
                                          v1063 = *(_DWORD *)(v1059 + 1);
                                          v1064 = 0;
                                          v1046 = v1059 + 3;
                                          v1640 = v1063;
                                          for ( kk = 0; v1064 < v1640; kk = ++v1064 )
                                          {
                                            v1065 = (const CHAR *)v1046;
                                            v1066 = -1LL;
                                            do
                                              ++v1066;
                                            while ( *((_BYTE *)v1046 + v1066) );
                                            v1046 = (WCHAR *)((char *)v1046 + v1066 + 1);
                                            if ( v1056 >= 0 )
                                            {
                                              v1067 = GetProcAddress(*v1060, v1065);
                                              if ( !v1067 )
                                              {
                                                v1056 = v1578;
                                                goto LABEL_1527;
                                              }
                                              v1060 = (HMODULE *)((char *)&unk_1801B77C0 + 24 * v1605);
                                              off_1801B5000[v1532] = v1067;
                                              v1056 = v1578;
                                              v1064 = kk;
                                            }
                                            ++v1532;
                                          }
                                          ++v1605;
                                        }
                                        while ( *(_BYTE *)v1046 );
LABEL_1527:
                                        if ( v1860 )
                                        {
                                          v1068 = GetProcessHeap();
                                          HeapFree(v1068, 0, v1860);
                                          v1056 = v1578;
                                        }
                                        if ( v1056 < 0 )
                                        {
                                          v1069 = 4LL;
                                          v1070 = (HMODULE *)&unk_1801B77C0;
                                          v1648 = 4LL;
                                          do
                                          {
                                            if ( *v1070 )
                                            {
                                              FreeLibrary(*v1070);
                                              v1069 = v1648;
                                            }
                                            v1070 += 3;
                                            v1648 = --v1069;
                                          }
                                          while ( v1069 );
                                          memset_0(&unk_1801B77C0, 0, 0x60uLL);
                                          qword_1801B50D0 = 0LL;
                                          off_1801B5000[0] = sub_180140EE0;
                                          off_1801B5008[0] = sub_180140EE0;
                                          off_1801B5010[0] = sub_180140EE0;
                                          off_1801B5018[0] = sub_180140EE0;
                                          off_1801B5020[0] = sub_180140EE0;
                                          off_1801B5028 = sub_180140EE0;
                                          off_1801B5030[0] = sub_180140EE0;
                                          off_1801B5038 = sub_180140EE0;
                                          off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5050[0] = sub_180140EE0;
                                          off_1801B5058[0] = sub_180140EE0;
                                          off_1801B5060[0] = sub_180140EE0;
                                          off_1801B5068[0] = sub_180140EE0;
                                          off_1801B5070[0] = sub_180140EE0;
                                          off_1801B5078 = sub_180140EE0;
                                          off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5088[0] = sub_180140EE0;
                                          off_1801B5090[0] = sub_180140EE0;
                                          off_1801B5098[0] = sub_180140EE0;
                                          off_1801B50A0[0] = sub_180140EE0;
                                          off_1801B50A8[0] = sub_180140EE0;
                                          off_1801B50B0[0] = sub_180140EE0;
                                          off_1801B50B8[0] = sub_18004A5B0;
                                          off_1801B50C0[0] = sub_180140EE0;
                                          off_1801B50C8 = sub_180140EE0;
                                          off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B50E0[0] = sub_180140EE0;
                                          off_1801B50E8[0] = sub_180140EE0;
                                          off_1801B50F0[0] = sub_180140EE0;
                                          off_1801B50F8[0] = sub_180140EE0;
                                          off_1801B5100 = sub_180140EE0;
                                          off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5110[0] = sub_180140EE0;
                                          off_1801B5118[0] = sub_180140EE0;
                                          off_1801B5120[0] = sub_180140EE0;
                                          off_1801B5128[0] = sub_180140EE0;
                                          off_1801B5130[0] = sub_180140EE0;
                                          off_1801B5138 = sub_180140EE0;
                                          off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                          off_1801B5160[0] = sub_180140EE0;
                                          off_1801B5168 = sub_180140EE0;
                                          goto LABEL_1537;
                                        }
                                        v1006 = dword_1801B7260;
LABEL_1536:
                                        dword_1801B7260 = v1006 + 1;
LABEL_1537:
                                        _InterlockedExchange(&dword_1801B78A0, 0);
                                        v2042[0] = v1612;
                                        v2042[12] = v1450;
                                        v2041 = 1;
                                        v2042[4] = -1721306479;
                                        v2042[2] = 1;
                                        v2042[8] = 1;
                                        v2042[6] = 1;
                                        v2042[10] = 1;
                                        ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1801B50D0)(
                                          0LL,
                                          8225LL,
                                          4LL,
                                          &v2041);
                                        while ( _InterlockedCompareExchange(&dword_1801B78A0, 1, 0) )
                                          ;
                                        v1071 = dword_1801B7260;
                                        if ( dword_1801B7260 > 0 )
                                        {
                                          --dword_1801B7260;
                                          if ( v1071 == 1 )
                                          {
                                            v1072 = 4LL;
                                            v1073 = (HMODULE *)&unk_1801B77C0;
                                            v1613 = 4LL;
                                            do
                                            {
                                              if ( *v1073 )
                                              {
                                                FreeLibrary(*v1073);
                                                v1072 = v1613;
                                              }
                                              v1073 += 3;
                                              v1613 = --v1072;
                                            }
                                            while ( v1072 );
                                            memset_0(&unk_1801B77C0, 0, 0x60uLL);
                                            qword_1801B50D0 = 0LL;
                                            off_1801B5000[0] = sub_180140EE0;
                                            off_1801B5008[0] = sub_180140EE0;
                                            off_1801B5010[0] = sub_180140EE0;
                                            off_1801B5018[0] = sub_180140EE0;
                                            off_1801B5020[0] = sub_180140EE0;
                                            off_1801B5028 = sub_180140EE0;
                                            off_1801B5030[0] = sub_180140EE0;
                                            off_1801B5038 = sub_180140EE0;
                                            off_1801B5040[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5048 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5050[0] = sub_180140EE0;
                                            off_1801B5058[0] = sub_180140EE0;
                                            off_1801B5060[0] = sub_180140EE0;
                                            off_1801B5068[0] = sub_180140EE0;
                                            off_1801B5070[0] = sub_180140EE0;
                                            off_1801B5078 = sub_180140EE0;
                                            off_1801B5080 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5088[0] = sub_180140EE0;
                                            off_1801B5090[0] = sub_180140EE0;
                                            off_1801B5098[0] = sub_180140EE0;
                                            off_1801B50A0[0] = sub_180140EE0;
                                            off_1801B50A8[0] = sub_180140EE0;
                                            off_1801B50B0[0] = sub_180140EE0;
                                            off_1801B50B8[0] = sub_18004A5B0;
                                            off_1801B50C0[0] = sub_180140EE0;
                                            off_1801B50C8 = sub_180140EE0;
                                            off_1801B50D8 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B50E0[0] = sub_180140EE0;
                                            off_1801B50E8[0] = sub_180140EE0;
                                            off_1801B50F0[0] = sub_180140EE0;
                                            off_1801B50F8[0] = sub_180140EE0;
                                            off_1801B5100 = sub_180140EE0;
                                            off_1801B5108 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5110[0] = sub_180140EE0;
                                            off_1801B5118[0] = sub_180140EE0;
                                            off_1801B5120[0] = sub_180140EE0;
                                            off_1801B5128[0] = sub_180140EE0;
                                            off_1801B5130[0] = sub_180140EE0;
                                            off_1801B5138 = sub_180140EE0;
                                            off_1801B5140[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5148[0] = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5150 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5158 = CPolicyConfig::IsEmergencyCallBackModeEnabled;
                                            off_1801B5160[0] = sub_180140EE0;
                                            off_1801B5168 = sub_180140EE0;
                                          }
                                        }
                                        _InterlockedExchange(&dword_1801B78A0, 0);
                                        ((void (__fastcall *)(_QWORD, SIZE_T))off_1801B5160[0])(0LL, v1511);
                                        v1615 = (unsigned __int16 *)v1662;
                                        goto LABEL_1547;
                                      }
                                      operator delete(v1646);
                                    }
                                    v1056 = -1073741702;
                                    v1578 = -1073741702;
                                    goto LABEL_1527;
                                  }
                                  v883 = v1905;
                                  v1852 = v1905;
                                  memset_0(v1934, 0, 0x68uLL);
                                  v884 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1801B5050[0])(v1511, 7LL);
                                  v885 = v884
                                      && ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                           v884,
                                           104LL,
                                           v1934)
                                      && v1937 == 32
                                      && v1938
                                      && v1935 > 0
                                      && v1936 > 0;
                                  v1718 = v885;
                                  if ( v885 || v1521 == 1 )
                                  {
                                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801B5150)(
                                      &v1970,
                                      v883,
                                      HIDWORD(v1852));
                                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801B5150)(
                                      &v1971,
                                      v883,
                                      HIDWORD(v1852));
                                    v886 = v1521;
                                    if ( v1521 == 1 )
                                      v1656 = off_1801B5028();
                                    v89 = v1599;
                                  }
                                  else
                                  {
                                    v886 = v1521;
                                  }
                                  v1430 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1801B5080)(v1511, 1LL);
                                  v887 = 2064;
                                  if ( v1961 )
                                    v887 = 133138;
                                  v1485 = v887;
                                  if ( v1718 )
                                  {
                                    v888 = v1963;
                                    v1434 = v1962;
                                    lpModuleNamek = v1966;
                                    v1469 = v1963;
                                    memset_0(v1939, 0, 0x68uLL);
                                    memset_0(v1943, 0, 0x68uLL);
                                    v1400 = 0LL;
                                    v1567 = 0;
                                    v1492 = 0;
                                    memset_0(v2003, 0, 0x2CuLL);
                                    v1987 = 0LL;
                                    v1988 = 0LL;
                                    if ( !v888 )
                                      goto LABEL_1459;
                                    v889 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1801B5050[0])(v1511, 7LL);
                                    if ( !v889 )
                                      goto LABEL_1360;
                                    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                           v889,
                                           104LL,
                                           v1939) )
                                    {
                                      v1400 = v1942;
                                      v1567 = v1940;
                                      v1492 = v1941;
                                    }
                                    v1590 = ((__int64 (__fastcall *)(SIZE_T))off_1801B5010[0])(v1511);
                                    if ( !v1590 )
                                      goto LABEL_1360;
                                    v2003[1] = DWORD2(v1970) - v1970;
                                    v890 = 0;
                                    v2003[2] = DWORD1(v1970) - HIDWORD(v1970);
                                    v2004 = 1;
                                    v2005 = 32;
                                    v1853 = 0LL;
                                    v2006 = 0LL;
                                    v2007 = 0LL;
                                    v2008 = 0;
                                    v2003[0] = 40;
                                    v891 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B5018[0])(
                                             v1590,
                                             v2003,
                                             0LL,
                                             &v1853,
                                             0LL,
                                             0);
                                    v1618 = (unsigned __int16 *)v891;
                                    if ( v891 )
                                    {
                                      v893 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                               v891,
                                               104LL,
                                               v1943);
                                      v894 = 0LL;
                                      if ( v893 )
                                        v894 = v1944;
                                      LODWORD(v1988) = DWORD2(v1970) - v1970;
                                      HIDWORD(v1988) = HIDWORD(v1970) - DWORD1(v1970);
                                      v1443 = v894;
                                      ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1801B5078)(v1590, v1618);
                                      ((void (__fastcall *)(SIZE_T, __int64))off_1801B5080)(v1590, 1LL);
                                      lpModuleNamel = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T, LPCWSTR))off_1801B5078)(
                                                                 v1590,
                                                                 lpModuleNamek);
                                      v895 = ((__int64 (__fastcall *)(_QWORD))off_1801B5070[0])(0LL);
                                      ((void (__fastcall *)(SIZE_T, __int64 *, __int64))off_1801B50E8[0])(
                                        v1590,
                                        &v1987,
                                        v895);
                                      ((void (__fastcall *)(SIZE_T, void *, __int64, __int64 *, int, _QWORD))off_1801B50D8)(
                                        v1590,
                                        v1469,
                                        0xFFFFFFFFLL,
                                        &v1987,
                                        v1485,
                                        0LL);
                                      if ( v1521 == 1 )
                                      {
                                        if ( v1434 )
                                          v1435 = ((__int64 (__fastcall *)(__int64))off_1801B5118[0])(8LL);
                                        else
                                          v1435 = 0xFFFFFF;
                                      }
                                      else
                                      {
                                        v1435 = -5723992;
                                      }
                                      v896 = 0;
                                      v897 = -(int)v1970;
                                      v898 = 0;
                                      if ( (int)v1970 >= 0 )
                                      {
                                        v896 = v1970;
                                        v897 = 0;
                                      }
                                      v899 = -DWORD1(v1970);
                                      if ( (SDWORD1(v1970) & 0x80000000) == 0 )
                                      {
                                        v898 = DWORD1(v1970);
                                        v899 = 0;
                                      }
                                      v900 = v1988 - v897;
                                      if ( (int)v1988 - v897 >= v1567 - v896 )
                                        v900 = v1567 - v896;
                                      v901 = HIDWORD(v1988) - v899;
                                      if ( HIDWORD(v1988) - v899 >= v1492 - v898 )
                                        v901 = v1492 - v898;
                                      v1493 = v901;
                                      if ( v900 > 0 && v901 > 0 )
                                      {
                                        v902 = (unsigned __int8 *)&v1443[4 * v897 + 4 * (__int64)(v899 * (int)v1988)];
                                        v1470 = v902;
                                        v1444 = 4LL * (int)v1988;
                                        v903 = v1400 + 4 * (v896 + (__int64)(v898 * v1567));
                                        v1526 = 4LL * v1567;
                                        v1401 = v903;
                                        v1568 = 0;
                                        do
                                        {
                                          v904 = 0;
                                          v905 = v902 + 2;
                                          v906 = v903 - (_QWORD)v902;
                                          do
                                          {
                                            if ( (unsigned __int8)((*v905 + *(v905 - 2) + 2 * (unsigned int)*(v905 - 1)) >> 2) != 0xFF )
                                            {
                                              v907 = (unsigned __int8)~((*v905
                                                                       + *(v905 - 2)
                                                                       + 2 * (unsigned int)*(v905 - 1)) >> 2);
                                              v905[v906] -= ~((*v905 + *(v905 - 2) + 2 * (unsigned int)*(v905 - 1)) >> 2)
                                                          * (v1435 - v905[v906]);
                                              v908 = v905[v906 - 1];
                                              v909 = (unsigned __int64)(2155905153LL * v907 * (BYTE1(v1435) - v908)) >> 32;
                                              v905[v906 - 1] = v908 + (v909 >> 7 < 0) + (v909 >> 7);
                                              v910 = v905[v906 - 2];
                                              v911 = (unsigned __int64)(2155905153LL * v907 * (BYTE2(v1435) - v910)) >> 32;
                                              v905[v906 - 2] = v910 + (v911 >> 7 < 0) + (v911 >> 7);
                                              v905[v906 + 1] += v907 * (255 - v905[v906 + 1]) / 255;
                                            }
                                            v905 += 4;
                                            ++v904;
                                          }
                                          while ( v904 < v900 );
                                          v912 = v1568;
                                          v902 = &v1470[v1444];
                                          v903 = v1526 + v1401;
                                          v1470 += v1444;
                                          v1401 += v1526;
                                          ++v1568;
                                        }
                                        while ( v912 + 1 < v1493 );
                                        v890 = 0;
                                      }
                                      ((void (__fastcall *)(unsigned __int16 *))off_1801B5038)(v1618);
                                      if ( lpModuleNamel )
                                        ((void (__fastcall *)(SIZE_T, LPCWSTR))off_1801B5078)(v1590, lpModuleNamel);
                                    }
                                    else
                                    {
                                      v892 = GetLastError();
                                      v890 = v892;
                                      if ( v892 > 0 )
                                        v890 = (unsigned __int16)v892 | 0x80070000;
                                      if ( v890 >= 0 )
                                        v890 = -2147467259;
                                    }
                                    ((void (__fastcall *)(SIZE_T))off_1801B5030[0])(v1590);
                                    if ( v890 < 0 )
                                      goto LABEL_1459;
                                    v913 = v1964;
                                    v1436 = v1962;
                                    lpModuleNamem = v1967;
                                    v1471 = v1964;
                                    memset_0(v1945, 0, 0x68uLL);
                                    memset_0(v1949, 0, 0x68uLL);
                                    v1402 = 0LL;
                                    v1569 = 0;
                                    v1494 = 0;
                                    memset_0(v2009, 0, 0x2CuLL);
                                    v1980 = 0LL;
                                    v1981 = 0LL;
                                    if ( !v913 )
                                      goto LABEL_1459;
                                    v914 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1801B5050[0])(v1511, 7LL);
                                    if ( !v914 )
                                      goto LABEL_1360;
                                    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                           v914,
                                           104LL,
                                           v1945) )
                                    {
                                      v1402 = v1948;
                                      v1569 = v1946;
                                      v1494 = v1947;
                                    }
                                    v1591 = ((__int64 (__fastcall *)(SIZE_T))off_1801B5010[0])(v1511);
                                    if ( !v1591 )
                                      goto LABEL_1360;
                                    v2009[1] = DWORD2(v1971) - v1971;
                                    v915 = 0;
                                    v2009[2] = DWORD1(v1971) - HIDWORD(v1971);
                                    v2010 = 1;
                                    v2011 = 32;
                                    v1854 = 0LL;
                                    v2012 = 0LL;
                                    v2013 = 0LL;
                                    v2014 = 0;
                                    v2009[0] = 40;
                                    v916 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B5018[0])(
                                             v1591,
                                             v2009,
                                             0LL,
                                             &v1854,
                                             0LL,
                                             0);
                                    v1619 = (unsigned __int16 *)v916;
                                    if ( !v916 )
                                    {
                                      v917 = GetLastError();
                                      v915 = v917;
                                      if ( v917 > 0 )
                                        v915 = (unsigned __int16)v917 | 0x80070000;
                                      if ( v915 >= 0 )
                                        v915 = -2147467259;
LABEL_1354:
                                      ((void (__fastcall *)(SIZE_T))off_1801B5030[0])(v1591);
                                      if ( v915 < 0 )
                                        goto LABEL_1459;
                                      v939 = 0LL;
                                      goto LABEL_1452;
                                    }
                                    v918 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                             v916,
                                             104LL,
                                             v1949);
                                    v919 = 0LL;
                                    if ( v918 )
                                      v919 = v1950;
                                    LODWORD(v1981) = DWORD2(v1971) - v1971;
                                    HIDWORD(v1981) = HIDWORD(v1971) - DWORD1(v1971);
                                    v1445 = v919;
                                    ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1801B5078)(v1591, v1619);
                                    ((void (__fastcall *)(SIZE_T, __int64))off_1801B5080)(v1591, 1LL);
                                    lpModuleNamen = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T, LPCWSTR))off_1801B5078)(
                                                               v1591,
                                                               lpModuleNamem);
                                    v920 = ((__int64 (__fastcall *)(_QWORD))off_1801B5070[0])(0LL);
                                    ((void (__fastcall *)(SIZE_T, __int64 *, __int64))off_1801B50E8[0])(
                                      v1591,
                                      &v1980,
                                      v920);
                                    ((void (__fastcall *)(SIZE_T, void *, __int64, __int64 *, int, _QWORD))off_1801B50D8)(
                                      v1591,
                                      v1471,
                                      0xFFFFFFFFLL,
                                      &v1980,
                                      v1485,
                                      0LL);
                                    if ( v1521 == 1 )
                                    {
                                      if ( !v1436 )
                                      {
                                        v1522 = 0xFFFFFF;
LABEL_1335:
                                        v922 = 0;
                                        v923 = -(int)v1971;
                                        v924 = 0;
                                        if ( (int)v1971 >= 0 )
                                        {
                                          v922 = v1971;
                                          v923 = 0;
                                        }
                                        v925 = -DWORD1(v1971);
                                        if ( (SDWORD1(v1971) & 0x80000000) == 0 )
                                        {
                                          v924 = DWORD1(v1971);
                                          v925 = 0;
                                        }
                                        v926 = v1981 - v923;
                                        if ( (int)v1981 - v923 >= v1569 - v922 )
                                          v926 = v1569 - v922;
                                        v927 = HIDWORD(v1981) - v925;
                                        if ( HIDWORD(v1981) - v925 >= v1494 - v924 )
                                          v927 = v1494 - v924;
                                        v1486 = v927;
                                        if ( v926 > 0 && v927 > 0 )
                                        {
                                          v928 = (unsigned __int8 *)&v1445[4 * v923 + 4 * (__int64)(v925 * (int)v1981)];
                                          v1472 = v928;
                                          v1446 = 4LL * (int)v1981;
                                          v1527 = 4LL * v1569;
                                          v929 = v1402 + 4 * (v922 + (__int64)(v924 * v1569));
                                          v1437 = 0;
                                          v1403 = v929;
                                          do
                                          {
                                            v930 = 0;
                                            v931 = v928 + 2;
                                            v932 = v929 - (_QWORD)v928;
                                            do
                                            {
                                              if ( (unsigned __int8)((*v931 + *(v931 - 2)
                                                                            + 2 * (unsigned int)*(v931 - 1)) >> 2) != 0xFF )
                                              {
                                                v933 = (unsigned __int8)~((*v931
                                                                         + *(v931 - 2)
                                                                         + 2 * (unsigned int)*(v931 - 1)) >> 2);
                                                v931[v932] -= ~((*v931 + *(v931 - 2) + 2 * (unsigned int)*(v931 - 1)) >> 2)
                                                            * (v1556 - v931[v932]);
                                                v934 = v931[v932 - 1];
                                                v935 = (unsigned __int64)(2155905153LL * v933 * (BYTE1(v1522) - v934)) >> 32;
                                                v931[v932 - 1] = v934 + (v935 >> 7 < 0) + (v935 >> 7);
                                                v936 = v931[v932 - 2];
                                                v937 = (unsigned __int64)(2155905153LL * v933 * (BYTE2(v1522) - v936)) >> 32;
                                                v931[v932 - 2] = v936 + (v937 >> 7 < 0) + (v937 >> 7);
                                                v931[v932 + 1] += v933 * (255 - v931[v932 + 1]) / 255;
                                              }
                                              v931 += 4;
                                              ++v930;
                                            }
                                            while ( v930 < v926 );
                                            v938 = v1437;
                                            v928 = &v1472[v1446];
                                            v929 = v1527 + v1403;
                                            v1472 += v1446;
                                            v1403 += v1527;
                                            ++v1437;
                                          }
                                          while ( v938 + 1 < v1486 );
                                          v915 = 0;
                                        }
                                        ((void (__fastcall *)(unsigned __int16 *))off_1801B5038)(v1619);
                                        if ( lpModuleNamen )
                                          ((void (__fastcall *)(SIZE_T, LPCWSTR))off_1801B5078)(v1591, lpModuleNamen);
                                        goto LABEL_1354;
                                      }
                                      v921 = ((__int64 (__fastcall *)(__int64))off_1801B5118[0])(8LL);
                                    }
                                    else
                                    {
                                      v921 = -5723992;
                                    }
                                    v1522 = v921;
                                    v1556 = v921;
                                    goto LABEL_1335;
                                  }
                                  if ( v1962 || (v940 = -64, v886 == 1) )
                                    v940 = -1;
                                  BYTE2(v1438) = v940;
                                  v1920 = 0uLL;
                                  v1896 = 0uLL;
                                  LOWORD(v1438) = 0;
                                  HIBYTE(v1438) = 1;
                                  lpModuleNameo = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T))off_1801B5010[0])(v1511);
                                  if ( !lpModuleNameo )
                                  {
LABEL_1360:
                                    GetLastError();
LABEL_1459:
                                    if ( v1656 )
                                      ((void (__fastcall *)(SIZE_T))off_1801B5038)(v1656);
                                    goto LABEL_1461;
                                  }
                                  if ( v886 == 1 )
                                  {
                                    v941 = 0;
                                    v942 = DWORD2(v1971) - v1971;
                                    v943 = 0;
                                    if ( DWORD2(v1971) - (int)v1971 <= DWORD2(v1970) - (int)v1970 )
                                      v942 = DWORD2(v1970) - v1970;
                                    v1570 = v942;
                                    v1495 = HIDWORD(v1971) - DWORD1(v1970);
                                    if ( v1961 )
                                    {
                                      v941 = v942 + v1970 - DWORD2(v1970);
                                      v943 = v942 + v1971 - DWORD2(v1971);
                                      LODWORD(v1920) = v941;
                                      LODWORD(v1896) = v943;
                                    }
                                    v944 = v941 + DWORD2(v1970) - v1970;
                                    v1563 = v943 + DWORD2(v1971) - v1971;
                                    DWORD2(v1896) = v1563;
                                    DWORD2(v1920) = v944;
                                    v1638 = HIDWORD(v1971) - DWORD1(v1970);
                                    HIDWORD(v1896) = HIDWORD(v1971) - DWORD1(v1970);
                                    v1634 = HIDWORD(v1970) - DWORD1(v1970);
                                    HIDWORD(v1920) = HIDWORD(v1970) - DWORD1(v1970);
                                    v1652 = DWORD1(v1971) - DWORD1(v1970);
                                    DWORD1(v1896) = DWORD1(v1971) - DWORD1(v1970);
                                  }
                                  else
                                  {
                                    v942 = v1906;
                                    v1495 = HIDWORD(v1906);
                                    v1920 = v1970;
                                    v944 = DWORD2(v1970);
                                    v1634 = HIDWORD(v1970);
                                    v1896 = v1971;
                                    v1638 = HIDWORD(v1971);
                                    v1563 = DWORD2(v1971);
                                    v1652 = DWORD1(v1971);
                                    v1570 = v1906;
                                  }
                                  v1997[2] = -v1495;
                                  v1997[1] = v942;
                                  v1998 = 1;
                                  v1999 = 32;
                                  v1855 = 0LL;
                                  v2000 = 0LL;
                                  v2001 = 0LL;
                                  v2002 = 0;
                                  v1997[0] = 40;
                                  v945 = ((__int64 (__fastcall *)(LPCWSTR, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B5018[0])(
                                           lpModuleNameo,
                                           v1997,
                                           0LL,
                                           &v1855,
                                           0LL,
                                           0);
                                  v1628 = v945;
                                  if ( !v945 )
                                  {
                                    GetLastError();
                                    v939 = lpModuleNameo;
LABEL_1457:
                                    if ( v939 )
                                      ((void (__fastcall *)(LPCWSTR))off_1801B5030[0])(v939);
                                    goto LABEL_1459;
                                  }
                                  ((void (__fastcall *)(LPCWSTR, __int64))off_1801B5078)(lpModuleNameo, v945);
                                  if ( v1521 == 1 && v1656 )
                                  {
                                    v1982[2] = v1570;
                                    v1982[3] = v1495;
                                    v1982[0] = 0;
                                    v1982[1] = 0;
                                    ((void (__fastcall *)(LPCWSTR, _DWORD *))off_1801B50E8[0])(lpModuleNameo, v1982);
                                  }
                                  v1603 = v1962;
                                  v1473 = v1966;
                                  v1404 = v1963;
                                  memset_0(v1951, 0, 0x68uLL);
                                  memset_0(v1932, 0, 0x68uLL);
                                  v1592 = 0LL;
                                  v1574 = 0;
                                  v1528 = 0;
                                  memset_0(v2015, 0, 0x2CuLL);
                                  v1983 = 0LL;
                                  v1984 = 0LL;
                                  if ( !v1404 )
                                  {
LABEL_1454:
                                    v939 = lpModuleNameo;
LABEL_1455:
                                    if ( v1628 )
                                      ((void (__fastcall *)(SIZE_T))off_1801B5038)(v1628);
                                    goto LABEL_1457;
                                  }
                                  v946 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1801B5050[0])(
                                           lpModuleNameo,
                                           7LL);
                                  if ( !v946 )
                                    goto LABEL_1453;
                                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                         v946,
                                         104LL,
                                         v1951) )
                                  {
                                    v1592 = v1954;
                                    v1574 = v1952;
                                    v1528 = v1953;
                                  }
                                  v1620 = (unsigned __int16 *)((__int64 (__fastcall *)(LPCWSTR))off_1801B5010[0])(lpModuleNameo);
                                  if ( !v1620 )
                                  {
LABEL_1453:
                                    GetLastError();
                                    goto LABEL_1454;
                                  }
                                  v947 = v944 - v1920;
                                  v2015[2] = DWORD1(v1920) - v1634;
                                  v2016 = 1;
                                  v2017 = 32;
                                  v1856 = 0LL;
                                  v1447 = 0;
                                  v2018 = 0LL;
                                  v2019 = 0LL;
                                  v2020 = 0;
                                  v2015[0] = 40;
                                  v2015[1] = v947;
                                  v948 = ((__int64 (__fastcall *)(unsigned __int16 *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B5018[0])(
                                           v1620,
                                           v2015,
                                           0LL,
                                           &v1856,
                                           0LL,
                                           0);
                                  v1643 = (LPCWSTR)v948;
                                  if ( v948 )
                                  {
                                    v952 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                             v948,
                                             104LL,
                                             v1932);
                                    v953 = 0LL;
                                    LODWORD(v1984) = v947;
                                    if ( v952 )
                                      v953 = v1933;
                                    v951 = v1620;
                                    HIDWORD(v1984) = v1634 - DWORD1(v1920);
                                    v1607 = v953;
                                    ((void (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1801B5078)(v1620, v1643);
                                    ((void (__fastcall *)(unsigned __int16 *, __int64))off_1801B5080)(v1620, 1LL);
                                    v1474 = (LPVOID)((__int64 (__fastcall *)(unsigned __int16 *, const WCHAR *))off_1801B5078)(
                                                      v1620,
                                                      v1473);
                                    v954 = ((__int64 (__fastcall *)(_QWORD))off_1801B5070[0])(0LL);
                                    ((void (__fastcall *)(unsigned __int16 *, __int64 *, __int64))off_1801B50E8[0])(
                                      v1620,
                                      &v1983,
                                      v954);
                                    ((void (__fastcall *)(unsigned __int16 *, void *, __int64, __int64 *, int, _QWORD))off_1801B50D8)(
                                      v1620,
                                      v1404,
                                      0xFFFFFFFFLL,
                                      &v1983,
                                      v1485,
                                      0LL);
                                    if ( v1521 == 1 )
                                    {
                                      if ( v1603 )
                                        v1604 = ((__int64 (__fastcall *)(__int64))off_1801B5118[0])(8LL);
                                      else
                                        v1604 = 0xFFFFFF;
                                    }
                                    else
                                    {
                                      v1604 = -5723992;
                                    }
                                    v955 = 0;
                                    v956 = -(int)v1920;
                                    v957 = 0;
                                    if ( (int)v1920 >= 0 )
                                    {
                                      v955 = v1920;
                                      v956 = 0;
                                    }
                                    v958 = -DWORD1(v1920);
                                    if ( (SDWORD1(v1920) & 0x80000000) == 0 )
                                    {
                                      v957 = DWORD1(v1920);
                                      v958 = 0;
                                    }
                                    v959 = v1984 - v956;
                                    if ( (int)v1984 - v956 >= v1574 - v955 )
                                      v959 = v1574 - v955;
                                    v960 = HIDWORD(v1984) - v958;
                                    if ( HIDWORD(v1984) - v958 >= v1528 - v957 )
                                      v960 = v1528 - v957;
                                    v1529 = v960;
                                    if ( v959 > 0 && v960 > 0 )
                                    {
                                      v961 = (unsigned __int8 *)&v1607[4 * v956 + 4 * (__int64)((int)v1984 * v958)];
                                      v962 = v1592;
                                      v1608 = v961;
                                      v1593 = 4LL * (int)v1984;
                                      v963 = v962 + 4 * (v955 + (__int64)(v1574 * v957));
                                      v1635 = 4LL * v1574;
                                      v1405 = v963;
                                      v1575 = 0;
                                      do
                                      {
                                        v964 = 0;
                                        v965 = v961 + 2;
                                        v966 = v963 - (_QWORD)v961;
                                        do
                                        {
                                          if ( (unsigned __int8)((*v965 + *(v965 - 2) + 2 * (unsigned int)*(v965 - 1)) >> 2) != 0xFF )
                                          {
                                            v967 = (unsigned __int8)~((*v965
                                                                     + *(v965 - 2)
                                                                     + 2 * (unsigned int)*(v965 - 1)) >> 2);
                                            v965[v966] -= ~((*v965 + *(v965 - 2) + 2 * (unsigned int)*(v965 - 1)) >> 2)
                                                        * (v1604 - v965[v966]);
                                            v968 = v965[v966 - 1];
                                            v969 = (unsigned __int64)(2155905153LL * v967 * (BYTE1(v1604) - v968)) >> 32;
                                            v965[v966 - 1] = v968 + (v969 >> 7 < 0) + (v969 >> 7);
                                            v970 = v965[v966 - 2];
                                            v971 = (unsigned __int64)(2155905153LL * v967 * (BYTE2(v1604) - v970)) >> 32;
                                            v965[v966 - 2] = v970 + (v971 >> 7 < 0) + (v971 >> 7);
                                            v965[v966 + 1] += v967 * (255 - v965[v966 + 1]) / 255;
                                          }
                                          v965 += 4;
                                          ++v964;
                                        }
                                        while ( v964 < v959 );
                                        v972 = v1575;
                                        v961 = &v1608[v1593];
                                        v963 = v1635 + v1405;
                                        v1608 += v1593;
                                        v1405 += v1635;
                                        ++v1575;
                                      }
                                      while ( v972 + 1 < v1529 );
                                      v951 = v1620;
                                    }
                                    ((void (__fastcall *)(LPCWSTR))off_1801B5038)(v1643);
                                    if ( v1474 )
                                      ((void (__fastcall *)(unsigned __int16 *, LPVOID))off_1801B5078)(v951, v1474);
                                  }
                                  else
                                  {
                                    v949 = GetLastError();
                                    v1447 = v949;
                                    v950 = v949 < 0;
                                    if ( v949 > 0 )
                                    {
                                      v1447 = (unsigned __int16)v949 | 0x80070000;
                                      v950 = 1;
                                    }
                                    v951 = v1620;
                                    if ( !v950 )
                                      v1447 = -2147467259;
                                  }
                                  ((void (__fastcall *)(unsigned __int16 *))off_1801B5030[0])(v951);
                                  if ( v1447 < 0 )
                                    goto LABEL_1454;
                                  v973 = v1964;
                                  v1448 = v1962;
                                  v1609 = v1967;
                                  v1644 = (LPCWSTR)v1964;
                                  memset_0(v1955, 0, 0x68uLL);
                                  memset_0(v1959, 0, 0x68uLL);
                                  v1475 = 0LL;
                                  v1530 = 0;
                                  v1576 = 0;
                                  memset_0(v2021, 0, 0x2CuLL);
                                  v1985 = 0LL;
                                  v1986 = 0LL;
                                  if ( !v973 )
                                    goto LABEL_1454;
                                  v939 = lpModuleNameo;
                                  v974 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1801B5050[0])(
                                           lpModuleNameo,
                                           7LL);
                                  if ( !v974 )
                                    goto LABEL_1412;
                                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                         v974,
                                         104LL,
                                         v1955) )
                                  {
                                    v1475 = v1958;
                                    v1530 = v1956;
                                    v1576 = v1957;
                                  }
                                  v1406 = ((__int64 (__fastcall *)(LPCWSTR))off_1801B5010[0])(lpModuleNameo);
                                  if ( !v1406 )
                                  {
LABEL_1412:
                                    GetLastError();
                                    goto LABEL_1455;
                                  }
                                  v1564 = v1563 - v1896;
                                  v2021[1] = v1564;
                                  v975 = 0;
                                  v2021[2] = v1652 - v1638;
                                  v2022 = 1;
                                  v2023 = 32;
                                  v1859 = 0LL;
                                  v2024 = 0LL;
                                  v2025 = 0LL;
                                  v2026 = 0;
                                  v2021[0] = 40;
                                  v976 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801B5018[0])(
                                           v1406,
                                           v2021,
                                           0LL,
                                           &v1859,
                                           0LL,
                                           0);
                                  v1594 = v976;
                                  if ( !v976 )
                                  {
                                    v977 = GetLastError();
                                    v975 = v977;
                                    if ( v977 > 0 )
                                      v975 = (unsigned __int16)v977 | 0x80070000;
                                    if ( v975 >= 0 )
                                      v975 = -2147467259;
                                    goto LABEL_1448;
                                  }
                                  v978 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801B5068[0])(
                                           v976,
                                           104LL,
                                           v1959);
                                  v979 = 0LL;
                                  LODWORD(v1986) = v1564;
                                  if ( v978 )
                                    v979 = v1960;
                                  HIDWORD(v1986) = v1638 - v1652;
                                  v1621 = v979;
                                  ((void (__fastcall *)(SIZE_T, SIZE_T))off_1801B5078)(v1406, v1594);
                                  ((void (__fastcall *)(SIZE_T, __int64))off_1801B5080)(v1406, 1LL);
                                  v1610 = (LPVOID)((__int64 (__fastcall *)(SIZE_T, const WCHAR *))off_1801B5078)(
                                                    v1406,
                                                    v1609);
                                  v980 = ((__int64 (__fastcall *)(_QWORD))off_1801B5070[0])(0LL);
                                  ((void (__fastcall *)(SIZE_T, __int64 *, __int64))off_1801B50E8[0])(
                                    v1406,
                                    &v1985,
                                    v980);
                                  ((void (__fastcall *)(SIZE_T, LPCWSTR, __int64, __int64 *, int, _QWORD))off_1801B50D8)(
                                    v1406,
                                    v1644,
                                    0xFFFFFFFFLL,
                                    &v1985,
                                    v1485,
                                    0LL);
                                  if ( v1521 == 1 )
                                  {
                                    if ( !v1448 )
                                    {
                                      v1449 = 0xFFFFFF;
LABEL_1429:
                                      v982 = 0;
                                      v983 = -(int)v1896;
                                      v984 = 0;
                                      if ( (int)v1896 >= 0 )
                                      {
                                        v982 = v1896;
                                        v983 = 0;
                                      }
                                      v985 = -v1652;
                                      if ( v1652 >= 0 )
                                      {
                                        v984 = v1652;
                                        v985 = 0;
                                      }
                                      v986 = v1986 - v983;
                                      if ( (int)v1986 - v983 >= v1530 - v982 )
                                        v986 = v1530 - v982;
                                      v987 = HIDWORD(v1986) - v985;
                                      if ( HIDWORD(v1986) - v985 >= v1576 - v984 )
                                        v987 = v1576 - v984;
                                      v1577 = v987;
                                      if ( v986 > 0 && v987 > 0 )
                                      {
                                        v988 = &v1621[2 * v983 + 2 * (__int64)((int)v1986 * v985)];
                                        v1645 = v988;
                                        v1622 = (unsigned __int16 *)(4LL * (int)v1986);
                                        v989 = &v1475[4 * v982 + 4 * (__int64)(v1530 * v984)];
                                        v1639 = 4LL * v1530;
                                        v1476 = v989;
                                        v1531 = 0;
                                        do
                                        {
                                          v990 = 0;
                                          v991 = (unsigned __int8 *)(v988 + 1);
                                          v992 = v989 - (char *)v988;
                                          do
                                          {
                                            if ( (unsigned __int8)((*v991 + *(v991 - 2) + 2 * (unsigned int)*(v991 - 1)) >> 2) != 0xFF )
                                            {
                                              v993 = (unsigned __int8)~((*v991
                                                                       + *(v991 - 2)
                                                                       + 2 * (unsigned int)*(v991 - 1)) >> 2);
                                              v991[v992] -= ~((*v991 + *(v991 - 2) + 2 * (unsigned int)*(v991 - 1)) >> 2)
                                                          * (v1556 - v991[v992]);
                                              v994 = v991[v992 - 1];
                                              v995 = (unsigned __int64)(2155905153LL * v993 * (BYTE1(v1449) - v994)) >> 32;
                                              v991[v992 - 1] = v994 + (v995 >> 7 < 0) + (v995 >> 7);
                                              v996 = v991[v992 - 2];
                                              v997 = (unsigned __int64)(2155905153LL * v993 * (BYTE2(v1449) - v996)) >> 32;
                                              v991[v992 - 2] = v996 + (v997 >> 7 < 0) + (v997 >> 7);
                                              v991[v992 + 1] += v993 * (255 - v991[v992 + 1]) / 255;
                                            }
                                            v991 += 4;
                                            ++v990;
                                          }
                                          while ( v990 < v986 );
                                          v998 = v1531;
                                          v988 = (unsigned __int16 *)((char *)v1645 + (_QWORD)v1622);
                                          v989 = &v1476[v1639];
                                          v1645 = (LPCWSTR)((char *)v1645 + (_QWORD)v1622);
                                          v1476 += v1639;
                                          ++v1531;
                                        }
                                        while ( v998 + 1 < v1577 );
                                        v975 = 0;
                                      }
                                      ((void (__fastcall *)(SIZE_T))off_1801B5038)(v1594);
                                      if ( v1610 )
                                        ((void (__fastcall *)(SIZE_T, LPVOID))off_1801B5078)(v1406, v1610);
LABEL_1448:
                                      ((void (__fastcall *)(SIZE_T))off_1801B5030[0])(v1406);
                                      if ( v975 >= 0 )
                                      {
                                        v939 = lpModuleNameo;
                                        if ( v1521 == 1 )
                                          ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, int, LPCWSTR, _DWORD, _DWORD, int))off_1801B5000[0])(
                                            v1511,
                                            (unsigned int)v1970,
                                            DWORD1(v1970),
                                            v1570,
                                            v1495,
                                            lpModuleNameo,
                                            0,
                                            0,
                                            13369376);
                                        else
                                          ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, int, LPCWSTR, _DWORD, _DWORD, unsigned int, int, int))off_1801B5040[0])(
                                            v1511,
                                            (unsigned int)v1905,
                                            HIDWORD(v1905),
                                            v1570,
                                            v1495,
                                            lpModuleNameo,
                                            0,
                                            0,
                                            v1570,
                                            v1495,
                                            v1438);
LABEL_1452:
                                        ((void (__fastcall *)(SIZE_T, _QWORD))off_1801B5080)(v1511, v1430);
                                        goto LABEL_1455;
                                      }
                                      goto LABEL_1454;
                                    }
                                    v981 = ((__int64 (__fastcall *)(__int64))off_1801B5118[0])(8LL);
                                  }
                                  else
                                  {
                                    v981 = -5723992;
                                  }
                                  v1449 = v981;
                                  v1556 = v981;
                                  goto LABEL_1429;
                                }
                                v1847 = 0LL;
                                v634 = 0LL;
                                v1848 = 0LL;
                                v1846 = 0LL;
                                v1849 = 0LL;
                                v1850 = 0LL;
                                v1783 = 0LL;
                                v1433 = 0;
                                v1723 = 0;
                                if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1801B50A0[0])(
                                       8LL,
                                       &v1724,
                                       0LL,
                                       &v1723) )
                                {
                                  v637 = operator new(2LL * v1723);
                                  SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1850, v637);
                                  if ( !v1850 )
                                  {
                                    v1433 = -2147024882;
                                    goto LABEL_884;
                                  }
                                  v638 = operator new(4LL * (v1724 + 1));
                                  SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1783, v638);
                                  v639 = v1783;
                                  if ( !v1783 )
                                  {
                                    v1433 = -2147024882;
                                    goto LABEL_884;
                                  }
                                  if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1801B50A0[0])(
                                         8LL,
                                         &v1724,
                                         v1850,
                                         &v1723) )
                                  {
                                    v640 = v639;
                                    if ( v1724 )
                                    {
                                      v641 = v1850;
                                      v642 = v639;
                                      for ( mm = 0; mm < v1724; ++mm )
                                      {
                                        *v642 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1801B50B0[0])(v641, 0LL);
                                        v644 = -1LL;
                                        do
                                          v60 = *(_WORD *)(v641 + 2 * v644++ + 2) == 0;
                                        while ( !v60 );
                                        ++v642;
                                        v641 += 2 * v644 + 2;
                                      }
                                      v1783 = v642;
                                      v640 = v642;
                                    }
                                    *v640 = 1033;
                                    v634 = v639;
                                    v1783 = 0LL;
                                    v1565 = v1724 + 1;
                                    v1846 = v639;
LABEL_884:
                                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1783);
                                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1850);
                                    if ( v1433 < 0 )
                                    {
                                      v690 = v1433;
                                      v1588 = v1923;
                                      v1399 = v1922;
                                      v1462 = v1921;
                                      goto LABEL_1133;
                                    }
                                    v645 = 0;
                                    v646 = 0;
                                    v1489 = 0;
                                    if ( v1565 )
                                    {
                                      v647 = 0LL;
                                      while ( 2 )
                                      {
                                        v648 = 0;
                                        v649 = &unk_180187D10;
                                        do
                                        {
                                          if ( v634[v647] == *v649 )
                                          {
                                            v645 = v648;
                                            v1489 = v648;
                                            goto LABEL_893;
                                          }
                                          ++v648;
                                          ++v649;
                                        }
                                        while ( v648 < 0x26 );
                                        ++v646;
                                        ++v647;
                                        if ( v646 < v1565 )
                                          continue;
                                        break;
                                      }
                                    }
LABEL_893:
                                    v650 = v645;
                                    v1566 = 0;
                                    if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1801B50A8[0])(
                                           *((unsigned int *)&unk_180187D10 + v645),
                                           v2046,
                                           85LL)
                                      && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1801B5090[0])(
                                           v2046,
                                           88LL,
                                           &v1989) > 0 )
                                    {
                                      v1566 = (v1990 >> 27) & 1;
                                    }
                                    v651 = -1LL;
                                    v2043[0] = L"Segoe UI Light";
                                    do
                                      v60 = aSegoeUiLight[++v651] == 0;
                                    while ( !v60 );
                                    v652 = &aSegoeUiLight[v651];
                                    v653 = -1LL;
                                    v654 = v652 + 1;
                                    v2043[1] = v654;
                                    do
                                      v60 = v654[++v653] == 0;
                                    while ( !v60 );
                                    v655 = &v654[v653];
                                    v656 = -1LL;
                                    v657 = v655 + 1;
                                    v2043[2] = v657;
                                    do
                                      ++v656;
                                    while ( v657[v656] );
                                    v658 = &v657[v656 + 1];
                                    v659 = -1LL;
                                    v2043[3] = v658;
                                    do
                                      ++v659;
                                    while ( v658[v659] );
                                    v660 = &v658[v659 + 1];
                                    v661 = -1LL;
                                    v2043[4] = v660;
                                    do
                                      ++v661;
                                    while ( v660[v661] );
                                    v662 = &v660[v661 + 1];
                                    v663 = -1LL;
                                    v2043[5] = v662;
                                    do
                                      ++v663;
                                    while ( v662[v663] );
                                    v664 = &v662[v663 + 1];
                                    v665 = -1LL;
                                    v2043[6] = v664;
                                    do
                                      ++v665;
                                    while ( v664[v665] );
                                    v666 = &v664[v665 + 1];
                                    v667 = -1LL;
                                    v2043[7] = v666;
                                    do
                                      ++v667;
                                    while ( v666[v667] );
                                    v668 = (__int64)&v666[v667 + 1];
                                    v669 = -1LL;
                                    v2043[8] = v668;
                                    do
                                      ++v669;
                                    while ( *(_WORD *)(v668 + 2 * v669) );
                                    v670 = v668 + 2 * (v669 + 1);
                                    v671 = -1LL;
                                    v2043[9] = v670;
                                    do
                                      ++v671;
                                    while ( *(_WORD *)(v670 + 2 * v671) );
                                    v672 = v670 + 2 * (v671 + 1);
                                    v673 = -1LL;
                                    v2043[10] = v672;
                                    do
                                      ++v673;
                                    while ( *(_WORD *)(v672 + 2 * v673) );
                                    v674 = v672 + 2 * (v673 + 1);
                                    v675 = -1LL;
                                    v2043[11] = v674;
                                    do
                                      ++v675;
                                    while ( *(_WORD *)(v674 + 2 * v675) );
                                    v676 = v674 + 2 * (v675 + 1);
                                    v677 = -1LL;
                                    v2043[12] = v676;
                                    do
                                      ++v677;
                                    while ( *(_WORD *)(v676 + 2 * v677) );
                                    v678 = v676 + 2 * (v677 + 1);
                                    v679 = -1LL;
                                    v2043[13] = v678;
                                    do
                                      ++v679;
                                    while ( *(_WORD *)(v678 + 2 * v679) );
                                    v680 = v678 + 2 * (v679 + 1);
                                    v681 = -1LL;
                                    v2043[14] = v680;
                                    do
                                      ++v681;
                                    while ( *(_WORD *)(v680 + 2 * v681) );
                                    v682 = v680 + 2 * (v681 + 1);
                                    v683 = -1LL;
                                    v2043[15] = v682;
                                    do
                                      ++v683;
                                    while ( *(_WORD *)(v682 + 2 * v683) );
                                    v684 = v682 + 2 * (v683 + 1);
                                    v685 = -1LL;
                                    v2043[16] = v684;
                                    do
                                      ++v685;
                                    while ( *(_WORD *)(v684 + 2 * v685) );
                                    v686 = v684 + 2 * (v685 + 1);
                                    v687 = -1LL;
                                    v2043[17] = v686;
                                    do
                                      v60 = *(_WORD *)(v686 + 2 * v687++ + 2) == 0;
                                    while ( !v60 );
                                    v2043[18] = v686 + 2 + 2 * v687;
                                    v1462 = (LPVOID)v2043[*((unsigned __int8 *)&unk_180170E20 + 3 * v650)];
                                    v1921 = v1462;
                                    v1399 = (const unsigned __int16 *)v2043[*((unsigned __int8 *)&unk_180170E21
                                                                            + 3 * v650)];
                                    v1922 = v1399;
                                    v1588 = v2043[*((unsigned __int8 *)&unk_180170E22 + 3 * v650)];
                                    v1923 = v1588;
                                    v1433 = 0;
                                    v688 = (char *)operator new(0x1C90uLL);
                                    v689 = v688;
                                    if ( !v688 )
                                    {
                                      v690 = -2147024882;
                                      v1433 = -2147024882;
                                      goto LABEL_1133;
                                    }
                                    v691 = 0;
                                    v1725 = 0;
                                    v692 = v688 + 7;
                                    v693 = 0;
                                    v694 = (char *)&unk_180186072;
                                    v695 = -1;
                                    v696 = 0;
                                    v697 = 914LL;
                                    do
                                    {
                                      v698 = (unsigned __int8)*(v694 - 1);
                                      v699 = (unsigned __int8)*(v694 - 2);
                                      v700 = (unsigned __int8)v694[2];
                                      v694 += 8;
                                      v701 = (unsigned __int8)*(v694 - 7) | (((unsigned __int8)*(v694 - 8) | ((v698 | (v699 << 8)) << 8)) << 8);
                                      v702 = v701 ^ v696;
                                      v703 = (unsigned __int8)*(v694 - 3) | (((unsigned __int8)*(v694 - 4) | (((unsigned __int8)*(v694 - 5) | (v700 << 8)) << 8)) << 8);
                                      v704 = v691 ^ v703 ^ v702 ^ 0xAC987321;
                                      v705 = (__ROL4__(v704, 10) + 4991 * __ROL4__(v704 + 1419157410, 5)) ^ v702;
                                      v706 = (43881 * __ROR4__(v705 + 133239679, 9) - __ROL4__(v705, 2)) ^ v704;
                                      v707 = (24670 * v706 - (v706 >> 13) - 123127970) ^ v705;
                                      v708 = (2033 * __ROL4__(v707 ^ 0xAB69, 6) - __ROL4__(v707, 2)) ^ v706;
                                      v709 = (133239679 - (v708 ^ 0xAB69605E)) ^ v707;
                                      v710 = (43881 * (v709 ^ 0x137F)) ^ __ROR4__(v709, 6) ^ v708;
                                      v711 = (__ROL4__(v710, 2) + 24670 * __ROR4__(v710 + 133239679, 15)) ^ v709;
                                      v712 = (2033 * __ROR4__(v711 + 1419157410, 14) - __ROL4__(v711, 8)) ^ v710;
                                      v713 = __ROR4__(v712, 10) ^ (4991 * __ROR4__(v712 ^ 0xAB69605E, 12)) ^ v711;
                                      v714 = v712 ^ (v713 >> 10) ^ (43881 * (v713 ^ 0x7F1));
                                      v715 = (2033 * (__ROR4__(~v714, 5) + 24670)) ^ v713;
                                      v716 = v714 ^ (v715 - 2033) ^ 0xAB69605E;
                                      v717 = ((v716 >> 2) + 4991 * __ROL4__(v714 ^ (v715 - 2033) ^ 0xAB6967AF, 2)) ^ v715;
                                      v718 = (__ROL4__(v717, 7) + 43881 * __ROR4__(v717 - 133239679, 6)) ^ v716;
                                      v719 = (24670 * (v718 ^ 0x137F) + __ROR4__(v718, 9)) ^ v717;
                                      v720 = (__ROL4__(v719, 7) + 2033 * __ROL4__(v719 ^ 0xAB69, 5)) ^ v718;
                                      v721 = v720 ^ v719 ^ 0xAC987321;
                                      v722 = (4991 * __ROR4__(v721, 3) - 219010071) ^ v720;
                                      v723 = (24670 * __ROR4__(v722 - 133239679, 1) - __ROR4__(v722, 6)) ^ v721;
                                      v724 = (__ROL4__(v723, 14) + 2033 * __ROL4__(v723 - 1419157410, 3)) ^ v722;
                                      v725 = (4991 * __ROL4__(v724 - 1419157410, 15) - __ROR4__(v724, 14)) ^ v723;
                                      v692 += 8;
                                      v726 = (v725 >> 3) ^ (43881 * (v725 ^ 0x605E)) ^ v724;
                                      v1725 = v695 ^ v726;
                                      v695 = v703;
                                      v727 = v693 ^ __ROL4__(v726, 2) ^ (24670 * __ROL4__(v726 ^ 0x7F1137F, 4));
                                      v693 = v701;
                                      *(v692 - 12) = v727 ^ v725;
                                      v1584 = __ROR4__(v727 ^ v725, 8);
                                      *(v692 - 8) = v1725;
                                      v1725 = __ROR4__(v1725, 8);
                                      *(v692 - 13) = v1584;
                                      v1585 = __ROR4__(v1584, 8);
                                      *(v692 - 9) = v1725;
                                      v1725 = __ROR4__(v1725, 8);
                                      *(v692 - 14) = v1585;
                                      v1586 = __ROR4__(v1585, 8);
                                      *(v692 - 10) = v1725;
                                      v1725 = __ROR4__(v1725, 8);
                                      *(v692 - 15) = v1586;
                                      *(v692 - 11) = v1725;
                                      v696 = __ROR4__(v1586, 8);
                                      v691 = __ROR4__(v1725, 8);
                                      v1583 = v696;
                                      v1725 = v691;
                                      --v697;
                                    }
                                    while ( v697 );
                                    v1 = v1801;
                                    v728 = 0LL;
                                    v690 = 0;
                                    v729 = 0LL;
                                    v730 = 0LL;
                                    v2 = (_DWORD *)((char *)v1801 + 192);
                                    do
                                    {
                                      v729 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v689[v728]), v729);
                                      v731 = _mm_loadu_si128((const __m128i *)&v689[v728 + 16]);
                                      v728 += 32LL;
                                      v732 = _mm_xor_si128(v731, v730);
                                      v730 = v732;
                                    }
                                    while ( v728 < 0x1C80 );
                                    v733 = _mm_xor_si128(v732, v729);
                                    v734 = _mm_xor_si128(v733, _mm_srli_si128(v733, 8));
                                    v735 = _mm_xor_si128(v734, _mm_srli_si128(v734, 4));
                                    v736 = _mm_xor_si128(v735, _mm_srli_si128(v735, 2));
                                    for ( nn = _mm_cvtsi128_si32(_mm_xor_si128(v736, _mm_srli_si128(v736, 1)));
                                          v728 < 0x1C90;
                                          ++v728 )
                                    {
                                      nn ^= v689[v728];
                                    }
                                    if ( nn == 127LL )
                                    {
                                      v1847 = v689;
                                      v1848 = 7312LL;
                                    }
                                    else
                                    {
                                      v690 = -1073425151;
                                      v1433 = -1073425151;
                                      operator delete(v689);
                                    }
                                    if ( v690 < 0 )
                                    {
LABEL_1133:
                                      if ( v1847 )
                                        memset(v1847, 0, v1848);
                                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1849);
                                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1847);
                                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1846);
                                      if ( v690 < 0 )
                                        goto LABEL_1250;
                                      v833 = 0;
                                      v1433 = 0;
                                      v834 = 0;
                                      v1963 = *v1843;
                                      v1964 = v1843[1];
                                      v1965 = v1843[2];
                                      v1917[1] = 0LL;
                                      v1917[0] = 16LL;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD))off_1801B5168)(
                                                           66LL,
                                                           0LL,
                                                           v1917,
                                                           0LL) )
                                      {
                                        v834 = BYTE4(v1917[0]) & 1;
                                      }
                                      else
                                      {
                                        v835 = GetLastError();
                                        v1433 = v835;
                                        v833 = v835;
                                        if ( v835 > 0 )
                                        {
                                          v833 = (unsigned __int16)v835 | 0x80070000;
                                          v1433 = v833;
                                        }
                                        if ( v833 >= 0 )
                                        {
                                          v833 = -2147467259;
                                          v1433 = -2147467259;
                                        }
                                      }
                                      v1962 = v834;
                                      if ( v833 < 0 )
                                        goto LABEL_1250;
                                      v836 = 42;
                                      if ( v1521 != 1 )
                                      {
                                        if ( v1521 == 2 )
                                        {
                                          v1427 = 15;
                                          v1483 = 11;
                                        }
                                        else if ( v1521 == 3 )
                                        {
                                          v836 = 225;
                                          v1483 = 225;
LABEL_1149:
                                          v1427 = v836;
                                        }
                                        v837 = 96;
                                        v1491 = 96;
                                        memset_0(v2036, 0, 0xDCuLL);
                                        v2037 = 220;
                                        if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1801B50E0[0])(
                                               0LL,
                                               0xFFFFFFFFLL,
                                               v2036) )
                                        {
                                          v837 = v2038;
                                          v1916 = v2039;
                                          if ( v2038 < 0x60u )
                                            v837 = 96;
                                          v1491 = v837;
                                          v1915 = 0LL;
                                        }
                                        v838 = (unsigned __int16 *)v1588;
                                        if ( v1521 == 1 )
                                          v838 = (unsigned __int16 *)v1462;
                                        v1617 = v838;
                                        memset_0(v2027, 0, 0x5CuLL);
                                        v839 = 0;
                                        v1433 = 0;
                                        v1442 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50F8[0])(
                                                          0LL,
                                                          0LL,
                                                          1027LL);
                                        if ( v1442 )
                                        {
                                          v842 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50B8[0])(
                                                   v1427,
                                                   v837,
                                                   72LL);
                                          v2027[4] = 400;
                                          v2027[0] = -v842;
                                          v2028 = 5;
                                          StringCchCopyW(&v2029, 0x20uLL, v1617);
                                          v843 = ((__int64 (__fastcall *)(_DWORD *))off_1801B5020[0])(v2027);
                                          if ( v843 )
                                          {
                                            v1966 = (const WCHAR *)v843;
                                          }
                                          else
                                          {
                                            v844 = GetLastError();
                                            v1433 = v844;
                                            v839 = v844;
                                            if ( v844 > 0 )
                                            {
                                              v839 = (unsigned __int16)v844 | 0x80070000;
                                              v1433 = v839;
                                            }
                                            if ( v839 >= 0 )
                                            {
                                              v839 = -2147467259;
                                              v1433 = -2147467259;
                                            }
                                          }
                                          ((void (__fastcall *)(_QWORD, LPVOID))off_1801B5160[0])(0LL, v1442);
                                        }
                                        else
                                        {
                                          v840 = GetLastError();
                                          v1433 = v840;
                                          v841 = v840;
                                          if ( v840 > 0 )
                                          {
                                            v841 = (unsigned __int16)v840 | 0x80070000;
                                            v1433 = v841;
                                          }
                                          if ( v841 < 0 )
                                            goto LABEL_1250;
                                          v839 = -2147467259;
                                          v1433 = -2147467259;
                                        }
                                        if ( v839 < 0 )
                                          goto LABEL_1250;
                                        v845 = (const unsigned __int16 *)v1588;
                                        if ( v1521 == 1 )
                                          v845 = (const unsigned __int16 *)v1462;
                                        v1589 = v845;
                                        memset_0(v2030, 0, 0x5CuLL);
                                        v846 = 0;
                                        v1433 = 0;
                                        v1463 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50F8[0])(
                                                          0LL,
                                                          0LL,
                                                          1027LL);
                                        if ( v1463 )
                                        {
                                          v849 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50B8[0])(
                                                   v1483,
                                                   v837,
                                                   72LL);
                                          v2030[4] = 400;
                                          v2030[0] = -v849;
                                          v2031 = 5;
                                          StringCchCopyW(&v2032, 0x20uLL, v1589);
                                          v850 = ((__int64 (__fastcall *)(_DWORD *))off_1801B5020[0])(v2030);
                                          if ( v850 )
                                          {
                                            v1967 = (const WCHAR *)v850;
                                          }
                                          else
                                          {
                                            v851 = GetLastError();
                                            v1433 = v851;
                                            v846 = v851;
                                            if ( v851 > 0 )
                                            {
                                              v846 = (unsigned __int16)v851 | 0x80070000;
                                              v1433 = v846;
                                            }
                                            if ( v846 >= 0 )
                                            {
                                              v846 = -2147467259;
                                              v1433 = -2147467259;
                                            }
                                          }
                                          ((void (__fastcall *)(_QWORD, LPVOID))off_1801B5160[0])(0LL, v1463);
                                        }
                                        else
                                        {
                                          v847 = GetLastError();
                                          v1433 = v847;
                                          v848 = v847;
                                          if ( v847 > 0 )
                                          {
                                            v848 = (unsigned __int16)v847 | 0x80070000;
                                            v1433 = v848;
                                          }
                                          if ( v848 < 0 )
                                            goto LABEL_1250;
                                          v846 = -2147467259;
                                          v1433 = -2147467259;
                                        }
                                        if ( v846 < 0 )
                                          goto LABEL_1250;
                                        v852 = 0;
                                        v853 = 0;
                                        if ( v1521 != 1 )
                                        {
                                          if ( v1521 == 2 )
                                          {
                                            v852 = (int)v1916 / 4;
LABEL_1188:
                                            v1906 = __PAIR64__(v853, v852);
                                            if ( v1521 == 1 )
                                            {
                                              v854 = 150;
                                              v1633 = 32;
                                            }
                                            else
                                            {
                                              if ( (unsigned int)(v1521 - 2) > 1 )
                                              {
                                                v854 = v1583;
                                                v1633 = v1583;
                                                v855 = v1583;
LABEL_1195:
                                                v1428 = v854;
                                                v1484 = v855;
                                                v856 = v1963;
                                                v857 = 0;
                                                v1562 = v852 - v854 - v855;
                                                DWORD2(v1971) = v1562;
                                                DWORD2(v1970) = v1562;
                                                v1464 = (LPVOID)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1801B5078)(
                                                                  lpModuleNamei,
                                                                  v1966);
                                                if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1801B50D8)(
                                                                      lpModuleNamei,
                                                                      v856,
                                                                      0xFFFFFFFFLL,
                                                                      &v1970,
                                                                      3152,
                                                                      0LL) )
                                                  v857 = -2147467259;
                                                v1433 = v857;
                                                if ( v1464 )
                                                  ((void (__fastcall *)(LPCWSTR, LPVOID))off_1801B5078)(
                                                    lpModuleNamei,
                                                    v1464);
                                                if ( v857 < 0 )
                                                  goto LABEL_1250;
                                                v858 = 0;
                                                v859 = v1964;
                                                v1465 = (LPVOID)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1801B5078)(
                                                                  lpModuleNamei,
                                                                  v1967);
                                                if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1801B50D8)(
                                                                      lpModuleNamei,
                                                                      v859,
                                                                      0xFFFFFFFFLL,
                                                                      &v1971,
                                                                      3152,
                                                                      0LL) )
                                                  v858 = -2147467259;
                                                v1433 = v858;
                                                if ( v1465 )
                                                  ((void (__fastcall *)(LPCWSTR, LPVOID))off_1801B5078)(
                                                    lpModuleNamei,
                                                    v1465);
                                                if ( v858 < 0 )
                                                  goto LABEL_1250;
                                                if ( (unsigned int)(v1521 - 2) > 1 )
                                                {
                                                  v860 = v1562;
                                                }
                                                else
                                                {
                                                  v860 = DWORD2(v1971);
                                                  if ( SDWORD2(v1970) > SDWORD2(v1971) )
                                                    v860 = DWORD2(v1970);
                                                }
                                                if ( v1961 )
                                                {
                                                  off_1801B5150((CPolicyConfig *)&v1970);
                                                  v861 = v860 + v1484 - DWORD2(v1971);
                                                }
                                                else
                                                {
                                                  off_1801B5150((CPolicyConfig *)&v1970);
                                                  v861 = v1428;
                                                }
                                                ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_1801B5150)(
                                                  &v1971,
                                                  v861,
                                                  (unsigned int)(v1633 + HIDWORD(v1970)));
                                                v862 = v1521;
                                                if ( (unsigned int)(v1521 - 2) <= 1 )
                                                {
                                                  v1906 = __PAIR64__(HIDWORD(v1971), v860);
                                                  v1969 = -5723992;
                                                  goto LABEL_1237;
                                                }
                                                if ( v1521 != 1 )
                                                  goto LABEL_1237;
                                                v1969 = 0xFFFFFF;
                                                memset_0(v2033, 0, 0x5CuLL);
                                                v863 = 0;
                                                v1433 = 0;
                                                v1466 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50F8[0])(
                                                                  0LL,
                                                                  0LL,
                                                                  1027LL);
                                                if ( v1466 )
                                                {
                                                  v866 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1801B50B8[0])(
                                                           11LL,
                                                           v1491);
                                                  v2033[4] = 400;
                                                  v2033[0] = -v866;
                                                  v2034 = 5;
                                                  StringCchCopyW(&v2035, 0x20uLL, v1399);
                                                  v867 = ((__int64 (__fastcall *)(_DWORD *))off_1801B5020[0])(v2033);
                                                  if ( v867 )
                                                  {
                                                    v1968 = v867;
                                                  }
                                                  else
                                                  {
                                                    v868 = GetLastError();
                                                    v1433 = v868;
                                                    v863 = v868;
                                                    if ( v868 > 0 )
                                                    {
                                                      v863 = (unsigned __int16)v868 | 0x80070000;
                                                      v1433 = v863;
                                                    }
                                                    if ( v863 >= 0 )
                                                    {
                                                      v863 = -2147467259;
                                                      v1433 = -2147467259;
                                                    }
                                                  }
                                                  ((void (__fastcall *)(_QWORD, LPVOID))off_1801B5160[0])(0LL, v1466);
                                                }
                                                else
                                                {
                                                  v864 = GetLastError();
                                                  v1433 = v864;
                                                  v865 = v864;
                                                  if ( v864 > 0 )
                                                  {
                                                    v865 = (unsigned __int16)v864 | 0x80070000;
                                                    v1433 = v865;
                                                  }
                                                  if ( v865 < 0 )
                                                    goto LABEL_1250;
                                                  v863 = -2147467259;
                                                  v1433 = -2147467259;
                                                }
                                                if ( v863 >= 0 )
                                                {
                                                  v869 = 0;
                                                  v1974 = v860;
                                                  v870 = v1965;
                                                  v1467 = (LPVOID)((__int64 (__fastcall *)(LPCWSTR, __int64))off_1801B5078)(
                                                                    lpModuleNamei,
                                                                    v1968);
                                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1801B50D8)(
                                                                        lpModuleNamei,
                                                                        v870,
                                                                        0xFFFFFFFFLL,
                                                                        &v1972,
                                                                        1120,
                                                                        0LL) )
                                                    v869 = -2147467259;
                                                  v1433 = v869;
                                                  if ( v1467 )
                                                    ((void (__fastcall *)(LPCWSTR, LPVOID))off_1801B5078)(
                                                      lpModuleNamei,
                                                      v1467);
                                                  if ( v869 >= 0 )
                                                  {
                                                    v871 = v1974 + 24;
                                                    if ( (int)(v1974 + 24) < 90 )
                                                      v871 = 90;
                                                    v1974 = v871;
                                                    v1975 = 32;
                                                    v1972 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50B8[0])(
                                                              v1972,
                                                              v1491,
                                                              96LL);
                                                    v1973 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50B8[0])(
                                                              v1973,
                                                              v1491,
                                                              96LL);
                                                    v1974 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50B8[0])(
                                                              v1974,
                                                              v1491,
                                                              96LL);
                                                    v1975 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801B50B8[0])(
                                                              v1975,
                                                              v1491,
                                                              96LL);
                                                    off_1801B5150((CPolicyConfig *)&v1972);
                                                    v862 = v1521;
LABEL_1237:
                                                    v872 = HIDWORD(v1906);
                                                    v873 = v1906;
                                                    v1429 = v1961;
                                                    v874 = v862 - 1;
                                                    if ( !v874 )
                                                    {
                                                      v1905 = 0LL;
                                                      goto LABEL_1249;
                                                    }
                                                    v875 = v874 - 1;
                                                    if ( v875 )
                                                    {
                                                      if ( v875 != 1 )
                                                        goto LABEL_1249;
                                                      memset_0(v1991, 0, 0x28uLL);
                                                      v876 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1801B5148[0])(
                                                               0LL,
                                                               1LL);
                                                      v1991[0] = 40;
                                                      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_1801B5108)(
                                                                            v876,
                                                                            v1991) )
                                                        goto LABEL_1249;
                                                      ((void (__fastcall *)(_QWORD, char *))off_1801B5140[0])(
                                                        0LL,
                                                        &v1992);
                                                      ((void (__fastcall *)(_QWORD, _DWORD *))off_1801B5140[0])(
                                                        0LL,
                                                        v1993);
                                                      v877 = 50 * (v1993[0] - v873) / 100;
                                                      v878 = 50 * (v1993[1] - v872);
                                                    }
                                                    else
                                                    {
                                                      memset_0(v1994, 0, 0x28uLL);
                                                      v879 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1801B5148[0])(
                                                               0LL,
                                                               1LL);
                                                      v1994[0] = 40;
                                                      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_1801B5108)(
                                                                            v879,
                                                                            v1994) )
                                                      {
LABEL_1249:
                                                        v633 = 0;
LABEL_1251:
                                                        ((void (__fastcall *)(_QWORD, LPCWSTR))off_1801B5160[0])(
                                                          0LL,
                                                          lpModuleNamei);
                                                        v89 = v1599;
                                                        goto LABEL_1252;
                                                      }
                                                      ((void (__fastcall *)(_QWORD, int *))off_1801B5140[0])(
                                                        0LL,
                                                        &v1995);
                                                      ((void (__fastcall *)(_QWORD, _DWORD *))off_1801B5140[0])(
                                                        0LL,
                                                        v1996);
                                                      if ( v1429 )
                                                        v877 = v1995 + 5 * v1996[0] / 100;
                                                      else
                                                        v877 = 95 * (v1996[0] - v873) / 100;
                                                      v878 = 95 * (v1996[1] - v872);
                                                    }
                                                    LODWORD(v1905) = v877;
                                                    HIDWORD(v1905) = v878 / 100;
                                                    goto LABEL_1249;
                                                  }
                                                }
LABEL_1250:
                                                v633 = v1433;
                                                goto LABEL_1251;
                                              }
                                              v854 = 0;
                                              v1633 = 0;
                                            }
                                            v855 = 0;
                                            goto LABEL_1195;
                                          }
                                          if ( v1521 != 3 )
                                            goto LABEL_1188;
                                        }
                                        v852 = v1916;
                                        v853 = HIDWORD(v1916);
                                        goto LABEL_1188;
                                      }
                                      v1483 = 11;
                                      goto LABEL_1149;
                                    }
                                    v738 = v1847;
                                    v739 = v2040;
                                    v740 = 6LL;
                                    do
                                    {
                                      if ( !v1489 )
                                        *v739 = (__int64)v738;
                                      v741 = -1LL;
                                      do
                                        ++v741;
                                      while ( v738[v741] );
                                      v742 = &v738[v741 + 1];
                                      if ( v1489 == 1 )
                                        *v739 = (__int64)v742;
                                      v743 = -1LL;
                                      do
                                        ++v743;
                                      while ( v742[v743] );
                                      v744 = (__int64)&v742[v743 + 1];
                                      if ( v1489 == 2 )
                                        *v739 = v744;
                                      v745 = -1LL;
                                      do
                                        ++v745;
                                      while ( *(_BYTE *)(v744 + v745) );
                                      v746 = v745 + v744 + 1;
                                      if ( v1489 == 3 )
                                        *v739 = v746;
                                      v747 = -1LL;
                                      do
                                        ++v747;
                                      while ( *(_BYTE *)(v746 + v747) );
                                      v748 = v747 + v746 + 1;
                                      if ( v1489 == 4 )
                                        *v739 = v748;
                                      v749 = -1LL;
                                      do
                                        ++v749;
                                      while ( *(_BYTE *)(v748 + v749) );
                                      v750 = v749 + v748 + 1;
                                      if ( v1489 == 5 )
                                        *v739 = v750;
                                      v751 = -1LL;
                                      do
                                        ++v751;
                                      while ( *(_BYTE *)(v750 + v751) );
                                      v752 = v751 + v750 + 1;
                                      if ( v1489 == 6 )
                                        *v739 = v752;
                                      v753 = -1LL;
                                      do
                                        ++v753;
                                      while ( *(_BYTE *)(v752 + v753) );
                                      v754 = v753 + v752 + 1;
                                      if ( v1489 == 7 )
                                        *v739 = v754;
                                      v755 = -1LL;
                                      do
                                        ++v755;
                                      while ( *(_BYTE *)(v754 + v755) );
                                      v756 = v755 + v754 + 1;
                                      if ( v1489 == 8 )
                                        *v739 = v756;
                                      v757 = -1LL;
                                      do
                                        ++v757;
                                      while ( *(_BYTE *)(v756 + v757) );
                                      v758 = v757 + v756 + 1;
                                      if ( v1489 == 9 )
                                        *v739 = v758;
                                      v759 = -1LL;
                                      do
                                        ++v759;
                                      while ( *(_BYTE *)(v758 + v759) );
                                      v760 = v759 + v758 + 1;
                                      if ( v1489 == 10 )
                                        *v739 = v760;
                                      v761 = -1LL;
                                      do
                                        ++v761;
                                      while ( *(_BYTE *)(v760 + v761) );
                                      v762 = v761 + v760 + 1;
                                      if ( v1489 == 11 )
                                        *v739 = v762;
                                      v763 = -1LL;
                                      do
                                        ++v763;
                                      while ( *(_BYTE *)(v762 + v763) );
                                      v764 = v763 + v762 + 1;
                                      if ( v1489 == 12 )
                                        *v739 = v764;
                                      v765 = -1LL;
                                      do
                                        ++v765;
                                      while ( *(_BYTE *)(v764 + v765) );
                                      v766 = v765 + v764 + 1;
                                      if ( v1489 == 13 )
                                        *v739 = v766;
                                      v767 = -1LL;
                                      do
                                        ++v767;
                                      while ( *(_BYTE *)(v766 + v767) );
                                      v768 = v767 + v766 + 1;
                                      if ( v1489 == 14 )
                                        *v739 = v768;
                                      v769 = -1LL;
                                      do
                                        ++v769;
                                      while ( *(_BYTE *)(v768 + v769) );
                                      v770 = v769 + v768 + 1;
                                      if ( v1489 == 15 )
                                        *v739 = v770;
                                      v771 = -1LL;
                                      do
                                        ++v771;
                                      while ( *(_BYTE *)(v770 + v771) );
                                      v772 = v771 + v770 + 1;
                                      if ( v1489 == 16 )
                                        *v739 = v772;
                                      v773 = -1LL;
                                      do
                                        ++v773;
                                      while ( *(_BYTE *)(v772 + v773) );
                                      v774 = v773 + v772 + 1;
                                      if ( v1489 == 17 )
                                        *v739 = v774;
                                      v775 = -1LL;
                                      do
                                        ++v775;
                                      while ( *(_BYTE *)(v774 + v775) );
                                      v776 = v775 + v774 + 1;
                                      if ( v1489 == 18 )
                                        *v739 = v776;
                                      v777 = -1LL;
                                      do
                                        ++v777;
                                      while ( *(_BYTE *)(v776 + v777) );
                                      v778 = v777 + v776 + 1;
                                      if ( v1489 == 19 )
                                        *v739 = v778;
                                      v779 = -1LL;
                                      do
                                        ++v779;
                                      while ( *(_BYTE *)(v778 + v779) );
                                      v780 = v779 + v778 + 1;
                                      if ( v1489 == 20 )
                                        *v739 = v780;
                                      v781 = -1LL;
                                      do
                                        ++v781;
                                      while ( *(_BYTE *)(v780 + v781) );
                                      v782 = v781 + v780 + 1;
                                      if ( v1489 == 21 )
                                        *v739 = v782;
                                      v783 = -1LL;
                                      do
                                        ++v783;
                                      while ( *(_BYTE *)(v782 + v783) );
                                      v784 = v783 + v782 + 1;
                                      if ( v1489 == 22 )
                                        *v739 = v784;
                                      v785 = -1LL;
                                      do
                                        ++v785;
                                      while ( *(_BYTE *)(v784 + v785) );
                                      v786 = v785 + v784 + 1;
                                      if ( v1489 == 23 )
                                        *v739 = v786;
                                      v787 = -1LL;
                                      do
                                        ++v787;
                                      while ( *(_BYTE *)(v786 + v787) );
                                      v788 = v787 + v786 + 1;
                                      if ( v1489 == 24 )
                                        *v739 = v788;
                                      v789 = -1LL;
                                      do
                                        ++v789;
                                      while ( *(_BYTE *)(v788 + v789) );
                                      v790 = v789 + v788 + 1;
                                      if ( v1489 == 25 )
                                        *v739 = v790;
                                      v791 = -1LL;
                                      do
                                        ++v791;
                                      while ( *(_BYTE *)(v790 + v791) );
                                      v792 = v791 + v790 + 1;
                                      if ( v1489 == 26 )
                                        *v739 = v792;
                                      v793 = -1LL;
                                      do
                                        ++v793;
                                      while ( *(_BYTE *)(v792 + v793) );
                                      v794 = v793 + v792 + 1;
                                      if ( v1489 == 27 )
                                        *v739 = v794;
                                      v795 = -1LL;
                                      do
                                        ++v795;
                                      while ( *(_BYTE *)(v794 + v795) );
                                      v796 = v795 + v794 + 1;
                                      if ( v1489 == 28 )
                                        *v739 = v796;
                                      v797 = -1LL;
                                      do
                                        ++v797;
                                      while ( *(_BYTE *)(v796 + v797) );
                                      v798 = v797 + v796 + 1;
                                      if ( v1489 == 29 )
                                        *v739 = v798;
                                      v799 = -1LL;
                                      do
                                        ++v799;
                                      while ( *(_BYTE *)(v798 + v799) );
                                      v800 = v799 + v798 + 1;
                                      if ( v1489 == 30 )
                                        *v739 = v800;
                                      v801 = -1LL;
                                      do
                                        ++v801;
                                      while ( *(_BYTE *)(v800 + v801) );
                                      v802 = v801 + v800 + 1;
                                      if ( v1489 == 31 )
                                        *v739 = v802;
                                      v803 = -1LL;
                                      do
                                        ++v803;
                                      while ( *(_BYTE *)(v802 + v803) );
                                      v804 = v803 + v802 + 1;
                                      if ( v1489 == 32 )
                                        *v739 = v804;
                                      v805 = -1LL;
                                      do
                                        ++v805;
                                      while ( *(_BYTE *)(v804 + v805) );
                                      v806 = v805 + v804 + 1;
                                      if ( v1489 == 33 )
                                        *v739 = v806;
                                      v807 = -1LL;
                                      do
                                        ++v807;
                                      while ( *(_BYTE *)(v806 + v807) );
                                      v808 = v807 + v806 + 1;
                                      if ( v1489 == 34 )
                                        *v739 = v808;
                                      v809 = -1LL;
                                      do
                                        ++v809;
                                      while ( *(_BYTE *)(v808 + v809) );
                                      v810 = v809 + v808 + 1;
                                      if ( v1489 == 35 )
                                        *v739 = v810;
                                      v811 = -1LL;
                                      do
                                        ++v811;
                                      while ( *(_BYTE *)(v810 + v811) );
                                      v812 = v811 + v810 + 1;
                                      if ( v1489 == 36 )
                                        *v739 = v812;
                                      v813 = -1LL;
                                      do
                                        ++v813;
                                      while ( *(_BYTE *)(v812 + v813) );
                                      v814 = v813 + v812 + 1;
                                      if ( v1489 == 37 )
                                        *v739 = v814;
                                      v815 = -1LL;
                                      do
                                        ++v815;
                                      while ( *(_BYTE *)(v814 + v815) );
                                      ++v739;
                                      v738 = (_BYTE *)(v815 + v814 + 1);
                                      --v740;
                                    }
                                    while ( v740 );
                                    v816 = operator new(0x18uLL);
                                    SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1849, v816);
                                    v817 = v1849;
                                    v1616 = v1849;
                                    if ( !v1849 )
                                    {
                                      v690 = -2147024882;
                                      v1433 = -2147024882;
                                      goto LABEL_1133;
                                    }
                                    v1490 = 0;
                                    *(_QWORD *)v1849 = 0LL;
                                    v818 = (__int16 *)&v2044;
                                    v819 = v817;
                                    *((_QWORD *)v817 + 1) = 0LL;
                                    *((_QWORD *)v817 + 2) = 0LL;
                                    v820 = 0;
                                    v1440 = v817;
                                    v1525 = &v2044;
                                    while ( 2 )
                                    {
                                      v821 = *v818;
                                      v822 = &unk_180187DA8;
                                      v823 = 0LL;
                                      while ( v821 != *v822 )
                                      {
                                        v823 = (unsigned int)(v823 + 1);
                                        ++v822;
                                        if ( (unsigned int)v823 >= 6 )
                                          goto LABEL_1113;
                                      }
                                      v824 = (_BYTE *)v2040[v823];
                                      v825 = -1LL;
                                      v1573 = v824;
                                      do
                                        v60 = v824[++v825] == 0;
                                      while ( !v60 );
                                      v826 = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))off_1801B50C0[0])(
                                               65001LL,
                                               0LL,
                                               v824,
                                               (unsigned int)(v825 + 1),
                                               0LL,
                                               0);
                                      v1632 = v826;
                                      if ( v826 )
                                      {
                                        v827 = operator new(2LL * v826);
                                        *(_QWORD *)v1440 = v827;
                                        if ( !v827 )
                                        {
                                          v690 = -2147024882;
LABEL_1124:
                                          v1433 = v690;
                                          goto LABEL_1125;
                                        }
                                        v828 = -1LL;
                                        do
                                          v60 = v1573[++v828] == 0;
                                        while ( !v60 );
                                        if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, void *, int))off_1801B50C0[0])(
                                               65001LL,
                                               0LL,
                                               v1573,
                                               (unsigned int)(v828 + 1),
                                               v827,
                                               v1632) )
                                        {
                                          v819 = v1440;
                                          v820 = v1490;
LABEL_1113:
                                          ++v820;
                                          v818 = (__int16 *)v1525 + 1;
                                          v1490 = v820;
                                          v819 += 4;
                                          v1525 = (int *)((char *)v1525 + 2);
                                          v1440 = v819;
                                          if ( v820 < 3 )
                                            continue;
                                          v1961 = v1566;
                                          v1849 = 0LL;
                                          v1843 = (void **)v817;
                                          goto LABEL_1133;
                                        }
                                        v829 = GetLastError();
                                        v1433 = v829;
                                        v690 = v829;
                                        if ( v829 > 0 )
                                        {
                                          v690 = (unsigned __int16)v829 | 0x80070000;
                                          v1433 = v690;
                                        }
                                        if ( v690 < 0 )
                                        {
LABEL_1125:
                                          v831 = 3LL;
                                          v1441 = 3LL;
                                          do
                                          {
                                            if ( *(_QWORD *)v817 )
                                            {
                                              v832 = -1LL;
                                              do
                                                v60 = *(_WORD *)(*(_QWORD *)v817 + 2 * v832++ + 2) == 0;
                                              while ( !v60 );
                                              memset(*(void **)v817, 0, 2 * v832 + 2);
                                              v817 = v1616;
                                              operator delete(*(void **)v1616);
                                              v831 = v1441;
                                            }
                                            v817 += 4;
                                            --v831;
                                            v1616 = v817;
                                            v1441 = v831;
                                          }
                                          while ( v831 );
                                          goto LABEL_1133;
                                        }
                                      }
                                      else
                                      {
                                        v830 = GetLastError();
                                        v1433 = v830;
                                        v690 = v830;
                                        if ( v830 > 0 )
                                        {
                                          v690 = (unsigned __int16)v830 | 0x80070000;
                                          v1433 = v690;
                                        }
                                        if ( v690 < 0 )
                                          goto LABEL_1125;
                                      }
                                      break;
                                    }
                                    v690 = -2147467259;
                                    goto LABEL_1124;
                                  }
                                  v635 = GetLastError();
                                  v1433 = v635;
                                  v636 = v635 < 0;
                                  if ( v635 <= 0 )
                                  {
LABEL_868:
                                    if ( !v636 )
                                      v1433 = -2147467259;
                                    goto LABEL_884;
                                  }
                                }
                                else
                                {
                                  v635 = GetLastError();
                                  v1433 = v635;
                                  v636 = v635 < 0;
                                  if ( v635 <= 0 )
                                    goto LABEL_868;
                                }
                                v1433 = (unsigned __int16)v635 | 0x80070000;
                                v636 = 1;
                                goto LABEL_868;
                              }
                              v569 = dword_1801B7260;
LABEL_859:
                              dword_1801B7260 = v569 + 1;
                              goto LABEL_860;
                            }
                            while ( 1 )
                            {
                              v620 = -1LL;
                              do
                                v60 = v618[++v620] == 0;
                              while ( !v60 );
                              lpModuleNamef = &v618[v620 + 1];
                              v1460 = (char *)&unk_1801B77C0 + 24 * v1565;
                              if ( !GetModuleHandleExW(0, v618, (HMODULE *)v1460) )
                                break;
                              v621 = (HMODULE *)((char *)&unk_1801B77C0 + 24 * v1565);
                              v619 = 0;
                              v1432 = 0;
                              if ( **(_WORD **)v1460 == 23117 )
                              {
                                v622 = *(int *)(*(_QWORD *)v1460 + 60LL);
                                if ( (unsigned int)v622 < 0x10000000 )
                                {
                                  v623 = *(_QWORD *)v1460 + v622;
                                  if ( v623 >= *(_QWORD *)v1460 )
                                  {
                                    if ( *(_DWORD *)v623 == 17744 )
                                    {
                                      if ( ((*(_WORD *)(v623 + 24) - 267) & 0xFEFF) != 0 )
                                      {
                                        v619 = -1073741811;
                                        v1432 = -1073741811;
                                      }
                                      else
                                      {
                                        *(_QWORD *)(v1460 + 12) = *(_QWORD *)(v623 + 136);
                                        *((_DWORD *)v1460 + 2) = *(_DWORD *)(v623 + 80);
                                      }
                                    }
                                    else
                                    {
                                      v619 = -1073741701;
                                      v1432 = -1073741701;
                                    }
                                  }
                                  else
                                  {
                                    v619 = -1073741701;
                                    v1432 = -1073741701;
                                  }
                                }
                                else
                                {
                                  v619 = -1073741701;
                                  v1432 = -1073741701;
                                }
                              }
                              else
                              {
                                v619 = -1073741701;
                                v1432 = -1073741701;
                              }
                              v624 = 0;
                              v1488 = 0;
                              v618 = lpModuleNamef + 2;
                              for ( i1 = *(_DWORD *)lpModuleNamef; v624 < i1; v1488 = v624 )
                              {
                                v625 = (const CHAR *)v618;
                                v626 = -1LL;
                                do
                                  ++v626;
                                while ( *((_BYTE *)v618 + v626) );
                                v618 = (const WCHAR *)((char *)v618 + v626 + 1);
                                lpModuleNameg = v618;
                                if ( v619 < 0 )
                                {
                                  v628 = v1555;
                                }
                                else
                                {
                                  v627 = GetProcAddress(*v621, v625);
                                  v619 = v1432;
                                  if ( !v627 )
                                    goto LABEL_850;
                                  v628 = v1555;
                                  v621 = (HMODULE *)((char *)&unk_1801B77C0 + 24 * v1565);
                                  off_1801B5000[v1555] = v627;
                                  v618 = lpModuleNameg;
                                  v624 = v1488;
                                }
                                ++v624;
                                v1555 = v628 + 1;
                              }
                              ++v1565;
                              if ( !*(_BYTE *)v618 )
                                goto LABEL_850;
                            }
                          }
                          else
                          {
                            operator delete(lpModuleNamee);
                          }
                        }
                        v619 = -1073741702;
                        v1432 = -1073741702;
                        goto LABEL_850;
                      }
                      v506 = dword_1801B7260;
LABEL_810:
                      dword_1801B7260 = v506 + 1;
                      goto LABEL_811;
                    }
                    while ( 1 )
                    {
                      v557 = -1LL;
                      do
                        v60 = v555[++v557] == 0;
                      while ( !v60 );
                      lpModuleNameb = &v555[v557 + 1];
                      v1458 = (char *)&unk_1801B77C0 + 24 * v1554;
                      if ( !GetModuleHandleExW(0, v555, (HMODULE *)v1458) )
                        break;
                      v558 = (HMODULE *)((char *)&unk_1801B77C0 + 24 * v1554);
                      v556 = 0;
                      v1482 = 0;
                      if ( **(_WORD **)v1458 == 23117 )
                      {
                        v559 = *(int *)(*(_QWORD *)v1458 + 60LL);
                        if ( (unsigned int)v559 < 0x10000000 )
                        {
                          v560 = *(_QWORD *)v1458 + v559;
                          if ( v560 >= *(_QWORD *)v1458 )
                          {
                            if ( *(_DWORD *)v560 == 17744 )
                            {
                              if ( ((*(_WORD *)(v560 + 24) - 267) & 0xFEFF) != 0 )
                              {
                                v556 = -1073741811;
                                v1482 = -1073741811;
                              }
                              else
                              {
                                *(_QWORD *)(v1458 + 12) = *(_QWORD *)(v560 + 136);
                                *((_DWORD *)v1458 + 2) = *(_DWORD *)(v560 + 80);
                              }
                            }
                            else
                            {
                              v556 = -1073741701;
                              v1482 = -1073741701;
                            }
                          }
                          else
                          {
                            v556 = -1073741701;
                            v1482 = -1073741701;
                          }
                        }
                        else
                        {
                          v556 = -1073741701;
                          v1482 = -1073741701;
                        }
                      }
                      else
                      {
                        v556 = -1073741701;
                        v1482 = -1073741701;
                      }
                      v561 = 0;
                      v1565 = 0;
                      v555 = lpModuleNameb + 2;
                      for ( i2 = *(_DWORD *)lpModuleNameb; v561 < i2; v1565 = v561 )
                      {
                        v562 = (const CHAR *)v555;
                        v563 = -1LL;
                        do
                          ++v563;
                        while ( *((_BYTE *)v555 + v563) );
                        v555 = (const WCHAR *)((char *)v555 + v563 + 1);
                        lpModuleNamec = v555;
                        if ( v556 < 0 )
                        {
                          v565 = v1426;
                        }
                        else
                        {
                          v564 = GetProcAddress(*v558, v562);
                          v556 = v1482;
                          if ( !v564 )
                            goto LABEL_801;
                          v565 = v1426;
                          v558 = (HMODULE *)((char *)&unk_1801B77C0 + 24 * v1554);
                          off_1801B5000[v1426] = v564;
                          v555 = lpModuleNamec;
                          v561 = v1565;
                        }
                        ++v561;
                        v1426 = v565 + 1;
                      }
                      ++v1554;
                      if ( !*(_BYTE *)v555 )
                        goto LABEL_801;
                    }
                  }
                  else
                  {
                    operator delete(lpModuleNamea);
                  }
                }
                v556 = -1073741702;
                v1482 = -1073741702;
                goto LABEL_801;
              }
              v1804 = 0LL;
              v1805 = 0LL;
              v1806 = 0LL;
              v1807 = 0LL;
              v1808 = 0LL;
              v1809 = 0LL;
              v1457 = 0LL;
              if ( !v211 )
              {
                v214 = -1073741811;
                goto LABEL_372;
              }
              v215 = v204;
              lpModuleName = v204;
              if ( v204 )
              {
                v1653 = v204 + 8LL;
                v1623 = operator new(v1653);
                v216 = v1623;
                if ( v1623 )
                {
                  v217 = v1572;
                  v218 = 0;
                  v1600 = 0;
                  v219 = 0LL;
                  if ( v215 )
                  {
                    if ( v215 >= 0x20 )
                    {
                      v220 = 0LL;
                      v221 = 0LL;
                      do
                      {
                        v220 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1572[v219]), v220);
                        v222 = _mm_loadu_si128((const __m128i *)&v1572[v219 + 16]);
                        v219 += 32LL;
                        v223 = _mm_xor_si128(v222, v221);
                        v221 = v223;
                      }
                      while ( v219 < (v215 & 0xFFFFFFE0) );
                      v224 = _mm_xor_si128(v223, v220);
                      v225 = _mm_xor_si128(v224, _mm_srli_si128(v224, 8));
                      v226 = _mm_xor_si128(v225, _mm_srli_si128(v225, 4));
                      v227 = _mm_xor_si128(v226, _mm_srli_si128(v226, 2));
                      v218 = _mm_cvtsi128_si32(_mm_xor_si128(v227, _mm_srli_si128(v227, 1)));
                      v1600 = v218;
                    }
                    if ( v219 < v215 )
                    {
                      do
                        v218 ^= v1572[v219++];
                      while ( v219 < v215 );
                      v1600 = v218;
                    }
                  }
                  v1976 = 0xC81ECB17B1B54A58uLL;
                  v1694 = 0;
                  v228 = v1623;
                  v229 = -1;
                  v1695 = -1;
                  v230 = 0;
                  v1631 = 0;
                  v1487 = 0;
                  v231 = v215 & 7;
                  if ( (v215 & 7) != 0 )
                  {
                    v232 = 0;
                    v233 = 0;
                    v234 = 56;
                    do
                    {
                      v235 = *v217++;
                      if ( v233 >= 4 )
                        v232 |= v235 << v234;
                      else
                        v230 |= v235 << (v234 - 32);
                      ++v233;
                      v234 -= 8;
                    }
                    while ( v233 < (int)v231 );
                    v228 = v1623;
                    v216 = v1623;
                    v1487 = v230;
                    v1631 = v232;
                    v230 ^= 0xB17A307A;
                    v236 = v232 ^ 0x42F6B18D;
                    v1694 = v230;
                    v1695 = v232 ^ 0x42F6B18D;
                    v237 = 0;
                    if ( (v215 & 7) != 0 )
                    {
                      do
                      {
                        if ( v237 >= 4 )
                        {
                          v236 = __ROL4__(v236, 8);
                          v238 = v236;
                        }
                        else
                        {
                          v230 = __ROL4__(v230, 8);
                          v238 = v230;
                        }
                        ++v237;
                        *v228++ = v238;
                      }
                      while ( v237 < (int)v231 );
                      v230 = v1694;
                      v236 = v1695;
                      v216 = v1623;
                    }
                    if ( v231 <= 4 )
                    {
                      v229 = 0;
                      v1695 = 0;
                      if ( v231 < 4 )
                      {
                        v230 = v230 >> (8 * (4 - v231)) << (8 * (4 - v231));
                        v1694 = v230;
                      }
                    }
                    else
                    {
                      v229 = v236 >> (8 * (8 - v231)) << (8 * (8 - v231));
                      v1695 = v229;
                    }
                  }
                  v239 = v215 >> 3;
                  if ( v215 >> 3 )
                  {
                    v240 = HIDWORD(v1976);
                    v241 = v1631;
                    v242 = v1487;
                    v1565 = HIWORD(HIDWORD(v1976));
                    v243 = HIWORD(HIDWORD(v1976));
                    v1478 = WORD1(v1976);
                    v244 = WORD2(v1976);
                    v245 = HIDWORD(v1976) ^ 0xB1B54A58;
                    v1496 = v228 + 7;
                    v246 = v217 + 2;
                    do
                    {
                      v247 = v246[1] | ((*v246 | ((*(v246 - 1) | (*(v246 - 2) << 8)) << 8)) << 8);
                      v248 = v246[5] | ((v246[4] | ((v246[3] | (v246[2] << 8)) << 8)) << 8);
                      v1514 = v246 + 8;
                      v249 = v248 ^ v229;
                      v250 = v240 ^ v230 ^ v247 ^ (v249 - 19032);
                      v251 = (__ROR4__(v250, 7) + WORD1(v1976) * __ROR4__(v230 ^ v247 ^ (v249 - 19032), 15)) ^ v249;
                      v252 = (v244 * __ROR4__(v251 - 1313519016, 9) - __ROR4__(v251, 10)) ^ v250;
                      v253 = (__ROL4__(v252, 5) + v243 * __ROL4__(v244 ^ v252, 4)) ^ v251;
                      v254 = (HIDWORD(v1976) - (v253 ^ 0xB1B54A58)) ^ v252;
                      v255 = (WORD1(v1976) * (v254 - 19032) - (v254 >> 6)) ^ v253;
                      v256 = (19032 * (v244 ^ __ROR4__(v255, 15))) ^ v254;
                      v257 = (v244 * (v243 + __ROR4__(~v256, 3))) ^ v255;
                      v258 = (v257 - HIDWORD(v1976) - 19032) ^ v256;
                      v259 = (v1478 * (v258 ^ v243)) ^ __ROR4__(v258, 10) ^ v257;
                      v260 = __ROR4__(v259, 3) ^ (v244 * __ROL4__(v259 ^ 0x4A58, 6)) ^ v258;
                      v261 = (19032 * (__ROR4__(v260, 15) - v243)) ^ v259;
                      v262 = (v261 >> 15) ^ (19032 * __ROL4__(v261 - v244, 3)) ^ (v261 >> 1) ^ (19032 * (v261 ^ v243)) ^ v260;
                      v263 = (WORD1(v1976) * (v262 - v244) - (v262 >> 13)) ^ v261;
                      v264 = __ROR4__(v263, 11) ^ (v244 * __ROR4__(-1313519016 - v263, 9)) ^ v262;
                      v265 = (v264 - v243 + 1313519016) ^ v263;
                      v266 = (19032 * (v1478 ^ v265) - __ROR4__(v265, 7)) ^ v264;
                      v267 = (WORD1(v1976) * __ROL4__(v243 ^ v266, 4) - __ROR4__(v266, 16)) ^ v265;
                      v268 = (__ROR4__(v267, 4) + v244 * __ROR4__(-1313519016 - v267, 10)) ^ v266;
                      v269 = __ROR4__(v268, 9) ^ (v243 * __ROR4__(v268 + 1313519016, 4)) ^ v267;
                      v270 = (19032 * __ROL4__(HIDWORD(v1976) ^ v269, 8) - __ROL4__(v269, 2)) ^ v268;
                      v271 = (WORD1(v1976) * __ROR4__(HIDWORD(v1976) - v270, 11) - __ROR4__(v270, 12)) ^ v269;
                      v272 = (v271 >> 8) ^ (v244 * (v271 ^ WORD1(v1976))) ^ v270;
                      v1694 = v242 ^ v272;
                      v242 = v247;
                      v1695 = v241 ^ v245 ^ v272 ^ v271;
                      v241 = v248;
                      *(v1496 - 4) = v1694;
                      v1694 = __ROR4__(v1694, 8);
                      v246 = v1514;
                      *v1496 = v1695;
                      v1695 = __ROR4__(v1695, 8);
                      *(v1496 - 5) = v1694;
                      v1694 = __ROR4__(v1694, 8);
                      *(v1496 - 1) = v1695;
                      v1695 = __ROR4__(v1695, 8);
                      *(v1496 - 6) = v1694;
                      v1694 = __ROR4__(v1694, 8);
                      *(v1496 - 2) = v1695;
                      v1695 = __ROR4__(v1695, 8);
                      *(v1496 - 7) = v1694;
                      *(v1496 - 3) = v1695;
                      v230 = __ROR4__(v1694, 8);
                      v229 = __ROR4__(v1695, 8);
                      v1496 += 8;
                      v240 = HIDWORD(v1976);
                      v1694 = v230;
                      v1695 = v229;
                      --v239;
                    }
                    while ( v239 );
                    v2 = v1663;
                    v1 = v1801;
                    v215 = lpModuleName;
                    v216 = v1623;
                  }
                  *(_QWORD *)&v216[v215] = v1600;
                  v1804 = &qword_1801B6750;
                  v1806 = &unk_1801B66B0;
                  v1808 = v216;
                  v1809 = v1653;
                  v1805 = 8LL;
                  v1807 = 160LL;
                  v273 = GetProcessHeap();
                  v274 = HeapAlloc(v273, 8u, 0x30uLL);
                  v275 = v274;
                  if ( v274 )
                  {
                    *v274 = v1653;
                    v276 = GetProcessHeap();
                    v277 = HeapAlloc(v276, 8u, (unsigned int)v1653);
                    if ( v277 )
                    {
                      *((_QWORD *)v275 + 1) = v277;
                      memcpy_0(v277, v1623, (unsigned int)v1653);
                      v275[4] = 160;
                      v278 = GetProcessHeap();
                      v279 = HeapAlloc(v278, 8u, 0xA0uLL);
                      if ( v279 )
                      {
                        *((_QWORD *)v275 + 3) = v279;
                        *v279 = unk_1801B66B0;
                        v279[1] = *((_OWORD *)&unk_1801B66B0 + 1);
                        v279[2] = *((_OWORD *)&unk_1801B66B0 + 2);
                        v279[3] = *((_OWORD *)&unk_1801B66B0 + 3);
                        v279[4] = *((_OWORD *)&unk_1801B66B0 + 4);
                        v279[5] = *((_OWORD *)&unk_1801B66B0 + 5);
                        v279[6] = *((_OWORD *)&unk_1801B66B0 + 6);
                        v279[7] = *((_OWORD *)&unk_1801B66B0 + 7);
                        v279[8] = *((_OWORD *)&unk_1801B66B0 + 8);
                        v279[9] = *((_OWORD *)&unk_1801B66B0 + 9);
                        v275[8] = 8;
                        v280 = GetProcessHeap();
                        v281 = HeapAlloc(v280, 8u, 8uLL);
                        if ( v281 )
                        {
                          *((_QWORD *)v275 + 5) = v281;
                          v214 = 0;
                          *v281 = qword_1801B6750;
                          v213 = v275;
                          v1457 = v275;
                          goto LABEL_358;
                        }
                      }
                    }
                    v282 = (void *)*((_QWORD *)v275 + 1);
                    if ( v282 )
                    {
                      v283 = GetProcessHeap();
                      HeapFree(v283, 0, v282);
                      *((_QWORD *)v275 + 1) = 0LL;
                    }
                    v284 = (void *)*((_QWORD *)v275 + 3);
                    if ( v284 )
                    {
                      v285 = GetProcessHeap();
                      HeapFree(v285, 0, v284);
                      *((_QWORD *)v275 + 3) = 0LL;
                    }
                    v286 = (void *)*((_QWORD *)v275 + 5);
                    if ( v286 )
                    {
                      v287 = GetProcessHeap();
                      HeapFree(v287, 0, v286);
                      *((_QWORD *)v275 + 5) = 0LL;
                    }
                    v288 = GetProcessHeap();
                    HeapFree(v288, 0, v275);
                  }
                  v213 = 0LL;
                  v214 = -1073741801;
LABEL_358:
                  v120 = v1901;
                  v90 = 4LL;
                  if ( v214 >= 0 )
                  {
                    v1800 = v213;
                    v213 = 0LL;
                    v1457 = 0LL;
                  }
                  goto LABEL_362;
                }
                v120 = v1901;
                v213 = 0LL;
                v90 = 4LL;
              }
              v214 = -1073741823;
LABEL_362:
              v1497 = v1808;
              if ( v1808 )
              {
                v289 = GetProcessHeap();
                HeapFree(v289, 0, v1497);
                v120 = v1901;
                v90 = 4LL;
                v213 = v1457;
                v1808 = 0LL;
              }
              if ( v213 )
              {
                v1498 = (void *)v1457[1];
                if ( v1498 )
                {
                  v290 = GetProcessHeap();
                  HeapFree(v290, 0, v1498);
                  v1457[1] = 0LL;
                }
                v1499 = (void *)v1457[3];
                if ( v1499 )
                {
                  v291 = GetProcessHeap();
                  HeapFree(v291, 0, v1499);
                  v1457[3] = 0LL;
                }
                v1500 = (void *)v1457[5];
                if ( v1500 )
                {
                  v292 = GetProcessHeap();
                  HeapFree(v292, 0, v1500);
                  v1457[5] = 0LL;
                }
                v293 = GetProcessHeap();
                HeapFree(v293, 0, v1457);
                v90 = 4LL;
                v120 = v1901;
              }
LABEL_372:
              v89 = v214 | 0x10000000;
              v1599 = v89;
              if ( v89 < 0 )
              {
                v329 = 0LL;
                v309 = 0LL;
                goto LABEL_438;
              }
              v1501 = (unsigned int *)v1800;
              v1696 = v90;
              v294 = RtlUIntAdd((unsigned int)v90, *(unsigned int *)v1800, &v1696);
              if ( v294 < 0
                || (v294 = RtlUIntAdd(v1696, (unsigned int)v90, &v1696), v294 < 0)
                || (v294 = RtlUIntAdd(v1696, *(unsigned int *)(v296 + 16), &v1696), v294 < 0)
                || (v294 = RtlUIntAdd(v1696, (unsigned int)v90, &v1696), v294 < 0) )
              {
                v298 = v1697;
              }
              else
              {
                v294 = RtlUIntAdd(v1696, *(unsigned int *)(v297 + 32), &v1696);
                v298 = v1697;
                if ( v294 >= 0 )
                  v298 = v1696;
                v1697 = v298;
              }
              if ( v294 >= 0 )
              {
                v299 = v298;
                v300 = GetProcessHeap();
                v301 = HeapAlloc(v300, 8u, v299);
                v1624 = v301;
                if ( v301 )
                {
                  v1815 = v301;
                  *v301 = *v1501;
                  v294 = RtlULongLongAdd(v301, 4LL, &v1815);
                  if ( v294 >= 0 )
                  {
                    memcpy_0(v1815, v302[1], *(unsigned int *)v302);
                    v294 = RtlULongLongAdd(v1815, *v1501, &v1815);
                    if ( v294 >= 0 )
                    {
                      v304 = v1815;
                      *(_DWORD *)v1815 = *(_DWORD *)(v303 + 16);
                      v294 = RtlULongLongAdd(v304, 4LL, &v1815);
                      if ( v294 >= 0 )
                      {
                        memcpy_0(v1815, *(const void **)(v305 + 24), *(unsigned int *)(v305 + 16));
                        v294 = RtlULongLongAdd(v1815, v1501[4], &v1815);
                        if ( v294 >= 0 )
                        {
                          v307 = v1815;
                          *(_DWORD *)v1815 = *(_DWORD *)(v306 + 32);
                          v294 = RtlULongLongAdd(v307, 4LL, &v1815);
                          if ( v294 >= 0 )
                          {
                            memcpy_0(v1815, *(const void **)(v308 + 40), *(unsigned int *)(v308 + 32));
                            v294 = RtlULongLongAdd(v1815, v1501[8], &v1815);
                            if ( v294 >= 0 )
                            {
                              v309 = v1624;
                              v90 = 4LL;
                              v120 = v1901;
                              v295 = v1561;
                              v1602 = v1624;
                              v1651 = v1697;
LABEL_394:
                              v89 = v294 | 0x10000000;
                              v1599 = v89;
                              if ( v89 < 0 )
                              {
                                v329 = 0LL;
                                goto LABEL_438;
                              }
                              v1816 = 0LL;
                              v1698 = 0;
                              v1817 = 0LL;
                              v1699 = 0;
                              v1700 = 8;
                              v311 = RtlUIntAdd(8LL, v295, &v1700);
                              v89 = v311 | 0x10000000;
                              v1599 = v311 | 0x10000000;
                              if ( v311 < 0 )
                                goto LABEL_462;
                              v312 = (v1700 + 7) & 0xFFFFFFF8;
                              if ( (unsigned int)v312 >= v1700 )
                              {
                                v1702 = (v1700 + 7) & 0xFFFFFFF8;
                                v313 = RtlUIntAdd(v312, 8LL, &v1702);
                                v314 = v1701;
                                v89 = v313;
                                v1599 = v313;
                                if ( v313 >= 0 )
                                  v314 = v1702;
                                v1701 = v314;
                              }
                              else
                              {
                                v89 = -1073741675;
                                v1599 = -1073741675;
                              }
                              if ( v89 < 0 )
                                goto LABEL_462;
                              if ( !*(_QWORD *)&v1902[1] || v120 <= 1 )
                                goto LABEL_461;
                              v315 = *(unsigned int **)&v1902[1];
                              v1818 = *(unsigned int **)&v1902[1];
                              while ( 1 )
                              {
                                v1515 = *v315;
                                v1599 = RtlULongLongAdd(v315, 4LL, &v1818);
                                v89 = v1599;
                                if ( v1599 < 0 )
                                  break;
                                v1599 = RtlULongLongAdd(v1818, v1515, &v1818);
                                v89 = v1599;
                                if ( v1599 < 0 )
                                  break;
                                v315 = v1818;
                                if ( v316 != -1 )
                                {
                                  v1599 = RtlULongLongAdd(v1818, 4LL, &v1818);
                                  v89 = v1599;
                                  if ( v1599 >= 0 )
                                  {
                                    v318 = v1818;
                                    v1698 = v317;
                                    if ( !v317 )
                                      v318 = 0LL;
                                    v1818 = v318;
                                    v1816 = v318;
                                  }
                                  break;
                                }
                              }
                              if ( v89 < 0 )
                                goto LABEL_462;
                              if ( v120 > 2 )
                              {
                                v319 = *(_DWORD **)&v1902[1];
                                v320 = 0;
                                v1819 = *(_DWORD **)&v1902[1];
                                while ( 1 )
                                {
                                  v1599 = RtlULongLongAdd(v319, 4LL, &v1819);
                                  v89 = v1599;
                                  if ( v1599 < 0 )
                                    break;
                                  v1599 = RtlULongLongAdd(v1819, v322, &v1819);
                                  v89 = v1599;
                                  if ( v1599 < 0 )
                                    break;
                                  v319 = v1819;
                                  if ( (unsigned int)++v320 >= 2 )
                                  {
                                    v323 = *v1819;
                                    v1599 = RtlULongLongAdd(v1819, 4LL, &v1819);
                                    v89 = v1599;
                                    if ( v1599 >= 0 )
                                    {
                                      v324 = v1819;
                                      v1699 = v323;
                                      if ( !v323 )
                                        v324 = 0LL;
                                      v1819 = v324;
                                      v1817 = v324;
                                    }
                                    break;
                                  }
                                }
                                if ( v89 >= 0 )
                                {
                                  v1703 = 4;
                                  v1599 = RtlUIntAdd(4LL, v321, &v1703);
                                  v89 = v1599;
                                  if ( v1599 < 0 )
                                  {
                                    v90 = v325;
                                  }
                                  else
                                  {
                                    v1599 = RtlUIntAdd(v1703, 4LL, &v1703);
                                    v89 = v1599;
                                    if ( v1599 < 0 )
                                    {
                                      v90 = 4LL;
                                    }
                                    else
                                    {
                                      v1599 = RtlUIntAdd(v1703, v326, &v1703);
                                      v89 = v1599;
                                      v90 = 4LL;
                                      if ( v1599 >= 0 )
                                      {
                                        v1599 = RtlUIntAdd(v1703, 4LL, &v1703);
                                        v89 = v1599;
                                        if ( v1599 >= 0 )
                                        {
                                          v89 = RtlUIntAdd(v1703, v327, &v1703);
                                          v1599 = v89;
                                          v328 = v1704;
                                          if ( v89 >= 0 )
                                            v328 = v1703;
                                          v1704 = v328;
                                          goto LABEL_433;
                                        }
                                      }
                                    }
                                  }
                                  v328 = v1704;
LABEL_433:
                                  if ( v89 < 0 )
                                  {
LABEL_436:
                                    v329 = 0LL;
LABEL_437:
                                    v309 = v1602;
LABEL_438:
                                    v213 = 0LL;
                                    goto LABEL_439;
                                  }
                                  if ( v328 > 0x400000 )
                                  {
                                    v89 = -2147418113;
                                    v1599 = -2147418113;
                                    goto LABEL_436;
                                  }
                                  LODWORD(v1692) = v328;
LABEL_463:
                                  if ( v89 < 0 )
                                    goto LABEL_436;
                                  v345 = v1692;
                                  v346 = GetProcessHeap();
                                  v347 = HeapAlloc(v346, 8u, v345);
                                  if ( v347 )
                                  {
                                    v329 = v347;
                                    v1637 = v347;
                                    v89 = 0x10000000;
                                  }
                                  else
                                  {
                                    v89 = -805306345;
                                    v329 = 0LL;
                                  }
                                  v309 = v1602;
                                  v1599 = v89;
                                  if ( v89 >= 0 )
                                  {
                                    if ( v1602 && v329 )
                                    {
                                      v1925 = v1651;
                                      v1924[0] = v1602;
                                      v1924[1] = v329;
                                      v1926 = v1692;
                                      v1927 = 0;
                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                        && (v348 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                      {
                                        v349 = ((__int64 (__fastcall *)(__int64, _QWORD *))v348)(134LL, v1924);
                                        v350 = v1692;
                                        v89 = v349 | 0x10000000;
                                        v1599 = v349 | 0x10000000;
                                        if ( v349 >= 0 )
                                          v350 = v1926;
                                        LODWORD(v1692) = v350;
                                      }
                                      else
                                      {
                                        v351 = GetLastError();
                                        v1599 = v351;
                                        v89 = v351;
                                        if ( v351 > 0 )
                                        {
                                          v89 = (unsigned __int16)v351 | 0x80070000;
                                          v1599 = v89;
                                        }
                                        v350 = v1692;
                                        if ( v89 >= 0 )
                                        {
                                          v89 = -2147467259;
                                          v1599 = -2147467259;
                                          goto LABEL_483;
                                        }
                                      }
                                      if ( v89 == -805306333 )
                                      {
                                        v329 = v1637;
                                        v89 = -2147024774;
                                        v1599 = -2147024774;
                                        v90 = 4LL;
                                        goto LABEL_437;
                                      }
LABEL_483:
                                      v329 = v1637;
                                      if ( v89 < 0 )
                                      {
                                        v90 = 4LL;
                                        goto LABEL_437;
                                      }
                                      v1705 = 0;
                                      v1821 = v1637;
                                      if ( v350 < 4 )
                                      {
                                        v352 = -1073741762;
LABEL_544:
                                        v213 = 0LL;
LABEL_545:
                                        v89 = v352 | 0x10000000;
                                        v1599 = v89;
                                        if ( v89 < 0 )
                                        {
LABEL_551:
                                          v90 = 4LL;
LABEL_556:
                                          v309 = v1602;
                                          goto LABEL_439;
                                        }
                                        v1822 = 0LL;
                                        v1823 = 0LL;
                                        if ( !v213 || (v386 = (unsigned __int8 *)v213[1], (v1509 = (SIZE_T)v386) == 0) )
                                        {
LABEL_550:
                                          v89 = -805306355;
                                          v1599 = -805306355;
                                          goto LABEL_551;
                                        }
                                        v387 = *(unsigned int *)v213;
                                        if ( !(_DWORD)v387 )
                                        {
                                          v213 = v1587;
                                          goto LABEL_550;
                                        }
                                        v389 = v387 - 8;
                                        v1626 = v387 - 8;
                                        v390 = (int *)operator new(v387 - 8);
                                        v1655 = (SIZE_T)v390;
                                        v391 = v390;
                                        if ( v390 )
                                        {
                                          v1977 = 0x7F1137FAB69605ELL;
                                          v392 = v386;
                                          v1706 = 0;
                                          v393 = v390;
                                          v394 = 0;
                                          v395 = v389 & 7;
                                          if ( (v389 & 7) != 0 )
                                          {
                                            v1707 = -1;
                                            v1480 = 0;
                                            v396 = 0;
                                            v397 = 56;
                                            do
                                            {
                                              v398 = *v392++;
                                              if ( v394 >= 4 )
                                                v396 |= v398 << v397;
                                              else
                                                v1480 |= v398 << (v397 - 32);
                                              ++v394;
                                              v397 -= 8;
                                            }
                                            while ( v394 < (int)v395 );
                                            v391 = v393;
                                            v1424 = v396;
                                            v399 = v1480 ^ 0x92F65A5;
                                            v400 = v396 ^ 0x699A899C;
                                            v1706 = v1480 ^ 0x92F65A5;
                                            v401 = 0;
                                            v1707 = v396 ^ 0x699A899C;
                                            if ( (v389 & 7) != 0 )
                                            {
                                              do
                                              {
                                                if ( v401 >= 4 )
                                                {
                                                  v400 = __ROL4__(v400, 8);
                                                  v402 = v400;
                                                }
                                                else
                                                {
                                                  v399 = __ROL4__(v399, 8);
                                                  v402 = v399;
                                                }
                                                *(_BYTE *)v393 = v402;
                                                ++v401;
                                                v393 = (int *)((char *)v393 + 1);
                                              }
                                              while ( v401 < (int)v395 );
                                              v399 = v1706;
                                              v400 = v1707;
                                            }
                                            if ( v395 <= 4 )
                                            {
                                              v394 = 0;
                                              v1707 = 0;
                                              if ( v395 < 4 )
                                              {
                                                v399 = v399 >> (8 * (4 - v395)) << (8 * (4 - v395));
                                                v391 = (int *)v1655;
                                                v1706 = v399;
                                              }
                                            }
                                            else
                                            {
                                              v394 = v400 >> (8 * (8 - v395)) << (8 * (8 - v395));
                                              v391 = (int *)v1655;
                                              v1707 = v394;
                                            }
                                          }
                                          else
                                          {
                                            v1480 = 0;
                                            v399 = 0;
                                            v1424 = -1;
                                            v1707 = 0;
                                          }
                                          v403 = v389 >> 3;
                                          if ( v389 >> 3 )
                                          {
                                            v404 = HIDWORD(v1977);
                                            v405 = v392 + 2;
                                            v406 = v1424;
                                            v1553 = WORD2(v1977);
                                            v407 = HIDWORD(v1977) ^ 0xAB69605E;
                                            v408 = HIWORD(HIDWORD(v1977));
                                            v1565 = WORD1(v1977);
                                            v409 = (char *)v393 + 7;
                                            do
                                            {
                                              v410 = v405[1] | ((*v405 | ((*(v405 - 1) | (*(v405 - 2) << 8)) << 8)) << 8);
                                              v411 = v410 ^ v399;
                                              v412 = v405[5] | ((v405[4] | ((v405[3] | (v405[2] << 8)) << 8)) << 8);
                                              v413 = v411 ^ v412 ^ v394 ^ v407;
                                              v414 = (__ROL4__(v413, 10) + v1553 * __ROL4__(v413 + 1419157410, 5)) ^ v411;
                                              v415 = (WORD1(v1977) * __ROR4__(v404 + v414, 9) - __ROL4__(v414, 2)) ^ v413;
                                              v416 = (24670 * (v415 - v1553) - (v415 >> 13)) ^ v414;
                                              v417 = (v408 * __ROL4__(v416 ^ WORD1(v1977), 6) - __ROL4__(v416, 2)) ^ v415;
                                              v418 = (v404 - (v417 ^ 0xAB69605E)) ^ v416;
                                              v419 = (v1565 * (v418 ^ v1553)) ^ __ROR4__(v418, 6) ^ v417;
                                              v420 = (__ROL4__(v419, 2) + 24670 * __ROR4__(v404 + v419, 15)) ^ v418;
                                              v421 = (v408 * __ROR4__(v420 + 1419157410, 14) - __ROL4__(v420, 8)) ^ v419;
                                              v422 = __ROR4__(v421, 10) ^ (v1553 * __ROR4__(v421 ^ 0xAB69605E, 12)) ^ v420;
                                              v423 = (v422 >> 10) ^ (WORD1(v1977) * (v422 ^ v408)) ^ v421;
                                              v424 = (v408 * (__ROR4__(~v423, 5) + 24670)) ^ v422;
                                              v425 = (v424 - v408) ^ 0xAB69605E ^ v423;
                                              v426 = ((v425 >> 2) + v1553 * __ROL4__(v408 ^ v425, 2)) ^ v424;
                                              v427 = (__ROL4__(v426, 7) + WORD1(v1977) * __ROR4__(v426 - v404, 6)) ^ v425;
                                              v428 = (24670 * (v427 ^ v1553) + __ROR4__(v427, 9)) ^ v426;
                                              v429 = (__ROL4__(v428, 7) + v408 * __ROL4__(v428 ^ WORD1(v1977), 5)) ^ v427;
                                              v430 = v429 ^ v407 ^ v428;
                                              v431 = (v1553 * (__ROR4__(v430, 3) - WORD1(v1977))) ^ v429;
                                              v432 = (24670 * __ROR4__(v431 - v404, 1) - __ROR4__(v431, 6)) ^ v430;
                                              v409 += 8;
                                              v433 = (__ROL4__(v432, 14) + v408 * __ROL4__(v432 - 1419157410, 3)) ^ v431;
                                              v434 = (v1553 * __ROL4__(v433 - 1419157410, 15) - __ROR4__(v433, 14)) ^ v432;
                                              v435 = (v434 >> 3) ^ (WORD1(v1977) * (v434 ^ 0x605E)) ^ v433;
                                              v1707 = v406 ^ v435;
                                              v406 = v412;
                                              v436 = v1480 ^ __ROL4__(v435, 2) ^ (24670 * __ROL4__(v435 ^ v404, 4)) ^ v434;
                                              v1480 = v410;
                                              v405 += 8;
                                              v1706 = v436;
                                              *(v409 - 12) = v436;
                                              v1706 = __ROR4__(v1706, 8);
                                              *(v409 - 8) = v1707;
                                              v1707 = __ROR4__(v1707, 8);
                                              *(v409 - 13) = v1706;
                                              v1706 = __ROR4__(v1706, 8);
                                              *(v409 - 9) = v1707;
                                              v1707 = __ROR4__(v1707, 8);
                                              *(v409 - 14) = v1706;
                                              v1706 = __ROR4__(v1706, 8);
                                              *(v409 - 10) = v1707;
                                              v1707 = __ROR4__(v1707, 8);
                                              *(v409 - 15) = v1706;
                                              *(v409 - 11) = v1707;
                                              v399 = __ROR4__(v1706, 8);
                                              v394 = __ROR4__(v1707, 8);
                                              v1706 = v399;
                                              v1707 = v394;
                                              --v403;
                                            }
                                            while ( v403 );
                                            v2 = v1663;
                                            v1 = v1801;
                                            v389 = v1626;
                                            v391 = (int *)v1655;
                                          }
                                          v437 = 0LL;
                                          if ( v389 )
                                          {
                                            if ( v389 < 0x20 )
                                            {
                                              v446 = 0;
                                            }
                                            else
                                            {
                                              v438 = 0LL;
                                              v439 = 0LL;
                                              do
                                              {
                                                v438 = _mm_xor_si128(
                                                         _mm_loadu_si128((const __m128i *)(v1655 + v437)),
                                                         v438);
                                                v440 = _mm_loadu_si128((const __m128i *)(v1655 + v437 + 16));
                                                v437 += 32LL;
                                                v441 = _mm_xor_si128(v440, v439);
                                                v439 = v441;
                                              }
                                              while ( v437 < (v389 & 0xFFFFFFFFFFFFFFE0uLL) );
                                              v391 = (int *)v1655;
                                              v442 = _mm_xor_si128(v441, v438);
                                              v443 = _mm_xor_si128(v442, _mm_srli_si128(v442, 8));
                                              v444 = _mm_xor_si128(v443, _mm_srli_si128(v443, 4));
                                              v445 = _mm_xor_si128(v444, _mm_srli_si128(v444, 2));
                                              v446 = _mm_cvtsi128_si32(_mm_xor_si128(v445, _mm_srli_si128(v445, 1)));
                                            }
                                            for ( ; v437 < v389; ++v437 )
                                              v446 ^= *((_BYTE *)v391 + v437);
                                          }
                                          else
                                          {
                                            v446 = 0;
                                          }
                                          if ( v446 == *(_QWORD *)(v389 + v1509) )
                                          {
                                            v89 = 0x10000000;
                                            v1823 = v389;
                                            v1599 = 0x10000000;
                                            v447 = v391;
                                            v1398 = (char *)v391;
                                            v1822 = 0LL;
                                            HIDWORD(v1692) = v389;
                                            goto LABEL_595;
                                          }
                                          operator delete(v391);
                                        }
                                        v448 = v1822;
                                        v89 = -805306367;
                                        v1599 = -805306367;
                                        if ( v1822 )
                                        {
                                          v449 = GetProcessHeap();
                                          HeapFree(v449, 0, v448);
                                          v1822 = 0LL;
                                        }
                                        LODWORD(v389) = HIDWORD(v1692);
                                        v447 = 0LL;
LABEL_595:
                                        v90 = 4LL;
                                        if ( v89 < 0 )
                                          goto LABEL_555;
                                        v1708[0] = 0;
                                        v1824 = v447;
                                        if ( (unsigned int)v389 < 4 )
                                        {
                                          v388 = -1073741762;
                                          goto LABEL_554;
                                        }
                                        v1517 = *v447;
                                        v388 = RtlULongLongAdd(v447, 4LL, &v1824);
                                        if ( v388 < 0 )
                                          goto LABEL_554;
                                        v388 = RtlUIntAdd(0LL, (unsigned int)v90, v1708);
                                        if ( v388 < 0 )
                                          goto LABEL_554;
                                        if ( (int)v389 - v1708[0] < (unsigned int)v90 )
                                        {
                                          v388 = -1073741762;
                                          goto LABEL_554;
                                        }
                                        v1425 = *(_DWORD *)v1824;
                                        v388 = RtlULongLongAdd(v1824, 4LL, &v1824);
                                        if ( v388 >= 0 )
                                        {
                                          v388 = RtlUIntAdd(v450, 4LL, v1708);
                                          if ( v388 >= 0 )
                                          {
                                            if ( (int)v389 - v1708[0] < v451 )
                                              goto LABEL_552;
                                            v388 = RtlUIntAdd(v1708[0], v451, v1708);
                                            if ( v388 < 0 )
                                              goto LABEL_553;
                                            v454 = (unsigned int)v453;
                                            v455 = (unsigned int)v389;
                                            v456 = (unsigned int *)v1824;
                                            v1510 = v453;
                                            if ( &v1398[v455] < (char *)v1824 + v453
                                              || (unsigned __int64)&v1398[v455 - (_QWORD)v1824 - v453] >= 8 )
                                            {
LABEL_552:
                                              v388 = -1073741762;
                                            }
                                            else
                                            {
                                              v457 = 0LL;
                                              v458 = 0;
                                              v1627 = 0LL;
                                              v388 = 0;
                                              v1481 = 0;
                                              if ( !v1824 )
                                              {
LABEL_623:
                                                if ( (_DWORD)v453 )
                                                {
                                                  v463 = GetProcessHeap();
                                                  v457 = HeapAlloc(v463, 8u, v1510);
                                                  v452 = v1517;
                                                  v1627 = (SIZE_T)v457;
                                                  if ( !v457 )
                                                  {
                                                    v388 = -1073741801;
                                                    goto LABEL_632;
                                                  }
                                                  v454 = v1510;
                                                  v388 = 0;
                                                  v458 = v1481;
                                                  LODWORD(v453) = v1510;
                                                }
                                                if ( v456 )
                                                {
                                                  memcpy_0(v457, v456, v454);
                                                  LODWORD(v453) = v1425;
                                                  v457 = (void *)v1627;
                                                  v458 = v1481;
                                                  v452 = v1517;
                                                }
                                                v1904 = v457;
                                                v1903 = __PAIR64__(v453, v458);
LABEL_632:
                                                if ( v388 >= 0 )
                                                {
                                                  v90 = 4LL;
                                                  if ( v452 != (_DWORD)v1903 )
                                                    v388 = -1073741762;
                                                  goto LABEL_554;
                                                }
                                                goto LABEL_553;
                                              }
                                              v388 = RtlULongLongAdd(v1824, (unsigned int)v453, &v1825);
                                              if ( v388 < 0 )
                                                goto LABEL_632;
                                              v459 = (unsigned int *)v1825;
                                              if ( (unsigned __int64)v456 < v1825 )
                                              {
                                                while ( 1 )
                                                {
                                                  v388 = RtlULongLongAdd(v456, 4LL, &v1826);
                                                  if ( v388 < 0 )
                                                    break;
                                                  if ( v1826 > v460 )
                                                    goto LABEL_626;
                                                  v461 = RtlUIntAdd(4LL, *v456, &v1709);
                                                  v388 = v461;
                                                  if ( v461 >= 0 )
                                                    v462 = v1709;
                                                  v1708[1] = v462;
                                                  if ( v461 < 0 )
                                                    break;
                                                  v388 = RtlULongLongAdd(v456, v462, &v1827);
                                                  if ( v388 < 0 )
                                                    break;
                                                  v456 = v1827;
                                                  if ( v1827 > v459 )
                                                    goto LABEL_626;
                                                  v458 = ++v1481;
                                                  if ( v1827 >= v459 )
                                                  {
                                                    v454 = v453;
                                                    goto LABEL_621;
                                                  }
                                                }
                                                v452 = v1517;
                                                goto LABEL_632;
                                              }
                                              v458 = 0;
LABEL_621:
                                              if ( v456 == v459 )
                                              {
                                                v456 = (unsigned int *)v1824;
                                                v457 = 0LL;
                                                v452 = v1517;
                                                goto LABEL_623;
                                              }
LABEL_626:
                                              v388 = -1073741811;
                                            }
                                          }
                                        }
LABEL_553:
                                        v90 = 4LL;
LABEL_554:
                                        v89 = v388 | 0x10000000;
                                        v1599 = v89;
LABEL_555:
                                        v213 = v1587;
                                        v329 = v1637;
                                        goto LABEL_556;
                                      }
                                      v1516 = *v1637;
                                      v352 = RtlULongLongAdd(v1637, 4LL, &v1821);
                                      if ( v352 < 0 )
                                        goto LABEL_544;
                                      v352 = RtlUIntAdd(0LL, v353, &v1705);
                                      if ( v352 < 0 )
                                      {
LABEL_543:
                                        v329 = v1637;
                                        goto LABEL_544;
                                      }
                                      if ( v350 - v1705 < (unsigned int)v354 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      v1505 = v1821;
                                      v1625 = v354;
                                      v352 = RtlULongLongAdd(v1821, v354, &v1821);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      v352 = RtlUIntAdd(v355, v356, &v1705);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      if ( v350 - v1705 < 4 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      v1423 = *(_DWORD *)v1821;
                                      v352 = RtlULongLongAdd(v1821, 4LL, &v1821);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      v352 = RtlUIntAdd(v357, 4LL, &v1705);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      if ( v350 - v1705 < (unsigned int)v358 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      v1654 = v1821;
                                      v352 = RtlULongLongAdd(v1821, v358, &v1821);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      v352 = RtlUIntAdd(v360, v359, &v1705);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      if ( v350 - v1705 < 4 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      v1479 = *(_DWORD *)v1821;
                                      v352 = RtlULongLongAdd(v1821, 4LL, &v1821);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      v352 = RtlUIntAdd(v1705, 4LL, &v1705);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      if ( v350 - v1705 < v361 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      v352 = RtlUIntAdd(v1705, v361, &v1705);
                                      if ( v352 < 0 )
                                        goto LABEL_543;
                                      if ( v350 != v1705 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      if ( (unsigned int)(v363 + v362 + v364) + 12LL != v350 )
                                      {
                                        v352 = -1073741762;
                                        goto LABEL_543;
                                      }
                                      v365 = GetProcessHeap();
                                      v366 = HeapAlloc(v365, 8u, 0x30uLL);
                                      v367 = v366;
                                      if ( !v366 )
                                      {
                                        v352 = -1073741801;
                                        v367 = 0LL;
LABEL_533:
                                        if ( v352 >= 0 )
                                        {
                                          v329 = v1637;
                                          v213 = v367;
                                          v1587 = v367;
                                          goto LABEL_545;
                                        }
                                        if ( v367 )
                                        {
                                          v1506 = (void *)v367[1];
                                          if ( v1506 )
                                          {
                                            v382 = GetProcessHeap();
                                            HeapFree(v382, 0, v1506);
                                            v367[1] = 0LL;
                                          }
                                          v1507 = (void *)v367[3];
                                          if ( v1507 )
                                          {
                                            v383 = GetProcessHeap();
                                            HeapFree(v383, 0, v1507);
                                            v367[3] = 0LL;
                                          }
                                          v1508 = (void *)v367[5];
                                          if ( v1508 )
                                          {
                                            v384 = GetProcessHeap();
                                            HeapFree(v384, 0, v1508);
                                            v367[5] = 0LL;
                                          }
                                          v385 = GetProcessHeap();
                                          HeapFree(v385, 0, v367);
                                        }
                                        goto LABEL_543;
                                      }
                                      if ( v1505 )
                                      {
                                        *(_DWORD *)v366 = v1516;
                                        v368 = GetProcessHeap();
                                        v369 = HeapAlloc(v368, 8u, v1625);
                                        if ( !v369 )
                                          goto LABEL_524;
                                        v367[1] = v369;
                                        memcpy_0(v369, v1505, v1625);
                                      }
                                      else
                                      {
                                        *(_DWORD *)v366 = 0;
                                        v366[1] = 0LL;
                                      }
                                      if ( v1654 )
                                      {
                                        *((_DWORD *)v367 + 4) = v1423;
                                        v370 = GetProcessHeap();
                                        v371 = HeapAlloc(v370, 8u, v1423);
                                        if ( !v371 )
                                          goto LABEL_524;
                                        v367[3] = v371;
                                        memcpy_0(v371, v1654, v1423);
                                      }
                                      else
                                      {
                                        *((_DWORD *)v367 + 4) = 0;
                                        v367[3] = 0LL;
                                      }
                                      if ( !v1821 )
                                      {
                                        *((_DWORD *)v367 + 8) = 0;
                                        v367[5] = 0LL;
                                        goto LABEL_532;
                                      }
                                      *((_DWORD *)v367 + 8) = v1479;
                                      v372 = GetProcessHeap();
                                      v373 = HeapAlloc(v372, 8u, v1479);
                                      if ( v373 )
                                      {
                                        v374 = v1821;
                                        v367[5] = v373;
                                        memcpy_0(v373, v374, v1479);
LABEL_532:
                                        v352 = 0;
                                        goto LABEL_533;
                                      }
LABEL_524:
                                      v375 = (void *)v367[1];
                                      if ( v375 )
                                      {
                                        v376 = GetProcessHeap();
                                        HeapFree(v376, 0, v375);
                                        v367[1] = 0LL;
                                      }
                                      v377 = (void *)v367[3];
                                      if ( v377 )
                                      {
                                        v378 = GetProcessHeap();
                                        HeapFree(v378, 0, v377);
                                        v367[3] = 0LL;
                                      }
                                      v379 = (void *)v367[5];
                                      if ( v379 )
                                      {
                                        v380 = GetProcessHeap();
                                        HeapFree(v380, 0, v379);
                                        v367[5] = 0LL;
                                      }
                                      v381 = GetProcessHeap();
                                      HeapFree(v381, 0, v367);
                                      v352 = -1073741801;
                                      v367 = 0LL;
                                      goto LABEL_533;
                                    }
                                    v89 = -2147024809;
                                    v1599 = -2147024809;
                                  }
                                  v90 = 4LL;
                                  goto LABEL_438;
                                }
                              }
                              else
                              {
LABEL_461:
                                v89 = -1073741811;
                                v1599 = -1073741811;
                              }
LABEL_462:
                              v90 = 4LL;
                              goto LABEL_463;
                            }
                          }
                        }
                      }
                    }
                  }
                  v310 = GetProcessHeap();
                  HeapFree(v310, 0, v1624);
                }
                else
                {
                  v294 = -1073741801;
                }
                v295 = v1561;
                v90 = 4LL;
                v120 = v1901;
              }
              v309 = 0LL;
              goto LABEL_394;
            }
            v158 = *(unsigned int **)&v1902[1];
            v1797 = *(unsigned int **)&v1902[1];
            v1560 = 0;
            if ( v120 )
            {
              do
              {
                v159 = RtlUIntAdd(4LL, *v158, &v1676);
                v1599 = v159;
                v89 = v159;
                if ( v159 >= 0 )
                  v161 = v1676;
                v1675 = v161;
                if ( v159 < 0 )
                  goto LABEL_231;
                v1599 = RtlULongLongAdd(v160, v161, &v1797);
                v89 = v1599;
                if ( v1599 < 0 )
                  goto LABEL_231;
                v158 = v1797;
              }
              while ( ++v1560 < v120 );
            }
            v1599 = RtlULongLongAdd(v158, 4LL, &v1910);
            v89 = v1599;
            if ( v1599 >= 0 )
            {
              if ( (unsigned __int64)v162 + v163 + 4 > *(_QWORD *)&v1902[1] + (unsigned __int64)v1902[0] )
              {
                v89 = -1073741789;
LABEL_233:
                v90 = 4LL;
                goto LABEL_234;
              }
              v164 = v1910;
              *v162 = v163;
              memcpy_0(v164, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v163);
              v120 = ++v1901;
            }
LABEL_231:
            v90 = 4LL;
            goto LABEL_235;
          }
          v89 = -1073741811;
          goto LABEL_233;
        }
        if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1851 && !wcscmp_0(v1851, L"Default") )
        {
          v1660 = 0;
          CurrentProcess = GetCurrentProcess();
          if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1660) )
          {
            if ( (v1660 & 0xF) == 0 )
              v72 = 1;
            goto LABEL_107;
          }
LABEL_89:
          LastError = GetLastError();
          v73 = LastError;
          if ( LastError <= 0 )
          {
LABEL_61:
            if ( v73 >= 0 )
              v73 = -2147467259;
            goto LABEL_108;
          }
LABEL_60:
          v73 = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_61;
        }
      }
LABEL_107:
      v1728 = v72;
      goto LABEL_108;
    }
    v6 = dword_1801B7260;
LABEL_56:
    dword_1801B7260 = v6 + 1;
    goto LABEL_57;
  }
LABEL_2:
  result = 0;
  if ( v3 <= 0xC )
  {
    v4 = 6184;
    if ( _bittest(&v4, v3) )
      return 1;
  }
  return result;
}
