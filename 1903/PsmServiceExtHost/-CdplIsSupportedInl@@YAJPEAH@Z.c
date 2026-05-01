/*
 * XREFs of ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800403B8
 * Callers:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x180040390 (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180010F70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003EB00 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180045410 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180045430 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x18004544C (StringCchLengthW.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180046768 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180046794 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180046F80 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800470D8 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ??$GetPtrAs@K@?$SP@EV?$SP_HLOCAL@E@@@@QEBAPEAKXZ @ 0x180047258 (--$GetPtrAs@K@-$SP@EV-$SP_HLOCAL@E@@@@QEBAPEAKXZ.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     wcscmp_0 @ 0x1800492B6 (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800492F0 (_alloca_probe.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x18007F1AC (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x18007F1FC (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18007F224 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

__int64 __fastcall CdplIsSupportedInl(int *a1)
{
  int v2; // r15d
  int v3; // edi
  int *Ptr; // rax
  int v6; // ecx
  int v7; // eax
  char *v8; // rax
  _BYTE *v9; // r14
  unsigned __int8 *v10; // r12
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // r11d
  __int64 v15; // r13
  int v16; // r10d
  int v17; // r9d
  int v18; // ecx
  int v19; // r10d
  int v20; // r11d
  int v21; // r9d
  unsigned int v22; // r8d
  int v23; // r11d
  unsigned int v24; // r8d
  int v25; // r11d
  int v26; // r8d
  unsigned int v27; // r11d
  int v28; // r8d
  int v29; // r11d
  int v30; // r8d
  unsigned int v31; // r11d
  int v32; // edx
  int v33; // r11d
  unsigned int v34; // r8d
  int v35; // r11d
  int v36; // r8d
  int v37; // r11d
  int v38; // r8d
  unsigned int v39; // edi
  int v40; // r8d
  int v41; // edi
  int v42; // r8d
  unsigned int v43; // edi
  int v44; // r8d
  int v45; // edx
  WCHAR *v46; // rsi
  unsigned __int64 v47; // rcx
  char v48; // al
  int v49; // ebx
  unsigned int v50; // r13d
  int v51; // edi
  LPCWSTR i; // rdi
  const WCHAR *v53; // rdx
  __int64 v54; // rax
  const WCHAR *v55; // rdi
  char *v56; // rsi
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned int v59; // r12d
  unsigned int v60; // r14d
  const CHAR *v61; // rdx
  __int64 v62; // rax
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  __int64 v65; // rbx
  HMODULE *v66; // rdi
  int v67; // esi
  signed int v68; // edi
  __int64 v69; // r14
  __int64 v70; // r9
  wchar_t *j; // rbx
  wchar_t *v72; // r8
  signed int LastError; // eax
  signed int v74; // eax
  DWORD CurrentThreadId; // eax
  __int64 v76; // r14
  __int64 v77; // r9
  wchar_t *k; // rbx
  wchar_t *v79; // r8
  signed int v80; // eax
  HANDLE CurrentProcess; // rax
  int v82; // eax
  HLOCAL v83; // rax
  int v84; // r12d
  unsigned __int16 *v85; // r13
  unsigned __int16 *v86; // rbx
  HANDLE v87; // rax
  void *v88; // rax
  unsigned __int16 *v89; // rdi
  size_t v90; // rbx
  HANDLE v91; // rax
  unsigned __int16 *v92; // rax
  unsigned __int16 *v93; // rdi
  unsigned int v94; // r13d
  int v95; // eax
  unsigned int v96; // edi
  int v97; // eax
  unsigned int v98; // r11d
  int v99; // eax
  int v100; // eax
  unsigned int v101; // r11d
  int v102; // r10d
  int v103; // eax
  int v104; // eax
  unsigned int v105; // r11d
  int v106; // r10d
  int v107; // eax
  int v108; // eax
  size_t v109; // rdx
  const wchar_t *v110; // rcx
  int v111; // r10d
  unsigned int v112; // r11d
  int v113; // eax
  int v114; // eax
  unsigned int v115; // r11d
  int v116; // r10d
  int v117; // eax
  int v118; // eax
  unsigned int v119; // r11d
  int v120; // r10d
  int v121; // eax
  int v122; // eax
  int v123; // r10d
  unsigned int v124; // edi
  HANDLE v125; // rax
  _DWORD *v126; // rax
  _DWORD *v127; // rdi
  __int64 v128; // r11
  int v129; // eax
  _DWORD *v130; // rcx
  int v131; // eax
  __int64 v132; // rdx
  int v133; // r10d
  _DWORD *v134; // rdi
  int v135; // eax
  unsigned int v136; // r9d
  int v137; // r10d
  void *v138; // rcx
  int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // r11
  _DWORD *v142; // rdi
  int v143; // eax
  unsigned int v144; // r9d
  int v145; // r10d
  void *v146; // rcx
  int v147; // eax
  const wchar_t *v148; // rcx
  size_t v149; // rdx
  _DWORD *v150; // rdi
  int v151; // eax
  unsigned int v152; // r9d
  int v153; // r10d
  unsigned __int64 *v154; // rax
  __int64 v155; // r11
  int v156; // eax
  __int64 v157; // rdx
  _DWORD *v158; // rdi
  int v159; // eax
  __int64 v160; // rcx
  unsigned int v161; // r9d
  int v162; // r11d
  __int64 v163; // r10
  void *v164; // rcx
  int v165; // eax
  __int64 v166; // rdx
  _DWORD *v167; // rdi
  int v168; // eax
  unsigned int v169; // r9d
  int v170; // r10d
  int *v171; // rcx
  int v172; // eax
  __int64 v173; // rdx
  _DWORD *v174; // rdi
  int v175; // eax
  unsigned int v176; // r9d
  int v177; // r10d
  _DWORD *v178; // rcx
  int v179; // eax
  __int64 v180; // rcx
  unsigned int v181; // r9d
  int v182; // eax
  unsigned int v183; // r9d
  unsigned int v184; // edi
  unsigned int v185; // r11d
  int v186; // eax
  unsigned int v187; // r11d
  int v188; // eax
  unsigned int v189; // r11d
  int v190; // eax
  unsigned int v191; // r11d
  int v192; // eax
  unsigned int v193; // eax
  unsigned __int8 *v194; // rdi
  unsigned __int64 v195; // r13
  int v196; // r12d
  unsigned int v197; // eax
  unsigned int v198; // edi
  HANDLE v199; // rax
  _DWORD *v200; // rdi
  unsigned int v201; // r11d
  void *v202; // rcx
  HANDLE v203; // rax
  _QWORD *v204; // rbx
  int v205; // r12d
  unsigned __int8 v206; // al
  unsigned __int64 m; // rcx
  unsigned __int8 *v208; // r8
  int v209; // r10d
  _BYTE *v210; // r11
  unsigned int v211; // edx
  unsigned int v212; // edi
  int v213; // r12d
  int v214; // r10d
  char v215; // r9
  int v216; // edx
  int v217; // ecx
  unsigned int v218; // r10d
  int v219; // ecx
  char v220; // r9
  unsigned __int64 v221; // r12
  unsigned __int8 *v222; // rdi
  int v223; // r14d
  int v224; // ebx
  _BYTE *v225; // rax
  int v226; // r11d
  int v227; // r15d
  int v228; // r9d
  int v229; // r8d
  int v230; // r10d
  int v231; // edi
  int v232; // r10d
  int v233; // edi
  int v234; // r10d
  unsigned int v235; // edi
  int v236; // r10d
  int v237; // edi
  int v238; // r10d
  int v239; // edi
  int v240; // r10d
  int v241; // edi
  unsigned int v242; // r10d
  unsigned int v243; // edi
  int v244; // r10d
  int v245; // edi
  int v246; // r10d
  int v247; // edi
  int v248; // r10d
  int v249; // edi
  int v250; // r10d
  int v251; // edi
  unsigned int v252; // r10d
  int v253; // edi
  HANDLE v254; // rax
  _DWORD *v255; // rax
  _DWORD *v256; // rdi
  HANDLE v257; // rax
  void *v258; // rax
  HANDLE v259; // rax
  _OWORD *v260; // rax
  HANDLE v261; // rax
  _QWORD *v262; // rax
  void *v263; // r13
  HANDLE v264; // rax
  void *v265; // r13
  HANDLE v266; // rax
  void *v267; // r13
  HANDLE v268; // rax
  HANDLE v269; // rax
  void *v270; // rdi
  HANDLE v271; // rax
  void *v272; // rdi
  HANDLE v273; // rax
  void *v274; // rdi
  HANDLE v275; // rax
  void *v276; // rdi
  HANDLE v277; // rax
  HANDLE v278; // rax
  const void **v279; // rbx
  int v280; // r12d
  unsigned int v281; // eax
  unsigned int v282; // edi
  HANDLE v283; // rax
  _DWORD *v284; // rdi
  void *v285; // rcx
  void *v286; // rcx
  HANDLE v287; // rax
  int v288; // eax
  unsigned int v289; // ecx
  unsigned int v290; // eax
  unsigned int v291; // edi
  int v292; // eax
  unsigned int *v293; // rcx
  unsigned int v294; // ebx
  int v295; // r9d
  int v296; // r9d
  unsigned int *v297; // rax
  unsigned int *v298; // rcx
  unsigned int v299; // ebx
  int v300; // r9d
  int v301; // r9d
  unsigned int *v302; // rax
  unsigned int v303; // r10d
  unsigned int v304; // r11d
  unsigned int v305; // eax
  unsigned int v306; // edi
  HANDLE v307; // rax
  int *v308; // rax
  int *v309; // rbx
  FARPROC v310; // rax
  int v311; // eax
  unsigned int v312; // edi
  signed int v313; // eax
  int v314; // r12d
  SIZE_T v315; // r9
  unsigned int v316; // r9d
  SIZE_T v317; // rbx
  SIZE_T v318; // r13
  unsigned int v319; // r10d
  int v320; // r9d
  HANDLE v321; // rax
  _QWORD *v322; // rax
  _QWORD *v323; // rdi
  unsigned int *v324; // rbx
  int *v325; // rdi
  unsigned __int8 *v326; // r12
  __int64 v327; // rbx
  unsigned __int64 v328; // rbx
  int *v329; // r11
  unsigned __int8 v330; // al
  unsigned __int8 *v331; // r8
  int *v332; // r12
  int v333; // r10d
  unsigned int v334; // edi
  int v335; // r13d
  char v336; // r9
  int v337; // edx
  int v338; // ecx
  HANDLE v339; // rax
  void *v340; // rax
  HANDLE v341; // rax
  void *v342; // rax
  HANDLE v343; // rax
  void *v344; // rax
  void *v345; // rbx
  HANDLE v346; // rax
  void *v347; // rbx
  HANDLE v348; // rax
  void *v349; // rbx
  HANDLE v350; // rax
  HANDLE v351; // rax
  unsigned int *v352; // rdi
  void *v353; // rbx
  HANDLE v354; // rax
  void *v355; // rbx
  HANDLE v356; // rax
  void *v357; // rbx
  HANDLE v358; // rax
  HANDLE v359; // rax
  unsigned int v360; // edx
  int v361; // ecx
  char v362; // r9
  int v363; // edx
  unsigned __int64 v364; // r13
  _BYTE *v365; // rbx
  int v366; // esi
  unsigned __int8 *v367; // r15
  int v368; // r12d
  unsigned int v369; // r11d
  int v370; // eax
  int v371; // r9d
  int v372; // r8d
  int v373; // ecx
  int v374; // r9d
  int v375; // r10d
  int v376; // r8d
  unsigned int v377; // edi
  int v378; // r10d
  unsigned int v379; // edi
  int v380; // r10d
  int v381; // edi
  unsigned int v382; // r10d
  int v383; // edi
  int v384; // r10d
  int v385; // edi
  unsigned int v386; // r10d
  int v387; // edi
  int v388; // r10d
  unsigned int v389; // edi
  int v390; // r10d
  int v391; // edi
  int v392; // r10d
  int v393; // edi
  int v394; // r10d
  int v395; // edi
  int v396; // r10d
  int v397; // edi
  unsigned int v398; // r10d
  int v399; // edi
  int v400; // edx
  unsigned __int64 n; // rcx
  int v402; // ebx
  unsigned int v403; // r9d
  int *v404; // rbx
  HANDLE v405; // rax
  unsigned int v406; // r10d
  int v407; // r12d
  int v408; // r9d
  unsigned int v409; // r10d
  __int64 v410; // rdi
  unsigned int v411; // r10d
  int v412; // r9d
  unsigned int v413; // r9d
  void *v414; // rbx
  SIZE_T v415; // r13
  void *v416; // rax
  __int64 v417; // rdx
  unsigned int *v418; // rdi
  unsigned int *v419; // r10
  unsigned __int64 v420; // r10
  int v421; // eax
  unsigned int v422; // r9d
  int v423; // r11d
  HANDLE v424; // rax
  HANDLE v425; // rax
  _QWORD *v426; // rbx
  void *v427; // rdi
  HANDLE v428; // rax
  void *v429; // rdi
  HANDLE v430; // rax
  void *v431; // rdi
  HANDLE v432; // rax
  HANDLE v433; // rax
  HANDLE v434; // rax
  HANDLE v435; // rax
  void *v436; // rdi
  HANDLE v437; // rax
  void *v438; // rdi
  HANDLE v439; // rax
  void *v440; // rdi
  HANDLE v441; // rax
  HANDLE v442; // rax
  HANDLE v443; // rax
  __int64 v444; // r11
  int v445; // r9d
  int *v446; // rax
  LPVOID v447; // rcx
  unsigned int v448; // edi
  unsigned int v449; // r9d
  unsigned int v450; // r10d
  int v451; // edi
  int *v452; // rax
  LPVOID v453; // rcx
  unsigned int v454; // edi
  unsigned int v455; // r9d
  int v456; // r10d
  int v457; // edi
  int *v458; // rax
  LPVOID v459; // rcx
  unsigned int v460; // edi
  unsigned int v461; // r9d
  int v462; // r10d
  int v463; // r10d
  void *v464; // rdi
  LPVOID v465; // rcx
  unsigned int v466; // r11d
  int v467; // r9d
  int v468; // r11d
  int v469; // r9d
  int *v470; // rax
  unsigned int *v471; // rcx
  unsigned int v472; // ebx
  unsigned int v473; // r10d
  unsigned int v474; // r11d
  int v475; // r9d
  int v476; // r9d
  int *v477; // rax
  int v478; // ecx
  void *v479; // rdi
  HANDLE v480; // rax
  void *v481; // rdi
  HANDLE v482; // rax
  HANDLE v483; // rax
  HANDLE v484; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v486; // rax
  unsigned int v487; // edi
  int v488; // eax
  char *v489; // rax
  _BYTE *v490; // r14
  int v491; // edx
  int v492; // ebx
  unsigned __int8 *v493; // rsi
  int v494; // edi
  int v495; // r13d
  __int64 v496; // r12
  int v497; // r11d
  int v498; // r10d
  int v499; // ecx
  int v500; // r11d
  int v501; // ebx
  int v502; // r10d
  unsigned int v503; // r9d
  int v504; // ebx
  unsigned int v505; // r9d
  int v506; // ebx
  int v507; // r9d
  unsigned int v508; // ebx
  int v509; // r9d
  int v510; // ebx
  int v511; // r9d
  unsigned int v512; // ebx
  int v513; // edx
  int v514; // ebx
  unsigned int v515; // r9d
  int v516; // ebx
  int v517; // r9d
  int v518; // ebx
  int v519; // r9d
  unsigned int v520; // ebx
  int v521; // r9d
  int v522; // ebx
  int v523; // r9d
  unsigned int v524; // ebx
  int v525; // r9d
  int v526; // edx
  unsigned __int64 v527; // rcx
  char v528; // al
  WCHAR *v529; // rdx
  int v530; // r13d
  int v531; // ebx
  LPCWSTR v532; // rbx
  const WCHAR *v533; // rdx
  __int64 v534; // rax
  const WCHAR *v535; // rbx
  HMODULE *v536; // r8
  __int64 v537; // rcx
  unsigned __int64 v538; // rcx
  unsigned int v539; // eax
  unsigned int v540; // ecx
  const CHAR *v541; // rdx
  __int64 v542; // rax
  __int64 (__fastcall *v543)(); // rcx
  HANDLE v544; // rax
  HMODULE *v545; // rbx
  __int64 v546; // r13
  int v547; // eax
  char *v548; // rax
  int v549; // edx
  __int64 v550; // rdi
  int v551; // r13d
  int v552; // esi
  _BYTE *v553; // r14
  int v554; // eax
  unsigned __int8 *v555; // r12
  int v556; // ebx
  int v557; // r11d
  int v558; // ecx
  int v559; // ebx
  int v560; // esi
  int v561; // r11d
  unsigned int v562; // r10d
  int v563; // esi
  unsigned int v564; // r10d
  int v565; // esi
  int v566; // r10d
  unsigned int v567; // esi
  int v568; // r10d
  int v569; // esi
  int v570; // r10d
  unsigned int v571; // esi
  int v572; // r10d
  int v573; // esi
  unsigned int v574; // r9d
  int v575; // esi
  int v576; // r9d
  int v577; // esi
  int v578; // r9d
  unsigned int v579; // r8d
  int v580; // r9d
  int v581; // r8d
  int v582; // r9d
  unsigned int v583; // r8d
  int v584; // r9d
  int v585; // edx
  char v586; // al
  unsigned __int64 v587; // rcx
  int v588; // r13d
  WCHAR *v589; // rdx
  int v590; // ebx
  LPCWSTR v591; // rbx
  const WCHAR *v592; // rdx
  __int64 v593; // rax
  const WCHAR *v594; // rbx
  HMODULE *v595; // r8
  __int64 v596; // rcx
  unsigned __int64 v597; // rcx
  unsigned int v598; // eax
  unsigned int v599; // ecx
  const CHAR *v600; // rdx
  __int64 v601; // rax
  __int64 (__fastcall *v602)(); // rcx
  HANDLE v603; // rax
  HMODULE *v604; // rbx
  __int64 v605; // r13
  signed int v606; // eax
  signed int v607; // r13d
  _DWORD *v608; // rbx
  void *v609; // rax
  void *v610; // rax
  _DWORD *v611; // rdi
  _DWORD *v612; // rax
  __int64 v613; // rbx
  _DWORD *v614; // r14
  unsigned int v615; // esi
  __int64 v616; // rax
  unsigned int v617; // r9d
  unsigned int v618; // r8d
  __int64 v619; // rdi
  unsigned int v620; // ecx
  _DWORD *v621; // rdx
  signed int v622; // eax
  __int64 v623; // rdi
  const wchar_t *v624; // rcx
  __int64 v625; // r8
  const wchar_t **v626; // rdx
  __int64 v627; // rax
  char *v628; // rbx
  char *v629; // rax
  _BYTE *v630; // rsi
  int v631; // ebx
  int v632; // r10d
  int v633; // r11d
  unsigned __int8 *v634; // r14
  int v635; // r15d
  __int64 v636; // r12
  int v637; // r9d
  int v638; // r8d
  int v639; // eax
  int v640; // r9d
  int v641; // r10d
  int v642; // r8d
  unsigned int v643; // ebx
  int v644; // r10d
  unsigned int v645; // ebx
  int v646; // r10d
  int v647; // ebx
  unsigned int v648; // r10d
  int v649; // ebx
  int v650; // r10d
  int v651; // ebx
  unsigned int v652; // r10d
  int v653; // ebx
  int v654; // r10d
  unsigned int v655; // edi
  int v656; // r10d
  int v657; // edi
  int v658; // r10d
  int v659; // edi
  unsigned int v660; // edx
  int v661; // edi
  int v662; // edx
  int v663; // edi
  unsigned int v664; // edx
  int v665; // edi
  int v666; // ecx
  int v667; // edx
  unsigned __int64 v668; // rax
  void *v669; // r11
  __m128i v670; // xmm1
  __m128i v671; // xmm0
  __m128i v672; // xmm0
  __m128i v673; // xmm1
  __m128i v674; // xmm1
  __m128i v675; // xmm1
  _BYTE *v676; // rdx
  _QWORD *v677; // rdi
  __int64 v678; // r8
  unsigned int kk; // ecx
  __int64 v680; // rax
  void *v681; // rax
  _QWORD *v682; // rbx
  __int16 *v683; // rcx
  unsigned int v684; // edi
  _QWORD *v685; // rdx
  __int16 v686; // r8
  _WORD *v687; // rcx
  __int64 v688; // rax
  __int64 v689; // rdi
  __int64 v690; // rax
  int v691; // eax
  void *v692; // rcx
  __int64 v693; // rax
  void **v694; // rax
  signed int v695; // eax
  __int64 v696; // rax
  _WORD *v697; // rdi
  __int64 v698; // rcx
  int v699; // edi
  signed int v700; // eax
  int v701; // eax
  unsigned int v702; // edi
  int v703; // eax
  __int64 v704; // rax
  signed int v705; // eax
  signed int v706; // eax
  unsigned __int16 *v707; // rax
  __int64 v708; // rbx
  int v709; // eax
  __int64 v710; // rax
  signed int v711; // eax
  int v712; // ebx
  unsigned int v713; // edx
  int v714; // ecx
  int v715; // eax
  unsigned int v716; // ebx
  void *v717; // rdi
  void *v718; // rdi
  __int64 v719; // rdx
  __int64 v720; // rdi
  int v721; // eax
  __int64 v722; // rax
  signed int v723; // eax
  void *v724; // rdi
  __int64 v725; // rbx
  int v726; // eax
  unsigned __int64 v727; // rdx
  int v728; // edx
  int v729; // r13d
  int v730; // ebx
  int v731; // edi
  HAM_ACTIVITY_RM_CONTEXT *v732; // rax
  int v733; // edx
  int v734; // ecx
  HAM_ACTIVITY_RM_CONTEXT *v735; // rax
  int v736; // ebx
  int v737; // eax
  __int64 v738; // rbx
  HMODULE *v739; // rdi
  unsigned int v740; // edi
  __int64 v741; // rax
  bool v742; // zf
  int v743; // ebx
  int v744; // eax
  void *v745; // rbx
  int v746; // edi
  __int64 v747; // rax
  __int64 v748; // rax
  HAM_ACTIVITY_RM_CONTEXT *v749; // r13
  signed int v750; // ebx
  __int64 v751; // rax
  signed int v752; // eax
  int v753; // eax
  unsigned __int16 *v754; // rcx
  __int64 v755; // rax
  int v756; // r8d
  int v757; // edx
  int v758; // r9d
  int v759; // ecx
  int v760; // r11d
  int v761; // eax
  int v762; // edi
  unsigned __int8 *v763; // rdx
  char *v764; // rcx
  int v765; // edi
  unsigned __int8 *v766; // r9
  __int64 v767; // r10
  int v768; // r8d
  int v769; // edi
  int v770; // edx
  int v771; // edi
  int v772; // edx
  int v773; // r8d
  void *v774; // rbx
  int v775; // edi
  __int64 v776; // rax
  __int64 v777; // rax
  HAM_ACTIVITY_RM_CONTEXT *v778; // r13
  signed int v779; // ebx
  __int64 v780; // rax
  signed int v781; // eax
  int v782; // eax
  unsigned __int16 *v783; // rcx
  __int64 v784; // rax
  int v785; // eax
  int v786; // r8d
  int v787; // edx
  int v788; // r9d
  int v789; // ecx
  int v790; // r11d
  int v791; // eax
  int v792; // edi
  char v793; // r12
  unsigned __int8 *v794; // rdx
  char *v795; // rcx
  int v796; // edi
  unsigned __int8 *v797; // r9
  __int64 v798; // r10
  int v799; // r8d
  int v800; // edi
  int v801; // edx
  int v802; // edi
  int v803; // edx
  int v804; // r8d
  HAM_ACTIVITY_RM_CONTEXT *v805; // rdi
  char v806; // al
  int v807; // edx
  unsigned int v808; // r13d
  int v809; // r8d
  int v810; // ecx
  int v811; // edi
  __int64 v812; // rax
  void *v813; // rbx
  __int64 v814; // rax
  int v815; // edi
  signed int v816; // ebx
  __int64 v817; // rax
  signed int v818; // eax
  int v819; // eax
  char *v820; // rcx
  HAM_ACTIVITY_RM_CONTEXT *v821; // rdi
  __int64 v822; // rax
  int v823; // r10d
  int v824; // r8d
  int v825; // edx
  int v826; // ecx
  int v827; // r11d
  int v828; // eax
  __int64 v829; // rax
  __int64 v830; // r8
  unsigned __int8 *v831; // rdi
  __int64 v832; // rcx
  char *v833; // rcx
  int v834; // r8d
  unsigned __int8 *v835; // r9
  char *v836; // r10
  int v837; // r8d
  int v838; // edi
  int v839; // edx
  int v840; // edi
  int v841; // edx
  int v842; // edi
  int v843; // ecx
  int v844; // edx
  void *v845; // rdi
  __int64 v846; // rax
  int v847; // edi
  signed int v848; // ebx
  void *v849; // rax
  signed int v850; // eax
  int v851; // eax
  __int64 v852; // rcx
  __int64 v853; // rax
  int v854; // eax
  int v855; // r8d
  int v856; // r9d
  int v857; // edx
  int v858; // ecx
  int v859; // r11d
  int v860; // eax
  unsigned __int8 *v861; // rdi
  char *v862; // rcx
  int v863; // r8d
  unsigned __int8 *v864; // r9
  __int64 v865; // r10
  int v866; // r8d
  int v867; // edi
  int v868; // edx
  int v869; // edi
  int v870; // edx
  int v871; // edi
  int v872; // ecx
  int v873; // edx
  __int64 v874; // rcx
  __int64 v875; // rcx
  __int64 v876; // rcx
  int v877; // eax
  HMODULE *v878; // rdi
  __int64 v879; // rbx
  int v880; // eax
  int v881; // eax
  char *v882; // rax
  _BYTE *v883; // r14
  __int64 v884; // rax
  int v885; // esi
  unsigned __int8 *v886; // rbx
  int v887; // r12d
  int v888; // r8d
  int v889; // r11d
  int v890; // r10d
  int v891; // r9d
  int v892; // ecx
  int v893; // r10d
  int v894; // r11d
  int v895; // r9d
  unsigned int v896; // r8d
  int v897; // r11d
  unsigned int v898; // r8d
  int v899; // r11d
  int v900; // r8d
  unsigned int v901; // r11d
  int v902; // r8d
  int v903; // r11d
  int v904; // r8d
  unsigned int v905; // r11d
  int v906; // edx
  int v907; // r11d
  unsigned int v908; // r8d
  int v909; // r11d
  int v910; // r8d
  int v911; // r11d
  int v912; // r8d
  unsigned int v913; // edi
  int v914; // r8d
  int v915; // edi
  int v916; // r8d
  unsigned int v917; // edi
  int v918; // r8d
  int v919; // edx
  unsigned __int64 v920; // rcx
  WCHAR *v921; // r13
  char v922; // al
  int v923; // ebx
  int v924; // edi
  LPCWSTR v925; // rdi
  const WCHAR *v926; // rdx
  __int64 v927; // rax
  const WCHAR *v928; // rdi
  char *v929; // r13
  __int64 v930; // rcx
  unsigned __int64 v931; // rcx
  unsigned int v932; // eax
  unsigned int v933; // ecx
  const CHAR *v934; // rdx
  __int64 v935; // rax
  __int64 (__fastcall *v936)(); // rcx
  HANDLE v937; // rax
  HMODULE *v938; // rdi
  __int64 v939; // rbx
  HMODULE *v940; // rdi
  __int64 v941; // rbx
  int v942; // eax
  void *v943; // r13
  HAM_ACTIVITY_RM_CONTEXT *v944; // rbx
  HANDLE v945; // rax
  void *v946; // rax
  void *v947; // rdi
  size_t v948; // rbx
  HANDLE v949; // rax
  void *v950; // rax
  HAM_ACTIVITY_RM_CONTEXT *v951; // rdi
  unsigned int v952; // r13d
  unsigned int v953; // r11d
  unsigned int v954; // r11d
  unsigned int v955; // r11d
  unsigned int v956; // edi
  HANDLE v957; // rax
  _DWORD *v958; // rax
  _DWORD *v959; // rdi
  __int64 v960; // r11
  int *v961; // rcx
  unsigned int v962; // edi
  int v963; // ebx
  unsigned int *v964; // r9
  __int64 v965; // r9
  int v966; // r10d
  _DWORD *v967; // r9
  void *v968; // rcx
  int v969; // eax
  __int64 v970; // r11
  unsigned int *v971; // r9
  __int64 v972; // r9
  int v973; // r10d
  int v974; // ebx
  unsigned int *v975; // r9
  void *v976; // rcx
  unsigned int v977; // r11d
  unsigned int *v978; // r9
  __int64 v979; // r9
  int v980; // r10d
  _DWORD *v981; // r9
  unsigned __int64 *v982; // rax
  __int64 v983; // rcx
  unsigned int v984; // edi
  unsigned int *v985; // r13
  int v986; // edi
  unsigned int v987; // r9d
  _BYTE *v988; // r10
  unsigned int v989; // eax
  unsigned int v990; // edi
  HANDLE v991; // rax
  _DWORD *v992; // rbx
  unsigned int v993; // r11d
  void *v994; // rcx
  HANDLE v995; // rax
  int v996; // edi
  _QWORD *v997; // rbx
  int v998; // edi
  SIZE_T v999; // rdi
  unsigned __int8 *v1000; // r11
  unsigned __int8 v1001; // al
  SIZE_T v1002; // rcx
  unsigned __int8 *v1003; // rbx
  int v1004; // r10d
  unsigned int v1005; // r9d
  unsigned int v1006; // edx
  int v1007; // r10d
  char v1008; // r9
  int v1009; // r14d
  int v1010; // r8d
  int v1011; // ecx
  unsigned int v1012; // r10d
  int v1013; // ecx
  unsigned __int8 v1014; // r8
  unsigned __int8 *v1015; // rdx
  int v1016; // r14d
  SIZE_T v1017; // r11
  int v1018; // r13d
  _BYTE *v1019; // rax
  int v1020; // ebx
  int v1021; // r15d
  int v1022; // r8d
  int v1023; // edi
  int v1024; // r10d
  int v1025; // r9d
  int v1026; // r10d
  int v1027; // r9d
  int v1028; // r10d
  unsigned int v1029; // r9d
  int v1030; // r10d
  int v1031; // r9d
  int v1032; // r10d
  int v1033; // r9d
  int v1034; // r10d
  int v1035; // r9d
  unsigned int v1036; // r10d
  unsigned int v1037; // r9d
  int v1038; // r10d
  int v1039; // r9d
  int v1040; // r10d
  int v1041; // r9d
  int v1042; // r10d
  int v1043; // r9d
  int v1044; // r10d
  int v1045; // r9d
  unsigned int v1046; // r10d
  int v1047; // r9d
  HANDLE v1048; // rax
  _DWORD *v1049; // rax
  _DWORD *v1050; // rbx
  void *v1051; // rsi
  HANDLE v1052; // rax
  void *v1053; // rax
  HANDLE v1054; // rax
  _OWORD *v1055; // rax
  HANDLE v1056; // rax
  _QWORD *v1057; // rax
  HANDLE v1058; // rax
  HANDLE v1059; // rax
  HANDLE v1060; // rax
  HANDLE v1061; // rax
  void *v1062; // rsi
  HANDLE v1063; // rax
  void *v1064; // rsi
  HANDLE v1065; // rax
  void *v1066; // rsi
  HANDLE v1067; // rax
  void *v1068; // rsi
  HANDLE v1069; // rax
  HANDLE v1070; // rax
  const void **v1071; // rbx
  int v1072; // edi
  unsigned int v1073; // r9d
  unsigned int v1074; // r9d
  unsigned int v1075; // eax
  unsigned int v1076; // edi
  HANDLE v1077; // rax
  _DWORD *v1078; // rsi
  void *v1079; // rcx
  void *v1080; // rcx
  HANDLE v1081; // rax
  int v1082; // eax
  unsigned int v1083; // ecx
  int v1084; // r9d
  unsigned int v1085; // eax
  int v1086; // eax
  unsigned int v1087; // r9d
  unsigned int *v1088; // rcx
  int v1089; // ebx
  unsigned int v1090; // esi
  unsigned int v1091; // ebx
  unsigned int *v1092; // rax
  unsigned int *v1093; // rcx
  int v1094; // ebx
  unsigned int v1095; // esi
  unsigned int v1096; // r9d
  unsigned int v1097; // ebx
  unsigned int *v1098; // rax
  unsigned int v1099; // r10d
  unsigned int v1100; // r11d
  unsigned int v1101; // eax
  unsigned int v1102; // edi
  HANDLE v1103; // rax
  int *v1104; // rax
  int *v1105; // rbx
  FARPROC v1106; // rax
  int v1107; // eax
  unsigned int v1108; // r9d
  signed int v1109; // eax
  int v1110; // edi
  int v1111; // r9d
  SIZE_T v1112; // r11
  unsigned int v1113; // r11d
  int v1114; // r9d
  SIZE_T v1115; // rsi
  int v1116; // r9d
  int v1117; // r9d
  int v1118; // r9d
  unsigned int v1119; // r10d
  int v1120; // r9d
  int v1121; // r10d
  int v1122; // r11d
  HANDLE v1123; // rax
  _QWORD *v1124; // rax
  _QWORD *v1125; // rbx
  HANDLE v1126; // rax
  void *v1127; // rax
  HANDLE v1128; // rax
  void *v1129; // rax
  HANDLE v1130; // rax
  void *v1131; // rax
  void *v1132; // rsi
  HANDLE v1133; // rax
  void *v1134; // rsi
  HANDLE v1135; // rax
  void *v1136; // rsi
  HANDLE v1137; // rax
  HANDLE v1138; // rax
  unsigned int *v1139; // rbx
  void *v1140; // rsi
  HANDLE v1141; // rax
  void *v1142; // rsi
  HANDLE v1143; // rax
  void *v1144; // rsi
  HANDLE v1145; // rax
  HANDLE v1146; // rax
  int v1147; // ebx
  unsigned __int8 *v1148; // rdi
  unsigned __int64 v1149; // rsi
  int *v1150; // r8
  unsigned __int8 *v1151; // r9
  unsigned __int8 v1152; // al
  int *v1153; // r10
  int v1154; // r11d
  unsigned int v1155; // edi
  char v1156; // r14
  int v1157; // edx
  int v1158; // ecx
  unsigned int v1159; // edx
  int v1160; // ecx
  char v1161; // r14
  int v1162; // edx
  unsigned __int64 v1163; // rcx
  _BYTE *v1164; // r15
  int v1165; // esi
  unsigned __int8 *v1166; // r13
  int v1167; // edi
  unsigned __int64 v1168; // rax
  int v1169; // r12d
  int v1170; // r10d
  int v1171; // r9d
  int v1172; // ecx
  int v1173; // r10d
  int v1174; // r11d
  int v1175; // r9d
  unsigned int v1176; // r8d
  int v1177; // r11d
  unsigned int v1178; // r8d
  int v1179; // r11d
  int v1180; // r8d
  unsigned int v1181; // r11d
  int v1182; // r8d
  int v1183; // r11d
  int v1184; // r8d
  unsigned int v1185; // r11d
  int v1186; // r8d
  int v1187; // r11d
  unsigned int v1188; // r8d
  int v1189; // r11d
  int v1190; // r8d
  int v1191; // r11d
  int v1192; // r8d
  unsigned int v1193; // edi
  int v1194; // r8d
  int v1195; // edi
  int v1196; // r8d
  unsigned int v1197; // edi
  int v1198; // ecx
  int v1199; // edx
  unsigned __int64 nn; // rcx
  int *v1201; // rbx
  int v1202; // edi
  unsigned int v1203; // r9d
  HANDLE v1204; // rax
  int v1205; // edi
  int v1206; // r9d
  SIZE_T v1207; // r14
  int v1208; // r9d
  unsigned int v1209; // r9d
  __int64 v1210; // r10
  void *v1211; // rbx
  void *v1212; // rax
  unsigned __int64 v1213; // r9
  unsigned __int64 v1214; // r11
  unsigned int *v1215; // r9
  unsigned __int64 v1216; // r11
  int v1217; // eax
  __int64 v1218; // r9
  unsigned int v1219; // r10d
  HANDLE v1220; // rax
  HANDLE v1221; // rax
  _QWORD *v1222; // rbx
  void *v1223; // rsi
  HANDLE v1224; // rax
  void *v1225; // rsi
  HANDLE v1226; // rax
  void *v1227; // rsi
  HANDLE v1228; // rax
  HANDLE v1229; // rax
  HANDLE v1230; // rax
  void *v1231; // rbx
  HANDLE v1232; // rax
  void *v1233; // rbx
  HANDLE v1234; // rax
  void *v1235; // rbx
  HANDLE v1236; // rax
  void *v1237; // rbx
  HANDLE v1238; // rax
  HANDLE v1239; // rax
  HANDLE v1240; // rax
  unsigned int *v1241; // rdi
  unsigned int v1242; // r9d
  int v1243; // r10d
  __int64 v1244; // r11
  int *v1245; // rax
  int v1246; // r9d
  int v1247; // edi
  _QWORD *v1248; // rax
  void *v1249; // rdi
  HANDLE v1250; // rax
  void *v1251; // rdi
  HANDLE v1252; // rax
  HANDLE v1253; // rax
  HANDLE v1254; // rax
  int v1255; // ebx
  int v1256; // eax
  HMODULE *v1257; // rdi
  __int64 v1258; // rsi
  unsigned __int8 v1259; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1260; // [rsp+60h] [rbp-A0h]
  const WCHAR *v1261; // [rsp+68h] [rbp-98h]
  void *v1262; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v1263; // [rsp+68h] [rbp-98h]
  const WCHAR *v1264; // [rsp+68h] [rbp-98h]
  char *v1265; // [rsp+68h] [rbp-98h]
  const WCHAR *v1266; // [rsp+68h] [rbp-98h]
  char *v1267; // [rsp+68h] [rbp-98h]
  void *v1268; // [rsp+68h] [rbp-98h]
  void *v1269; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v1270; // [rsp+68h] [rbp-98h]
  void *v1271; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v1272; // [rsp+68h] [rbp-98h]
  int v1273; // [rsp+68h] [rbp-98h]
  int v1274; // [rsp+68h] [rbp-98h]
  int v1275; // [rsp+68h] [rbp-98h]
  int v1276; // [rsp+68h] [rbp-98h]
  unsigned int v1277; // [rsp+68h] [rbp-98h]
  int v1278; // [rsp+68h] [rbp-98h]
  int v1279; // [rsp+68h] [rbp-98h]
  int v1280; // [rsp+70h] [rbp-90h]
  int v1281; // [rsp+70h] [rbp-90h]
  unsigned int v1282; // [rsp+70h] [rbp-90h]
  unsigned int v1283; // [rsp+70h] [rbp-90h]
  unsigned int v1284; // [rsp+70h] [rbp-90h]
  int v1285; // [rsp+70h] [rbp-90h]
  int v1286; // [rsp+70h] [rbp-90h]
  int v1287; // [rsp+70h] [rbp-90h]
  int v1288; // [rsp+70h] [rbp-90h]
  unsigned int v1289; // [rsp+74h] [rbp-8Ch]
  int v1290; // [rsp+74h] [rbp-8Ch]
  unsigned int ii; // [rsp+74h] [rbp-8Ch]
  unsigned int v1292; // [rsp+74h] [rbp-8Ch]
  int v1293; // [rsp+74h] [rbp-8Ch]
  int v1294; // [rsp+74h] [rbp-8Ch]
  int v1295; // [rsp+78h] [rbp-88h]
  int v1296; // [rsp+78h] [rbp-88h]
  int v1297; // [rsp+78h] [rbp-88h]
  int v1298; // [rsp+78h] [rbp-88h]
  unsigned int jj; // [rsp+78h] [rbp-88h]
  char v1300; // [rsp+78h] [rbp-88h]
  int v1301; // [rsp+78h] [rbp-88h]
  SIZE_T v1302; // [rsp+80h] [rbp-80h]
  SIZE_T v1303; // [rsp+80h] [rbp-80h]
  SIZE_T v1304; // [rsp+80h] [rbp-80h]
  SIZE_T v1305; // [rsp+80h] [rbp-80h]
  SIZE_T v1306; // [rsp+80h] [rbp-80h]
  int v1307; // [rsp+80h] [rbp-80h]
  int v1308; // [rsp+80h] [rbp-80h]
  int v1309; // [rsp+80h] [rbp-80h]
  int v1310; // [rsp+80h] [rbp-80h]
  unsigned int v1311; // [rsp+80h] [rbp-80h]
  int v1312; // [rsp+80h] [rbp-80h]
  unsigned int v1313; // [rsp+80h] [rbp-80h]
  int v1314; // [rsp+80h] [rbp-80h]
  unsigned int v1315; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v1316; // [rsp+88h] [rbp-78h]
  const void *v1317; // [rsp+88h] [rbp-78h]
  int v1318; // [rsp+88h] [rbp-78h]
  int v1319; // [rsp+88h] [rbp-78h]
  unsigned int v1320; // [rsp+88h] [rbp-78h]
  unsigned int v1321; // [rsp+88h] [rbp-78h]
  int v1322; // [rsp+88h] [rbp-78h]
  int v1323; // [rsp+88h] [rbp-78h]
  int v1324; // [rsp+88h] [rbp-78h]
  int v1325; // [rsp+88h] [rbp-78h]
  int v1326; // [rsp+88h] [rbp-78h]
  int v1327; // [rsp+90h] [rbp-70h]
  int v1328; // [rsp+90h] [rbp-70h]
  unsigned int v1329; // [rsp+90h] [rbp-70h]
  int v1330; // [rsp+90h] [rbp-70h]
  int v1331; // [rsp+90h] [rbp-70h]
  int v1332; // [rsp+90h] [rbp-70h]
  unsigned int v1333; // [rsp+98h] [rbp-68h]
  unsigned int v1334; // [rsp+98h] [rbp-68h]
  int v1335; // [rsp+98h] [rbp-68h]
  unsigned int v1336; // [rsp+98h] [rbp-68h]
  int *v1337; // [rsp+98h] [rbp-68h]
  int v1338; // [rsp+98h] [rbp-68h]
  int v1339; // [rsp+98h] [rbp-68h]
  int v1340; // [rsp+98h] [rbp-68h]
  char *v1341; // [rsp+A0h] [rbp-60h]
  _QWORD *v1342; // [rsp+A0h] [rbp-60h]
  LPVOID v1343; // [rsp+A0h] [rbp-60h]
  LPVOID v1344; // [rsp+A0h] [rbp-60h]
  LPVOID v1345; // [rsp+A0h] [rbp-60h]
  LPVOID v1346; // [rsp+A0h] [rbp-60h]
  LPVOID v1347; // [rsp+A0h] [rbp-60h]
  LPVOID v1348; // [rsp+A0h] [rbp-60h]
  LPVOID v1349; // [rsp+A0h] [rbp-60h]
  LPVOID v1350; // [rsp+A0h] [rbp-60h]
  LPVOID v1351; // [rsp+A0h] [rbp-60h]
  __int64 v1352; // [rsp+A0h] [rbp-60h]
  int *v1353; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1354; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1355; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1356; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1357; // [rsp+A8h] [rbp-58h]
  int v1358; // [rsp+A8h] [rbp-58h]
  int v1359; // [rsp+A8h] [rbp-58h]
  int v1360; // [rsp+A8h] [rbp-58h]
  int v1361; // [rsp+A8h] [rbp-58h]
  unsigned int v1362; // [rsp+A8h] [rbp-58h]
  unsigned int v1363; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1364; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1365; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1366; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1367; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1368; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1369; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1370; // [rsp+B0h] [rbp-50h]
  int v1371; // [rsp+B0h] [rbp-50h]
  int v1372; // [rsp+B0h] [rbp-50h]
  unsigned int v1373; // [rsp+B0h] [rbp-50h]
  int v1374; // [rsp+B0h] [rbp-50h]
  int v1375; // [rsp+B8h] [rbp-48h]
  int v1376; // [rsp+B8h] [rbp-48h]
  int v1377; // [rsp+B8h] [rbp-48h]
  int v1378; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1379; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1380; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1381; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1382; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1383; // [rsp+C0h] [rbp-40h]
  int v1384; // [rsp+C0h] [rbp-40h]
  int v1385; // [rsp+C0h] [rbp-40h]
  unsigned int mm; // [rsp+C0h] [rbp-40h]
  int v1387; // [rsp+C0h] [rbp-40h]
  unsigned int v1388; // [rsp+C8h] [rbp-38h]
  void *v1389; // [rsp+C8h] [rbp-38h]
  SIZE_T v1390; // [rsp+C8h] [rbp-38h]
  SIZE_T v1391; // [rsp+C8h] [rbp-38h]
  SIZE_T v1392; // [rsp+C8h] [rbp-38h]
  void *v1393; // [rsp+C8h] [rbp-38h]
  void *v1394; // [rsp+C8h] [rbp-38h]
  void *v1395; // [rsp+C8h] [rbp-38h]
  void *v1396; // [rsp+C8h] [rbp-38h]
  SIZE_T v1397; // [rsp+C8h] [rbp-38h]
  int v1398; // [rsp+D0h] [rbp-30h]
  int v1399; // [rsp+D0h] [rbp-30h]
  int v1400; // [rsp+D0h] [rbp-30h]
  _BYTE *v1401; // [rsp+D8h] [rbp-28h]
  unsigned int *v1402; // [rsp+D8h] [rbp-28h]
  char *v1403; // [rsp+D8h] [rbp-28h]
  void *v1404; // [rsp+D8h] [rbp-28h]
  HAM_ACTIVITY_RM_CONTEXT *v1405; // [rsp+D8h] [rbp-28h]
  _QWORD *v1406; // [rsp+D8h] [rbp-28h]
  unsigned int *v1407; // [rsp+D8h] [rbp-28h]
  char *v1408; // [rsp+D8h] [rbp-28h]
  int *v1409; // [rsp+E0h] [rbp-20h]
  unsigned int v1410; // [rsp+E0h] [rbp-20h]
  unsigned int v1411; // [rsp+E0h] [rbp-20h]
  int v1412; // [rsp+E0h] [rbp-20h]
  SIZE_T v1413; // [rsp+E8h] [rbp-18h]
  int *v1414; // [rsp+E8h] [rbp-18h]
  SIZE_T v1415; // [rsp+E8h] [rbp-18h]
  SIZE_T v1416; // [rsp+E8h] [rbp-18h]
  SIZE_T v1417; // [rsp+E8h] [rbp-18h]
  int *v1418; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v1419; // [rsp+F0h] [rbp-10h]
  int v1420; // [rsp+F0h] [rbp-10h]
  unsigned int v1421; // [rsp+F0h] [rbp-10h]
  int v1422; // [rsp+F0h] [rbp-10h]
  int v1423; // [rsp+F0h] [rbp-10h]
  void *v1424; // [rsp+F8h] [rbp-8h]
  void *v1425; // [rsp+F8h] [rbp-8h]
  void *v1426; // [rsp+F8h] [rbp-8h]
  int v1427; // [rsp+F8h] [rbp-8h]
  void *v1428; // [rsp+F8h] [rbp-8h]
  _BYTE *v1429; // [rsp+F8h] [rbp-8h]
  char *v1430; // [rsp+100h] [rbp+0h]
  LPVOID v1431; // [rsp+100h] [rbp+0h]
  unsigned __int8 *v1432; // [rsp+100h] [rbp+0h]
  void *v1433; // [rsp+100h] [rbp+0h]
  void *v1434; // [rsp+108h] [rbp+8h]
  __int64 v1435; // [rsp+108h] [rbp+8h]
  __int64 v1436; // [rsp+108h] [rbp+8h]
  __int64 v1437; // [rsp+108h] [rbp+8h]
  unsigned int *v1438; // [rsp+108h] [rbp+8h]
  void *v1439; // [rsp+108h] [rbp+8h]
  char *v1440; // [rsp+110h] [rbp+10h]
  unsigned __int8 *v1441; // [rsp+110h] [rbp+10h]
  void *v1442; // [rsp+110h] [rbp+10h]
  unsigned __int8 *v1443; // [rsp+110h] [rbp+10h]
  const WCHAR *v1444; // [rsp+110h] [rbp+10h]
  void *v1445; // [rsp+110h] [rbp+10h]
  unsigned int *v1446; // [rsp+118h] [rbp+18h]
  unsigned int v1447; // [rsp+118h] [rbp+18h]
  int v1448; // [rsp+118h] [rbp+18h]
  void *v1449; // [rsp+120h] [rbp+20h]
  char *v1450; // [rsp+120h] [rbp+20h]
  char *v1451; // [rsp+120h] [rbp+20h]
  void *v1452; // [rsp+120h] [rbp+20h]
  void *v1453; // [rsp+120h] [rbp+20h]
  unsigned int v1454; // [rsp+128h] [rbp+28h] BYREF
  int v1455; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v1456; // [rsp+130h] [rbp+30h]
  unsigned __int8 *v1457; // [rsp+138h] [rbp+38h] BYREF
  LPVOID v1458; // [rsp+140h] [rbp+40h]
  HAM_ACTIVITY_RM_CONTEXT *v1459; // [rsp+148h] [rbp+48h]
  int v1460; // [rsp+150h] [rbp+50h]
  unsigned int v1461; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1462; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v1463; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1464; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1465; // [rsp+168h] [rbp+68h]
  unsigned int v1466; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1467; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1468; // [rsp+174h] [rbp+74h]
  unsigned int v1469; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1470; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1471; // [rsp+180h] [rbp+80h]
  unsigned int v1472; // [rsp+184h] [rbp+84h] BYREF
  int v1473; // [rsp+188h] [rbp+88h]
  unsigned int v1474; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1475; // [rsp+194h] [rbp+94h]
  unsigned int v1476; // [rsp+198h] [rbp+98h] BYREF
  int v1477; // [rsp+1A0h] [rbp+A0h]
  unsigned int v1478; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1479; // [rsp+1ACh] [rbp+ACh]
  unsigned int v1480; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1481; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1482; // [rsp+1B8h] [rbp+B8h]
  unsigned int v1483; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1484; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1485; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1486; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1487; // [rsp+1CCh] [rbp+CCh] BYREF
  SIZE_T v1488; // [rsp+1D0h] [rbp+D0h]
  unsigned int v1489; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1490; // [rsp+1DCh] [rbp+DCh]
  unsigned int v1491; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1492; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1493; // [rsp+1E8h] [rbp+E8h]
  int v1494; // [rsp+1ECh] [rbp+ECh]
  int v1495; // [rsp+1F0h] [rbp+F0h]
  unsigned int v1496; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1497; // [rsp+1F8h] [rbp+F8h]
  unsigned int v1498; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1499; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1500; // [rsp+204h] [rbp+104h]
  unsigned int v1501; // [rsp+208h] [rbp+108h] BYREF
  int v1502; // [rsp+20Ch] [rbp+10Ch]
  int v1503; // [rsp+210h] [rbp+110h]
  _DWORD v1504[2]; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1505; // [rsp+21Ch] [rbp+11Ch] BYREF
  int v1506; // [rsp+220h] [rbp+120h]
  int v1507; // [rsp+224h] [rbp+124h]
  unsigned int v1508; // [rsp+228h] [rbp+128h] BYREF
  int v1509; // [rsp+22Ch] [rbp+12Ch]
  int v1510; // [rsp+230h] [rbp+130h]
  int v1511; // [rsp+234h] [rbp+134h]
  int v1512; // [rsp+238h] [rbp+138h]
  int v1513; // [rsp+23Ch] [rbp+13Ch]
  int v1514; // [rsp+240h] [rbp+140h]
  int v1515; // [rsp+244h] [rbp+144h]
  int v1516; // [rsp+248h] [rbp+148h]
  int v1517; // [rsp+24Ch] [rbp+14Ch]
  int v1518; // [rsp+250h] [rbp+150h]
  int v1519; // [rsp+254h] [rbp+154h]
  unsigned int v1520; // [rsp+258h] [rbp+158h] BYREF
  _DWORD v1521[2]; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v1522; // [rsp+264h] [rbp+164h]
  int v1523; // [rsp+268h] [rbp+168h]
  int v1524; // [rsp+26Ch] [rbp+16Ch]
  unsigned int v1525; // [rsp+270h] [rbp+170h]
  int v1526; // [rsp+274h] [rbp+174h]
  int v1527; // [rsp+278h] [rbp+178h]
  int v1528; // [rsp+27Ch] [rbp+17Ch]
  int v1529; // [rsp+280h] [rbp+180h]
  int v1530; // [rsp+284h] [rbp+184h]
  int v1531; // [rsp+288h] [rbp+188h]
  int v1532; // [rsp+28Ch] [rbp+18Ch]
  unsigned int v1533; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v1534; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v1535; // [rsp+298h] [rbp+198h]
  unsigned int v1536; // [rsp+29Ch] [rbp+19Ch] BYREF
  unsigned int v1537; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int v1538; // [rsp+2A4h] [rbp+1A4h] BYREF
  int v1539; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1540; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1541; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1542; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1543; // [rsp+2BCh] [rbp+1BCh] BYREF
  unsigned int v1544; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v1545; // [rsp+2C4h] [rbp+1C4h] BYREF
  unsigned int v1546; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1547; // [rsp+2CCh] [rbp+1CCh]
  unsigned int v1548; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v1549; // [rsp+2D4h] [rbp+1D4h] BYREF
  unsigned int v1550; // [rsp+2D8h] [rbp+1D8h]
  unsigned int v1551; // [rsp+2DCh] [rbp+1DCh] BYREF
  unsigned int v1552; // [rsp+2E0h] [rbp+1E0h] BYREF
  SIZE_T v1553; // [rsp+2E4h] [rbp+1E4h]
  unsigned int v1554; // [rsp+2ECh] [rbp+1ECh] BYREF
  unsigned int v1555; // [rsp+2F0h] [rbp+1F0h]
  unsigned int v1556; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v1557; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1558; // [rsp+2FCh] [rbp+1FCh]
  unsigned int v1559; // [rsp+300h] [rbp+200h]
  unsigned int v1560; // [rsp+304h] [rbp+204h]
  unsigned int v1561; // [rsp+308h] [rbp+208h] BYREF
  unsigned int v1562; // [rsp+30Ch] [rbp+20Ch]
  unsigned int v1563; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v1564; // [rsp+314h] [rbp+214h] BYREF
  unsigned int v1565; // [rsp+318h] [rbp+218h]
  unsigned int v1566; // [rsp+31Ch] [rbp+21Ch] BYREF
  unsigned int v1567; // [rsp+320h] [rbp+220h] BYREF
  int v1568; // [rsp+324h] [rbp+224h]
  _DWORD v1569[2]; // [rsp+328h] [rbp+228h] BYREF
  _DWORD v1570[4]; // [rsp+330h] [rbp+230h] BYREF
  unsigned int v1571; // [rsp+340h] [rbp+240h] BYREF
  int v1572; // [rsp+344h] [rbp+244h]
  int v1573; // [rsp+348h] [rbp+248h]
  unsigned int dwBytes; // [rsp+34Ch] [rbp+24Ch] BYREF
  unsigned int dwBytes_4; // [rsp+350h] [rbp+250h]
  _DWORD *v1576; // [rsp+358h] [rbp+258h] BYREF
  unsigned int v1577; // [rsp+360h] [rbp+260h] BYREF
  unsigned int v1578; // [rsp+364h] [rbp+264h] BYREF
  unsigned int v1579; // [rsp+368h] [rbp+268h] BYREF
  unsigned int v1580; // [rsp+36Ch] [rbp+26Ch] BYREF
  unsigned int v1581; // [rsp+370h] [rbp+270h] BYREF
  unsigned int v1582; // [rsp+374h] [rbp+274h] BYREF
  int v1583; // [rsp+378h] [rbp+278h]
  size_t v1584; // [rsp+380h] [rbp+280h]
  unsigned __int64 v1585; // [rsp+388h] [rbp+288h]
  size_t pcchLength; // [rsp+390h] [rbp+290h] BYREF
  _DWORD *v1587; // [rsp+398h] [rbp+298h] BYREF
  _DWORD *v1588; // [rsp+3A0h] [rbp+2A0h] BYREF
  unsigned __int64 v1589; // [rsp+3A8h] [rbp+2A8h]
  _DWORD *v1590; // [rsp+3B0h] [rbp+2B0h] BYREF
  size_t v1591; // [rsp+3B8h] [rbp+2B8h] BYREF
  _DWORD *v1592; // [rsp+3C0h] [rbp+2C0h] BYREF
  _DWORD *v1593; // [rsp+3C8h] [rbp+2C8h] BYREF
  _DWORD *v1594; // [rsp+3D0h] [rbp+2D0h] BYREF
  LPVOID v1595; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 v1596; // [rsp+3E0h] [rbp+2E0h]
  void *v1597; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 *v1598; // [rsp+3F0h] [rbp+2F0h]
  __int64 v1599; // [rsp+3F8h] [rbp+2F8h]
  void *v1600; // [rsp+400h] [rbp+300h]
  __int64 v1601; // [rsp+408h] [rbp+308h]
  LPVOID lpMem; // [rsp+410h] [rbp+310h]
  unsigned __int64 v1603; // [rsp+418h] [rbp+318h]
  int *v1604; // [rsp+420h] [rbp+320h]
  unsigned __int8 *v1605; // [rsp+428h] [rbp+328h] BYREF
  LPCWSTR lpModuleName; // [rsp+430h] [rbp+330h]
  void *v1607; // [rsp+438h] [rbp+338h] BYREF
  unsigned int *v1608; // [rsp+440h] [rbp+340h]
  unsigned int *v1609; // [rsp+448h] [rbp+348h]
  unsigned int *v1610; // [rsp+450h] [rbp+350h] BYREF
  unsigned int *v1611; // [rsp+458h] [rbp+358h] BYREF
  HMODULE phModule; // [rsp+460h] [rbp+360h] BYREF
  void *v1613; // [rsp+468h] [rbp+368h] BYREF
  int *v1614; // [rsp+470h] [rbp+370h]
  unsigned __int64 v1615; // [rsp+478h] [rbp+378h]
  void *v1616; // [rsp+480h] [rbp+380h] BYREF
  unsigned __int64 v1617; // [rsp+488h] [rbp+388h] BYREF
  unsigned __int64 v1618; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v1619; // [rsp+498h] [rbp+398h] BYREF
  int *v1620; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v1621; // [rsp+4A8h] [rbp+3A8h]
  int *v1622; // [rsp+4B0h] [rbp+3B0h] BYREF
  int *v1623; // [rsp+4B8h] [rbp+3B8h]
  __int64 v1624; // [rsp+4C0h] [rbp+3C0h]
  int *v1625; // [rsp+4C8h] [rbp+3C8h] BYREF
  int *v1626; // [rsp+4D0h] [rbp+3D0h]
  LPVOID v1627; // [rsp+4D8h] [rbp+3D8h] BYREF
  void *v1628; // [rsp+4E0h] [rbp+3E0h]
  LPVOID v1629; // [rsp+4E8h] [rbp+3E8h] BYREF
  int *v1630; // [rsp+4F0h] [rbp+3F0h]
  unsigned int *v1631; // [rsp+4F8h] [rbp+3F8h] BYREF
  int *v1632; // [rsp+500h] [rbp+400h]
  __int64 v1633; // [rsp+508h] [rbp+408h] BYREF
  LPCWSTR v1634; // [rsp+510h] [rbp+410h]
  unsigned __int64 v1635; // [rsp+518h] [rbp+418h]
  void **v1636; // [rsp+520h] [rbp+420h] BYREF
  LPCWSTR v1637; // [rsp+528h] [rbp+428h]
  unsigned __int64 v1638; // [rsp+530h] [rbp+430h]
  _DWORD *v1639; // [rsp+538h] [rbp+438h] BYREF
  _BYTE *v1640; // [rsp+540h] [rbp+440h] BYREF
  unsigned __int64 v1641; // [rsp+548h] [rbp+448h]
  _QWORD *v1642; // [rsp+550h] [rbp+450h] BYREF
  __int64 v1643; // [rsp+558h] [rbp+458h] BYREF
  unsigned __int64 v1644; // [rsp+560h] [rbp+460h]
  wchar_t *String1; // [rsp+568h] [rbp+468h] BYREF
  __int64 v1646; // [rsp+570h] [rbp+470h]
  __int64 v1647; // [rsp+578h] [rbp+478h] BYREF
  __int64 v1648; // [rsp+580h] [rbp+480h] BYREF
  __int64 v1649; // [rsp+588h] [rbp+488h] BYREF
  wchar_t *v1650; // [rsp+590h] [rbp+490h] BYREF
  wchar_t *v1651; // [rsp+598h] [rbp+498h] BYREF
  wchar_t *v1652; // [rsp+5A0h] [rbp+4A0h] BYREF
  __int64 v1653; // [rsp+5A8h] [rbp+4A8h] BYREF
  void *Src; // [rsp+5B0h] [rbp+4B0h]
  size_t Size; // [rsp+5B8h] [rbp+4B8h]
  void *v1656; // [rsp+5C0h] [rbp+4C0h]
  __int64 v1657; // [rsp+5C8h] [rbp+4C8h] BYREF
  LPCWSTR v1658; // [rsp+5D0h] [rbp+4D0h]
  unsigned __int64 v1659; // [rsp+5D8h] [rbp+4D8h]
  void *v1660; // [rsp+5E0h] [rbp+4E0h]
  size_t v1661; // [rsp+5E8h] [rbp+4E8h]
  void *v1662; // [rsp+5F0h] [rbp+4F0h]
  size_t v1663; // [rsp+5F8h] [rbp+4F8h]
  unsigned __int64 v1664; // [rsp+600h] [rbp+500h]
  unsigned int *v1665; // [rsp+608h] [rbp+508h] BYREF
  unsigned int *v1666; // [rsp+610h] [rbp+510h] BYREF
  unsigned __int64 v1667; // [rsp+618h] [rbp+518h]
  unsigned int *v1668; // [rsp+620h] [rbp+520h] BYREF
  LPVOID v1669; // [rsp+628h] [rbp+528h]
  unsigned __int64 v1670; // [rsp+630h] [rbp+530h]
  void *v1671; // [rsp+638h] [rbp+538h] BYREF
  __int64 *v1672; // [rsp+640h] [rbp+540h]
  __int64 v1673; // [rsp+648h] [rbp+548h]
  void *v1674; // [rsp+650h] [rbp+550h]
  __int64 v1675; // [rsp+658h] [rbp+558h]
  LPVOID v1676; // [rsp+660h] [rbp+560h]
  SIZE_T v1677; // [rsp+668h] [rbp+568h]
  void *v1678; // [rsp+670h] [rbp+570h] BYREF
  unsigned int *v1679; // [rsp+678h] [rbp+578h]
  unsigned int *v1680; // [rsp+680h] [rbp+580h]
  unsigned int *v1681; // [rsp+688h] [rbp+588h] BYREF
  unsigned int *v1682; // [rsp+690h] [rbp+590h] BYREF
  HMODULE hModule; // [rsp+698h] [rbp+598h] BYREF
  void *v1684; // [rsp+6A0h] [rbp+5A0h] BYREF
  int *v1685; // [rsp+6A8h] [rbp+5A8h]
  unsigned __int64 v1686; // [rsp+6B0h] [rbp+5B0h]
  void *v1687; // [rsp+6B8h] [rbp+5B8h] BYREF
  unsigned __int64 v1688; // [rsp+6C0h] [rbp+5C0h] BYREF
  unsigned __int64 v1689; // [rsp+6C8h] [rbp+5C8h] BYREF
  unsigned __int64 v1690; // [rsp+6D0h] [rbp+5D0h] BYREF
  _QWORD v1691[2]; // [rsp+6D8h] [rbp+5D8h] BYREF
  _QWORD v1692[4]; // [rsp+6E8h] [rbp+5E8h] BYREF
  _DWORD *v1693; // [rsp+708h] [rbp+608h] BYREF
  __int128 v1694; // [rsp+710h] [rbp+610h]
  void *v1695; // [rsp+728h] [rbp+628h] BYREF
  unsigned __int64 *v1696; // [rsp+738h] [rbp+638h] BYREF
  size_t v1697; // [rsp+740h] [rbp+640h] BYREF
  void *v1698; // [rsp+748h] [rbp+648h]
  size_t v1699; // [rsp+750h] [rbp+650h] BYREF
  void *v1700; // [rsp+758h] [rbp+658h]
  unsigned __int64 v1701; // [rsp+760h] [rbp+660h]
  LPVOID v1702; // [rsp+768h] [rbp+668h]
  __int64 v1703; // [rsp+770h] [rbp+670h]
  unsigned __int64 v1704; // [rsp+778h] [rbp+678h]
  void *v1705; // [rsp+788h] [rbp+688h] BYREF
  void *v1706; // [rsp+798h] [rbp+698h] BYREF
  unsigned __int64 *v1707; // [rsp+7A8h] [rbp+6A8h] BYREF
  void *v1708; // [rsp+7B8h] [rbp+6B8h] BYREF
  int *v1709; // [rsp+7C8h] [rbp+6C8h] BYREF
  _DWORD *v1710; // [rsp+7D8h] [rbp+6D8h] BYREF
  unsigned __int64 v1711; // [rsp+7E0h] [rbp+6E0h]
  LPVOID v1712; // [rsp+7E8h] [rbp+6E8h]
  __int64 v1713; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1714; // [rsp+7F8h] [rbp+6F8h]
  _QWORD v1715[3]; // [rsp+800h] [rbp+700h] BYREF
  int *v1716; // [rsp+818h] [rbp+718h] BYREF
  void *v1717; // [rsp+828h] [rbp+728h] BYREF
  __int128 v1718; // [rsp+830h] [rbp+730h]
  unsigned __int16 *v1719; // [rsp+840h] [rbp+740h]
  unsigned __int16 *v1720; // [rsp+848h] [rbp+748h]
  char *v1721; // [rsp+850h] [rbp+750h]
  _QWORD v1722[2]; // [rsp+858h] [rbp+758h] BYREF
  unsigned int v1723; // [rsp+868h] [rbp+768h]
  unsigned int v1724; // [rsp+86Ch] [rbp+76Ch]
  int v1725; // [rsp+870h] [rbp+770h]
  _QWORD v1726[2]; // [rsp+878h] [rbp+778h] BYREF
  unsigned int v1727; // [rsp+888h] [rbp+788h]
  unsigned int v1728; // [rsp+88Ch] [rbp+78Ch]
  int v1729; // [rsp+890h] [rbp+790h]
  _BYTE v1730[24]; // [rsp+8A0h] [rbp+7A0h] BYREF
  char *v1731; // [rsp+8B8h] [rbp+7B8h]
  _BYTE v1732[4]; // [rsp+910h] [rbp+810h] BYREF
  int v1733; // [rsp+914h] [rbp+814h]
  int v1734; // [rsp+918h] [rbp+818h]
  __int16 v1735; // [rsp+922h] [rbp+822h]
  __int64 v1736; // [rsp+928h] [rbp+828h]
  _BYTE v1737[4]; // [rsp+980h] [rbp+880h] BYREF
  int v1738; // [rsp+984h] [rbp+884h]
  int v1739; // [rsp+988h] [rbp+888h]
  SIZE_T v1740; // [rsp+998h] [rbp+898h]
  _BYTE v1741[24]; // [rsp+9F0h] [rbp+8F0h] BYREF
  unsigned __int16 *v1742; // [rsp+A08h] [rbp+908h]
  _BYTE v1743[4]; // [rsp+A60h] [rbp+960h] BYREF
  int v1744; // [rsp+A64h] [rbp+964h]
  int v1745; // [rsp+A68h] [rbp+968h]
  SIZE_T v1746; // [rsp+A78h] [rbp+978h]
  _BYTE v1747[24]; // [rsp+AD0h] [rbp+9D0h] BYREF
  unsigned __int16 *v1748; // [rsp+AE8h] [rbp+9E8h]
  _BYTE v1749[4]; // [rsp+B40h] [rbp+A40h] BYREF
  int v1750; // [rsp+B44h] [rbp+A44h]
  int v1751; // [rsp+B48h] [rbp+A48h]
  void *v1752; // [rsp+B58h] [rbp+A58h]
  _BYTE v1753[4]; // [rsp+BB0h] [rbp+AB0h] BYREF
  int v1754; // [rsp+BB4h] [rbp+AB4h]
  int v1755; // [rsp+BB8h] [rbp+AB8h]
  char *v1756; // [rsp+BC8h] [rbp+AC8h]
  _BYTE v1757[24]; // [rsp+C20h] [rbp+B20h] BYREF
  __int64 v1758; // [rsp+C38h] [rbp+B38h]
  int v1759; // [rsp+C90h] [rbp+B90h] BYREF
  int v1760; // [rsp+C94h] [rbp+B94h]
  void *v1761; // [rsp+C98h] [rbp+B98h]
  void *v1762; // [rsp+CA0h] [rbp+BA0h]
  void *v1763; // [rsp+CA8h] [rbp+BA8h]
  void *v1764; // [rsp+CB0h] [rbp+BB0h]
  void *v1765; // [rsp+CB8h] [rbp+BB8h]
  __int64 v1766; // [rsp+CC0h] [rbp+BC0h]
  int v1767; // [rsp+CC8h] [rbp+BC8h]
  __int128 v1768; // [rsp+CCCh] [rbp+BCCh] BYREF
  __int128 v1769; // [rsp+CDCh] [rbp+BDCh] BYREF
  unsigned int v1770; // [rsp+CECh] [rbp+BECh] BYREF
  unsigned int v1771; // [rsp+CF0h] [rbp+BF0h]
  unsigned int v1772; // [rsp+CF4h] [rbp+BF4h]
  unsigned int v1773; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v1774; // [rsp+D00h] [rbp+C00h]
  unsigned __int64 v1775; // [rsp+D08h] [rbp+C08h]
  __int64 v1776; // [rsp+D10h] [rbp+C10h]
  __int64 v1777; // [rsp+D18h] [rbp+C18h]
  __int64 v1778; // [rsp+D20h] [rbp+C20h] BYREF
  __int64 v1779; // [rsp+D28h] [rbp+C28h]
  __int64 v1780; // [rsp+D30h] [rbp+C30h] BYREF
  unsigned int v1781; // [rsp+D38h] [rbp+C38h]
  int v1782; // [rsp+D3Ch] [rbp+C3Ch]
  __int64 v1783; // [rsp+D40h] [rbp+C40h] BYREF
  __int64 v1784; // [rsp+D48h] [rbp+C48h]
  __int64 v1785; // [rsp+D50h] [rbp+C50h] BYREF
  __int64 v1786; // [rsp+D58h] [rbp+C58h]
  __int64 v1787; // [rsp+D60h] [rbp+C60h] BYREF
  __int64 v1788; // [rsp+D68h] [rbp+C68h]
  char v1789[12]; // [rsp+D70h] [rbp+C70h] BYREF
  unsigned int v1790; // [rsp+D7Ch] [rbp+C7Ch]
  _DWORD v1791[5]; // [rsp+D90h] [rbp+C90h] BYREF
  char v1792[8]; // [rsp+DA4h] [rbp+CA4h] BYREF
  _DWORD v1793[3]; // [rsp+DACh] [rbp+CACh] BYREF
  _DWORD v1794[5]; // [rsp+DB8h] [rbp+CB8h] BYREF
  int v1795; // [rsp+DCCh] [rbp+CCCh] BYREF
  _DWORD v1796[3]; // [rsp+DD4h] [rbp+CD4h] BYREF
  _DWORD v1797[4]; // [rsp+DE0h] [rbp+CE0h] BYREF
  __int128 v1798; // [rsp+DF0h] [rbp+CF0h]
  __int64 v1799; // [rsp+E00h] [rbp+D00h]
  int v1800; // [rsp+E08h] [rbp+D08h]
  _DWORD v1801[4]; // [rsp+E10h] [rbp+D10h] BYREF
  __int128 v1802; // [rsp+E20h] [rbp+D20h]
  __int64 v1803; // [rsp+E30h] [rbp+D30h]
  int v1804; // [rsp+E38h] [rbp+D38h]
  _DWORD v1805[4]; // [rsp+E40h] [rbp+D40h] BYREF
  __int128 v1806; // [rsp+E50h] [rbp+D50h]
  __int64 v1807; // [rsp+E60h] [rbp+D60h]
  int v1808; // [rsp+E68h] [rbp+D68h]
  _DWORD v1809[4]; // [rsp+E70h] [rbp+D70h] BYREF
  __int128 v1810; // [rsp+E80h] [rbp+D80h]
  __int64 v1811; // [rsp+E90h] [rbp+D90h]
  int v1812; // [rsp+E98h] [rbp+D98h]
  _DWORD v1813[4]; // [rsp+EA0h] [rbp+DA0h] BYREF
  __int128 v1814; // [rsp+EB0h] [rbp+DB0h]
  __int64 v1815; // [rsp+EC0h] [rbp+DC0h]
  int v1816; // [rsp+EC8h] [rbp+DC8h]
  _DWORD v1817[6]; // [rsp+ED0h] [rbp+DD0h] BYREF
  char v1818; // [rsp+EEAh] [rbp+DEAh]
  unsigned __int16 v1819[34]; // [rsp+EECh] [rbp+DECh] BYREF
  _DWORD v1820[6]; // [rsp+F30h] [rbp+E30h] BYREF
  char v1821; // [rsp+F4Ah] [rbp+E4Ah]
  unsigned __int16 v1822[34]; // [rsp+F4Ch] [rbp+E4Ch] BYREF
  _DWORD v1823[6]; // [rsp+F90h] [rbp+E90h] BYREF
  char v1824; // [rsp+FAAh] [rbp+EAAh]
  unsigned __int16 v1825[34]; // [rsp+FACh] [rbp+EACh] BYREF
  _BYTE v1826[68]; // [rsp+FF0h] [rbp+EF0h] BYREF
  __int16 v1827; // [rsp+1034h] [rbp+F34h]
  unsigned __int16 v1828; // [rsp+1096h] [rbp+F96h]
  __int64 v1829; // [rsp+109Ch] [rbp+F9Ch]
  _QWORD v1830[6]; // [rsp+10D0h] [rbp+FD0h] BYREF
  int v1831; // [rsp+1100h] [rbp+1000h] BYREF
  _DWORD v1832[14]; // [rsp+1108h] [rbp+1008h] BYREF
  _QWORD v1833[20]; // [rsp+1140h] [rbp+1040h] BYREF
  int v1834; // [rsp+11E0h] [rbp+10E0h] BYREF
  __int16 v1835; // [rsp+11E4h] [rbp+10E4h]
  _BYTE v1836[176]; // [rsp+11F0h] [rbp+10F0h] BYREF
  WCHAR Filename[264]; // [rsp+12A0h] [rbp+11A0h] BYREF

  v1604 = a1;
  v2 = 0;
  v3 = 0;
  AcquireSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
    return (unsigned int)v3;
  }
  ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  AcquireSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    goto LABEL_12;
  }
  v1517 = 0;
  v1521[1] = 4;
  v1605 = 0LL;
  v1522 = 0;
  v1524 = 0;
  v1525 = 0;
  v1457 = 0LL;
  v1526 = 0;
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v7 = dword_1800AC00C;
  v1456 = -1;
  if ( dword_1800AC00C )
    goto LABEL_59;
  v1327 = 0;
  lpModuleName = 0LL;
  v1644 = 0LL;
  v8 = (char *)MemoryAlloc(0x338uLL);
  v1261 = (const WCHAR *)v8;
  if ( !v8 )
    goto LABEL_49;
  v9 = v8 + 7;
  v1529 = 0;
  v10 = (unsigned __int8 *)&unk_18008EDC2;
  v11 = 0;
  v12 = 0;
  v13 = -1;
  v1528 = 0;
  v14 = 0;
  v15 = 103LL;
  do
  {
    v16 = *(v10 - 1) | (*(v10 - 2) << 8);
    v17 = v10[2] << 8;
    v18 = *v10;
    v10 += 8;
    v19 = *(v10 - 7) | ((v18 | (v16 << 8)) << 8);
    v20 = v19 ^ v14;
    v21 = *(v10 - 3) | ((*(v10 - 4) | ((*(v10 - 5) | v17) << 8)) << 8);
    v22 = v11 ^ v21 ^ v20 ^ 0xAC987321;
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
    v44 = (v43 >> 3) ^ (43881 * (v43 ^ 0x605E)) ^ v42;
    v1528 = v13 ^ v44;
    v13 = v21;
    v45 = v12 ^ __ROL4__(v44, 2) ^ (24670 * __ROL4__(v44 ^ 0x7F1137F, 4));
    v12 = v19;
    v1529 = v45 ^ v43;
    *(v9 - 4) = v45 ^ v43;
    v1529 = __ROR4__(v1529, 8);
    *v9 = v1528;
    v9 += 8;
    v1528 = __ROR4__(v1528, 8);
    *(v9 - 13) = v1529;
    v1529 = __ROR4__(v1529, 8);
    *(v9 - 9) = v1528;
    v1528 = __ROR4__(v1528, 8);
    *(v9 - 14) = v1529;
    v1529 = __ROR4__(v1529, 8);
    *(v9 - 10) = v1528;
    v1528 = __ROR4__(v1528, 8);
    *(v9 - 15) = v1529;
    *(v9 - 11) = v1528;
    v14 = __ROR4__(v1529, 8);
    v11 = __ROR4__(v1528, 8);
    v1529 = v14;
    v1528 = v11;
    --v15;
  }
  while ( v15 );
  v46 = (WCHAR *)v1261;
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  do
    v48 ^= *((_BYTE *)v1261 + v47++);
  while ( v47 < 0x338 );
  if ( v48 == 64LL )
  {
    lpModuleName = v1261;
    v51 = 0;
    v46 = 0LL;
    v1644 = 824LL;
  }
  else
  {
    v51 = -1073425151;
  }
  if ( v46 )
    MemoryFree(v46);
  if ( v51 < 0 )
    goto LABEL_49;
  i = lpModuleName;
  HIBYTE(lpModuleName[v1644 / 2 - 1]) = 0;
  memset_0(&unk_1800AC220, 0, 0x60uLL);
  if ( *(_BYTE *)i )
  {
    while ( 1 )
    {
      v53 = i;
      v54 = -1LL;
      do
        ++v54;
      while ( i[v54] );
      v55 = &i[v54];
      v56 = (char *)&unk_1800AC220 + 24 * v50;
      if ( !GetModuleHandleExW(0, v53, (HMODULE *)v56) )
        break;
      v49 = 0;
      if ( **(_WORD **)v56 == 23117
        && (v57 = *(int *)(*(_QWORD *)v56 + 60LL), (unsigned int)v57 < 0x10000000)
        && (v58 = *(_QWORD *)v56 + v57, v58 >= *(_QWORD *)v56)
        && *(_DWORD *)v58 == 17744 )
      {
        if ( ((*(_WORD *)(v58 + 24) - 267) & 0xFEFF) != 0 )
        {
          v49 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v56 + 12) = *(_QWORD *)(v58 + 136);
          *((_DWORD *)v56 + 2) = *(_DWORD *)(v58 + 80);
        }
      }
      else
      {
        v49 = -1073741701;
      }
      v59 = *(_DWORD *)(v55 + 1);
      v60 = 0;
      for ( i = v55 + 3; v60 < v59; ++v60 )
      {
        v61 = (const CHAR *)i;
        v62 = -1LL;
        do
          ++v62;
        while ( *((_BYTE *)i + v62) );
        i = (LPCWSTR)((char *)i + v62 + 1);
        if ( v49 >= 0 )
        {
          ProcAddress = GetProcAddress(*(HMODULE *)v56, v61);
          if ( !ProcAddress )
            goto LABEL_50;
          off_1800AB000[v1327] = ProcAddress;
        }
        ++v1327;
      }
      ++v50;
      if ( !*(_BYTE *)i )
        goto LABEL_50;
    }
LABEL_49:
    v49 = -1073741702;
  }
LABEL_50:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v49 < 0 )
  {
    v65 = 4LL;
    v66 = (HMODULE *)&unk_1800AC220;
    do
    {
      if ( *v66 )
        FreeLibrary(*v66);
      v66 += 3;
      --v65;
    }
    while ( v65 );
    memset_0(&unk_1800AC220, 0, 0x60uLL);
    memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
    goto LABEL_60;
  }
  v7 = dword_1800AC00C;
LABEL_59:
  dword_1800AC00C = v7 + 1;
LABEL_60:
  v67 = 0;
  _InterlockedExchange(&dword_1800AC294, 0);
  v68 = 0;
  String1 = 0LL;
  v1650 = 0LL;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_108;
  v69 = off_1800AB110[0]();
  if ( !v69 )
    goto LABEL_70;
  v1651 = 0LL;
  v70 = 0LL;
  for ( j = 0LL; ; v1651 = j )
  {
    v72 = 0LL;
    if ( j )
      v72 = j;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800AB130[0])(
           v69,
           2LL,
           v72,
           v70,
           &v1548) )
    {
      String1 = j;
      goto LABEL_81;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( j )
      goto LABEL_75;
    j = (wchar_t *)MemoryAlloc(v1548);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1651);
    if ( !j )
    {
      v68 = -2147024882;
LABEL_81:
      v1651 = 0LL;
      goto LABEL_82;
    }
    v70 = v1548;
  }
  if ( !LastError )
  {
LABEL_75:
    v68 = -2147467259;
    goto LABEL_82;
  }
  if ( LastError > 0 )
    v68 = (unsigned __int16)LastError | 0x80070000;
  else
    v68 = LastError;
LABEL_82:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1651);
  if ( v68 < 0 )
    goto LABEL_109;
  CurrentThreadId = GetCurrentThreadId();
  v76 = ((__int64 (__fastcall *)(_QWORD))off_1800AB128[0])(CurrentThreadId);
  if ( !v76 )
  {
LABEL_70:
    v74 = GetLastError();
    v68 = v74;
    if ( v74 > 0 )
      v68 = (unsigned __int16)v74 | 0x80070000;
    if ( v68 >= 0 )
      v68 = -2147467259;
    goto LABEL_109;
  }
  v1652 = 0LL;
  v68 = 0;
  v77 = 0LL;
  for ( k = 0LL; ; v1652 = k )
  {
    v79 = 0LL;
    if ( k )
      v79 = k;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800AB130[0])(
           v76,
           2LL,
           v79,
           v77,
           &v1571) )
    {
      v1650 = k;
      goto LABEL_99;
    }
    v80 = GetLastError();
    if ( v80 != 122 )
      break;
    if ( k )
      goto LABEL_93;
    k = (wchar_t *)MemoryAlloc(v1571);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1652);
    if ( !k )
    {
      v68 = -2147024882;
LABEL_99:
      v1652 = 0LL;
      goto LABEL_100;
    }
    v77 = v1571;
  }
  if ( !v80 )
  {
LABEL_93:
    v68 = -2147467259;
    goto LABEL_100;
  }
  if ( v80 > 0 )
    v68 = (unsigned __int16)v80 | 0x80070000;
  else
    v68 = v80;
LABEL_100:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1652);
  if ( v68 >= 0 )
  {
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1650 && !wcscmp_0(v1650, L"Default") )
    {
      v1455 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1455, 4LL) )
      {
        if ( (v1455 & 0xF) == 0 )
          v67 = 1;
        goto LABEL_108;
      }
      goto LABEL_70;
    }
LABEL_108:
    v1526 = v67;
  }
LABEL_109:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1650);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
  v82 = v1526;
  if ( v68 < 0 )
    v82 = 0;
  v1526 = v82;
  v1525 = 0;
  v83 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1457, v83);
  v1419 = v1457;
  if ( !v1457 )
  {
    v84 = -2147024882;
LABEL_1684:
    v1255 = v1455;
    goto LABEL_1685;
  }
  v1700 = 0LL;
  v1701 = 0LL;
  v1702 = 0LL;
  v85 = 0LL;
  v1572 = 0;
  Src = &unk_1800AB660;
  v86 = 0LL;
  v1573 = 0;
  Size = 160LL;
  v87 = GetProcessHeap();
  v88 = HeapAlloc(v87, 8u, 0xA0uLL);
  v1302 = 3LL;
  v1262 = v88;
  v89 = (unsigned __int16 *)v88;
  if ( !v88 )
  {
    v84 = -1073741801;
    v1398 = -1073741801;
    goto LABEL_696;
  }
  memcpy_0(v88, Src, Size);
  v90 = (unsigned int)Size;
  v85 = v89;
  v1354 = v89;
  v1584 = 8LL;
  v1656 = &unk_1800AB5A0;
  v91 = GetProcessHeap();
  v92 = (unsigned __int16 *)HeapAlloc(v91, 8u, 8uLL);
  v1364 = v92;
  v93 = v92;
  if ( !v92 )
  {
    v84 = -1073741801;
    v86 = 0LL;
    v1398 = -1073741801;
    goto LABEL_696;
  }
  memcpy_0(v92, v1656, v1584);
  v94 = v1584;
  v1379 = v93;
  v1585 = __rdtsc();
  dwBytes = 0;
  v95 = RtlUIntAdd(4LL, 4LL, &v1508);
  v96 = dwBytes_4;
  v84 = v95;
  v1398 = v95;
  if ( v95 >= 0 )
    v96 = v1508;
  dwBytes_4 = v96;
  if ( v95 < 0 )
    goto LABEL_695;
  v97 = RtlUIntAdd(0LL, v96, &dwBytes);
  v84 = v97 | 0x10000000;
  v1398 = v97 | 0x10000000;
  if ( v97 < 0 )
    goto LABEL_695;
  v99 = RtlUIntAdd(v98, (unsigned int)v90, &v1577);
  v1398 = v99;
  v84 = v99;
  if ( v99 >= 0 )
    v96 = v1577;
  dwBytes_4 = v96;
  if ( v99 < 0 )
    goto LABEL_695;
  v100 = RtlUIntAdd(dwBytes, v96, &dwBytes);
  v84 = v102 | v100;
  v1398 = v102 | v100;
  if ( (v102 | v100) < 0 )
    goto LABEL_695;
  v103 = RtlUIntAdd(v101, v94, &v1578);
  v1398 = v103;
  v84 = v103;
  if ( v103 >= 0 )
    v96 = v1578;
  dwBytes_4 = v96;
  if ( v103 < 0 )
    goto LABEL_695;
  v104 = RtlUIntAdd(dwBytes, v96, &dwBytes);
  v84 = v106 | v104;
  v1398 = v106 | v104;
  if ( (v106 | v104) < 0 )
    goto LABEL_695;
  v107 = RtlUIntAdd(v105, v105 + 4, &v1579);
  v1398 = v107;
  v84 = v107;
  if ( v107 >= 0 )
    v96 = v1579;
  dwBytes_4 = v96;
  if ( v107 < 0 )
    goto LABEL_695;
  v108 = RtlUIntAdd(dwBytes, v96, &dwBytes);
  v84 = v111 | v108;
  v1398 = v111 | v108;
  if ( (v111 | v108) < 0 )
    goto LABEL_695;
  if ( StringCchLengthW(v110, v109, &pcchLength) < 0 )
  {
LABEL_148:
    v84 = -1073741762;
    goto LABEL_694;
  }
  v113 = RtlUIntAdd(v112, (unsigned int)(2 * ++pcchLength), &v1580);
  v1398 = v113;
  v84 = v113;
  if ( v113 >= 0 )
    v96 = v1580;
  dwBytes_4 = v96;
  if ( v113 < 0 )
    goto LABEL_695;
  v114 = RtlUIntAdd(dwBytes, v96, &dwBytes);
  v84 = v116 | v114;
  v1398 = v116 | v114;
  if ( (v116 | v114) < 0 )
    goto LABEL_695;
  v117 = RtlUIntAdd(v115, v115, &v1581);
  v1398 = v117;
  v84 = v117;
  if ( v117 >= 0 )
    v96 = v1581;
  dwBytes_4 = v96;
  if ( v117 < 0 )
    goto LABEL_695;
  v118 = RtlUIntAdd(dwBytes, v96, &dwBytes);
  v84 = v120 | v118;
  v1398 = v120 | v118;
  if ( (v120 | v118) < 0 )
    goto LABEL_695;
  v121 = RtlUIntAdd(v119, v119, &v1582);
  v1398 = v121;
  v84 = v121;
  if ( v121 >= 0 )
    v96 = v1582;
  dwBytes_4 = v96;
  if ( v121 < 0 )
    goto LABEL_695;
  v122 = RtlUIntAdd(dwBytes, v96, &dwBytes);
  v84 = v123 | v122;
  v1398 = v123 | v122;
  if ( (v123 | v122) < 0 )
    goto LABEL_695;
  HIDWORD(v1699) = dwBytes;
  v124 = dwBytes;
  v125 = GetProcessHeap();
  v126 = HeapAlloc(v125, 8u, v124);
  v127 = v126;
  if ( !v126 )
  {
    v84 = -1073741801;
    goto LABEL_694;
  }
  v1700 = v126;
  LODWORD(v1699) = 0;
  v1460 = 0;
  v84 = RtlULongLongAdd(v126, 4LL, &v1693);
  v1398 = v84;
  v129 = 0;
  if ( v84 >= 0 )
  {
    if ( v127 + 2 > (_DWORD *)((char *)v127 + HIDWORD(v1699)) )
      goto LABEL_152;
    v130 = v1693;
    *v127 = v128;
    *v130 = v1460;
    v129 = v128 - 3 + v1699;
    LODWORD(v1699) = v129;
  }
  if ( v84 < 0 )
    goto LABEL_695;
  if ( (_DWORD)v90 )
  {
    if ( v1700 )
    {
      v134 = v1700;
      v1587 = v1700;
      if ( v129 )
      {
        while ( 1 )
        {
          v135 = RtlUIntAdd((unsigned int)v128, (unsigned int)*v134, &v1463);
          v1398 = v135;
          v84 = v135;
          if ( v135 >= 0 )
            v136 = v1463;
          v1462 = v136;
          if ( v135 < 0 )
            break;
          v1398 = RtlULongLongAdd(v134, v136, &v1587);
          v84 = v1398;
          if ( v1398 < 0 )
            break;
          v134 = v1587;
          if ( v137 + 1 >= (unsigned int)v1699 )
            goto LABEL_167;
        }
      }
      else
      {
LABEL_167:
        v1398 = RtlULongLongAdd(v134, v128, &v1705);
        v84 = v1398;
        if ( v1398 >= 0 )
        {
          if ( (char *)v134 + v90 + 4 > (char *)v1700 + HIDWORD(v1699) )
            goto LABEL_152;
          v138 = v1705;
          *v134 = v90;
          memcpy_0(v138, v1262, v90);
          LODWORD(v1699) = v1699 + 1;
          v128 = 4LL;
        }
      }
    }
    else
    {
      v131 = RtlUIntAdd((unsigned int)v128, (unsigned int)v90, &v1461);
      v132 = v1462;
      v84 = v131;
      v1398 = v131;
      if ( v131 >= 0 )
        v132 = v1461;
      v1462 = v132;
      if ( v131 >= 0 )
      {
        v1398 = RtlUIntAdd(HIDWORD(v1699), v132, (char *)&v1699 + 4);
        v84 = v1398;
        if ( v1398 >= 0 )
        {
          LODWORD(v1699) = v133 + v1699;
          goto LABEL_172;
        }
      }
    }
  }
  else
  {
    v84 = -1073741811;
    v1398 = -1073741811;
  }
  if ( v84 < 0 )
    goto LABEL_695;
LABEL_172:
  if ( v94 )
  {
    if ( v1700 )
    {
      v142 = v1700;
      v1588 = v1700;
      if ( (_DWORD)v1699 )
      {
        while ( 1 )
        {
          v143 = RtlUIntAdd((unsigned int)v128, (unsigned int)*v142, &v1466);
          v1398 = v143;
          v84 = v143;
          if ( v143 >= 0 )
            v144 = v1466;
          v1465 = v144;
          if ( v143 < 0 )
            break;
          v1398 = RtlULongLongAdd(v142, v144, &v1588);
          v84 = v1398;
          if ( v1398 < 0 )
            break;
          v142 = v1588;
          if ( v145 + 1 >= (unsigned int)v1699 )
            goto LABEL_185;
        }
      }
      else
      {
LABEL_185:
        v1398 = RtlULongLongAdd(v142, v128, &v1706);
        v84 = v1398;
        if ( v1398 >= 0 )
        {
          if ( (char *)v142 + v94 + 4 > (char *)v1700 + HIDWORD(v1699) )
            goto LABEL_152;
          v146 = v1706;
          *v142 = v94;
          memcpy_0(v146, v1364, v94);
          LODWORD(v1699) = v1699 + 1;
        }
      }
    }
    else
    {
      v139 = RtlUIntAdd((unsigned int)v128, v94, &v1464);
      v140 = v1465;
      v84 = v139;
      v1398 = v139;
      if ( v139 >= 0 )
        v140 = v1464;
      v1465 = v140;
      if ( v139 >= 0 )
      {
        v1398 = RtlUIntAdd(HIDWORD(v1699), v140, (char *)&v1699 + 4);
        v84 = v1398;
        if ( v1398 >= 0 )
        {
          LODWORD(v1699) = v1699 + 1;
          goto LABEL_191;
        }
      }
    }
  }
  else
  {
    v84 = -1073741811;
    v1398 = -1073741811;
  }
  if ( v84 < 0 )
    goto LABEL_695;
  v141 = 4LL;
LABEL_191:
  v1589 = v1585;
  if ( v1700 )
  {
    v150 = v1700;
    v1590 = v1700;
    if ( (_DWORD)v1699 )
    {
      while ( 1 )
      {
        v151 = RtlUIntAdd((unsigned int)v141, (unsigned int)*v150, &v1469);
        v1398 = v151;
        v84 = v151;
        if ( v151 >= 0 )
          v152 = v1469;
        v1468 = v152;
        if ( v151 < 0 )
          break;
        v1398 = RtlULongLongAdd(v150, v152, &v1590);
        v84 = v1398;
        if ( v1398 < 0 )
          break;
        v150 = v1590;
        if ( v153 + 1 >= (unsigned int)v1699 )
          goto LABEL_203;
      }
    }
    else
    {
LABEL_203:
      v1398 = RtlULongLongAdd(v150, v141, &v1707);
      v84 = v1398;
      if ( v1398 >= 0 )
      {
        v148 = (const wchar_t *)((char *)v1700 + HIDWORD(v1699));
        if ( v150 + 3 > (_DWORD *)v148 )
          goto LABEL_152;
        v154 = v1707;
        *v150 = 8;
        *v154 = v1589;
        LODWORD(v1699) = v1699 + 1;
      }
    }
  }
  else
  {
    v147 = RtlUIntAdd((unsigned int)v141, 8LL, &v1467);
    v149 = v1468;
    v84 = v147;
    v1398 = v147;
    if ( v147 >= 0 )
      v149 = v1467;
    v1468 = v149;
    if ( v147 >= 0 )
    {
      v1398 = RtlUIntAdd(HIDWORD(v1699), v149, (char *)&v1699 + 4);
      v84 = v1398;
      if ( v1398 >= 0 )
      {
        LODWORD(v1699) = v1699 + 1;
        goto LABEL_207;
      }
    }
  }
  if ( v84 < 0 )
    goto LABEL_695;
LABEL_207:
  if ( StringCchLengthW(v148, v149, &v1591) < 0 )
    goto LABEL_148;
  v1398 = RtlULongLongAdd(v1591, 1LL, &v1591);
  v84 = v1398;
  if ( v1398 >= 0 )
  {
    if ( 2 * (_DWORD)v1591 )
    {
      if ( v1700 )
      {
        v158 = v1700;
        v1592 = v1700;
        if ( (_DWORD)v1699 )
        {
          while ( 1 )
          {
            v159 = RtlUIntAdd(4LL, (unsigned int)*v158, &v1472);
            v1398 = v159;
            v84 = v159;
            if ( v159 >= 0 )
              v161 = v1472;
            v1471 = v161;
            if ( v159 < 0 )
              break;
            v1398 = RtlULongLongAdd(v158, v161, &v1592);
            v84 = v1398;
            if ( v1398 < 0 )
              goto LABEL_226;
            v158 = v1592;
            if ( v162 + 1 >= (unsigned int)v1699 )
              goto LABEL_222;
          }
          v155 = v160;
        }
        else
        {
LABEL_222:
          v1398 = RtlULongLongAdd(v158, 4LL, &v1708);
          v84 = v1398;
          if ( v1398 >= 0 )
          {
            if ( (char *)v158 + v163 + 4 <= (char *)v1700 + HIDWORD(v1699) )
            {
              v164 = v1708;
              *v158 = v163;
              memcpy_0(v164, L"DataProtectionUnderLock-WindowsCore-Enabled", (unsigned int)v163);
              LODWORD(v1699) = v1699 + 1;
LABEL_226:
              v155 = 4LL;
            }
            else
            {
              v84 = -1073741789;
              v1398 = -1073741789;
            }
          }
        }
      }
      else
      {
        v156 = RtlUIntAdd((unsigned int)v155, (unsigned int)(2 * v1591), &v1470);
        v157 = v1471;
        v84 = v156;
        v1398 = v156;
        if ( v156 >= 0 )
          v157 = v1470;
        v1471 = v157;
        if ( v156 >= 0 )
        {
          v1398 = RtlUIntAdd(HIDWORD(v1699), v157, (char *)&v1699 + 4);
          v84 = v1398;
          if ( v1398 >= 0 )
          {
            LODWORD(v1699) = v1699 + 1;
            v84 = 0;
            v1398 = 0;
          }
        }
      }
    }
    else
    {
      v84 = -1073741811;
      v1398 = -1073741811;
    }
  }
  if ( v84 < 0 )
    goto LABEL_695;
  v1473 = v1526;
  if ( v1700 )
  {
    v167 = v1700;
    v1593 = v1700;
    if ( (_DWORD)v1699 )
    {
      while ( 1 )
      {
        v168 = RtlUIntAdd((unsigned int)v155, (unsigned int)*v167, &v1476);
        v1398 = v168;
        v84 = v168;
        if ( v168 >= 0 )
          v169 = v1476;
        v1475 = v169;
        if ( v168 < 0 )
          break;
        v1398 = RtlULongLongAdd(v167, v169, &v1593);
        v84 = v1398;
        if ( v1398 < 0 )
          break;
        v167 = v1593;
        if ( v170 + 1 >= (unsigned int)v1699 )
          goto LABEL_242;
      }
    }
    else
    {
LABEL_242:
      v1398 = RtlULongLongAdd(v167, v155, &v1709);
      v84 = v1398;
      if ( v1398 >= 0 )
      {
        if ( v167 + 2 > (_DWORD *)((char *)v1700 + HIDWORD(v1699)) )
          goto LABEL_252;
        v171 = v1709;
        *v167 = v155;
        *v171 = v1473;
        LODWORD(v1699) = v1699 + 1;
      }
    }
  }
  else
  {
    v165 = RtlUIntAdd((unsigned int)v155, (unsigned int)v155, &v1474);
    v166 = v1475;
    v84 = v165;
    v1398 = v165;
    if ( v165 >= 0 )
      v166 = v1474;
    v1475 = v166;
    if ( v165 >= 0 )
    {
      v1398 = RtlUIntAdd(HIDWORD(v1699), v166, (char *)&v1699 + 4);
      v84 = v1398;
      if ( v1398 >= 0 )
      {
        LODWORD(v1699) = v1699 + 1;
        goto LABEL_246;
      }
    }
  }
  if ( v84 < 0 )
    goto LABEL_695;
LABEL_246:
  v1477 = v155;
  if ( !v1700 )
  {
    v172 = RtlUIntAdd((unsigned int)v155, (unsigned int)v155, &v1478);
    v173 = v1479;
    v84 = v172;
    v1398 = v172;
    if ( v172 >= 0 )
      v173 = v1478;
    v1479 = v173;
    if ( v172 >= 0 )
    {
      v1398 = RtlUIntAdd(HIDWORD(v1699), v173, (char *)&v1699 + 4);
      v84 = v1398;
      if ( v1398 >= 0 )
      {
        LODWORD(v1699) = v1699 + 1;
        goto LABEL_263;
      }
    }
    goto LABEL_262;
  }
  v174 = v1700;
  v1594 = v1700;
  if ( (_DWORD)v1699 )
  {
    do
    {
      v175 = RtlUIntAdd((unsigned int)v155, (unsigned int)*v174, &v1480);
      v1398 = v175;
      v84 = v175;
      if ( v175 >= 0 )
        v176 = v1480;
      v1479 = v176;
      if ( v175 < 0 )
        goto LABEL_262;
      v1398 = RtlULongLongAdd(v174, v176, &v1594);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_262;
      v174 = v1594;
    }
    while ( v177 + 1 < (unsigned int)v1699 );
  }
  v1398 = RtlULongLongAdd(v174, v155, &v1710);
  v84 = v1398;
  if ( v1398 >= 0 )
  {
    if ( v174 + 2 <= (_DWORD *)((char *)v1700 + HIDWORD(v1699)) )
    {
      v178 = v1710;
      *v174 = v155;
      *v178 = v1477;
      LODWORD(v1699) = v1699 + 1;
      goto LABEL_262;
    }
LABEL_252:
    v84 = -1073741789;
    v1398 = -1073741789;
    goto LABEL_695;
  }
LABEL_262:
  if ( v84 < 0 )
    goto LABEL_695;
LABEL_263:
  v179 = RtlUIntAdd((unsigned int)v155, (unsigned int)v155, &v1481);
  v181 = v1482;
  v84 = v179;
  v1398 = v179;
  if ( v179 >= 0 )
    v181 = v1481;
  v1482 = v181;
  if ( v179 < 0 )
    goto LABEL_288;
  v1483 = v181;
  v182 = RtlUIntAdd(v180, 8LL, &v1484);
  v1398 = v182;
  v184 = v183;
  v84 = v182;
  if ( v182 >= 0 )
    v184 = v1484;
  v1482 = v184;
  if ( v182 < 0 )
    goto LABEL_288;
  v1398 = RtlUIntAdd(v183, v184, &v1483);
  v84 = v1398;
  if ( v1398 < 0 )
    goto LABEL_288;
  v186 = RtlUIntAdd(v185, v185, &v1485);
  v1398 = v186;
  v84 = v186;
  if ( v186 >= 0 )
    v184 = v1485;
  v1482 = v184;
  if ( v186 < 0 )
    goto LABEL_288;
  v1398 = RtlUIntAdd(v1483, v184, &v1483);
  v84 = v1398;
  if ( v1398 < 0 )
    goto LABEL_288;
  v188 = RtlUIntAdd(v187, v187, &v1486);
  v1398 = v188;
  v84 = v188;
  if ( v188 >= 0 )
    v184 = v1486;
  v1482 = v184;
  if ( v188 < 0 )
    goto LABEL_288;
  v1398 = RtlUIntAdd(v1483, v184, &v1483);
  v84 = v1398;
  if ( v1398 < 0 )
    goto LABEL_288;
  v190 = RtlUIntAdd(v189, v189, &v1487);
  v1398 = v190;
  v84 = v190;
  if ( v190 >= 0 )
    v184 = v1487;
  v1482 = v184;
  if ( v190 < 0 )
    goto LABEL_288;
  v1398 = RtlUIntAdd(v1483, v184, &v1483);
  v84 = v1398;
  if ( v1398 < 0 )
    goto LABEL_288;
  v192 = RtlUIntAdd(v191, v191, &v1454);
  v1398 = v192;
  v84 = v192;
  if ( v192 >= 0 )
    v184 = v1454;
  v1482 = v184;
  if ( v192 < 0 )
  {
LABEL_288:
    v193 = v1454;
  }
  else
  {
    v84 = RtlUIntAdd(v1483, v184, &v1483);
    v1398 = v84;
    v193 = v1454;
    if ( v84 >= 0 )
      v193 = v1483;
  }
  v1333 = v193;
  if ( v84 < 0 )
    goto LABEL_695;
  v194 = 0LL;
  v1263 = 0LL;
  v195 = 0LL;
  v1595 = 0LL;
  v1365 = 0LL;
  v1289 = 0;
  v1409 = 0LL;
  v1488 = 0LL;
  v1446 = 0LL;
  v1430 = 0LL;
  v1596 = __rdtsc();
  v1489 = 8;
  v196 = RtlUIntAdd(8LL, HIDWORD(v1699), &v1489);
  if ( v196 >= 0 )
  {
    v197 = (v1489 + 7) & 0xFFFFFFF8;
    if ( v197 >= v1489 )
    {
      v1489 = (v1489 + 7) & 0xFFFFFFF8;
      v198 = v197;
      v199 = GetProcessHeap();
      v200 = HeapAlloc(v199, 8u, v198);
      if ( v200 )
      {
        v1597 = v200;
        *v200 = v1699;
        v196 = RtlULongLongAdd(v200, 4LL, &v1597);
        if ( v196 >= 0 )
        {
          v202 = v1597;
          *(_DWORD *)v1597 = HIDWORD(v1699);
          v196 = RtlULongLongAdd(v202, v201, &v1597);
          if ( v196 >= 0 )
          {
            *(_QWORD *)((char *)v200 + v1489 - 8) = v1596;
            memcpy_0(v1597, v1700, HIDWORD(v1699));
            v195 = v1489;
            v1263 = (unsigned __int8 *)v200;
            v200 = 0LL;
          }
        }
        if ( v200 )
        {
          v203 = GetProcessHeap();
          HeapFree(v203, 0, v200);
        }
        v194 = v1263;
      }
      else
      {
        v196 = -1073741801;
        v194 = 0LL;
      }
    }
    else
    {
      v196 = -1073741675;
    }
  }
  v84 = v196 | 0x10000000;
  v1398 = v84;
  if ( v84 < 0 )
    goto LABEL_574;
  v1598 = 0LL;
  v204 = 0LL;
  v1599 = 0LL;
  v1600 = 0LL;
  v1601 = 0LL;
  lpMem = 0LL;
  v1603 = 0LL;
  if ( v194 )
  {
    if ( v195 && (v1388 = v195 + 8, (v1401 = MemoryAlloc(v195 + 8)) != 0LL) )
    {
      v206 = 0;
      for ( m = 0LL; m < v195; ++m )
        v206 ^= v194[m];
      v1259 = v206;
      v208 = v194;
      v1774 = 0xC81ECB17B1B54A58uLL;
      v209 = -1;
      v1399 = 0;
      v1491 = -1;
      v1328 = 0;
      v210 = v1401;
      v211 = 0;
      v1490 = 0;
      v212 = v195 & 7;
      if ( (v195 & 7) != 0 )
      {
        v1328 = 0;
        v213 = 0;
        v214 = 0;
        v215 = 56;
        do
        {
          v216 = *v208++;
          if ( v214 >= 4 )
          {
            v217 = v1328;
            v213 |= v216 << v215;
          }
          else
          {
            v217 = (v216 << (v215 - 32)) | v1328;
            v1328 = v217;
          }
          ++v214;
          v215 -= 8;
        }
        while ( v214 < (int)v212 );
        v1399 = v213;
        v211 = v217 ^ 0xB17A307A;
        v218 = v213 ^ 0x42F6B18D;
        v1490 = v217 ^ 0xB17A307A;
        v219 = 0;
        v1491 = v213 ^ 0x42F6B18D;
        if ( (v195 & 7) != 0 )
        {
          do
          {
            if ( v219 >= 4 )
            {
              v218 = __ROL4__(v218, 8);
              v220 = v218;
            }
            else
            {
              v211 = __ROL4__(v211, 8);
              v220 = v211;
            }
            ++v219;
            *v210++ = v220;
          }
          while ( v219 < (int)v212 );
          v211 = v1490;
          v218 = v1491;
        }
        if ( v212 <= 4 )
        {
          v209 = 0;
          v1491 = 0;
          if ( v212 < 4 )
          {
            v211 = v211 >> (8 * (4 - v212)) << (8 * (4 - v212));
            v1490 = v211;
          }
        }
        else
        {
          v209 = v218 >> (8 * (8 - v212)) << (8 * (8 - v212));
          v1491 = v209;
        }
      }
      v221 = v195 >> 3;
      if ( v195 >> 3 )
      {
        v222 = v208 + 2;
        v223 = v1399;
        v224 = v1328;
        v1280 = HIWORD(v1774);
        v1295 = WORD1(v1774);
        v225 = v210 + 7;
        v226 = HIDWORD(v1774);
        v227 = WORD2(v1774);
        do
        {
          v228 = v222[1] | ((*v222 | ((*(v222 - 1) | (*(v222 - 2) << 8)) << 8)) << 8);
          v229 = v222[5] | ((v222[4] | ((v222[3] | (v222[2] << 8)) << 8)) << 8);
          v1316 = v222 + 8;
          v230 = v229 ^ v209;
          v231 = v226 ^ v211 ^ v228 ^ (v230 - 19032);
          v232 = (__ROR4__(v231, 7) + WORD1(v1774) * __ROR4__(v211 ^ v228 ^ (v230 - 19032), 15)) ^ v230;
          v233 = (v227 * __ROR4__(v232 - 1313519016, 9) - __ROR4__(v232, 10)) ^ v231;
          v234 = (__ROL4__(v233, 5) + HIWORD(v1774) * __ROL4__(v227 ^ v233, 4)) ^ v232;
          v235 = (v226 - (v234 ^ 0xB1B54A58)) ^ v233;
          v236 = (WORD1(v1774) * (v235 - 19032) - (v235 >> 6)) ^ v234;
          v237 = (19032 * (v227 ^ __ROR4__(v236, 15))) ^ v235;
          v238 = (v227 * (HIWORD(v1774) + __ROR4__(~v237, 3))) ^ v236;
          v239 = (v238 - v226 - 19032) ^ v237;
          v240 = (v1295 * (v1280 ^ v239)) ^ __ROR4__(v239, 10) ^ v238;
          v241 = __ROR4__(v240, 3) ^ (v227 * __ROL4__(v240 ^ 0x4A58, 6)) ^ v239;
          v242 = (19032 * (__ROR4__(v241, 15) - HIWORD(v1774))) ^ v240;
          v243 = (v242 >> 15) ^ (19032 * __ROL4__(v242 - v227, 3)) ^ (v242 >> 1) ^ (19032 * (HIWORD(v1774) ^ v242)) ^ v241;
          v244 = (WORD1(v1774) * (v243 - v227) - (v243 >> 13)) ^ v242;
          v245 = __ROR4__(v244, 11) ^ (v227 * __ROR4__(-1313519016 - v244, 9)) ^ v243;
          v246 = (v245 + 1313519016 - HIWORD(v1774)) ^ v244;
          v247 = (19032 * (v1295 ^ v246) - __ROR4__(v246, 7)) ^ v245;
          v248 = (WORD1(v1774) * __ROL4__(HIWORD(v1774) ^ v247, 4) - __ROR4__(v247, 16)) ^ v246;
          v249 = (__ROR4__(v248, 4) + v227 * __ROR4__(-1313519016 - v248, 10)) ^ v247;
          v250 = __ROR4__(v249, 9) ^ (HIWORD(v1774) * __ROR4__(v249 + 1313519016, 4)) ^ v248;
          v251 = (19032 * __ROL4__(v226 ^ v250, 8) - __ROL4__(v250, 2)) ^ v249;
          v252 = (WORD1(v1774) * __ROR4__(v226 - v251, 11) - __ROR4__(v251, 12)) ^ v250;
          v253 = (v252 >> 8) ^ (v227 * (WORD1(v1774) ^ v252)) ^ v251;
          v1490 = v224 ^ v253;
          v1491 = v223 ^ v253 ^ v252 ^ v226 ^ 0xB1B54A58;
          v224 = v228;
          *(v225 - 4) = v1490;
          v223 = v229;
          v1490 = __ROR4__(v1490, 8);
          v222 = v1316;
          *v225 = v1491;
          v1491 = __ROR4__(v1491, 8);
          *(v225 - 5) = v1490;
          v1490 = __ROR4__(v1490, 8);
          *(v225 - 1) = v1491;
          v1491 = __ROR4__(v1491, 8);
          *(v225 - 6) = v1490;
          v1490 = __ROR4__(v1490, 8);
          *(v225 - 2) = v1491;
          v1491 = __ROR4__(v1491, 8);
          *(v225 - 7) = v1490;
          *(v225 - 3) = v1491;
          v225 += 8;
          v211 = __ROR4__(v1490, 8);
          v209 = __ROR4__(v1491, 8);
          v1490 = v211;
          v1491 = v209;
          --v221;
        }
        while ( v221 );
        v206 = v1259;
        v2 = 0;
        v204 = 0LL;
      }
      *(_QWORD *)&v1401[v195] = v206;
      v1603 = v195 + 8;
      lpMem = v1401;
      v1598 = &qword_1800AB650;
      v1599 = 8LL;
      v1601 = 160LL;
      v1600 = &xmmword_1800AB5B0;
      v254 = GetProcessHeap();
      v255 = HeapAlloc(v254, 8u, 0x30uLL);
      v256 = v255;
      if ( v255 )
      {
        *v255 = v1388;
        v257 = GetProcessHeap();
        v258 = HeapAlloc(v257, 8u, v1388);
        if ( !v258 )
          goto LABEL_334;
        *((_QWORD *)v256 + 1) = v258;
        memcpy_0(v258, v1401, v1388);
        v256[4] = 160;
        v259 = GetProcessHeap();
        v260 = HeapAlloc(v259, 8u, 0xA0uLL);
        if ( !v260 )
          goto LABEL_334;
        *((_QWORD *)v256 + 3) = v260;
        *v260 = xmmword_1800AB5B0;
        v260[1] = *((_OWORD *)&xmmword_1800AB5B0 + 1);
        v260[2] = *((_OWORD *)&xmmword_1800AB5B0 + 2);
        v260[3] = *((_OWORD *)&xmmword_1800AB5B0 + 3);
        v260[4] = *((_OWORD *)&xmmword_1800AB5B0 + 4);
        v260[5] = *((_OWORD *)&xmmword_1800AB5B0 + 5);
        v260[6] = *((_OWORD *)&xmmword_1800AB5B0 + 6);
        v260[7] = *((_OWORD *)&xmmword_1800AB5B0 + 7);
        v260[8] = *((_OWORD *)&xmmword_1800AB5B0 + 8);
        v260[9] = *((_OWORD *)&xmmword_1800AB5B0 + 9);
        v256[8] = 8;
        v261 = GetProcessHeap();
        v262 = HeapAlloc(v261, 8u, 8uLL);
        if ( v262 )
        {
          *((_QWORD *)v256 + 5) = v262;
          v204 = v256;
          *v262 = qword_1800AB650;
          v205 = 0;
          v256 = 0LL;
        }
        else
        {
LABEL_334:
          v205 = -1073741801;
        }
        if ( v256 )
        {
          v263 = (void *)*((_QWORD *)v256 + 1);
          if ( v263 )
          {
            v264 = GetProcessHeap();
            HeapFree(v264, 0, v263);
            *((_QWORD *)v256 + 1) = 0LL;
          }
          v265 = (void *)*((_QWORD *)v256 + 3);
          if ( v265 )
          {
            v266 = GetProcessHeap();
            HeapFree(v266, 0, v265);
            *((_QWORD *)v256 + 3) = 0LL;
          }
          v267 = (void *)*((_QWORD *)v256 + 5);
          if ( v267 )
          {
            v268 = GetProcessHeap();
            HeapFree(v268, 0, v267);
            *((_QWORD *)v256 + 5) = 0LL;
          }
          v269 = GetProcessHeap();
          HeapFree(v269, 0, v256);
        }
      }
      else
      {
        v205 = -1073741801;
      }
      if ( v205 >= 0 )
      {
        v1595 = v204;
        v204 = 0LL;
      }
    }
    else
    {
      v205 = -1073741823;
    }
    v270 = lpMem;
    if ( lpMem )
    {
      v271 = GetProcessHeap();
      HeapFree(v271, 0, v270);
      lpMem = 0LL;
    }
    if ( v204 )
    {
      v272 = (void *)v204[1];
      if ( v272 )
      {
        v273 = GetProcessHeap();
        HeapFree(v273, 0, v272);
        v204[1] = 0LL;
      }
      v274 = (void *)v204[3];
      if ( v274 )
      {
        v275 = GetProcessHeap();
        HeapFree(v275, 0, v274);
        v204[3] = 0LL;
      }
      v276 = (void *)v204[5];
      if ( v276 )
      {
        v277 = GetProcessHeap();
        HeapFree(v277, 0, v276);
        v204[5] = 0LL;
      }
      v278 = GetProcessHeap();
      HeapFree(v278, 0, v204);
    }
  }
  else
  {
    v205 = -1073741811;
  }
  v84 = v205 | 0x10000000;
  v1398 = v84;
  if ( v84 < 0 )
    goto LABEL_574;
  v279 = (const void **)v1595;
  v1492 = 4;
  v280 = RtlUIntAdd(4LL, *(unsigned int *)v1595, &v1492);
  if ( v280 < 0
    || (v280 = RtlUIntAdd(v1492, 4LL, &v1492), v280 < 0)
    || (v280 = RtlUIntAdd(v1492, *((unsigned int *)v279 + 4), &v1492), v280 < 0)
    || (v280 = RtlUIntAdd(v1492, 4LL, &v1492), v280 < 0) )
  {
    v281 = v1493;
  }
  else
  {
    v280 = RtlUIntAdd(v1492, *((unsigned int *)v279 + 8), &v1492);
    v281 = v1493;
    if ( v280 >= 0 )
      v281 = v1492;
    v1493 = v281;
  }
  if ( v280 >= 0 )
  {
    v282 = v281;
    v283 = GetProcessHeap();
    v284 = HeapAlloc(v283, 8u, v282);
    if ( v284 )
    {
      *v284 = *(_DWORD *)v279;
      v1607 = v284;
      v280 = RtlULongLongAdd(v284, 4LL, &v1607);
      if ( v280 >= 0 )
      {
        memcpy_0(v1607, v279[1], *(unsigned int *)v279);
        v280 = RtlULongLongAdd(v1607, *(unsigned int *)v279, &v1607);
        if ( v280 >= 0 )
        {
          v285 = v1607;
          *(_DWORD *)v1607 = *((_DWORD *)v279 + 4);
          v280 = RtlULongLongAdd(v285, 4LL, &v1607);
          if ( v280 >= 0 )
          {
            memcpy_0(v1607, v279[3], *((unsigned int *)v279 + 4));
            v280 = RtlULongLongAdd(v1607, *((unsigned int *)v279 + 4), &v1607);
            if ( v280 >= 0 )
            {
              v286 = v1607;
              *(_DWORD *)v1607 = *((_DWORD *)v279 + 8);
              v280 = RtlULongLongAdd(v286, 4LL, &v1607);
              if ( v280 >= 0 )
              {
                memcpy_0(v1607, v279[5], *((unsigned int *)v279 + 8));
                v280 = RtlULongLongAdd(v1607, *((unsigned int *)v279 + 8), &v1607);
                if ( v280 >= 0 )
                {
                  v1365 = (unsigned __int16 *)v284;
                  v284 = 0LL;
                  v1289 = v1493;
                }
              }
            }
          }
        }
      }
      if ( v284 )
      {
        v287 = GetProcessHeap();
        HeapFree(v287, 0, v284);
      }
    }
    else
    {
      v280 = -1073741801;
    }
  }
  v84 = v280 | 0x10000000;
  v1398 = v84;
  if ( v84 < 0 )
    goto LABEL_574;
  v1608 = 0LL;
  v1494 = 0;
  v1609 = 0LL;
  v1495 = 0;
  v1496 = 8;
  v288 = RtlUIntAdd(8LL, v1333, &v1496);
  v84 = v288 | 0x10000000;
  v1398 = v288 | 0x10000000;
  if ( v288 >= 0 )
  {
    v290 = (v1496 + 7) & 0xFFFFFFF8;
    if ( v290 >= v1496 )
    {
      v1498 = (v1496 + 7) & 0xFFFFFFF8;
      v292 = RtlUIntAdd(v290, v289, &v1498);
      v291 = v1497;
      v84 = v292;
      v1398 = v292;
      if ( v292 >= 0 )
        v291 = v1498;
      v1497 = v291;
    }
    else
    {
      v291 = v1497;
      v84 = -1073741675;
      v1398 = -1073741675;
    }
    if ( v84 < 0 )
      goto LABEL_574;
    if ( !v1700 || (unsigned int)v1699 <= 1 )
      goto LABEL_413;
    v293 = (unsigned int *)v1700;
    v1610 = (unsigned int *)v1700;
    while ( 1 )
    {
      v294 = *v293;
      v1398 = RtlULongLongAdd(v293, 4LL, &v1610);
      v84 = v1398;
      if ( v1398 < 0 )
        break;
      v1398 = RtlULongLongAdd(v1610, v294, &v1610);
      v84 = v1398;
      if ( v1398 < 0 )
        break;
      v293 = v1610;
      if ( v295 != -1 )
      {
        v1398 = RtlULongLongAdd(v1610, 4LL, &v1610);
        v84 = v1398;
        if ( v1398 >= 0 )
        {
          v297 = v1610;
          v1494 = v296;
          if ( !v296 )
            v297 = 0LL;
          v1610 = v297;
          v1608 = v297;
        }
        break;
      }
    }
    if ( v84 < 0 )
      goto LABEL_574;
    if ( (unsigned int)v1699 > 2 )
    {
      v298 = (unsigned int *)v1700;
      v1611 = (unsigned int *)v1700;
      while ( 1 )
      {
        v299 = *v298;
        v1398 = RtlULongLongAdd(v298, 4LL, &v1611);
        v84 = v1398;
        if ( v1398 < 0 )
          break;
        v1398 = RtlULongLongAdd(v1611, v299, &v1611);
        v84 = v1398;
        if ( v1398 < 0 )
          break;
        v298 = v1611;
        if ( (unsigned int)(v300 + 1) >= 2 )
        {
          v1398 = RtlULongLongAdd(v1611, 4LL, &v1611);
          v84 = v1398;
          if ( v1398 >= 0 )
          {
            v302 = v1611;
            v1495 = v301;
            if ( !v301 )
              v302 = 0LL;
            v1611 = v302;
            v1609 = v302;
          }
          break;
        }
      }
      if ( v84 < 0 )
        goto LABEL_574;
      v1499 = 4;
      v1398 = RtlUIntAdd(4LL, v291, &v1499);
      v84 = v1398;
      if ( v1398 < 0
        || (v1398 = RtlUIntAdd(v1499, 4LL, &v1499), v84 = v1398, v1398 < 0)
        || (v1398 = RtlUIntAdd(v1499, v303, &v1499), v84 = v1398, v1398 < 0)
        || (v1398 = RtlUIntAdd(v1499, 4LL, &v1499), v84 = v1398, v1398 < 0) )
      {
        v305 = v1500;
      }
      else
      {
        v84 = RtlUIntAdd(v1499, v304, &v1499);
        v1398 = v84;
        v305 = v1500;
        if ( v84 >= 0 )
          v305 = v1499;
        v1500 = v305;
      }
      if ( v84 < 0 )
        goto LABEL_574;
      if ( v305 > 0x400000 )
      {
        v84 = -2147418113;
LABEL_573:
        v1398 = v84;
        goto LABEL_574;
      }
      LODWORD(v1488) = v305;
    }
    else
    {
LABEL_413:
      v84 = -1073741811;
      v1398 = -1073741811;
    }
  }
  if ( v84 < 0 )
    goto LABEL_574;
  v306 = v1488;
  v307 = GetProcessHeap();
  v308 = (int *)HeapAlloc(v307, 8u, v306);
  if ( v308 )
  {
    v309 = v308;
    v1409 = v308;
    v84 = 0x10000000;
  }
  else
  {
    v84 = -805306345;
    v309 = 0LL;
  }
  v1398 = v84;
  if ( v84 < 0 )
    goto LABEL_574;
  if ( !v1365 || !v309 )
  {
    v84 = -2147024809;
    goto LABEL_573;
  }
  v1722[0] = v1365;
  v1723 = v1289;
  v1724 = v1488;
  v1722[1] = v309;
  v1725 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
  {
    v310 = GetProcAddress(phModule, "NtQuerySystemInformation");
    if ( v310 )
    {
      v311 = ((__int64 (__fastcall *)(__int64, _QWORD *))v310)(134LL, v1722);
      v312 = v1488;
      v84 = v311 | 0x10000000;
      if ( v311 >= 0 )
        v312 = v1724;
      LODWORD(v1488) = v312;
      goto LABEL_436;
    }
  }
  v313 = GetLastError();
  v1398 = v313;
  v84 = v313;
  if ( v313 > 0 )
  {
    v84 = (unsigned __int16)v313 | 0x80070000;
    v1398 = v84;
  }
  v312 = v1488;
  if ( v84 >= 0 )
  {
    v84 = -2147467259;
LABEL_436:
    v1398 = v84;
  }
  if ( v84 != -805306333 )
  {
    if ( v84 < 0 )
      goto LABEL_574;
    v1402 = 0LL;
    v1501 = 0;
    v1613 = v309;
    if ( v312 >= 4 )
    {
      v1296 = *v309;
      v314 = RtlULongLongAdd(v309, 4LL, &v1613);
      if ( v314 < 0 )
        goto LABEL_462;
      v314 = RtlUIntAdd(0LL, 4LL, &v1501);
      if ( v314 < 0 )
        goto LABEL_462;
      if ( v312 - v1501 >= (unsigned int)v315 )
      {
        v1389 = v1613;
        v1413 = v315;
        v314 = RtlULongLongAdd(v1613, (unsigned int)v315, &v1613);
        if ( v314 < 0 )
          goto LABEL_462;
        v314 = RtlUIntAdd(v1501, v316, &v1501);
        if ( v314 < 0 )
          goto LABEL_462;
        if ( v312 - v1501 >= 4 )
        {
          v317 = *(unsigned int *)v1613;
          v314 = RtlULongLongAdd(v1613, 4LL, &v1613);
          if ( v314 < 0 )
            goto LABEL_462;
          v314 = RtlUIntAdd(v1501, 4LL, &v1501);
          if ( v314 < 0 )
            goto LABEL_462;
          if ( v312 - v1501 >= (unsigned int)v317 )
          {
            v1317 = v1613;
            v314 = RtlULongLongAdd(v1613, (unsigned int)v317, &v1613);
            if ( v314 < 0 )
              goto LABEL_462;
            v314 = RtlUIntAdd(v1501, (unsigned int)v317, &v1501);
            if ( v314 < 0 )
              goto LABEL_462;
            if ( v312 - v1501 >= 4 )
            {
              v318 = *(unsigned int *)v1613;
              v314 = RtlULongLongAdd(v1613, 4LL, &v1613);
              if ( v314 < 0 )
                goto LABEL_462;
              v314 = RtlUIntAdd(v1501, v319, &v1501);
              if ( v314 < 0 )
                goto LABEL_462;
              if ( v312 - v1501 >= (unsigned int)v318 )
              {
                v314 = RtlUIntAdd(v1501, (unsigned int)v318, &v1501);
                if ( v314 < 0 )
                {
LABEL_462:
                  v324 = 0LL;
                  goto LABEL_463;
                }
                if ( v312 == v1501 && (unsigned int)(v317 + v320 + v318) + 12LL == v312 )
                {
                  v321 = GetProcessHeap();
                  v322 = HeapAlloc(v321, 8u, 0x30uLL);
                  v323 = v322;
                  if ( !v322 )
                  {
                    v314 = -1073741801;
LABEL_495:
                    v324 = v1402;
                    v352 = 0LL;
                    if ( v314 < 0 )
                    {
                      v352 = v1402;
                      v324 = 0LL;
                    }
                    v1446 = v324;
                    if ( v352 )
                    {
                      v353 = (void *)*((_QWORD *)v352 + 1);
                      if ( v353 )
                      {
                        v354 = GetProcessHeap();
                        HeapFree(v354, 0, v353);
                        *((_QWORD *)v352 + 1) = 0LL;
                      }
                      v355 = (void *)*((_QWORD *)v352 + 3);
                      if ( v355 )
                      {
                        v356 = GetProcessHeap();
                        HeapFree(v356, 0, v355);
                        *((_QWORD *)v352 + 3) = 0LL;
                      }
                      v357 = (void *)*((_QWORD *)v352 + 5);
                      if ( v357 )
                      {
                        v358 = GetProcessHeap();
                        HeapFree(v358, 0, v357);
                        *((_QWORD *)v352 + 5) = 0LL;
                      }
                      v359 = GetProcessHeap();
                      HeapFree(v359, 0, v352);
                      v324 = v1446;
                    }
LABEL_463:
                    v84 = v314 | 0x10000000;
                    v1398 = v84;
                    if ( v84 < 0 )
                      goto LABEL_574;
                    v1614 = 0LL;
                    v325 = 0LL;
                    v1615 = 0LL;
                    if ( !v324
                      || (v326 = (unsigned __int8 *)*((_QWORD *)v324 + 1), (v1403 = (char *)v326) == 0LL)
                      || !*v324 )
                    {
                      v84 = -805306355;
                      goto LABEL_573;
                    }
                    v327 = *v324;
                    if ( !v327 )
                      goto LABEL_534;
                    v328 = v327 - 8;
                    v1390 = v328;
                    v1414 = (int *)MemoryAlloc(v328);
                    v329 = v1414;
                    if ( !v1414 )
                    {
                      v325 = v1614;
                      goto LABEL_534;
                    }
                    v1776 = 0x7F1137FAB69605ELL;
                    v1502 = 0;
                    v330 = 0;
                    v331 = v326;
                    v332 = v1414;
                    v333 = 0;
                    v334 = v328 & 7;
                    if ( (v328 & 7) != 0 )
                    {
                      v1503 = -1;
                      v335 = 0;
                      v1281 = 0;
                      v336 = 56;
                      do
                      {
                        v337 = *v331++;
                        if ( v333 >= 4 )
                        {
                          v338 = v1281;
                          v335 |= v337 << v336;
                        }
                        else
                        {
                          v338 = (v337 << (v336 - 32)) | v1281;
                          v1281 = v338;
                        }
                        ++v333;
                        v336 -= 8;
                      }
                      while ( v333 < (int)v334 );
                      v1318 = v335;
                      v333 = v338 ^ 0x92F65A5;
                      v360 = v335 ^ 0x699A899C;
                      v1502 = v338 ^ 0x92F65A5;
                      v361 = 0;
                      v1503 = v335 ^ 0x699A899C;
                      if ( (v328 & 7) != 0 )
                      {
                        do
                        {
                          if ( v361 >= 4 )
                          {
                            v360 = __ROL4__(v360, 8);
                            v362 = v360;
                          }
                          else
                          {
                            v333 = __ROL4__(v333, 8);
                            v362 = v333;
                          }
                          ++v361;
                          *(_BYTE *)v332 = v362;
                          v332 = (int *)((char *)v332 + 1);
                        }
                        while ( v361 < (int)v334 );
                        v333 = v1502;
                        v360 = v1503;
                      }
                      if ( v334 <= 4 )
                      {
                        v363 = 0;
                        v1503 = 0;
                        if ( v334 < 4 )
                        {
                          v333 = (unsigned int)v333 >> (8 * (4 - v334)) << (8 * (4 - v334));
                          v1502 = v333;
                        }
LABEL_520:
                        v364 = v328 >> 3;
                        if ( v328 >> 3 )
                        {
                          v365 = (char *)v332 + 7;
                          v366 = v1318;
                          v367 = v331 + 2;
                          v368 = HIDWORD(v1776);
                          v1400 = WORD2(v1776);
                          v1290 = WORD1(v1776);
                          v369 = HIDWORD(v1776) ^ 0xAB69605E;
                          v370 = v1281;
                          do
                          {
                            v371 = *(v367 - 1) | (*(v367 - 2) << 8);
                            v372 = v367[2] << 8;
                            v373 = *v367;
                            v367 += 8;
                            v374 = *(v367 - 7) | ((v373 | (v371 << 8)) << 8);
                            v375 = v374 ^ v333;
                            v376 = *(v367 - 3) | ((*(v367 - 4) | ((*(v367 - 5) | v372) << 8)) << 8);
                            v377 = v375 ^ v376 ^ v363 ^ v368 ^ 0xAB69605E;
                            v378 = (__ROL4__(v377, 10) + v1400 * __ROL4__(v377 + 1419157410, 5)) ^ v375;
                            v379 = (WORD1(v1776) * __ROR4__(v368 + v378, 9) - __ROL4__(v378, 2)) ^ v377;
                            v380 = (24670 * (v379 - v1400) - (v379 >> 13)) ^ v378;
                            v381 = (HIWORD(v1776) * __ROL4__(v380 ^ WORD1(v1776), 6) - __ROL4__(v380, 2)) ^ v379;
                            v382 = (v368 - (v381 ^ 0xAB69605E)) ^ v380;
                            v383 = (v1290 * (v1400 ^ v382)) ^ __ROR4__(v382, 6) ^ v381;
                            v384 = (__ROL4__(v383, 2) + 24670 * __ROR4__(v368 + v383, 15)) ^ v382;
                            v385 = (HIWORD(v1776) * __ROR4__(v384 + 1419157410, 14) - __ROL4__(v384, 8)) ^ v383;
                            v386 = __ROR4__(v385, 10) ^ (v1400 * __ROR4__(v385 ^ 0xAB69605E, 12)) ^ v384;
                            v387 = (v386 >> 10) ^ (WORD1(v1776) * (v386 ^ HIWORD(v1776))) ^ v385;
                            v388 = (HIWORD(v1776) * (__ROR4__(~v387, 5) + 24670)) ^ v386;
                            v389 = (v388 - HIWORD(v1776)) ^ 0xAB69605E ^ v387;
                            v390 = ((v389 >> 2) + v1400 * __ROL4__(v389 ^ HIWORD(v1776), 2)) ^ v388;
                            v391 = (__ROL4__(v390, 7) + WORD1(v1776) * __ROR4__(v390 - v368, 6)) ^ v389;
                            v392 = (24670 * (v1400 ^ v391) + __ROR4__(v391, 9)) ^ v390;
                            v393 = (__ROL4__(v392, 7) + HIWORD(v1776) * __ROL4__(v392 ^ WORD1(v1776), 5)) ^ v391;
                            v394 = v393 ^ v369 ^ v392;
                            v395 = (v1400 * (__ROR4__(v394, 3) - WORD1(v1776))) ^ v393;
                            v396 = (24670 * __ROR4__(v395 - v368, 1) - __ROR4__(v395, 6)) ^ v394;
                            v397 = (__ROL4__(v396, 14) + HIWORD(v1776) * __ROL4__(v396 - 1419157410, 3)) ^ v395;
                            v398 = (v1400 * __ROL4__(v397 - 1419157410, 15) - __ROR4__(v397, 14)) ^ v396;
                            v399 = (v398 >> 3) ^ (WORD1(v1776) * (v398 ^ 0x605E)) ^ v397;
                            v1503 = v366 ^ v399;
                            v366 = v376;
                            v400 = v370 ^ __ROL4__(v399, 2) ^ (24670 * __ROL4__(v399 ^ v368, 4));
                            v370 = v374;
                            v1502 = v400 ^ v398;
                            *(v365 - 4) = v400 ^ v398;
                            v1502 = __ROR4__(v1502, 8);
                            *v365 = v1503;
                            v365 += 8;
                            v1503 = __ROR4__(v1503, 8);
                            *(v365 - 13) = v1502;
                            v1502 = __ROR4__(v1502, 8);
                            *(v365 - 9) = v1503;
                            v1503 = __ROR4__(v1503, 8);
                            *(v365 - 14) = v1502;
                            v1502 = __ROR4__(v1502, 8);
                            *(v365 - 10) = v1503;
                            v1503 = __ROR4__(v1503, 8);
                            *(v365 - 15) = v1502;
                            *(v365 - 11) = v1503;
                            v333 = __ROR4__(v1502, 8);
                            v363 = __ROR4__(v1503, 8);
                            v1502 = v333;
                            v1503 = v363;
                            --v364;
                          }
                          while ( v364 );
                          v330 = 0;
                          v328 = v1390;
                          v2 = 0;
                          v329 = v1414;
                        }
                        for ( n = 0LL; n < v328; ++n )
                          v330 ^= *((_BYTE *)v329 + n);
                        if ( v330 == *(_QWORD *)&v1403[v328] )
                        {
                          v325 = v329;
                          v1614 = v329;
                          v1615 = v328;
                          v329 = 0LL;
                          v402 = 0;
                        }
                        else
                        {
                          v325 = v1614;
                          v402 = -1073425151;
                        }
                        if ( v329 )
                        {
                          MemoryFree(v329);
                          v325 = v1614;
                        }
                        if ( v402 >= 0 )
                        {
                          v403 = v1615;
                          v404 = v325;
                          v1430 = (char *)v325;
                          v325 = 0LL;
                          v1614 = 0LL;
                          v84 = 0x10000000;
                          HIDWORD(v1488) = v1615;
                          goto LABEL_535;
                        }
LABEL_534:
                        v403 = HIDWORD(v1488);
                        v84 = -805306367;
                        v404 = 0LL;
LABEL_535:
                        v1398 = v84;
                        if ( v325 )
                        {
                          v405 = GetProcessHeap();
                          HeapFree(v405, 0, v325);
                          v403 = HIDWORD(v1488);
                          v1614 = 0LL;
                        }
                        if ( v84 < 0 )
                          goto LABEL_574;
                        v1504[0] = 0;
                        v1616 = v404;
                        if ( v403 >= 4 )
                        {
                          v1297 = *v404;
                          v407 = RtlULongLongAdd(v404, 4LL, &v1616);
                          if ( v407 < 0 )
                            goto LABEL_572;
                          v407 = RtlUIntAdd(0LL, v406, v1504);
                          if ( v407 < 0 )
                            goto LABEL_572;
                          if ( v408 - v1504[0] >= v409 )
                          {
                            v410 = *(unsigned int *)v1616;
                            v407 = RtlULongLongAdd(v1616, v409, &v1616);
                            if ( v407 < 0 )
                              goto LABEL_572;
                            v407 = RtlUIntAdd(v1504[0], v411, v1504);
                            if ( v407 < 0 )
                              goto LABEL_572;
                            if ( v412 - v1504[0] >= (unsigned int)v410 )
                            {
                              v407 = RtlUIntAdd(v1504[0], (unsigned int)v410, v1504);
                              if ( v407 < 0 )
                                goto LABEL_572;
                              v414 = v1616;
                              v415 = (unsigned int)v410;
                              if ( &v1430[v413] >= (char *)v1616 + v410
                                && (unsigned __int64)&v1430[v413 - (_QWORD)v1616 - v410] < 8 )
                              {
                                v1282 = 0;
                                v416 = 0LL;
                                v1404 = 0LL;
                                v407 = 0;
                                if ( !v1616 )
                                {
LABEL_561:
                                  if ( (_DWORD)v410 )
                                  {
                                    v424 = GetProcessHeap();
                                    v416 = HeapAlloc(v424, 8u, v415);
                                    v1404 = v416;
                                    if ( !v416 )
                                    {
                                      v407 = -1073741801;
                                      goto LABEL_569;
                                    }
                                    v407 = 0;
                                  }
                                  if ( v414 )
                                  {
                                    memcpy_0(v416, v414, v415);
                                    v416 = v1404;
                                  }
                                  v1702 = v416;
                                  v1701 = __PAIR64__(v410, v1282);
LABEL_569:
                                  if ( v407 < 0 || v1297 == (_DWORD)v1701 )
                                    goto LABEL_572;
                                  goto LABEL_571;
                                }
                                v417 = (unsigned int)v410;
                                v418 = (unsigned int *)v1616;
                                v407 = RtlULongLongAdd(v1616, v417, &v1617);
                                if ( v407 < 0 )
                                  goto LABEL_569;
                                v419 = (unsigned int *)v1617;
                                if ( (unsigned __int64)v414 < v1617 )
                                {
                                  do
                                  {
                                    v407 = RtlULongLongAdd(v418, 4LL, &v1618);
                                    if ( v407 < 0 )
                                      goto LABEL_569;
                                    if ( v1618 > v420 )
                                      goto LABEL_564;
                                    v421 = RtlUIntAdd(4LL, *v418, &v1505);
                                    v407 = v421;
                                    if ( v421 >= 0 )
                                      v422 = v1505;
                                    v1504[1] = v422;
                                    if ( v421 < 0 )
                                      goto LABEL_569;
                                    v407 = RtlULongLongAdd(v418, v422, &v1619);
                                    if ( v407 < 0 )
                                      goto LABEL_569;
                                    v418 = v1619;
                                    if ( v1619 > v419 )
                                      goto LABEL_564;
                                    v1282 = v423 + 1;
                                  }
                                  while ( v1619 < v419 );
                                }
                                if ( v418 == v419 )
                                {
                                  LODWORD(v410) = v415;
                                  v416 = 0LL;
                                  goto LABEL_561;
                                }
LABEL_564:
                                v407 = -1073741811;
LABEL_572:
                                v84 = v407 | 0x10000000;
                                goto LABEL_573;
                              }
                            }
                          }
                        }
LABEL_571:
                        v407 = -1073741762;
                        goto LABEL_572;
                      }
                      v363 = v360 >> (8 * (8 - v334)) << (8 * (8 - v334));
                    }
                    else
                    {
                      v1318 = -1;
                      v363 = 0;
                      v1281 = 0;
                    }
                    v1503 = v363;
                    goto LABEL_520;
                  }
                  if ( v1389 )
                  {
                    *(_DWORD *)v322 = v1296;
                    v339 = GetProcessHeap();
                    v340 = HeapAlloc(v339, 8u, v1413);
                    if ( !v340 )
                      goto LABEL_476;
                    v323[1] = v340;
                    memcpy_0(v340, v1389, v1413);
                  }
                  else
                  {
                    *(_DWORD *)v322 = 0;
                    v322[1] = 0LL;
                  }
                  if ( v1317 )
                  {
                    *((_DWORD *)v323 + 4) = v317;
                    v341 = GetProcessHeap();
                    v342 = HeapAlloc(v341, 8u, v317);
                    if ( !v342 )
                      goto LABEL_476;
                    v323[3] = v342;
                    memcpy_0(v342, v1317, v317);
                  }
                  else
                  {
                    *((_DWORD *)v323 + 4) = 0;
                    v323[3] = 0LL;
                  }
                  if ( !v1613 )
                  {
                    *((_DWORD *)v323 + 8) = 0;
                    v323[5] = 0LL;
                    goto LABEL_486;
                  }
                  *((_DWORD *)v323 + 8) = v318;
                  v343 = GetProcessHeap();
                  v344 = HeapAlloc(v343, 8u, v318);
                  if ( v344 )
                  {
                    v323[5] = v344;
                    memcpy_0(v344, v1613, v318);
LABEL_486:
                    v1402 = (unsigned int *)v323;
                    v314 = 0;
                    v323 = 0LL;
LABEL_487:
                    if ( v323 )
                    {
                      v345 = (void *)v323[1];
                      if ( v345 )
                      {
                        v346 = GetProcessHeap();
                        HeapFree(v346, 0, v345);
                        v323[1] = 0LL;
                      }
                      v347 = (void *)v323[3];
                      if ( v347 )
                      {
                        v348 = GetProcessHeap();
                        HeapFree(v348, 0, v347);
                        v323[3] = 0LL;
                      }
                      v349 = (void *)v323[5];
                      if ( v349 )
                      {
                        v350 = GetProcessHeap();
                        HeapFree(v350, 0, v349);
                        v323[5] = 0LL;
                      }
                      v351 = GetProcessHeap();
                      HeapFree(v351, 0, v323);
                    }
                    goto LABEL_495;
                  }
LABEL_476:
                  v314 = -1073741801;
                  goto LABEL_487;
                }
              }
            }
          }
        }
      }
    }
    v314 = -1073741762;
    goto LABEL_462;
  }
  v84 = -2147024774;
  v1398 = -2147024774;
LABEL_574:
  if ( v1263 )
  {
    v425 = GetProcessHeap();
    HeapFree(v425, 0, v1263);
  }
  v426 = v1595;
  if ( v1595 )
  {
    v427 = (void *)*((_QWORD *)v1595 + 1);
    if ( v427 )
    {
      v428 = GetProcessHeap();
      HeapFree(v428, 0, v427);
      v426[1] = 0LL;
    }
    v429 = (void *)v426[3];
    if ( v429 )
    {
      v430 = GetProcessHeap();
      HeapFree(v430, 0, v429);
      v426[3] = 0LL;
    }
    v431 = (void *)v426[5];
    if ( v431 )
    {
      v432 = GetProcessHeap();
      HeapFree(v432, 0, v431);
      v426[5] = 0LL;
    }
    v433 = GetProcessHeap();
    HeapFree(v433, 0, v426);
    v1595 = 0LL;
  }
  if ( v1365 )
  {
    v434 = GetProcessHeap();
    HeapFree(v434, 0, v1365);
  }
  if ( v1409 )
  {
    v435 = GetProcessHeap();
    HeapFree(v435, 0, v1409);
  }
  if ( v1446 )
  {
    v436 = (void *)*((_QWORD *)v1446 + 1);
    if ( v436 )
    {
      v437 = GetProcessHeap();
      HeapFree(v437, 0, v436);
      *((_QWORD *)v1446 + 1) = 0LL;
    }
    v438 = (void *)*((_QWORD *)v1446 + 3);
    if ( v438 )
    {
      v439 = GetProcessHeap();
      HeapFree(v439, 0, v438);
      *((_QWORD *)v1446 + 3) = 0LL;
    }
    v440 = (void *)*((_QWORD *)v1446 + 5);
    if ( v440 )
    {
      v441 = GetProcessHeap();
      HeapFree(v441, 0, v440);
      *((_QWORD *)v1446 + 5) = 0LL;
    }
    v442 = GetProcessHeap();
    HeapFree(v442, 0, v1446);
  }
  if ( v1430 )
  {
    v443 = GetProcessHeap();
    HeapFree(v443, 0, v1430);
  }
  if ( v84 < 0 )
    goto LABEL_695;
  if ( !(_DWORD)v1701 )
    goto LABEL_605;
  v444 = 4LL;
  if ( v1702 )
  {
    v1620 = (int *)v1702;
    v1398 = RtlULongLongAdd(v1702, 4LL, &v1620);
    v84 = v1398;
    if ( v1398 < 0 )
    {
      v445 = v1506;
      v446 = v1621;
    }
    else
    {
      v446 = v1620;
      v1506 = v445;
      if ( !v445 )
        v446 = 0LL;
      v1620 = v446;
      v1621 = v446;
    }
    if ( v1398 < 0 )
      goto LABEL_695;
    if ( v445 != (_DWORD)v444 )
      goto LABEL_152;
    v1573 = *v446;
  }
  else
  {
    v84 = -1073741811;
    v1398 = -1073741811;
  }
  if ( v84 < 0 )
    goto LABEL_695;
  v84 = v1573;
  if ( v1573 == -805306333 )
    v84 = -2147024774;
  v1398 = v84;
  v1573 = v84;
  if ( v84 != -2147024774 && v84 < 0 )
    goto LABEL_695;
  if ( (_DWORD)v1701 != 6 )
    goto LABEL_605;
  if ( v1702 )
  {
    v447 = v1702;
    v448 = 0;
    v1622 = (int *)v1702;
    do
    {
      v1398 = RtlULongLongAdd(v447, v444, &v1622);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_627;
      v1398 = RtlULongLongAdd(v1622, v449, &v1622);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_627;
      v447 = v1622;
      v448 += v450;
    }
    while ( v448 < v450 );
    v451 = *v1622;
    v1398 = RtlULongLongAdd(v1622, v444, &v1622);
    v84 = v1398;
    if ( v1398 < 0 )
    {
LABEL_627:
      v451 = v1507;
      v452 = v1623;
      goto LABEL_628;
    }
    v452 = v1622;
    v1507 = v451;
    if ( !v451 )
      v452 = 0LL;
    v1622 = v452;
    v1623 = v452;
LABEL_628:
    if ( v84 < 0 )
      goto LABEL_695;
    if ( v451 != 8 )
      goto LABEL_152;
    v1624 = *(_QWORD *)v452;
  }
  else
  {
    v84 = -1073741811;
    v1398 = -1073741811;
  }
  if ( v84 < 0 )
    goto LABEL_695;
  if ( v1702 )
  {
    v453 = v1702;
    v454 = 0;
    v1625 = (int *)v1702;
    do
    {
      v1398 = RtlULongLongAdd(v453, v444, &v1625);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_642;
      v1398 = RtlULongLongAdd(v1625, v455, &v1625);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_642;
      v453 = v1625;
      v454 += v456;
    }
    while ( v454 < 2 );
    v457 = *v1625;
    v1398 = RtlULongLongAdd(v1625, v444, &v1625);
    v84 = v1398;
    if ( v1398 < 0 )
    {
LABEL_642:
      v457 = v1527;
      v458 = v1626;
      goto LABEL_643;
    }
    v458 = v1625;
    v1527 = v457;
    if ( !v457 )
      v458 = 0LL;
    v1625 = v458;
    v1626 = v458;
LABEL_643:
    if ( v84 < 0 )
      goto LABEL_695;
    if ( v457 != (_DWORD)v444 )
      goto LABEL_152;
    v1509 = *v458;
  }
  else
  {
    v84 = -1073741811;
    v1398 = -1073741811;
  }
  if ( v84 < 0 )
    goto LABEL_695;
  if ( !v1702 )
  {
    v84 = -1073741811;
    goto LABEL_694;
  }
  v459 = v1702;
  v460 = 0;
  v1627 = v1702;
  do
  {
    v1398 = RtlULongLongAdd(v459, v444, &v1627);
    v84 = v1398;
    if ( v1398 < 0 )
      goto LABEL_657;
    v1398 = RtlULongLongAdd(v1627, v461, &v1627);
    v84 = v1398;
    if ( v1398 < 0 )
      goto LABEL_657;
    v459 = v1627;
    v460 += v462;
  }
  while ( v460 < 3 );
  v1398 = RtlULongLongAdd(v1627, v444, &v1627);
  v84 = v1398;
  if ( v1398 < 0 )
  {
LABEL_657:
    v464 = v1628;
    goto LABEL_658;
  }
  v464 = v1627;
  v1510 = v463;
  if ( !v463 )
    v464 = 0LL;
  v1627 = v464;
  v1628 = v464;
LABEL_658:
  if ( v84 < 0 )
    goto LABEL_695;
  v465 = v1702;
  v1629 = v1702;
  do
  {
    v1398 = RtlULongLongAdd(v465, 4LL, &v1629);
    v84 = v1398;
    if ( v1398 < 0 )
    {
      v468 = 4;
      goto LABEL_668;
    }
    v1398 = RtlULongLongAdd(v1629, v466, &v1629);
    v84 = v1398;
    v468 = 4;
    if ( v1398 < 0 )
      goto LABEL_668;
    v465 = v1629;
  }
  while ( (unsigned int)(v467 + 1) < 4 );
  v1398 = RtlULongLongAdd(v1629, 4LL, &v1629);
  v84 = v1398;
  if ( v1398 < 0 )
  {
LABEL_668:
    v469 = v1511;
    v470 = v1630;
    goto LABEL_669;
  }
  v470 = (int *)v1629;
  v1511 = v469;
  if ( !v469 )
    v470 = 0LL;
  v1629 = v470;
  v1630 = v470;
LABEL_669:
  if ( v84 < 0 )
  {
LABEL_672:
    if ( v84 < 0 )
      goto LABEL_695;
    v471 = (unsigned int *)v1702;
    v1631 = (unsigned int *)v1702;
    do
    {
      v472 = *v471;
      v1398 = RtlULongLongAdd(v471, 4LL, &v1631);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_681;
      v1398 = RtlULongLongAdd(v1631, v472, &v1631);
      v84 = v1398;
      if ( v1398 < 0 )
        goto LABEL_681;
      v471 = v1631;
    }
    while ( (unsigned int)(v475 + 1) < 5 );
    v1398 = RtlULongLongAdd(v1631, 4LL, &v1631);
    v84 = v1398;
    if ( v1398 < 0 )
    {
LABEL_681:
      v476 = v1513;
      v477 = v1632;
      goto LABEL_682;
    }
    v477 = (int *)v1631;
    v1513 = v476;
    if ( !v476 )
      v477 = 0LL;
    v1631 = (unsigned int *)v477;
    v1632 = v477;
LABEL_682:
    if ( v84 < 0 )
    {
      v478 = v1572;
    }
    else
    {
      if ( v476 != 4 )
        goto LABEL_152;
      v478 = *v477;
      v1572 = *v477;
    }
    if ( v84 < 0 )
      goto LABEL_695;
    if ( v1585 == v1624 )
    {
      v1524 = v1509;
      v1525 = v474;
      v1526 = v478;
      if ( v474 > 4 || v473 > 4 )
      {
        v84 = -2147024774;
      }
      else
      {
        memcpy_0(v1419, v464, v473);
        if ( v1573 )
          v84 = v1573;
      }
      goto LABEL_694;
    }
LABEL_605:
    v84 = -1073425151;
    goto LABEL_694;
  }
  if ( v469 == v468 )
  {
    v1512 = *v470;
    goto LABEL_672;
  }
LABEL_152:
  v84 = -1073741789;
LABEL_694:
  v1398 = v84;
LABEL_695:
  v85 = v1354;
  v86 = v1379;
LABEL_696:
  v1699 = 0LL;
  v479 = v1700;
  if ( v1700 )
  {
    v480 = GetProcessHeap();
    HeapFree(v480, 0, v479);
    v1700 = 0LL;
  }
  v1701 = 0LL;
  v481 = v1702;
  if ( v1702 )
  {
    v482 = GetProcessHeap();
    HeapFree(v482, 0, v481);
    v1702 = 0LL;
  }
  if ( v85 )
  {
    v483 = GetProcessHeap();
    HeapFree(v483, 0, v85);
  }
  if ( v86 )
  {
    v484 = GetProcessHeap();
    HeapFree(v484, 0, v86);
  }
  if ( v84 < 0 )
    goto LABEL_1684;
  if ( !v1526 )
    goto LABEL_1683;
  v1633 = 0LL;
  dword_1800AC008 = v1526;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1290;
  v1405 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0F8[0])(
                                       0LL,
                                       0LL,
                                       1027LL);
  if ( !v1405 )
  {
    GetLastError();
    goto LABEL_1290;
  }
  v486 = off_1800AB098[0]();
  v487 = dword_1800AC008;
  qword_1800AC000 = v486;
  v1298 = dword_1800AC008;
  memset_0(&v1759, 0, 0x70uLL);
  v1391 = 0LL;
  v1703 = 0LL;
  v1704 = 0LL;
  v1415 = 0LL;
  v1514 = 1;
  memset_0(v1797, 0, 0x2CuLL);
  v1431 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v488 = dword_1800AC00C;
  if ( dword_1800AC00C )
  {
LABEL_757:
    dword_1800AC00C = v488 + 1;
    goto LABEL_758;
  }
  v1319 = 0;
  v1334 = 0;
  v1634 = 0LL;
  v1635 = 0LL;
  v489 = (char *)MemoryAlloc(0x338uLL);
  v1264 = (const WCHAR *)v489;
  if ( !v489 )
    goto LABEL_747;
  v490 = v489 + 7;
  v491 = 0;
  v1515 = 0;
  v492 = 0;
  v493 = (unsigned __int8 *)&unk_18008EDC2;
  v494 = 0;
  v1516 = 0;
  v495 = -1;
  v496 = 103LL;
  do
  {
    v497 = *(v493 - 1) | (*(v493 - 2) << 8);
    v498 = v493[2] << 8;
    v499 = *v493;
    v493 += 8;
    v500 = *(v493 - 7) | ((v499 | (v497 << 8)) << 8);
    v501 = v500 ^ v492;
    v502 = *(v493 - 3) | ((*(v493 - 4) | ((*(v493 - 5) | v498) << 8)) << 8);
    v503 = v502 ^ v491 ^ v501 ^ 0xAC987321;
    v504 = (__ROL4__(v503, 10) + 4991 * __ROL4__(v503 + 1419157410, 5)) ^ v501;
    v505 = (43881 * __ROR4__(v504 + 133239679, 9) - __ROL4__(v504, 2)) ^ v503;
    v506 = (24670 * v505 - (v505 >> 13) - 123127970) ^ v504;
    v507 = (2033 * __ROL4__(v506 ^ 0xAB69, 6) - __ROL4__(v506, 2)) ^ v505;
    v508 = (133239679 - (v507 ^ 0xAB69605E)) ^ v506;
    v509 = (43881 * (v508 ^ 0x137F)) ^ __ROR4__(v508, 6) ^ v507;
    v510 = (__ROL4__(v509, 2) + 24670 * __ROR4__(v509 + 133239679, 15)) ^ v508;
    v511 = (2033 * __ROR4__(v510 + 1419157410, 14) - __ROL4__(v510, 8)) ^ v509;
    v512 = __ROR4__(v511, 10) ^ (4991 * __ROR4__(v511 ^ 0xAB69605E, 12)) ^ v510;
    v513 = v511 ^ (v512 >> 10) ^ (43881 * (v512 ^ 0x7F1));
    v514 = (2033 * (__ROR4__(~v513, 5) + 24670)) ^ v512;
    v515 = v513 ^ (v514 - 2033) ^ 0xAB69605E;
    v516 = ((v515 >> 2) + 4991 * __ROL4__(v513 ^ (v514 - 2033) ^ 0xAB6967AF, 2)) ^ v514;
    v517 = (__ROL4__(v516, 7) + 43881 * __ROR4__(v516 - 133239679, 6)) ^ v515;
    v518 = (24670 * (v517 ^ 0x137F) + __ROR4__(v517, 9)) ^ v516;
    v519 = (__ROL4__(v518, 7) + 2033 * __ROL4__(v518 ^ 0xAB69, 5)) ^ v517;
    v520 = v519 ^ v518 ^ 0xAC987321;
    v521 = (4991 * __ROR4__(v520, 3) - 219010071) ^ v519;
    v522 = (24670 * __ROR4__(v521 - 133239679, 1) - __ROR4__(v521, 6)) ^ v520;
    v523 = (__ROL4__(v522, 14) + 2033 * __ROL4__(v522 - 1419157410, 3)) ^ v521;
    v524 = (4991 * __ROL4__(v523 - 1419157410, 15) - __ROR4__(v523, 14)) ^ v522;
    v525 = (v524 >> 3) ^ (43881 * (v524 ^ 0x605E)) ^ v523;
    v1515 = v495 ^ v525;
    v495 = v502;
    v526 = v494 ^ v524 ^ __ROL4__(v525, 2) ^ (24670 * __ROL4__(v525 ^ 0x7F1137F, 4));
    v494 = v500;
    v1516 = v526;
    *(v490 - 4) = v526;
    v1516 = __ROR4__(v1516, 8);
    *v490 = v1515;
    v490 += 8;
    v1515 = __ROR4__(v1515, 8);
    *(v490 - 13) = v1516;
    v1516 = __ROR4__(v1516, 8);
    *(v490 - 9) = v1515;
    v1515 = __ROR4__(v1515, 8);
    *(v490 - 14) = v1516;
    v1516 = __ROR4__(v1516, 8);
    *(v490 - 10) = v1515;
    v1515 = __ROR4__(v1515, 8);
    *(v490 - 15) = v1516;
    *(v490 - 11) = v1515;
    v492 = __ROR4__(v1516, 8);
    v491 = __ROR4__(v1515, 8);
    v1516 = v492;
    v1515 = v491;
    --v496;
  }
  while ( v496 );
  v487 = v1298;
  v527 = 0LL;
  v84 = v1398;
  v528 = 0;
  v529 = (WCHAR *)v1264;
  v530 = 0;
  do
    v528 ^= *((_BYTE *)v1264 + v527++);
  while ( v527 < 0x338 );
  if ( v528 == 64LL )
  {
    v1634 = v1264;
    v531 = 0;
    v529 = 0LL;
    v1635 = 824LL;
  }
  else
  {
    v531 = -1073425151;
  }
  if ( v529 )
    MemoryFree(v529);
  if ( v531 >= 0 )
  {
    v532 = v1634;
    HIBYTE(v1634[v1635 / 2 - 1]) = 0;
    memset_0(&unk_1800AC220, 0, 0x60uLL);
    while ( *(_BYTE *)v532 )
    {
      v533 = v532;
      v534 = -1LL;
      do
        ++v534;
      while ( v532[v534] );
      v535 = &v532[v534];
      v1265 = (char *)&unk_1800AC220 + 24 * v1334;
      if ( !GetModuleHandleExW(0, v533, (HMODULE *)v1265) )
        goto LABEL_747;
      v536 = (HMODULE *)((char *)&unk_1800AC220 + 24 * v1334);
      v530 = 0;
      if ( **(_WORD **)v1265 == 23117
        && (v537 = *(int *)(*(_QWORD *)v1265 + 60LL), (unsigned int)v537 < 0x10000000)
        && (v538 = *(_QWORD *)v1265 + v537, v538 >= *(_QWORD *)v1265)
        && *(_DWORD *)v538 == 17744 )
      {
        if ( ((*(_WORD *)(v538 + 24) - 267) & 0xFEFF) != 0 )
        {
          v530 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v1265 + 12) = *(_QWORD *)(v538 + 136);
          *((_DWORD *)v1265 + 2) = *(_DWORD *)(v538 + 80);
        }
      }
      else
      {
        v530 = -1073741701;
      }
      v539 = *(_DWORD *)(v535 + 1);
      v540 = 0;
      v532 = v535 + 3;
      v1283 = v539;
      for ( ii = 0; v540 < v1283; ii = v540 )
      {
        v541 = (const CHAR *)v532;
        v542 = -1LL;
        do
          ++v542;
        while ( *((_BYTE *)v532 + v542) );
        v532 = (LPCWSTR)((char *)v532 + v542 + 1);
        if ( v530 >= 0 )
        {
          v543 = GetProcAddress(*v536, v541);
          if ( !v543 )
            goto LABEL_748;
          v536 = (HMODULE *)((char *)&unk_1800AC220 + 24 * v1334);
          off_1800AB000[v1319] = v543;
          v540 = ii;
        }
        ++v1319;
        ++v540;
      }
      ++v1334;
    }
  }
  else
  {
LABEL_747:
    v530 = -1073741702;
  }
LABEL_748:
  if ( v1634 )
  {
    v544 = GetProcessHeap();
    HeapFree(v544, 0, (LPVOID)v1634);
  }
  if ( v530 >= 0 )
  {
    v488 = dword_1800AC00C;
    goto LABEL_757;
  }
  v545 = (HMODULE *)&unk_1800AC220;
  v546 = 4LL;
  do
  {
    if ( *v545 )
      FreeLibrary(*v545);
    v545 += 3;
    --v546;
  }
  while ( v546 );
  memset_0(&unk_1800AC220, 0, 0x60uLL);
  memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
LABEL_758:
  v1320 = 0;
  v1284 = 0;
  _InterlockedExchange(&dword_1800AC294, 0);
  v1834 = 0;
  v1719 = 0LL;
  v1720 = 0LL;
  v1721 = 0LL;
  v1713 = 0LL;
  v1714 = 0LL;
  v1835 = 0;
  v1636 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v547 = dword_1800AC00C;
  if ( dword_1800AC00C )
    goto LABEL_804;
  v1335 = 0;
  v1329 = 0;
  v1637 = 0LL;
  v1638 = 0LL;
  v548 = (char *)MemoryAlloc(0x338uLL);
  v1266 = (const WCHAR *)v548;
  if ( !v548 )
    goto LABEL_794;
  v549 = 0;
  v550 = 103LL;
  v1519 = 0;
  v551 = 0;
  v1518 = 0;
  v552 = 0;
  v553 = v548 + 7;
  v554 = -1;
  v555 = (unsigned __int8 *)&unk_18008EDC2;
  do
  {
    v556 = *(v555 - 1) | (*(v555 - 2) << 8);
    v557 = v555[2] << 8;
    v558 = *v555;
    v555 += 8;
    v559 = *(v555 - 7) | ((v558 | (v556 << 8)) << 8);
    v560 = v559 ^ v552;
    v561 = *(v555 - 3) | ((*(v555 - 4) | ((*(v555 - 5) | v557) << 8)) << 8);
    v562 = v560 ^ v549 ^ v561 ^ 0xAC987321;
    v563 = (__ROL4__(v562, 10) + 4991 * __ROL4__(v562 + 1419157410, 5)) ^ v560;
    v564 = (43881 * __ROR4__(v563 + 133239679, 9) - __ROL4__(v563, 2)) ^ v562;
    v565 = (24670 * v564 - (v564 >> 13) - 123127970) ^ v563;
    v566 = (2033 * __ROL4__(v565 ^ 0xAB69, 6) - __ROL4__(v565, 2)) ^ v564;
    v567 = (133239679 - (v566 ^ 0xAB69605E)) ^ v565;
    v568 = (43881 * (v567 ^ 0x137F)) ^ __ROR4__(v567, 6) ^ v566;
    v569 = (__ROL4__(v568, 2) + 24670 * __ROR4__(v568 + 133239679, 15)) ^ v567;
    v570 = (2033 * __ROR4__(v569 + 1419157410, 14) - __ROL4__(v569, 8)) ^ v568;
    v571 = __ROR4__(v570, 10) ^ (4991 * __ROR4__(v570 ^ 0xAB69605E, 12)) ^ v569;
    v572 = (v571 >> 10) ^ (43881 * (v571 ^ 0x7F1)) ^ v570;
    v573 = (2033 * (__ROR4__(~v572, 5) + 24670)) ^ v571;
    v574 = v572 ^ (v573 - 2033) ^ 0xAB69605E;
    v575 = ((v574 >> 2) + 4991 * __ROL4__(v572 ^ (v573 - 2033) ^ 0xAB6967AF, 2)) ^ v573;
    v576 = (__ROL4__(v575, 7) + 43881 * __ROR4__(v575 - 133239679, 6)) ^ v574;
    v577 = (24670 * (v576 ^ 0x137F) + __ROR4__(v576, 9)) ^ v575;
    v578 = (__ROL4__(v577, 7) + 2033 * __ROL4__(v577 ^ 0xAB69, 5)) ^ v576;
    v579 = v577 ^ v578 ^ 0xAC987321;
    v580 = (4991 * __ROR4__(v579, 3) - 219010071) ^ v578;
    v581 = (24670 * __ROR4__(v580 - 133239679, 1) - __ROR4__(v580, 6)) ^ v579;
    v582 = (__ROL4__(v581, 14) + 2033 * __ROL4__(v581 - 1419157410, 3)) ^ v580;
    v583 = (4991 * __ROL4__(v582 - 1419157410, 15) - __ROR4__(v582, 14)) ^ v581;
    v584 = (v583 >> 3) ^ (43881 * (v583 ^ 0x605E)) ^ v582;
    v1518 = v554 ^ v584;
    v554 = v561;
    v585 = v551 ^ __ROL4__(v584, 2) ^ (24670 * __ROL4__(v584 ^ 0x7F1137F, 4));
    v551 = v559;
    v1519 = v585 ^ v583;
    *(v553 - 4) = v585 ^ v583;
    v1519 = __ROR4__(v1519, 8);
    *v553 = v1518;
    v553 += 8;
    v1518 = __ROR4__(v1518, 8);
    *(v553 - 13) = v1519;
    v1519 = __ROR4__(v1519, 8);
    *(v553 - 9) = v1518;
    v1518 = __ROR4__(v1518, 8);
    *(v553 - 14) = v1519;
    v1519 = __ROR4__(v1519, 8);
    *(v553 - 10) = v1518;
    v1518 = __ROR4__(v1518, 8);
    *(v553 - 15) = v1519;
    *(v553 - 11) = v1518;
    v552 = __ROR4__(v1519, 8);
    v549 = __ROR4__(v1518, 8);
    v1519 = v552;
    v1518 = v549;
    --v550;
  }
  while ( v550 );
  v586 = 0;
  v2 = 0;
  v487 = v1298;
  v587 = 0LL;
  v84 = v1398;
  v588 = 0;
  v589 = (WCHAR *)v1266;
  do
    v586 ^= *((_BYTE *)v1266 + v587++);
  while ( v587 < 0x338 );
  if ( v586 == 64LL )
  {
    v1637 = v1266;
    v590 = 0;
    v589 = 0LL;
    v1638 = 824LL;
  }
  else
  {
    v590 = -1073425151;
  }
  if ( v589 )
    MemoryFree(v589);
  if ( v590 >= 0 )
  {
    v591 = v1637;
    HIBYTE(v1637[v1638 / 2 - 1]) = 0;
    memset_0(&unk_1800AC220, 0, 0x60uLL);
    while ( *(_BYTE *)v591 )
    {
      v592 = v591;
      v593 = -1LL;
      do
        ++v593;
      while ( v591[v593] );
      v594 = &v591[v593];
      v1267 = (char *)&unk_1800AC220 + 24 * v1329;
      if ( !GetModuleHandleExW(0, v592, (HMODULE *)v1267) )
        goto LABEL_794;
      v595 = (HMODULE *)((char *)&unk_1800AC220 + 24 * v1329);
      v588 = 0;
      if ( **(_WORD **)v1267 == 23117
        && (v596 = *(int *)(*(_QWORD *)v1267 + 60LL), (unsigned int)v596 < 0x10000000)
        && (v597 = *(_QWORD *)v1267 + v596, v597 >= *(_QWORD *)v1267)
        && *(_DWORD *)v597 == 17744 )
      {
        if ( ((*(_WORD *)(v597 + 24) - 267) & 0xFEFF) != 0 )
        {
          v588 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v1267 + 12) = *(_QWORD *)(v597 + 136);
          *((_DWORD *)v1267 + 2) = *(_DWORD *)(v597 + 80);
        }
      }
      else
      {
        v588 = -1073741701;
      }
      v598 = *(_DWORD *)(v594 + 1);
      v599 = 0;
      v591 = v594 + 3;
      v1447 = v598;
      for ( jj = 0; v599 < v1447; jj = v599 )
      {
        v600 = (const CHAR *)v591;
        v601 = -1LL;
        do
          ++v601;
        while ( *((_BYTE *)v591 + v601) );
        v591 = (LPCWSTR)((char *)v591 + v601 + 1);
        if ( v588 >= 0 )
        {
          v602 = GetProcAddress(*v595, v600);
          if ( !v602 )
            goto LABEL_795;
          v595 = (HMODULE *)((char *)&unk_1800AC220 + 24 * v1329);
          off_1800AB000[v1335] = v602;
          v599 = jj;
        }
        ++v1335;
        ++v599;
      }
      ++v1329;
    }
  }
  else
  {
LABEL_794:
    v588 = -1073741702;
  }
LABEL_795:
  if ( v1637 )
  {
    v603 = GetProcessHeap();
    HeapFree(v603, 0, (LPVOID)v1637);
  }
  if ( v588 >= 0 )
  {
    v547 = dword_1800AC00C;
LABEL_804:
    dword_1800AC00C = v547 + 1;
    goto LABEL_805;
  }
  v604 = (HMODULE *)&unk_1800AC220;
  v605 = 4LL;
  do
  {
    if ( *v604 )
      FreeLibrary(*v604);
    v604 += 3;
    --v605;
  }
  while ( v605 );
  memset_0(&unk_1800AC220, 0, 0x60uLL);
  memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
LABEL_805:
  _InterlockedExchange(&dword_1800AC294, 0);
  memset_0(&v1759, 0, 0x70uLL);
  v1703 = 0LL;
  v1448 = v487 & 0xF;
  LOWORD(v1834) = (v487 >> 4) & 0xF;
  HIWORD(v1834) = (v487 >> 8) & 0xF;
  v1835 = (v487 >> 12) & 0xF;
  v1268 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0F8[0])(0LL, 0LL, 1027LL);
  v1300 = -1;
  if ( v1268 )
  {
    v1640 = 0LL;
    v608 = 0LL;
    v1641 = 0LL;
    v1639 = 0LL;
    v1642 = 0LL;
    v607 = 0;
    v1643 = 0LL;
    v1576 = 0LL;
    v1336 = 0;
    v1520 = 0;
    if ( !((unsigned int (__fastcall *)(__int64, _DWORD *, _QWORD, unsigned int *))off_1800AB0A0[0])(
            8LL,
            v1521,
            0LL,
            &v1520) )
      goto LABEL_829;
    v609 = MemoryAlloc(2LL * v1520);
    SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1643, v609);
    if ( !v1643
      || (v610 = MemoryAlloc(4LL * (unsigned int)(v1521[0] + 1)),
          SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1576, v610),
          (v611 = v1576) == 0LL) )
    {
      v607 = -2147024882;
      goto LABEL_821;
    }
    if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, __int64, unsigned int *))off_1800AB0A0[0])(
           8LL,
           v1521,
           v1643,
           &v1520) )
    {
      v612 = v611;
      if ( v1521[0] )
      {
        v613 = v1643;
        v614 = v611;
        v615 = 0;
        do
        {
          *v614 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800AB0B0[0])(v613, 0LL);
          v616 = -1LL;
          do
            ++v616;
          while ( *(_WORD *)(v613 + 2 * v616) );
          ++v614;
          v613 += 2 * v616 + 2;
          ++v615;
        }
        while ( v615 < v1521[0] );
        v84 = v1398;
        v607 = 0;
        v1576 = v614;
        v612 = v614;
      }
      *v612 = 1033;
      v608 = v611;
      v1576 = 0LL;
      v1336 = v1521[0] + 1;
      v1639 = v611;
    }
    else
    {
LABEL_829:
      v622 = GetLastError();
      v607 = v622;
      if ( v622 > 0 )
        v607 = (unsigned __int16)v622 | 0x80070000;
      if ( v607 >= 0 )
        v607 = -2147467259;
    }
LABEL_821:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1576);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1643);
    if ( v607 < 0 )
    {
      v628 = v1721;
      v1366 = v1720;
      v1355 = v1719;
      v1380 = (unsigned __int16 *)v1721;
    }
    else
    {
      v617 = 0;
      v618 = 0;
      v1292 = 0;
      if ( v1336 )
      {
        v619 = 0LL;
        while ( 2 )
        {
          v620 = 0;
          v621 = &dword_18009D690;
          do
          {
            if ( v608[v619] == *v621 )
            {
              v617 = v620;
              v1292 = v620;
              goto LABEL_835;
            }
            ++v620;
            ++v621;
          }
          while ( v620 < 0x26 );
          ++v618;
          ++v619;
          if ( v618 < v1336 )
            continue;
          break;
        }
      }
LABEL_835:
      v623 = v617;
      v1330 = 0;
      if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1800AB0A8[0])(
             *((unsigned int *)&dword_18009D690 + v617),
             v1836,
             85LL)
        && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1800AB090[0])(v1836, 88LL, &v1789) > 0 )
      {
        v1330 = (v1790 >> 27) & 1;
      }
      v624 = L"Segoe UI Light";
      v625 = 19LL;
      v626 = (const wchar_t **)v1833;
      do
      {
        *v626 = v624;
        v627 = -1LL;
        do
          ++v627;
        while ( v624[v627] );
        ++v626;
        v624 += v627 + 1;
        --v625;
      }
      while ( v625 );
      v1355 = (unsigned __int16 *)v1833[*((unsigned __int8 *)&unk_18008F6D0 + 3 * v623)];
      v1719 = v1355;
      v1366 = (unsigned __int16 *)v1833[(unsigned __int8)byte_18008F6D1[3 * v623]];
      v1720 = v1366;
      v628 = (char *)v1833[(unsigned __int8)byte_18008F6D2[3 * v623]];
      v1380 = (unsigned __int16 *)v628;
      v1721 = v628;
      v629 = (char *)MemoryAlloc(0x1C90uLL);
      v1341 = v629;
      if ( v629 )
      {
        v630 = v629 + 7;
        v631 = 0;
        v632 = 0;
        v1523 = 0;
        v633 = 0;
        v634 = (unsigned __int8 *)&unk_18009B9F2;
        v635 = -1;
        v636 = 914LL;
        do
        {
          v637 = *(v634 - 1) | (*(v634 - 2) << 8);
          v638 = v634[2] << 8;
          v639 = *v634;
          v634 += 8;
          v640 = *(v634 - 7) | ((v639 | (v637 << 8)) << 8);
          v641 = v640 ^ v632;
          v642 = *(v634 - 3) | ((*(v634 - 4) | ((*(v634 - 5) | v638) << 8)) << 8);
          v643 = v641 ^ v642 ^ v631 ^ 0xAC987321;
          v644 = (__ROL4__(v643, 10) + 4991 * __ROL4__(v643 + 1419157410, 5)) ^ v641;
          v645 = (43881 * __ROR4__(v644 + 133239679, 9) - __ROL4__(v644, 2)) ^ v643;
          v646 = (24670 * v645 - (v645 >> 13) - 123127970) ^ v644;
          v647 = (2033 * __ROL4__(v646 ^ 0xAB69, 6) - __ROL4__(v646, 2)) ^ v645;
          v648 = (133239679 - (v647 ^ 0xAB69605E)) ^ v646;
          v649 = (43881 * (v648 ^ 0x137F)) ^ __ROR4__(v648, 6) ^ v647;
          v650 = (__ROL4__(v649, 2) + 24670 * __ROR4__(v649 + 133239679, 15)) ^ v648;
          v651 = (2033 * __ROR4__(v650 + 1419157410, 14) - __ROL4__(v650, 8)) ^ v649;
          v652 = __ROR4__(v651, 10) ^ (4991 * __ROR4__(v651 ^ 0xAB69605E, 12)) ^ v650;
          v653 = (v652 >> 10) ^ (43881 * (v652 ^ 0x7F1)) ^ v651;
          v654 = (2033 * (__ROR4__(~v653, 5) + 24670)) ^ v652;
          v655 = v653 ^ (v654 - 2033) ^ 0xAB69605E;
          v656 = ((v655 >> 2) + 4991 * __ROL4__(v653 ^ (v654 - 2033) ^ 0xAB6967AF, 2)) ^ v654;
          v657 = (__ROL4__(v656, 7) + 43881 * __ROR4__(v656 - 133239679, 6)) ^ v655;
          v658 = (24670 * (v657 ^ 0x137F) + __ROR4__(v657, 9)) ^ v656;
          v659 = (__ROL4__(v658, 7) + 2033 * __ROL4__(v658 ^ 0xAB69, 5)) ^ v657;
          v660 = v658 ^ v659 ^ 0xAC987321;
          v661 = (4991 * __ROR4__(v660, 3) - 219010071) ^ v659;
          v662 = (24670 * __ROR4__(v661 - 133239679, 1) - __ROR4__(v661, 6)) ^ v660;
          v663 = (__ROL4__(v662, 14) + 2033 * __ROL4__(v662 - 1419157410, 3)) ^ v661;
          v664 = (4991 * __ROL4__(v663 - 1419157410, 15) - __ROR4__(v663, 14)) ^ v662;
          v665 = (v664 >> 3) ^ (43881 * (v664 ^ 0x605E)) ^ v663;
          v1523 = v635 ^ v665;
          v635 = v642;
          v666 = v633 ^ __ROL4__(v665, 2) ^ (24670 * __ROL4__(v665 ^ 0x7F1137F, 4));
          v633 = v640;
          v667 = v666 ^ v664;
          *(v630 - 4) = v667;
          v1376 = __ROR4__(v667, 8);
          *v630 = v1523;
          v630 += 8;
          v1523 = __ROR4__(v1523, 8);
          *(v630 - 13) = v1376;
          v1377 = __ROR4__(v1376, 8);
          *(v630 - 9) = v1523;
          v1523 = __ROR4__(v1523, 8);
          *(v630 - 14) = v1377;
          v1378 = __ROR4__(v1377, 8);
          *(v630 - 10) = v1523;
          v1523 = __ROR4__(v1523, 8);
          *(v630 - 15) = v1378;
          *(v630 - 11) = v1523;
          v632 = __ROR4__(v1378, 8);
          v631 = __ROR4__(v1523, 8);
          v1375 = v632;
          v1523 = v631;
          --v636;
        }
        while ( v636 );
        v84 = v1398;
        v2 = 0;
        v607 = 0;
        v668 = 0LL;
        v669 = v1341;
        v670 = 0LL;
        do
        {
          v671 = _mm_loadu_si128((const __m128i *)&v1341[v668]);
          v668 += 16LL;
          v672 = _mm_xor_si128(v671, v670);
          v670 = v672;
        }
        while ( v668 < 0x1C90 );
        v673 = _mm_xor_si128(v672, _mm_srli_si128(v672, 8));
        v674 = _mm_xor_si128(v673, _mm_srli_si128(v673, 4));
        v675 = _mm_xor_si128(v674, _mm_srli_si128(v674, 2));
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v675, _mm_srli_si128(v675, 1))) == 127LL )
        {
          v1640 = v1341;
          v669 = 0LL;
          v1641 = 7312LL;
        }
        else
        {
          v607 = -1073425151;
        }
        if ( v669 )
          MemoryFree(v669);
        if ( v607 >= 0 )
        {
          v676 = v1640;
          v677 = v1830;
          v678 = 6LL;
          do
          {
            for ( kk = 0; kk < 0x26; ++kk )
            {
              if ( v1292 == kk )
                *v677 = v676;
              v680 = -1LL;
              do
                ++v680;
              while ( v676[v680] );
              v676 += v680 + 1;
            }
            ++v677;
            --v678;
          }
          while ( v678 );
          v681 = MemoryAlloc(0x18uLL);
          SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1642, v681);
          v682 = v1642;
          if ( v1642 )
          {
            v1410 = 0;
            *v1642 = 0LL;
            v683 = (__int16 *)&v1834;
            v682[1] = 0LL;
            v684 = 0;
            v682[2] = 0LL;
            v685 = v682;
            v1342 = v682;
            v1337 = &v1834;
            while ( 2 )
            {
              v686 = *v683;
              v687 = &unk_18009D728;
              v688 = 0LL;
              while ( v686 != *v687 )
              {
                v688 = (unsigned int)(v688 + 1);
                ++v687;
                if ( (unsigned int)v688 >= 6 )
                  goto LABEL_878;
              }
              v689 = v1830[v688];
              v690 = -1LL;
              do
                ++v690;
              while ( *(_BYTE *)(v689 + v690) );
              v691 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1800AB0C0[0])(
                       65001LL,
                       0LL,
                       v689,
                       (unsigned int)(v690 + 1),
                       0LL,
                       0);
              v1420 = v691;
              if ( !v691 )
                goto LABEL_881;
              v692 = MemoryAlloc(2LL * v691);
              *v1342 = v692;
              if ( !v692 )
              {
                v607 = -2147024882;
                goto LABEL_885;
              }
              v693 = -1LL;
              do
                ++v693;
              while ( *(_BYTE *)(v689 + v693) );
              if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1800AB0C0[0])(
                      65001LL,
                      0LL,
                      v689,
                      (unsigned int)(v693 + 1),
                      v692,
                      v1420) )
              {
LABEL_881:
                v695 = GetLastError();
                v607 = v695;
                if ( v695 > 0 )
                  v607 = (unsigned __int16)v695 | 0x80070000;
                if ( v607 >= 0 )
                  v607 = -2147467259;
                goto LABEL_885;
              }
              v685 = v1342;
              v684 = v1410;
LABEL_878:
              ++v684;
              v683 = (__int16 *)v1337 + 1;
              v1410 = v684;
              ++v685;
              v1337 = (int *)((char *)v1337 + 2);
              v1342 = v685;
              if ( v684 < 3 )
                continue;
              break;
            }
            v694 = (void **)v682;
            v682 = 0LL;
            v1636 = v694;
            v1759 = v1330;
            v1642 = 0LL;
LABEL_885:
            if ( v682 )
            {
              v696 = 3LL;
              do
              {
                v697 = (_WORD *)*v682;
                if ( *v682 )
                {
                  v698 = -1LL;
                  do
                    ++v698;
                  while ( v697[v698] );
                  memset(v697, 0, 2 * v698 + 2);
                  MemoryFree((void *)*v682);
                  v696 = v1302;
                }
                ++v682;
                v1302 = --v696;
              }
              while ( v696 );
            }
          }
          else
          {
            v607 = -2147024882;
          }
        }
        v628 = (char *)v1380;
      }
      else
      {
        v607 = -2147024882;
      }
    }
    if ( v1640 )
      memset(v1640, 0, v1641);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1642);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1640);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1639);
    if ( v607 < 0 )
      goto LABEL_1005;
    v699 = 0;
    v607 = 0;
    v1761 = *v1636;
    v1762 = v1636[1];
    v1763 = v1636[2];
    v1715[1] = 0LL;
    v1715[0] = 16LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD))off_1800AB168)(66LL, 0LL, v1715, 0LL) )
    {
      v699 = BYTE4(v1715[0]) & 1;
    }
    else
    {
      v700 = GetLastError();
      v607 = v700;
      if ( v700 > 0 )
        v607 = (unsigned __int16)v700 | 0x80070000;
      if ( v607 >= 0 )
        v607 = -2147467259;
    }
    v1760 = v699;
    if ( v607 < 0 )
      goto LABEL_1005;
    v701 = 42;
    if ( v1448 != 1 )
    {
      if ( v1448 == 2 )
      {
        v1320 = 15;
        v1284 = 11;
      }
      else if ( v1448 == 3 )
      {
        v701 = 225;
        v1284 = 225;
LABEL_910:
        v1320 = v701;
      }
      v702 = 96;
      v1421 = 96;
      memset_0(v1826, 0, 0xDCuLL);
      v1827 = 220;
      if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1800AB0E0[0])(0LL, 0xFFFFFFFFLL, v1826) )
      {
        v702 = v1828;
        v1713 = 0LL;
        v1714 = v1829;
        if ( v1828 < 0x60u )
          v702 = 96;
        v1421 = v702;
      }
      if ( v1448 == 1 )
        v628 = (char *)v1355;
      memset_0(v1817, 0, 0x5CuLL);
      v607 = 0;
      v1343 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0F8[0])(0LL, 0LL, 1027LL);
      if ( !v1343 )
        goto LABEL_923;
      v703 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0B8[0])(v1320, v702, 72LL);
      v1817[4] = 400;
      v1818 = 5;
      v1817[0] = -v703;
      StringCchCopyW((char *)&v1819, 32LL, v628);
      v704 = ((__int64 (__fastcall *)(_DWORD *))off_1800AB020[0])(v1817);
      if ( v704 )
      {
        v1764 = (void *)v704;
      }
      else
      {
        v705 = GetLastError();
        v607 = v705;
        if ( v705 > 0 )
          v607 = (unsigned __int16)v705 | 0x80070000;
        if ( v607 >= 0 )
          v607 = -2147467259;
      }
      ((void (__fastcall *)(_QWORD, LPVOID))off_1800AB160[0])(0LL, v1343);
      if ( v607 < 0 )
        goto LABEL_1005;
      v707 = v1380;
      if ( v1448 == 1 )
        v707 = v1355;
      v1381 = v707;
      memset_0(v1820, 0, 0x5CuLL);
      v607 = 0;
      v708 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0F8[0])(0LL, 0LL, 1027LL);
      if ( !v708 )
        goto LABEL_923;
      v709 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0B8[0])(v1284, v702, 72LL);
      v1820[4] = 400;
      v1820[0] = -v709;
      v1821 = 5;
      StringCchCopyW((char *)&v1822, 32LL, (char *)v1381);
      v710 = ((__int64 (__fastcall *)(_DWORD *))off_1800AB020[0])(v1820);
      if ( v710 )
      {
        v1765 = (void *)v710;
      }
      else
      {
        v711 = GetLastError();
        v607 = v711;
        if ( v711 > 0 )
          v607 = (unsigned __int16)v711 | 0x80070000;
        if ( v607 >= 0 )
          v607 = -2147467259;
      }
      ((void (__fastcall *)(_QWORD, __int64))off_1800AB160[0])(0LL, v708);
      if ( v607 < 0 )
        goto LABEL_1005;
      v712 = 0;
      v713 = 0;
      if ( v1448 != 1 )
      {
        if ( v1448 == 2 )
        {
          v713 = 0;
          v712 = (int)v1714 / 4;
LABEL_943:
          v1704 = __PAIR64__(v713, v712);
          if ( v1448 == 1 )
          {
            v714 = 150;
            v1338 = 32;
          }
          else
          {
            if ( (unsigned int)(v1448 - 2) > 1 )
            {
              v714 = v1375;
              v1338 = v1375;
              v715 = v1375;
LABEL_950:
              v1321 = v714;
              v1285 = v715;
              v716 = v712 - v714 - v715;
              v607 = 0;
              v717 = v1761;
              DWORD2(v1769) = v716;
              DWORD2(v1768) = v716;
              v1344 = (LPVOID)((__int64 (__fastcall *)(void *, void *))off_1800AB078)(v1268, v1764);
              if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, __int128 *, int, _QWORD))off_1800AB0D8)(
                                    v1268,
                                    v717,
                                    0xFFFFFFFFLL,
                                    &v1768,
                                    3152,
                                    0LL) )
                v607 = -2147467259;
              if ( v1344 )
                ((void (__fastcall *)(void *, LPVOID))off_1800AB078)(v1268, v1344);
              if ( v607 < 0 )
                goto LABEL_1005;
              v607 = 0;
              v718 = v1762;
              v1345 = (LPVOID)((__int64 (__fastcall *)(void *, void *))off_1800AB078)(v1268, v1765);
              if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, __int128 *, int, _QWORD))off_1800AB0D8)(
                                    v1268,
                                    v718,
                                    0xFFFFFFFFLL,
                                    &v1769,
                                    3152,
                                    0LL) )
                v607 = -2147467259;
              if ( v1345 )
                ((void (__fastcall *)(void *, LPVOID))off_1800AB078)(v1268, v1345);
              if ( v607 < 0 )
                goto LABEL_1005;
              if ( (unsigned int)(v1448 - 2) <= 1 )
              {
                v716 = DWORD2(v1769);
                if ( SDWORD2(v1768) > SDWORD2(v1769) )
                  v716 = DWORD2(v1768);
              }
              if ( v1759 )
              {
                off_1800AB150((HAM_ACTIVITY_RM_CONTEXT *)&v1768, (void *)(v716 + v1285 - DWORD2(v1768)));
                v719 = v716 + v1285 - DWORD2(v1769);
              }
              else
              {
                off_1800AB150((HAM_ACTIVITY_RM_CONTEXT *)&v1768, (void *)v1321);
                v719 = v1321;
              }
              ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_1800AB150)(
                &v1769,
                v719,
                (unsigned int)(v1338 + HIDWORD(v1768)));
              if ( (unsigned int)(v1448 - 2) <= 1 )
              {
                v1704 = __PAIR64__(HIDWORD(v1769), v716);
                v1767 = -5723992;
                goto LABEL_992;
              }
              if ( v1448 != 1 )
                goto LABEL_992;
              v1767 = 0xFFFFFF;
              memset_0(v1823, 0, 0x5CuLL);
              v607 = 0;
              v720 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0F8[0])(0LL, 0LL, 1027LL);
              if ( v720 )
              {
                v721 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800AB0B8[0])(11LL, v1421);
                v1823[4] = 400;
                v1823[0] = -v721;
                v1824 = 5;
                StringCchCopyW((char *)&v1825, 32LL, (char *)v1366);
                v722 = ((__int64 (__fastcall *)(_DWORD *))off_1800AB020[0])(v1823);
                if ( v722 )
                {
                  v1766 = v722;
                }
                else
                {
                  v723 = GetLastError();
                  v607 = v723;
                  if ( v723 > 0 )
                    v607 = (unsigned __int16)v723 | 0x80070000;
                  if ( v607 >= 0 )
                    v607 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, __int64))off_1800AB160[0])(0LL, v720);
                if ( v607 < 0 )
                  goto LABEL_1005;
                v607 = 0;
                v724 = v1763;
                v1772 = v716;
                v725 = ((__int64 (__fastcall *)(void *, __int64))off_1800AB078)(v1268, v1766);
                if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, unsigned int *, int, _QWORD))off_1800AB0D8)(
                                      v1268,
                                      v724,
                                      0xFFFFFFFFLL,
                                      &v1770,
                                      1120,
                                      0LL) )
                  v607 = -2147467259;
                if ( v725 )
                  ((void (__fastcall *)(void *, __int64))off_1800AB078)(v1268, v725);
                if ( v607 < 0 )
                  goto LABEL_1005;
                v726 = v1772 + 24;
                if ( (int)(v1772 + 24) < 90 )
                  v726 = 90;
                v1772 = v726;
                v1773 = 32;
                v1770 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0B8[0])(v1770, v1421, 96LL);
                v1771 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0B8[0])(v1771, v1421, 96LL);
                v1772 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0B8[0])(v1772, v1421, 96LL);
                v1773 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800AB0B8[0])(v1773, v1421, 96LL);
                if ( v1759 )
                {
                  v727 = (unsigned int)v1768;
                  if ( (int)v1768 >= (int)v1769 )
                    v727 = (unsigned int)v1769;
                }
                else
                {
                  v728 = DWORD2(v1768);
                  if ( SDWORD2(v1768) <= SDWORD2(v1769) )
                    v728 = DWORD2(v1769);
                  v727 = v1770 + v728 - v1772;
                }
                off_1800AB150((HAM_ACTIVITY_RM_CONTEXT *)&v1770, (void *)v727);
LABEL_992:
                v729 = v1759;
                v730 = HIDWORD(v1704);
                v731 = v1704;
                switch ( v1448 )
                {
                  case 1:
                    v1703 = 0LL;
                    goto LABEL_1004;
                  case 2:
                    memset_0(v1794, 0, 0x28uLL);
                    v735 = (HAM_ACTIVITY_RM_CONTEXT *)off_1800AB148[0](0LL, (void *)1);
                    v1794[0] = 40;
                    if ( !(unsigned int)off_1800AB108(v735, v1794) )
                    {
LABEL_1004:
                      v607 = 0;
LABEL_1005:
                      ((void (__fastcall *)(_QWORD, void *))off_1800AB160[0])(0LL, v1268);
                      goto LABEL_1006;
                    }
                    off_1800AB140[0](0LL, &v1795);
                    off_1800AB140[0](0LL, v1796);
                    if ( v729 )
                      v733 = v1795 + 5 * v1796[0] / 100;
                    else
                      v733 = 95 * (v1796[0] - v731) / 100;
                    v734 = 95 * (v1796[1] - v730);
                    break;
                  case 3:
                    memset_0(v1791, 0, 0x28uLL);
                    v732 = (HAM_ACTIVITY_RM_CONTEXT *)off_1800AB148[0](0LL, (void *)1);
                    v1791[0] = 40;
                    if ( !(unsigned int)off_1800AB108(v732, v1791) )
                      goto LABEL_1004;
                    off_1800AB140[0](0LL, &v1792);
                    off_1800AB140[0](0LL, v1793);
                    v733 = 50 * (v1793[0] - v731) / 100;
                    v734 = 50 * (v1793[1] - v730);
                    break;
                  default:
                    goto LABEL_1004;
                }
                LODWORD(v1703) = v733;
                HIDWORD(v1703) = v734 / 100;
                goto LABEL_1004;
              }
LABEL_923:
              v706 = GetLastError();
              v607 = v706;
              if ( v706 > 0 )
                v607 = (unsigned __int16)v706 | 0x80070000;
              if ( v607 >= 0 )
                v607 = -2147467259;
              goto LABEL_1005;
            }
            v714 = 0;
            v1338 = 0;
          }
          v715 = 0;
          goto LABEL_950;
        }
        if ( v1448 != 3 )
          goto LABEL_943;
      }
      v712 = v1714;
      v713 = HIDWORD(v1714);
      goto LABEL_943;
    }
    v1284 = 11;
    goto LABEL_910;
  }
  v606 = GetLastError();
  v607 = v606;
  if ( v606 > 0 )
    v607 = (unsigned __int16)v606 | 0x80070000;
  if ( v607 >= 0 )
    v607 = -2147467259;
LABEL_1006:
  v736 = 1;
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v737 = dword_1800AC00C;
  if ( dword_1800AC00C > 0 )
  {
    --dword_1800AC00C;
    if ( v737 == 1 )
    {
      v738 = 4LL;
      v739 = (HMODULE *)&unk_1800AC220;
      do
      {
        if ( *v739 )
          FreeLibrary(*v739);
        v739 += 3;
        --v738;
      }
      while ( v738 );
      memset_0(&unk_1800AC220, 0, 0x60uLL);
      memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
      v736 = 1;
    }
  }
  _InterlockedExchange(&dword_1800AC294, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1636);
  if ( v607 < 0 )
    goto LABEL_1209;
  v740 = v1703;
  v1646 = v1703;
  memset_0(v1732, 0, 0x68uLL);
  v741 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64))off_1800AB050[0])(v1405, 7LL);
  if ( !v741
    || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v741, 104LL, v1732)
    || v1735 != 32
    || !v1736
    || v1733 <= 0
    || v1734 <= 0 )
  {
    v736 = 0;
  }
  v1514 = v736;
  v742 = v736 == 0;
  v743 = v1448;
  if ( !v742 || v1448 == 1 )
  {
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800AB150)(&v1768, v740, HIDWORD(v1646));
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800AB150)(&v1769, v740, HIDWORD(v1646));
    if ( v1448 == 1 )
      v1431 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1800AB028[0])(v1760 == 0 ? 0xB26720 : 0);
  }
  v1411 = off_1800AB080(v1405, (void *)1);
  v744 = 2064;
  if ( v1759 )
    v744 = 133138;
  v1422 = v744;
  if ( !v1514 )
  {
    if ( v1760 || (v806 = -64, v1448 == 1) )
      v806 = -1;
    LOWORD(v1326) = 0;
    BYTE2(v1326) = v806;
    v1718 = 0uLL;
    v1694 = 0uLL;
    HIBYTE(v1326) = 1;
    v1391 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB010[0])(v1405);
    if ( !v1391 )
      goto LABEL_1116;
    if ( v1448 == 1 )
    {
      v807 = 0;
      v808 = DWORD2(v1769) - v1769;
      v809 = 0;
      if ( DWORD2(v1769) - (int)v1769 <= DWORD2(v1768) - (int)v1768 )
        v808 = DWORD2(v1768) - v1768;
      v810 = HIDWORD(v1769) - DWORD1(v1768);
      v1288 = HIDWORD(v1769) - DWORD1(v1768);
      if ( v1759 )
      {
        v807 = v808 + v1768 - DWORD2(v1768);
        v809 = v808 + v1769 - DWORD2(v1769);
        LODWORD(v1718) = v807;
        LODWORD(v1694) = v809;
      }
      v1294 = v809 + DWORD2(v1769) - v1769;
      DWORD2(v1694) = v1294;
      v811 = v807 + DWORD2(v1768) - v1768;
      DWORD2(v1718) = v811;
      v1332 = DWORD1(v1769) - DWORD1(v1768);
      DWORD1(v1694) = DWORD1(v1769) - DWORD1(v1768);
      v1384 = HIDWORD(v1769) - DWORD1(v1768);
      HIDWORD(v1694) = HIDWORD(v1769) - DWORD1(v1768);
      v743 = v1448;
      v1339 = HIDWORD(v1768) - DWORD1(v1768);
      HIDWORD(v1718) = HIDWORD(v1768) - DWORD1(v1768);
    }
    else
    {
      v810 = HIDWORD(v1704);
      v808 = v1704;
      v1718 = v1768;
      v811 = DWORD2(v1768);
      v1339 = HIDWORD(v1768);
      v1694 = v1769;
      v1384 = HIDWORD(v1769);
      v1294 = DWORD2(v1769);
      v1332 = DWORD1(v1769);
      v1288 = HIDWORD(v1704);
    }
    v1649 = 0LL;
    v1797[2] = -v810;
    v1799 = 0LL;
    v1798 = 0LL;
    v1800 = 0;
    v1797[0] = 40;
    v1797[1] = v808;
    v1797[3] = 2097153;
    v812 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800AB018[0])(
             v1391,
             v1797,
             0LL,
             &v1649,
             0LL,
             0);
    v1415 = v812;
    if ( !v812 )
    {
      GetLastError();
LABEL_1205:
      if ( v1391 )
        ((void (__fastcall *)(SIZE_T))off_1800AB030[0])(v1391);
      goto LABEL_1207;
    }
    ((void (__fastcall *)(SIZE_T, __int64))off_1800AB078)(v1391, v812);
    if ( v743 == 1 && v1431 )
    {
      v1780 = 0LL;
      v1782 = v1288;
      v1781 = v808;
      ((void (__fastcall *)(SIZE_T, __int64 *))off_1800AB0E8[0])(v1391, &v1780);
    }
    v813 = v1761;
    v1371 = v1760;
    v1350 = v1764;
    v1434 = v1761;
    memset_0(v1749, 0, 0x68uLL);
    memset_0(v1730, 0, 0x68uLL);
    v1458 = 0LL;
    v1358 = 0;
    v1307 = 0;
    memset_0(v1809, 0, 0x2CuLL);
    v1783 = 0LL;
    v1784 = 0LL;
    if ( v813 )
    {
      v814 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800AB050[0])(v1391, 7LL);
      if ( v814 )
      {
        if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v814, 104LL, v1749) )
        {
          v1458 = v1752;
          v1358 = v1750;
          v1307 = v1751;
        }
        v1459 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(SIZE_T))off_1800AB010[0])(v1391);
        if ( v1459 )
        {
          v815 = v811 - v1718;
          v1809[2] = DWORD1(v1718) - v1339;
          v816 = 0;
          v1653 = 0LL;
          v1810 = 0LL;
          v1811 = 0LL;
          v1812 = 0;
          v1809[0] = 40;
          v1809[1] = v815;
          v1809[3] = 2097153;
          v817 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800AB018[0])(
                   v1459,
                   v1809,
                   0LL,
                   &v1653,
                   0LL,
                   0);
          v1449 = (void *)v817;
          if ( v817 )
          {
            v819 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v817, 104LL, v1730);
            v820 = 0LL;
            LODWORD(v1784) = v815;
            if ( v819 )
              v820 = v1731;
            v821 = v1459;
            HIDWORD(v1784) = v1339 - DWORD1(v1718);
            v1440 = v820;
            ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *))off_1800AB078)(v1459, v1449);
            off_1800AB080(v821, (void *)1);
            v1351 = (LPVOID)((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v821, v1350);
            v822 = ((__int64 (__fastcall *)(_QWORD))off_1800AB070[0])(0LL);
            ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64 *, __int64))off_1800AB0E8[0])(v821, &v1783, v822);
            ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *, __int64, __int64 *, int, _QWORD))off_1800AB0D8)(
              v821,
              v1434,
              0xFFFFFFFFLL,
              &v1783,
              v1422,
              0LL);
            if ( v1448 == 1 )
            {
              if ( v1371 )
                v1372 = ((__int64 (__fastcall *)(__int64))off_1800AB118[0])(8LL);
              else
                v1372 = 0xFFFFFF;
            }
            else
            {
              v1372 = -5723992;
            }
            v823 = 0;
            v824 = -(int)v1718;
            v825 = 0;
            if ( (int)v1718 >= 0 )
            {
              v823 = v1718;
              v824 = 0;
            }
            v826 = -DWORD1(v1718);
            if ( (SDWORD1(v1718) & 0x80000000) == 0 )
            {
              v825 = DWORD1(v1718);
              v826 = 0;
            }
            v827 = v1784 - v824;
            if ( (int)v1784 - v824 >= v1358 - v823 )
              v827 = v1358 - v823;
            v828 = HIDWORD(v1784) - v826;
            if ( HIDWORD(v1784) - v826 >= v1307 - v825 )
              v828 = v1307 - v825;
            v1308 = v828;
            if ( v827 > 0 && v828 > 0 )
            {
              v829 = v824;
              v830 = v1358;
              v831 = (unsigned __int8 *)&v1440[4 * v829 + 4 * (int)v1784 * v826];
              v832 = v1358 * v825;
              v1441 = v831;
              v1359 = 0;
              v833 = (char *)v1458 + 4 * v823 + 4 * v832;
              v1435 = 4LL * (int)v1784;
              v1424 = (void *)(4 * v830);
              v1458 = v833;
              do
              {
                v1340 = 0;
                v834 = 0;
                v835 = v831 + 2;
                v836 = (char *)(v833 - (char *)v831);
                do
                {
                  if ( (unsigned __int8)((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2) != 0xFF )
                  {
                    v837 = (unsigned __int8)~((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2);
                    v835[(_QWORD)v836] -= ~((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2)
                                        * (v1372 - v835[(_QWORD)v836]);
                    v838 = v835[(_QWORD)v836 - 1];
                    v839 = (unsigned __int64)(2155905153LL * v837 * (BYTE1(v1372) - v838)) >> 32;
                    v835[(_QWORD)v836 - 1] = v838 + (v839 >> 7 < 0) + (v839 >> 7);
                    v840 = v835[(_QWORD)v836 - 2];
                    v841 = (unsigned __int64)(2155905153LL * v837 * (BYTE2(v1372) - v840)) >> 32;
                    v835[(_QWORD)v836 - 2] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
                    v842 = v835[(_QWORD)v836 + 1];
                    v843 = v837 * (255 - v842);
                    v834 = v1340;
                    v835[(_QWORD)v836 + 1] = v842 + v843 / 255;
                  }
                  ++v834;
                  v835 += 4;
                  v1340 = v834;
                }
                while ( v834 < v827 );
                v844 = v1359;
                v831 = &v1441[v1435];
                v833 = (char *)v1458 + (_QWORD)v1424;
                v1441 += v1435;
                v1458 = (char *)v1458 + (_QWORD)v1424;
                ++v1359;
              }
              while ( v844 + 1 < v1308 );
              v84 = v1398;
              v816 = 0;
              v821 = v1459;
            }
            ((void (__fastcall *)(void *))off_1800AB038)(v1449);
            if ( v1351 )
              ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v821, v1351);
          }
          else
          {
            v818 = GetLastError();
            v816 = v818;
            if ( v818 > 0 )
              v816 = (unsigned __int16)v818 | 0x80070000;
            if ( v816 >= 0 )
              v816 = -2147467259;
          }
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB030[0])(v1459);
          if ( v816 < 0 )
            goto LABEL_1203;
          v845 = v1762;
          v1273 = v1760;
          v1425 = v1765;
          v1442 = v1762;
          memset_0(v1753, 0, 0x68uLL);
          memset_0(v1757, 0, 0x68uLL);
          v1450 = 0LL;
          v1309 = 0;
          v1360 = 0;
          memset_0(v1813, 0, 0x2CuLL);
          v1785 = 0LL;
          v1786 = 0LL;
          if ( !v845 )
            goto LABEL_1203;
          v846 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800AB050[0])(v1391, 7LL);
          if ( v846 )
          {
            if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v846, 104LL, v1753) )
            {
              v1450 = v1756;
              v1309 = v1754;
              v1360 = v1755;
            }
            v1459 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(SIZE_T))off_1800AB010[0])(v1391);
            if ( v1459 )
            {
              v847 = v1294 - v1694;
              v848 = 0;
              v1813[2] = v1332 - v1384;
              v1657 = 0LL;
              v1814 = 0LL;
              v1815 = 0LL;
              v1816 = 0;
              v1813[0] = 40;
              v1813[1] = v1294 - v1694;
              v1813[3] = 2097153;
              v849 = (void *)((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800AB018[0])(
                               v1459,
                               v1813,
                               0LL,
                               &v1657,
                               0LL,
                               0);
              v1458 = v849;
              if ( !v849 )
              {
                v850 = GetLastError();
                v848 = v850;
                if ( v850 > 0 )
                  v848 = (unsigned __int16)v850 | 0x80070000;
                if ( v848 >= 0 )
                  v848 = -2147467259;
                goto LABEL_1198;
              }
              v851 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_1800AB068[0])(v849, 104LL, v1757);
              v852 = 0LL;
              LODWORD(v1786) = v847;
              if ( v851 )
                v852 = v1758;
              HIDWORD(v1786) = v1384 - v1332;
              v1436 = v852;
              ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v1459, v1458);
              off_1800AB080(v1459, (void *)1);
              v1426 = (void *)((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *))off_1800AB078)(v1459, v1425);
              v853 = ((__int64 (__fastcall *)(_QWORD))off_1800AB070[0])(0LL);
              ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64 *, __int64))off_1800AB0E8[0])(
                v1459,
                &v1785,
                v853);
              ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *, __int64, __int64 *, int, _QWORD))off_1800AB0D8)(
                v1459,
                v1442,
                0xFFFFFFFFLL,
                &v1785,
                v1422,
                0LL);
              if ( v1448 == 1 )
              {
                if ( !v1273 )
                {
                  v1274 = 0xFFFFFF;
LABEL_1179:
                  v855 = -(int)v1694;
                  v856 = 0;
                  v857 = 0;
                  if ( (int)v1694 >= 0 )
                  {
                    v856 = v1694;
                    v855 = 0;
                  }
                  v858 = -v1332;
                  if ( v1332 >= 0 )
                  {
                    v857 = v1332;
                    v858 = 0;
                  }
                  v859 = v1786 - v855;
                  if ( (int)v1786 - v855 >= v1309 - v856 )
                    v859 = v1309 - v856;
                  v860 = HIDWORD(v1786) - v858;
                  if ( HIDWORD(v1786) - v858 >= v1360 - v857 )
                    v860 = v1360 - v857;
                  if ( v859 > 0 && v860 > 0 )
                  {
                    v861 = (unsigned __int8 *)(v1436 + 4 * (v855 + (__int64)((int)v1786 * v858)));
                    v1443 = v861;
                    v1361 = 0;
                    v862 = &v1450[4 * v856 + 4 * (__int64)(v1309 * v857)];
                    v1437 = 4LL * (int)v1786;
                    v1352 = 4LL * v1309;
                    v1451 = v862;
                    do
                    {
                      v1385 = 0;
                      v863 = 0;
                      v864 = v861 + 2;
                      v865 = v862 - (char *)v861;
                      do
                      {
                        if ( (unsigned __int8)((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2) != 0xFF )
                        {
                          v866 = (unsigned __int8)~((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2);
                          v864[v865] -= ~((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2)
                                      * (v1300 - v864[v865]);
                          v867 = v864[v865 - 1];
                          v868 = (unsigned __int64)(2155905153LL * v866 * (BYTE1(v1274) - v867)) >> 32;
                          v864[v865 - 1] = v867 + (v868 >> 7 < 0) + (v868 >> 7);
                          v869 = v864[v865 - 2];
                          v870 = (unsigned __int64)(2155905153LL * v866 * (BYTE2(v1274) - v869)) >> 32;
                          v864[v865 - 2] = v869 + (v870 >> 7 < 0) + (v870 >> 7);
                          v871 = v864[v865 + 1];
                          v872 = v866 * (255 - v871);
                          v863 = v1385;
                          v864[v865 + 1] = v871 + v872 / 255;
                        }
                        ++v863;
                        v864 += 4;
                        v1385 = v863;
                      }
                      while ( v863 < v859 );
                      v873 = v1361;
                      v861 = &v1443[v1437];
                      v862 = &v1451[v1352];
                      v1443 += v1437;
                      v1451 += v1352;
                      ++v1361;
                    }
                    while ( v873 + 1 < v860 );
                    v84 = v1398;
                    v848 = 0;
                  }
                  ((void (__fastcall *)(LPVOID))off_1800AB038)(v1458);
                  if ( v1426 )
                    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *))off_1800AB078)(v1459, v1426);
LABEL_1198:
                  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB030[0])(v1459);
                  if ( v848 >= 0 )
                  {
                    v805 = v1405;
                    if ( v1448 == 1 )
                      ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, _QWORD, _QWORD, _QWORD, int, SIZE_T, _DWORD, _DWORD, int))off_1800AB000[0])(
                        v1405,
                        (unsigned int)v1768,
                        DWORD1(v1768),
                        v808,
                        v1288,
                        v1391,
                        0,
                        0,
                        13369376);
                    else
                      ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, _QWORD, _QWORD, _QWORD, int, SIZE_T, _DWORD, _DWORD, unsigned int, int, int))off_1800AB040[0])(
                        v1405,
                        (unsigned int)v1703,
                        HIDWORD(v1703),
                        v808,
                        v1288,
                        v1391,
                        0,
                        0,
                        v808,
                        v1288,
                        v1326);
LABEL_1202:
                    off_1800AB080(v805, (void *)v1411);
                  }
                  goto LABEL_1203;
                }
                v854 = ((__int64 (__fastcall *)(__int64))off_1800AB118[0])(8LL);
              }
              else
              {
                v854 = -5723992;
              }
              v1274 = v854;
              v1300 = v854;
              goto LABEL_1179;
            }
          }
        }
      }
      GetLastError();
    }
LABEL_1203:
    if ( v1415 )
      ((void (__fastcall *)(SIZE_T))off_1800AB038)(v1415);
    goto LABEL_1205;
  }
  v745 = v1761;
  v1322 = v1760;
  v1346 = v1764;
  v1269 = v1761;
  memset_0(v1737, 0, 0x68uLL);
  memset_0(v1741, 0, 0x68uLL);
  v1303 = 0LL;
  v1286 = 0;
  v746 = 0;
  memset_0(v1801, 0, 0x2CuLL);
  v1787 = 0LL;
  v1788 = 0LL;
  if ( !v745 )
    goto LABEL_1207;
  v747 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64))off_1800AB050[0])(v1405, 7LL);
  if ( !v747 )
    goto LABEL_1116;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v747, 104LL, v1737) )
  {
    v746 = v1739;
    v1303 = v1740;
    v1286 = v1738;
  }
  v748 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB010[0])(v1405);
  v749 = (HAM_ACTIVITY_RM_CONTEXT *)v748;
  if ( !v748 )
    goto LABEL_1116;
  v1801[1] = DWORD2(v1768) - v1768;
  v750 = 0;
  v1801[2] = DWORD1(v1768) - HIDWORD(v1768);
  v1647 = 0LL;
  v1802 = 0LL;
  v1803 = 0LL;
  v1804 = 0;
  v1801[0] = 40;
  v1801[3] = 2097153;
  v751 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800AB018[0])(
           v748,
           v1801,
           0LL,
           &v1647,
           0LL,
           0);
  v1356 = (unsigned __int16 *)v751;
  if ( v751 )
  {
    v753 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v751, 104LL, v1741);
    v754 = 0LL;
    if ( v753 )
      v754 = v1742;
    LODWORD(v1788) = DWORD2(v1768) - v1768;
    HIDWORD(v1788) = HIDWORD(v1768) - DWORD1(v1768);
    v1367 = v754;
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, unsigned __int16 *))off_1800AB078)(v749, v1356);
    off_1800AB080(v749, (void *)1);
    v1347 = (LPVOID)((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v749, v1346);
    v755 = ((__int64 (__fastcall *)(_QWORD))off_1800AB070[0])(0LL);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64 *, __int64))off_1800AB0E8[0])(v749, &v1787, v755);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *, __int64, __int64 *, int, _QWORD))off_1800AB0D8)(
      v749,
      v1269,
      0xFFFFFFFFLL,
      &v1787,
      v1422,
      0LL);
    if ( v1448 == 1 )
    {
      if ( v1322 )
        v1323 = ((__int64 (__fastcall *)(__int64))off_1800AB118[0])(8LL);
      else
        v1323 = 0xFFFFFF;
    }
    else
    {
      v1323 = -5723992;
    }
    v756 = 0;
    v757 = -(int)v1768;
    v758 = 0;
    if ( (int)v1768 >= 0 )
    {
      v756 = v1768;
      v757 = 0;
    }
    v759 = -DWORD1(v1768);
    if ( (SDWORD1(v1768) & 0x80000000) == 0 )
    {
      v758 = DWORD1(v1768);
      v759 = 0;
    }
    v760 = v1788 - v757;
    if ( (int)v1788 - v757 >= v1286 - v756 )
      v760 = v1286 - v756;
    v761 = HIDWORD(v1788) - v759;
    v762 = v746 - v758;
    if ( HIDWORD(v1788) - v759 >= v762 )
      v761 = v762;
    if ( v760 > 0 && v761 > 0 )
    {
      v1293 = 0;
      v763 = (unsigned __int8 *)&v1367[2 * v757 + 2 * (__int64)(v759 * (int)v1788)];
      v1270 = v763;
      v764 = (char *)(v1303 + 4 * (v756 + (__int64)(v758 * v1286)));
      v1368 = (unsigned __int16 *)(4LL * (int)v1788);
      v1382 = (unsigned __int16 *)(4LL * v1286);
      v1304 = (SIZE_T)v764;
      do
      {
        v1331 = 0;
        v765 = 0;
        v766 = v763 + 2;
        v767 = v764 - (char *)v763;
        do
        {
          if ( (unsigned __int8)((*v766 + *(v766 - 2) + 2 * (unsigned int)*(v766 - 1)) >> 2) != 0xFF )
          {
            v768 = (unsigned __int8)~((*v766 + *(v766 - 2) + 2 * (unsigned int)*(v766 - 1)) >> 2);
            v766[v767] -= ~((*v766 + *(v766 - 2) + 2 * (unsigned int)*(v766 - 1)) >> 2) * (v1323 - v766[v767]);
            v769 = v766[v767 - 1];
            v770 = (unsigned __int64)(2155905153LL * v768 * (BYTE1(v1323) - v769)) >> 32;
            v766[v767 - 1] = v769 + (v770 >> 7 < 0) + (v770 >> 7);
            v771 = v766[v767 - 2];
            v772 = (unsigned __int64)(2155905153LL * v768 * (BYTE2(v1323) - v771)) >> 32;
            v766[v767 - 2] = v771 + (v772 >> 7 < 0) + (v772 >> 7);
            v765 = v1331;
            v766[v767 + 1] += v768 * (255 - v766[v767 + 1]) / 255;
          }
          ++v765;
          v766 += 4;
          v1331 = v765;
        }
        while ( v765 < v760 );
        v773 = v1293;
        v763 = &v1270[(_QWORD)v1368];
        v764 = (char *)v1382 + v1304;
        v1270 = &v1270[(_QWORD)v1368];
        v1304 += (SIZE_T)v1382;
        ++v1293;
      }
      while ( v773 + 1 < v761 );
      v84 = v1398;
      v750 = 0;
    }
    ((void (__fastcall *)(unsigned __int16 *))off_1800AB038)(v1356);
    if ( v1347 )
      ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v749, v1347);
  }
  else
  {
    v752 = GetLastError();
    v750 = v752;
    if ( v752 > 0 )
      v750 = (unsigned __int16)v752 | 0x80070000;
    if ( v750 >= 0 )
      v750 = -2147467259;
  }
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB030[0])(v749);
  if ( v750 < 0 )
    goto LABEL_1207;
  v774 = v1762;
  v1324 = v1760;
  v1348 = v1765;
  v1271 = v1762;
  memset_0(v1743, 0, 0x68uLL);
  memset_0(v1747, 0, 0x68uLL);
  v1305 = 0LL;
  v1287 = 0;
  v775 = 0;
  memset_0(v1805, 0, 0x2CuLL);
  v1778 = 0LL;
  v1779 = 0LL;
  if ( !v774 )
    goto LABEL_1207;
  v776 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64))off_1800AB050[0])(v1405, 7LL);
  if ( !v776 )
    goto LABEL_1116;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v776, 104LL, v1743) )
  {
    v775 = v1745;
    v1305 = v1746;
    v1287 = v1744;
  }
  v777 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB010[0])(v1405);
  v778 = (HAM_ACTIVITY_RM_CONTEXT *)v777;
  if ( !v777 )
  {
LABEL_1116:
    GetLastError();
    goto LABEL_1207;
  }
  v1805[1] = DWORD2(v1769) - v1769;
  v779 = 0;
  v1805[2] = DWORD1(v1769) - HIDWORD(v1769);
  v1648 = 0LL;
  v1806 = 0LL;
  v1807 = 0LL;
  v1808 = 0;
  v1805[0] = 40;
  v1805[3] = 2097153;
  v780 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800AB018[0])(
           v777,
           v1805,
           0LL,
           &v1648,
           0LL,
           0);
  v1357 = (unsigned __int16 *)v780;
  if ( !v780 )
  {
    v781 = GetLastError();
    v779 = v781;
    if ( v781 > 0 )
      v779 = (unsigned __int16)v781 | 0x80070000;
    if ( v779 >= 0 )
      v779 = -2147467259;
    goto LABEL_1104;
  }
  v782 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800AB068[0])(v780, 104LL, v1747);
  v783 = 0LL;
  if ( v782 )
    v783 = v1748;
  LODWORD(v1779) = DWORD2(v1769) - v1769;
  HIDWORD(v1779) = HIDWORD(v1769) - DWORD1(v1769);
  v1369 = v783;
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, unsigned __int16 *))off_1800AB078)(v778, v1357);
  off_1800AB080(v778, (void *)1);
  v1349 = (LPVOID)((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v778, v1348);
  v784 = ((__int64 (__fastcall *)(_QWORD))off_1800AB070[0])(0LL);
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64 *, __int64))off_1800AB0E8[0])(v778, &v1778, v784);
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *, __int64, __int64 *, int, _QWORD))off_1800AB0D8)(
    v778,
    v1271,
    0xFFFFFFFFLL,
    &v1778,
    v1422,
    0LL);
  if ( v1448 == 1 )
  {
    if ( v1324 )
    {
      v785 = ((__int64 (__fastcall *)(__int64))off_1800AB118[0])(8LL);
      goto LABEL_1084;
    }
    v1423 = 0xFFFFFF;
  }
  else
  {
    v785 = -5723992;
LABEL_1084:
    v1423 = v785;
    v1300 = v785;
  }
  v786 = 0;
  v787 = -(int)v1769;
  v788 = 0;
  if ( (int)v1769 >= 0 )
  {
    v786 = v1769;
    v787 = 0;
  }
  v789 = -DWORD1(v1769);
  if ( (SDWORD1(v1769) & 0x80000000) == 0 )
  {
    v788 = DWORD1(v1769);
    v789 = 0;
  }
  v790 = v1779 - v787;
  if ( (int)v1779 - v787 >= v1287 - v786 )
    v790 = v1287 - v786;
  v791 = HIDWORD(v1779) - v789;
  v792 = v775 - v788;
  if ( HIDWORD(v1779) - v789 >= v792 )
    v791 = v792;
  if ( v790 > 0 && v791 > 0 )
  {
    v793 = v1300;
    v1325 = 0;
    v794 = (unsigned __int8 *)&v1369[2 * v787 + 2 * (__int64)((int)v1779 * v789)];
    v1272 = v794;
    v795 = (char *)(v1305 + 4 * (v786 + (__int64)(v788 * v1287)));
    v1370 = (unsigned __int16 *)(4LL * (int)v1779);
    v1383 = (unsigned __int16 *)(4LL * v1287);
    v1306 = (SIZE_T)v795;
    do
    {
      v1301 = 0;
      v796 = 0;
      v797 = v794 + 2;
      v798 = v795 - (char *)v794;
      do
      {
        if ( (unsigned __int8)((*v797 + *(v797 - 2) + 2 * (unsigned int)*(v797 - 1)) >> 2) != 0xFF )
        {
          v799 = (unsigned __int8)~((*v797 + *(v797 - 2) + 2 * (unsigned int)*(v797 - 1)) >> 2);
          v797[v798] -= ~((*v797 + *(v797 - 2) + 2 * (unsigned int)*(v797 - 1)) >> 2) * (v793 - v797[v798]);
          v800 = v797[v798 - 1];
          v801 = (unsigned __int64)(2155905153LL * v799 * (BYTE1(v1423) - v800)) >> 32;
          v797[v798 - 1] = v800 + (v801 >> 7 < 0) + (v801 >> 7);
          v802 = v797[v798 - 2];
          v803 = (unsigned __int64)(2155905153LL * v799 * (BYTE2(v1423) - v802)) >> 32;
          v797[v798 - 2] = v802 + (v803 >> 7 < 0) + (v803 >> 7);
          v796 = v1301;
          v797[v798 + 1] += v799 * (255 - v797[v798 + 1]) / 255;
        }
        ++v796;
        v797 += 4;
        v1301 = v796;
      }
      while ( v796 < v790 );
      v804 = v1325;
      v794 = &v1272[(_QWORD)v1370];
      v795 = (char *)v1383 + v1306;
      v1272 = &v1272[(_QWORD)v1370];
      v1306 += (SIZE_T)v1383;
      ++v1325;
    }
    while ( v804 + 1 < v791 );
    v84 = v1398;
    v779 = 0;
  }
  ((void (__fastcall *)(unsigned __int16 *))off_1800AB038)(v1357);
  if ( v1349 )
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800AB078)(v778, v1349);
LABEL_1104:
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800AB030[0])(v778);
  if ( v779 >= 0 )
  {
    v805 = v1405;
    goto LABEL_1202;
  }
LABEL_1207:
  if ( v1431 )
    ((void (__fastcall *)(LPVOID))off_1800AB038)(v1431);
LABEL_1209:
  if ( v1761 )
  {
    v874 = -1LL;
    do
      ++v874;
    while ( *((_WORD *)v1761 + v874) );
    memset(v1761, 0, 2 * v874 + 2);
    MemoryFree(v1761);
    v1761 = 0LL;
  }
  if ( v1762 )
  {
    v875 = -1LL;
    do
      ++v875;
    while ( *((_WORD *)v1762 + v875) );
    memset(v1762, 0, 2 * v875 + 2);
    MemoryFree(v1762);
    v1762 = 0LL;
  }
  if ( v1763 )
  {
    v876 = -1LL;
    do
      ++v876;
    while ( *((_WORD *)v1763 + v876) );
    memset(v1763, 0, 2 * v876 + 2);
    MemoryFree(v1763);
    v1763 = 0LL;
  }
  if ( v1764 )
  {
    off_1800AB038();
    v1764 = 0LL;
  }
  if ( v1765 )
  {
    off_1800AB038();
    v1765 = 0LL;
  }
  if ( v1766 )
  {
    off_1800AB038();
    v1766 = 0LL;
  }
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v877 = dword_1800AC00C;
  if ( dword_1800AC00C > 0 )
  {
    --dword_1800AC00C;
    if ( v877 == 1 )
    {
      v878 = (HMODULE *)&unk_1800AC220;
      v879 = 4LL;
      do
      {
        if ( *v878 )
          FreeLibrary(*v878);
        v878 += 3;
        --v879;
      }
      while ( v879 );
      memset_0(&unk_1800AC220, 0, 0x60uLL);
      memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800AC294, 0);
  v1275 = dword_1800AC008;
  v880 = off_1800AB098[0]();
  v1831 = 0;
  v1427 = v880 - qword_1800AC000;
  memset_0(v1832, 0, sizeof(v1832));
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v881 = dword_1800AC00C;
  if ( dword_1800AC00C )
    goto LABEL_1280;
  v1310 = 0;
  v1373 = 0;
  v1658 = 0LL;
  v1659 = 0LL;
  v882 = (char *)MemoryAlloc(0x338uLL);
  v1444 = (const WCHAR *)v882;
  if ( !v882 )
    goto LABEL_1270;
  v883 = v882 + 7;
  v1530 = 0;
  v884 = 103LL;
  v1531 = 0;
  v885 = 0;
  v886 = (unsigned __int8 *)&unk_18008EDC2;
  v887 = -1;
  v888 = 0;
  v889 = 0;
  do
  {
    v890 = *(v886 - 1) | (*(v886 - 2) << 8);
    v891 = v886[2] << 8;
    v892 = *v886;
    v886 += 8;
    v893 = *(v886 - 7) | ((v892 | (v890 << 8)) << 8);
    v894 = v893 ^ v889;
    v895 = *(v886 - 3) | ((*(v886 - 4) | ((*(v886 - 5) | v891) << 8)) << 8);
    v896 = v895 ^ v894 ^ v888 ^ 0xAC987321;
    v897 = (__ROL4__(v896, 10) + 4991 * __ROL4__(v896 + 1419157410, 5)) ^ v894;
    v898 = (43881 * __ROR4__(v897 + 133239679, 9) - __ROL4__(v897, 2)) ^ v896;
    v899 = (24670 * v898 - (v898 >> 13) - 123127970) ^ v897;
    v900 = (2033 * __ROL4__(v899 ^ 0xAB69, 6) - __ROL4__(v899, 2)) ^ v898;
    v901 = (133239679 - (v900 ^ 0xAB69605E)) ^ v899;
    v902 = (43881 * (v901 ^ 0x137F)) ^ __ROR4__(v901, 6) ^ v900;
    v903 = (__ROL4__(v902, 2) + 24670 * __ROR4__(v902 + 133239679, 15)) ^ v901;
    v904 = (2033 * __ROR4__(v903 + 1419157410, 14) - __ROL4__(v903, 8)) ^ v902;
    v905 = __ROR4__(v904, 10) ^ (4991 * __ROR4__(v904 ^ 0xAB69605E, 12)) ^ v903;
    v906 = v904 ^ (v905 >> 10) ^ (43881 * (v905 ^ 0x7F1));
    v907 = (2033 * (__ROR4__(~v906, 5) + 24670)) ^ v905;
    v908 = v906 ^ (v907 - 2033) ^ 0xAB69605E;
    v909 = ((v908 >> 2) + 4991 * __ROL4__(v906 ^ (v907 - 2033) ^ 0xAB6967AF, 2)) ^ v907;
    v910 = (__ROL4__(v909, 7) + 43881 * __ROR4__(v909 - 133239679, 6)) ^ v908;
    v911 = (24670 * (v910 ^ 0x137F) + __ROR4__(v910, 9)) ^ v909;
    v912 = (__ROL4__(v911, 7) + 2033 * __ROL4__(v911 ^ 0xAB69, 5)) ^ v910;
    v913 = v911 ^ v912 ^ 0xAC987321;
    v914 = (4991 * __ROR4__(v913, 3) - 219010071) ^ v912;
    v915 = (24670 * __ROR4__(v914 - 133239679, 1) - __ROR4__(v914, 6)) ^ v913;
    v916 = (__ROL4__(v915, 14) + 2033 * __ROL4__(v915 - 1419157410, 3)) ^ v914;
    v917 = (4991 * __ROL4__(v916 - 1419157410, 15) - __ROR4__(v916, 14)) ^ v915;
    v918 = (v917 >> 3) ^ (43881 * (v917 ^ 0x605E)) ^ v916;
    v1530 = v887 ^ v918;
    v887 = v895;
    v919 = v885 ^ __ROL4__(v918, 2) ^ (24670 * __ROL4__(v918 ^ 0x7F1137F, 4));
    v885 = v893;
    v1531 = v919 ^ v917;
    *(v883 - 4) = v919 ^ v917;
    v1531 = __ROR4__(v1531, 8);
    *v883 = v1530;
    v883 += 8;
    v1530 = __ROR4__(v1530, 8);
    *(v883 - 13) = v1531;
    v1531 = __ROR4__(v1531, 8);
    *(v883 - 9) = v1530;
    v1530 = __ROR4__(v1530, 8);
    *(v883 - 14) = v1531;
    v1531 = __ROR4__(v1531, 8);
    *(v883 - 10) = v1530;
    v1530 = __ROR4__(v1530, 8);
    *(v883 - 15) = v1531;
    *(v883 - 11) = v1530;
    v889 = __ROR4__(v1531, 8);
    v888 = __ROR4__(v1530, 8);
    v1531 = v889;
    v1530 = v888;
    --v884;
  }
  while ( v884 );
  v84 = v1398;
  v920 = 0LL;
  v921 = (WCHAR *)v1444;
  v922 = 0;
  v923 = 0;
  do
    v922 ^= *((_BYTE *)v1444 + v920++);
  while ( v920 < 0x338 );
  if ( v922 == 64LL )
  {
    v1658 = v1444;
    v921 = 0LL;
    v1659 = 824LL;
    v924 = 0;
  }
  else
  {
    v924 = -1073425151;
  }
  if ( v921 )
    MemoryFree(v921);
  if ( v924 < 0 )
    goto LABEL_1270;
  v925 = v1658;
  HIBYTE(v1658[v1659 / 2 - 1]) = 0;
  memset_0(&unk_1800AC220, 0, 0x60uLL);
  if ( *(_BYTE *)v925 )
  {
    while ( 1 )
    {
      v926 = v925;
      v927 = -1LL;
      do
        ++v927;
      while ( v925[v927] );
      v928 = &v925[v927];
      v929 = (char *)&unk_1800AC220 + 24 * v1373;
      if ( !GetModuleHandleExW(0, v926, (HMODULE *)v929) )
        break;
      v923 = 0;
      if ( **(_WORD **)v929 == 23117
        && (v930 = *(int *)(*(_QWORD *)v929 + 60LL), (unsigned int)v930 < 0x10000000)
        && (v931 = *(_QWORD *)v929 + v930, v931 >= *(_QWORD *)v929)
        && *(_DWORD *)v931 == 17744 )
      {
        if ( ((*(_WORD *)(v931 + 24) - 267) & 0xFEFF) != 0 )
        {
          v923 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v929 + 12) = *(_QWORD *)(v931 + 136);
          *((_DWORD *)v929 + 2) = *(_DWORD *)(v931 + 80);
        }
      }
      else
      {
        v923 = -1073741701;
      }
      v932 = *(_DWORD *)(v928 + 1);
      v933 = 0;
      v925 = v928 + 3;
      v1362 = v932;
      for ( mm = 0; v933 < v1362; mm = v933 )
      {
        v934 = (const CHAR *)v925;
        v935 = -1LL;
        do
          ++v935;
        while ( *((_BYTE *)v925 + v935) );
        v925 = (LPCWSTR)((char *)v925 + v935 + 1);
        if ( v923 >= 0 )
        {
          v936 = GetProcAddress(*(HMODULE *)v929, v934);
          if ( !v936 )
            goto LABEL_1271;
          off_1800AB000[v1310] = v936;
          v933 = mm;
        }
        ++v1310;
        ++v933;
      }
      ++v1373;
      if ( !*(_BYTE *)v925 )
        goto LABEL_1271;
    }
LABEL_1270:
    v923 = -1073741702;
  }
LABEL_1271:
  if ( v1658 )
  {
    v937 = GetProcessHeap();
    HeapFree(v937, 0, (LPVOID)v1658);
  }
  if ( v923 >= 0 )
  {
    v881 = dword_1800AC00C;
LABEL_1280:
    v940 = (HMODULE *)&unk_1800AC220;
    dword_1800AC00C = v881 + 1;
    goto LABEL_1281;
  }
  v938 = (HMODULE *)&unk_1800AC220;
  v939 = 4LL;
  do
  {
    if ( *v938 )
      FreeLibrary(*v938);
    v938 += 3;
    --v939;
  }
  while ( v939 );
  v940 = (HMODULE *)&unk_1800AC220;
  memset_0(&unk_1800AC220, 0, 0x60uLL);
  memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
LABEL_1281:
  v941 = 4LL;
  _InterlockedExchange(&dword_1800AC294, 0);
  v1832[12] = v1275;
  v1832[0] = v1427;
  v1831 = 1;
  v1832[4] = -1721306479;
  v1832[2] = 1;
  v1832[8] = 1;
  v1832[6] = 1;
  v1832[10] = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800AB0D0)(0LL, 8225LL, 4LL, &v1831);
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v942 = dword_1800AC00C;
  if ( dword_1800AC00C > 0 )
  {
    --dword_1800AC00C;
    if ( v942 == 1 )
    {
      do
      {
        if ( *v940 )
          FreeLibrary(*v940);
        v940 += 3;
        --v941;
      }
      while ( v941 );
      memset_0(&unk_1800AC220, 0, 0x60uLL);
      memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800AC294, 0);
  ((void (__fastcall *)(_QWORD, HAM_ACTIVITY_RM_CONTEXT *))off_1800AB160[0])(0LL, v1405);
  v1419 = v1457;
LABEL_1290:
  SH<void *,SH_HANDLE>::Reset(&v1633);
  if ( !v1526 )
    goto LABEL_1683;
  v1698 = 0LL;
  v1711 = 0LL;
  v1712 = 0LL;
  v943 = 0LL;
  v1532 = 0;
  v1660 = &unk_1800AB660;
  v944 = 0LL;
  v1661 = 160LL;
  v945 = GetProcessHeap();
  v946 = HeapAlloc(v945, 8u, 0xA0uLL);
  v1428 = v946;
  v947 = v946;
  if ( !v946 )
    goto LABEL_1675;
  memcpy_0(v946, v1660, v1661);
  v948 = (unsigned int)v1661;
  v943 = v947;
  v1445 = v947;
  v1662 = &unk_1800AB5A0;
  v1663 = 8LL;
  v949 = GetProcessHeap();
  v950 = HeapAlloc(v949, 8u, 8uLL);
  v1452 = v950;
  v951 = (HAM_ACTIVITY_RM_CONTEXT *)v950;
  if ( !v950 )
  {
    v944 = 0LL;
    goto LABEL_1675;
  }
  memcpy_0(v950, v1662, v1663);
  v952 = v1663;
  v1459 = v951;
  v1664 = __rdtsc();
  v1533 = 0;
  if ( (int)RtlUIntAdd(4LL, 4LL, &v1534) < 0 )
  {
    v943 = v1445;
    v944 = v951;
    goto LABEL_1675;
  }
  v1535 = v1534;
  if ( (int)RtlUIntAdd(0LL, v1534, &v1533) < 0 )
    goto LABEL_1336;
  if ( (int)RtlUIntAdd(v953, (unsigned int)v948, &v1536) < 0 )
    goto LABEL_1336;
  v1535 = v1536;
  if ( (int)RtlUIntAdd(v1533, v1536, &v1533) < 0 )
    goto LABEL_1336;
  if ( (int)RtlUIntAdd(v954, v952, &v1537) < 0 )
    goto LABEL_1336;
  v1535 = v1537;
  if ( (int)RtlUIntAdd(v1533, v1537, &v1533) < 0 )
    goto LABEL_1336;
  if ( (int)RtlUIntAdd(v955, v955 + 4, &v1538) < 0 )
    goto LABEL_1336;
  v1535 = v1538;
  if ( (int)RtlUIntAdd(v1533, v1538, &v1533) < 0 )
    goto LABEL_1336;
  HIDWORD(v1697) = v1533;
  v956 = v1533;
  v957 = GetProcessHeap();
  v958 = HeapAlloc(v957, 8u, v956);
  v959 = v958;
  if ( !v958 )
    goto LABEL_1336;
  v1698 = v958;
  LODWORD(v1697) = 0;
  v1539 = 4;
  if ( (int)RtlULongLongAdd(v958, 4LL, &v1716) < 0 || v959 + 2 > (_DWORD *)((char *)v959 + HIDWORD(v1697)) )
    goto LABEL_1336;
  v961 = v1716;
  *v959 = v960;
  *v961 = v1539;
  v962 = v1697 + 1;
  LODWORD(v1697) = v1697 + 1;
  if ( !(_DWORD)v948 )
  {
    v969 = -1073741811;
    v963 = 1;
    goto LABEL_1317;
  }
  if ( v1698 )
  {
    v964 = (unsigned int *)v1698;
    v1665 = (unsigned int *)v1698;
    if ( v962 )
    {
      while ( (int)RtlUIntAdd((unsigned int)v960, *v964, &v1542) >= 0 )
      {
        v1541 = v1542;
        if ( (int)RtlULongLongAdd(v965, v1542, &v1665) < 0 )
          break;
        v964 = v1665;
        if ( v966 + 1 >= v962 )
          goto LABEL_1313;
      }
      goto LABEL_1336;
    }
LABEL_1313:
    v1276 = RtlULongLongAdd(v964, v960, &v1717);
    if ( v1276 < 0 || (char *)v967 + v948 + 4 > (char *)v1698 + HIDWORD(v1697) )
      goto LABEL_1336;
    v968 = v1717;
    *v967 = v948;
    memcpy_0(v968, v1428, v948);
    v963 = 1;
    v969 = v1276;
    v962 = v1697 + 1;
    LODWORD(v1697) = v1697 + 1;
    v960 = 4LL;
LABEL_1317:
    if ( v969 < 0 )
      goto LABEL_1336;
LABEL_1318:
    if ( v952 )
    {
      if ( !v1698 )
      {
        if ( (int)RtlUIntAdd((unsigned int)v960, v952, &v1543) < 0 )
          goto LABEL_1336;
        v1544 = v1543;
        if ( (int)RtlUIntAdd(HIDWORD(v1697), v1543, (char *)&v1697 + 4) < 0 )
          goto LABEL_1336;
        v962 = v963 + v1697;
        LODWORD(v1697) = v963 + v1697;
        goto LABEL_1333;
      }
      v971 = (unsigned int *)v1698;
      v1666 = (unsigned int *)v1698;
      if ( v962 )
      {
        while ( (int)RtlUIntAdd((unsigned int)v960, *v971, &v1545) >= 0 )
        {
          v1544 = v1545;
          if ( (int)RtlULongLongAdd(v972, v1545, &v1666) < 0 )
            break;
          v971 = v1666;
          if ( v963 + v973 >= v962 )
            goto LABEL_1327;
        }
        goto LABEL_1336;
      }
LABEL_1327:
      v974 = RtlULongLongAdd(v971, v960, &v1695);
      if ( v974 < 0 || (char *)v975 + v952 + 4 > (char *)v1698 + HIDWORD(v1697) )
        goto LABEL_1336;
      v976 = v1695;
      *v975 = v952;
      memcpy_0(v976, v1452, v952);
      v962 = v1697 + 1;
      LODWORD(v1697) = v1697 + 1;
    }
    else
    {
      v974 = -1073741811;
    }
    if ( v974 < 0 )
      goto LABEL_1336;
    v963 = 1;
    v970 = 4LL;
LABEL_1333:
    v1667 = v1664;
    if ( v1698 )
    {
      v978 = (unsigned int *)v1698;
      v1668 = (unsigned int *)v1698;
      if ( v962 )
      {
        while ( (int)RtlUIntAdd((unsigned int)v970, *v978, &v1567) >= 0 )
        {
          v1547 = v1567;
          if ( (int)RtlULongLongAdd(v979, v1567, &v1668) < 0 )
            break;
          v978 = v1668;
          if ( v963 + v980 >= v962 )
            goto LABEL_1341;
        }
        goto LABEL_1336;
      }
LABEL_1341:
      if ( (int)RtlULongLongAdd(v978, v970, &v1696) < 0 || v981 + 3 > (_DWORD *)((char *)v1698 + HIDWORD(v1697)) )
        goto LABEL_1336;
      v982 = v1696;
      *v981 = 8;
      *v982 = v1667;
    }
    else
    {
      if ( (int)RtlUIntAdd((unsigned int)v970, 8LL, &v1546) < 0 )
        goto LABEL_1336;
      v1547 = v1546;
      if ( (int)RtlUIntAdd(HIDWORD(v1697), v1546, (char *)&v1697 + 4) < 0 )
        goto LABEL_1336;
    }
    LODWORD(v1697) = v963 + v1697;
    if ( (int)RtlUIntAdd(v977, v977, &v1549) < 0 )
      goto LABEL_1336;
    v984 = v1549;
    v1550 = v1549;
    v1551 = v1549;
    if ( (int)RtlUIntAdd(v983, 8LL, &v1552) < 0 )
      goto LABEL_1336;
    v1550 = v1552;
    if ( (int)RtlUIntAdd(v984, v1552, &v1551) < 0 )
      goto LABEL_1336;
    v1277 = v1551;
    v1429 = 0LL;
    v985 = 0LL;
    v1311 = 0;
    v1669 = 0LL;
    v1453 = 0LL;
    v1363 = 0;
    v1458 = 0LL;
    v1553 = 0LL;
    v1438 = 0LL;
    v1353 = 0LL;
    v1670 = __rdtsc();
    v1554 = 8;
    v986 = RtlUIntAdd(8LL, HIDWORD(v1697), &v1554);
    if ( v986 >= 0 )
    {
      v989 = (v1554 + 7) & 0xFFFFFFF8;
      if ( v989 >= v1554 )
      {
        v1554 = (v1554 + 7) & 0xFFFFFFF8;
        v990 = v989;
        v991 = GetProcessHeap();
        v992 = HeapAlloc(v991, 8u, v990);
        if ( v992 )
        {
          v1671 = v992;
          *v992 = v1697;
          v986 = RtlULongLongAdd(v992, 4LL, &v1671);
          if ( v986 < 0
            || (v994 = v1671, *(_DWORD *)v1671 = HIDWORD(v1697), v986 = RtlULongLongAdd(v994, v993, &v1671), v986 < 0) )
          {
            v988 = 0LL;
            v987 = 0;
          }
          else
          {
            *(_QWORD *)((char *)v992 + v1554 - 8) = v1670;
            memcpy_0(v1671, v1698, HIDWORD(v1697));
            v987 = v1554;
            v988 = v992;
            v1429 = v992;
            v992 = 0LL;
            v1311 = v1554;
          }
          if ( v992 )
          {
            v995 = GetProcessHeap();
            HeapFree(v995, 0, v992);
            v987 = v1311;
            v988 = v1429;
          }
        }
        else
        {
          v986 = -1073741801;
          v987 = 0;
          v988 = 0LL;
        }
      }
      else
      {
        v986 = -1073741675;
      }
    }
    v996 = v986 | 0x10000000;
    if ( v996 < 0 )
      goto LABEL_1630;
    v1672 = 0LL;
    v997 = 0LL;
    v1406 = 0LL;
    v1673 = 0LL;
    v1674 = 0LL;
    v1675 = 0LL;
    v1676 = 0LL;
    v1677 = 0LL;
    if ( v988 )
    {
      v999 = v987;
      v1392 = v987;
      if ( v987 && (v1416 = v987 + 8LL, (v1432 = (unsigned __int8 *)MemoryAlloc(v1416)) != 0LL) )
      {
        v1000 = v1429;
        v1001 = 0;
        v1260 = 0;
        v1002 = 0LL;
        if ( v999 )
        {
          do
            v1001 ^= v1429[v1002++];
          while ( v1002 < v999 );
          v1260 = v1001;
        }
        v1003 = v1432;
        v1775 = 0xC81ECB17B1B54A58uLL;
        v1004 = -1;
        v1555 = 0;
        v1556 = -1;
        v1312 = 0;
        v1005 = 0;
        v1374 = 0;
        v1006 = v999 & 7;
        if ( (v999 & 7) != 0 )
        {
          v1312 = 0;
          v1007 = 0;
          v1008 = 56;
          v1009 = 0;
          do
          {
            v1010 = *v1000++;
            if ( v1007 >= 4 )
            {
              v1011 = (v1010 << v1008) | v1312;
              v1312 = v1011;
            }
            else
            {
              v1011 = v1312;
              v1009 |= v1010 << (v1008 - 32);
            }
            ++v1007;
            v1008 -= 8;
          }
          while ( v1007 < (int)v1006 );
          v84 = v1398;
          v1374 = v1009;
          v1005 = v1009 ^ 0xB17A307A;
          v1012 = v1011 ^ 0x42F6B18D;
          v1555 = v1009 ^ 0xB17A307A;
          v1013 = 0;
          v1556 = v1012;
          if ( (v999 & 7) != 0 )
          {
            do
            {
              v1457 = v1003 + 1;
              if ( v1013 >= 4 )
              {
                v1012 = __ROL4__(v1012, 8);
                v1014 = v1012;
              }
              else
              {
                v1005 = __ROL4__(v1005, 8);
                v1014 = v1005;
              }
              *v1003 = v1014;
              ++v1013;
              v1003 = v1457;
            }
            while ( v1013 < (int)v1006 );
            v1005 = v1555;
            v1012 = v1556;
          }
          if ( v1006 <= 4 )
          {
            v1004 = 0;
            v1556 = 0;
            if ( v1006 < 4 )
            {
              v1005 = v1005 >> (8 * (4 - v1006)) << (8 * (4 - v1006));
              v1555 = v1005;
            }
          }
          else
          {
            v1004 = v1012 >> (8 * (8 - v1006)) << (8 * (8 - v1006));
            v1556 = v1004;
          }
        }
        if ( v999 >> 3 )
        {
          v1015 = v1000 + 2;
          v1016 = v1312;
          v1017 = v999 >> 3;
          v1018 = v1374;
          v1387 = HIWORD(v1775);
          v1412 = WORD1(v1775);
          v1019 = v1003 + 7;
          v1020 = HIDWORD(v1775);
          v1021 = WORD2(v1775);
          do
          {
            v1022 = v1015[1] | ((*v1015 | ((*(v1015 - 1) | (*(v1015 - 2) << 8)) << 8)) << 8);
            v1023 = v1015[5] | ((v1015[4] | ((v1015[3] | (v1015[2] << 8)) << 8)) << 8);
            v1457 = v1015 + 8;
            v1024 = v1023 ^ v1004;
            v1025 = v1022 ^ v1020 ^ (v1024 - 19032) ^ v1005;
            v1026 = (__ROR4__(v1025, 7) + WORD1(v1775) * __ROR4__(v1020 ^ v1025, 15)) ^ v1024;
            v1027 = (v1021 * __ROR4__(v1026 - 1313519016, 9) - __ROR4__(v1026, 10)) ^ v1025;
            v1028 = (__ROL4__(v1027, 5) + HIWORD(v1775) * __ROL4__(v1021 ^ v1027, 4)) ^ v1026;
            v1029 = (v1020 - (v1028 ^ 0xB1B54A58)) ^ v1027;
            v1030 = (WORD1(v1775) * (v1029 - 19032) - (v1029 >> 6)) ^ v1028;
            v1031 = (19032 * (v1021 ^ __ROR4__(v1030, 15))) ^ v1029;
            v1032 = (v1021 * (HIWORD(v1775) + __ROR4__(~v1031, 3))) ^ v1030;
            v1033 = (v1032 - 19032 - v1020) ^ v1031;
            v1034 = (v1412 * (v1387 ^ v1033)) ^ __ROR4__(v1033, 10) ^ v1032;
            v1035 = __ROR4__(v1034, 3) ^ (v1021 * __ROL4__(v1034 ^ 0x4A58, 6)) ^ v1033;
            v1036 = (19032 * (__ROR4__(v1035, 15) - HIWORD(v1775))) ^ v1034;
            v1037 = (v1036 >> 15) ^ (19032 * __ROL4__(v1036 - v1021, 3)) ^ (v1036 >> 1) ^ (19032
                                                                                         * (HIWORD(v1775) ^ v1036)) ^ v1035;
            v1038 = (WORD1(v1775) * (v1037 - v1021) - (v1037 >> 13)) ^ v1036;
            v1039 = __ROR4__(v1038, 11) ^ (v1021 * __ROR4__(-1313519016 - v1038, 9)) ^ v1037;
            v1040 = (v1039 + 1313519016 - HIWORD(v1775)) ^ v1038;
            v1041 = (19032 * (v1412 ^ v1040) - __ROR4__(v1040, 7)) ^ v1039;
            v1042 = (WORD1(v1775) * __ROL4__(HIWORD(v1775) ^ v1041, 4) - __ROR4__(v1041, 16)) ^ v1040;
            v1043 = (__ROR4__(v1042, 4) + v1021 * __ROR4__(-1313519016 - v1042, 10)) ^ v1041;
            v1044 = __ROR4__(v1043, 9) ^ (HIWORD(v1775) * __ROR4__(v1043 + 1313519016, 4)) ^ v1042;
            v1045 = (19032 * __ROL4__(v1044 ^ v1020, 8) - __ROL4__(v1044, 2)) ^ v1043;
            v1046 = (WORD1(v1775) * __ROR4__(v1020 - v1045, 11) - __ROR4__(v1045, 12)) ^ v1044;
            v1047 = (v1046 >> 8) ^ (v1021 * (WORD1(v1775) ^ v1046)) ^ v1045;
            v1015 += 8;
            v1555 = v1018 ^ v1047;
            v1556 = v1016 ^ v1020 ^ v1047 ^ v1046 ^ 0xB1B54A58;
            v1018 = v1022;
            *(v1019 - 4) = v1555;
            v1016 = v1023;
            v1555 = __ROR4__(v1555, 8);
            *v1019 = v1556;
            v1556 = __ROR4__(v1556, 8);
            *(v1019 - 5) = v1555;
            v1555 = __ROR4__(v1555, 8);
            *(v1019 - 1) = v1556;
            v1556 = __ROR4__(v1556, 8);
            *(v1019 - 6) = v1555;
            v1555 = __ROR4__(v1555, 8);
            *(v1019 - 2) = v1556;
            v1556 = __ROR4__(v1556, 8);
            *(v1019 - 7) = v1555;
            *(v1019 - 3) = v1556;
            v1019 += 8;
            v1005 = __ROR4__(v1555, 8);
            v1004 = __ROR4__(v1556, 8);
            v1555 = v1005;
            v1556 = v1004;
            --v1017;
          }
          while ( v1017 );
          v1001 = v1260;
          v2 = 0;
          v84 = v1398;
          v985 = 0LL;
          v999 = v1392;
        }
        *(_QWORD *)&v1432[v999] = v1001;
        v1677 = v1416;
        v1676 = v1432;
        v1673 = 8LL;
        v1672 = &qword_1800AB650;
        v1675 = 160LL;
        v1674 = &xmmword_1800AB5B0;
        v1048 = GetProcessHeap();
        v1049 = HeapAlloc(v1048, 8u, 0x30uLL);
        v1050 = v1049;
        if ( v1049 )
        {
          *v1049 = v1416;
          v1052 = GetProcessHeap();
          v1053 = HeapAlloc(v1052, 8u, (unsigned int)v1416);
          if ( !v1053 )
            goto LABEL_1392;
          *((_QWORD *)v1050 + 1) = v1053;
          memcpy_0(v1053, v1432, (unsigned int)v1416);
          v1050[4] = 160;
          v1054 = GetProcessHeap();
          v1055 = HeapAlloc(v1054, 8u, 0xA0uLL);
          if ( !v1055 )
            goto LABEL_1392;
          *((_QWORD *)v1050 + 3) = v1055;
          *v1055 = xmmword_1800AB5B0;
          v1055[1] = *((_OWORD *)&xmmword_1800AB5B0 + 1);
          v1055[2] = *((_OWORD *)&xmmword_1800AB5B0 + 2);
          v1055[3] = *((_OWORD *)&xmmword_1800AB5B0 + 3);
          v1055[4] = *((_OWORD *)&xmmword_1800AB5B0 + 4);
          v1055[5] = *((_OWORD *)&xmmword_1800AB5B0 + 5);
          v1055[6] = *((_OWORD *)&xmmword_1800AB5B0 + 6);
          v1055[7] = *((_OWORD *)&xmmword_1800AB5B0 + 7);
          v1055[8] = *((_OWORD *)&xmmword_1800AB5B0 + 8);
          v1055[9] = *((_OWORD *)&xmmword_1800AB5B0 + 9);
          v1050[8] = 8;
          v1056 = GetProcessHeap();
          v1057 = HeapAlloc(v1056, 8u, 8uLL);
          if ( v1057 )
          {
            *((_QWORD *)v1050 + 5) = v1057;
            v1051 = v1050;
            v1406 = v1050;
            v998 = 0;
            *v1057 = qword_1800AB650;
            v1050 = 0LL;
          }
          else
          {
LABEL_1392:
            v998 = -1073741801;
            v1051 = 0LL;
          }
          if ( v1050 )
          {
            v1393 = (void *)*((_QWORD *)v1050 + 1);
            if ( v1393 )
            {
              v1058 = GetProcessHeap();
              HeapFree(v1058, 0, v1393);
              *((_QWORD *)v1050 + 1) = 0LL;
            }
            v1394 = (void *)*((_QWORD *)v1050 + 3);
            if ( v1394 )
            {
              v1059 = GetProcessHeap();
              HeapFree(v1059, 0, v1394);
              *((_QWORD *)v1050 + 3) = 0LL;
            }
            v1395 = (void *)*((_QWORD *)v1050 + 5);
            if ( v1395 )
            {
              v1060 = GetProcessHeap();
              HeapFree(v1060, 0, v1395);
              *((_QWORD *)v1050 + 5) = 0LL;
            }
            v1061 = GetProcessHeap();
            HeapFree(v1061, 0, v1050);
          }
        }
        else
        {
          v998 = -1073741801;
          v1051 = 0LL;
        }
        if ( v998 < 0 )
        {
          v997 = v1406;
        }
        else
        {
          v1669 = v1051;
          v997 = 0LL;
        }
      }
      else
      {
        v998 = -1073741823;
      }
      v1062 = v1676;
      if ( v1676 )
      {
        v1063 = GetProcessHeap();
        HeapFree(v1063, 0, v1062);
        v1676 = 0LL;
      }
      if ( v997 )
      {
        v1064 = (void *)v997[1];
        if ( v1064 )
        {
          v1065 = GetProcessHeap();
          HeapFree(v1065, 0, v1064);
          v997[1] = 0LL;
        }
        v1066 = (void *)v997[3];
        if ( v1066 )
        {
          v1067 = GetProcessHeap();
          HeapFree(v1067, 0, v1066);
          v997[3] = 0LL;
        }
        v1068 = (void *)v997[5];
        if ( v1068 )
        {
          v1069 = GetProcessHeap();
          HeapFree(v1069, 0, v1068);
          v997[5] = 0LL;
        }
        v1070 = GetProcessHeap();
        HeapFree(v1070, 0, v997);
      }
    }
    else
    {
      v998 = -1073741811;
    }
    v996 = v998 | 0x10000000;
    if ( v996 < 0 )
      goto LABEL_1630;
    v1071 = (const void **)v1669;
    v1557 = 4;
    v1072 = RtlUIntAdd(4LL, *(unsigned int *)v1669, &v1557);
    if ( v1072 < 0
      || (v1072 = RtlUIntAdd(v1557, v1073, &v1557), v1072 < 0)
      || (v1072 = RtlUIntAdd(v1557, *((unsigned int *)v1071 + 4), &v1557), v1072 < 0)
      || (v1072 = RtlUIntAdd(v1557, v1074, &v1557), v1072 < 0) )
    {
      v1075 = v1558;
    }
    else
    {
      v1072 = RtlUIntAdd(v1557, *((unsigned int *)v1071 + 8), &v1557);
      v1075 = v1558;
      if ( v1072 >= 0 )
        v1075 = v1557;
      v1558 = v1075;
    }
    if ( v1072 >= 0 )
    {
      v1076 = v1075;
      v1077 = GetProcessHeap();
      v1078 = HeapAlloc(v1077, 8u, v1076);
      if ( v1078 )
      {
        *v1078 = *(_DWORD *)v1071;
        v1678 = v1078;
        v1072 = RtlULongLongAdd(v1078, 4LL, &v1678);
        if ( v1072 >= 0 )
        {
          memcpy_0(v1678, v1071[1], *(unsigned int *)v1071);
          v1072 = RtlULongLongAdd(v1678, *(unsigned int *)v1071, &v1678);
          if ( v1072 >= 0 )
          {
            v1079 = v1678;
            *(_DWORD *)v1678 = *((_DWORD *)v1071 + 4);
            v1072 = RtlULongLongAdd(v1079, 4LL, &v1678);
            if ( v1072 >= 0 )
            {
              memcpy_0(v1678, v1071[3], *((unsigned int *)v1071 + 4));
              v1072 = RtlULongLongAdd(v1678, *((unsigned int *)v1071 + 4), &v1678);
              if ( v1072 >= 0 )
              {
                v1080 = v1678;
                *(_DWORD *)v1678 = *((_DWORD *)v1071 + 8);
                v1072 = RtlULongLongAdd(v1080, 4LL, &v1678);
                if ( v1072 >= 0 )
                {
                  memcpy_0(v1678, v1071[5], *((unsigned int *)v1071 + 8));
                  v1072 = RtlULongLongAdd(v1678, *((unsigned int *)v1071 + 8), &v1678);
                  if ( v1072 >= 0 )
                  {
                    v1453 = v1078;
                    v1078 = 0LL;
                    v1363 = v1558;
                  }
                }
              }
            }
          }
        }
        if ( v1078 )
        {
          v1081 = GetProcessHeap();
          HeapFree(v1081, 0, v1078);
        }
      }
      else
      {
        v1072 = -1073741801;
      }
    }
    v996 = v1072 | 0x10000000;
    if ( v996 < 0 )
      goto LABEL_1630;
    v1679 = 0LL;
    v1559 = 0;
    v1680 = 0LL;
    v1560 = 0;
    v1561 = 8;
    v1082 = RtlUIntAdd(8LL, v1277, &v1561);
    v996 = v1084 | v1082;
    if ( (v1084 | v1082) >= 0 )
    {
      v1085 = (v1561 + 7) & 0xFFFFFFF8;
      if ( v1085 >= v1561 )
      {
        v1563 = (v1561 + 7) & 0xFFFFFFF8;
        v1086 = RtlUIntAdd(v1085, v1083, &v1563);
        v1087 = v1562;
        v996 = v1086;
        if ( v1086 >= 0 )
          v1087 = v1563;
        v1562 = v1087;
      }
      else
      {
        v996 = -1073741675;
      }
      if ( v996 >= 0 )
      {
        if ( !v1698 || (unsigned int)v1697 <= 1 )
          goto LABEL_1454;
        v1088 = (unsigned int *)v1698;
        v1089 = 0;
        v1681 = (unsigned int *)v1698;
        while ( 1 )
        {
          v1090 = *v1088;
          v996 = RtlULongLongAdd(v1088, 4LL, &v1681);
          if ( v996 < 0 )
            break;
          v996 = RtlULongLongAdd(v1681, v1090, &v1681);
          if ( v996 < 0 )
            break;
          v1088 = v1681;
          if ( ++v1089 )
          {
            v1091 = *v1681;
            v996 = RtlULongLongAdd(v1681, 4LL, &v1681);
            if ( v996 >= 0 )
            {
              v1092 = v1681;
              v1559 = v1091;
              if ( !v1091 )
                v1092 = 0LL;
              v1681 = v1092;
              v1679 = v1092;
            }
            break;
          }
        }
        if ( v996 < 0 )
          goto LABEL_1630;
        if ( (unsigned int)v1697 > 2 )
        {
          v1093 = (unsigned int *)v1698;
          v1094 = 0;
          v1682 = (unsigned int *)v1698;
          while ( 1 )
          {
            v1095 = *v1093;
            v996 = RtlULongLongAdd(v1093, 4LL, &v1682);
            if ( v996 < 0 )
              break;
            v996 = RtlULongLongAdd(v1682, v1095, &v1682);
            if ( v996 < 0 )
              break;
            v1093 = v1682;
            if ( (unsigned int)++v1094 >= 2 )
            {
              v1097 = *v1682;
              v996 = RtlULongLongAdd(v1682, 4LL, &v1682);
              if ( v996 >= 0 )
              {
                v1098 = v1682;
                v1560 = v1097;
                if ( !v1097 )
                  v1098 = 0LL;
                v1682 = v1098;
                v1680 = v1098;
              }
              break;
            }
          }
          if ( v996 >= 0 )
          {
            v1564 = 4;
            v996 = RtlUIntAdd(4LL, v1096, &v1564);
            if ( v996 < 0
              || (v996 = RtlUIntAdd(v1564, 4LL, &v1564), v996 < 0)
              || (v996 = RtlUIntAdd(v1564, v1099, &v1564), v996 < 0)
              || (v996 = RtlUIntAdd(v1564, 4LL, &v1564), v996 < 0) )
            {
              v1101 = v1565;
            }
            else
            {
              v996 = RtlUIntAdd(v1564, v1100, &v1564);
              v1101 = v1565;
              if ( v996 >= 0 )
                v1101 = v1564;
              v1565 = v1101;
            }
            if ( v996 >= 0 )
            {
              if ( v1101 > 0x400000 )
              {
                v996 = -2147418113;
                goto LABEL_1630;
              }
              LODWORD(v1553) = v1101;
            }
          }
        }
        else
        {
LABEL_1454:
          v996 = -1073741811;
        }
      }
    }
    if ( v996 < 0 )
      goto LABEL_1630;
    v1102 = v1553;
    v1103 = GetProcessHeap();
    v1104 = (int *)HeapAlloc(v1103, 8u, v1102);
    if ( v1104 )
    {
      v1105 = v1104;
      v1458 = v1104;
      v996 = 0x10000000;
    }
    else
    {
      v996 = -805306345;
      v1105 = 0LL;
    }
    if ( v996 < 0 )
      goto LABEL_1630;
    if ( !v1453 || !v1105 )
    {
      v996 = -2147024809;
      goto LABEL_1630;
    }
    v1726[0] = v1453;
    v1727 = v1363;
    v1728 = v1553;
    v1726[1] = v1105;
    v1729 = 0;
    if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
      && (v1106 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
    {
      v1107 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1106)(134LL, v1726);
      v1108 = v1553;
      v996 = v1107 | 0x10000000;
      if ( v1107 >= 0 )
        v1108 = v1728;
      LODWORD(v1553) = v1108;
    }
    else
    {
      v1109 = GetLastError();
      v996 = v1109;
      if ( v1109 > 0 )
        v996 = (unsigned __int16)v1109 | 0x80070000;
      if ( v996 >= 0 )
        v996 = -2147467259;
      v1108 = v1553;
    }
    if ( v996 == -805306333 )
    {
      v996 = -2147024774;
      goto LABEL_1630;
    }
    if ( v996 < 0 )
      goto LABEL_1630;
    v1407 = 0LL;
    v1566 = 0;
    v1684 = v1105;
    if ( v1108 < 4 )
      goto LABEL_1520;
    v1278 = *v1105;
    v1110 = RtlULongLongAdd(v1105, 4LL, &v1684);
    if ( v1110 < 0 )
      goto LABEL_1553;
    v1110 = RtlUIntAdd(0LL, 4LL, &v1566);
    if ( v1110 < 0 )
      goto LABEL_1553;
    if ( v1111 - v1566 < (unsigned int)v1112 )
      goto LABEL_1520;
    v1396 = v1684;
    v1417 = v1112;
    v1110 = RtlULongLongAdd(v1684, (unsigned int)v1112, &v1684);
    if ( v1110 < 0 )
      goto LABEL_1553;
    v1110 = RtlUIntAdd(v1566, v1113, &v1566);
    if ( v1110 < 0 )
      goto LABEL_1553;
    if ( v1114 - v1566 < 4 )
      goto LABEL_1520;
    v1115 = *(unsigned int *)v1684;
    v1110 = RtlULongLongAdd(v1684, 4LL, &v1684);
    if ( v1110 < 0 )
      goto LABEL_1553;
    v1110 = RtlUIntAdd(v1566, 4LL, &v1566);
    if ( v1110 < 0 )
      goto LABEL_1553;
    if ( v1116 - v1566 < (unsigned int)v1115 )
      goto LABEL_1520;
    v1433 = v1684;
    v1110 = RtlULongLongAdd(v1684, (unsigned int)v1115, &v1684);
    if ( v1110 < 0 )
      goto LABEL_1553;
    v1110 = RtlUIntAdd(v1566, (unsigned int)v1115, &v1566);
    if ( v1110 < 0 )
      goto LABEL_1553;
    if ( v1117 - v1566 < 4 )
      goto LABEL_1520;
    v1313 = *(_DWORD *)v1684;
    v1110 = RtlULongLongAdd(v1684, 4LL, &v1684);
    if ( v1110 < 0 )
      goto LABEL_1553;
    v1110 = RtlUIntAdd(v1566, 4LL, &v1566);
    if ( v1110 < 0 )
      goto LABEL_1553;
    if ( v1118 - v1566 < v1119 )
      goto LABEL_1520;
    v1110 = RtlUIntAdd(v1566, v1119, &v1566);
    if ( v1110 < 0 )
      goto LABEL_1553;
    if ( v1120 != v1566 || (unsigned int)(v1122 + v1121 + v1115) + 12LL != v1120 )
    {
LABEL_1520:
      v1110 = -1073741762;
      goto LABEL_1553;
    }
    v1123 = GetProcessHeap();
    v1124 = HeapAlloc(v1123, 8u, 0x30uLL);
    v1125 = v1124;
    if ( !v1124 )
    {
      v1110 = -1073741801;
LABEL_1543:
      v985 = v1407;
      v1139 = 0LL;
      if ( v1110 < 0 )
      {
        v1139 = v1407;
        v985 = 0LL;
      }
      v1438 = v985;
      if ( v1139 )
      {
        v1140 = (void *)*((_QWORD *)v1139 + 1);
        if ( v1140 )
        {
          v1141 = GetProcessHeap();
          HeapFree(v1141, 0, v1140);
          *((_QWORD *)v1139 + 1) = 0LL;
        }
        v1142 = (void *)*((_QWORD *)v1139 + 3);
        if ( v1142 )
        {
          v1143 = GetProcessHeap();
          HeapFree(v1143, 0, v1142);
          *((_QWORD *)v1139 + 3) = 0LL;
        }
        v1144 = (void *)*((_QWORD *)v1139 + 5);
        if ( v1144 )
        {
          v1145 = GetProcessHeap();
          HeapFree(v1145, 0, v1144);
          *((_QWORD *)v1139 + 5) = 0LL;
        }
        v1146 = GetProcessHeap();
        HeapFree(v1146, 0, v1139);
        v1438 = v985;
      }
LABEL_1553:
      v996 = v1110 | 0x10000000;
      if ( v996 < 0 )
        goto LABEL_1630;
      v1686 = 0LL;
      v1147 = 0;
      v1685 = 0LL;
      if ( !v985 || (v1148 = (unsigned __int8 *)*((_QWORD *)v985 + 1), (v1408 = (char *)v1148) == 0LL) || !*v985 )
      {
        v996 = -805306355;
        goto LABEL_1630;
      }
      v1149 = *v985 - 8LL;
      v1397 = v1149;
      v1418 = (int *)MemoryAlloc(v1149);
      v1150 = v1418;
      if ( !v1418 )
      {
        v1201 = v1685;
        goto LABEL_1591;
      }
      v1151 = v1148;
      v1777 = 0x7F1137FAB69605ELL;
      v1583 = 0;
      v1152 = 0;
      v1153 = v1418;
      v1154 = 0;
      v1155 = v1149 & 7;
      if ( (v1149 & 7) != 0 )
      {
        v1568 = -1;
        v1456 = 0;
        v1156 = 56;
        do
        {
          v1157 = *v1151++;
          if ( v1154 >= 4 )
          {
            v1158 = (v1157 << v1156) | v1456;
            v1456 = v1158;
          }
          else
          {
            v1158 = v1456;
            v1147 |= v1157 << (v1156 - 32);
          }
          ++v1154;
          v1156 -= 8;
        }
        while ( v1154 < (int)v1155 );
        v84 = v1398;
        v985 = v1438;
        v1154 = v1147 ^ 0x92F65A5;
        v1159 = v1158 ^ 0x699A899C;
        v1583 = v1147 ^ 0x92F65A5;
        v1160 = 0;
        v1568 = v1159;
        if ( (v1149 & 7) != 0 )
        {
          do
          {
            if ( v1160 >= 4 )
            {
              v1159 = __ROL4__(v1159, 8);
              v1161 = v1159;
            }
            else
            {
              v1154 = __ROL4__(v1154, 8);
              v1161 = v1154;
            }
            *(_BYTE *)v1153 = v1161;
            ++v1160;
            v1153 = (int *)((char *)v1153 + 1);
          }
          while ( v1160 < (int)v1155 );
          v1154 = v1583;
          v1159 = v1568;
        }
        if ( v1155 <= 4 )
        {
          v1162 = 0;
          v1568 = 0;
          if ( v1155 < 4 )
          {
            v1154 = (unsigned int)v1154 >> (8 * (4 - v1155)) << (8 * (4 - v1155));
            v1583 = v1154;
          }
LABEL_1577:
          v1163 = v1149 >> 3;
          if ( v1149 >> 3 )
          {
            v1164 = (char *)v1153 + 7;
            v1165 = HIDWORD(v1777);
            v1166 = v1151 + 2;
            v1167 = HIWORD(v1777);
            v1314 = WORD1(v1777);
            v1168 = v1163;
            v1169 = WORD2(v1777);
            do
            {
              v1170 = *(v1166 - 1) | (*(v1166 - 2) << 8);
              v1171 = v1166[2] << 8;
              v1172 = *v1166;
              v1166 += 8;
              v1173 = *(v1166 - 7) | ((v1172 | (v1170 << 8)) << 8);
              v1174 = v1173 ^ v1154;
              v1175 = *(v1166 - 3) | ((*(v1166 - 4) | ((*(v1166 - 5) | v1171) << 8)) << 8);
              v1176 = v1174 ^ v1175 ^ v1162 ^ v1165 ^ 0xAB69605E;
              v1177 = (__ROL4__(v1176, 10) + v1169 * __ROL4__(v1176 + 1419157410, 5)) ^ v1174;
              v1178 = (WORD1(v1777) * __ROR4__(v1177 + v1165, 9) - __ROL4__(v1177, 2)) ^ v1176;
              v1179 = (24670 * (v1178 - v1169) - (v1178 >> 13)) ^ v1177;
              v1180 = (v1167 * __ROL4__(v1179 ^ WORD1(v1777), 6) - __ROL4__(v1179, 2)) ^ v1178;
              v1181 = (v1165 - (v1180 ^ 0xAB69605E)) ^ v1179;
              v1182 = (v1314 * (v1169 ^ v1181)) ^ __ROR4__(v1181, 6) ^ v1180;
              v1183 = (__ROL4__(v1182, 2) + 24670 * __ROR4__(v1182 + v1165, 15)) ^ v1181;
              v1184 = (v1167 * __ROR4__(v1183 + 1419157410, 14) - __ROL4__(v1183, 8)) ^ v1182;
              v1185 = __ROR4__(v1184, 10) ^ (v1169 * __ROR4__(v1184 ^ 0xAB69605E, 12)) ^ v1183;
              v1186 = (v1185 >> 10) ^ (WORD1(v1777) * (v1185 ^ v1167)) ^ v1184;
              v1187 = (v1167 * (__ROR4__(~v1186, 5) + 24670)) ^ v1185;
              v1188 = (v1187 - v1167) ^ 0xAB69605E ^ v1186;
              v1189 = ((v1188 >> 2) + v1169 * __ROL4__(v1188 ^ v1167, 2)) ^ v1187;
              v1190 = (__ROL4__(v1189, 7) + WORD1(v1777) * __ROR4__(v1189 - v1165, 6)) ^ v1188;
              v1191 = (24670 * (v1169 ^ v1190) + __ROR4__(v1190, 9)) ^ v1189;
              v1192 = (__ROL4__(v1191, 7) + v1167 * __ROL4__(v1191 ^ WORD1(v1777), 5)) ^ v1190;
              v1193 = v1165 ^ v1191 ^ v1192 ^ 0xAB69605E;
              v1194 = (v1169 * (__ROR4__(v1193, 3) - WORD1(v1777))) ^ v1192;
              v1195 = (24670 * __ROR4__(v1194 - v1165, 1) - __ROR4__(v1194, 6)) ^ v1193;
              v1196 = (__ROL4__(v1195, 14) + HIWORD(v1777) * __ROL4__(v1195 - 1419157410, 3)) ^ v1194;
              v1197 = (v1169 * __ROL4__(v1196 - 1419157410, 15) - __ROR4__(v1196, 14)) ^ v1195;
              v1198 = (v1197 >> 3) ^ (WORD1(v1777) * (v1197 ^ 0x605E)) ^ v1196;
              v1568 = v1456 ^ v1198;
              v1456 = v1175;
              v1199 = v1147 ^ __ROL4__(v1198, 2) ^ (24670 * __ROL4__(v1165 ^ v1198, 4));
              v1147 = v1173;
              v1583 = v1199 ^ v1197;
              *(v1164 - 4) = v1199 ^ v1197;
              v1583 = __ROR4__(v1583, 8);
              v1167 = HIWORD(v1777);
              *v1164 = v1568;
              v1164 += 8;
              v1568 = __ROR4__(v1568, 8);
              *(v1164 - 13) = v1583;
              v1583 = __ROR4__(v1583, 8);
              *(v1164 - 9) = v1568;
              v1568 = __ROR4__(v1568, 8);
              *(v1164 - 14) = v1583;
              v1583 = __ROR4__(v1583, 8);
              *(v1164 - 10) = v1568;
              v1568 = __ROR4__(v1568, 8);
              *(v1164 - 15) = v1583;
              *(v1164 - 11) = v1568;
              v1154 = __ROR4__(v1583, 8);
              v1162 = __ROR4__(v1568, 8);
              v1583 = v1154;
              v1568 = v1162;
              --v1168;
            }
            while ( v1168 );
            v1152 = 0;
            v2 = 0;
            v84 = v1398;
            v985 = v1438;
            v1149 = v1397;
            v1150 = v1418;
          }
          for ( nn = 0LL; nn < v1149; ++nn )
            v1152 ^= *((_BYTE *)v1150 + nn);
          if ( v1152 == *(_QWORD *)&v1408[v1149] )
          {
            v1202 = 0;
            v1201 = v1150;
            v1685 = v1150;
            v1150 = 0LL;
            v1686 = v1149;
          }
          else
          {
            v1201 = v1685;
            v1202 = -1073425151;
          }
          if ( v1150 )
          {
            MemoryFree(v1150);
            v1201 = v1685;
          }
          if ( v1202 >= 0 )
          {
            v1203 = v1686;
            v996 = 0x10000000;
            v1353 = v1201;
            v1201 = 0LL;
            v1685 = 0LL;
            HIDWORD(v1553) = v1686;
            goto LABEL_1592;
          }
LABEL_1591:
          v1203 = HIDWORD(v1553);
          v996 = -805306367;
LABEL_1592:
          if ( v1201 )
          {
            v1204 = GetProcessHeap();
            HeapFree(v1204, 0, v1201);
            v1203 = HIDWORD(v1553);
            v1685 = 0LL;
          }
          if ( v996 >= 0 )
          {
            v1569[0] = 0;
            v1687 = v1353;
            if ( v1203 >= 4 )
            {
              v1279 = *v1353;
              v1205 = RtlULongLongAdd(v1353, 4LL, &v1687);
              if ( v1205 < 0 )
                goto LABEL_1629;
              v1205 = RtlUIntAdd(0LL, 4LL, v1569);
              if ( v1205 < 0 )
                goto LABEL_1629;
              if ( (unsigned int)(v1206 - v1569[0]) >= 4 )
              {
                v1207 = *(unsigned int *)v1687;
                v1205 = RtlULongLongAdd(v1687, 4LL, &v1687);
                if ( v1205 < 0 )
                  goto LABEL_1629;
                v1205 = RtlUIntAdd(v1569[0], 4LL, v1569);
                if ( v1205 < 0 )
                  goto LABEL_1629;
                if ( v1208 - v1569[0] >= (unsigned int)v1207 )
                {
                  v1205 = RtlUIntAdd(v1569[0], (unsigned int)v1207, v1569);
                  if ( v1205 < 0 )
                    goto LABEL_1629;
                  v1211 = v1687;
                  if ( v1210 + (unsigned __int64)v1209 >= (unsigned __int64)v1687 + v1207
                    && v1209 + v1210 - v1207 - (unsigned __int64)v1687 < 8 )
                  {
                    v1315 = 0;
                    v1212 = 0LL;
                    v1439 = 0LL;
                    v1205 = 0;
                    if ( !v1687 )
                    {
LABEL_1618:
                      if ( (_DWORD)v1207 )
                      {
                        v1220 = GetProcessHeap();
                        v1212 = HeapAlloc(v1220, 8u, v1207);
                        v1439 = v1212;
                        if ( !v1212 )
                        {
                          v1205 = -1073741801;
                          goto LABEL_1626;
                        }
                        v1205 = 0;
                      }
                      if ( v1211 )
                      {
                        memcpy_0(v1212, v1211, v1207);
                        v1212 = v1439;
                      }
                      v1712 = v1212;
                      v1711 = __PAIR64__(v1207, v1315);
LABEL_1626:
                      if ( v1205 < 0 || v1279 == (_DWORD)v1711 )
                        goto LABEL_1629;
                      goto LABEL_1628;
                    }
                    v1205 = RtlULongLongAdd(v1687, (unsigned int)v1207, &v1688);
                    if ( v1205 < 0 )
                      goto LABEL_1626;
                    v1214 = v1688;
                    if ( (unsigned __int64)v1211 < v1688 )
                    {
                      do
                      {
                        v1205 = RtlULongLongAdd(v1213, 4LL, &v1689);
                        if ( v1205 < 0 )
                          goto LABEL_1626;
                        if ( v1689 > v1216 )
                          goto LABEL_1621;
                        v1217 = RtlUIntAdd(4LL, *v1215, v1570);
                        v1205 = v1217;
                        if ( v1217 >= 0 )
                          v1219 = v1570[0];
                        v1569[1] = v1219;
                        if ( v1217 < 0 )
                          goto LABEL_1626;
                        v1205 = RtlULongLongAdd(v1218, v1219, &v1690);
                        if ( v1205 < 0 )
                          goto LABEL_1626;
                        v1213 = v1690;
                        if ( v1690 > v1214 )
                          goto LABEL_1621;
                        ++v1315;
                      }
                      while ( v1690 < v1214 );
                    }
                    if ( v1213 == v1214 )
                    {
                      v1212 = 0LL;
                      goto LABEL_1618;
                    }
LABEL_1621:
                    v1205 = -1073741811;
LABEL_1629:
                    v996 = v1205 | 0x10000000;
                    goto LABEL_1630;
                  }
                }
              }
            }
LABEL_1628:
            v1205 = -1073741762;
            goto LABEL_1629;
          }
LABEL_1630:
          if ( v1429 )
          {
            v1221 = GetProcessHeap();
            HeapFree(v1221, 0, v1429);
          }
          v1222 = v1669;
          if ( v1669 )
          {
            v1223 = (void *)*((_QWORD *)v1669 + 1);
            if ( v1223 )
            {
              v1224 = GetProcessHeap();
              HeapFree(v1224, 0, v1223);
              v1222[1] = 0LL;
            }
            v1225 = (void *)v1222[3];
            if ( v1225 )
            {
              v1226 = GetProcessHeap();
              HeapFree(v1226, 0, v1225);
              v1222[3] = 0LL;
            }
            v1227 = (void *)v1222[5];
            if ( v1227 )
            {
              v1228 = GetProcessHeap();
              HeapFree(v1228, 0, v1227);
              v1222[5] = 0LL;
            }
            v1229 = GetProcessHeap();
            HeapFree(v1229, 0, v1222);
            v1669 = 0LL;
          }
          if ( v1453 )
          {
            v1230 = GetProcessHeap();
            HeapFree(v1230, 0, v1453);
          }
          v1231 = v1458;
          if ( v1458 )
          {
            v1232 = GetProcessHeap();
            HeapFree(v1232, 0, v1231);
          }
          if ( v985 )
          {
            v1233 = (void *)*((_QWORD *)v985 + 1);
            if ( v1233 )
            {
              v1234 = GetProcessHeap();
              HeapFree(v1234, 0, v1233);
              *((_QWORD *)v985 + 1) = 0LL;
            }
            v1235 = (void *)*((_QWORD *)v985 + 3);
            if ( v1235 )
            {
              v1236 = GetProcessHeap();
              HeapFree(v1236, 0, v1235);
              *((_QWORD *)v985 + 3) = 0LL;
            }
            v1237 = (void *)*((_QWORD *)v985 + 5);
            if ( v1237 )
            {
              v1238 = GetProcessHeap();
              HeapFree(v1238, 0, v1237);
              *((_QWORD *)v985 + 5) = 0LL;
            }
            v1239 = GetProcessHeap();
            HeapFree(v1239, 0, v985);
          }
          if ( v1353 )
          {
            v1240 = GetProcessHeap();
            HeapFree(v1240, 0, v1353);
          }
          if ( v996 >= 0 )
          {
            if ( (_DWORD)v1711 )
            {
              v1241 = (unsigned int *)v1712;
              if ( v1712 )
              {
                v1691[0] = v1712;
                if ( (int)RtlULongLongAdd(v1712, 4LL, v1691) >= 0 )
                {
                  v1245 = (int *)v1691[0];
                  v1570[1] = v1243;
                  if ( !v1243 )
                    v1245 = 0LL;
                  v1691[0] = v1245;
                  v1691[1] = v1245;
                  if ( v1243 == (_DWORD)v1244 )
                  {
                    v1532 = *v1245;
                    if ( v1532 >= 0 && v1242 > 1 )
                    {
                      for ( v1692[0] = v1241;
                            (int)RtlULongLongAdd(v1241, v1244, v1692) >= 0
                         && (int)RtlULongLongAdd(v1692[0], *v1241, v1692) >= 0;
                            v1241 = (unsigned int *)v1692[0] )
                      {
                        if ( v1246 != -1 )
                        {
                          v1247 = *(_DWORD *)v1692[0];
                          if ( (int)RtlULongLongAdd(v1692[0], v1244, v1692) >= 0 )
                          {
                            v1248 = (_QWORD *)v1692[0];
                            v1570[2] = v1247;
                            if ( !v1247 )
                              v1248 = 0LL;
                            v1692[0] = v1248;
                            v1692[1] = v1248;
                            if ( v1247 == 8 )
                              v1692[2] = *v1248;
                          }
                          goto LABEL_1336;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_1336;
        }
        v1162 = v1159 >> (8 * (8 - v1155)) << (8 * (8 - v1155));
      }
      else
      {
        v1162 = 0;
      }
      v1568 = v1162;
      goto LABEL_1577;
    }
    if ( v1396 )
    {
      *(_DWORD *)v1124 = v1278;
      v1126 = GetProcessHeap();
      v1127 = HeapAlloc(v1126, 8u, v1417);
      if ( !v1127 )
        goto LABEL_1524;
      v1125[1] = v1127;
      memcpy_0(v1127, v1396, v1417);
    }
    else
    {
      *(_DWORD *)v1124 = 0;
      v1124[1] = 0LL;
    }
    if ( v1433 )
    {
      *((_DWORD *)v1125 + 4) = v1115;
      v1128 = GetProcessHeap();
      v1129 = HeapAlloc(v1128, 8u, v1115);
      if ( !v1129 )
        goto LABEL_1524;
      v1125[3] = v1129;
      memcpy_0(v1129, v1433, v1115);
    }
    else
    {
      *((_DWORD *)v1125 + 4) = 0;
      v1125[3] = 0LL;
    }
    if ( !v1684 )
    {
      *((_DWORD *)v1125 + 8) = 0;
      v1125[5] = 0LL;
      goto LABEL_1534;
    }
    *((_DWORD *)v1125 + 8) = v1313;
    v1130 = GetProcessHeap();
    v1131 = HeapAlloc(v1130, 8u, v1313);
    if ( v1131 )
    {
      v1125[5] = v1131;
      memcpy_0(v1131, v1684, v1313);
LABEL_1534:
      v1407 = (unsigned int *)v1125;
      v1110 = 0;
      v1125 = 0LL;
LABEL_1535:
      if ( v1125 )
      {
        v1132 = (void *)v1125[1];
        if ( v1132 )
        {
          v1133 = GetProcessHeap();
          HeapFree(v1133, 0, v1132);
          v1125[1] = 0LL;
        }
        v1134 = (void *)v1125[3];
        if ( v1134 )
        {
          v1135 = GetProcessHeap();
          HeapFree(v1135, 0, v1134);
          v1125[3] = 0LL;
        }
        v1136 = (void *)v1125[5];
        if ( v1136 )
        {
          v1137 = GetProcessHeap();
          HeapFree(v1137, 0, v1136);
          v1125[5] = 0LL;
        }
        v1138 = GetProcessHeap();
        HeapFree(v1138, 0, v1125);
      }
      goto LABEL_1543;
    }
LABEL_1524:
    v1110 = -1073741801;
    goto LABEL_1535;
  }
  if ( (int)RtlUIntAdd((unsigned int)v960, (unsigned int)v948, &v1540) >= 0 )
  {
    v1541 = v1540;
    if ( (int)RtlUIntAdd(HIDWORD(v1697), v1540, (char *)&v1697 + 4) >= 0 )
    {
      v963 = v960 - 3;
      v962 = v960 - 3 + v1697;
      LODWORD(v1697) = v962;
      goto LABEL_1318;
    }
  }
LABEL_1336:
  v943 = v1445;
  v944 = v1459;
LABEL_1675:
  v1697 = 0LL;
  v1249 = v1698;
  if ( v1698 )
  {
    v1250 = GetProcessHeap();
    HeapFree(v1250, 0, v1249);
    v1698 = 0LL;
  }
  v1711 = 0LL;
  v1251 = v1712;
  if ( v1712 )
  {
    v1252 = GetProcessHeap();
    HeapFree(v1252, 0, v1251);
    v1712 = 0LL;
  }
  if ( v943 )
  {
    v1253 = GetProcessHeap();
    HeapFree(v1253, 0, v943);
  }
  if ( v944 )
  {
    v1254 = GetProcessHeap();
    HeapFree(v1254, 0, v944);
  }
LABEL_1683:
  v1255 = v1524;
  v1570[3] = v1525;
  v1605 = v1419;
  v1457 = 0LL;
LABEL_1685:
  while ( _InterlockedCompareExchange(&dword_1800AC294, 1, 0) )
    ;
  v1256 = dword_1800AC00C;
  if ( dword_1800AC00C > 0 )
  {
    --dword_1800AC00C;
    if ( v1256 == 1 )
    {
      v1257 = (HMODULE *)&unk_1800AC220;
      v1258 = 4LL;
      do
      {
        if ( *v1257 )
          FreeLibrary(*v1257);
        v1257 += 3;
        --v1258;
      }
      while ( v1258 );
      memset_0(&unk_1800AC220, 0, 0x60uLL);
      memcpy_0(off_1800AB000, off_1800863A0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800AC294, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1457);
  if ( v84 >= 0 )
  {
    if ( v1255 == 4 )
    {
      Ptr = (int *)SP<unsigned char,SP_HLOCAL<unsigned char>>::GetPtrAs<unsigned long>(&v1605);
      v3 = v1522;
      v1517 = *Ptr;
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  switch ( v84 )
  {
    case -805306316:
      v84 = -1073418222;
      break;
    case -805306139:
    case -1073425151:
      v84 = -1073418201;
      break;
    case -805306306:
      v84 = -1073418200;
      break;
    case -2147024774:
LABEL_13:
      v3 = -1073418210;
      goto LABEL_9;
  }
  v3 = v84;
LABEL_9:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1605);
  v6 = v1517;
  if ( v3 < 0 )
    v6 = 0;
  v1517 = v6;
  LOBYTE(v2) = v6 == 1;
  *v1604 = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried = 1;
LABEL_12:
  ReleaseSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  return (unsigned int)v3;
}
