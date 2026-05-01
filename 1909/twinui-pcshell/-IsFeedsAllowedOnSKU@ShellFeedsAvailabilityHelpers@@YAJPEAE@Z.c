/*
 * XREFs of ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800C7A1C
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??$GetPtrAs@K@?$SP@EV?$SP_HLOCAL@E@@@@QEBAPEAKXZ @ 0x1800D3B7C (--$GetPtrAs@K@-$SP@EV-$SP_HLOCAL@E@@@@QEBAPEAKXZ.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x1800D3B88 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x1800D3BB4 (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     ?IsNull@?$SP@EV?$SP_HLOCAL@E@@@@SA_NPEAE@Z @ 0x1800D3BE0 (-IsNull@-$SP@EV-$SP_HLOCAL@E@@@@SA_NPEAE@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800D3BF0 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D3C1C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1800D3C48 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1800D3C70 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800D3C98 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     RtlUIntAdd @ 0x1800D3CC0 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x1800D3CDC (RtlULongLongAdd.c)
 *     StringCchLengthW @ 0x1800D3CFC (StringCchLengthW.c)
 *     _alloca_probe @ 0x1800D3E70 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1800D3EDF (wcscmp_0.c)
 *     memcpy_0 @ 0x1800D3EF7 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180122E88 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::IsFeedsAllowedOnSKU(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2)
{
  int v2; // eax
  char *v3; // rax
  WCHAR *v4; // rsi
  _BYTE *v5; // r14
  int v6; // r12d
  int v7; // ebx
  int v8; // r8d
  unsigned __int8 *v9; // r15
  int v10; // r11d
  __int64 v11; // r13
  int v12; // r10d
  int v13; // r9d
  int v14; // ecx
  int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  unsigned int v18; // r8d
  int v19; // r11d
  unsigned int v20; // r8d
  int v21; // r11d
  int v22; // r8d
  unsigned int v23; // r11d
  int v24; // r8d
  int v25; // r11d
  int v26; // r8d
  unsigned int v27; // r11d
  int v28; // edx
  int v29; // r11d
  unsigned int v30; // r8d
  int v31; // r11d
  int v32; // r8d
  int v33; // r11d
  int v34; // r8d
  unsigned int v35; // edi
  int v36; // r8d
  int v37; // edi
  int v38; // r8d
  unsigned int v39; // edi
  int v40; // r8d
  int v41; // edx
  unsigned __int64 v42; // rcx
  char v43; // al
  int v44; // ebx
  unsigned int v45; // r12d
  int v46; // r13d
  int v47; // edi
  LPCWSTR v48; // rdi
  __int64 v49; // rax
  const WCHAR *v50; // rdx
  const WCHAR *v51; // rdi
  char *v52; // rsi
  __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  unsigned int v55; // r15d
  unsigned int i; // r14d
  __int64 v57; // rax
  const CHAR *v58; // rdx
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  __int64 v61; // rbx
  HMODULE *v62; // rdi
  int v63; // esi
  signed int LastError; // edi
  __int64 v65; // r14
  bool v66; // sf
  __int64 v67; // r9
  wchar_t *j; // rbx
  wchar_t *v69; // r8
  signed int v70; // eax
  __int64 (__fastcall *v71)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v73; // r14
  bool v74; // sf
  __int64 v75; // r9
  wchar_t *k; // rbx
  wchar_t *v77; // r8
  signed int v78; // eax
  HANDLE CurrentProcess; // rax
  int v80; // eax
  HLOCAL v81; // rax
  __int64 v82; // rcx
  unsigned __int16 *v83; // rsi
  void *v84; // rbx
  HANDLE v85; // rax
  unsigned __int16 *v86; // rax
  int v87; // r12d
  unsigned __int16 *v88; // r13
  size_t v89; // rbx
  HANDLE v90; // rax
  void *v91; // rdi
  unsigned int v92; // esi
  int v93; // eax
  unsigned int v94; // edi
  int v95; // eax
  unsigned int v96; // r11d
  int v97; // eax
  int v98; // eax
  unsigned int v99; // r11d
  int v100; // r10d
  int v101; // eax
  int v102; // eax
  unsigned int v103; // r11d
  int v104; // r10d
  int v105; // eax
  int v106; // eax
  size_t v107; // rdx
  const wchar_t *v108; // rcx
  int v109; // r10d
  unsigned int v110; // r11d
  int v111; // eax
  int v112; // eax
  unsigned int v113; // r11d
  int v114; // r10d
  int v115; // eax
  int v116; // eax
  unsigned int v117; // r11d
  int v118; // r10d
  int v119; // eax
  int v120; // eax
  int v121; // r10d
  unsigned int v122; // edi
  HANDLE v123; // rax
  _DWORD *v124; // rdi
  __int64 v125; // r11
  _DWORD *v126; // rcx
  int v127; // eax
  __int64 v128; // rdx
  _DWORD *v129; // rdi
  unsigned int v130; // r9d
  int v131; // r10d
  void *v132; // rcx
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // r11
  _DWORD *v136; // rdi
  int v137; // eax
  unsigned int v138; // r9d
  int v139; // r10d
  void *v140; // rdi
  HANDLE v141; // rax
  void *v142; // rdi
  HANDLE v143; // rax
  HANDLE v144; // rax
  HANDLE v145; // rax
  signed int v146; // r13d
  DWORD ModuleFileNameW; // eax
  void *v148; // rdx
  void *v149; // rcx
  int v150; // eax
  __int64 v151; // rdx
  size_t v152; // rdx
  const wchar_t *v153; // rcx
  _DWORD *v154; // rdi
  int v155; // eax
  unsigned int v156; // r9d
  int v157; // r10d
  unsigned __int64 *v158; // rax
  __int64 v159; // r11
  int v160; // eax
  __int64 v161; // rdx
  _DWORD *v162; // rdi
  int v163; // eax
  __int64 v164; // rcx
  unsigned int v165; // r9d
  int v166; // r11d
  __int64 v167; // r10
  void *v168; // rcx
  int v169; // eax
  __int64 v170; // rdx
  __int64 v171; // r11
  _DWORD *v172; // rdi
  unsigned int v173; // r9d
  int v174; // r10d
  int *v175; // rcx
  int v176; // eax
  __int64 v177; // rdx
  unsigned int v178; // r11d
  _DWORD *v179; // rdi
  int v180; // eax
  unsigned int v181; // r9d
  int v182; // r10d
  _DWORD *v183; // rcx
  int v184; // eax
  __int64 v185; // rcx
  unsigned int v186; // r9d
  int v187; // eax
  unsigned int v188; // r9d
  unsigned int v189; // edi
  unsigned int v190; // r11d
  int v191; // eax
  unsigned int v192; // r11d
  int v193; // eax
  unsigned int v194; // r11d
  int v195; // eax
  unsigned int v196; // r11d
  int v197; // eax
  unsigned int v198; // eax
  unsigned __int8 *v199; // rdi
  unsigned __int64 v200; // rsi
  unsigned int v201; // r13d
  int v202; // r12d
  unsigned int v203; // eax
  unsigned int v204; // edi
  HANDLE v205; // rax
  _DWORD *v206; // rdi
  unsigned int v207; // r11d
  void *v208; // rcx
  HANDLE v209; // rax
  _QWORD *v210; // rbx
  int v211; // r12d
  char *v212; // r13
  unsigned __int8 v213; // al
  unsigned __int64 m; // rcx
  int v215; // r10d
  unsigned __int8 *v216; // r8
  char *v217; // r11
  unsigned int v218; // r9d
  unsigned int v219; // edx
  int v220; // r12d
  int v221; // r10d
  char v222; // r9
  int v223; // edi
  int v224; // ecx
  unsigned int v225; // r10d
  int v226; // ecx
  char v227; // di
  unsigned __int64 v228; // r12
  unsigned __int8 *v229; // rdx
  int v230; // r15d
  int v231; // ebx
  _BYTE *v232; // rax
  int v233; // r11d
  int v234; // esi
  int v235; // r8d
  int v236; // edi
  int v237; // r10d
  int v238; // r9d
  int v239; // r10d
  int v240; // r9d
  int v241; // r10d
  unsigned int v242; // r9d
  int v243; // r10d
  int v244; // r9d
  int v245; // r10d
  int v246; // r9d
  int v247; // r10d
  int v248; // r9d
  unsigned int v249; // r10d
  unsigned int v250; // r9d
  int v251; // r10d
  int v252; // r9d
  int v253; // r10d
  int v254; // r9d
  int v255; // r10d
  int v256; // r9d
  int v257; // r10d
  int v258; // r9d
  unsigned int v259; // r10d
  int v260; // r9d
  unsigned int v261; // esi
  HANDLE v262; // rax
  _QWORD *v263; // rdi
  HANDLE v264; // rax
  void *v265; // rax
  HANDLE v266; // rax
  _OWORD *v267; // rax
  HANDLE v268; // rax
  _QWORD *v269; // rax
  void *v270; // rsi
  HANDLE v271; // rax
  void *v272; // rsi
  HANDLE v273; // rax
  void *v274; // rsi
  HANDLE v275; // rax
  HANDLE v276; // rax
  void *v277; // rdi
  HANDLE v278; // rax
  void *v279; // rdi
  HANDLE v280; // rax
  void *v281; // rdi
  HANDLE v282; // rax
  void *v283; // rdi
  HANDLE v284; // rax
  HANDLE v285; // rax
  const void **v286; // rbx
  int v287; // r12d
  unsigned int v288; // eax
  unsigned int v289; // edi
  HANDLE v290; // rax
  _DWORD *v291; // rdi
  void *v292; // rcx
  void *v293; // rcx
  HANDLE v294; // rax
  int v295; // eax
  unsigned int v296; // ecx
  unsigned int v297; // eax
  unsigned int v298; // edi
  int v299; // eax
  unsigned int *v300; // rcx
  unsigned int v301; // ebx
  int v302; // r9d
  int v303; // r9d
  unsigned int *v304; // rax
  unsigned int v305; // edi
  HANDLE v306; // rax
  unsigned int *v307; // rax
  unsigned int *v308; // rbx
  unsigned int *v309; // rcx
  unsigned int v310; // ebx
  int v311; // r9d
  int v312; // r9d
  unsigned int *v313; // rax
  unsigned int v314; // r10d
  unsigned int v315; // r11d
  unsigned int v316; // eax
  void *v317; // rbx
  HANDLE v318; // rax
  _QWORD *v319; // rbx
  void *v320; // rdi
  HANDLE v321; // rax
  void *v322; // rdi
  HANDLE v323; // rax
  void *v324; // rdi
  HANDLE v325; // rax
  HANDLE v326; // rax
  void *v327; // rdi
  HANDLE v328; // rax
  HANDLE v329; // rax
  void *v330; // rdi
  HANDLE v331; // rax
  void *v332; // rdi
  HANDLE v333; // rax
  void *v334; // rdi
  HANDLE v335; // rax
  HANDLE v336; // rax
  unsigned __int16 *v337; // rdi
  HANDLE v338; // rax
  signed int v339; // eax
  unsigned int v340; // edi
  FARPROC v341; // rax
  int v342; // eax
  unsigned int *v343; // r10
  int v344; // r12d
  unsigned int *v345; // rbx
  unsigned __int16 *v346; // rdi
  SIZE_T v347; // r13
  unsigned int *v348; // rcx
  SIZE_T v349; // rbx
  SIZE_T v350; // rsi
  unsigned int v351; // r9d
  HANDLE v352; // rax
  _QWORD *v353; // rax
  _QWORD *v354; // rdi
  void *v355; // r12
  HANDLE v356; // rax
  void *v357; // rax
  void *v358; // r12
  HANDLE v359; // rax
  void *v360; // rax
  void *v361; // rbx
  HANDLE v362; // rax
  void *v363; // rax
  void *v364; // rbx
  HANDLE v365; // rax
  void *v366; // rbx
  HANDLE v367; // rax
  void *v368; // rbx
  HANDLE v369; // rax
  HANDLE v370; // rax
  _QWORD *v371; // rdi
  void *v372; // rbx
  HANDLE v373; // rax
  void *v374; // rbx
  HANDLE v375; // rax
  void *v376; // rbx
  HANDLE v377; // rax
  HANDLE v378; // rax
  unsigned __int8 *v379; // rsi
  __int64 v380; // rbx
  unsigned __int64 v381; // rbx
  _BYTE *v382; // rax
  _BYTE *v383; // r11
  unsigned __int8 v384; // al
  unsigned __int8 *v385; // r8
  _BYTE *v386; // rsi
  int v387; // edi
  int v388; // r13d
  int v389; // r12d
  char v390; // r9
  int v391; // edx
  unsigned int v392; // edx
  int v393; // ecx
  char v394; // r9
  int v395; // edx
  unsigned __int64 v396; // r12
  _BYTE *v397; // r11
  int v398; // r14d
  unsigned __int8 *v399; // rbx
  int v400; // esi
  unsigned int v401; // eax
  int v402; // r9d
  int v403; // r8d
  int v404; // ecx
  int v405; // r9d
  unsigned int v406; // r10d
  int v407; // r8d
  unsigned int v408; // edi
  int v409; // r10d
  unsigned int v410; // edi
  int v411; // r10d
  int v412; // edi
  unsigned int v413; // r10d
  int v414; // edi
  int v415; // r10d
  int v416; // edi
  unsigned int v417; // r10d
  int v418; // edi
  int v419; // r10d
  unsigned int v420; // edi
  int v421; // r10d
  int v422; // edi
  int v423; // r10d
  int v424; // edi
  int v425; // r10d
  int v426; // edi
  int v427; // r10d
  int v428; // edi
  unsigned int v429; // r10d
  int v430; // edi
  int v431; // edx
  unsigned __int64 n; // rcx
  int v433; // ebx
  unsigned int v434; // r9d
  unsigned __int16 *v435; // rbx
  HANDLE v436; // rax
  int v437; // r12d
  int v438; // r9d
  SIZE_T v439; // r13
  int v440; // r9d
  unsigned int v441; // r9d
  void *v442; // r10
  void *v443; // rbx
  void *v444; // rdi
  unsigned int *v445; // rdi
  unsigned int *v446; // r10
  unsigned __int64 v447; // r10
  int v448; // eax
  unsigned int v449; // r9d
  int v450; // r11d
  HANDLE v451; // rax
  __int64 v452; // r11
  int v453; // r9d
  int *v454; // rax
  LPVOID v455; // rcx
  int v456; // edi
  unsigned int v457; // r9d
  int v458; // edi
  int *v459; // r10
  int *v460; // rax
  LPVOID v461; // rcx
  unsigned int v462; // edi
  unsigned int v463; // r9d
  int v464; // edi
  int *v465; // r10
  int *v466; // rax
  LPVOID v467; // rcx
  unsigned int v468; // edi
  unsigned int v469; // r9d
  int v470; // r10d
  void *v471; // rdi
  LPVOID v472; // rcx
  unsigned int v473; // r11d
  int v474; // r9d
  int v475; // r11d
  int v476; // r9d
  int *v477; // rax
  unsigned int *v478; // rcx
  unsigned int v479; // ebx
  unsigned int v480; // r10d
  unsigned int v481; // r11d
  int v482; // r9d
  int v483; // r9d
  int *v484; // rax
  int v485; // ecx
  __int64 v486; // rax
  unsigned int v487; // edi
  int v488; // eax
  char *v489; // rax
  int v490; // esi
  _BYTE *v491; // r15
  int v492; // edi
  int v493; // ebx
  unsigned __int8 *v494; // r14
  __int64 v495; // r12
  int v496; // r11d
  int v497; // r10d
  int v498; // ecx
  int v499; // r11d
  int v500; // ebx
  int v501; // r10d
  unsigned int v502; // r13d
  int v503; // ebx
  unsigned int v504; // r13d
  int v505; // ebx
  int v506; // r13d
  unsigned int v507; // ebx
  int v508; // r13d
  int v509; // ebx
  int v510; // r13d
  unsigned int v511; // ebx
  int v512; // r13d
  int v513; // ebx
  unsigned int v514; // r9d
  int v515; // ebx
  int v516; // r9d
  int v517; // ebx
  int v518; // r9d
  unsigned int v519; // r8d
  int v520; // r9d
  int v521; // r8d
  int v522; // r9d
  unsigned int v523; // r8d
  int v524; // r9d
  int v525; // edx
  unsigned __int64 v526; // rcx
  void *v527; // rdx
  char v528; // al
  int v529; // esi
  int v530; // ebx
  LPCWSTR v531; // rbx
  const WCHAR *v532; // rdx
  __int64 v533; // rax
  const WCHAR *v534; // rbx
  char *v535; // r13
  __int64 v536; // rcx
  unsigned __int64 v537; // rcx
  unsigned int v538; // eax
  unsigned int v539; // ecx
  const CHAR *v540; // rdx
  __int64 v541; // rax
  __int64 (__fastcall *v542)(); // rcx
  HANDLE v543; // rax
  __int64 v544; // rsi
  HMODULE *v545; // rbx
  int v546; // eax
  char *v547; // rax
  int v548; // esi
  _BYTE *v549; // r14
  int v550; // edi
  unsigned __int8 *v551; // r15
  int v552; // ebx
  __int64 v553; // r12
  int v554; // r11d
  int v555; // r10d
  int v556; // ecx
  int v557; // r11d
  int v558; // ebx
  int v559; // r10d
  unsigned int v560; // r13d
  int v561; // ebx
  unsigned int v562; // r13d
  int v563; // ebx
  int v564; // r13d
  unsigned int v565; // ebx
  int v566; // r13d
  int v567; // ebx
  int v568; // r13d
  unsigned int v569; // ebx
  int v570; // r13d
  int v571; // ebx
  unsigned int v572; // r9d
  int v573; // ebx
  int v574; // r9d
  int v575; // ebx
  int v576; // r9d
  unsigned int v577; // r8d
  int v578; // r9d
  int v579; // r8d
  int v580; // r9d
  unsigned int v581; // r8d
  int v582; // r9d
  int v583; // edx
  char v584; // al
  unsigned __int64 v585; // rcx
  int v586; // esi
  void *v587; // rdx
  int v588; // ebx
  LPCWSTR v589; // rbx
  const WCHAR *v590; // rdx
  __int64 v591; // rax
  const WCHAR *v592; // rbx
  char *v593; // r13
  __int64 v594; // rcx
  unsigned __int64 v595; // rcx
  unsigned int v596; // eax
  unsigned int v597; // ecx
  const CHAR *v598; // rdx
  __int64 v599; // rax
  __int64 (__fastcall *v600)(); // rcx
  HANDLE v601; // rax
  __int64 v602; // rsi
  HMODULE *v603; // rbx
  int v604; // esi
  signed int v605; // eax
  int v606; // edi
  _QWORD *v607; // rbx
  _DWORD *v608; // rsi
  signed int v609; // eax
  void *v610; // rax
  __int64 v611; // rcx
  void *v612; // rax
  _DWORD *v613; // rdi
  bool v614; // sf
  _DWORD *v615; // rax
  __int64 v616; // rsi
  _DWORD *v617; // r14
  unsigned int kk; // r15d
  __int64 v619; // rax
  unsigned int v620; // r11d
  unsigned int v621; // r9d
  char IsNull; // r10
  __int64 v623; // r8
  unsigned int v624; // edx
  unsigned int *v625; // rdi
  _DWORD *v626; // rcx
  __int64 v627; // rdi
  const wchar_t *v628; // rcx
  __int64 v629; // r8
  const wchar_t **v630; // rdx
  __int64 v631; // rax
  __int64 v632; // rax
  unsigned __int16 *v633; // rsi
  __int64 v634; // rax
  char *v635; // rax
  int v636; // ecx
  _BYTE *v637; // rsi
  int v638; // r12d
  unsigned __int8 *v639; // r14
  int v640; // ebx
  int v641; // r10d
  __int64 v642; // r15
  int v643; // r9d
  int v644; // r8d
  int v645; // eax
  int v646; // r9d
  int v647; // r10d
  int v648; // r8d
  unsigned int v649; // edi
  int v650; // r10d
  unsigned int v651; // edi
  int v652; // r10d
  int v653; // edi
  unsigned int v654; // r10d
  int v655; // edi
  int v656; // r10d
  int v657; // edi
  unsigned int v658; // r10d
  int v659; // ecx
  int v660; // r10d
  unsigned int v661; // edi
  int v662; // r10d
  int v663; // edi
  int v664; // r10d
  int v665; // edi
  unsigned int v666; // r10d
  int v667; // edi
  int v668; // r10d
  int v669; // edi
  unsigned int v670; // r10d
  int v671; // edi
  int v672; // ecx
  unsigned __int64 v673; // rax
  void *v674; // r11
  __m128i v675; // xmm1
  __m128i v676; // xmm0
  __m128i v677; // xmm0
  __m128i v678; // xmm1
  __m128i v679; // xmm1
  __m128i v680; // xmm1
  char v681; // al
  __int64 v682; // rcx
  int v683; // r9d
  __int64 v684; // r8
  _QWORD *v685; // rdi
  unsigned int mm; // edx
  __int64 v687; // rax
  void *v688; // rax
  __int16 *v689; // rcx
  unsigned int v690; // edx
  __int64 v691; // rsi
  __int64 v692; // rax
  __int16 v693; // di
  _WORD *v694; // rcx
  __int64 v695; // rdi
  __int64 v696; // rax
  int v697; // eax
  void *v698; // rax
  void *v699; // rdx
  __int64 v700; // rax
  int v701; // eax
  _QWORD *v702; // rax
  signed int v703; // eax
  __int64 v704; // r8
  __int64 v705; // rax
  __int64 v706; // rsi
  _WORD *v707; // rdi
  __int64 v708; // rcx
  void *v709; // rcx
  bool v710; // zf
  void **v711; // rcx
  void **v712; // rax
  void **v713; // rax
  signed int v714; // eax
  unsigned int v715; // edi
  unsigned __int16 *v716; // rbx
  __int64 v717; // rsi
  signed int v718; // eax
  int v719; // ebx
  int v720; // eax
  __int64 v721; // rbx
  HMODULE *v722; // rdi
  unsigned int v723; // edi
  __int64 v724; // rax
  int v725; // r13d
  int v726; // eax
  __int64 v727; // rax
  signed int v728; // eax
  unsigned __int16 *v729; // rax
  __int64 v730; // rbx
  signed int v731; // eax
  int v732; // eax
  __int64 v733; // rax
  signed int v734; // eax
  int v735; // ebx
  unsigned int v736; // edx
  int v737; // eax
  unsigned int v738; // esi
  void *v739; // rdi
  unsigned int v740; // ebx
  void *v741; // rdi
  __int64 v742; // rdx
  __int64 v743; // rdi
  signed int v744; // eax
  unsigned int v745; // esi
  void *v746; // rdi
  __int64 v747; // rbx
  int v748; // eax
  unsigned __int64 v749; // rdx
  int v750; // eax
  __int64 v751; // rax
  bool v752; // sf
  int v753; // edx
  int v754; // esi
  int v755; // ebx
  int v756; // edi
  CToastCenterExperienceManager *v757; // rax
  int v758; // edx
  int v759; // ecx
  CToastCenterExperienceManager *v760; // rax
  LPVOID v761; // rbx
  int v762; // eax
  void *v763; // rdi
  __int64 v764; // rax
  __int64 v765; // rax
  CToastCenterExperienceManager *v766; // rsi
  signed int v767; // ebx
  SIZE_T v768; // rdi
  signed int v769; // eax
  int v770; // r13d
  char *v771; // rcx
  __int64 v772; // rax
  __int64 (__fastcall *v773)(); // rdi
  __int64 v774; // rax
  unsigned __int8 *v775; // r9
  int v776; // edi
  unsigned __int64 v777; // rdx
  __int64 v778; // r8
  int v779; // ecx
  int v780; // r11d
  int v781; // r13d
  int v782; // eax
  SIZE_T v783; // r15
  unsigned __int16 *v784; // rax
  int v785; // edi
  signed __int64 v786; // r10
  int v787; // r8d
  int v788; // edi
  int v789; // edx
  int v790; // edi
  int v791; // edx
  int v792; // ecx
  void *v793; // rdi
  LPVOID v794; // rbx
  __int64 v795; // rax
  __int64 v796; // rax
  CToastCenterExperienceManager *v797; // rsi
  signed int v798; // ebx
  SIZE_T v799; // rdi
  signed int v800; // eax
  char *v801; // rcx
  __int64 v802; // rax
  __int64 (__fastcall *v803)(); // rdi
  __int64 v804; // rax
  __int64 v805; // rdx
  __int64 v806; // r8
  int v807; // eax
  __int64 v808; // r8
  int v809; // edi
  SIZE_T v810; // rdx
  int v811; // ecx
  int v812; // r11d
  int v813; // r13d
  char v814; // r14
  unsigned __int16 *v815; // rdi
  unsigned __int16 *v816; // rax
  unsigned __int8 *v817; // r9
  signed __int64 v818; // r10
  int v819; // r8d
  int v820; // ecx
  int v821; // edi
  int v822; // edx
  int v823; // ecx
  int v824; // edi
  int v825; // edx
  int v826; // edi
  int v827; // ecx
  int v828; // ecx
  LPVOID v829; // rbx
  CToastCenterExperienceManager *v830; // r13
  char v831; // al
  int v832; // edi
  unsigned int v833; // esi
  int v834; // ecx
  int v835; // edi
  int v836; // r13d
  void *v837; // rax
  void *v838; // rbx
  __int64 v839; // rax
  signed int v840; // ebx
  int v841; // edi
  SIZE_T v842; // rax
  bool v843; // sf
  int v844; // eax
  unsigned __int16 *v845; // rdi
  SIZE_T v846; // rcx
  void *v847; // rax
  __int64 (__fastcall *v848)(); // rdi
  __int64 v849; // rax
  unsigned __int16 *v850; // rdi
  __int64 v851; // rdx
  __int64 v852; // r8
  int v853; // r10d
  __int64 v854; // r8
  __int64 v855; // rdx
  int v856; // ecx
  int v857; // r11d
  int v858; // eax
  __int64 v859; // rax
  __int64 v860; // r8
  unsigned __int8 *v861; // rdi
  __int64 v862; // rcx
  unsigned __int16 *v863; // rcx
  unsigned __int8 *v864; // r9
  signed __int64 v865; // r10
  int v866; // r8d
  int v867; // edi
  int v868; // edx
  int v869; // edi
  int v870; // edx
  int v871; // edi
  int v872; // ecx
  void *v873; // rdi
  __int64 v874; // rax
  unsigned __int16 *v875; // rdi
  int v876; // r13d
  signed int v877; // ebx
  SIZE_T v878; // rax
  signed int v879; // eax
  int v880; // eax
  int v881; // r13d
  char *v882; // rcx
  unsigned __int16 *v883; // rax
  __int64 (__fastcall *v884)(); // rdi
  __int64 v885; // rax
  int v886; // eax
  int v887; // edx
  int v888; // r8d
  int v889; // r9d
  int v890; // ecx
  int v891; // r11d
  int v892; // r13d
  char v893; // r12
  void *v894; // r14
  unsigned __int8 *v895; // rdx
  SIZE_T v896; // rax
  char *v897; // rax
  int v898; // edi
  unsigned __int8 *v899; // r9
  signed __int64 v900; // r10
  int v901; // r8d
  int v902; // ecx
  int v903; // edi
  int v904; // edx
  int v905; // ecx
  int v906; // edi
  int v907; // edx
  int v908; // ecx
  __int64 v909; // rcx
  __int64 v910; // rcx
  __int64 v911; // rcx
  int v912; // eax
  HMODULE *v913; // rdi
  __int64 v914; // rbx
  int v915; // eax
  int v916; // eax
  char *v917; // rax
  _BYTE *v918; // r14
  __int64 v919; // rax
  int v920; // r15d
  unsigned __int8 *v921; // rbx
  int v922; // r12d
  int v923; // esi
  int v924; // r11d
  int v925; // r10d
  int v926; // r9d
  int v927; // ecx
  int v928; // r10d
  int v929; // r11d
  int v930; // r9d
  unsigned int v931; // esi
  int v932; // r11d
  unsigned int v933; // esi
  int v934; // r11d
  int v935; // esi
  unsigned int v936; // r11d
  int v937; // esi
  int v938; // r11d
  int v939; // esi
  unsigned int v940; // r11d
  int v941; // esi
  int v942; // r11d
  unsigned int v943; // r8d
  int v944; // r11d
  int v945; // r8d
  int v946; // r11d
  int v947; // r8d
  unsigned int v948; // edi
  int v949; // r8d
  int v950; // edi
  int v951; // r8d
  unsigned int v952; // edi
  int v953; // r8d
  int v954; // edx
  int v955; // ebx
  unsigned __int64 v956; // rcx
  void *v957; // r13
  char v958; // al
  int v959; // edi
  unsigned int v960; // r13d
  LPCWSTR v961; // rdi
  const WCHAR *v962; // rdx
  __int64 v963; // rax
  const WCHAR *v964; // rdi
  char *v965; // rsi
  __int64 v966; // rcx
  unsigned __int64 v967; // rcx
  unsigned int v968; // eax
  const CHAR *v969; // rdx
  __int64 v970; // rax
  __int64 (__fastcall *v971)(); // rcx
  HANDLE v972; // rax
  HMODULE *v973; // rdi
  __int64 v974; // rbx
  HMODULE *v975; // rdi
  __int64 v976; // rbx
  int v977; // eax
  void *v978; // rbx
  void *v979; // rsi
  HANDLE v980; // rax
  void *v981; // rax
  void *v982; // r13
  size_t v983; // rbx
  HANDLE v984; // rax
  void *v985; // rax
  void *v986; // rdi
  unsigned int v987; // esi
  unsigned int v988; // r10d
  int v989; // eax
  unsigned int v990; // r10d
  int v991; // r9d
  int v992; // eax
  unsigned int v993; // r10d
  int v994; // r9d
  int v995; // eax
  int v996; // r9d
  unsigned int v997; // edi
  HANDLE v998; // rax
  unsigned int *v999; // rax
  unsigned int *v1000; // rdi
  unsigned int v1001; // r10d
  LPVOID v1002; // r11
  int *v1003; // rcx
  unsigned int v1004; // edi
  int v1005; // r13d
  void *v1006; // rdi
  HANDLE v1007; // rax
  void *v1008; // rdi
  HANDLE v1009; // rax
  HANDLE v1010; // rax
  HANDLE v1011; // rax
  int v1012; // ebx
  unsigned int *v1013; // r9
  __int64 v1014; // r9
  int v1015; // r10d
  _DWORD *v1016; // r9
  void *v1017; // rcx
  int v1018; // eax
  unsigned int v1019; // r10d
  unsigned int *v1020; // r9
  __int64 v1021; // r9
  int v1022; // r10d
  int v1023; // ebx
  unsigned int *v1024; // r9
  void *v1025; // rdx
  void *v1026; // rcx
  unsigned int v1027; // r10d
  unsigned int *v1028; // r9
  __int64 v1029; // r9
  int v1030; // r10d
  _DWORD *v1031; // r9
  unsigned __int64 *v1032; // rax
  __int64 v1033; // rcx
  unsigned int v1034; // edi
  void *v1035; // r11
  _QWORD *v1036; // rsi
  int *v1037; // r13
  int v1038; // edi
  unsigned int v1039; // r9d
  LPVOID v1040; // r10
  __int64 *v1041; // r11
  unsigned int v1042; // eax
  unsigned int v1043; // edi
  HANDLE v1044; // rax
  char *v1045; // rax
  char *v1046; // rbx
  unsigned int v1047; // r9d
  void *v1048; // rcx
  HANDLE v1049; // rax
  int v1050; // edi
  _QWORD *v1051; // r13
  int v1052; // edi
  SIZE_T v1053; // rbx
  unsigned __int16 *v1054; // r11
  unsigned __int8 *v1055; // r8
  unsigned __int8 v1056; // al
  SIZE_T v1057; // rcx
  unsigned int v1058; // edx
  int v1059; // r10d
  _BYTE *v1060; // r9
  unsigned int v1061; // edi
  int v1062; // r11d
  char v1063; // r10
  int v1064; // r15d
  int v1065; // edx
  int v1066; // ecx
  unsigned int v1067; // r10d
  int v1068; // ecx
  char v1069; // r11
  unsigned __int8 *v1070; // rdi
  char *v1071; // r15
  int v1072; // r11d
  int v1073; // esi
  int v1074; // ebx
  unsigned int v1075; // r12d
  _BYTE *v1076; // rax
  int v1077; // r9d
  int v1078; // r8d
  int v1079; // r10d
  int v1080; // edi
  int v1081; // r10d
  int v1082; // edi
  int v1083; // r10d
  unsigned int v1084; // edi
  int v1085; // r10d
  int v1086; // edi
  int v1087; // r10d
  int v1088; // edi
  int v1089; // r10d
  int v1090; // edi
  unsigned int v1091; // r10d
  unsigned int v1092; // edi
  int v1093; // r10d
  int v1094; // edi
  int v1095; // r10d
  int v1096; // edi
  int v1097; // r10d
  int v1098; // edi
  int v1099; // r10d
  int v1100; // edi
  unsigned int v1101; // r10d
  int v1102; // edi
  unsigned int v1103; // edi
  HANDLE v1104; // rax
  _DWORD *v1105; // rax
  _DWORD *v1106; // rbx
  HANDLE v1107; // rax
  void *v1108; // rax
  HANDLE v1109; // rax
  _OWORD *v1110; // rax
  HANDLE v1111; // rax
  _QWORD *v1112; // rax
  void *v1113; // r14
  HANDLE v1114; // rax
  void *v1115; // r14
  HANDLE v1116; // rax
  void *v1117; // r14
  HANDLE v1118; // rax
  HANDLE v1119; // rax
  void *v1120; // rbx
  HANDLE v1121; // rax
  void *v1122; // rbx
  HANDLE v1123; // rax
  void *v1124; // rbx
  HANDLE v1125; // rax
  void *v1126; // rbx
  HANDLE v1127; // rax
  HANDLE v1128; // rax
  const void **v1129; // rbx
  int v1130; // edi
  unsigned int v1131; // r9d
  unsigned int v1132; // r9d
  unsigned int v1133; // eax
  unsigned int v1134; // edi
  HANDLE v1135; // rax
  _DWORD *v1136; // r14
  void *v1137; // rcx
  void *v1138; // rcx
  HANDLE v1139; // rax
  int v1140; // eax
  unsigned int v1141; // ecx
  int v1142; // r9d
  unsigned int v1143; // eax
  int v1144; // eax
  unsigned int v1145; // r9d
  unsigned int *v1146; // rcx
  int v1147; // ebx
  unsigned int v1148; // r14d
  unsigned int v1149; // ebx
  unsigned int *v1150; // rax
  unsigned int *v1151; // rcx
  int v1152; // ebx
  unsigned int v1153; // r14d
  unsigned int v1154; // r9d
  unsigned int v1155; // ebx
  unsigned int *v1156; // rax
  unsigned int v1157; // r10d
  unsigned int v1158; // r11d
  unsigned int v1159; // eax
  void *v1160; // rbx
  HANDLE v1161; // rax
  _QWORD *v1162; // rbx
  void *v1163; // r14
  HANDLE v1164; // rax
  void *v1165; // r14
  HANDLE v1166; // rax
  void *v1167; // r14
  HANDLE v1168; // rax
  HANDLE v1169; // rax
  void *v1170; // rbx
  HANDLE v1171; // rax
  void *v1172; // rbx
  HANDLE v1173; // rax
  void *v1174; // rbx
  HANDLE v1175; // rax
  void *v1176; // rbx
  HANDLE v1177; // rax
  void *v1178; // rbx
  HANDLE v1179; // rax
  HANDLE v1180; // rax
  HANDLE v1181; // rax
  unsigned int *v1182; // rdi
  unsigned int v1183; // r9d
  int v1184; // r10d
  unsigned int v1185; // r11d
  _DWORD *v1186; // rax
  __int64 v1187; // r10
  int v1188; // r9d
  unsigned int v1189; // r11d
  unsigned int v1190; // edi
  HANDLE v1191; // rax
  int *v1192; // rax
  int *v1193; // rbx
  signed int v1194; // eax
  unsigned int v1195; // r9d
  FARPROC v1196; // rax
  int v1197; // eax
  int v1198; // edi
  int v1199; // r9d
  SIZE_T v1200; // r10
  unsigned int v1201; // r10d
  int v1202; // r9d
  SIZE_T v1203; // r14
  int v1204; // r9d
  int v1205; // r9d
  SIZE_T v1206; // r13
  int v1207; // r9d
  int v1208; // r9d
  int v1209; // r10d
  HANDLE v1210; // rax
  _QWORD *v1211; // rbx
  void *v1212; // rdi
  HANDLE v1213; // rax
  size_t v1214; // rsi
  void *v1215; // rax
  void *v1216; // rdi
  HANDLE v1217; // rax
  void *v1218; // rax
  void *v1219; // rdi
  HANDLE v1220; // rax
  void *v1221; // rax
  void *v1222; // rsi
  HANDLE v1223; // rax
  void *v1224; // rsi
  HANDLE v1225; // rax
  void *v1226; // rsi
  HANDLE v1227; // rax
  HANDLE v1228; // rax
  _QWORD *v1229; // rbx
  void *v1230; // r14
  HANDLE v1231; // rax
  void *v1232; // r14
  HANDLE v1233; // rax
  void *v1234; // r14
  HANDLE v1235; // rax
  HANDLE v1236; // rax
  unsigned __int8 *v1237; // rdi
  unsigned __int64 v1238; // r14
  _BYTE *v1239; // rax
  unsigned int v1240; // r11d
  _BYTE *v1241; // r13
  unsigned __int8 v1242; // al
  unsigned __int8 *v1243; // r8
  _BYTE *v1244; // r9
  unsigned int v1245; // edx
  int v1246; // r11d
  int v1247; // ebx
  int v1248; // r10d
  char v1249; // r15
  int v1250; // edi
  unsigned int v1251; // r10d
  int v1252; // ecx
  char v1253; // di
  int v1254; // r10d
  int v1255; // eax
  _BYTE *v1256; // r14
  unsigned __int8 *v1257; // rsi
  int v1258; // edi
  char *v1259; // r13
  unsigned int v1260; // edx
  int v1261; // r12d
  int v1262; // r9d
  int v1263; // r8d
  int v1264; // ecx
  int v1265; // r9d
  int v1266; // r11d
  int v1267; // r8d
  int v1268; // r10d
  int v1269; // r11d
  unsigned int v1270; // r10d
  int v1271; // r11d
  int v1272; // r10d
  unsigned int v1273; // r11d
  int v1274; // r10d
  int v1275; // r11d
  int v1276; // r10d
  unsigned int v1277; // r11d
  int v1278; // r10d
  int v1279; // r11d
  unsigned int v1280; // r10d
  int v1281; // r11d
  int v1282; // r10d
  int v1283; // r11d
  int v1284; // r10d
  unsigned int v1285; // edi
  int v1286; // r10d
  int v1287; // edi
  int v1288; // r10d
  unsigned int v1289; // edi
  int v1290; // ecx
  int v1291; // edx
  int v1292; // edi
  unsigned __int64 ii; // rcx
  int *v1294; // rbx
  int v1295; // edi
  unsigned int v1296; // r9d
  HANDLE v1297; // rax
  int v1298; // edi
  int v1299; // r9d
  SIZE_T v1300; // r15
  int v1301; // r9d
  unsigned int v1302; // r9d
  void *v1303; // r11
  void *v1304; // rbx
  void *v1305; // r13
  unsigned __int64 v1306; // r9
  unsigned __int64 v1307; // r11
  unsigned int *v1308; // r9
  unsigned __int64 v1309; // r11
  int v1310; // eax
  __int64 v1311; // r9
  unsigned int v1312; // r10d
  HANDLE v1313; // rax
  int v1314; // edi
  _QWORD *v1315; // rax
  int v1316; // eax
  __int64 v1317; // rsi
  HMODULE *v1318; // rdi
  int v1319; // edi
  int *Ptr; // rax
  int v1322; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1323; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v1324; // [rsp+64h] [rbp-9Ch]
  unsigned int jj; // [rsp+68h] [rbp-98h]
  unsigned int v1326; // [rsp+68h] [rbp-98h]
  int v1327; // [rsp+68h] [rbp-98h]
  int v1328; // [rsp+68h] [rbp-98h]
  int v1329; // [rsp+68h] [rbp-98h]
  int v1330; // [rsp+68h] [rbp-98h]
  int v1331; // [rsp+68h] [rbp-98h]
  int v1332; // [rsp+68h] [rbp-98h]
  int v1333; // [rsp+68h] [rbp-98h]
  int v1334; // [rsp+68h] [rbp-98h]
  unsigned int v1335; // [rsp+68h] [rbp-98h]
  void *v1336; // [rsp+70h] [rbp-90h]
  __int64 v1337; // [rsp+70h] [rbp-90h]
  unsigned int v1338; // [rsp+70h] [rbp-90h]
  unsigned int v1339; // [rsp+70h] [rbp-90h]
  int v1340; // [rsp+70h] [rbp-90h]
  int v1341; // [rsp+70h] [rbp-90h]
  int v1342; // [rsp+70h] [rbp-90h]
  int v1343; // [rsp+70h] [rbp-90h]
  _QWORD *v1344; // [rsp+78h] [rbp-88h]
  int v1345; // [rsp+78h] [rbp-88h]
  int v1346; // [rsp+78h] [rbp-88h]
  int v1347; // [rsp+78h] [rbp-88h]
  int v1348; // [rsp+78h] [rbp-88h]
  LPVOID v1349; // [rsp+78h] [rbp-88h]
  int v1350; // [rsp+80h] [rbp-80h]
  int v1351; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1352; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v1353; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v1354; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v1355; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v1356; // [rsp+88h] [rbp-78h]
  int v1357; // [rsp+88h] [rbp-78h]
  unsigned int v1358; // [rsp+88h] [rbp-78h]
  unsigned int v1359; // [rsp+90h] [rbp-70h]
  int v1360; // [rsp+90h] [rbp-70h]
  int v1361; // [rsp+90h] [rbp-70h]
  int v1362; // [rsp+90h] [rbp-70h]
  unsigned int v1363; // [rsp+90h] [rbp-70h]
  int v1364; // [rsp+90h] [rbp-70h]
  void *v1365; // [rsp+98h] [rbp-68h]
  unsigned int v1366; // [rsp+98h] [rbp-68h]
  LPVOID v1367; // [rsp+98h] [rbp-68h]
  LPVOID v1368; // [rsp+98h] [rbp-68h]
  int v1369; // [rsp+98h] [rbp-68h]
  int v1370; // [rsp+98h] [rbp-68h]
  LPVOID v1371; // [rsp+98h] [rbp-68h]
  int v1372; // [rsp+A0h] [rbp-60h]
  int v1373; // [rsp+A0h] [rbp-60h]
  unsigned int v1374; // [rsp+A0h] [rbp-60h]
  unsigned int v1375; // [rsp+A0h] [rbp-60h]
  int v1376; // [rsp+A0h] [rbp-60h]
  __int64 v1377; // [rsp+A0h] [rbp-60h]
  int v1378; // [rsp+A0h] [rbp-60h]
  int v1379; // [rsp+A0h] [rbp-60h]
  int v1380; // [rsp+A0h] [rbp-60h]
  int v1381; // [rsp+A0h] [rbp-60h]
  int v1382; // [rsp+A0h] [rbp-60h]
  int v1383; // [rsp+A0h] [rbp-60h]
  int v1384; // [rsp+A0h] [rbp-60h]
  unsigned int v1385; // [rsp+A0h] [rbp-60h]
  int v1386; // [rsp+A8h] [rbp-58h]
  int v1387; // [rsp+A8h] [rbp-58h]
  int v1388; // [rsp+A8h] [rbp-58h]
  int v1389; // [rsp+A8h] [rbp-58h]
  unsigned int v1390; // [rsp+A8h] [rbp-58h]
  int v1391; // [rsp+A8h] [rbp-58h]
  int *v1392; // [rsp+A8h] [rbp-58h]
  unsigned int v1393; // [rsp+B0h] [rbp-50h]
  unsigned int v1394; // [rsp+B4h] [rbp-4Ch] BYREF
  LPVOID lpMem; // [rsp+B8h] [rbp-48h]
  SIZE_T v1396; // [rsp+C0h] [rbp-40h]
  int v1397; // [rsp+C8h] [rbp-38h]
  int v1398; // [rsp+CCh] [rbp-34h]
  int v1399; // [rsp+D0h] [rbp-30h]
  int *v1400; // [rsp+D8h] [rbp-28h]
  unsigned int v1401; // [rsp+E0h] [rbp-20h]
  int v1402; // [rsp+E4h] [rbp-1Ch]
  unsigned int v1403; // [rsp+E8h] [rbp-18h] BYREF
  int v1404; // [rsp+ECh] [rbp-14h]
  unsigned int v1405; // [rsp+F0h] [rbp-10h] BYREF
  int v1406; // [rsp+F4h] [rbp-Ch]
  unsigned int v1407; // [rsp+F8h] [rbp-8h]
  unsigned int v1408; // [rsp+FCh] [rbp-4h]
  void *v1409; // [rsp+100h] [rbp+0h]
  unsigned __int16 *v1410; // [rsp+108h] [rbp+8h]
  unsigned int dwBytes; // [rsp+110h] [rbp+10h] BYREF
  unsigned int dwBytes_4; // [rsp+114h] [rbp+14h]
  int v1413; // [rsp+118h] [rbp+18h]
  int v1414; // [rsp+11Ch] [rbp+1Ch]
  int v1415; // [rsp+120h] [rbp+20h]
  int v1416; // [rsp+124h] [rbp+24h]
  int v1417; // [rsp+128h] [rbp+28h]
  int v1418; // [rsp+12Ch] [rbp+2Ch]
  int v1419; // [rsp+130h] [rbp+30h]
  int v1420; // [rsp+134h] [rbp+34h]
  int v1421; // [rsp+138h] [rbp+38h]
  int v1422; // [rsp+13Ch] [rbp+3Ch]
  size_t v1423; // [rsp+140h] [rbp+40h] BYREF
  LPVOID v1424; // [rsp+148h] [rbp+48h]
  LPVOID v1425; // [rsp+150h] [rbp+50h]
  void *v1426; // [rsp+158h] [rbp+58h]
  unsigned __int16 *v1427; // [rsp+160h] [rbp+60h]
  unsigned int v1428; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1429; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1430; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1431; // [rsp+174h] [rbp+74h] BYREF
  void *v1432; // [rsp+178h] [rbp+78h]
  void *v1433; // [rsp+180h] [rbp+80h]
  unsigned int v1434; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1435; // [rsp+18Ch] [rbp+8Ch]
  unsigned int v1436; // [rsp+190h] [rbp+90h]
  LPVOID v1437; // [rsp+198h] [rbp+98h]
  unsigned int v1438; // [rsp+1A0h] [rbp+A0h] BYREF
  int v1439; // [rsp+1A4h] [rbp+A4h]
  char *v1440; // [rsp+1A8h] [rbp+A8h]
  unsigned int v1441; // [rsp+1B0h] [rbp+B0h]
  void *v1442; // [rsp+1B8h] [rbp+B8h] BYREF
  void *v1443; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1444; // [rsp+1C8h] [rbp+C8h]
  unsigned int v1445; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1446; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1447; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1448; // [rsp+1D8h] [rbp+D8h] BYREF
  SIZE_T v1449; // [rsp+1E0h] [rbp+E0h]
  int v1450; // [rsp+1E8h] [rbp+E8h]
  unsigned int v1451; // [rsp+1ECh] [rbp+ECh]
  unsigned int v1452; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v1453; // [rsp+1F8h] [rbp+F8h]
  LPVOID v1454; // [rsp+200h] [rbp+100h]
  void *v1455; // [rsp+208h] [rbp+108h] BYREF
  void *v1456; // [rsp+210h] [rbp+110h] BYREF
  LPVOID v1457; // [rsp+218h] [rbp+118h]
  void *v1458; // [rsp+220h] [rbp+120h] BYREF
  __int64 v1459; // [rsp+228h] [rbp+128h]
  unsigned __int64 v1460; // [rsp+230h] [rbp+130h]
  int v1461; // [rsp+238h] [rbp+138h]
  LPVOID v1462; // [rsp+240h] [rbp+140h] BYREF
  _DWORD *v1463; // [rsp+248h] [rbp+148h] BYREF
  unsigned int *v1464; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v1465; // [rsp+258h] [rbp+158h] BYREF
  int *v1466; // [rsp+260h] [rbp+160h] BYREF
  unsigned int *v1467; // [rsp+268h] [rbp+168h] BYREF
  unsigned int *v1468; // [rsp+270h] [rbp+170h] BYREF
  int *v1469; // [rsp+278h] [rbp+178h] BYREF
  LPVOID v1470; // [rsp+280h] [rbp+180h] BYREF
  unsigned int *v1471; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v1472; // [rsp+290h] [rbp+190h]
  unsigned int v1473; // [rsp+294h] [rbp+194h]
  unsigned int v1474; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v1475; // [rsp+29Ch] [rbp+19Ch]
  unsigned int v1476; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v1477; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v1478; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1479; // [rsp+2ACh] [rbp+1ACh]
  unsigned int v1480; // [rsp+2B0h] [rbp+1B0h]
  int v1481; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1482; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1483; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1484; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v1485; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1486; // [rsp+2C8h] [rbp+1C8h]
  unsigned int v1487; // [rsp+2CCh] [rbp+1CCh] BYREF
  unsigned int v1488; // [rsp+2D0h] [rbp+1D0h]
  int *v1489; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v1490; // [rsp+2E0h] [rbp+1E0h]
  __int128 v1491; // [rsp+2E8h] [rbp+1E8h]
  unsigned int v1492; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1493; // [rsp+2FCh] [rbp+1FCh] BYREF
  unsigned int v1494; // [rsp+300h] [rbp+200h]
  int v1495; // [rsp+304h] [rbp+204h]
  unsigned int v1496; // [rsp+308h] [rbp+208h] BYREF
  int v1497; // [rsp+30Ch] [rbp+20Ch]
  int v1498; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v1499; // [rsp+314h] [rbp+214h] BYREF
  unsigned int v1500; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1501; // [rsp+31Ch] [rbp+21Ch]
  unsigned int v1502; // [rsp+320h] [rbp+220h]
  _QWORD *v1503; // [rsp+328h] [rbp+228h] BYREF
  int v1504; // [rsp+330h] [rbp+230h]
  int v1505; // [rsp+334h] [rbp+234h]
  __int64 v1506; // [rsp+338h] [rbp+238h] BYREF
  wchar_t *v1507; // [rsp+340h] [rbp+240h] BYREF
  wchar_t *v1508; // [rsp+348h] [rbp+248h] BYREF
  unsigned int v1509; // [rsp+350h] [rbp+250h]
  __int128 v1510; // [rsp+358h] [rbp+258h]
  unsigned __int64 v1511; // [rsp+368h] [rbp+268h]
  LPVOID v1512; // [rsp+370h] [rbp+270h]
  LPVOID v1513; // [rsp+378h] [rbp+278h]
  LPCWSTR v1514; // [rsp+380h] [rbp+280h]
  LPCWSTR v1515; // [rsp+388h] [rbp+288h]
  _DWORD *v1516; // [rsp+390h] [rbp+290h] BYREF
  SIZE_T v1517; // [rsp+398h] [rbp+298h] BYREF
  LPCWSTR v1518; // [rsp+3A0h] [rbp+2A0h]
  void *v1519; // [rsp+3A8h] [rbp+2A8h] BYREF
  void *v1520; // [rsp+3B0h] [rbp+2B0h] BYREF
  LPVOID v1521; // [rsp+3B8h] [rbp+2B8h]
  LPCWSTR lpModuleName; // [rsp+3C0h] [rbp+2C0h]
  void *v1523; // [rsp+3C8h] [rbp+2C8h] BYREF
  void *v1524; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v1525; // [rsp+3D8h] [rbp+2D8h]
  __int64 v1526; // [rsp+3E0h] [rbp+2E0h]
  unsigned int v1527; // [rsp+3E8h] [rbp+2E8h]
  int v1528; // [rsp+3ECh] [rbp+2ECh]
  int v1529; // [rsp+3F0h] [rbp+2F0h]
  int v1530; // [rsp+3F4h] [rbp+2F4h]
  int v1531; // [rsp+3F8h] [rbp+2F8h]
  int v1532; // [rsp+3FCh] [rbp+2FCh]
  int v1533; // [rsp+400h] [rbp+300h]
  int v1534; // [rsp+404h] [rbp+304h]
  int v1535; // [rsp+408h] [rbp+308h]
  unsigned int v1536; // [rsp+40Ch] [rbp+30Ch] BYREF
  unsigned int v1537; // [rsp+410h] [rbp+310h] BYREF
  unsigned int v1538; // [rsp+414h] [rbp+314h] BYREF
  int v1539; // [rsp+418h] [rbp+318h]
  unsigned int v1540; // [rsp+420h] [rbp+320h] BYREF
  unsigned int v1541; // [rsp+424h] [rbp+324h] BYREF
  unsigned int v1542; // [rsp+428h] [rbp+328h]
  unsigned int v1543; // [rsp+42Ch] [rbp+32Ch] BYREF
  unsigned int v1544; // [rsp+430h] [rbp+330h] BYREF
  unsigned int v1545; // [rsp+434h] [rbp+334h]
  unsigned int v1546; // [rsp+438h] [rbp+338h] BYREF
  unsigned int v1547; // [rsp+43Ch] [rbp+33Ch] BYREF
  unsigned int v1548; // [rsp+440h] [rbp+340h]
  unsigned int v1549; // [rsp+444h] [rbp+344h] BYREF
  unsigned int v1550; // [rsp+448h] [rbp+348h] BYREF
  unsigned int v1551; // [rsp+44Ch] [rbp+34Ch]
  unsigned int v1552; // [rsp+450h] [rbp+350h]
  unsigned int v1553; // [rsp+454h] [rbp+354h]
  _DWORD v1554[2]; // [rsp+458h] [rbp+358h] BYREF
  unsigned int v1555; // [rsp+460h] [rbp+360h] BYREF
  unsigned int v1556; // [rsp+464h] [rbp+364h] BYREF
  unsigned int v1557; // [rsp+468h] [rbp+368h] BYREF
  unsigned int v1558; // [rsp+46Ch] [rbp+36Ch] BYREF
  unsigned int v1559; // [rsp+470h] [rbp+370h] BYREF
  unsigned int v1560; // [rsp+474h] [rbp+374h] BYREF
  unsigned int v1561; // [rsp+478h] [rbp+378h] BYREF
  unsigned int v1562; // [rsp+47Ch] [rbp+37Ch] BYREF
  int v1563; // [rsp+480h] [rbp+380h]
  unsigned int v1564; // [rsp+488h] [rbp+388h] BYREF
  unsigned int v1565; // [rsp+48Ch] [rbp+38Ch] BYREF
  unsigned int v1566; // [rsp+490h] [rbp+390h] BYREF
  unsigned int v1567; // [rsp+494h] [rbp+394h] BYREF
  unsigned int v1568; // [rsp+498h] [rbp+398h] BYREF
  unsigned int v1569; // [rsp+49Ch] [rbp+39Ch] BYREF
  wchar_t *v1570; // [rsp+4A0h] [rbp+3A0h] BYREF
  wchar_t *String1; // [rsp+4A8h] [rbp+3A8h] BYREF
  _DWORD *v1572; // [rsp+4B0h] [rbp+3B0h] BYREF
  _DWORD *v1573; // [rsp+4B8h] [rbp+3B8h] BYREF
  _DWORD *v1574; // [rsp+4C0h] [rbp+3C0h] BYREF
  size_t v1575; // [rsp+4C8h] [rbp+3C8h] BYREF
  _DWORD *v1576; // [rsp+4D0h] [rbp+3D0h] BYREF
  _DWORD *v1577; // [rsp+4D8h] [rbp+3D8h] BYREF
  _DWORD *v1578; // [rsp+4E0h] [rbp+3E0h] BYREF
  LPVOID v1579; // [rsp+4E8h] [rbp+3E8h]
  int *v1580; // [rsp+4F0h] [rbp+3F0h] BYREF
  _QWORD *v1581; // [rsp+4F8h] [rbp+3F8h] BYREF
  unsigned int v1582; // [rsp+500h] [rbp+400h] BYREF
  unsigned int *v1583; // [rsp+508h] [rbp+408h] BYREF
  unsigned int *v1584; // [rsp+510h] [rbp+410h] BYREF
  unsigned int *v1585; // [rsp+518h] [rbp+418h] BYREF
  LPVOID v1586; // [rsp+520h] [rbp+420h]
  _DWORD *v1587; // [rsp+528h] [rbp+428h] BYREF
  void *v1588; // [rsp+530h] [rbp+430h] BYREF
  unsigned int v1589; // [rsp+538h] [rbp+438h] BYREF
  unsigned int v1590; // [rsp+53Ch] [rbp+43Ch] BYREF
  unsigned int v1591; // [rsp+540h] [rbp+440h] BYREF
  int v1592; // [rsp+548h] [rbp+448h]
  unsigned int v1593; // [rsp+550h] [rbp+450h] BYREF
  unsigned int v1594; // [rsp+554h] [rbp+454h] BYREF
  int v1595; // [rsp+558h] [rbp+458h]
  unsigned int v1596; // [rsp+560h] [rbp+460h] BYREF
  unsigned int v1597; // [rsp+564h] [rbp+464h] BYREF
  unsigned int v1598; // [rsp+568h] [rbp+468h] BYREF
  unsigned int v1599; // [rsp+56Ch] [rbp+46Ch] BYREF
  unsigned int v1600; // [rsp+570h] [rbp+470h] BYREF
  int v1601; // [rsp+574h] [rbp+474h]
  int v1602; // [rsp+578h] [rbp+478h]
  unsigned int v1603; // [rsp+57Ch] [rbp+47Ch] BYREF
  unsigned __int64 v1604; // [rsp+580h] [rbp+480h]
  unsigned __int64 v1605; // [rsp+588h] [rbp+488h]
  unsigned __int64 v1606; // [rsp+590h] [rbp+490h]
  _DWORD *v1607; // [rsp+598h] [rbp+498h] BYREF
  size_t pcchLength; // [rsp+5A0h] [rbp+4A0h] BYREF
  __int64 v1609; // [rsp+5A8h] [rbp+4A8h]
  size_t v1610; // [rsp+5B0h] [rbp+4B0h]
  size_t Size; // [rsp+5B8h] [rbp+4B8h]
  unsigned __int64 v1612; // [rsp+5C0h] [rbp+4C0h]
  unsigned __int64 v1613; // [rsp+5C8h] [rbp+4C8h]
  unsigned __int64 v1614; // [rsp+5D0h] [rbp+4D0h]
  unsigned __int64 v1615; // [rsp+5D8h] [rbp+4D8h]
  size_t v1616; // [rsp+5E0h] [rbp+4E0h]
  size_t v1617; // [rsp+5E8h] [rbp+4E8h]
  unsigned __int64 v1618; // [rsp+5F0h] [rbp+4F0h]
  unsigned __int64 v1619; // [rsp+5F8h] [rbp+4F8h]
  unsigned __int64 v1620; // [rsp+600h] [rbp+500h]
  unsigned __int16 *v1621; // [rsp+608h] [rbp+508h]
  unsigned __int16 *v1622; // [rsp+610h] [rbp+510h]
  unsigned __int16 *v1623; // [rsp+618h] [rbp+518h]
  _QWORD v1624[2]; // [rsp+620h] [rbp+520h] BYREF
  SIZE_T v1625; // [rsp+630h] [rbp+530h]
  __int64 *v1626; // [rsp+638h] [rbp+538h]
  __int64 v1627; // [rsp+640h] [rbp+540h]
  _OWORD *v1628; // [rsp+648h] [rbp+548h]
  __int64 v1629; // [rsp+650h] [rbp+550h]
  unsigned int *v1630; // [rsp+658h] [rbp+558h]
  unsigned int *v1631; // [rsp+660h] [rbp+560h]
  HMODULE phModule; // [rsp+668h] [rbp+568h] BYREF
  unsigned __int64 v1633; // [rsp+670h] [rbp+570h] BYREF
  unsigned __int64 v1634; // [rsp+678h] [rbp+578h] BYREF
  unsigned int *v1635; // [rsp+680h] [rbp+580h] BYREF
  int *v1636; // [rsp+688h] [rbp+588h]
  int *v1637; // [rsp+690h] [rbp+590h]
  int *v1638; // [rsp+698h] [rbp+598h]
  void *v1639; // [rsp+6A0h] [rbp+5A0h]
  int *v1640; // [rsp+6A8h] [rbp+5A8h]
  int *v1641; // [rsp+6B0h] [rbp+5B0h]
  __int64 v1642; // [rsp+6B8h] [rbp+5B8h]
  __int64 v1643; // [rsp+6C0h] [rbp+5C0h] BYREF
  __int64 v1644; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v1645; // [rsp+6D0h] [rbp+5D0h] BYREF
  __int64 v1646; // [rsp+6D8h] [rbp+5D8h] BYREF
  int v1647; // [rsp+6E0h] [rbp+5E0h]
  __int64 v1648; // [rsp+6E8h] [rbp+5E8h] BYREF
  __int64 v1649; // [rsp+6F0h] [rbp+5F0h] BYREF
  void *v1650; // [rsp+6F8h] [rbp+5F8h]
  void *v1651; // [rsp+700h] [rbp+600h]
  unsigned __int64 v1652; // [rsp+708h] [rbp+608h]
  unsigned __int64 v1653; // [rsp+710h] [rbp+610h]
  __int64 *v1654; // [rsp+718h] [rbp+618h]
  __int64 *v1655; // [rsp+720h] [rbp+620h]
  __int64 v1656; // [rsp+728h] [rbp+628h]
  __int64 *v1657; // [rsp+730h] [rbp+630h]
  __int64 v1658; // [rsp+738h] [rbp+638h]
  unsigned int *v1659; // [rsp+740h] [rbp+640h]
  unsigned int *v1660; // [rsp+748h] [rbp+648h]
  HMODULE hModule; // [rsp+750h] [rbp+650h] BYREF
  unsigned __int64 v1662; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int64 v1663; // [rsp+760h] [rbp+660h] BYREF
  unsigned __int64 v1664; // [rsp+768h] [rbp+668h] BYREF
  ShellFeedsAvailabilityHelpers *v1665; // [rsp+770h] [rbp+670h]
  unsigned int v1666; // [rsp+778h] [rbp+678h]
  int v1667; // [rsp+77Ch] [rbp+67Ch]
  void *Src; // [rsp+780h] [rbp+680h]
  void *v1669; // [rsp+788h] [rbp+688h]
  unsigned __int64 v1670; // [rsp+790h] [rbp+690h]
  _QWORD v1671[2]; // [rsp+798h] [rbp+698h] BYREF
  unsigned int v1672; // [rsp+7A8h] [rbp+6A8h]
  unsigned int v1673; // [rsp+7ACh] [rbp+6ACh]
  int v1674; // [rsp+7B0h] [rbp+6B0h]
  _QWORD v1675[2]; // [rsp+7B8h] [rbp+6B8h] BYREF
  unsigned int v1676; // [rsp+7C8h] [rbp+6C8h]
  unsigned int v1677; // [rsp+7CCh] [rbp+6CCh]
  int v1678; // [rsp+7D0h] [rbp+6D0h]
  _QWORD v1679[5]; // [rsp+7E0h] [rbp+6E0h] BYREF
  void *v1680; // [rsp+808h] [rbp+708h] BYREF
  void *v1681; // [rsp+818h] [rbp+718h] BYREF
  unsigned __int64 *v1682; // [rsp+828h] [rbp+728h] BYREF
  void *v1683; // [rsp+838h] [rbp+738h] BYREF
  int *v1684; // [rsp+848h] [rbp+748h] BYREF
  _DWORD *v1685; // [rsp+858h] [rbp+758h] BYREF
  int *v1686; // [rsp+868h] [rbp+768h] BYREF
  void *v1687; // [rsp+878h] [rbp+778h] BYREF
  void *v1688; // [rsp+888h] [rbp+788h] BYREF
  unsigned __int64 *v1689; // [rsp+898h] [rbp+798h] BYREF
  int v1690; // [rsp+8A0h] [rbp+7A0h] BYREF
  int v1691; // [rsp+8A4h] [rbp+7A4h]
  void *v1692; // [rsp+8A8h] [rbp+7A8h]
  void *v1693; // [rsp+8B0h] [rbp+7B0h]
  void *v1694; // [rsp+8B8h] [rbp+7B8h]
  void *v1695; // [rsp+8C0h] [rbp+7C0h]
  void *v1696; // [rsp+8C8h] [rbp+7C8h]
  __int64 v1697; // [rsp+8D0h] [rbp+7D0h]
  int v1698; // [rsp+8D8h] [rbp+7D8h]
  __int128 v1699; // [rsp+8DCh] [rbp+7DCh] BYREF
  __int128 v1700; // [rsp+8ECh] [rbp+7ECh] BYREF
  unsigned int v1701; // [rsp+8FCh] [rbp+7FCh] BYREF
  unsigned int v1702; // [rsp+900h] [rbp+800h]
  unsigned int v1703; // [rsp+904h] [rbp+804h]
  unsigned int v1704; // [rsp+908h] [rbp+808h]
  _BYTE v1705[4]; // [rsp+910h] [rbp+810h] BYREF
  int v1706; // [rsp+914h] [rbp+814h]
  int v1707; // [rsp+918h] [rbp+818h]
  __int16 v1708; // [rsp+922h] [rbp+822h]
  __int64 v1709; // [rsp+928h] [rbp+828h]
  _BYTE v1710[4]; // [rsp+980h] [rbp+880h] BYREF
  int v1711; // [rsp+984h] [rbp+884h]
  int v1712; // [rsp+988h] [rbp+888h]
  SIZE_T v1713; // [rsp+998h] [rbp+898h]
  _BYTE v1714[4]; // [rsp+9F0h] [rbp+8F0h] BYREF
  int v1715; // [rsp+9F4h] [rbp+8F4h]
  int v1716; // [rsp+9F8h] [rbp+8F8h]
  unsigned __int16 *v1717; // [rsp+A08h] [rbp+908h]
  _BYTE v1718[4]; // [rsp+A60h] [rbp+960h] BYREF
  int v1719; // [rsp+A64h] [rbp+964h]
  int v1720; // [rsp+A68h] [rbp+968h]
  unsigned __int16 *v1721; // [rsp+A78h] [rbp+978h]
  _BYTE v1722[4]; // [rsp+AD0h] [rbp+9D0h] BYREF
  int v1723; // [rsp+AD4h] [rbp+9D4h]
  int v1724; // [rsp+AD8h] [rbp+9D8h]
  unsigned __int16 *v1725; // [rsp+AE8h] [rbp+9E8h]
  _BYTE v1726[24]; // [rsp+B40h] [rbp+A40h] BYREF
  char *v1727; // [rsp+B58h] [rbp+A58h]
  _BYTE v1728[24]; // [rsp+BB0h] [rbp+AB0h] BYREF
  char *v1729; // [rsp+BC8h] [rbp+AC8h]
  _BYTE v1730[24]; // [rsp+C20h] [rbp+B20h] BYREF
  SIZE_T v1731; // [rsp+C38h] [rbp+B38h]
  _BYTE v1732[24]; // [rsp+C90h] [rbp+B90h] BYREF
  char *v1733; // [rsp+CA8h] [rbp+BA8h]
  unsigned __int64 v1734; // [rsp+D00h] [rbp+C00h]
  unsigned __int64 v1735; // [rsp+D08h] [rbp+C08h]
  __int64 v1736; // [rsp+D10h] [rbp+C10h]
  __int64 v1737; // [rsp+D18h] [rbp+C18h]
  __int64 v1738; // [rsp+D20h] [rbp+C20h] BYREF
  __int64 v1739; // [rsp+D28h] [rbp+C28h]
  __int64 v1740; // [rsp+D30h] [rbp+C30h] BYREF
  __int64 v1741; // [rsp+D38h] [rbp+C38h]
  __int64 v1742; // [rsp+D40h] [rbp+C40h] BYREF
  __int64 v1743; // [rsp+D48h] [rbp+C48h]
  __int64 v1744; // [rsp+D50h] [rbp+C50h] BYREF
  __int64 v1745; // [rsp+D58h] [rbp+C58h]
  __int64 v1746; // [rsp+D60h] [rbp+C60h] BYREF
  unsigned int v1747; // [rsp+D68h] [rbp+C68h]
  int v1748; // [rsp+D6Ch] [rbp+C6Ch]
  _DWORD v1749[4]; // [rsp+D70h] [rbp+C70h] BYREF
  __int128 v1750; // [rsp+D80h] [rbp+C80h]
  __int64 v1751; // [rsp+D90h] [rbp+C90h]
  int v1752; // [rsp+D98h] [rbp+C98h]
  _DWORD v1753[4]; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int128 v1754; // [rsp+DB0h] [rbp+CB0h]
  __int64 v1755; // [rsp+DC0h] [rbp+CC0h]
  int v1756; // [rsp+DC8h] [rbp+CC8h]
  _DWORD v1757[4]; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int128 v1758; // [rsp+DE0h] [rbp+CE0h]
  __int64 v1759; // [rsp+DF0h] [rbp+CF0h]
  int v1760; // [rsp+DF8h] [rbp+CF8h]
  _DWORD v1761[4]; // [rsp+E00h] [rbp+D00h] BYREF
  __int128 v1762; // [rsp+E10h] [rbp+D10h]
  __int64 v1763; // [rsp+E20h] [rbp+D20h]
  int v1764; // [rsp+E28h] [rbp+D28h]
  _DWORD v1765[4]; // [rsp+E30h] [rbp+D30h] BYREF
  __int128 v1766; // [rsp+E40h] [rbp+D40h]
  __int64 v1767; // [rsp+E50h] [rbp+D50h]
  int v1768; // [rsp+E58h] [rbp+D58h]
  _DWORD v1769[5]; // [rsp+E60h] [rbp+D60h] BYREF
  int v1770; // [rsp+E74h] [rbp+D74h] BYREF
  _DWORD v1771[3]; // [rsp+E7Ch] [rbp+D7Ch] BYREF
  _DWORD v1772[5]; // [rsp+E88h] [rbp+D88h] BYREF
  char v1773[8]; // [rsp+E9Ch] [rbp+D9Ch] BYREF
  _DWORD v1774[3]; // [rsp+EA4h] [rbp+DA4h] BYREF
  _DWORD v1775[6]; // [rsp+EB0h] [rbp+DB0h] BYREF
  char v1776; // [rsp+ECAh] [rbp+DCAh]
  unsigned __int16 v1777[34]; // [rsp+ECCh] [rbp+DCCh] BYREF
  _DWORD v1778[6]; // [rsp+F10h] [rbp+E10h] BYREF
  char v1779; // [rsp+F2Ah] [rbp+E2Ah]
  unsigned __int16 v1780[34]; // [rsp+F2Ch] [rbp+E2Ch] BYREF
  _DWORD v1781[6]; // [rsp+F70h] [rbp+E70h] BYREF
  char v1782; // [rsp+F8Ah] [rbp+E8Ah]
  unsigned __int16 v1783[34]; // [rsp+F8Ch] [rbp+E8Ch] BYREF
  char v1784[12]; // [rsp+FD0h] [rbp+ED0h] BYREF
  unsigned int v1785; // [rsp+FDCh] [rbp+EDCh]
  _BYTE v1786[68]; // [rsp+FF0h] [rbp+EF0h] BYREF
  __int16 v1787; // [rsp+1034h] [rbp+F34h]
  unsigned __int16 v1788; // [rsp+1096h] [rbp+F96h]
  __int64 v1789; // [rsp+109Ch] [rbp+F9Ch]
  int v1790; // [rsp+10D0h] [rbp+FD0h] BYREF
  _DWORD v1791[14]; // [rsp+10D8h] [rbp+FD8h] BYREF
  _QWORD v1792[6]; // [rsp+1110h] [rbp+1010h] BYREF
  _QWORD v1793[20]; // [rsp+1140h] [rbp+1040h] BYREF
  int v1794; // [rsp+11E0h] [rbp+10E0h] BYREF
  __int16 v1795; // [rsp+11E4h] [rbp+10E4h]
  _BYTE v1796[176]; // [rsp+11F0h] [rbp+10F0h] BYREF
  WCHAR Filename[264]; // [rsp+12A0h] [rbp+11A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+14E8h] [rbp+13E8h]

  v1665 = this;
  v1588 = 0LL;
  v1505 = 1;
  v1451 = 0;
  v1504 = 0;
  v1472 = 0;
  v1456 = 0LL;
  v1439 = 0;
  while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
    ;
  v2 = dword_1805C1C38;
  v1450 = -1;
  if ( dword_1805C1C38 )
    goto LABEL_46;
  lpModuleName = 0LL;
  v1612 = 0LL;
  v3 = (char *)MemoryAlloc(0x338uLL);
  v4 = (WCHAR *)v3;
  if ( v3 )
  {
    v5 = v3 + 7;
    v6 = 0;
    v1413 = 0;
    v7 = -1;
    v1419 = 0;
    v8 = 0;
    v9 = (unsigned __int8 *)&unk_1804A9632;
    v10 = 0;
    v11 = 103LL;
    do
    {
      v12 = *(v9 - 1) | (*(v9 - 2) << 8);
      v13 = v9[2] << 8;
      v14 = *v9;
      v9 += 8;
      v15 = *(v9 - 7) | ((v14 | (v12 << 8)) << 8);
      v16 = v15 ^ v10;
      v17 = *(v9 - 3) | ((*(v9 - 4) | ((*(v9 - 5) | v13) << 8)) << 8);
      v18 = v16 ^ v17 ^ v8 ^ 0xAC987321;
      v19 = (__ROL4__(v18, 10) + 4991 * __ROL4__(v18 + 1419157410, 5)) ^ v16;
      v20 = (43881 * __ROR4__(v19 + 133239679, 9) - __ROL4__(v19, 2)) ^ v18;
      v21 = (24670 * v20 - (v20 >> 13) - 123127970) ^ v19;
      v22 = (2033 * __ROL4__(v21 ^ 0xAB69, 6) - __ROL4__(v21, 2)) ^ v20;
      v23 = (133239679 - (v22 ^ 0xAB69605E)) ^ v21;
      v24 = (43881 * (v23 ^ 0x137F)) ^ __ROR4__(v23, 6) ^ v22;
      v25 = (__ROL4__(v24, 2) + 24670 * __ROR4__(v24 + 133239679, 15)) ^ v23;
      v26 = (2033 * __ROR4__(v25 + 1419157410, 14) - __ROL4__(v25, 8)) ^ v24;
      v27 = __ROR4__(v26, 10) ^ (4991 * __ROR4__(v26 ^ 0xAB69605E, 12)) ^ v25;
      v28 = v26 ^ (v27 >> 10) ^ (43881 * (v27 ^ 0x7F1));
      v29 = (2033 * (__ROR4__(~v28, 5) + 24670)) ^ v27;
      v30 = v28 ^ (v29 - 2033) ^ 0xAB69605E;
      v31 = ((v30 >> 2) + 4991 * __ROL4__(v28 ^ (v29 - 2033) ^ 0xAB6967AF, 2)) ^ v29;
      v32 = (__ROL4__(v31, 7) + 43881 * __ROR4__(v31 - 133239679, 6)) ^ v30;
      v33 = (24670 * (v32 ^ 0x137F) + __ROR4__(v32, 9)) ^ v31;
      v34 = (__ROL4__(v33, 7) + 2033 * __ROL4__(v33 ^ 0xAB69, 5)) ^ v32;
      v35 = v33 ^ v34 ^ 0xAC987321;
      v36 = (4991 * __ROR4__(v35, 3) - 219010071) ^ v34;
      v37 = (24670 * __ROR4__(v36 - 133239679, 1) - __ROR4__(v36, 6)) ^ v35;
      v38 = (__ROL4__(v37, 14) + 2033 * __ROL4__(v37 - 1419157410, 3)) ^ v36;
      v39 = (4991 * __ROL4__(v38 - 1419157410, 15) - __ROR4__(v38, 14)) ^ v37;
      v40 = (v39 >> 3) ^ (43881 * (v39 ^ 0x605E)) ^ v38;
      v1413 = v7 ^ v40;
      v7 = v17;
      v41 = v6 ^ __ROL4__(v40, 2) ^ (24670 * __ROL4__(v40 ^ 0x7F1137F, 4));
      v6 = v15;
      v1419 = v41 ^ v39;
      *(v5 - 4) = v41 ^ v39;
      v1419 = __ROR4__(v1419, 8);
      *v5 = v1413;
      v5 += 8;
      v1413 = __ROR4__(v1413, 8);
      *(v5 - 13) = v1419;
      v1419 = __ROR4__(v1419, 8);
      *(v5 - 9) = v1413;
      v1413 = __ROR4__(v1413, 8);
      *(v5 - 14) = v1419;
      v1419 = __ROR4__(v1419, 8);
      *(v5 - 10) = v1413;
      v1413 = __ROR4__(v1413, 8);
      *(v5 - 15) = v1419;
      *(v5 - 11) = v1413;
      v10 = __ROR4__(v1419, 8);
      v8 = __ROR4__(v1413, 8);
      v1419 = v10;
      v1413 = v8;
      --v11;
    }
    while ( v11 );
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    do
      v43 ^= *((_BYTE *)v4 + v42++);
    while ( v42 < 0x338 );
    if ( v43 == 64LL )
    {
      lpModuleName = v4;
      v4 = 0LL;
      v1612 = 824LL;
      v47 = 0;
    }
    else
    {
      v47 = -1073425151;
    }
    if ( v4 )
      MemoryFree(v4);
    if ( v47 >= 0 )
    {
      v48 = lpModuleName;
      HIBYTE(lpModuleName[v1612 / 2 - 1]) = 0;
      memset_0(&unk_1805C2570, 0, 0x60uLL);
      if ( !*(_BYTE *)v48 )
        goto LABEL_37;
      while ( 1 )
      {
        v49 = -1LL;
        v50 = v48;
        v44 = 0;
        do
          ++v49;
        while ( v48[v49] );
        v51 = &v48[v49];
        v52 = (char *)&unk_1805C2570 + 24 * v45;
        if ( !GetModuleHandleExW(0, v50, (HMODULE *)v52) )
          break;
        if ( **(_WORD **)v52 == 23117
          && (v53 = *(int *)(*(_QWORD *)v52 + 60LL), (unsigned int)v53 < 0x10000000)
          && (v54 = *(_QWORD *)v52 + v53, v54 >= *(_QWORD *)v52)
          && *(_DWORD *)v54 == 17744 )
        {
          if ( ((*(_WORD *)(v54 + 24) - 267) & 0xFEFF) != 0 )
          {
            v44 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v52 + 12) = *(_QWORD *)(v54 + 136);
            *((_DWORD *)v52 + 2) = *(_DWORD *)(v54 + 80);
          }
        }
        else
        {
          v44 = -1073741701;
        }
        v55 = *(_DWORD *)(v51 + 1);
        v48 = v51 + 3;
        for ( i = 0; i < v55; ++i )
        {
          v57 = -1LL;
          v58 = (const CHAR *)v48;
          do
            ++v57;
          while ( *((_BYTE *)v48 + v57) );
          v48 = (LPCWSTR)((char *)v48 + v57 + 1);
          if ( v44 >= 0 )
          {
            ProcAddress = GetProcAddress(*(HMODULE *)v52, v58);
            if ( !ProcAddress )
              goto LABEL_37;
            off_1805B7100[v46] = ProcAddress;
          }
          ++v46;
        }
        ++v45;
        if ( !*(_BYTE *)v48 )
          goto LABEL_37;
      }
    }
  }
  v44 = -1073741702;
LABEL_37:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v44 >= 0 )
  {
    v2 = dword_1805C1C38;
LABEL_46:
    dword_1805C1C38 = v2 + 1;
    goto LABEL_47;
  }
  v61 = 4LL;
  v62 = (HMODULE *)&unk_1805C2570;
  do
  {
    if ( *v62 )
      FreeLibrary(*v62);
    v62 += 3;
    --v61;
  }
  while ( v61 );
  memset_0(&unk_1805C2570, 0, 0x60uLL);
  memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
LABEL_47:
  _InterlockedExchange(&dword_1805C2560, 0);
  String1 = 0LL;
  v63 = 0;
  v1570 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_99;
  v65 = off_1805B7210[0]();
  if ( !v65 )
  {
LABEL_49:
    LastError = GetLastError();
    v66 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v66 = LastError < 0;
    }
    if ( !v66 )
      LastError = -2147467259;
    goto LABEL_100;
  }
  v1508 = 0LL;
  v67 = 0LL;
  for ( j = 0LL; ; v1508 = j )
  {
    v69 = 0LL;
    if ( j )
      v69 = j;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1805B7230[0])(
           v65,
           2LL,
           v69,
           v67,
           &v1493) )
    {
      String1 = j;
      goto LABEL_68;
    }
    v70 = GetLastError();
    if ( v70 != 122 )
      break;
    if ( j )
      goto LABEL_62;
    j = (wchar_t *)MemoryAlloc(v1493);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1508);
    if ( !j )
    {
      LastError = -2147024882;
LABEL_68:
      v1508 = 0LL;
      goto LABEL_69;
    }
    v67 = v1493;
  }
  if ( !v70 )
  {
LABEL_62:
    LastError = -2147467259;
    goto LABEL_69;
  }
  if ( v70 > 0 )
    LastError = (unsigned __int16)v70 | 0x80070000;
  else
    LastError = v70;
LABEL_69:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1508);
  if ( LastError >= 0 )
  {
    v71 = off_1805B7228[0];
    CurrentThreadId = GetCurrentThreadId();
    v73 = ((__int64 (__fastcall *)(_QWORD))v71)(CurrentThreadId);
    if ( !v73 )
    {
      LastError = GetLastError();
      v74 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v74 = LastError < 0;
      }
      if ( !v74 )
        LastError = -2147467259;
      goto LABEL_100;
    }
    v1507 = 0LL;
    LastError = 0;
    v75 = 0LL;
    for ( k = 0LL; ; v1507 = k )
    {
      v77 = 0LL;
      if ( k )
        v77 = k;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1805B7230[0])(
             v73,
             2LL,
             v77,
             v75,
             &v1492) )
      {
        v1570 = k;
        goto LABEL_90;
      }
      v78 = GetLastError();
      if ( v78 != 122 )
        break;
      if ( k )
        goto LABEL_84;
      k = (wchar_t *)MemoryAlloc(v1492);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1507);
      if ( !k )
      {
        LastError = -2147024882;
LABEL_90:
        v1507 = 0LL;
        goto LABEL_91;
      }
      v75 = v1492;
    }
    if ( !v78 )
    {
LABEL_84:
      LastError = -2147467259;
      goto LABEL_91;
    }
    LastError = v78 > 0 ? (unsigned __int16)v78 | 0x80070000 : v78;
LABEL_91:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1507);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1570 && !wcscmp_0(v1570, L"Default") )
      {
        v1498 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1498) )
          goto LABEL_49;
        if ( (v1498 & 0xF) == 0 )
          v63 = 1;
      }
LABEL_99:
      v1439 = v63;
    }
  }
LABEL_100:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1570);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&String1);
  v80 = v1439;
  if ( LastError < 0 )
    v80 = 0;
  v1439 = v80;
  v1472 = 0;
  v81 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1456, v81);
  v1409 = v1456;
  if ( (unsigned __int8)((__int64 (*)(void))SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull)() || !v82 )
  {
    v87 = -2147024882;
    goto LABEL_1723;
  }
  v83 = 0LL;
  lpMem = 0LL;
  v84 = 0LL;
  v1495 = 0;
  v1453 = 0LL;
  v1454 = 0LL;
  v1461 = 0;
  Src = &unk_1805C0B40;
  Size = 160LL;
  v85 = GetProcessHeap();
  v86 = (unsigned __int16 *)HeapAlloc(v85, 8u, 0xA0uLL);
  v87 = -1073741801;
  v88 = v86;
  if ( !v86 )
  {
    v1322 = -1073741801;
    goto LABEL_182;
  }
  memcpy_0(v86, Src, Size);
  v89 = (unsigned int)Size;
  v83 = v88;
  v1352 = v88;
  v1610 = 8LL;
  v1669 = &unk_1805C0A88;
  v90 = GetProcessHeap();
  v91 = HeapAlloc(v90, 8u, 8uLL);
  v1432 = v91;
  if ( !v91 )
  {
    v1322 = -1073741801;
    v84 = 0LL;
    goto LABEL_182;
  }
  memcpy_0(v91, v1669, v1610);
  v92 = v1610;
  v1336 = v91;
  v1620 = __rdtsc();
  dwBytes = 0;
  v93 = RtlUIntAdd(4LL, 4LL, &v1556);
  v94 = v1441;
  v87 = v93;
  v1322 = v93;
  if ( v93 >= 0 )
    v94 = v1556;
  v1441 = v94;
  if ( v93 < 0 )
    goto LABEL_127;
  v95 = RtlUIntAdd(0LL, v94, &dwBytes);
  v87 = v95 | 0x10000000;
  v1322 = v95 | 0x10000000;
  if ( v95 < 0 )
    goto LABEL_127;
  v97 = RtlUIntAdd(v96, (unsigned int)v89, &v1557);
  v1322 = v97;
  v87 = v97;
  if ( v97 >= 0 )
    v94 = v1557;
  v1441 = v94;
  if ( v97 < 0 )
    goto LABEL_127;
  v98 = RtlUIntAdd(dwBytes, v94, &dwBytes);
  v87 = v100 | v98;
  v1322 = v100 | v98;
  if ( (v100 | v98) < 0 )
    goto LABEL_127;
  v101 = RtlUIntAdd(v99, v92, &v1558);
  v1322 = v101;
  v87 = v101;
  if ( v101 >= 0 )
    v94 = v1558;
  v1441 = v94;
  if ( v101 < 0 )
    goto LABEL_127;
  v102 = RtlUIntAdd(dwBytes, v94, &dwBytes);
  v87 = v104 | v102;
  v1322 = v104 | v102;
  if ( (v104 | v102) < 0 )
    goto LABEL_127;
  v105 = RtlUIntAdd(v103, v103 + 4, &v1559);
  v1322 = v105;
  v87 = v105;
  if ( v105 >= 0 )
    v94 = v1559;
  v1441 = v94;
  if ( v105 < 0 )
    goto LABEL_127;
  v106 = RtlUIntAdd(dwBytes, v94, &dwBytes);
  v87 = v109 | v106;
  v1322 = v109 | v106;
  if ( (v109 | v106) < 0 )
    goto LABEL_127;
  if ( StringCchLengthW(v108, v107, &pcchLength) >= 0 )
  {
    v111 = RtlUIntAdd(v110, (unsigned int)(2 * ++pcchLength), &v1560);
    v1322 = v111;
    v87 = v111;
    if ( v111 >= 0 )
      v94 = v1560;
    v1441 = v94;
    if ( v111 < 0 )
      goto LABEL_127;
    v112 = RtlUIntAdd(dwBytes, v94, &dwBytes);
    v87 = v114 | v112;
    v1322 = v114 | v112;
    if ( (v114 | v112) < 0 )
      goto LABEL_127;
    v115 = RtlUIntAdd(v113, v113, &v1561);
    v1322 = v115;
    v87 = v115;
    if ( v115 >= 0 )
      v94 = v1561;
    v1441 = v94;
    if ( v115 < 0 )
      goto LABEL_127;
    v116 = RtlUIntAdd(dwBytes, v94, &dwBytes);
    v87 = v118 | v116;
    v1322 = v118 | v116;
    if ( (v118 | v116) < 0 )
      goto LABEL_127;
    v119 = RtlUIntAdd(v117, v117, &v1562);
    v1322 = v119;
    v87 = v119;
    if ( v119 >= 0 )
      v94 = v1562;
    v1441 = v94;
    if ( v119 < 0 )
      goto LABEL_127;
    v120 = RtlUIntAdd(dwBytes, v94, &dwBytes);
    v87 = v121 | v120;
    v1322 = v121 | v120;
    if ( (v121 | v120) < 0 )
      goto LABEL_127;
    v1394 = dwBytes;
    v122 = dwBytes;
    v123 = GetProcessHeap();
    v124 = HeapAlloc(v123, 8u, v122);
    if ( !v124 )
    {
      v87 = -1073741801;
      goto LABEL_126;
    }
    lpMem = v124;
    v1563 = 0;
    v87 = RtlULongLongAdd(v124, 4LL, v1679);
    v1322 = v87;
    if ( v87 < 0 )
      goto LABEL_127;
    if ( v124 + 2 > (_DWORD *)((char *)v124 + v1394) )
    {
LABEL_144:
      v87 = -1073741789;
      goto LABEL_126;
    }
    v126 = (_DWORD *)v1679[0];
    *v124 = v125;
    *v126 = v1563;
    v1393 = 1;
    if ( (_DWORD)v89 )
    {
      if ( lpMem )
      {
        v129 = lpMem;
        v1572 = lpMem;
        do
        {
          v87 = RtlUIntAdd((unsigned int)v125, (unsigned int)*v129, &v1565);
          v1322 = v87;
          if ( v87 >= 0 )
            v130 = v1565;
          v1475 = v130;
          if ( v87 < 0 )
            goto LABEL_162;
          v87 = RtlULongLongAdd(v129, v130, &v1572);
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_162;
          v129 = v1572;
        }
        while ( v131 == -1 );
        v87 = RtlULongLongAdd(v1572, v125, &v1680);
        v1322 = v87;
        if ( v87 >= 0 )
        {
          if ( (char *)v129 + v89 + 4 > (char *)lpMem + v1394 )
            goto LABEL_144;
          v132 = v1680;
          *v129 = v89;
          memcpy_0(v132, v88, v89);
          v1393 = 2;
          LODWORD(v125) = 4;
        }
      }
      else
      {
        v127 = RtlUIntAdd((unsigned int)v125, (unsigned int)v89, &v1564);
        v128 = v1475;
        v87 = v127;
        v1322 = v127;
        if ( v127 >= 0 )
          v128 = v1564;
        v1475 = v128;
        if ( v127 >= 0 )
        {
          v87 = RtlUIntAdd(v1394, v128, &v1394);
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_180;
          v1393 = 2;
          goto LABEL_163;
        }
      }
    }
    else
    {
      v87 = -1073741811;
      v1322 = -1073741811;
    }
LABEL_162:
    if ( v87 < 0 )
      goto LABEL_180;
LABEL_163:
    if ( v92 )
    {
      if ( !lpMem )
      {
        v133 = RtlUIntAdd((unsigned int)v125, v92, &v1566);
        v134 = v1476;
        v87 = v133;
        v1322 = v133;
        if ( v133 >= 0 )
          v134 = v1566;
        v1476 = v134;
        if ( v133 < 0 )
          goto LABEL_180;
        v1322 = RtlUIntAdd(v1394, v134, &v1394);
        v87 = v1322;
        if ( v1322 < 0 )
          goto LABEL_180;
        ++v1393;
LABEL_201:
        v1670 = v1620;
        if ( lpMem )
        {
          v154 = lpMem;
          v1574 = lpMem;
          if ( v1393 )
          {
            do
            {
              v155 = RtlUIntAdd((unsigned int)v135, (unsigned int)*v154, &v1569);
              v1322 = v155;
              v87 = v155;
              if ( v155 >= 0 )
                v156 = v1569;
              v1477 = v156;
              if ( v155 < 0 )
                goto LABEL_180;
              v1322 = RtlULongLongAdd(v154, v156, &v1574);
              v87 = v1322;
              if ( v1322 < 0 )
                goto LABEL_180;
              v154 = v1574;
            }
            while ( v157 + 1 < v1393 );
          }
          v1322 = RtlULongLongAdd(v154, v135, &v1682);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_180;
          v153 = (const wchar_t *)((char *)lpMem + v1394);
          if ( v154 + 3 > (_DWORD *)v153 )
            goto LABEL_178;
          v158 = v1682;
          *v154 = 8;
          *v158 = v1670;
          ++v1393;
        }
        else
        {
          v150 = RtlUIntAdd((unsigned int)v135, 8LL, &v1568);
          v151 = v1477;
          v87 = v150;
          v1322 = v150;
          if ( v150 >= 0 )
            v151 = v1568;
          v1477 = v151;
          if ( v150 < 0 )
            goto LABEL_180;
          v1322 = RtlUIntAdd(v1394, v151, &v1394);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_180;
          ++v1393;
        }
        if ( StringCchLengthW(v153, v152, &v1575) < 0 )
        {
          v87 = -1073741762;
          goto LABEL_179;
        }
        v1322 = RtlULongLongAdd(v1575, 1LL, &v1575);
        v87 = v1322;
        if ( v1322 < 0 )
        {
LABEL_180:
          v83 = v1352;
          goto LABEL_181;
        }
        if ( 2 * (_DWORD)v1575 )
        {
          if ( lpMem )
          {
            v162 = lpMem;
            v1576 = lpMem;
            if ( v1393 )
            {
              while ( 1 )
              {
                v163 = RtlUIntAdd(4LL, (unsigned int)*v162, &v1589);
                v1322 = v163;
                v87 = v163;
                if ( v163 >= 0 )
                  v165 = v1589;
                v1478 = v165;
                if ( v163 < 0 )
                  break;
                v1322 = RtlULongLongAdd(v162, v165, &v1576);
                v87 = v1322;
                if ( v1322 < 0 )
                  goto LABEL_236;
                v162 = v1576;
                if ( v166 + 1 >= v1393 )
                  goto LABEL_232;
              }
              v159 = v164;
            }
            else
            {
LABEL_232:
              v1322 = RtlULongLongAdd(v162, 4LL, &v1683);
              v87 = v1322;
              if ( v1322 < 0 )
                goto LABEL_180;
              if ( (char *)v162 + v167 + 4 <= (char *)lpMem + v1394 )
              {
                v168 = v1683;
                *v162 = v167;
                memcpy_0(v168, L"Feeds-AllowFeeds-Enabled", (unsigned int)v167);
                ++v1393;
LABEL_236:
                v159 = 4LL;
              }
              else
              {
                v87 = -1073741789;
                v1322 = -1073741789;
              }
            }
          }
          else
          {
            v160 = RtlUIntAdd((unsigned int)v159, (unsigned int)(2 * v1575), &v1582);
            v161 = v1478;
            v87 = v160;
            v1322 = v160;
            if ( v160 >= 0 )
              v161 = v1582;
            v1478 = v161;
            if ( v160 < 0 )
              goto LABEL_180;
            v87 = RtlUIntAdd(v1394, v161, &v1394);
            v1322 = v87;
            if ( v87 < 0 )
              goto LABEL_180;
            ++v1393;
            v87 = 0;
            v1322 = 0;
          }
        }
        else
        {
          v87 = -1073741811;
          v1322 = -1073741811;
        }
        if ( v87 < 0 )
          goto LABEL_180;
        v1592 = v1439;
        if ( lpMem )
        {
          v172 = lpMem;
          v1577 = lpMem;
          if ( v1393 )
          {
            do
            {
              v87 = RtlUIntAdd((unsigned int)v159, (unsigned int)*v172, &v1591);
              v1322 = v87;
              if ( v87 >= 0 )
                v173 = v1591;
              v1479 = v173;
              if ( v87 < 0 )
                goto LABEL_180;
              v87 = RtlULongLongAdd(v172, v173, &v1577);
              v1322 = v87;
              if ( v87 < 0 )
                goto LABEL_180;
              v172 = v1577;
            }
            while ( v174 + 1 < v1393 );
          }
          v87 = RtlULongLongAdd(v172, v159, &v1684);
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_180;
          if ( v172 + 2 > (_DWORD *)((char *)lpMem + v1394) )
            goto LABEL_254;
          v175 = v1684;
          *v172 = v171;
          *v175 = v1592;
          ++v1393;
        }
        else
        {
          v169 = RtlUIntAdd((unsigned int)v159, (unsigned int)v159, &v1590);
          v170 = v1479;
          v87 = v169;
          v1322 = v169;
          if ( v169 >= 0 )
            v170 = v1590;
          v1479 = v170;
          if ( v169 < 0 )
            goto LABEL_180;
          v87 = RtlUIntAdd(v1394, v170, &v1394);
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_180;
          ++v1393;
        }
        v1595 = v171;
        if ( !lpMem )
        {
          v176 = RtlUIntAdd((unsigned int)v171, (unsigned int)v171, &v1593);
          v177 = v1473;
          v87 = v176;
          v1322 = v176;
          if ( v176 >= 0 )
            v177 = v1593;
          v1473 = v177;
          if ( v176 < 0 )
            goto LABEL_180;
          v1322 = RtlUIntAdd(v1394, v177, &v1394);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_180;
          ++v1393;
LABEL_271:
          v184 = RtlUIntAdd(v178, v178, &v1596);
          v186 = v1444;
          v87 = v184;
          v1322 = v184;
          if ( v184 >= 0 )
            v186 = v1596;
          v1444 = v186;
          if ( v184 < 0 )
            goto LABEL_296;
          v1431 = v186;
          v187 = RtlUIntAdd(v185, 8LL, &v1597);
          v1322 = v187;
          v189 = v188;
          v87 = v187;
          if ( v187 >= 0 )
            v189 = v1597;
          v1444 = v189;
          if ( v187 < 0 )
            goto LABEL_296;
          v1322 = RtlUIntAdd(v188, v189, &v1431);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_296;
          v191 = RtlUIntAdd(v190, v190, &v1598);
          v1322 = v191;
          v87 = v191;
          if ( v191 >= 0 )
            v189 = v1598;
          v1444 = v189;
          if ( v191 < 0 )
            goto LABEL_296;
          v1322 = RtlUIntAdd(v1431, v189, &v1431);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_296;
          v193 = RtlUIntAdd(v192, v192, &v1599);
          v1322 = v193;
          v87 = v193;
          if ( v193 >= 0 )
            v189 = v1599;
          v1444 = v189;
          if ( v193 < 0 )
            goto LABEL_296;
          v1322 = RtlUIntAdd(v1431, v189, &v1431);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_296;
          v195 = RtlUIntAdd(v194, v194, &v1600);
          v1322 = v195;
          v87 = v195;
          if ( v195 >= 0 )
            v189 = v1600;
          v1444 = v189;
          if ( v195 < 0 )
            goto LABEL_296;
          v1322 = RtlUIntAdd(v1431, v189, &v1431);
          v87 = v1322;
          if ( v1322 < 0 )
            goto LABEL_296;
          v197 = RtlUIntAdd(v196, v196, &v1474);
          v1322 = v197;
          v87 = v197;
          if ( v197 >= 0 )
            v189 = v1474;
          v1444 = v189;
          if ( v197 < 0 )
          {
LABEL_296:
            v198 = v1474;
          }
          else
          {
            v87 = RtlUIntAdd(v1431, v189, &v1431);
            v1322 = v87;
            v198 = v1474;
            if ( v87 >= 0 )
              v198 = v1431;
          }
          LODWORD(v1400) = v198;
          if ( v87 < 0 )
            goto LABEL_180;
          v199 = 0LL;
          v1437 = 0LL;
          v200 = 0LL;
          v201 = 0;
          v1513 = 0LL;
          v1425 = 0LL;
          jj = 0;
          v1365 = 0LL;
          v1436 = 0;
          v1344 = 0LL;
          v1410 = 0LL;
          v1483 = 0;
          v1618 = __rdtsc();
          v1445 = 8;
          v202 = RtlUIntAdd(8LL, v1394, &v1445);
          if ( v202 >= 0 )
          {
            v203 = (v1445 + 7) & 0xFFFFFFF8;
            if ( v203 >= v1445 )
            {
              v1445 = (v1445 + 7) & 0xFFFFFFF8;
              v204 = v203;
              v205 = GetProcessHeap();
              v206 = HeapAlloc(v205, 8u, v204);
              if ( v206 )
              {
                v1523 = v206;
                *v206 = v1393;
                v202 = RtlULongLongAdd(v206, 4LL, &v1523);
                if ( v202 >= 0 )
                {
                  v208 = v1523;
                  *(_DWORD *)v1523 = v1394;
                  v202 = RtlULongLongAdd(v208, v207, &v1523);
                  if ( v202 >= 0 )
                  {
                    *(_QWORD *)((char *)v206 + v1445 - 8) = v1618;
                    memcpy_0(v1523, lpMem, v1394);
                    v200 = v1445;
                    v1437 = v206;
                    v206 = 0LL;
                  }
                }
                if ( v206 )
                {
                  v209 = GetProcessHeap();
                  HeapFree(v209, 0, v206);
                }
                v199 = (unsigned __int8 *)v1437;
              }
              else
              {
                v202 = -1073741801;
                v199 = 0LL;
              }
            }
            else
            {
              v202 = -1073741675;
            }
          }
          v87 = v202 | 0x10000000;
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_432;
          v1626 = 0LL;
          v210 = 0LL;
          v1627 = 0LL;
          v1628 = 0LL;
          v1629 = 0LL;
          v1579 = 0LL;
          v1625 = 0LL;
          v1396 = 0LL;
          if ( v199 )
          {
            v1426 = (void *)v200;
            if ( v200 && (v1449 = v200 + 8, v212 = (char *)MemoryAlloc(v200 + 8), v1440 = v212, v213 = 0, v212) )
            {
              for ( m = 0LL; m < v200; ++m )
                v213 ^= v199[m];
              v1323 = v213;
              v215 = -1;
              v1735 = 0xC81ECB17B1B54A58uLL;
              v216 = v199;
              v1401 = -1;
              v1407 = 0;
              v217 = v212;
              v1386 = 0;
              v218 = 0;
              v1399 = 0;
              v219 = v200 & 7;
              if ( (v200 & 7) != 0 )
              {
                v1399 = 0;
                v220 = 0;
                v221 = 0;
                v222 = 56;
                do
                {
                  v223 = *v216++;
                  if ( v221 >= 4 )
                  {
                    v224 = v1399;
                    v220 |= v223 << v222;
                  }
                  else
                  {
                    v224 = (v223 << (v222 - 32)) | v1399;
                    v1399 = v224;
                  }
                  ++v221;
                  v222 -= 8;
                }
                while ( v221 < (int)v219 );
                v1386 = v220;
                v218 = v224 ^ 0xB17A307A;
                v225 = v220 ^ 0x42F6B18D;
                v1407 = v224 ^ 0xB17A307A;
                v226 = 0;
                v1401 = v220 ^ 0x42F6B18D;
                if ( (v200 & 7) != 0 )
                {
                  do
                  {
                    if ( v226 >= 4 )
                    {
                      v225 = __ROL4__(v225, 8);
                      v227 = v225;
                    }
                    else
                    {
                      v218 = __ROL4__(v218, 8);
                      v227 = v218;
                    }
                    ++v226;
                    *v217++ = v227;
                  }
                  while ( v226 < (int)v219 );
                  v218 = v1407;
                  v225 = v1401;
                }
                if ( v219 <= 4 )
                {
                  v215 = 0;
                  v1401 = 0;
                  if ( v219 < 4 )
                  {
                    v218 = v218 >> (8 * (4 - v219)) << (8 * (4 - v219));
                    v1407 = v218;
                  }
                }
                else
                {
                  v215 = v225 >> (8 * (8 - v219)) << (8 * (8 - v219));
                  v1401 = v215;
                }
              }
              v228 = v200 >> 3;
              if ( v200 >> 3 )
              {
                v229 = v216 + 2;
                v230 = v1386;
                v231 = v1399;
                v1372 = WORD1(v1735);
                v232 = v217 + 7;
                v233 = HIDWORD(v1735);
                v234 = WORD2(v1735);
                do
                {
                  v235 = v229[1] | ((*v229 | ((*(v229 - 1) | (*(v229 - 2) << 8)) << 8)) << 8);
                  v236 = v229[5] | ((v229[4] | ((v229[3] | (v229[2] << 8)) << 8)) << 8);
                  v1432 = v229 + 8;
                  v237 = v236 ^ v215;
                  v238 = v235 ^ v233 ^ (v237 - 19032) ^ v218;
                  v239 = (__ROR4__(v238, 7) + WORD1(v1735) * __ROR4__(v238 ^ v233, 15)) ^ v237;
                  v240 = (v234 * __ROR4__(v239 - 1313519016, 9) - __ROR4__(v239, 10)) ^ v238;
                  v241 = (__ROL4__(v240, 5) + HIWORD(v1735) * __ROL4__(v240 ^ v234, 4)) ^ v239;
                  v242 = (v233 - (v241 ^ 0xB1B54A58)) ^ v240;
                  v243 = (WORD1(v1735) * (v242 - 19032) - (v242 >> 6)) ^ v241;
                  v244 = (19032 * (v234 ^ __ROR4__(v243, 15))) ^ v242;
                  v245 = (v234 * (HIWORD(v1735) + __ROR4__(~v244, 3))) ^ v243;
                  v246 = (v245 - v233 - 19032) ^ v244;
                  v247 = (v1372 * (v246 ^ HIWORD(v1735))) ^ __ROR4__(v246, 10) ^ v245;
                  v248 = __ROR4__(v247, 3) ^ (v234 * __ROL4__(v247 ^ 0x4A58, 6)) ^ v246;
                  v249 = (19032 * (__ROR4__(v248, 15) - HIWORD(v1735))) ^ v247;
                  v250 = (v249 >> 15) ^ (19032 * __ROL4__(v249 - v234, 3)) ^ (v249 >> 1) ^ (19032
                                                                                          * (v249 ^ HIWORD(v1735))) ^ v248;
                  v251 = (WORD1(v1735) * (v250 - v234) - (v250 >> 13)) ^ v249;
                  v252 = __ROR4__(v251, 11) ^ (v234 * __ROR4__(-1313519016 - v251, 9)) ^ v250;
                  v253 = (v252 + 1313519016 - HIWORD(v1735)) ^ v251;
                  v254 = (19032 * (v253 ^ WORD1(v1735)) - __ROR4__(v253, 7)) ^ v252;
                  v255 = (WORD1(v1735) * __ROL4__(v254 ^ HIWORD(v1735), 4) - __ROR4__(v254, 16)) ^ v253;
                  v256 = (__ROR4__(v255, 4) + v234 * __ROR4__(-1313519016 - v255, 10)) ^ v254;
                  v257 = __ROR4__(v256, 9) ^ (HIWORD(v1735) * __ROR4__(v256 + 1313519016, 4)) ^ v255;
                  v258 = (19032 * __ROL4__(v257 ^ v233, 8) - __ROL4__(v257, 2)) ^ v256;
                  v259 = (WORD1(v1735) * __ROR4__(v233 - v258, 11) - __ROR4__(v258, 12)) ^ v257;
                  v260 = (v259 >> 8) ^ (v234 * (v259 ^ WORD1(v1735))) ^ v258;
                  v229 += 8;
                  v1407 = v231 ^ v260;
                  v1401 = v230 ^ v260 ^ v259 ^ v233 ^ 0xB1B54A58;
                  v231 = v235;
                  *(v232 - 4) = v1407;
                  v230 = v236;
                  v1407 = __ROR4__(v1407, 8);
                  *v232 = v1401;
                  v1401 = __ROR4__(v1401, 8);
                  *(v232 - 5) = v1407;
                  v1407 = __ROR4__(v1407, 8);
                  *(v232 - 1) = v1401;
                  v1401 = __ROR4__(v1401, 8);
                  *(v232 - 6) = v1407;
                  v1407 = __ROR4__(v1407, 8);
                  *(v232 - 2) = v1401;
                  v1401 = __ROR4__(v1401, 8);
                  *(v232 - 7) = v1407;
                  *(v232 - 3) = v1401;
                  v232 += 8;
                  v218 = __ROR4__(v1407, 8);
                  v215 = __ROR4__(v1401, 8);
                  v1407 = v218;
                  v1401 = v215;
                  --v228;
                }
                while ( v228 );
                v213 = v1323;
                v210 = (_QWORD *)v1396;
                v200 = (unsigned __int64)v1426;
                v212 = v1440;
              }
              *(_QWORD *)&v212[v200] = v213;
              v261 = v1449;
              v1625 = v1449;
              v1579 = v212;
              v1627 = 8LL;
              v1626 = &qword_1805C0A90;
              v1629 = 160LL;
              v1628 = xmmword_1805C0AA0;
              v262 = GetProcessHeap();
              v263 = HeapAlloc(v262, 8u, 0x30uLL);
              if ( v263 )
              {
                *(_DWORD *)v263 = v261;
                v264 = GetProcessHeap();
                v265 = HeapAlloc(v264, 8u, v261);
                if ( !v265 )
                  goto LABEL_339;
                v263[1] = v265;
                memcpy_0(v265, v212, v261);
                *((_DWORD *)v263 + 4) = 160;
                v266 = GetProcessHeap();
                v267 = HeapAlloc(v266, 8u, 0xA0uLL);
                if ( !v267 )
                  goto LABEL_339;
                v263[3] = v267;
                *v267 = xmmword_1805C0AA0[0];
                v267[1] = xmmword_1805C0AA0[1];
                v267[2] = xmmword_1805C0AA0[2];
                v267[3] = xmmword_1805C0AA0[3];
                v267[4] = xmmword_1805C0AA0[4];
                v267[5] = xmmword_1805C0AA0[5];
                v267[6] = xmmword_1805C0AA0[6];
                v267[7] = xmmword_1805C0AA0[7];
                v267[8] = xmmword_1805C0AA0[8];
                v267[9] = xmmword_1805C0AA0[9];
                *((_DWORD *)v263 + 8) = 8;
                v268 = GetProcessHeap();
                v269 = HeapAlloc(v268, 8u, 8uLL);
                if ( v269 )
                {
                  v263[5] = v269;
                  v210 = v263;
                  *v269 = qword_1805C0A90;
                  v211 = 0;
                  v263 = 0LL;
                }
                else
                {
LABEL_339:
                  v211 = -1073741801;
                }
                if ( v263 )
                {
                  v270 = (void *)v263[1];
                  if ( v270 )
                  {
                    v271 = GetProcessHeap();
                    HeapFree(v271, 0, v270);
                    v263[1] = 0LL;
                  }
                  v272 = (void *)v263[3];
                  if ( v272 )
                  {
                    v273 = GetProcessHeap();
                    HeapFree(v273, 0, v272);
                    v263[3] = 0LL;
                  }
                  v274 = (void *)v263[5];
                  if ( v274 )
                  {
                    v275 = GetProcessHeap();
                    HeapFree(v275, 0, v274);
                    v263[5] = 0LL;
                  }
                  v276 = GetProcessHeap();
                  HeapFree(v276, 0, v263);
                }
              }
              else
              {
                v211 = -1073741801;
              }
              if ( v211 >= 0 )
              {
                v1513 = v210;
                v210 = 0LL;
              }
            }
            else
            {
              v211 = -1073741823;
            }
            v277 = v1579;
            if ( v1579 )
            {
              v278 = GetProcessHeap();
              HeapFree(v278, 0, v277);
              v1579 = 0LL;
            }
            if ( v210 )
            {
              v279 = (void *)v210[1];
              if ( v279 )
              {
                v280 = GetProcessHeap();
                HeapFree(v280, 0, v279);
                v210[1] = 0LL;
              }
              v281 = (void *)v210[3];
              if ( v281 )
              {
                v282 = GetProcessHeap();
                HeapFree(v282, 0, v281);
                v210[3] = 0LL;
              }
              v283 = (void *)v210[5];
              if ( v283 )
              {
                v284 = GetProcessHeap();
                HeapFree(v284, 0, v283);
                v210[5] = 0LL;
              }
              v285 = GetProcessHeap();
              HeapFree(v285, 0, v210);
            }
            v201 = 0;
          }
          else
          {
            v211 = -1073741811;
          }
          v87 = v211 | 0x10000000;
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_432;
          v286 = (const void **)v1513;
          v1428 = 4;
          v287 = RtlUIntAdd(4LL, *(unsigned int *)v1513, &v1428);
          if ( v287 < 0
            || (v287 = RtlUIntAdd(v1428, 4LL, &v1428), v287 < 0)
            || (v287 = RtlUIntAdd(v1428, *((unsigned int *)v286 + 4), &v1428), v287 < 0)
            || (v287 = RtlUIntAdd(v1428, 4LL, &v1428), v287 < 0) )
          {
            v288 = v1480;
          }
          else
          {
            v287 = RtlUIntAdd(v1428, *((unsigned int *)v286 + 8), &v1428);
            v288 = v1480;
            if ( v287 >= 0 )
              v288 = v1428;
            v1480 = v288;
          }
          if ( v287 >= 0 )
          {
            v289 = v288;
            v290 = GetProcessHeap();
            v291 = HeapAlloc(v290, 8u, v289);
            if ( v291 )
            {
              *v291 = *(_DWORD *)v286;
              v1442 = v291;
              v287 = RtlULongLongAdd(v291, 4LL, &v1442);
              if ( v287 >= 0 )
              {
                memcpy_0(v1442, v286[1], *(unsigned int *)v286);
                v287 = RtlULongLongAdd(v1442, *(unsigned int *)v286, &v1442);
                if ( v287 >= 0 )
                {
                  v292 = v1442;
                  *(_DWORD *)v1442 = *((_DWORD *)v286 + 4);
                  v287 = RtlULongLongAdd(v292, 4LL, &v1442);
                  if ( v287 >= 0 )
                  {
                    memcpy_0(v1442, v286[3], *((unsigned int *)v286 + 4));
                    v287 = RtlULongLongAdd(v1442, *((unsigned int *)v286 + 4), &v1442);
                    if ( v287 >= 0 )
                    {
                      v293 = v1442;
                      *(_DWORD *)v1442 = *((_DWORD *)v286 + 8);
                      v287 = RtlULongLongAdd(v293, 4LL, &v1442);
                      if ( v287 >= 0 )
                      {
                        memcpy_0(v1442, v286[5], *((unsigned int *)v286 + 8));
                        v287 = RtlULongLongAdd(v1442, *((unsigned int *)v286 + 8), &v1442);
                        if ( v287 >= 0 )
                        {
                          v201 = v1480;
                          v1425 = v291;
                          v291 = 0LL;
                        }
                      }
                    }
                  }
                }
              }
              if ( v291 )
              {
                v294 = GetProcessHeap();
                HeapFree(v294, 0, v291);
              }
            }
            else
            {
              v287 = -1073741801;
            }
          }
          v87 = v287 | 0x10000000;
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_432;
          v1630 = 0LL;
          v1601 = 0;
          v1631 = 0LL;
          v1602 = 0;
          v1482 = 8;
          v295 = RtlUIntAdd(8LL, (unsigned int)v1400, &v1482);
          v87 = v295 | 0x10000000;
          v1322 = v295 | 0x10000000;
          if ( v295 >= 0 )
          {
            v297 = (v1482 + 7) & 0xFFFFFFF8;
            if ( v297 >= v1482 )
            {
              v1496 = (v1482 + 7) & 0xFFFFFFF8;
              v299 = RtlUIntAdd(v297, v296, &v1496);
              v298 = v1509;
              v87 = v299;
              if ( v299 >= 0 )
                v298 = v1496;
              v1509 = v298;
            }
            else
            {
              v298 = v1509;
              v87 = -1073741675;
            }
            v1322 = v87;
            if ( v87 < 0 )
              goto LABEL_432;
            if ( lpMem && v1393 > 1 )
            {
              v300 = (unsigned int *)lpMem;
              v1467 = (unsigned int *)lpMem;
              do
              {
                v301 = *v300;
                v1322 = RtlULongLongAdd(v300, 4LL, &v1467);
                v87 = v1322;
                if ( v1322 < 0 )
                  goto LABEL_405;
                v1322 = RtlULongLongAdd(v1467, v301, &v1467);
                v87 = v1322;
                if ( v1322 < 0 )
                  goto LABEL_405;
                v300 = v1467;
              }
              while ( v302 == -1 );
              v1322 = RtlULongLongAdd(v1467, 4LL, &v1467);
              v87 = v1322;
              if ( v1322 >= 0 )
              {
                v304 = v1467;
                v1601 = v303;
                if ( !v303 )
                  v304 = 0LL;
                v1467 = v304;
                v1630 = v304;
              }
LABEL_405:
              if ( v87 >= 0 )
              {
                if ( v1393 > 2 )
                {
                  v309 = (unsigned int *)lpMem;
                  v1468 = (unsigned int *)lpMem;
                  do
                  {
                    v310 = *v309;
                    v1322 = RtlULongLongAdd(v309, 4LL, &v1468);
                    v87 = v1322;
                    if ( v1322 < 0 )
                      goto LABEL_419;
                    v1322 = RtlULongLongAdd(v1468, v310, &v1468);
                    v87 = v1322;
                    if ( v1322 < 0 )
                      goto LABEL_419;
                    v309 = v1468;
                  }
                  while ( (unsigned int)(v311 + 1) < 2 );
                  v1322 = RtlULongLongAdd(v1468, 4LL, &v1468);
                  v87 = v1322;
                  if ( v1322 >= 0 )
                  {
                    v313 = v1468;
                    v1602 = v312;
                    if ( !v312 )
                      v313 = 0LL;
                    v1468 = v313;
                    v1631 = v313;
                  }
LABEL_419:
                  if ( v87 >= 0 )
                  {
                    v1434 = 4;
                    v1322 = RtlUIntAdd(4LL, v298, &v1434);
                    v87 = v1322;
                    if ( v1322 < 0
                      || (v1322 = RtlUIntAdd(v1434, 4LL, &v1434), v87 = v1322, v1322 < 0)
                      || (v1322 = RtlUIntAdd(v1434, v314, &v1434), v87 = v1322, v1322 < 0)
                      || (v1322 = RtlUIntAdd(v1434, 4LL, &v1434), v87 = v1322, v1322 < 0) )
                    {
                      v316 = v1494;
                    }
                    else
                    {
                      v87 = RtlUIntAdd(v1434, v315, &v1434);
                      v1322 = v87;
                      v316 = v1494;
                      if ( v87 >= 0 )
                        v316 = v1434;
                      v1494 = v316;
                    }
                    if ( v87 >= 0 )
                    {
                      if ( v316 > 0x400000 )
                      {
                        v87 = -2147418113;
                        goto LABEL_431;
                      }
                      v1436 = v316;
                    }
                  }
                }
                else
                {
                  v87 = -1073741811;
                  v1322 = -1073741811;
                }
              }
            }
            else
            {
              v87 = -1073741811;
              v1322 = -1073741811;
            }
          }
          if ( v87 < 0 )
            goto LABEL_432;
          v305 = v1436;
          v306 = GetProcessHeap();
          v307 = (unsigned int *)HeapAlloc(v306, 8u, v305);
          if ( v307 )
          {
            v308 = v307;
            v1365 = v307;
            v87 = 0x10000000;
          }
          else
          {
            v87 = -805306345;
            v308 = 0LL;
          }
          v1322 = v87;
          if ( v87 < 0 )
            goto LABEL_432;
          if ( !v1425 || !v308 )
          {
            v87 = -2147024809;
            goto LABEL_431;
          }
          v1671[0] = v1425;
          v1673 = v1436;
          v1672 = v201;
          v1671[1] = v308;
          v1674 = 0;
          if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
            && (v341 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
          {
            v342 = ((__int64 (__fastcall *)(__int64, _QWORD *))v341)(134LL, v1671);
            v340 = v1436;
            v87 = v342 | 0x10000000;
            if ( v342 >= 0 )
              v340 = v1673;
            v1436 = v340;
          }
          else
          {
            v339 = GetLastError();
            v1322 = v339;
            v87 = v339;
            if ( v339 > 0 )
            {
              v87 = (unsigned __int16)v339 | 0x80070000;
              v1322 = v87;
            }
            v340 = v1436;
            if ( v87 < 0 )
            {
LABEL_476:
              if ( v87 == -805306333 )
              {
                v87 = -2147024774;
                v1322 = -2147024774;
                goto LABEL_432;
              }
              v343 = 0LL;
              if ( v87 < 0 )
                goto LABEL_432;
              v1457 = 0LL;
              v1403 = 0;
              v1455 = v308;
              if ( v340 < 4 )
              {
LABEL_480:
                v344 = -1073741762;
LABEL_481:
                v345 = v343;
LABEL_482:
                v87 = v344 | 0x10000000;
                v1322 = v87;
                if ( v87 < 0 )
                  goto LABEL_432;
                v1490 = (unsigned __int16 *)v343;
                v346 = (unsigned __int16 *)v343;
                v1619 = (unsigned __int64)v343;
                if ( v345 )
                {
                  v379 = (unsigned __int8 *)*((_QWORD *)v345 + 1);
                  v1426 = v379;
                  if ( v379 )
                  {
                    if ( *v345 != (_DWORD)v343 )
                    {
                      v380 = *v345;
                      LODWORD(v1400) = (_DWORD)v343;
                      if ( !v380 )
                        goto LABEL_575;
                      v381 = v380 - 8;
                      v1432 = (void *)v381;
                      v382 = MemoryAlloc(v381);
                      LODWORD(v343) = 0;
                      v1396 = (SIZE_T)v382;
                      v383 = v382;
                      if ( !v382 )
                      {
                        v346 = v1490;
                        goto LABEL_575;
                      }
                      v1736 = 0x7F1137FAB69605ELL;
                      v1404 = 0;
                      v384 = 0;
                      v385 = v379;
                      v386 = v383;
                      v387 = v381 & 7;
                      if ( (v381 & 7) != 0 )
                      {
                        v1397 = -1;
                        v388 = 0;
                        v389 = 0;
                        v390 = 56;
                        do
                        {
                          v391 = *v385++;
                          if ( (int)v343 >= 4 )
                            v388 |= v391 << v390;
                          else
                            v389 |= v391 << (v390 - 32);
                          LODWORD(v343) = (_DWORD)v343 + 1;
                          v390 -= 8;
                        }
                        while ( (int)v343 < v387 );
                        v1387 = v389;
                        LODWORD(v343) = v389 ^ 0x92F65A5;
                        v392 = v388 ^ 0x699A899C;
                        v1404 = v389 ^ 0x92F65A5;
                        v393 = 0;
                        v1397 = v388 ^ 0x699A899C;
                        if ( (v381 & 7) != 0 )
                        {
                          do
                          {
                            if ( v393 >= 4 )
                            {
                              v392 = __ROL4__(v392, 8);
                              v394 = v392;
                            }
                            else
                            {
                              LODWORD(v343) = __ROL4__((_DWORD)v343, 8);
                              v394 = (char)v343;
                            }
                            ++v393;
                            *v386++ = v394;
                          }
                          while ( v393 < v387 );
                          LODWORD(v343) = v1404;
                          v392 = v1397;
                        }
                        if ( (unsigned int)v387 <= 4 )
                        {
                          v395 = 0;
                          v1397 = 0;
                          if ( (unsigned int)v387 < 4 )
                          {
                            LODWORD(v343) = (unsigned int)v343 >> (8 * (4 - v387)) << (8 * (4 - v387));
                            v1404 = (int)v343;
                          }
LABEL_561:
                          v396 = v381 >> 3;
                          if ( v381 >> 3 )
                          {
                            v397 = v386 + 7;
                            v398 = v1387;
                            v399 = v385 + 2;
                            v1350 = WORD2(v1736);
                            v400 = HIDWORD(v1736);
                            jj = WORD1(v1736);
                            v401 = HIDWORD(v1736) ^ 0xAB69605E;
                            do
                            {
                              v402 = *(v399 - 1) | (*(v399 - 2) << 8);
                              v403 = v399[2] << 8;
                              v404 = *v399;
                              v399 += 8;
                              v405 = *(v399 - 7) | ((v404 | (v402 << 8)) << 8);
                              v406 = v405 ^ (unsigned int)v343;
                              v407 = *(v399 - 3) | ((*(v399 - 4) | ((*(v399 - 5) | v403) << 8)) << 8);
                              v408 = v406 ^ v407 ^ v395 ^ v400 ^ 0xAB69605E;
                              v409 = (__ROL4__(v408, 10) + v1350 * __ROL4__(v408 + 1419157410, 5)) ^ v406;
                              v410 = (WORD1(v1736) * __ROR4__(v400 + v409, 9) - __ROL4__(v409, 2)) ^ v408;
                              v411 = (24670 * (v410 - v1350) - (v410 >> 13)) ^ v409;
                              v412 = (HIWORD(v1736) * __ROL4__(v411 ^ WORD1(v1736), 6) - __ROL4__(v411, 2)) ^ v410;
                              v413 = (v400 - (v412 ^ 0xAB69605E)) ^ v411;
                              v414 = (jj * (v413 ^ v1350)) ^ __ROR4__(v413, 6) ^ v412;
                              v415 = (__ROL4__(v414, 2) + 24670 * __ROR4__(v400 + v414, 15)) ^ v413;
                              v416 = (HIWORD(v1736) * __ROR4__(v415 + 1419157410, 14) - __ROL4__(v415, 8)) ^ v414;
                              v417 = __ROR4__(v416, 10) ^ (v1350 * __ROR4__(v416 ^ 0xAB69605E, 12)) ^ v415;
                              v418 = (v417 >> 10) ^ (WORD1(v1736) * (v417 ^ HIWORD(v1736))) ^ v416;
                              v419 = (HIWORD(v1736) * (__ROR4__(~v418, 5) + 24670)) ^ v417;
                              v420 = (v419 - HIWORD(v1736)) ^ 0xAB69605E ^ v418;
                              v421 = ((v420 >> 2) + v1350 * __ROL4__(v420 ^ HIWORD(v1736), 2)) ^ v419;
                              v422 = (__ROL4__(v421, 7) + WORD1(v1736) * __ROR4__(v421 - v400, 6)) ^ v420;
                              v423 = (24670 * (v422 ^ v1350) + __ROR4__(v422, 9)) ^ v421;
                              v424 = (__ROL4__(v423, 7) + HIWORD(v1736) * __ROL4__(v423 ^ WORD1(v1736), 5)) ^ v422;
                              v425 = v424 ^ v401 ^ v423;
                              v426 = (v1350 * (__ROR4__(v425, 3) - WORD1(v1736))) ^ v424;
                              v427 = (24670 * __ROR4__(v426 - v400, 1) - __ROR4__(v426, 6)) ^ v425;
                              v428 = (__ROL4__(v427, 14) + HIWORD(v1736) * __ROL4__(v427 - 1419157410, 3)) ^ v426;
                              v429 = (v1350 * __ROL4__(v428 - 1419157410, 15) - __ROR4__(v428, 14)) ^ v427;
                              v430 = (v429 >> 3) ^ (WORD1(v1736) * (v429 ^ 0x605E)) ^ v428;
                              v1397 = v388 ^ v430;
                              v388 = v407;
                              v431 = v398 ^ __ROL4__(v430, 2) ^ (24670 * __ROL4__(v430 ^ v400, 4));
                              v398 = v405;
                              v1404 = v431 ^ v429;
                              *(v397 - 4) = v431 ^ v429;
                              v1404 = __ROR4__(v1404, 8);
                              *v397 = v1397;
                              v397 += 8;
                              v1397 = __ROR4__(v1397, 8);
                              *(v397 - 13) = v1404;
                              v1404 = __ROR4__(v1404, 8);
                              *(v397 - 9) = v1397;
                              v1397 = __ROR4__(v1397, 8);
                              *(v397 - 14) = v1404;
                              v1404 = __ROR4__(v1404, 8);
                              *(v397 - 10) = v1397;
                              v1397 = __ROR4__(v1397, 8);
                              *(v397 - 15) = v1404;
                              *(v397 - 11) = v1397;
                              LODWORD(v343) = __ROR4__(v1404, 8);
                              v395 = __ROR4__(v1397, 8);
                              v1404 = (int)v343;
                              v1397 = v395;
                              --v396;
                            }
                            while ( v396 );
                            v384 = 0;
                            v381 = (unsigned __int64)v1432;
                            v383 = (_BYTE *)v1396;
                          }
                          LODWORD(v343) = 0;
                          for ( n = 0LL; n < v381; ++n )
                            v384 ^= v383[n];
                          if ( v384 == *(_QWORD *)((char *)v1426 + v381) )
                          {
                            v346 = (unsigned __int16 *)v383;
                            v1490 = (unsigned __int16 *)v383;
                            v1619 = v381;
                            v383 = 0LL;
                            v433 = (int)v1400;
                          }
                          else
                          {
                            v346 = v1490;
                            v433 = -1073425151;
                          }
                          if ( v383 )
                          {
                            MemoryFree(v383);
                            v346 = v1490;
                            LODWORD(v343) = 0;
                          }
                          if ( v433 >= 0 )
                          {
                            v434 = v1619;
                            v435 = v346;
                            v1410 = v346;
                            v346 = 0LL;
                            v1490 = 0LL;
                            v87 = 0x10000000;
                            v1483 = v1619;
                            goto LABEL_576;
                          }
LABEL_575:
                          v434 = v1483;
                          v87 = -805306367;
                          v435 = v1410;
LABEL_576:
                          v1322 = v87;
                          if ( v346 )
                          {
                            v436 = GetProcessHeap();
                            HeapFree(v436, 0, v346);
                            v434 = v1483;
                            LODWORD(v343) = 0;
                            v1490 = 0LL;
                          }
                          if ( v87 < 0 )
                            goto LABEL_432;
                          v1446 = (unsigned int)v343;
                          v1524 = v435;
                          if ( v434 >= 4 )
                          {
                            v1373 = *(_DWORD *)v435;
                            v437 = RtlULongLongAdd(v435, 4LL, &v1524);
                            if ( v437 < 0 )
                              goto LABEL_614;
                            v437 = RtlUIntAdd(0LL, 4LL, &v1446);
                            if ( v437 < 0 )
                              goto LABEL_614;
                            if ( v438 - v1446 >= 4 )
                            {
                              v439 = *(unsigned int *)v1524;
                              v437 = RtlULongLongAdd(v1524, 4LL, &v1524);
                              if ( v437 < 0 )
                                goto LABEL_614;
                              v437 = RtlUIntAdd(v1446, 4LL, &v1446);
                              if ( v437 < 0 )
                                goto LABEL_614;
                              if ( v440 - v1446 >= (unsigned int)v439 )
                              {
                                v437 = RtlUIntAdd(v1446, (unsigned int)v439, &v1446);
                                if ( v437 < 0 )
                                  goto LABEL_614;
                                v443 = v1524;
                                if ( (char *)v1410 + v441 >= (char *)v1524 + v439
                                  && (unsigned __int64)v1410 + v441 - v439 - (_QWORD)v1524 < 8 )
                                {
                                  v1432 = v442;
                                  v444 = v442;
                                  jj = (unsigned int)v442;
                                  v437 = (int)v442;
                                  if ( !v1524 )
                                  {
LABEL_602:
                                    if ( (_DWORD)v439 )
                                    {
                                      v451 = GetProcessHeap();
                                      v444 = HeapAlloc(v451, 8u, v439);
                                      if ( !v444 )
                                      {
                                        v437 = -1073741801;
                                        goto LABEL_611;
                                      }
                                      v437 = 0;
                                    }
                                    if ( v443 )
                                      memcpy_0(v444, v443, v439);
                                    v1453 = __PAIR64__(v439, jj);
                                    v1454 = v444;
LABEL_611:
                                    if ( v437 < 0 || v1373 == (_DWORD)v1453 )
                                      goto LABEL_614;
                                    goto LABEL_613;
                                  }
                                  v445 = (unsigned int *)v1524;
                                  v437 = RtlULongLongAdd(v1524, (unsigned int)v439, &v1633);
                                  if ( v437 < 0 )
                                    goto LABEL_611;
                                  v446 = (unsigned int *)v1633;
                                  if ( (unsigned __int64)v443 < v1633 )
                                  {
                                    do
                                    {
                                      v437 = RtlULongLongAdd(v445, 4LL, &v1634);
                                      if ( v437 < 0 )
                                        goto LABEL_611;
                                      if ( v1634 > v447 )
                                        goto LABEL_605;
                                      v448 = RtlUIntAdd(4LL, *v445, &v1603);
                                      v437 = v448;
                                      if ( v448 >= 0 )
                                        v449 = v1603;
                                      v1527 = v449;
                                      if ( v448 < 0 )
                                        goto LABEL_611;
                                      v437 = RtlULongLongAdd(v445, v449, &v1635);
                                      if ( v437 < 0 )
                                        goto LABEL_611;
                                      v445 = v1635;
                                      if ( v1635 > v446 )
                                        goto LABEL_605;
                                      jj = v450 + 1;
                                    }
                                    while ( v1635 < v446 );
                                  }
                                  if ( v445 == v446 )
                                  {
                                    v444 = v1432;
                                    goto LABEL_602;
                                  }
LABEL_605:
                                  v437 = -1073741811;
LABEL_614:
                                  v87 = v437 | 0x10000000;
                                  goto LABEL_431;
                                }
                              }
                            }
                          }
LABEL_613:
                          v437 = -1073741762;
                          goto LABEL_614;
                        }
                        v395 = v392 >> (8 * (8 - v387)) << (8 * (8 - v387));
                      }
                      else
                      {
                        v1387 = 0;
                        v388 = -1;
                        v395 = 0;
                      }
                      v1397 = v395;
                      goto LABEL_561;
                    }
                  }
                }
                v87 = -805306355;
LABEL_431:
                v1322 = v87;
LABEL_432:
                v317 = v1437;
                if ( v1437 )
                {
                  v318 = GetProcessHeap();
                  HeapFree(v318, 0, v317);
                }
                v319 = v1513;
                if ( v1513 )
                {
                  v320 = (void *)*((_QWORD *)v1513 + 1);
                  if ( v320 )
                  {
                    v321 = GetProcessHeap();
                    HeapFree(v321, 0, v320);
                    v319[1] = 0LL;
                  }
                  v322 = (void *)v319[3];
                  if ( v322 )
                  {
                    v323 = GetProcessHeap();
                    HeapFree(v323, 0, v322);
                    v319[3] = 0LL;
                  }
                  v324 = (void *)v319[5];
                  if ( v324 )
                  {
                    v325 = GetProcessHeap();
                    HeapFree(v325, 0, v324);
                    v319[5] = 0LL;
                  }
                  v326 = GetProcessHeap();
                  HeapFree(v326, 0, v319);
                  v1513 = 0LL;
                }
                v327 = v1425;
                if ( v1425 )
                {
                  v328 = GetProcessHeap();
                  HeapFree(v328, 0, v327);
                }
                if ( v1365 )
                {
                  v329 = GetProcessHeap();
                  HeapFree(v329, 0, v1365);
                }
                if ( v1344 )
                {
                  v330 = (void *)v1344[1];
                  if ( v330 )
                  {
                    v331 = GetProcessHeap();
                    HeapFree(v331, 0, v330);
                    v1344[1] = 0LL;
                  }
                  v332 = (void *)v1344[3];
                  if ( v332 )
                  {
                    v333 = GetProcessHeap();
                    HeapFree(v333, 0, v332);
                    v1344[3] = 0LL;
                  }
                  v334 = (void *)v1344[5];
                  if ( v334 )
                  {
                    v335 = GetProcessHeap();
                    HeapFree(v335, 0, v334);
                    v1344[5] = 0LL;
                  }
                  v336 = GetProcessHeap();
                  HeapFree(v336, 0, v1344);
                }
                v337 = v1410;
                if ( v1410 )
                {
                  v338 = GetProcessHeap();
                  HeapFree(v338, 0, v337);
                }
                if ( v87 < 0 )
                  goto LABEL_180;
                if ( !(_DWORD)v1453 )
                  goto LABEL_458;
                v452 = 4LL;
                if ( v1454 )
                {
                  v1580 = (int *)v1454;
                  v1322 = RtlULongLongAdd(v1454, 4LL, &v1580);
                  v87 = v1322;
                  if ( v1322 < 0 )
                  {
                    v453 = v1528;
                    v454 = v1636;
                  }
                  else
                  {
                    v454 = v1580;
                    v1528 = v453;
                    if ( !v453 )
                      v454 = 0LL;
                    v1580 = v454;
                    v1636 = v454;
                  }
                  if ( v1322 >= 0 )
                  {
                    if ( v453 != (_DWORD)v452 )
                      goto LABEL_178;
                    v1461 = *v454;
                  }
                }
                else
                {
                  v87 = -1073741811;
                  v1322 = -1073741811;
                }
                if ( v87 < 0 )
                  goto LABEL_180;
                v87 = v1461;
                if ( v1461 == -805306333 )
                  v87 = -2147024774;
                v1322 = v87;
                v1461 = v87;
                if ( v87 != -2147024774 && v87 < 0 )
                  goto LABEL_180;
                if ( (_DWORD)v1453 != 6 )
                  goto LABEL_458;
                if ( v1454 )
                {
                  v455 = v1454;
                  v456 = 0;
                  v1469 = (int *)v1454;
                  do
                  {
                    v1322 = RtlULongLongAdd(v455, v452, &v1469);
                    v87 = v1322;
                    if ( v1322 < 0 )
                      goto LABEL_641;
                    v1322 = RtlULongLongAdd(v1469, v457, &v1469);
                    v87 = v1322;
                    if ( v1322 < 0 )
                      goto LABEL_641;
                    v455 = v1469;
                    ++v456;
                  }
                  while ( !v456 );
                  v458 = *v1469;
                  v1322 = RtlULongLongAdd(v1469, v452, &v1469);
                  v87 = v1322;
                  if ( v1322 < 0 )
                  {
LABEL_641:
                    v458 = v1529;
                    v460 = v1637;
                  }
                  else
                  {
                    v460 = v1469;
                    v1529 = v458;
                    if ( !v458 )
                      v460 = v459;
                    v1469 = v460;
                    v1637 = v460;
                  }
                  if ( v87 >= 0 )
                  {
                    if ( v458 != 8 )
                      goto LABEL_178;
                    v1642 = *(_QWORD *)v460;
                  }
                }
                else
                {
                  v87 = -1073741811;
                  v1322 = -1073741811;
                }
                if ( v87 < 0 )
                  goto LABEL_180;
                if ( v1454 )
                {
                  v461 = v1454;
                  v462 = 0;
                  v1466 = (int *)v1454;
                  do
                  {
                    v1322 = RtlULongLongAdd(v461, v452, &v1466);
                    v87 = v1322;
                    if ( v1322 < 0 )
                      goto LABEL_656;
                    v1322 = RtlULongLongAdd(v1466, v463, &v1466);
                    v87 = v1322;
                    if ( v1322 < 0 )
                      goto LABEL_656;
                    v461 = v1466;
                    ++v462;
                  }
                  while ( v462 < 2 );
                  v464 = *v1466;
                  v1322 = RtlULongLongAdd(v1466, v452, &v1466);
                  v87 = v1322;
                  if ( v1322 < 0 )
                  {
LABEL_656:
                    v464 = v1530;
                    v466 = v1638;
                  }
                  else
                  {
                    v466 = v1466;
                    v1530 = v464;
                    if ( !v464 )
                      v466 = v465;
                    v1466 = v466;
                    v1638 = v466;
                  }
                  if ( v87 >= 0 )
                  {
                    if ( v464 != (_DWORD)v452 )
                      goto LABEL_178;
                    v1535 = *v466;
                  }
                }
                else
                {
                  v87 = -1073741811;
                  v1322 = -1073741811;
                }
                if ( v87 < 0 )
                  goto LABEL_180;
                if ( !v1454 )
                {
                  v87 = -1073741811;
                  goto LABEL_179;
                }
                v467 = v1454;
                v468 = 0;
                v1470 = v1454;
                do
                {
                  v1322 = RtlULongLongAdd(v467, v452, &v1470);
                  v87 = v1322;
                  if ( v1322 < 0 )
                    goto LABEL_671;
                  v1322 = RtlULongLongAdd(v1470, v469, &v1470);
                  v87 = v1322;
                  if ( v1322 < 0 )
                    goto LABEL_671;
                  v467 = v1470;
                  ++v468;
                }
                while ( v468 < 3 );
                v1322 = RtlULongLongAdd(v1470, v452, &v1470);
                v87 = v1322;
                if ( v1322 < 0 )
                {
LABEL_671:
                  v471 = v1639;
                }
                else
                {
                  v471 = v1470;
                  v1531 = v470;
                  if ( !v470 )
                    v471 = 0LL;
                  v1470 = v471;
                  v1639 = v471;
                }
                if ( v87 < 0 )
                  goto LABEL_180;
                v472 = v1454;
                v1462 = v1454;
                while ( 1 )
                {
                  v1322 = RtlULongLongAdd(v472, 4LL, &v1462);
                  v87 = v1322;
                  if ( v1322 < 0 )
                    break;
                  v1322 = RtlULongLongAdd(v1462, v473, &v1462);
                  v87 = v1322;
                  v475 = 4;
                  if ( v1322 < 0 )
                    goto LABEL_682;
                  v472 = v1462;
                  if ( (unsigned int)(v474 + 1) >= 4 )
                  {
                    v1322 = RtlULongLongAdd(v1462, 4LL, &v1462);
                    v87 = v1322;
                    if ( v1322 >= 0 )
                    {
                      v477 = (int *)v1462;
                      v1532 = v476;
                      if ( !v476 )
                        v477 = 0LL;
                      v1462 = v477;
                      v1640 = v477;
LABEL_683:
                      if ( v87 >= 0 )
                      {
                        if ( v476 == v475 )
                        {
                          v1533 = *v477;
                          goto LABEL_686;
                        }
LABEL_178:
                        v87 = -1073741789;
LABEL_179:
                        v1322 = v87;
                        goto LABEL_180;
                      }
LABEL_686:
                      if ( v87 < 0 )
                        goto LABEL_180;
                      v478 = (unsigned int *)v1454;
                      v1464 = (unsigned int *)v1454;
                      do
                      {
                        v479 = *v478;
                        v1322 = RtlULongLongAdd(v478, 4LL, &v1464);
                        v87 = v1322;
                        if ( v1322 < 0 )
                          goto LABEL_695;
                        v1322 = RtlULongLongAdd(v1464, v479, &v1464);
                        v87 = v1322;
                        if ( v1322 < 0 )
                          goto LABEL_695;
                        v478 = v1464;
                      }
                      while ( (unsigned int)(v482 + 1) < 5 );
                      v1322 = RtlULongLongAdd(v1464, 4LL, &v1464);
                      v87 = v1322;
                      if ( v1322 < 0 )
                      {
LABEL_695:
                        v483 = v1534;
                        v484 = v1641;
                        goto LABEL_696;
                      }
                      v484 = (int *)v1464;
                      v1534 = v483;
                      if ( !v483 )
                        v484 = 0LL;
                      v1464 = (unsigned int *)v484;
                      v1641 = v484;
LABEL_696:
                      if ( v87 < 0 )
                      {
                        v485 = v1495;
                      }
                      else
                      {
                        if ( v483 != 4 )
                          goto LABEL_178;
                        v485 = *v484;
                        v1495 = *v484;
                      }
                      if ( v87 < 0 )
                        goto LABEL_180;
                      if ( v1620 == v1642 )
                      {
                        v1504 = v1535;
                        v1472 = v481;
                        v1439 = v485;
                        if ( v481 > 4 || v480 > 4 )
                        {
                          v87 = -2147024774;
                        }
                        else
                        {
                          memcpy_0(v1409, v471, v480);
                          if ( v1461 )
                            v87 = v1461;
                        }
                        goto LABEL_179;
                      }
LABEL_458:
                      v87 = -1073425151;
                      goto LABEL_179;
                    }
LABEL_682:
                    v476 = v1532;
                    v477 = v1640;
                    goto LABEL_683;
                  }
                }
                v475 = 4;
                goto LABEL_682;
              }
              v347 = *v308;
              v344 = RtlULongLongAdd(v308, 4LL, &v1455);
              if ( v344 < 0 )
                goto LABEL_481;
              v344 = RtlUIntAdd(0LL, 4LL, &v1403);
              if ( v344 < 0 )
              {
LABEL_489:
                v345 = v348;
                goto LABEL_482;
              }
              if ( v340 - v1403 < (unsigned int)v347 )
              {
                v344 = -1073741762;
                goto LABEL_489;
              }
              v1432 = v1455;
              v344 = RtlULongLongAdd(v1455, v347, &v1455);
              if ( v344 < 0 )
                goto LABEL_481;
              v344 = RtlUIntAdd(v1403, (unsigned int)v347, &v1403);
              if ( v344 < 0 )
                goto LABEL_481;
              if ( v340 - v1403 < 4 )
                goto LABEL_480;
              v349 = *(unsigned int *)v1455;
              v344 = RtlULongLongAdd(v1455, 4LL, &v1455);
              if ( v344 < 0 )
                goto LABEL_481;
              v344 = RtlUIntAdd(v1403, 4LL, &v1403);
              if ( v344 < 0 )
                goto LABEL_481;
              if ( v340 - v1403 < (unsigned int)v349 )
                goto LABEL_480;
              v1426 = v1455;
              v344 = RtlULongLongAdd(v1455, (unsigned int)v349, &v1455);
              if ( v344 < 0 )
                goto LABEL_481;
              v344 = RtlUIntAdd(v1403, (unsigned int)v349, &v1403);
              if ( v344 < 0 )
                goto LABEL_481;
              if ( v340 - v1403 < 4 )
                goto LABEL_480;
              v350 = *(unsigned int *)v1455;
              v344 = RtlULongLongAdd(v1455, 4LL, &v1455);
              if ( v344 < 0 )
                goto LABEL_481;
              v344 = RtlUIntAdd(v1403, v351, &v1403);
              if ( v344 < 0 )
                goto LABEL_481;
              if ( v340 - v1403 < (unsigned int)v350 )
                goto LABEL_480;
              v344 = RtlUIntAdd(v1403, (unsigned int)v350, &v1403);
              if ( v344 < 0 )
                goto LABEL_481;
              if ( v340 != v1403 || (unsigned int)(v350 + v349 + v347) + 12LL != v340 )
                goto LABEL_480;
              v352 = GetProcessHeap();
              v353 = HeapAlloc(v352, 8u, 0x30uLL);
              v343 = 0LL;
              v354 = v353;
              if ( !v353 )
              {
                v344 = -1073741801;
LABEL_529:
                v345 = (unsigned int *)v1457;
                v371 = 0LL;
                if ( v344 < 0 )
                {
                  v371 = v1457;
                  v345 = 0LL;
                }
                v1344 = v345;
                if ( v371 )
                {
                  v372 = (void *)v371[1];
                  if ( v372 )
                  {
                    v373 = GetProcessHeap();
                    HeapFree(v373, 0, v372);
                    v371[1] = 0LL;
                  }
                  v374 = (void *)v371[3];
                  if ( v374 )
                  {
                    v375 = GetProcessHeap();
                    HeapFree(v375, 0, v374);
                    v371[3] = 0LL;
                  }
                  v376 = (void *)v371[5];
                  if ( v376 )
                  {
                    v377 = GetProcessHeap();
                    HeapFree(v377, 0, v376);
                    v371[5] = 0LL;
                  }
                  v378 = GetProcessHeap();
                  HeapFree(v378, 0, v371);
                  v345 = (unsigned int *)v1344;
                  v343 = 0LL;
                }
                goto LABEL_482;
              }
              v355 = v1432;
              if ( v1432 )
              {
                *(_DWORD *)v353 = v347;
                v356 = GetProcessHeap();
                v357 = HeapAlloc(v356, 8u, v347);
                v343 = 0LL;
                if ( !v357 )
                {
LABEL_509:
                  v344 = -1073741801;
                  goto LABEL_521;
                }
                v354[1] = v357;
                memcpy_0(v357, v355, v347);
                v343 = 0LL;
              }
              else
              {
                *(_DWORD *)v353 = 0;
                v353[1] = 0LL;
              }
              v358 = v1426;
              if ( v1426 )
              {
                *((_DWORD *)v354 + 4) = v349;
                v359 = GetProcessHeap();
                v360 = HeapAlloc(v359, 8u, v349);
                v343 = 0LL;
                if ( !v360 )
                  goto LABEL_509;
                v354[3] = v360;
                memcpy_0(v360, v358, v349);
                v343 = 0LL;
              }
              else
              {
                *((_DWORD *)v354 + 4) = 0;
                v354[3] = 0LL;
              }
              v361 = v1455;
              if ( v1455 )
              {
                *((_DWORD *)v354 + 8) = v350;
                v362 = GetProcessHeap();
                v363 = HeapAlloc(v362, 8u, v350);
                v343 = 0LL;
                if ( !v363 )
                  goto LABEL_509;
                v354[5] = v363;
                memcpy_0(v363, v361, v350);
                v343 = 0LL;
              }
              else
              {
                *((_DWORD *)v354 + 8) = 0;
                v354[5] = 0LL;
              }
              v1457 = v354;
              v344 = 0;
              v354 = 0LL;
LABEL_521:
              if ( v354 )
              {
                v364 = (void *)v354[1];
                if ( v364 )
                {
                  v365 = GetProcessHeap();
                  HeapFree(v365, 0, v364);
                  v354[1] = 0LL;
                }
                v366 = (void *)v354[3];
                if ( v366 )
                {
                  v367 = GetProcessHeap();
                  HeapFree(v367, 0, v366);
                  v354[3] = 0LL;
                }
                v368 = (void *)v354[5];
                if ( v368 )
                {
                  v369 = GetProcessHeap();
                  HeapFree(v369, 0, v368);
                  v354[5] = 0LL;
                }
                v370 = GetProcessHeap();
                HeapFree(v370, 0, v354);
                v343 = 0LL;
              }
              goto LABEL_529;
            }
            v87 = -2147467259;
          }
          v1322 = v87;
          goto LABEL_476;
        }
        v179 = lpMem;
        v1578 = lpMem;
        if ( v1393 )
        {
          do
          {
            v180 = RtlUIntAdd((unsigned int)v171, (unsigned int)*v179, &v1594);
            v1322 = v180;
            v87 = v180;
            if ( v180 >= 0 )
              v181 = v1594;
            v1473 = v181;
            if ( v180 < 0 )
              goto LABEL_180;
            v1322 = RtlULongLongAdd(v179, v181, &v1578);
            v87 = v1322;
            if ( v1322 < 0 )
              goto LABEL_180;
            v179 = v1578;
          }
          while ( v182 + 1 < v1393 );
        }
        v1322 = RtlULongLongAdd(v179, v171, &v1685);
        v87 = v1322;
        if ( v1322 < 0 )
          goto LABEL_180;
        if ( v179 + 2 <= (_DWORD *)((char *)lpMem + v1394) )
        {
          v183 = v1685;
          *v179 = v178;
          *v183 = v1595;
          ++v1393;
          goto LABEL_271;
        }
LABEL_254:
        v87 = -1073741789;
        v1322 = -1073741789;
        goto LABEL_180;
      }
      v136 = lpMem;
      v1573 = lpMem;
      do
      {
        v137 = RtlUIntAdd((unsigned int)v125, (unsigned int)*v136, &v1567);
        v1322 = v137;
        v87 = v137;
        if ( v137 >= 0 )
          v138 = v1567;
        v1476 = v138;
        if ( v137 < 0 )
          goto LABEL_180;
        v1322 = RtlULongLongAdd(v136, v138, &v1573);
        v87 = v1322;
        if ( v1322 < 0 )
          goto LABEL_180;
        v136 = v1573;
      }
      while ( v139 + 1 < v1393 );
      v1322 = RtlULongLongAdd(v1573, v125, &v1681);
      v87 = v1322;
      if ( v1322 < 0 )
        goto LABEL_180;
      if ( (char *)v136 + v92 + 4 > (char *)lpMem + v1394 )
        goto LABEL_178;
      v148 = v1432;
      v149 = v1681;
      *v136 = v92;
      memcpy_0(v149, v148, v92);
      ++v1393;
    }
    else
    {
      v87 = -1073741811;
      v1322 = -1073741811;
    }
    if ( v87 < 0 )
      goto LABEL_180;
    v135 = 4LL;
    goto LABEL_201;
  }
  v87 = -1073741762;
LABEL_126:
  v1322 = v87;
LABEL_127:
  v83 = v88;
LABEL_181:
  v84 = v1336;
LABEL_182:
  v1394 = 0;
  v140 = lpMem;
  if ( lpMem )
  {
    v141 = GetProcessHeap();
    HeapFree(v141, 0, v140);
    lpMem = 0LL;
  }
  v1453 = 0LL;
  v142 = v1454;
  if ( v1454 )
  {
    v143 = GetProcessHeap();
    HeapFree(v143, 0, v142);
    v1454 = 0LL;
  }
  if ( v83 )
  {
    v144 = GetProcessHeap();
    HeapFree(v144, 0, v83);
  }
  if ( v84 )
  {
    v145 = GetProcessHeap();
    HeapFree(v145, 0, v84);
  }
  v146 = 0;
  if ( v87 >= 0 )
  {
    if ( !v1439 )
      goto LABEL_1353;
    v1649 = 0LL;
    dword_1805C16A0 = v1439;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1324:
      SH<void *,SH_HANDLE>::Reset(&v1649);
      if ( v1439 )
      {
        v1424 = 0LL;
        v1511 = 0LL;
        v978 = 0LL;
        v1512 = 0LL;
        v1349 = 0LL;
        v1650 = &unk_1805C0B40;
        v979 = 0LL;
        v1481 = 0;
        v1616 = 160LL;
        v980 = GetProcessHeap();
        v981 = HeapAlloc(v980, 8u, 0xA0uLL);
        v982 = v981;
        if ( !v981 )
        {
LABEL_1345:
          v1423 = 0LL;
          v1006 = v1424;
          if ( v1424 )
          {
            v1007 = GetProcessHeap();
            HeapFree(v1007, 0, v1006);
            v1424 = 0LL;
          }
          v1511 = 0LL;
          v1008 = v1512;
          if ( v1512 )
          {
            v1009 = GetProcessHeap();
            HeapFree(v1009, 0, v1008);
            v1512 = 0LL;
          }
          if ( v979 )
          {
            v1010 = GetProcessHeap();
            HeapFree(v1010, 0, v979);
          }
          if ( v978 )
          {
            v1011 = GetProcessHeap();
            HeapFree(v1011, 0, v978);
          }
          goto LABEL_1353;
        }
        memcpy_0(v981, v1650, v1616);
        v983 = (unsigned int)v1616;
        v979 = v982;
        v1371 = v982;
        v1617 = 8LL;
        v1651 = &unk_1805C0A88;
        v984 = GetProcessHeap();
        v985 = HeapAlloc(v984, 8u, 8uLL);
        v1433 = v985;
        v986 = v985;
        if ( !v985 )
        {
LABEL_1344:
          v978 = v1349;
          goto LABEL_1345;
        }
        memcpy_0(v985, v1651, v1617);
        v987 = v1617;
        v1349 = v986;
        v1652 = __rdtsc();
        v1438 = 0;
        if ( (int)RtlUIntAdd(4LL, 4LL, &v1536) >= 0 )
        {
          v1485 = v1536;
          if ( (int)RtlUIntAdd(0LL, v1536, &v1438) >= 0 && (int)RtlUIntAdd(v988, (unsigned int)v983, &v1537) >= 0 )
          {
            v1485 = v1537;
            v989 = RtlUIntAdd(v1438, v1537, &v1438);
            if ( (v991 | v989) >= 0 && (int)RtlUIntAdd(v990, v987, &v1538) >= 0 )
            {
              v1485 = v1538;
              v992 = RtlUIntAdd(v1438, v1538, &v1438);
              if ( (v994 | v992) >= 0 && (int)RtlUIntAdd(v993, 8LL, &v1555) >= 0 )
              {
                v1485 = v1555;
                v995 = RtlUIntAdd(v1438, v1555, &v1438);
                if ( (v996 | v995) >= 0 )
                {
                  HIDWORD(v1423) = v1438;
                  v997 = v1438;
                  v998 = GetProcessHeap();
                  v999 = (unsigned int *)HeapAlloc(v998, 8u, v997);
                  v1000 = v999;
                  if ( v999 )
                  {
                    v1424 = v999;
                    LODWORD(v1423) = 0;
                    v1539 = 4;
                    if ( (int)RtlULongLongAdd(v999, 4LL, &v1686) >= 0
                      && v1000 + 2 <= (unsigned int *)((char *)v1000 + HIDWORD(v1423)) )
                    {
                      v1003 = v1686;
                      *v1000 = v1001;
                      *v1003 = v1539;
                      v1004 = v1423 + 1;
                      LODWORD(v1423) = v1423 + 1;
                      if ( !(_DWORD)v983 )
                      {
                        v1018 = -1073741811;
                        v1005 = 1;
LABEL_1362:
                        if ( v1018 < 0 )
                          goto LABEL_1381;
LABEL_1363:
                        if ( v987 )
                        {
                          if ( v1424 == v1002 )
                          {
                            if ( (int)RtlUIntAdd(v1001, v987, &v1543) < 0 )
                              goto LABEL_1381;
                            v1545 = v1543;
                            if ( (int)RtlUIntAdd(HIDWORD(v1423), v1543, (char *)&v1423 + 4) < 0 )
                              goto LABEL_1381;
                            v1004 = v1005 + v1423;
                            LODWORD(v1423) = v1005 + v1423;
                            goto LABEL_1378;
                          }
                          v1020 = (unsigned int *)v1424;
                          v1584 = (unsigned int *)v1424;
                          if ( v1004 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1020, &v1544) >= 0 )
                            {
                              v1545 = v1544;
                              if ( (int)RtlULongLongAdd(v1021, v1544, &v1584) < 0 )
                                break;
                              v1020 = v1584;
                              if ( v1005 + v1022 >= v1004 )
                                goto LABEL_1372;
                            }
                            goto LABEL_1381;
                          }
LABEL_1372:
                          v1023 = RtlULongLongAdd(v1020, 4LL, &v1688);
                          if ( v1023 < 0 || (char *)v1024 + v987 + 4 > (char *)v1424 + HIDWORD(v1423) )
                            goto LABEL_1381;
                          v1025 = v1433;
                          v1026 = v1688;
                          *v1024 = v987;
                          memcpy_0(v1026, v1025, v987);
                          v1004 = v1005 + v1423;
                          LODWORD(v1423) = v1005 + v1423;
                          v1002 = 0LL;
                        }
                        else
                        {
                          v1023 = -1073741811;
                        }
                        if ( v1023 < 0 )
                          goto LABEL_1381;
                        v1019 = 4;
LABEL_1378:
                        v1653 = v1652;
                        if ( v1424 == v1002 )
                        {
                          if ( (int)RtlUIntAdd(v1019, 8LL, &v1546) < 0 )
                            goto LABEL_1381;
                          v1548 = v1546;
                          if ( (int)RtlUIntAdd(HIDWORD(v1423), v1546, (char *)&v1423 + 4) < 0 )
                            goto LABEL_1381;
                        }
                        else
                        {
                          v1028 = (unsigned int *)v1424;
                          v1585 = (unsigned int *)v1424;
                          if ( v1004 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1028, &v1547) >= 0 )
                            {
                              v1548 = v1547;
                              if ( (int)RtlULongLongAdd(v1029, v1547, &v1585) < 0 )
                                break;
                              v1028 = v1585;
                              if ( v1005 + v1030 >= v1004 )
                                goto LABEL_1386;
                            }
                            goto LABEL_1381;
                          }
LABEL_1386:
                          if ( (int)RtlULongLongAdd(v1028, 4LL, &v1689) < 0
                            || v1031 + 3 > (_DWORD *)((char *)v1424 + HIDWORD(v1423)) )
                          {
                            goto LABEL_1381;
                          }
                          v1032 = v1689;
                          *v1031 = 8;
                          *v1032 = v1653;
                        }
                        LODWORD(v1423) = v1005 + v1423;
                        if ( (int)RtlUIntAdd(v1027, v1027, &v1549) >= 0 )
                        {
                          v1034 = v1549;
                          v1551 = v1549;
                          v1499 = v1549;
                          if ( (int)RtlUIntAdd(v1033, 8LL, &v1550) >= 0 )
                          {
                            v1551 = v1550;
                            if ( (int)RtlUIntAdd(v1034, v1550, &v1499) >= 0 )
                            {
                              LODWORD(v1400) = v1499;
                              v1425 = v1035;
                              v1036 = v1035;
                              v1363 = (unsigned int)v1035;
                              v1037 = (int *)v1035;
                              v1521 = v1035;
                              v1457 = v1035;
                              v1385 = (unsigned int)v1035;
                              v1437 = v1035;
                              v1435 = (unsigned int)v1035;
                              v1456 = v1035;
                              v1392 = (int *)v1035;
                              v1488 = (unsigned int)v1035;
                              v1613 = __rdtsc();
                              v1447 = 8;
                              v1038 = RtlUIntAdd(8LL, HIDWORD(v1423), &v1447);
                              if ( v1038 >= 0 )
                              {
                                v1042 = (v1447 + 7) & 0xFFFFFFF8;
                                if ( v1042 >= v1447 )
                                {
                                  v1447 = (v1447 + 7) & 0xFFFFFFF8;
                                  v1043 = v1042;
                                  v1044 = GetProcessHeap();
                                  v1045 = (char *)HeapAlloc(v1044, 8u, v1043);
                                  v1041 = 0LL;
                                  v1046 = v1045;
                                  if ( v1045 )
                                  {
                                    v1519 = v1045;
                                    *(_DWORD *)v1045 = v1423;
                                    v1038 = RtlULongLongAdd(v1045, 4LL, &v1519);
                                    if ( v1038 < 0
                                      || (v1048 = v1519,
                                          *(_DWORD *)v1519 = HIDWORD(v1423),
                                          v1038 = RtlULongLongAdd(v1048, v1047, &v1519),
                                          v1038 < 0) )
                                    {
                                      v1040 = v1036;
                                      v1039 = (unsigned int)v1036;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v1046[v1447 - 8] = v1613;
                                      memcpy_0(v1519, v1424, HIDWORD(v1423));
                                      v1039 = v1447;
                                      v1041 = 0LL;
                                      v1040 = v1046;
                                      v1425 = v1046;
                                      v1046 = 0LL;
                                      v1363 = v1447;
                                    }
                                    if ( v1046 )
                                    {
                                      v1049 = GetProcessHeap();
                                      HeapFree(v1049, 0, v1046);
                                      v1039 = v1363;
                                      v1041 = 0LL;
                                      v1040 = v1425;
                                    }
                                  }
                                  else
                                  {
                                    v1038 = -1073741801;
                                    v1039 = (unsigned int)v1036;
                                    v1040 = v1036;
                                  }
                                }
                                else
                                {
                                  v1038 = -1073741675;
                                }
                              }
                              v1050 = v1038 | 0x10000000;
                              if ( v1050 < 0 )
                                goto LABEL_1523;
                              v1655 = v1041;
                              v1051 = v1041;
                              v1656 = (__int64)v1041;
                              v1657 = v1041;
                              v1658 = (__int64)v1041;
                              v1586 = v1041;
                              v1654 = v1041;
                              v1432 = v1041;
                              if ( v1040 )
                              {
                                v1053 = v1039;
                                v1396 = v1039;
                                if ( v1039
                                  && (v1410 = (unsigned __int16 *)MemoryAlloc(v1039 + 8LL), (v1054 = v1410) != 0LL) )
                                {
                                  v1055 = (unsigned __int8 *)v1425;
                                  v1056 = 0;
                                  v1324 = 0;
                                  v1057 = 0LL;
                                  if ( v1053 )
                                  {
                                    do
                                      v1056 ^= *((_BYTE *)v1425 + v1057++);
                                    while ( v1057 < v1053 );
                                    v1324 = v1056;
                                  }
                                  v1058 = 0;
                                  v1364 = 0;
                                  v1399 = 0;
                                  v1059 = -1;
                                  v1734 = 0xC81ECB17B1B54A58uLL;
                                  v1408 = 0;
                                  v1060 = v1410;
                                  v1402 = -1;
                                  v1061 = v1053 & 7;
                                  if ( (v1053 & 7) != 0 )
                                  {
                                    v1399 = 0;
                                    v1062 = 0;
                                    v1364 = 0;
                                    v1063 = 56;
                                    v1064 = 0;
                                    do
                                    {
                                      v1065 = *v1055++;
                                      if ( v1062 >= 4 )
                                      {
                                        v1066 = (v1065 << v1063) | v1364;
                                        v1364 = v1066;
                                      }
                                      else
                                      {
                                        v1066 = v1364;
                                        v1064 |= v1065 << (v1063 - 32);
                                      }
                                      ++v1062;
                                      v1063 -= 8;
                                    }
                                    while ( v1062 < (int)v1061 );
                                    v1399 = v1064;
                                    v1058 = v1064 ^ 0xB17A307A;
                                    v1067 = v1066 ^ 0x42F6B18D;
                                    v1408 = v1064 ^ 0xB17A307A;
                                    v1402 = v1066 ^ 0x42F6B18D;
                                    v1068 = 0;
                                    if ( (v1053 & 7) != 0 )
                                    {
                                      do
                                      {
                                        v1433 = v1060 + 1;
                                        if ( v1068 >= 4 )
                                        {
                                          v1067 = __ROL4__(v1067, 8);
                                          v1069 = v1067;
                                        }
                                        else
                                        {
                                          v1058 = __ROL4__(v1058, 8);
                                          v1069 = v1058;
                                        }
                                        *v1060 = v1069;
                                        ++v1068;
                                        v1060 = v1433;
                                      }
                                      while ( v1068 < (int)v1061 );
                                      v1058 = v1408;
                                      v1067 = v1402;
                                    }
                                    if ( v1061 <= 4 )
                                    {
                                      v1059 = 0;
                                      v1402 = 0;
                                      if ( v1061 < 4 )
                                      {
                                        v1058 = v1058 >> (8 * (4 - v1061)) << (8 * (4 - v1061));
                                        v1408 = v1058;
                                      }
                                    }
                                    else
                                    {
                                      v1059 = v1067 >> (8 * (8 - v1061)) << (8 * (8 - v1061));
                                      v1402 = v1059;
                                    }
                                    v1054 = v1410;
                                  }
                                  v1433 = (void *)(v1053 >> 3);
                                  if ( v1053 >> 3 )
                                  {
                                    v1070 = v1055 + 2;
                                    v1071 = (char *)v1433;
                                    v1072 = v1364;
                                    v1073 = v1399;
                                    v1074 = WORD2(v1734);
                                    v1334 = WORD1(v1734);
                                    v1075 = HIDWORD(v1734) ^ 0xB1B54A58;
                                    v1076 = v1060 + 7;
                                    do
                                    {
                                      v1077 = v1070[1] | ((*v1070 | ((*(v1070 - 1) | (*(v1070 - 2) << 8)) << 8)) << 8);
                                      v1078 = v1070[5] | ((v1070[4] | ((v1070[3] | (v1070[2] << 8)) << 8)) << 8);
                                      v1433 = v1070 + 8;
                                      v1079 = v1078 ^ v1059;
                                      v1080 = HIDWORD(v1734) ^ v1058 ^ v1077 ^ (v1079 - 19032);
                                      v1081 = (__ROR4__(v1080, 7)
                                             + WORD1(v1734) * __ROR4__(v1058 ^ v1077 ^ (v1079 - 19032), 15)) ^ v1079;
                                      v1082 = (v1074 * __ROR4__(v1081 - 1313519016, 9) - __ROR4__(v1081, 10)) ^ v1080;
                                      v1083 = (__ROL4__(v1082, 5) + HIWORD(v1734) * __ROL4__(v1082 ^ v1074, 4)) ^ v1081;
                                      v1084 = (HIDWORD(v1734) - (v1083 ^ 0xB1B54A58)) ^ v1082;
                                      v1085 = (WORD1(v1734) * (v1084 - 19032) - (v1084 >> 6)) ^ v1083;
                                      v1086 = (19032 * (v1074 ^ __ROR4__(v1085, 15))) ^ v1084;
                                      v1087 = (v1074 * (HIWORD(v1734) + __ROR4__(~v1086, 3))) ^ v1085;
                                      v1088 = (v1087 - 19032 - HIDWORD(v1734)) ^ v1086;
                                      v1089 = (v1334 * (v1088 ^ HIWORD(v1734))) ^ __ROR4__(v1088, 10) ^ v1087;
                                      v1090 = __ROR4__(v1089, 3) ^ (v1074 * __ROL4__(v1089 ^ 0x4A58, 6)) ^ v1088;
                                      v1091 = (19032 * (__ROR4__(v1090, 15) - HIWORD(v1734))) ^ v1089;
                                      v1092 = (v1091 >> 15) ^ (19032 * __ROL4__(v1091 - v1074, 3)) ^ (v1091 >> 1) ^ (19032 * (v1091 ^ HIWORD(v1734))) ^ v1090;
                                      v1093 = (WORD1(v1734) * (v1092 - v1074) - (v1092 >> 13)) ^ v1091;
                                      v1094 = __ROR4__(v1093, 11) ^ (v1074 * __ROR4__(-1313519016 - v1093, 9)) ^ v1092;
                                      v1095 = (v1094 - HIWORD(v1734) + 1313519016) ^ v1093;
                                      v1096 = (19032 * (v1095 ^ WORD1(v1734)) - __ROR4__(v1095, 7)) ^ v1094;
                                      v1097 = (WORD1(v1734) * __ROL4__(v1096 ^ HIWORD(v1734), 4) - __ROR4__(v1096, 16)) ^ v1095;
                                      v1098 = (__ROR4__(v1097, 4) + v1074 * __ROR4__(-1313519016 - v1097, 10)) ^ v1096;
                                      v1099 = __ROR4__(v1098, 9) ^ (HIWORD(v1734) * __ROR4__(v1098 + 1313519016, 4)) ^ v1097;
                                      v1100 = (19032 * __ROL4__(HIDWORD(v1734) ^ v1099, 8) - __ROL4__(v1099, 2)) ^ v1098;
                                      v1101 = (WORD1(v1734) * __ROR4__(HIDWORD(v1734) - v1100, 11) - __ROR4__(v1100, 12)) ^ v1099;
                                      v1102 = (v1101 >> 8) ^ (v1074 * (WORD1(v1734) ^ v1101)) ^ v1100;
                                      v1408 = v1073 ^ v1102;
                                      v1073 = v1077;
                                      v1402 = v1072 ^ v1075 ^ v1102 ^ v1101;
                                      v1072 = v1078;
                                      *(v1076 - 4) = v1408;
                                      v1408 = __ROR4__(v1408, 8);
                                      v1070 = (unsigned __int8 *)v1433;
                                      *v1076 = v1402;
                                      v1402 = __ROR4__(v1402, 8);
                                      *(v1076 - 5) = v1408;
                                      v1408 = __ROR4__(v1408, 8);
                                      *(v1076 - 1) = v1402;
                                      v1402 = __ROR4__(v1402, 8);
                                      *(v1076 - 6) = v1408;
                                      v1408 = __ROR4__(v1408, 8);
                                      *(v1076 - 2) = v1402;
                                      v1402 = __ROR4__(v1402, 8);
                                      *(v1076 - 7) = v1408;
                                      *(v1076 - 3) = v1402;
                                      v1076 += 8;
                                      v1058 = __ROR4__(v1408, 8);
                                      v1059 = __ROR4__(v1402, 8);
                                      v1408 = v1058;
                                      v1402 = v1059;
                                      --v1071;
                                    }
                                    while ( v1071 );
                                    v1056 = v1324;
                                    v87 = v1322;
                                    v1036 = v1456;
                                    v1051 = v1432;
                                    v1053 = v1396;
                                    v1054 = v1410;
                                  }
                                  v1103 = v1053 + 8;
                                  *(_QWORD *)((char *)v1054 + v1053) = v1056;
                                  v1586 = v1054;
                                  v1654 = (__int64 *)(v1053 + 8);
                                  v1655 = &qword_1805C0A90;
                                  v1656 = 8LL;
                                  v1658 = 160LL;
                                  v1657 = (__int64 *)xmmword_1805C0AA0;
                                  v1104 = GetProcessHeap();
                                  v1105 = HeapAlloc(v1104, 8u, 0x30uLL);
                                  v1106 = v1105;
                                  if ( v1105 )
                                  {
                                    *v1105 = v1103;
                                    v1107 = GetProcessHeap();
                                    v1108 = HeapAlloc(v1107, 8u, v1103);
                                    if ( !v1108 )
                                      goto LABEL_1435;
                                    *((_QWORD *)v1106 + 1) = v1108;
                                    memcpy_0(v1108, v1410, v1103);
                                    v1106[4] = 160;
                                    v1109 = GetProcessHeap();
                                    v1110 = HeapAlloc(v1109, 8u, 0xA0uLL);
                                    if ( !v1110 )
                                      goto LABEL_1435;
                                    *((_QWORD *)v1106 + 3) = v1110;
                                    *v1110 = xmmword_1805C0AA0[0];
                                    v1110[1] = xmmword_1805C0AA0[1];
                                    v1110[2] = xmmword_1805C0AA0[2];
                                    v1110[3] = xmmword_1805C0AA0[3];
                                    v1110[4] = xmmword_1805C0AA0[4];
                                    v1110[5] = xmmword_1805C0AA0[5];
                                    v1110[6] = xmmword_1805C0AA0[6];
                                    v1110[7] = xmmword_1805C0AA0[7];
                                    v1110[8] = xmmword_1805C0AA0[8];
                                    v1110[9] = xmmword_1805C0AA0[9];
                                    v1106[8] = 8;
                                    v1111 = GetProcessHeap();
                                    v1112 = HeapAlloc(v1111, 8u, 8uLL);
                                    if ( v1112 )
                                    {
                                      *((_QWORD *)v1106 + 5) = v1112;
                                      v1051 = v1106;
                                      *v1112 = qword_1805C0A90;
                                      v1052 = 0;
                                      v1106 = 0LL;
                                    }
                                    else
                                    {
LABEL_1435:
                                      v1052 = -1073741801;
                                    }
                                    if ( v1106 )
                                    {
                                      v1113 = (void *)*((_QWORD *)v1106 + 1);
                                      if ( v1113 )
                                      {
                                        v1114 = GetProcessHeap();
                                        HeapFree(v1114, 0, v1113);
                                        *((_QWORD *)v1106 + 1) = 0LL;
                                      }
                                      v1115 = (void *)*((_QWORD *)v1106 + 3);
                                      if ( v1115 )
                                      {
                                        v1116 = GetProcessHeap();
                                        HeapFree(v1116, 0, v1115);
                                        *((_QWORD *)v1106 + 3) = 0LL;
                                      }
                                      v1117 = (void *)*((_QWORD *)v1106 + 5);
                                      if ( v1117 )
                                      {
                                        v1118 = GetProcessHeap();
                                        HeapFree(v1118, 0, v1117);
                                        *((_QWORD *)v1106 + 5) = 0LL;
                                      }
                                      v1119 = GetProcessHeap();
                                      HeapFree(v1119, 0, v1106);
                                    }
                                  }
                                  else
                                  {
                                    v1052 = -1073741801;
                                  }
                                  if ( v1052 >= 0 )
                                  {
                                    v1521 = v1051;
                                    v1051 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1052 = -1073741823;
                                }
                                v1120 = v1586;
                                if ( v1586 )
                                {
                                  v1121 = GetProcessHeap();
                                  HeapFree(v1121, 0, v1120);
                                  v1586 = 0LL;
                                }
                                if ( v1051 )
                                {
                                  v1122 = (void *)v1051[1];
                                  if ( v1122 )
                                  {
                                    v1123 = GetProcessHeap();
                                    HeapFree(v1123, 0, v1122);
                                    v1051[1] = 0LL;
                                  }
                                  v1124 = (void *)v1051[3];
                                  if ( v1124 )
                                  {
                                    v1125 = GetProcessHeap();
                                    HeapFree(v1125, 0, v1124);
                                    v1051[3] = 0LL;
                                  }
                                  v1126 = (void *)v1051[5];
                                  if ( v1126 )
                                  {
                                    v1127 = GetProcessHeap();
                                    HeapFree(v1127, 0, v1126);
                                    v1051[5] = 0LL;
                                  }
                                  v1128 = GetProcessHeap();
                                  HeapFree(v1128, 0, v1051);
                                }
                              }
                              else
                              {
                                v1052 = -1073741811;
                              }
                              v1050 = v1052 | 0x10000000;
                              if ( v1050 < 0 )
                                goto LABEL_1522;
                              v1129 = (const void **)v1521;
                              v1429 = 4;
                              v1130 = RtlUIntAdd(4LL, *(unsigned int *)v1521, &v1429);
                              if ( v1130 < 0
                                || (v1130 = RtlUIntAdd(v1429, v1131, &v1429), v1130 < 0)
                                || (v1130 = RtlUIntAdd(v1429, *((unsigned int *)v1129 + 4), &v1429), v1130 < 0)
                                || (v1130 = RtlUIntAdd(v1429, v1132, &v1429), v1130 < 0) )
                              {
                                v1133 = v1486;
                              }
                              else
                              {
                                v1130 = RtlUIntAdd(v1429, *((unsigned int *)v1129 + 8), &v1429);
                                v1133 = v1486;
                                if ( v1130 >= 0 )
                                  v1133 = v1429;
                                v1486 = v1133;
                              }
                              if ( v1130 >= 0 )
                              {
                                v1134 = v1133;
                                v1135 = GetProcessHeap();
                                v1136 = HeapAlloc(v1135, 8u, v1134);
                                if ( v1136 )
                                {
                                  *v1136 = *(_DWORD *)v1129;
                                  v1443 = v1136;
                                  v1130 = RtlULongLongAdd(v1136, 4LL, &v1443);
                                  if ( v1130 >= 0 )
                                  {
                                    memcpy_0(v1443, v1129[1], *(unsigned int *)v1129);
                                    v1130 = RtlULongLongAdd(v1443, *(unsigned int *)v1129, &v1443);
                                    if ( v1130 >= 0 )
                                    {
                                      v1137 = v1443;
                                      *(_DWORD *)v1443 = *((_DWORD *)v1129 + 4);
                                      v1130 = RtlULongLongAdd(v1137, 4LL, &v1443);
                                      if ( v1130 >= 0 )
                                      {
                                        memcpy_0(v1443, v1129[3], *((unsigned int *)v1129 + 4));
                                        v1130 = RtlULongLongAdd(v1443, *((unsigned int *)v1129 + 4), &v1443);
                                        if ( v1130 >= 0 )
                                        {
                                          v1138 = v1443;
                                          *(_DWORD *)v1443 = *((_DWORD *)v1129 + 8);
                                          v1130 = RtlULongLongAdd(v1138, 4LL, &v1443);
                                          if ( v1130 >= 0 )
                                          {
                                            memcpy_0(v1443, v1129[5], *((unsigned int *)v1129 + 8));
                                            v1130 = RtlULongLongAdd(v1443, *((unsigned int *)v1129 + 8), &v1443);
                                            if ( v1130 >= 0 )
                                            {
                                              v1457 = v1136;
                                              v1136 = 0LL;
                                              v1385 = v1486;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if ( v1136 )
                                  {
                                    v1139 = GetProcessHeap();
                                    HeapFree(v1139, 0, v1136);
                                  }
                                }
                                else
                                {
                                  v1130 = -1073741801;
                                }
                              }
                              v1050 = v1130 | 0x10000000;
                              if ( v1050 < 0 )
                                goto LABEL_1522;
                              v1659 = 0LL;
                              v1552 = 0;
                              v1660 = 0LL;
                              v1553 = 0;
                              v1487 = 8;
                              v1140 = RtlUIntAdd(8LL, (unsigned int)v1400, &v1487);
                              v1050 = v1142 | v1140;
                              if ( (v1142 | v1140) >= 0 )
                              {
                                v1143 = (v1487 + 7) & 0xFFFFFFF8;
                                if ( v1143 >= v1487 )
                                {
                                  v1500 = (v1487 + 7) & 0xFFFFFFF8;
                                  v1144 = RtlUIntAdd(v1143, v1141, &v1500);
                                  v1145 = v1501;
                                  v1050 = v1144;
                                  if ( v1144 >= 0 )
                                    v1145 = v1500;
                                  v1501 = v1145;
                                }
                                else
                                {
                                  v1050 = -1073741675;
                                }
                                if ( v1050 >= 0 )
                                {
                                  if ( !v1424 || (unsigned int)v1423 <= 1 )
                                    goto LABEL_1490;
                                  v1146 = (unsigned int *)v1424;
                                  v1147 = 0;
                                  v1465 = (unsigned int *)v1424;
                                  while ( 1 )
                                  {
                                    v1148 = *v1146;
                                    v1050 = RtlULongLongAdd(v1146, 4LL, &v1465);
                                    if ( v1050 < 0 )
                                      break;
                                    v1050 = RtlULongLongAdd(v1465, v1148, &v1465);
                                    if ( v1050 < 0 )
                                      break;
                                    v1146 = v1465;
                                    if ( ++v1147 )
                                    {
                                      v1149 = *v1465;
                                      v1050 = RtlULongLongAdd(v1465, 4LL, &v1465);
                                      if ( v1050 >= 0 )
                                      {
                                        v1150 = v1465;
                                        v1552 = v1149;
                                        if ( !v1149 )
                                          v1150 = 0LL;
                                        v1465 = v1150;
                                        v1659 = v1150;
                                      }
                                      break;
                                    }
                                  }
                                  if ( v1050 < 0 )
                                    goto LABEL_1522;
                                  if ( (unsigned int)v1423 > 2 )
                                  {
                                    v1151 = (unsigned int *)v1424;
                                    v1152 = 0;
                                    v1471 = (unsigned int *)v1424;
                                    while ( 1 )
                                    {
                                      v1153 = *v1151;
                                      v1050 = RtlULongLongAdd(v1151, 4LL, &v1471);
                                      if ( v1050 < 0 )
                                        break;
                                      v1050 = RtlULongLongAdd(v1471, v1153, &v1471);
                                      if ( v1050 < 0 )
                                        break;
                                      v1151 = v1471;
                                      if ( (unsigned int)++v1152 >= 2 )
                                      {
                                        v1155 = *v1471;
                                        v1050 = RtlULongLongAdd(v1471, 4LL, &v1471);
                                        if ( v1050 >= 0 )
                                        {
                                          v1156 = v1471;
                                          v1553 = v1155;
                                          if ( !v1155 )
                                            v1156 = 0LL;
                                          v1471 = v1156;
                                          v1660 = v1156;
                                        }
                                        break;
                                      }
                                    }
                                    if ( v1050 >= 0 )
                                    {
                                      v1430 = 4;
                                      v1050 = RtlUIntAdd(4LL, v1154, &v1430);
                                      if ( v1050 < 0
                                        || (v1050 = RtlUIntAdd(v1430, 4LL, &v1430), v1050 < 0)
                                        || (v1050 = RtlUIntAdd(v1430, v1157, &v1430), v1050 < 0)
                                        || (v1050 = RtlUIntAdd(v1430, 4LL, &v1430), v1050 < 0) )
                                      {
                                        v1159 = v1502;
                                      }
                                      else
                                      {
                                        v1050 = RtlUIntAdd(v1430, v1158, &v1430);
                                        v1159 = v1502;
                                        if ( v1050 >= 0 )
                                          v1159 = v1430;
                                        v1502 = v1159;
                                      }
                                      if ( v1050 >= 0 )
                                      {
                                        if ( v1159 > 0x400000 )
                                        {
                                          v1050 = -2147418113;
LABEL_1522:
                                          v1037 = v1392;
LABEL_1523:
                                          v1160 = v1425;
                                          if ( v1425 )
                                          {
                                            v1161 = GetProcessHeap();
                                            HeapFree(v1161, 0, v1160);
                                          }
                                          v1162 = v1521;
                                          if ( v1521 )
                                          {
                                            v1163 = (void *)*((_QWORD *)v1521 + 1);
                                            if ( v1163 )
                                            {
                                              v1164 = GetProcessHeap();
                                              HeapFree(v1164, 0, v1163);
                                              v1162[1] = 0LL;
                                            }
                                            v1165 = (void *)v1162[3];
                                            if ( v1165 )
                                            {
                                              v1166 = GetProcessHeap();
                                              HeapFree(v1166, 0, v1165);
                                              v1162[3] = 0LL;
                                            }
                                            v1167 = (void *)v1162[5];
                                            if ( v1167 )
                                            {
                                              v1168 = GetProcessHeap();
                                              HeapFree(v1168, 0, v1167);
                                              v1162[5] = 0LL;
                                            }
                                            v1169 = GetProcessHeap();
                                            HeapFree(v1169, 0, v1162);
                                            v1521 = 0LL;
                                          }
                                          v1170 = v1457;
                                          if ( v1457 )
                                          {
                                            v1171 = GetProcessHeap();
                                            HeapFree(v1171, 0, v1170);
                                          }
                                          v1172 = v1437;
                                          if ( v1437 )
                                          {
                                            v1173 = GetProcessHeap();
                                            HeapFree(v1173, 0, v1172);
                                          }
                                          if ( v1036 )
                                          {
                                            v1174 = (void *)v1036[1];
                                            if ( v1174 )
                                            {
                                              v1175 = GetProcessHeap();
                                              HeapFree(v1175, 0, v1174);
                                              v1036[1] = 0LL;
                                            }
                                            v1176 = (void *)v1036[3];
                                            if ( v1176 )
                                            {
                                              v1177 = GetProcessHeap();
                                              HeapFree(v1177, 0, v1176);
                                              v1036[3] = 0LL;
                                            }
                                            v1178 = (void *)v1036[5];
                                            if ( v1178 )
                                            {
                                              v1179 = GetProcessHeap();
                                              HeapFree(v1179, 0, v1178);
                                              v1036[5] = 0LL;
                                            }
                                            v1180 = GetProcessHeap();
                                            HeapFree(v1180, 0, v1036);
                                          }
                                          if ( v1037 )
                                          {
                                            v1181 = GetProcessHeap();
                                            HeapFree(v1181, 0, v1037);
                                          }
                                          if ( v1050 >= 0 )
                                          {
                                            if ( (_DWORD)v1511 )
                                            {
                                              v1182 = (unsigned int *)v1512;
                                              if ( v1512 )
                                              {
                                                v1587 = v1512;
                                                if ( (int)RtlULongLongAdd(v1512, 4LL, &v1587) >= 0 )
                                                {
                                                  v1186 = v1587;
                                                  v1647 = v1184;
                                                  if ( !v1184 )
                                                    v1186 = 0LL;
                                                  v1587 = v1186;
                                                  v1679[1] = v1186;
                                                  if ( v1184 == 4 )
                                                  {
                                                    v1481 = *v1186;
                                                    if ( v1481 >= 0 && v1183 > v1185 )
                                                    {
                                                      v1463 = v1182;
                                                      v1187 = 4LL;
                                                      while ( (int)RtlULongLongAdd(v1182, v1187, &v1463) >= 0
                                                           && (int)RtlULongLongAdd(v1463, *v1182, &v1463) >= 0 )
                                                      {
                                                        if ( v1189 + v1188 >= v1189 )
                                                        {
                                                          v1314 = *v1463;
                                                          if ( (int)RtlULongLongAdd(v1463, v1187, &v1463) >= 0 )
                                                          {
                                                            v1315 = v1463;
                                                            v1667 = v1314;
                                                            if ( !v1314 )
                                                              v1315 = 0LL;
                                                            v1463 = v1315;
                                                            v1679[2] = v1315;
                                                            if ( v1314 == 8 )
                                                              v1679[3] = *v1315;
                                                          }
                                                          break;
                                                        }
                                                        v1182 = v1463;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          v979 = v1371;
                                          v978 = v1349;
                                          goto LABEL_1345;
                                        }
                                        v1435 = v1159;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_1490:
                                    v1050 = -1073741811;
                                  }
                                }
                              }
                              if ( v1050 < 0 )
                                goto LABEL_1522;
                              v1190 = v1435;
                              v1191 = GetProcessHeap();
                              v1192 = (int *)HeapAlloc(v1191, 8u, v1190);
                              if ( v1192 )
                              {
                                v1193 = v1192;
                                v1437 = v1192;
                                v1050 = 0x10000000;
                              }
                              else
                              {
                                v1193 = (int *)v1437;
                                v1050 = -805306345;
                              }
                              if ( v1050 < 0 )
                                goto LABEL_1522;
                              if ( !v1457 || !v1193 )
                              {
                                v1050 = -2147024809;
                                goto LABEL_1522;
                              }
                              v1675[0] = v1457;
                              v1676 = v1385;
                              v1677 = v1435;
                              v1675[1] = v1193;
                              v1678 = 0;
                              if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                && (v1196 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                              {
                                v1197 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1196)(134LL, v1675);
                                v1195 = v1435;
                                v1050 = v1197 | 0x10000000;
                                if ( v1197 >= 0 )
                                  v1195 = v1677;
                                v1435 = v1195;
                              }
                              else
                              {
                                v1194 = GetLastError();
                                v1050 = v1194;
                                if ( v1194 > 0 )
                                  v1050 = (unsigned __int16)v1194 | 0x80070000;
                                if ( v1050 >= 0 )
                                  v1050 = -2147467259;
                                v1195 = v1435;
                              }
                              if ( v1050 == -805306333 )
                              {
                                v1050 = -2147024774;
                                goto LABEL_1522;
                              }
                              if ( v1050 < 0 )
                                goto LABEL_1522;
                              v1432 = 0LL;
                              v1405 = 0;
                              v1458 = v1193;
                              if ( v1195 < 4 )
                                goto LABEL_1584;
                              v1341 = *v1193;
                              v1198 = RtlULongLongAdd(v1193, 4LL, &v1458);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              v1198 = RtlUIntAdd(0LL, 4LL, &v1405);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              if ( v1199 - v1405 < (unsigned int)v1200 )
                                goto LABEL_1584;
                              v1433 = v1458;
                              v1396 = v1200;
                              v1198 = RtlULongLongAdd(v1458, (unsigned int)v1200, &v1458);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              v1198 = RtlUIntAdd(v1405, v1201, &v1405);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              if ( v1202 - v1405 < 4 )
                                goto LABEL_1584;
                              v1203 = *(unsigned int *)v1458;
                              v1198 = RtlULongLongAdd(v1458, 4LL, &v1458);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              v1198 = RtlUIntAdd(v1405, 4LL, &v1405);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              if ( v1204 - v1405 < (unsigned int)v1203 )
                                goto LABEL_1584;
                              v1426 = v1458;
                              v1198 = RtlULongLongAdd(v1458, (unsigned int)v1203, &v1458);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              v1198 = RtlUIntAdd(v1405, (unsigned int)v1203, &v1405);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              if ( v1205 - v1405 < 4 )
                              {
LABEL_1584:
                                v1198 = -1073741762;
                                goto LABEL_1601;
                              }
                              v1206 = *(unsigned int *)v1458;
                              v1198 = RtlULongLongAdd(v1458, 4LL, &v1458);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              v1198 = RtlUIntAdd(v1405, 4LL, &v1405);
                              if ( v1198 < 0 )
                                goto LABEL_1601;
                              if ( v1207 - v1405 < (unsigned int)v1206 )
                              {
LABEL_1600:
                                v1198 = -1073741762;
                                goto LABEL_1601;
                              }
                              v1198 = RtlUIntAdd(v1405, (unsigned int)v1206, &v1405);
                              if ( v1198 < 0 )
                              {
LABEL_1601:
                                v1050 = v1198 | 0x10000000;
                                if ( v1050 < 0 )
                                  goto LABEL_1522;
                                v1614 = 0LL;
                                v1489 = 0LL;
                                if ( !v1036
                                  || (v1237 = (unsigned __int8 *)v1036[1], (v1426 = v1237) == 0LL)
                                  || !*(_DWORD *)v1036 )
                                {
                                  v1050 = -805306355;
                                  goto LABEL_1522;
                                }
                                v1238 = *(unsigned int *)v1036 - 8LL;
                                v1432 = (void *)v1238;
                                v1239 = MemoryAlloc(v1238);
                                v1240 = 0;
                                v1396 = (SIZE_T)v1239;
                                v1241 = v1239;
                                if ( v1239 )
                                {
                                  v1737 = 0x7F1137FAB69605ELL;
                                  v1406 = 0;
                                  v1242 = 0;
                                  v1243 = v1237;
                                  v1244 = v1241;
                                  v1245 = v1238 & 7;
                                  if ( (v1238 & 7) != 0 )
                                  {
                                    v1398 = -1;
                                    v1246 = 0;
                                    v1450 = 0;
                                    v1247 = 0;
                                    v1248 = 0;
                                    v1249 = 56;
                                    do
                                    {
                                      v1250 = *v1243++;
                                      if ( v1248 >= 4 )
                                        v1246 |= v1250 << v1249;
                                      else
                                        v1247 |= v1250 << (v1249 - 32);
                                      ++v1248;
                                      v1249 -= 8;
                                    }
                                    while ( v1248 < (int)v1245 );
                                    v1450 = v1246;
                                    v1240 = v1247 ^ 0x92F65A5;
                                    v1251 = v1450 ^ 0x699A899C;
                                    v1406 = v1247 ^ 0x92F65A5;
                                    v1252 = 0;
                                    v1398 = v1450 ^ 0x699A899C;
                                    if ( (v1238 & 7) != 0 )
                                    {
                                      do
                                      {
                                        v1433 = v1244 + 1;
                                        if ( v1252 >= 4 )
                                        {
                                          v1251 = __ROL4__(v1251, 8);
                                          v1253 = v1251;
                                        }
                                        else
                                        {
                                          v1240 = __ROL4__(v1240, 8);
                                          v1253 = v1240;
                                        }
                                        *v1244 = v1253;
                                        ++v1252;
                                        v1244 = v1433;
                                      }
                                      while ( v1252 < (int)v1245 );
                                      v1240 = v1406;
                                      v1251 = v1398;
                                    }
                                    if ( v1245 <= 4 )
                                    {
                                      v1254 = 0;
                                      v1398 = 0;
                                      if ( v1245 < 4 )
                                      {
                                        v1240 = v1240 >> (8 * (4 - v1245)) << (8 * (4 - v1245));
                                        v1406 = v1240;
                                      }
                                    }
                                    else
                                    {
                                      v1254 = v1251 >> (8 * (8 - v1245)) << (8 * (8 - v1245));
                                      v1398 = v1254;
                                    }
                                  }
                                  else
                                  {
                                    v1247 = 0;
                                    v1398 = 0;
                                    v1254 = 0;
                                  }
                                  v1433 = (void *)(v1238 >> 3);
                                  if ( v1238 >> 3 )
                                  {
                                    v1255 = HIDWORD(v1737);
                                    v1256 = v1244 + 7;
                                    v1257 = v1243 + 2;
                                    v1258 = HIWORD(v1737);
                                    v1259 = (char *)v1433;
                                    v1260 = HIDWORD(v1737) ^ 0xAB69605E;
                                    v1342 = WORD1(v1737);
                                    v1358 = HIDWORD(v1737) ^ 0xAB69605E;
                                    v1261 = WORD2(v1737);
                                    do
                                    {
                                      v1262 = *(v1257 - 1) | (*(v1257 - 2) << 8);
                                      v1263 = v1257[2] << 8;
                                      v1264 = *v1257;
                                      v1257 += 8;
                                      v1265 = *(v1257 - 7) | ((v1264 | (v1262 << 8)) << 8);
                                      v1266 = v1265 ^ v1240;
                                      v1267 = *(v1257 - 3) | ((*(v1257 - 4) | ((*(v1257 - 5) | v1263) << 8)) << 8);
                                      v1268 = v1260 ^ v1266 ^ v1267 ^ v1254;
                                      v1269 = (__ROL4__(v1268, 10) + v1261 * __ROL4__(v1268 + 1419157410, 5)) ^ v1266;
                                      v1270 = (WORD1(v1737) * __ROR4__(v1269 + v1255, 9) - __ROL4__(v1269, 2)) ^ v1268;
                                      v1271 = (24670 * (v1270 - v1261) - (v1270 >> 13)) ^ v1269;
                                      v1272 = (v1258 * __ROL4__(WORD1(v1737) ^ v1271, 6) - __ROL4__(v1271, 2)) ^ v1270;
                                      v1273 = (v1255 - (v1272 ^ 0xAB69605E)) ^ v1271;
                                      v1274 = (v1342 * (v1261 ^ v1273)) ^ __ROR4__(v1273, 6) ^ v1272;
                                      v1275 = (__ROL4__(v1274, 2) + 24670 * __ROR4__(v1274 + v1255, 15)) ^ v1273;
                                      v1276 = (v1258 * __ROR4__(v1275 + 1419157410, 14) - __ROL4__(v1275, 8)) ^ v1274;
                                      v1277 = __ROR4__(v1276, 10) ^ (v1261 * __ROR4__(v1276 ^ 0xAB69605E, 12)) ^ v1275;
                                      v1278 = (v1277 >> 10) ^ (WORD1(v1737) * (v1258 ^ v1277)) ^ v1276;
                                      v1279 = (v1258 * (__ROR4__(~v1278, 5) + 24670)) ^ v1277;
                                      v1280 = (v1279 - v1258) ^ 0xAB69605E ^ v1278;
                                      v1281 = ((v1280 >> 2) + v1261 * __ROL4__(v1258 ^ v1280, 2)) ^ v1279;
                                      v1282 = (__ROL4__(v1281, 7) + WORD1(v1737) * __ROR4__(v1281 - v1255, 6)) ^ v1280;
                                      v1283 = (24670 * (v1261 ^ v1282) + __ROR4__(v1282, 9)) ^ v1281;
                                      v1284 = (__ROL4__(v1283, 7) + v1258 * __ROL4__(WORD1(v1737) ^ v1283, 5)) ^ v1282;
                                      v1285 = v1255 ^ v1283 ^ v1284 ^ 0xAB69605E;
                                      v1286 = (v1261 * (__ROR4__(v1285, 3) - WORD1(v1737))) ^ v1284;
                                      v1287 = (24670 * __ROR4__(v1286 - v1255, 1) - __ROR4__(v1286, 6)) ^ v1285;
                                      v1288 = (__ROL4__(v1287, 14) + HIWORD(v1737) * __ROL4__(v1287 - 1419157410, 3)) ^ v1286;
                                      v1289 = (v1261 * __ROL4__(v1288 - 1419157410, 15) - __ROR4__(v1288, 14)) ^ v1287;
                                      v1290 = (v1289 >> 3) ^ (WORD1(v1737) * (v1289 ^ 0x605E)) ^ v1288;
                                      v1398 = v1450 ^ v1290;
                                      v1450 = v1267;
                                      v1291 = v1247 ^ __ROL4__(v1290, 2) ^ (24670 * __ROL4__(v1255 ^ v1290, 4));
                                      v1247 = v1265;
                                      v1292 = v1291 ^ v1289;
                                      v1260 = v1358;
                                      v1406 = v1292;
                                      *(v1256 - 4) = v1292;
                                      v1406 = __ROR4__(v1406, 8);
                                      v1258 = HIWORD(v1737);
                                      *v1256 = v1398;
                                      v1256 += 8;
                                      v1398 = __ROR4__(v1398, 8);
                                      *(v1256 - 13) = v1406;
                                      v1406 = __ROR4__(v1406, 8);
                                      *(v1256 - 9) = v1398;
                                      v1398 = __ROR4__(v1398, 8);
                                      *(v1256 - 14) = v1406;
                                      v1406 = __ROR4__(v1406, 8);
                                      *(v1256 - 10) = v1398;
                                      v1398 = __ROR4__(v1398, 8);
                                      *(v1256 - 15) = v1406;
                                      *(v1256 - 11) = v1398;
                                      v1240 = __ROR4__(v1406, 8);
                                      v1254 = __ROR4__(v1398, 8);
                                      v1406 = v1240;
                                      v1398 = v1254;
                                      --v1259;
                                    }
                                    while ( v1259 );
                                    v1242 = 0;
                                    v87 = v1322;
                                    v1036 = v1456;
                                    v1238 = (unsigned __int64)v1432;
                                    v1241 = (_BYTE *)v1396;
                                  }
                                  for ( ii = 0LL; ii < v1238; ++ii )
                                    v1242 ^= v1241[ii];
                                  if ( v1242 == *(_QWORD *)((char *)v1426 + v1238) )
                                  {
                                    v1295 = 0;
                                    v1294 = (int *)v1241;
                                    v1489 = (int *)v1241;
                                    v1241 = 0LL;
                                    v1614 = v1238;
                                  }
                                  else
                                  {
                                    v1294 = v1489;
                                    v1295 = -1073425151;
                                  }
                                  if ( v1241 )
                                  {
                                    MemoryFree(v1241);
                                    v1294 = v1489;
                                  }
                                  if ( v1295 >= 0 )
                                  {
                                    v1296 = v1614;
                                    v1037 = v1294;
                                    v1392 = v1294;
                                    v1050 = 0x10000000;
                                    v1294 = 0LL;
                                    v1488 = v1614;
                                    v1489 = 0LL;
                                    goto LABEL_1677;
                                  }
                                }
                                else
                                {
                                  v1294 = v1489;
                                }
                                v1296 = v1488;
                                v1050 = -805306367;
                                v1037 = v1392;
LABEL_1677:
                                if ( v1294 )
                                {
                                  v1297 = GetProcessHeap();
                                  HeapFree(v1297, 0, v1294);
                                  v1296 = v1488;
                                  v1489 = 0LL;
                                }
                                if ( v1050 < 0 )
                                  goto LABEL_1523;
                                v1448 = 0;
                                v1520 = v1037;
                                if ( v1296 >= 4 )
                                {
                                  v1343 = *v1037;
                                  v1298 = RtlULongLongAdd(v1037, 4LL, &v1520);
                                  if ( v1298 < 0 )
                                    goto LABEL_1715;
                                  v1298 = RtlUIntAdd(0LL, 4LL, &v1448);
                                  if ( v1298 < 0 )
                                    goto LABEL_1715;
                                  if ( v1299 - v1448 >= 4 )
                                  {
                                    v1300 = *(unsigned int *)v1520;
                                    v1298 = RtlULongLongAdd(v1520, 4LL, &v1520);
                                    if ( v1298 < 0 )
                                      goto LABEL_1715;
                                    v1298 = RtlUIntAdd(v1448, 4LL, &v1448);
                                    if ( v1298 < 0 )
                                      goto LABEL_1715;
                                    if ( v1301 - v1448 >= (unsigned int)v1300 )
                                    {
                                      v1298 = RtlUIntAdd(v1448, (unsigned int)v1300, &v1448);
                                      if ( v1298 < 0 )
                                        goto LABEL_1715;
                                      v1304 = v1520;
                                      if ( (char *)v1037 + v1302 >= (char *)v1520 + v1300
                                        && v1302 + (char *)v1037 - (_BYTE *)v1520 - v1300 < 8 )
                                      {
                                        v1335 = (unsigned int)v1303;
                                        v1305 = v1303;
                                        v1298 = (int)v1303;
                                        if ( v1520 )
                                        {
                                          v1298 = RtlULongLongAdd(v1520, (unsigned int)v1300, &v1662);
                                          if ( v1298 < 0 )
                                          {
LABEL_1711:
                                            if ( v1298 >= 0 && v1343 != (_DWORD)v1511 )
                                              v1298 = -1073741762;
                                            goto LABEL_1714;
                                          }
                                          v1307 = v1662;
                                          if ( (unsigned __int64)v1304 < v1662 )
                                          {
                                            do
                                            {
                                              v1298 = RtlULongLongAdd(v1306, 4LL, &v1663);
                                              if ( v1298 < 0 )
                                                goto LABEL_1714;
                                              if ( v1663 > v1309 )
                                                goto LABEL_1706;
                                              v1310 = RtlUIntAdd(4LL, *v1308, v1554);
                                              v1298 = v1310;
                                              if ( v1310 >= 0 )
                                                v1312 = v1554[0];
                                              v1554[1] = v1312;
                                              if ( v1310 < 0 )
                                                goto LABEL_1714;
                                              v1298 = RtlULongLongAdd(v1311, v1312, &v1664);
                                              if ( v1298 < 0 )
                                                goto LABEL_1714;
                                              v1306 = v1664;
                                              if ( v1664 > v1307 )
                                                goto LABEL_1706;
                                              ++v1335;
                                            }
                                            while ( v1664 < v1307 );
                                          }
                                          if ( v1306 != v1307 )
                                          {
LABEL_1706:
                                            v1298 = -1073741811;
LABEL_1714:
                                            v1037 = v1392;
                                            goto LABEL_1715;
                                          }
                                        }
                                        if ( (_DWORD)v1300 )
                                        {
                                          v1313 = GetProcessHeap();
                                          v1305 = HeapAlloc(v1313, 8u, v1300);
                                          if ( !v1305 )
                                          {
                                            v1298 = -1073741801;
                                            goto LABEL_1711;
                                          }
                                          v1298 = 0;
                                        }
                                        if ( v1304 )
                                          memcpy_0(v1305, v1304, v1300);
                                        v1511 = __PAIR64__(v1300, v1335);
                                        v1512 = v1305;
                                        goto LABEL_1711;
                                      }
                                    }
                                  }
                                }
                                v1298 = -1073741762;
LABEL_1715:
                                v1050 = v1298 | 0x10000000;
                                goto LABEL_1523;
                              }
                              if ( v1208 != v1405 || (unsigned int)(v1206 + v1203 + v1209) + 12LL != v1208 )
                                goto LABEL_1600;
                              v1210 = GetProcessHeap();
                              v1211 = HeapAlloc(v1210, 8u, 0x30uLL);
                              if ( !v1211 )
                              {
                                v1198 = -1073741801;
LABEL_1632:
                                v1036 = v1432;
                                v1229 = 0LL;
                                if ( v1198 < 0 )
                                {
                                  v1229 = v1432;
                                  v1036 = 0LL;
                                }
                                v1456 = v1036;
                                if ( v1229 )
                                {
                                  v1230 = (void *)v1229[1];
                                  if ( v1230 )
                                  {
                                    v1231 = GetProcessHeap();
                                    HeapFree(v1231, 0, v1230);
                                    v1229[1] = 0LL;
                                  }
                                  v1232 = (void *)v1229[3];
                                  if ( v1232 )
                                  {
                                    v1233 = GetProcessHeap();
                                    HeapFree(v1233, 0, v1232);
                                    v1229[3] = 0LL;
                                  }
                                  v1234 = (void *)v1229[5];
                                  if ( v1234 )
                                  {
                                    v1235 = GetProcessHeap();
                                    HeapFree(v1235, 0, v1234);
                                    v1229[5] = 0LL;
                                  }
                                  v1236 = GetProcessHeap();
                                  HeapFree(v1236, 0, v1229);
                                  v1456 = v1036;
                                }
                                goto LABEL_1601;
                              }
                              v1212 = v1433;
                              if ( v1433 )
                              {
                                *(_DWORD *)v1211 = v1341;
                                v1213 = GetProcessHeap();
                                v1214 = v1396;
                                v1215 = HeapAlloc(v1213, 8u, v1396);
                                if ( !v1215 )
                                {
LABEL_1611:
                                  v1198 = -1073741801;
                                  goto LABEL_1624;
                                }
                                v1211[1] = v1215;
                                memcpy_0(v1215, v1212, v1214);
                              }
                              else
                              {
                                *(_DWORD *)v1211 = 0;
                                v1211[1] = 0LL;
                              }
                              v1216 = v1426;
                              if ( v1426 )
                              {
                                *((_DWORD *)v1211 + 4) = v1203;
                                v1217 = GetProcessHeap();
                                v1218 = HeapAlloc(v1217, 8u, v1203);
                                if ( !v1218 )
                                  goto LABEL_1611;
                                v1211[3] = v1218;
                                memcpy_0(v1218, v1216, v1203);
                              }
                              else
                              {
                                *((_DWORD *)v1211 + 4) = 0;
                                v1211[3] = 0LL;
                              }
                              v1219 = v1458;
                              if ( v1458 )
                              {
                                *((_DWORD *)v1211 + 8) = v1206;
                                v1220 = GetProcessHeap();
                                v1221 = HeapAlloc(v1220, 8u, v1206);
                                if ( !v1221 )
                                {
                                  v1198 = -1073741801;
                                  goto LABEL_1624;
                                }
                                v1211[5] = v1221;
                                memcpy_0(v1221, v1219, v1206);
                              }
                              else
                              {
                                *((_DWORD *)v1211 + 8) = 0;
                                v1211[5] = 0LL;
                              }
                              v1432 = v1211;
                              v1198 = 0;
                              v1211 = 0LL;
LABEL_1624:
                              if ( v1211 )
                              {
                                v1222 = (void *)v1211[1];
                                if ( v1222 )
                                {
                                  v1223 = GetProcessHeap();
                                  HeapFree(v1223, 0, v1222);
                                  v1211[1] = 0LL;
                                }
                                v1224 = (void *)v1211[3];
                                if ( v1224 )
                                {
                                  v1225 = GetProcessHeap();
                                  HeapFree(v1225, 0, v1224);
                                  v1211[3] = 0LL;
                                }
                                v1226 = (void *)v1211[5];
                                if ( v1226 )
                                {
                                  v1227 = GetProcessHeap();
                                  HeapFree(v1227, 0, v1226);
                                  v1211[5] = 0LL;
                                }
                                v1228 = GetProcessHeap();
                                HeapFree(v1228, 0, v1211);
                              }
                              goto LABEL_1632;
                            }
                          }
                        }
LABEL_1381:
                        v979 = v1371;
                        goto LABEL_1344;
                      }
                      if ( v1424 == v1002 )
                      {
                        if ( (int)RtlUIntAdd(v1001, (unsigned int)v983, &v1540) < 0 )
                          goto LABEL_1381;
                        v1542 = v1540;
                        if ( (int)RtlUIntAdd(HIDWORD(v1423), v1540, (char *)&v1423 + 4) >= 0 )
                        {
                          v1005 = (_DWORD)v1002 + 1;
                          v1004 = (_DWORD)v1002 + 1 + v1423;
                          LODWORD(v1423) = v1004;
                          goto LABEL_1363;
                        }
                        goto LABEL_1343;
                      }
                      v1013 = (unsigned int *)v1424;
                      v1583 = (unsigned int *)v1424;
                      if ( v1004 )
                      {
                        while ( (int)RtlUIntAdd(4LL, *v1013, &v1541) >= 0 )
                        {
                          v1542 = v1541;
                          if ( (int)RtlULongLongAdd(v1014, v1541, &v1583) < 0 )
                            goto LABEL_1343;
                          v1013 = v1583;
                          if ( v1015 + 1 >= v1004 )
                            goto LABEL_1358;
                        }
                        goto LABEL_1381;
                      }
LABEL_1358:
                      v1340 = RtlULongLongAdd(v1013, 4LL, &v1687);
                      if ( v1340 >= 0 && (char *)v1016 + v983 + 4 <= (char *)v1424 + HIDWORD(v1423) )
                      {
                        v1017 = v1687;
                        *v1016 = v983;
                        memcpy_0(v1017, v982, v983);
                        v1005 = 1;
                        v1018 = v1340;
                        v1004 = v1423 + 1;
                        LODWORD(v1423) = v1423 + 1;
                        v1002 = 0LL;
                        v1001 = 4;
                        goto LABEL_1362;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_1343:
        v979 = v982;
        goto LABEL_1344;
      }
LABEL_1353:
      v1012 = v1504;
      v1666 = v1472;
      v1588 = v1409;
      v1456 = 0LL;
      goto LABEL_1724;
    }
    v1437 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71F8[0])(0LL, 0LL, 1027LL);
    if ( !v1437 )
    {
      GetLastError();
      goto LABEL_1324;
    }
    v486 = off_1805B7198[0]();
    v487 = dword_1805C16A0;
    qword_1805C1698 = v486;
    LODWORD(v1400) = dword_1805C16A0;
    memset_0(&v1690, 0, 0x70uLL);
    v1425 = 0LL;
    v1459 = 0LL;
    v1460 = 0LL;
    v1432 = 0LL;
    v1497 = 1;
    memset_0(v1757, 0, 0x2CuLL);
    v1457 = 0LL;
    while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
      ;
    v488 = dword_1805C1C38;
    if ( !dword_1805C1C38 )
    {
      v1388 = 0;
      LODWORD(v1409) = 0;
      v1514 = 0LL;
      v1604 = 0LL;
      v489 = (char *)MemoryAlloc(0x338uLL);
      v1396 = (SIZE_T)v489;
      if ( !v489 )
        goto LABEL_745;
      v490 = -1;
      v1414 = 0;
      v491 = v489 + 7;
      v492 = 0;
      v1420 = 0;
      v493 = 0;
      v494 = (unsigned __int8 *)&unk_1804A9632;
      v495 = 103LL;
      do
      {
        v496 = *(v494 - 1) | (*(v494 - 2) << 8);
        v497 = v494[2] << 8;
        v498 = *v494;
        v494 += 8;
        v499 = *(v494 - 7) | ((v498 | (v496 << 8)) << 8);
        v500 = v499 ^ v493;
        v501 = *(v494 - 3) | ((*(v494 - 4) | ((*(v494 - 5) | v497) << 8)) << 8);
        v502 = v500 ^ v501 ^ v146 ^ 0xAC987321;
        v503 = (__ROL4__(v502, 10) + 4991 * __ROL4__(v502 + 1419157410, 5)) ^ v500;
        v504 = (43881 * __ROR4__(v503 + 133239679, 9) - __ROL4__(v503, 2)) ^ v502;
        v505 = (24670 * v504 - (v504 >> 13) - 123127970) ^ v503;
        v506 = (2033 * __ROL4__(v505 ^ 0xAB69, 6) - __ROL4__(v505, 2)) ^ v504;
        v507 = (133239679 - (v506 ^ 0xAB69605E)) ^ v505;
        v508 = (43881 * (v507 ^ 0x137F)) ^ __ROR4__(v507, 6) ^ v506;
        v509 = (__ROL4__(v508, 2) + 24670 * __ROR4__(v508 + 133239679, 15)) ^ v507;
        v510 = (2033 * __ROR4__(v509 + 1419157410, 14) - __ROL4__(v509, 8)) ^ v508;
        v511 = __ROR4__(v510, 10) ^ (4991 * __ROR4__(v510 ^ 0xAB69605E, 12)) ^ v509;
        v512 = (v511 >> 10) ^ (43881 * (v511 ^ 0x7F1)) ^ v510;
        v513 = (2033 * (__ROR4__(~v512, 5) + 24670)) ^ v511;
        v514 = v512 ^ (v513 - 2033) ^ 0xAB69605E;
        v515 = ((v514 >> 2) + 4991 * __ROL4__(v512 ^ (v513 - 2033) ^ 0xAB6967AF, 2)) ^ v513;
        v516 = (__ROL4__(v515, 7) + 43881 * __ROR4__(v515 - 133239679, 6)) ^ v514;
        v517 = (24670 * (v516 ^ 0x137F) + __ROR4__(v516, 9)) ^ v515;
        v518 = (__ROL4__(v517, 7) + 2033 * __ROL4__(v517 ^ 0xAB69, 5)) ^ v516;
        v519 = v517 ^ v518 ^ 0xAC987321;
        v520 = (4991 * __ROR4__(v519, 3) - 219010071) ^ v518;
        v521 = (24670 * __ROR4__(v520 - 133239679, 1) - __ROR4__(v520, 6)) ^ v519;
        v522 = (__ROL4__(v521, 14) + 2033 * __ROL4__(v521 - 1419157410, 3)) ^ v520;
        v523 = (4991 * __ROL4__(v522 - 1419157410, 15) - __ROR4__(v522, 14)) ^ v521;
        v524 = (v523 >> 3) ^ (43881 * (v523 ^ 0x605E)) ^ v522;
        v1414 = v490 ^ v524;
        v490 = v501;
        v525 = v492 ^ __ROL4__(v524, 2) ^ (24670 * __ROL4__(v524 ^ 0x7F1137F, 4));
        v492 = v499;
        v1420 = v525 ^ v523;
        *(v491 - 4) = v525 ^ v523;
        v1420 = __ROR4__(v1420, 8);
        *v491 = v1414;
        v491 += 8;
        v1414 = __ROR4__(v1414, 8);
        *(v491 - 13) = v1420;
        v1420 = __ROR4__(v1420, 8);
        *(v491 - 9) = v1414;
        v1414 = __ROR4__(v1414, 8);
        *(v491 - 14) = v1420;
        v1420 = __ROR4__(v1420, 8);
        *(v491 - 10) = v1414;
        v1414 = __ROR4__(v1414, 8);
        *(v491 - 15) = v1420;
        *(v491 - 11) = v1414;
        v493 = __ROR4__(v1420, 8);
        v146 = __ROR4__(v1414, 8);
        v1420 = v493;
        v1414 = v146;
        --v495;
      }
      while ( v495 );
      v487 = (unsigned int)v1400;
      v146 = 0;
      v87 = v1322;
      v526 = 0LL;
      v527 = (void *)v1396;
      v528 = 0;
      v529 = 0;
      do
      {
        v528 ^= *(_BYTE *)(v526 + v1396);
        ++v526;
      }
      while ( v526 < 0x338 );
      if ( v528 == 64LL )
      {
        v1514 = (LPCWSTR)v1396;
        v530 = 0;
        v527 = 0LL;
        v1604 = 824LL;
      }
      else
      {
        v530 = -1073425151;
      }
      if ( v527 )
        MemoryFree(v527);
      if ( v530 < 0 )
        goto LABEL_745;
      v531 = v1514;
      HIBYTE(v1514[v1604 / 2 - 1]) = 0;
      memset_0(&unk_1805C2570, 0, 0x60uLL);
      while ( *(_BYTE *)v531 )
      {
        v532 = v531;
        v533 = -1LL;
        do
          ++v533;
        while ( v531[v533] );
        v534 = &v531[v533];
        v535 = (char *)&unk_1805C2570 + 24 * (unsigned int)v1409;
        if ( !GetModuleHandleExW(0, v532, (HMODULE *)v535) )
        {
          v146 = 0;
LABEL_745:
          v529 = -1073741702;
          break;
        }
        v529 = 0;
        if ( **(_WORD **)v535 == 23117
          && (v536 = *(int *)(*(_QWORD *)v535 + 60LL), (unsigned int)v536 < 0x10000000)
          && (v537 = *(_QWORD *)v535 + v536, v537 >= *(_QWORD *)v535)
          && *(_DWORD *)v537 == 17744 )
        {
          if ( ((*(_WORD *)(v537 + 24) - 267) & 0xFEFF) != 0 )
          {
            v529 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v535 + 12) = *(_QWORD *)(v537 + 136);
            *((_DWORD *)v535 + 2) = *(_DWORD *)(v537 + 80);
          }
        }
        else
        {
          v529 = -1073741701;
        }
        v538 = *(_DWORD *)(v534 + 1);
        v539 = 0;
        v531 = v534 + 3;
        v1374 = v538;
        for ( jj = 0; v539 < v1374; jj = ++v539 )
        {
          v540 = (const CHAR *)v531;
          v541 = -1LL;
          do
            ++v541;
          while ( *((_BYTE *)v531 + v541) );
          v531 = (LPCWSTR)((char *)v531 + v541 + 1);
          if ( v529 >= 0 )
          {
            v542 = GetProcAddress(*(HMODULE *)v535, v540);
            if ( !v542 )
            {
              v146 = 0;
              goto LABEL_746;
            }
            off_1805B7100[v1388] = v542;
            v539 = jj;
          }
          ++v1388;
        }
        LODWORD(v1409) = (_DWORD)v1409 + 1;
        v146 = 0;
      }
LABEL_746:
      if ( v1514 )
      {
        v543 = GetProcessHeap();
        HeapFree(v543, 0, (LPVOID)v1514);
      }
      if ( v529 < 0 )
      {
        v544 = 4LL;
        v545 = (HMODULE *)&unk_1805C2570;
        do
        {
          if ( *v545 )
            FreeLibrary(*v545);
          v545 += 3;
          --v544;
        }
        while ( v544 );
        memset_0(&unk_1805C2570, 0, 0x60uLL);
        memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
LABEL_757:
        v1359 = 0;
        dwBytes_4 = 0;
        _InterlockedExchange(&dword_1805C2560, 0);
        v1794 = 0;
        v1621 = 0LL;
        v1622 = 0LL;
        v1623 = 0LL;
        v1525 = 0LL;
        v1526 = 0LL;
        v1795 = 0;
        v1581 = 0LL;
        while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
          ;
        v546 = dword_1805C1C38;
        if ( !dword_1805C1C38 )
        {
          v1389 = 0;
          LODWORD(v1409) = 0;
          v1515 = 0LL;
          v1605 = 0LL;
          v547 = (char *)MemoryAlloc(0x338uLL);
          v1396 = (SIZE_T)v547;
          if ( !v547 )
            goto LABEL_794;
          v548 = -1;
          v1415 = 0;
          v549 = v547 + 7;
          v1421 = 0;
          v550 = 0;
          v551 = (unsigned __int8 *)&unk_1804A9632;
          v552 = 0;
          v553 = 103LL;
          do
          {
            v554 = *(v551 - 1) | (*(v551 - 2) << 8);
            v555 = v551[2] << 8;
            v556 = *v551;
            v551 += 8;
            v557 = *(v551 - 7) | ((v556 | (v554 << 8)) << 8);
            v558 = v557 ^ v552;
            v559 = *(v551 - 3) | ((*(v551 - 4) | ((*(v551 - 5) | v555) << 8)) << 8);
            v560 = v558 ^ v559 ^ v146 ^ 0xAC987321;
            v561 = (__ROL4__(v560, 10) + 4991 * __ROL4__(v560 + 1419157410, 5)) ^ v558;
            v562 = (43881 * __ROR4__(v561 + 133239679, 9) - __ROL4__(v561, 2)) ^ v560;
            v563 = (24670 * v562 - (v562 >> 13) - 123127970) ^ v561;
            v564 = (2033 * __ROL4__(v563 ^ 0xAB69, 6) - __ROL4__(v563, 2)) ^ v562;
            v565 = (133239679 - (v564 ^ 0xAB69605E)) ^ v563;
            v566 = (43881 * (v565 ^ 0x137F)) ^ __ROR4__(v565, 6) ^ v564;
            v567 = (__ROL4__(v566, 2) + 24670 * __ROR4__(v566 + 133239679, 15)) ^ v565;
            v568 = (2033 * __ROR4__(v567 + 1419157410, 14) - __ROL4__(v567, 8)) ^ v566;
            v569 = __ROR4__(v568, 10) ^ (4991 * __ROR4__(v568 ^ 0xAB69605E, 12)) ^ v567;
            v570 = (v569 >> 10) ^ (43881 * (v569 ^ 0x7F1)) ^ v568;
            v571 = (2033 * (__ROR4__(~v570, 5) + 24670)) ^ v569;
            v572 = v570 ^ (v571 - 2033) ^ 0xAB69605E;
            v573 = ((v572 >> 2) + 4991 * __ROL4__(v570 ^ (v571 - 2033) ^ 0xAB6967AF, 2)) ^ v571;
            v574 = (__ROL4__(v573, 7) + 43881 * __ROR4__(v573 - 133239679, 6)) ^ v572;
            v575 = (24670 * (v574 ^ 0x137F) + __ROR4__(v574, 9)) ^ v573;
            v576 = (__ROL4__(v575, 7) + 2033 * __ROL4__(v575 ^ 0xAB69, 5)) ^ v574;
            v577 = v575 ^ v576 ^ 0xAC987321;
            v578 = (4991 * __ROR4__(v577, 3) - 219010071) ^ v576;
            v579 = (24670 * __ROR4__(v578 - 133239679, 1) - __ROR4__(v578, 6)) ^ v577;
            v580 = (__ROL4__(v579, 14) + 2033 * __ROL4__(v579 - 1419157410, 3)) ^ v578;
            v581 = (4991 * __ROL4__(v580 - 1419157410, 15) - __ROR4__(v580, 14)) ^ v579;
            v582 = (v581 >> 3) ^ (43881 * (v581 ^ 0x605E)) ^ v580;
            v1415 = v548 ^ v582;
            v548 = v559;
            v583 = v550 ^ __ROL4__(v582, 2) ^ (24670 * __ROL4__(v582 ^ 0x7F1137F, 4));
            v550 = v557;
            v1421 = v583 ^ v581;
            *(v549 - 4) = v583 ^ v581;
            v1421 = __ROR4__(v1421, 8);
            *v549 = v1415;
            v549 += 8;
            v1415 = __ROR4__(v1415, 8);
            *(v549 - 13) = v1421;
            v1421 = __ROR4__(v1421, 8);
            *(v549 - 9) = v1415;
            v1415 = __ROR4__(v1415, 8);
            *(v549 - 14) = v1421;
            v1421 = __ROR4__(v1421, 8);
            *(v549 - 10) = v1415;
            v1415 = __ROR4__(v1415, 8);
            *(v549 - 15) = v1421;
            *(v549 - 11) = v1415;
            v552 = __ROR4__(v1421, 8);
            v146 = __ROR4__(v1415, 8);
            v1421 = v552;
            v1415 = v146;
            --v553;
          }
          while ( v553 );
          v584 = 0;
          v146 = 0;
          v487 = (unsigned int)v1400;
          v585 = 0LL;
          v87 = v1322;
          v586 = 0;
          v587 = (void *)v1396;
          do
          {
            v584 ^= *(_BYTE *)(v585 + v1396);
            ++v585;
          }
          while ( v585 < 0x338 );
          if ( v584 == 64LL )
          {
            v1515 = (LPCWSTR)v1396;
            v588 = 0;
            v587 = 0LL;
            v1605 = 824LL;
          }
          else
          {
            v588 = -1073425151;
          }
          if ( v587 )
            MemoryFree(v587);
          if ( v588 < 0 )
            goto LABEL_794;
          v589 = v1515;
          HIBYTE(v1515[v1605 / 2 - 1]) = 0;
          memset_0(&unk_1805C2570, 0, 0x60uLL);
          while ( *(_BYTE *)v589 )
          {
            v590 = v589;
            v591 = -1LL;
            do
              ++v591;
            while ( v589[v591] );
            v592 = &v589[v591];
            v593 = (char *)&unk_1805C2570 + 24 * (unsigned int)v1409;
            if ( !GetModuleHandleExW(0, v590, (HMODULE *)v593) )
            {
              v146 = 0;
LABEL_794:
              v586 = -1073741702;
              break;
            }
            v586 = 0;
            if ( **(_WORD **)v593 == 23117
              && (v594 = *(int *)(*(_QWORD *)v593 + 60LL), (unsigned int)v594 < 0x10000000)
              && (v595 = *(_QWORD *)v593 + v594, v595 >= *(_QWORD *)v593)
              && *(_DWORD *)v595 == 17744 )
            {
              if ( ((*(_WORD *)(v595 + 24) - 267) & 0xFEFF) != 0 )
              {
                v586 = -1073741811;
              }
              else
              {
                *(_QWORD *)(v593 + 12) = *(_QWORD *)(v595 + 136);
                *((_DWORD *)v593 + 2) = *(_DWORD *)(v595 + 80);
              }
            }
            else
            {
              v586 = -1073741701;
            }
            v596 = *(_DWORD *)(v592 + 1);
            v597 = 0;
            v589 = v592 + 3;
            v1375 = v596;
            for ( jj = 0; v597 < v1375; jj = ++v597 )
            {
              v598 = (const CHAR *)v589;
              v599 = -1LL;
              do
                ++v599;
              while ( *((_BYTE *)v589 + v599) );
              v589 = (LPCWSTR)((char *)v589 + v599 + 1);
              if ( v586 >= 0 )
              {
                v600 = GetProcAddress(*(HMODULE *)v593, v598);
                if ( !v600 )
                {
                  v146 = 0;
                  goto LABEL_795;
                }
                off_1805B7100[v1389] = v600;
                v597 = jj;
              }
              ++v1389;
            }
            LODWORD(v1409) = (_DWORD)v1409 + 1;
            v146 = 0;
          }
LABEL_795:
          if ( v1515 )
          {
            v601 = GetProcessHeap();
            HeapFree(v601, 0, (LPVOID)v1515);
          }
          if ( v586 < 0 )
          {
            v602 = 4LL;
            v603 = (HMODULE *)&unk_1805C2570;
            do
            {
              if ( *v603 )
                FreeLibrary(*v603);
              v603 += 3;
              --v602;
            }
            while ( v602 );
            memset_0(&unk_1805C2570, 0, 0x60uLL);
            memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
LABEL_806:
            _InterlockedExchange(&dword_1805C2560, 0);
            memset_0(&v1690, 0, 0x70uLL);
            v1459 = 0LL;
            v604 = v487 & 0xF;
            v1351 = v604;
            LOWORD(v1794) = (v487 >> 4) & 0xF;
            HIWORD(v1794) = (v487 >> 8) & 0xF;
            v1795 = (v487 >> 12) & 0xF;
            v1337 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71F8[0])(0LL, 0LL, 1027LL);
            v1399 = 0xFFFFFF;
            if ( !v1337 )
            {
              v605 = GetLastError();
              v146 = v605;
              if ( v605 > 0 )
                v146 = (unsigned __int16)v605 | 0x80070000;
              if ( v146 >= 0 )
                v146 = -2147467259;
LABEL_944:
              v719 = 1;
              while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
                ;
              v720 = dword_1805C1C38;
              if ( dword_1805C1C38 > 0 )
              {
                --dword_1805C1C38;
                if ( v720 == 1 )
                {
                  v721 = 4LL;
                  v722 = (HMODULE *)&unk_1805C2570;
                  do
                  {
                    if ( *v722 )
                      FreeLibrary(*v722);
                    v722 += 3;
                    --v721;
                  }
                  while ( v721 );
                  memset_0(&unk_1805C2570, 0, 0x60uLL);
                  memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
                  v719 = 1;
                }
              }
              _InterlockedExchange(&dword_1805C2560, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1581);
              if ( v146 < 0 )
              {
LABEL_1241:
                if ( v1692 )
                {
                  v909 = -1LL;
                  do
                    ++v909;
                  while ( *((_WORD *)v1692 + v909) );
                  memset(v1692, 0, 2 * v909 + 2);
                  MemoryFree(v1692);
                  v1692 = 0LL;
                }
                if ( v1693 )
                {
                  v910 = -1LL;
                  do
                    ++v910;
                  while ( *((_WORD *)v1693 + v910) );
                  memset(v1693, 0, 2 * v910 + 2);
                  MemoryFree(v1693);
                  v1693 = 0LL;
                }
                if ( v1694 )
                {
                  v911 = -1LL;
                  do
                    ++v911;
                  while ( *((_WORD *)v1694 + v911) );
                  memset(v1694, 0, 2 * v911 + 2);
                  MemoryFree(v1694);
                  v1694 = 0LL;
                }
                if ( v1695 )
                {
                  off_1805B7138();
                  v1695 = 0LL;
                }
                if ( v1696 )
                {
                  off_1805B7138();
                  v1696 = 0LL;
                }
                if ( v1697 )
                {
                  off_1805B7138();
                  v1697 = 0LL;
                }
                while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
                  ;
                v912 = dword_1805C1C38;
                if ( dword_1805C1C38 > 0 )
                {
                  --dword_1805C1C38;
                  if ( v912 == 1 )
                  {
                    v913 = (HMODULE *)&unk_1805C2570;
                    v914 = 4LL;
                    do
                    {
                      if ( *v913 )
                        FreeLibrary(*v913);
                      v913 += 3;
                      --v914;
                    }
                    while ( v914 );
                    memset_0(&unk_1805C2570, 0, 0x60uLL);
                    memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&dword_1805C2560, 0);
                v1384 = dword_1805C16A0;
                v915 = off_1805B7198[0]();
                v1790 = 0;
                v1432 = (void *)(unsigned int)(v915 - qword_1805C1698);
                memset_0(v1791, 0, sizeof(v1791));
                while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
                  ;
                v916 = dword_1805C1C38;
                if ( !dword_1805C1C38 )
                {
                  v1333 = 0;
                  LODWORD(v1400) = 0;
                  v1518 = 0LL;
                  v1615 = 0LL;
                  v917 = (char *)MemoryAlloc(0x338uLL);
                  v1433 = v917;
                  if ( !v917 )
                    goto LABEL_1304;
                  v918 = v917 + 7;
                  v1417 = 0;
                  v919 = 103LL;
                  v1418 = 0;
                  v920 = 0;
                  v921 = (unsigned __int8 *)&unk_1804A9632;
                  v922 = -1;
                  v923 = 0;
                  v924 = 0;
                  do
                  {
                    v925 = *(v921 - 1) | (*(v921 - 2) << 8);
                    v926 = v921[2] << 8;
                    v927 = *v921;
                    v921 += 8;
                    v928 = *(v921 - 7) | ((v927 | (v925 << 8)) << 8);
                    v929 = v928 ^ v924;
                    v930 = *(v921 - 3) | ((*(v921 - 4) | ((*(v921 - 5) | v926) << 8)) << 8);
                    v931 = v929 ^ v930 ^ v923 ^ 0xAC987321;
                    v932 = (__ROL4__(v931, 10) + 4991 * __ROL4__(v931 + 1419157410, 5)) ^ v929;
                    v933 = (43881 * __ROR4__(v932 + 133239679, 9) - __ROL4__(v932, 2)) ^ v931;
                    v934 = (24670 * v933 - (v933 >> 13) - 123127970) ^ v932;
                    v935 = (2033 * __ROL4__(v934 ^ 0xAB69, 6) - __ROL4__(v934, 2)) ^ v933;
                    v936 = (133239679 - (v935 ^ 0xAB69605E)) ^ v934;
                    v937 = (43881 * (v936 ^ 0x137F)) ^ __ROR4__(v936, 6) ^ v935;
                    v938 = (__ROL4__(v937, 2) + 24670 * __ROR4__(v937 + 133239679, 15)) ^ v936;
                    v939 = (2033 * __ROR4__(v938 + 1419157410, 14) - __ROL4__(v938, 8)) ^ v937;
                    v940 = __ROR4__(v939, 10) ^ (4991 * __ROR4__(v939 ^ 0xAB69605E, 12)) ^ v938;
                    v941 = (v940 >> 10) ^ (43881 * (v940 ^ 0x7F1)) ^ v939;
                    v942 = (2033 * (__ROR4__(~v941, 5) + 24670)) ^ v940;
                    v943 = v941 ^ (v942 - 2033) ^ 0xAB69605E;
                    v944 = ((v943 >> 2) + 4991 * __ROL4__(v941 ^ (v942 - 2033) ^ 0xAB6967AF, 2)) ^ v942;
                    v945 = (__ROL4__(v944, 7) + 43881 * __ROR4__(v944 - 133239679, 6)) ^ v943;
                    v946 = (24670 * (v945 ^ 0x137F) + __ROR4__(v945, 9)) ^ v944;
                    v947 = (__ROL4__(v946, 7) + 2033 * __ROL4__(v946 ^ 0xAB69, 5)) ^ v945;
                    v948 = v946 ^ v947 ^ 0xAC987321;
                    v949 = (4991 * __ROR4__(v948, 3) - 219010071) ^ v947;
                    v950 = (24670 * __ROR4__(v949 - 133239679, 1) - __ROR4__(v949, 6)) ^ v948;
                    v951 = (__ROL4__(v950, 14) + 2033 * __ROL4__(v950 - 1419157410, 3)) ^ v949;
                    v952 = (4991 * __ROL4__(v951 - 1419157410, 15) - __ROR4__(v951, 14)) ^ v950;
                    v953 = (v952 >> 3) ^ (43881 * (v952 ^ 0x605E)) ^ v951;
                    v1417 = v922 ^ v953;
                    v922 = v930;
                    v954 = v920 ^ __ROL4__(v953, 2) ^ (24670 * __ROL4__(v953 ^ 0x7F1137F, 4));
                    v920 = v928;
                    v1418 = v954 ^ v952;
                    *(v918 - 4) = v954 ^ v952;
                    v1418 = __ROR4__(v1418, 8);
                    *v918 = v1417;
                    v918 += 8;
                    v1417 = __ROR4__(v1417, 8);
                    *(v918 - 13) = v1418;
                    v1418 = __ROR4__(v1418, 8);
                    *(v918 - 9) = v1417;
                    v1417 = __ROR4__(v1417, 8);
                    *(v918 - 14) = v1418;
                    v1418 = __ROR4__(v1418, 8);
                    *(v918 - 10) = v1417;
                    v1417 = __ROR4__(v1417, 8);
                    *(v918 - 15) = v1418;
                    *(v918 - 11) = v1417;
                    v924 = __ROR4__(v1418, 8);
                    v923 = __ROR4__(v1417, 8);
                    v1418 = v924;
                    v1417 = v923;
                    --v919;
                  }
                  while ( v919 );
                  v87 = v1322;
                  v955 = 0;
                  v956 = 0LL;
                  v957 = v1433;
                  v958 = 0;
                  do
                    v958 ^= *((_BYTE *)v1433 + v956++);
                  while ( v956 < 0x338 );
                  if ( v958 == 64LL )
                  {
                    v1518 = (LPCWSTR)v1433;
                    v957 = 0LL;
                    v1615 = 824LL;
                    v959 = 0;
                  }
                  else
                  {
                    v959 = -1073425151;
                  }
                  if ( v957 )
                    MemoryFree(v957);
                  v960 = 0;
                  if ( v959 >= 0 )
                  {
                    v961 = v1518;
                    HIBYTE(v1518[v1615 / 2 - 1]) = 0;
                    memset_0(&unk_1805C2570, 0, 0x60uLL);
                    while ( *(_BYTE *)v961 )
                    {
                      v962 = v961;
                      v963 = -1LL;
                      do
                        ++v963;
                      while ( v961[v963] );
                      v964 = &v961[v963];
                      v965 = (char *)&unk_1805C2570 + 24 * (unsigned int)v1400;
                      if ( !GetModuleHandleExW(0, v962, (HMODULE *)v965) )
                        goto LABEL_1304;
                      v955 = 0;
                      if ( **(_WORD **)v965 == 23117
                        && (v966 = *(int *)(*(_QWORD *)v965 + 60LL), (unsigned int)v966 < 0x10000000)
                        && (v967 = *(_QWORD *)v965 + v966, v967 >= *(_QWORD *)v965)
                        && *(_DWORD *)v967 == 17744 )
                      {
                        if ( ((*(_WORD *)(v967 + 24) - 267) & 0xFEFF) != 0 )
                        {
                          v955 = -1073741811;
                        }
                        else
                        {
                          *(_QWORD *)(v965 + 12) = *(_QWORD *)(v967 + 136);
                          *((_DWORD *)v965 + 2) = *(_DWORD *)(v967 + 80);
                        }
                      }
                      else
                      {
                        v955 = -1073741701;
                      }
                      v968 = *(_DWORD *)(v964 + 1);
                      v961 = v964 + 3;
                      v1339 = v968;
                      if ( v968 )
                      {
                        do
                        {
                          v969 = (const CHAR *)v961;
                          v970 = -1LL;
                          do
                            ++v970;
                          while ( *((_BYTE *)v961 + v970) );
                          v961 = (LPCWSTR)((char *)v961 + v970 + 1);
                          if ( v955 >= 0 )
                          {
                            v971 = GetProcAddress(*(HMODULE *)v965, v969);
                            if ( !v971 )
                              goto LABEL_1305;
                            off_1805B7100[v1333] = v971;
                          }
                          ++v1333;
                          ++v960;
                        }
                        while ( v960 < v1339 );
                      }
                      LODWORD(v1400) = (_DWORD)v1400 + 1;
                      v960 = 0;
                    }
                  }
                  else
                  {
LABEL_1304:
                    v955 = -1073741702;
                  }
LABEL_1305:
                  if ( v1518 )
                  {
                    v972 = GetProcessHeap();
                    HeapFree(v972, 0, (LPVOID)v1518);
                  }
                  if ( v955 < 0 )
                  {
                    v973 = (HMODULE *)&unk_1805C2570;
                    v974 = 4LL;
                    do
                    {
                      if ( *v973 )
                        FreeLibrary(*v973);
                      v973 += 3;
                      --v974;
                    }
                    while ( v974 );
                    v975 = (HMODULE *)&unk_1805C2570;
                    memset_0(&unk_1805C2570, 0, 0x60uLL);
                    memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
                    goto LABEL_1315;
                  }
                  v916 = dword_1805C1C38;
                }
                v975 = (HMODULE *)&unk_1805C2570;
                dword_1805C1C38 = v916 + 1;
LABEL_1315:
                v976 = 4LL;
                _InterlockedExchange(&dword_1805C2560, 0);
                v1791[12] = v1384;
                v1791[0] = (_DWORD)v1432;
                v1790 = 1;
                v1791[4] = -1721306479;
                v1791[2] = 1;
                v1791[8] = 1;
                v1791[6] = 1;
                v1791[10] = 1;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1805B71D0)(0LL, 8225LL, 4LL, &v1790);
                while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
                  ;
                v977 = dword_1805C1C38;
                if ( dword_1805C1C38 > 0 )
                {
                  --dword_1805C1C38;
                  if ( v977 == 1 )
                  {
                    do
                    {
                      if ( *v975 )
                        FreeLibrary(*v975);
                      v975 += 3;
                      --v976;
                    }
                    while ( v976 );
                    memset_0(&unk_1805C2570, 0, 0x60uLL);
                    memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&dword_1805C2560, 0);
                ((void (__fastcall *)(_QWORD, LPVOID))off_1805B7260[0])(0LL, v1437);
                v1409 = v1456;
                goto LABEL_1324;
              }
              v723 = v1459;
              v1609 = v1459;
              memset_0(v1705, 0, 0x68uLL);
              v724 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1805B7150[0])(v1437, 7LL);
              v725 = 0;
              if ( !v724
                || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805B7168[0])(v724, 104LL, v1705)
                || v1708 != 32
                || !v1709
                || v1706 <= 0
                || v1707 <= 0 )
              {
                v719 = 0;
              }
              v1497 = v719;
              if ( v719 || v604 == 1 )
              {
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1805B7250)(&v1699, v723, HIDWORD(v1609));
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1805B7250)(&v1700, v723, HIDWORD(v1609));
                if ( v604 == 1 )
                  v1457 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1805B7128[0])(v1691 == 0 ? 0xB26720 : 0);
              }
              v761 = v1437;
              v1338 = off_1805B7180((CToastCenterExperienceManager *)v1437, (struct CSingleViewShellExperience *)1);
              v762 = 2064;
              if ( v1690 )
                v762 = 133138;
              LODWORD(v1409) = v762;
              if ( v1497 )
              {
                v763 = v1692;
                v1378 = v1691;
                v1396 = (SIZE_T)v1695;
                v1426 = v1692;
                memset_0(v1722, 0, 0x68uLL);
                memset_0(v1732, 0, 0x68uLL);
                v1427 = 0LL;
                LODWORD(v1400) = 0;
                v1327 = 0;
                memset_0(v1749, 0, 0x2CuLL);
                v1744 = 0LL;
                v1745 = 0LL;
                if ( !v763 )
                  goto LABEL_1239;
                v764 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1805B7150[0])(v761, 7LL);
                if ( v764 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805B7168[0])(v764, 104LL, v1722) )
                  {
                    v725 = v1723;
                    v1427 = v1725;
                    v1327 = v1724;
                    LODWORD(v1400) = v1723;
                  }
                  v765 = ((__int64 (__fastcall *)(LPVOID))off_1805B7110[0])(v761);
                  v766 = (CToastCenterExperienceManager *)v765;
                  if ( !v765 )
                    goto LABEL_1064;
                  v1749[1] = DWORD2(v1699) - v1699;
                  v767 = 0;
                  v1749[2] = DWORD1(v1699) - HIDWORD(v1699);
                  v1643 = 0LL;
                  v1750 = 0LL;
                  v1751 = 0LL;
                  v1752 = 0;
                  v1749[0] = 40;
                  v1749[3] = 2097153;
                  v1449 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805B7118[0])(
                            v765,
                            v1749,
                            0LL,
                            &v1643,
                            0LL,
                            0);
                  v768 = v1449;
                  if ( v1449 )
                  {
                    v710 = ((unsigned int (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1805B7168[0])(
                             v1449,
                             104LL,
                             v1732) == 0;
                    v771 = 0LL;
                    if ( !v710 )
                      v771 = v1733;
                    LODWORD(v1745) = DWORD2(v1699) - v1699;
                    HIDWORD(v1745) = HIDWORD(v1699) - DWORD1(v1699);
                    v1440 = v771;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1805B7178)(v766, v768);
                    off_1805B7180(v766, (struct CSingleViewShellExperience *)1);
                    v772 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1805B7178)(v766, v1396);
                    v773 = off_1805B71E8[0];
                    v1367 = (LPVOID)v772;
                    v774 = ((__int64 (__fastcall *)(_QWORD))off_1805B7170[0])(0LL);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, __int64 *, __int64))v773)(v766, &v1744, v774);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, void *, __int64, __int64 *, _DWORD, _QWORD))off_1805B71D8)(
                      v766,
                      v1426,
                      0xFFFFFFFFLL,
                      &v1744,
                      (_DWORD)v1409,
                      0LL);
                    v775 = 0LL;
                    if ( v1351 == 1 )
                    {
                      if ( v1378 )
                      {
                        v1360 = ((__int64 (__fastcall *)(__int64))off_1805B7218[0])(8LL);
                        v775 = 0LL;
                      }
                      else
                      {
                        v1360 = 0xFFFFFF;
                      }
                    }
                    else
                    {
                      v1360 = -5723992;
                    }
                    v776 = 0;
                    v777 = (unsigned int)-(int)v1699;
                    v778 = 0LL;
                    if ( (int)v1699 >= 0 )
                    {
                      v776 = v1699;
                      v777 = 0LL;
                    }
                    v779 = -DWORD1(v1699);
                    if ( (SDWORD1(v1699) & 0x80000000) == 0 )
                    {
                      v778 = DWORD1(v1699);
                      v779 = 0;
                    }
                    v780 = v1745 - v777;
                    if ( (int)v1745 - (int)v777 >= v725 - v776 )
                      v780 = v725 - v776;
                    v781 = HIDWORD(v1745) - v779;
                    if ( HIDWORD(v1745) - v779 >= v1327 - (int)v778 )
                      v781 = v1327 - v778;
                    if ( v780 > 0 && v781 > 0 )
                    {
                      v777 = (unsigned __int64)&v1440[4 * (int)v777 + 4 * (__int64)(v779 * (int)v1745)];
                      v782 = v778 * (_DWORD)v1400;
                      v778 = 0LL;
                      v1410 = (unsigned __int16 *)v777;
                      v1396 = 4LL * (int)v1745;
                      v783 = v1396;
                      v784 = &v1427[2 * v776 + 2 * (__int64)v782];
                      v1427 = (unsigned __int16 *)(4LL * (int)v1400);
                      v1355 = v784;
                      LODWORD(v1400) = 0;
                      do
                      {
                        v1328 = 0;
                        v785 = 0;
                        v775 = (unsigned __int8 *)(v777 + 2);
                        v786 = (signed __int64)v784 - v777;
                        do
                        {
                          if ( (unsigned __int8)((*v775 + *(v775 - 2) + 2 * (unsigned int)*(v775 - 1)) >> 2) != 0xFF )
                          {
                            v787 = (unsigned __int8)~((*v775 + *(v775 - 2) + 2 * (unsigned int)*(v775 - 1)) >> 2);
                            v775[v786] -= ~((*v775 + *(v775 - 2) + 2 * (unsigned int)*(v775 - 1)) >> 2)
                                        * (v1360 - v775[v786]);
                            v788 = v775[v786 - 1];
                            v789 = (unsigned __int64)(2155905153LL * v787 * (BYTE1(v1360) - v788)) >> 32;
                            v775[v786 - 1] = v788 + (v789 >> 7 < 0) + (v789 >> 7);
                            v790 = v775[v786 - 2];
                            v791 = (unsigned __int64)(2155905153LL * v787 * (BYTE2(v1360) - v790)) >> 32;
                            v775[v786 - 2] = v790 + (v791 >> 7 < 0) + (v791 >> 7);
                            v785 = v1328;
                            v775[v786 + 1] += v787 * (255 - v775[v786 + 1]) / 255;
                            v778 = 0LL;
                          }
                          ++v785;
                          v775 += 4;
                          v1328 = v785;
                        }
                        while ( v785 < v780 );
                        v792 = (int)v1400;
                        v777 = (unsigned __int64)v1410 + v783;
                        v784 = (unsigned __int16 *)((char *)v1355 + (_QWORD)v1427);
                        v1410 = (unsigned __int16 *)((char *)v1410 + v783);
                        v1355 = (unsigned __int16 *)((char *)v1355 + (_QWORD)v1427);
                        LODWORD(v1400) = (_DWORD)v1400 + 1;
                      }
                      while ( v792 + 1 < v781 );
                      v87 = v1322;
                      v767 = 0;
                    }
                    ((void (__fastcall *)(SIZE_T, unsigned __int64, __int64, unsigned __int8 *))off_1805B7138)(
                      v1449,
                      v777,
                      v778,
                      v775);
                    v770 = 0;
                    if ( v1367 )
                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1805B7178)(v766, v1367);
                  }
                  else
                  {
                    v769 = GetLastError();
                    v770 = 0;
                    v767 = v769;
                    if ( v769 > 0 )
                      v767 = (unsigned __int16)v769 | 0x80070000;
                    if ( v767 >= 0 )
                      v767 = -2147467259;
                  }
                  ((void (__fastcall *)(CToastCenterExperienceManager *))off_1805B7130[0])(v766);
                  if ( v767 < 0 )
                    goto LABEL_1239;
                  v793 = v1693;
                  v1379 = v1691;
                  v1396 = (SIZE_T)v1696;
                  v1426 = v1693;
                  memset_0(v1718, 0, 0x68uLL);
                  memset_0(v1728, 0, 0x68uLL);
                  v1427 = 0LL;
                  v1329 = 0;
                  LODWORD(v1400) = 0;
                  memset_0(v1753, 0, 0x2CuLL);
                  v1742 = 0LL;
                  v1743 = 0LL;
                  if ( !v793 )
                    goto LABEL_1239;
                  v794 = v1437;
                  v795 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1805B7150[0])(v1437, 7LL);
                  if ( !v795 )
                    goto LABEL_1064;
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805B7168[0])(v795, 104LL, v1718) )
                  {
                    v770 = v1719;
                    v1427 = v1721;
                    v1329 = v1720;
                    LODWORD(v1400) = v1719;
                  }
                  v796 = ((__int64 (__fastcall *)(LPVOID))off_1805B7110[0])(v794);
                  v797 = (CToastCenterExperienceManager *)v796;
                  if ( !v796 )
                  {
LABEL_1064:
                    GetLastError();
                    goto LABEL_1239;
                  }
                  v1753[1] = DWORD2(v1700) - v1700;
                  v798 = 0;
                  v1753[2] = DWORD1(v1700) - HIDWORD(v1700);
                  v1644 = 0LL;
                  v1754 = 0LL;
                  v1755 = 0LL;
                  v1756 = 0;
                  v1753[0] = 40;
                  v1753[3] = 2097153;
                  v1449 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805B7118[0])(
                            v796,
                            v1753,
                            0LL,
                            &v1644,
                            0LL,
                            0);
                  v799 = v1449;
                  if ( !v1449 )
                  {
                    v800 = GetLastError();
                    v798 = v800;
                    if ( v800 > 0 )
                      v798 = (unsigned __int16)v800 | 0x80070000;
                    if ( v798 >= 0 )
                      v798 = -2147467259;
                    goto LABEL_1135;
                  }
                  v710 = ((unsigned int (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1805B7168[0])(v1449, 104LL, v1728) == 0;
                  v801 = 0LL;
                  if ( !v710 )
                    v801 = v1729;
                  LODWORD(v1743) = DWORD2(v1700) - v1700;
                  HIDWORD(v1743) = HIDWORD(v1700) - DWORD1(v1700);
                  v1440 = v801;
                  ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1805B7178)(v797, v799);
                  off_1805B7180(v797, (struct CSingleViewShellExperience *)1);
                  v802 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1805B7178)(v797, v1396);
                  v803 = off_1805B71E8[0];
                  v1368 = (LPVOID)v802;
                  v804 = ((__int64 (__fastcall *)(_QWORD))off_1805B7170[0])(0LL);
                  ((void (__fastcall *)(CToastCenterExperienceManager *, __int64 *, __int64))v803)(v797, &v1742, v804);
                  ((void (__fastcall *)(CToastCenterExperienceManager *, void *, __int64, __int64 *, _DWORD, _QWORD))off_1805B71D8)(
                    v797,
                    v1426,
                    0xFFFFFFFFLL,
                    &v1742,
                    (_DWORD)v1409,
                    0LL);
                  if ( v1351 == 1 )
                  {
                    if ( !v1379 )
                    {
                      LODWORD(v1409) = 0xFFFFFF;
LABEL_1116:
                      v808 = 0LL;
                      v809 = -(int)v1700;
                      v810 = 0LL;
                      if ( (int)v1700 >= 0 )
                      {
                        v808 = (unsigned int)v1700;
                        v809 = 0;
                      }
                      v811 = -DWORD1(v1700);
                      if ( (SDWORD1(v1700) & 0x80000000) == 0 )
                      {
                        v810 = DWORD1(v1700);
                        v811 = 0;
                      }
                      v812 = v1743 - v809;
                      if ( (int)v1743 - v809 >= v770 - (int)v808 )
                        v812 = v770 - v808;
                      v813 = HIDWORD(v1743) - v811;
                      if ( HIDWORD(v1743) - v811 >= v1329 - (int)v810 )
                        v813 = v1329 - v810;
                      if ( v812 > 0 && v813 > 0 )
                      {
                        v814 = v1399;
                        v815 = (unsigned __int16 *)&v1440[4 * v809 + 4 * (__int64)((int)v1743 * v811)];
                        v1410 = v815;
                        v1396 = 4LL * (int)v1743;
                        v816 = &v1427[2 * (int)v808 + 2 * (__int64)((int)v1400 * (int)v810)];
                        v1427 = (unsigned __int16 *)(4LL * (int)v1400);
                        v1356 = v816;
                        LODWORD(v1400) = 0;
                        do
                        {
                          v1330 = 0;
                          LODWORD(v808) = 0;
                          v817 = (unsigned __int8 *)(v815 + 1);
                          v818 = (char *)v816 - (char *)v815;
                          do
                          {
                            if ( (unsigned __int8)((*v817 + *(v817 - 2) + 2 * (unsigned int)*(v817 - 1)) >> 2) != 0xFF )
                            {
                              v819 = (unsigned __int8)~((*v817 + *(v817 - 2) + 2 * (unsigned int)*(v817 - 1)) >> 2);
                              v820 = BYTE1(v1409);
                              v817[v818] -= ~((*v817 + *(v817 - 2) + 2 * (unsigned int)*(v817 - 1)) >> 2)
                                          * (v814 - v817[v818]);
                              v821 = v817[v818 - 1];
                              v822 = (unsigned __int64)(2155905153LL * v819 * (v820 - v821)) >> 32;
                              v823 = BYTE2(v1409);
                              v817[v818 - 1] = v821 + (v822 >> 7 < 0) + (v822 >> 7);
                              v824 = v817[v818 - 2];
                              v825 = (unsigned __int64)(2155905153LL * v819 * (v823 - v824)) >> 32;
                              v817[v818 - 2] = v824 + (v825 >> 7 < 0) + (v825 >> 7);
                              v826 = v817[v818 + 1];
                              v827 = v819 * (255 - v826);
                              LODWORD(v808) = v1330;
                              v817[v818 + 1] = v826 + v827 / 255;
                            }
                            v808 = (unsigned int)(v808 + 1);
                            v817 += 4;
                            v1330 = v808;
                          }
                          while ( (int)v808 < v812 );
                          v828 = (int)v1400;
                          v810 = v1396;
                          v815 = (unsigned __int16 *)((char *)v1410 + v1396);
                          v816 = (unsigned __int16 *)((char *)v1356 + (_QWORD)v1427);
                          v1410 = (unsigned __int16 *)((char *)v1410 + v1396);
                          v1356 = (unsigned __int16 *)((char *)v1356 + (_QWORD)v1427);
                          LODWORD(v1400) = (_DWORD)v1400 + 1;
                        }
                        while ( v828 + 1 < v813 );
                        v87 = v1322;
                        v798 = 0;
                      }
                      ((void (__fastcall *)(SIZE_T, SIZE_T, __int64, _QWORD))off_1805B7138)(v1449, v810, v808, 0LL);
                      if ( v1368 )
                        ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1805B7178)(v797, v1368);
LABEL_1135:
                      ((void (__fastcall *)(CToastCenterExperienceManager *))off_1805B7130[0])(v797);
                      if ( v798 >= 0 )
                      {
                        v829 = v1425;
                        v830 = (CToastCenterExperienceManager *)v1437;
LABEL_1233:
                        off_1805B7180(v830, (struct CSingleViewShellExperience *)v1338);
                        goto LABEL_1235;
                      }
LABEL_1239:
                      if ( v1457 )
                        ((void (__fastcall *)(LPVOID))off_1805B7138)(v1457);
                      goto LABEL_1241;
                    }
                    v807 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))off_1805B7218[0])(
                             8LL,
                             v805,
                             v806,
                             0LL);
                  }
                  else
                  {
                    v807 = -5723992;
                  }
                  LODWORD(v1409) = v807;
                  v1399 = v807;
                  goto LABEL_1116;
                }
LABEL_1141:
                GetLastError();
                goto LABEL_1239;
              }
              if ( v1691 || (v831 = -64, v604 == 1) )
                v831 = -1;
              BYTE2(dwBytes_4) = v831;
              LOWORD(dwBytes_4) = 0;
              v1491 = 0uLL;
              v1510 = 0uLL;
              HIBYTE(dwBytes_4) = 1;
              v1425 = (LPVOID)((__int64 (__fastcall *)(LPVOID))off_1805B7110[0])(v761);
              v829 = v1425;
              if ( !v1425 )
                goto LABEL_1141;
              if ( v604 == 1 )
              {
                v832 = 0;
                v833 = DWORD2(v1700) - v1700;
                if ( DWORD2(v1700) - (int)v1700 <= DWORD2(v1699) - (int)v1699 )
                  v833 = DWORD2(v1699) - v1699;
                v834 = HIDWORD(v1700) - DWORD1(v1699);
                v1391 = HIDWORD(v1700) - DWORD1(v1699);
                if ( v1690 )
                {
                  v832 = v833 + v1699 - DWORD2(v1699);
                  v725 = v833 + v1700 - DWORD2(v1700);
                  LODWORD(v1491) = v832;
                  LODWORD(v1510) = v725;
                }
                LODWORD(v1400) = DWORD1(v1700) - DWORD1(v1699);
                DWORD1(v1510) = DWORD1(v1700) - DWORD1(v1699);
                v835 = DWORD2(v1699) + v832 - v1699;
                v836 = DWORD2(v1700) + v725 - v1700;
                DWORD2(v1491) = v835;
                v1331 = HIDWORD(v1700) - DWORD1(v1699);
                HIDWORD(v1510) = HIDWORD(v1700) - DWORD1(v1699);
                v829 = v1425;
                v1369 = HIDWORD(v1699) - DWORD1(v1699);
                HIDWORD(v1491) = HIDWORD(v1699) - DWORD1(v1699);
                DWORD2(v1510) = v836;
              }
              else
              {
                v834 = HIDWORD(v1460);
                v833 = v1460;
                v1491 = v1699;
                v835 = DWORD2(v1699);
                v1510 = v1700;
                v836 = DWORD2(v1700);
                v1369 = HIDWORD(v1699);
                v1331 = HIDWORD(v1700);
                LODWORD(v1400) = DWORD1(v1700);
                v1391 = HIDWORD(v1460);
              }
              v1757[0] = 40;
              v1645 = 0LL;
              v1757[2] = -v834;
              v1759 = 0LL;
              v1760 = 0;
              v1758 = 0LL;
              v1757[1] = v833;
              v1757[3] = 2097153;
              v837 = (void *)((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805B7118[0])(
                               v829,
                               v1757,
                               0LL,
                               &v1645,
                               0LL,
                               0);
              v1432 = v837;
              if ( !v837 )
              {
                GetLastError();
LABEL_1237:
                if ( v829 )
                  ((void (__fastcall *)(LPVOID))off_1805B7130[0])(v829);
                goto LABEL_1239;
              }
              ((void (__fastcall *)(LPVOID, void *))off_1805B7178)(v829, v837);
              if ( v1351 == 1 && v1457 )
              {
                v1746 = 0LL;
                v1748 = v1391;
                v1747 = v833;
                ((void (__fastcall *)(LPVOID, __int64 *))off_1805B71E8[0])(v829, &v1746);
              }
              v838 = v1692;
              v1361 = v1691;
              v1426 = v1695;
              v1440 = (char *)v1692;
              memset_0(v1714, 0, 0x68uLL);
              memset_0(v1730, 0, 0x68uLL);
              v1427 = 0LL;
              v1346 = 0;
              v1380 = 0;
              memset_0(v1765, 0, 0x2CuLL);
              v710 = v838 == 0LL;
              v1740 = 0LL;
              v829 = v1425;
              v1741 = 0LL;
              if ( !v710 )
              {
                v839 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1805B7150[0])(v1425, 7LL);
                if ( !v839 )
                  goto LABEL_1156;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805B7168[0])(v839, 104LL, v1714) )
                {
                  v1427 = v1717;
                  v1346 = v1715;
                  v1380 = v1716;
                }
                v1410 = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID))off_1805B7110[0])(v829);
                if ( !v1410 )
                  goto LABEL_1156;
                v840 = 0;
                v841 = v835 - v1491;
                v1765[2] = DWORD1(v1491) - v1369;
                v1646 = 0LL;
                v1767 = 0LL;
                v1768 = 0;
                v1766 = 0LL;
                v1765[0] = 40;
                v1765[1] = v841;
                v1765[3] = 2097153;
                v842 = ((__int64 (__fastcall *)(unsigned __int16 *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805B7118[0])(
                         v1410,
                         v1765,
                         0LL,
                         &v1646,
                         0LL,
                         0);
                v1396 = v842;
                if ( v842 )
                {
                  v844 = ((__int64 (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1805B7168[0])(v842, 104LL, v1730);
                  LODWORD(v1741) = v841;
                  v845 = v1410;
                  v846 = 0LL;
                  if ( v844 )
                    v846 = v1731;
                  HIDWORD(v1741) = v1369 - DWORD1(v1491);
                  v1449 = v846;
                  ((void (__fastcall *)(unsigned __int16 *, SIZE_T))off_1805B7178)(v1410, v1396);
                  off_1805B7180((CToastCenterExperienceManager *)v845, (struct CSingleViewShellExperience *)1);
                  v847 = (void *)((__int64 (__fastcall *)(unsigned __int16 *, void *))off_1805B7178)(v845, v1426);
                  v848 = off_1805B71E8[0];
                  v1433 = v847;
                  v849 = ((__int64 (__fastcall *)(_QWORD))off_1805B7170[0])(0LL);
                  ((void (__fastcall *)(unsigned __int16 *, __int64 *, __int64))v848)(v1410, &v1740, v849);
                  v850 = v1410;
                  ((void (__fastcall *)(unsigned __int16 *, char *, __int64, __int64 *, _DWORD, _QWORD))off_1805B71D8)(
                    v1410,
                    v1440,
                    0xFFFFFFFFLL,
                    &v1740,
                    (_DWORD)v1409,
                    0LL);
                  if ( v1351 == 1 )
                  {
                    if ( v1361 )
                      v1362 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))off_1805B7218[0])(
                                8LL,
                                v851,
                                v852,
                                0LL);
                    else
                      v1362 = 0xFFFFFF;
                  }
                  else
                  {
                    v1362 = -5723992;
                  }
                  v853 = 0;
                  v854 = (unsigned int)-(int)v1491;
                  v855 = 0LL;
                  if ( (int)v1491 >= 0 )
                  {
                    v853 = v1491;
                    v854 = 0LL;
                  }
                  v856 = -DWORD1(v1491);
                  if ( (SDWORD1(v1491) & 0x80000000) == 0 )
                  {
                    v855 = DWORD1(v1491);
                    v856 = 0;
                  }
                  v857 = v1741 - v854;
                  if ( (int)v1741 - (int)v854 >= v1346 - v853 )
                    v857 = v1346 - v853;
                  v858 = HIDWORD(v1741) - v856;
                  if ( HIDWORD(v1741) - v856 >= v1380 - (int)v855 )
                    v858 = v1380 - v855;
                  v1370 = v858;
                  if ( v857 > 0 && v858 > 0 )
                  {
                    v859 = (int)v854;
                    v860 = v1346;
                    v861 = (unsigned __int8 *)(v1449 + 4 * (v859 + (int)v1741 * v856));
                    v862 = v1346 * (int)v855;
                    v1440 = (char *)v861;
                    v1347 = 0;
                    v863 = &v1427[2 * v853 + 2 * v862];
                    v1427 = (unsigned __int16 *)(4LL * (int)v1741);
                    v1449 = 4 * v860;
                    v1426 = v863;
                    do
                    {
                      v1381 = 0;
                      LODWORD(v854) = 0;
                      v864 = v861 + 2;
                      v865 = (char *)v863 - (char *)v861;
                      do
                      {
                        if ( (unsigned __int8)((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2) != 0xFF )
                        {
                          v866 = (unsigned __int8)~((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2);
                          v864[v865] -= ~((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2)
                                      * (v1362 - v864[v865]);
                          v867 = v864[v865 - 1];
                          v868 = (unsigned __int64)(2155905153LL * v866 * (BYTE1(v1362) - v867)) >> 32;
                          v864[v865 - 1] = v867 + (v868 >> 7 < 0) + (v868 >> 7);
                          v869 = v864[v865 - 2];
                          v870 = (unsigned __int64)(2155905153LL * v866 * (BYTE2(v1362) - v869)) >> 32;
                          v864[v865 - 2] = v869 + (v870 >> 7 < 0) + (v870 >> 7);
                          v871 = v864[v865 + 1];
                          v872 = v866 * (255 - v871);
                          LODWORD(v854) = v1381;
                          v864[v865 + 1] = v871 + v872 / 255;
                        }
                        v854 = (unsigned int)(v854 + 1);
                        v864 += 4;
                        v1381 = v854;
                      }
                      while ( (int)v854 < v857 );
                      v861 = (unsigned __int8 *)&v1440[(_QWORD)v1427];
                      v863 = (unsigned __int16 *)((char *)v1426 + v1449);
                      v855 = (unsigned int)(v1347 + 1);
                      v1440 = &v1440[(_QWORD)v1427];
                      v1426 = (char *)v1426 + v1449;
                      v1347 = v855;
                    }
                    while ( (int)v855 < v1370 );
                    v87 = v1322;
                    v840 = 0;
                    v850 = v1410;
                  }
                  ((void (__fastcall *)(SIZE_T, __int64, __int64, _QWORD))off_1805B7138)(v1396, v855, v854, 0LL);
                  if ( v1433 )
                    ((void (__fastcall *)(unsigned __int16 *, void *))off_1805B7178)(v850, v1433);
                }
                else
                {
                  v840 = GetLastError();
                  v843 = v840 < 0;
                  if ( v840 > 0 )
                  {
                    v840 = (unsigned __int16)v840 | 0x80070000;
                    v843 = v840 < 0;
                  }
                  if ( !v843 )
                    v840 = -2147467259;
                }
                ((void (__fastcall *)(unsigned __int16 *))off_1805B7130[0])(v1410);
                if ( v840 >= 0 )
                {
                  v873 = v1693;
                  v1357 = v1691;
                  v1433 = v1696;
                  v1426 = v1693;
                  memset_0(v1710, 0, 0x68uLL);
                  memset_0(v1726, 0, 0x68uLL);
                  v1396 = 0LL;
                  v1382 = 0;
                  v1348 = 0;
                  memset_0(v1761, 0, 0x2CuLL);
                  v829 = v1425;
                  v1738 = 0LL;
                  v1739 = 0LL;
                  if ( !v873 )
                    goto LABEL_1235;
                  v874 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1805B7150[0])(v1425, 7LL);
                  if ( v874 )
                  {
                    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1805B7168[0])(v874, 104LL, v1710) )
                    {
                      v1396 = v1713;
                      v1382 = v1711;
                      v1348 = v1712;
                    }
                    v1410 = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID))off_1805B7110[0])(v829);
                    v875 = v1410;
                    if ( v1410 )
                    {
                      v876 = v836 - v1510;
                      v877 = 0;
                      v1761[2] = (_DWORD)v1400 - v1331;
                      v1648 = 0LL;
                      v1763 = 0LL;
                      v1764 = 0;
                      v1762 = 0LL;
                      v1761[0] = 40;
                      v1761[1] = v876;
                      v1761[3] = 2097153;
                      v878 = ((__int64 (__fastcall *)(unsigned __int16 *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1805B7118[0])(
                               v1410,
                               v1761,
                               0LL,
                               &v1648,
                               0LL,
                               0);
                      v1449 = v878;
                      if ( !v878 )
                      {
                        v879 = GetLastError();
                        v877 = v879;
                        if ( v879 > 0 )
                          v877 = (unsigned __int16)v879 | 0x80070000;
                        if ( v877 >= 0 )
                          v877 = -2147467259;
LABEL_1229:
                        ((void (__fastcall *)(unsigned __int16 *))off_1805B7130[0])(v875);
                        v66 = v877 < 0;
                        v829 = v1425;
                        if ( v66 )
                          goto LABEL_1235;
                        v830 = (CToastCenterExperienceManager *)v1437;
                        if ( v1351 == 1 )
                          ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, int, LPVOID, _DWORD, _DWORD, int))off_1805B7100[0])(
                            v1437,
                            (unsigned int)v1699,
                            DWORD1(v1699),
                            v833,
                            v1391,
                            v1425,
                            0,
                            0,
                            13369376);
                        else
                          ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, int, LPVOID, _DWORD, _DWORD, unsigned int, int, unsigned int))off_1805B7140[0])(
                            v1437,
                            (unsigned int)v1459,
                            HIDWORD(v1459),
                            v833,
                            v1391,
                            v1425,
                            0,
                            0,
                            v833,
                            v1391,
                            dwBytes_4);
                        goto LABEL_1233;
                      }
                      v880 = ((__int64 (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1805B7168[0])(v878, 104LL, v1726);
                      LODWORD(v1739) = v876;
                      v881 = (int)v1400;
                      v882 = 0LL;
                      if ( v880 )
                        v882 = v1727;
                      HIDWORD(v1739) = v1331 - (_DWORD)v1400;
                      v1440 = v882;
                      ((void (__fastcall *)(unsigned __int16 *, SIZE_T))off_1805B7178)(v875, v1449);
                      off_1805B7180((CToastCenterExperienceManager *)v875, (struct CSingleViewShellExperience *)1);
                      v883 = (unsigned __int16 *)((__int64 (__fastcall *)(unsigned __int16 *, void *))off_1805B7178)(
                                                   v875,
                                                   v1433);
                      v884 = off_1805B71E8[0];
                      v1427 = v883;
                      v885 = ((__int64 (__fastcall *)(_QWORD))off_1805B7170[0])(0LL);
                      ((void (__fastcall *)(unsigned __int16 *, __int64 *, __int64))v884)(v1410, &v1738, v885);
                      v875 = v1410;
                      ((void (__fastcall *)(unsigned __int16 *, void *, __int64, __int64 *, _DWORD, _QWORD))off_1805B71D8)(
                        v1410,
                        v1426,
                        0xFFFFFFFFLL,
                        &v1738,
                        (_DWORD)v1409,
                        0LL);
                      if ( v1351 == 1 )
                      {
                        if ( !v1357 )
                        {
                          LODWORD(v1409) = 0xFFFFFF;
LABEL_1210:
                          v887 = -(int)v1510;
                          v888 = 0;
                          v889 = 0;
                          if ( (int)v1510 >= 0 )
                          {
                            v888 = v1510;
                            v887 = 0;
                          }
                          v890 = -v881;
                          if ( v881 >= 0 )
                          {
                            v889 = v881;
                            v890 = 0;
                          }
                          v891 = v1739 - v887;
                          if ( (int)v1739 - v887 >= v1382 - v888 )
                            v891 = v1382 - v888;
                          v892 = HIDWORD(v1739) - v890;
                          if ( HIDWORD(v1739) - v890 >= v1348 - v889 )
                            v892 = v1348 - v889;
                          if ( v891 > 0 && v892 > 0 )
                          {
                            v893 = v1399;
                            v1433 = (void *)(4LL * (int)v1739);
                            v894 = v1433;
                            v895 = (unsigned __int8 *)&v1440[4 * v887 + 4 * (__int64)(v890 * (int)v1739)];
                            v1426 = v895;
                            v896 = v1396;
                            v1396 = 4LL * v1382;
                            v897 = (char *)(v896 + 4 * (v888 + (__int64)(v889 * v1382)));
                            v1332 = 0;
                            v1440 = v897;
                            do
                            {
                              v1383 = 0;
                              v898 = 0;
                              v899 = v895 + 2;
                              v900 = v897 - (char *)v895;
                              do
                              {
                                if ( (unsigned __int8)((*v899 + *(v899 - 2) + 2 * (unsigned int)*(v899 - 1)) >> 2) != 0xFF )
                                {
                                  v901 = (unsigned __int8)~((*v899 + *(v899 - 2) + 2 * (unsigned int)*(v899 - 1)) >> 2);
                                  v902 = BYTE1(v1409);
                                  v899[v900] -= ~((*v899 + *(v899 - 2) + 2 * (unsigned int)*(v899 - 1)) >> 2)
                                              * (v893 - v899[v900]);
                                  v903 = v899[v900 - 1];
                                  v904 = (unsigned __int64)(2155905153LL * v901 * (v902 - v903)) >> 32;
                                  v905 = BYTE2(v1409);
                                  v899[v900 - 1] = v903 + (v904 >> 7 < 0) + (v904 >> 7);
                                  v906 = v899[v900 - 2];
                                  v907 = (unsigned __int64)(2155905153LL * v901 * (v905 - v906)) >> 32;
                                  v899[v900 - 2] = v906 + (v907 >> 7 < 0) + (v907 >> 7);
                                  v898 = v1383;
                                  v899[v900 + 1] += v901 * (255 - v899[v900 + 1]) / 255;
                                }
                                ++v898;
                                v899 += 4;
                                v1383 = v898;
                              }
                              while ( v898 < v891 );
                              v908 = v1332;
                              v895 = (unsigned __int8 *)v1426 + (_QWORD)v894;
                              v897 = &v1440[v1396];
                              v1426 = (char *)v1426 + (_QWORD)v894;
                              v1440 += v1396;
                              ++v1332;
                            }
                            while ( v908 + 1 < v892 );
                            v87 = v1322;
                            v877 = 0;
                            v875 = v1410;
                          }
                          ((void (__fastcall *)(SIZE_T))off_1805B7138)(v1449);
                          if ( v1427 )
                            ((void (__fastcall *)(unsigned __int16 *, unsigned __int16 *))off_1805B7178)(v875, v1427);
                          goto LABEL_1229;
                        }
                        v886 = ((__int64 (__fastcall *)(__int64))off_1805B7218[0])(8LL);
                      }
                      else
                      {
                        v886 = -5723992;
                      }
                      LODWORD(v1409) = v886;
                      v1399 = v886;
                      goto LABEL_1210;
                    }
                  }
LABEL_1156:
                  GetLastError();
                  goto LABEL_1235;
                }
                v829 = v1425;
              }
LABEL_1235:
              if ( v1432 )
                ((void (__fastcall *)(void *))off_1805B7138)(v1432);
              goto LABEL_1237;
            }
            v606 = 0;
            v1607 = 0LL;
            v607 = 0LL;
            v1517 = 0LL;
            v1606 = 0LL;
            v1503 = 0LL;
            v1506 = 0LL;
            v608 = 0LL;
            v1516 = 0LL;
            v1484 = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1805B71A0[0])(
                    8LL,
                    &v1452,
                    0LL,
                    &v1484) )
            {
              v609 = GetLastError();
              v146 = v609;
              if ( v609 > 0 )
                v146 = (unsigned __int16)v609 | 0x80070000;
              if ( v146 >= 0 )
                goto LABEL_815;
LABEL_825:
              v606 = 0;
              goto LABEL_835;
            }
            v610 = MemoryAlloc(2LL * v1484);
            SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1506, v610);
            if ( !(unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1506) && v611 )
            {
              v612 = MemoryAlloc(4LL * (v1452 + 1));
              SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1516, v612);
              v613 = v1516;
              if ( !(unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1516) && v613 )
              {
                if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1805B71A0[0])(
                        8LL,
                        &v1452,
                        v1506,
                        &v1484) )
                {
                  v146 = GetLastError();
                  v614 = v146 < 0;
                  if ( v146 > 0 )
                  {
                    v146 = (unsigned __int16)v146 | 0x80070000;
                    v614 = v146 < 0;
                  }
                  if ( !v614 )
                  {
                    v606 = 0;
LABEL_815:
                    v146 = -2147467259;
                    goto LABEL_835;
                  }
                  goto LABEL_825;
                }
                v615 = v613;
                if ( v1452 )
                {
                  v616 = v1506;
                  v617 = v613;
                  for ( kk = 0; kk < v1452; ++kk )
                  {
                    *v617 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1805B71B0)(v616, 0LL);
                    v619 = -1LL;
                    do
                      ++v619;
                    while ( *(_WORD *)(v616 + 2 * v619) );
                    ++v617;
                    v616 += 2 * v619 + 2;
                  }
                  v87 = v1322;
                  v1396 = (SIZE_T)v617;
                  v615 = v617;
                }
                *v615 = 1033;
                v608 = v613;
                v606 = 0;
                v1516 = 0LL;
                jj = v1452 + 1;
                v1607 = v608;
LABEL_835:
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1516);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1506);
                if ( v146 < 0 )
                {
                  v1353 = v1623;
                  v1427 = v1622;
                  v1410 = v1621;
                  goto LABEL_900;
                }
                v620 = 0;
                LODWORD(v1400) = 0;
                if ( jj )
                {
                  IsNull = SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v608);
                  v623 = 0LL;
LABEL_838:
                  v624 = 0;
                  v625 = dword_1804DAFC0;
                  while ( 1 )
                  {
                    v626 = v608;
                    if ( IsNull )
                      v626 = 0LL;
                    if ( v626[v623] == *v625 )
                      break;
                    ++v625;
                    if ( ++v624 >= 0x26 )
                    {
                      ++v621;
                      ++v623;
                      if ( v621 >= jj )
                        goto LABEL_846;
                      goto LABEL_838;
                    }
                  }
                  v620 = v624;
                  LODWORD(v1400) = v624;
                }
LABEL_846:
                v627 = v620;
                v1345 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1805B71A8[0])(
                       dword_1804DAFC0[v620],
                       v1796,
                       85LL)
                  && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1805B7190[0])(v1796, 88LL, v1784) > 0 )
                {
                  v1345 = (v1785 >> 27) & 1;
                }
                v628 = L"Segoe UI Light";
                v629 = 19LL;
                v630 = (const wchar_t **)v1793;
                do
                {
                  *v630 = v628;
                  v631 = -1LL;
                  do
                    ++v631;
                  while ( v628[v631] );
                  ++v630;
                  v628 += v631 + 1;
                  --v629;
                }
                while ( v629 );
                v632 = byte_1804DB070[3 * v627 + 1];
                v1410 = (unsigned __int16 *)v1793[byte_1804DB070[3 * v627]];
                v1621 = v1410;
                v633 = (unsigned __int16 *)v1793[v632];
                v634 = byte_1804DB070[3 * v627 + 2];
                v1427 = v633;
                v1622 = v633;
                v1353 = (unsigned __int16 *)v1793[v634];
                v1623 = v1353;
                v606 = 0;
                v146 = 0;
                v635 = (char *)MemoryAlloc(0x1C90uLL);
                v1396 = (SIZE_T)v635;
                if ( !v635 )
                  goto LABEL_854;
                v636 = 0;
                v1422 = 0;
                v1416 = 0;
                v637 = v635 + 7;
                v638 = 0;
                v639 = (unsigned __int8 *)&unk_1804A7992;
                v640 = -1;
                v641 = 0;
                v642 = 914LL;
                do
                {
                  v643 = *(v639 - 1) | (*(v639 - 2) << 8);
                  v644 = v639[2] << 8;
                  v645 = *v639;
                  v639 += 8;
                  v646 = *(v639 - 7) | ((v645 | (v643 << 8)) << 8);
                  v647 = v646 ^ v641;
                  v648 = *(v639 - 3) | ((*(v639 - 4) | ((*(v639 - 5) | v644) << 8)) << 8);
                  v649 = v636 ^ v648 ^ v647 ^ 0xAC987321;
                  v650 = (__ROL4__(v649, 10) + 4991 * __ROL4__(v649 + 1419157410, 5)) ^ v647;
                  v651 = (43881 * __ROR4__(v650 + 133239679, 9) - __ROL4__(v650, 2)) ^ v649;
                  v652 = (24670 * v651 - (v651 >> 13) - 123127970) ^ v650;
                  v653 = (2033 * __ROL4__(v652 ^ 0xAB69, 6) - __ROL4__(v652, 2)) ^ v651;
                  v654 = (133239679 - (v653 ^ 0xAB69605E)) ^ v652;
                  v655 = (43881 * (v654 ^ 0x137F)) ^ __ROR4__(v654, 6) ^ v653;
                  v656 = (__ROL4__(v655, 2) + 24670 * __ROR4__(v655 + 133239679, 15)) ^ v654;
                  v657 = (2033 * __ROR4__(v656 + 1419157410, 14) - __ROL4__(v656, 8)) ^ v655;
                  v658 = __ROR4__(v657, 10) ^ (4991 * __ROR4__(v657 ^ 0xAB69605E, 12)) ^ v656;
                  v659 = v657 ^ (v658 >> 10) ^ (43881 * (v658 ^ 0x7F1));
                  v660 = (2033 * (__ROR4__(~v659, 5) + 24670)) ^ v658;
                  v661 = v659 ^ (v660 - 2033) ^ 0xAB69605E;
                  v662 = ((v661 >> 2) + 4991 * __ROL4__(v659 ^ (v660 - 2033) ^ 0xAB6967AF, 2)) ^ v660;
                  v663 = (__ROL4__(v662, 7) + 43881 * __ROR4__(v662 - 133239679, 6)) ^ v661;
                  v664 = (24670 * (v663 ^ 0x137F) + __ROR4__(v663, 9)) ^ v662;
                  v665 = (__ROL4__(v664, 7) + 2033 * __ROL4__(v664 ^ 0xAB69, 5)) ^ v663;
                  v666 = v665 ^ v664 ^ 0xAC987321;
                  v667 = (4991 * __ROR4__(v666, 3) - 219010071) ^ v665;
                  v668 = (24670 * __ROR4__(v667 - 133239679, 1) - __ROR4__(v667, 6)) ^ v666;
                  v669 = (__ROL4__(v668, 14) + 2033 * __ROL4__(v668 - 1419157410, 3)) ^ v667;
                  v670 = (4991 * __ROL4__(v669 - 1419157410, 15) - __ROR4__(v669, 14)) ^ v668;
                  v671 = (v670 >> 3) ^ (43881 * (v670 ^ 0x605E)) ^ v669;
                  v1416 = v640 ^ v671;
                  v640 = v648;
                  v672 = v638 ^ __ROL4__(v671, 2) ^ (24670 * __ROL4__(v671 ^ 0x7F1137F, 4));
                  v638 = v646;
                  v1422 = v672 ^ v670;
                  *(v637 - 4) = v672 ^ v670;
                  v1422 = __ROR4__(v1422, 8);
                  *v637 = v1416;
                  v637 += 8;
                  v1416 = __ROR4__(v1416, 8);
                  *(v637 - 13) = v1422;
                  v1422 = __ROR4__(v1422, 8);
                  *(v637 - 9) = v1416;
                  v1416 = __ROR4__(v1416, 8);
                  *(v637 - 14) = v1422;
                  v1422 = __ROR4__(v1422, 8);
                  *(v637 - 10) = v1416;
                  v1416 = __ROR4__(v1416, 8);
                  *(v637 - 15) = v1422;
                  *(v637 - 11) = v1416;
                  v641 = __ROR4__(v1422, 8);
                  v636 = __ROR4__(v1416, 8);
                  v1422 = v641;
                  v1416 = v636;
                  --v642;
                }
                while ( v642 );
                v607 = v1503;
                v606 = 0;
                v87 = v1322;
                v673 = 0LL;
                v674 = (void *)v1396;
                v675 = 0LL;
                do
                {
                  v676 = _mm_loadu_si128((const __m128i *)(v673 + v1396));
                  v673 += 16LL;
                  v677 = _mm_xor_si128(v676, v675);
                  v675 = v677;
                }
                while ( v673 < 0x1C90 );
                v678 = _mm_xor_si128(v677, _mm_srli_si128(v677, 8));
                v679 = _mm_xor_si128(v678, _mm_srli_si128(v678, 4));
                v680 = _mm_xor_si128(v679, _mm_srli_si128(v679, 2));
                if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v680, _mm_srli_si128(v680, 1))) == 127LL )
                {
                  v1517 = v1396;
                  v674 = 0LL;
                  v1606 = 7312LL;
                }
                else
                {
                  v146 = -1073425151;
                }
                if ( v674 )
                  MemoryFree(v674);
                if ( v146 >= 0 )
                {
                  v681 = SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1517);
                  v683 = (int)v1400;
                  v684 = 6LL;
                  if ( v681 )
                    v682 = 0LL;
                  v685 = v1792;
                  do
                  {
                    for ( mm = 0; mm < 0x26; ++mm )
                    {
                      if ( v683 == mm )
                        *v685 = v682;
                      v687 = -1LL;
                      do
                        ++v687;
                      while ( *(_BYTE *)(v682 + v687) );
                      v682 += v687 + 1;
                    }
                    ++v685;
                    --v684;
                  }
                  while ( v684 );
                  v688 = MemoryAlloc(0x18uLL);
                  SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1503, v688);
                  v607 = v1503;
                  v606 = 0;
                  if ( (unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1503) || !v607 )
                  {
LABEL_854:
                    v146 = -2147024882;
                    goto LABEL_900;
                  }
                  v689 = (__int16 *)&v1794;
                  *v607 = 0LL;
                  v690 = 0;
                  v607[1] = 0LL;
                  v607[2] = 0LL;
                  v691 = 0LL;
                  v1326 = 0;
                  v1400 = &v1794;
                  while ( 2 )
                  {
                    v692 = 0LL;
                    v693 = *v689;
                    v694 = &unk_1804DB058;
                    while ( v693 != *v694 )
                    {
                      v692 = (unsigned int)(v692 + 1);
                      ++v694;
                      if ( (unsigned int)v692 >= 6 )
                      {
                        v606 = 0;
                        goto LABEL_890;
                      }
                    }
                    v695 = v1792[v692];
                    v696 = -1LL;
                    do
                      ++v696;
                    while ( *(_BYTE *)(v695 + v696) );
                    v697 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1805B71C0[0])(
                             65001LL,
                             0LL,
                             v695,
                             (unsigned int)(v696 + 1),
                             0LL,
                             0);
                    v1376 = v697;
                    if ( v697 )
                    {
                      v698 = MemoryAlloc(2LL * v697);
                      v607[v691] = v698;
                      v699 = v698;
                      if ( !v698 )
                      {
                        v606 = 0;
                        goto LABEL_854;
                      }
                      v700 = -1LL;
                      do
                        ++v700;
                      while ( *(_BYTE *)(v695 + v700) );
                      v701 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1805B71C0[0])(
                               65001LL,
                               0LL,
                               v695,
                               (unsigned int)(v700 + 1),
                               v699,
                               v1376);
                      v606 = 0;
                      if ( v701 )
                      {
                        v690 = v1326;
LABEL_890:
                        ++v690;
                        v689 = (__int16 *)v1400 + 1;
                        v1326 = v690;
                        ++v691;
                        v1400 = (int *)((char *)v1400 + 2);
                        if ( v690 < 3 )
                          continue;
                        v702 = v607;
                        v607 = 0LL;
                        v1581 = v702;
                        v1690 = v1345;
                        v1503 = 0LL;
                        goto LABEL_900;
                      }
                      v703 = GetLastError();
                    }
                    else
                    {
                      v703 = GetLastError();
                      v606 = 0;
                    }
                    break;
                  }
                  v146 = v703;
                  if ( v703 > 0 )
                    v146 = (unsigned __int16)v703 | 0x80070000;
                  if ( v146 >= 0 )
                    v146 = -2147467259;
                }
LABEL_900:
                if ( !(unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v607) && v607 )
                {
                  v705 = 3LL;
                  v706 = 0LL;
                  v1377 = 3LL;
                  do
                  {
                    v707 = (_WORD *)v607[v706];
                    if ( v707 )
                    {
                      v708 = -1LL;
                      do
                        ++v708;
                      while ( v707[v708] );
                      memset(v707, 0, 2 * v708 + 2);
                      MemoryFree((void *)v607[v706]);
                      v705 = v1377;
                      v704 = 1LL;
                    }
                    ++v706;
                    v705 -= v704;
                    v1377 = v705;
                  }
                  while ( v705 );
                  v606 = 0;
                }
                if ( !(unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1517) && v709 )
                {
                  memset(v709, 0, v1606);
                  v606 = 0;
                }
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1503);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1517);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1607);
                if ( v146 < 0 )
                  goto LABEL_942;
                v710 = (unsigned __int8)SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1581) == 0;
                v712 = v711;
                if ( !v710 )
                  v712 = 0LL;
                v1692 = *v712;
                v713 = v711;
                if ( !v710 )
                {
                  v713 = 0LL;
                  v711 = 0LL;
                }
                v146 = 0;
                v1693 = v713[1];
                v1694 = v711[2];
                v1624[1] = 0LL;
                v1624[0] = 16LL;
                if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD))off_1805B7268)(
                                     66LL,
                                     0LL,
                                     v1624,
                                     0LL) )
                {
                  v606 = BYTE4(v1624[0]) & 1;
                }
                else
                {
                  v714 = GetLastError();
                  v146 = v714;
                  if ( v714 > 0 )
                    v146 = (unsigned __int16)v714 | 0x80070000;
                  if ( v146 >= 0 )
                    v146 = -2147467259;
                }
                v604 = v1351;
                v1691 = v606;
                if ( v146 < 0 )
                  goto LABEL_943;
                LODWORD(v1409) = 42;
                if ( v1351 == 1 )
                {
                  v1359 = 42;
                }
                else
                {
                  if ( v1351 != 2 )
                  {
                    if ( v1351 == 3 )
                    {
                      v1359 = 225;
                      dwBytes_4 = 225;
                    }
LABEL_931:
                    v715 = 96;
                    v1366 = 96;
                    memset_0(v1786, 0, 0xDCuLL);
                    v1787 = 220;
                    v146 = 0;
                    if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1805B71E0[0])(
                           0LL,
                           0xFFFFFFFFLL,
                           v1786) )
                    {
                      v715 = v1788;
                      v1526 = v1789;
                      v1525 = 0LL;
                      if ( v1788 < 0x60u )
                        v715 = 96;
                      v1366 = v715;
                    }
                    v716 = v1353;
                    if ( v1351 == 1 )
                      v716 = v1410;
                    memset_0(v1775, 0, 0x5CuLL);
                    v717 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71F8[0])(0LL, 0LL, 1027LL);
                    if ( !v717 )
                    {
                      v718 = GetLastError();
                      v146 = v718;
                      if ( v718 > 0 )
                        v146 = (unsigned __int16)v718 | 0x80070000;
                      if ( v146 >= 0 )
                        v146 = -2147467259;
                      goto LABEL_942;
                    }
                    v726 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71B8)(v1359, v715, 72LL);
                    v1775[4] = 400;
                    v1776 = 5;
                    v1775[0] = -v726;
                    StringCchCopyW(v1777, 0x20uLL, v716);
                    v727 = ((__int64 (__fastcall *)(_DWORD *))off_1805B7120[0])(v1775);
                    if ( v727 )
                    {
                      v1695 = (void *)v727;
                    }
                    else
                    {
                      v728 = GetLastError();
                      v146 = v728;
                      if ( v728 > 0 )
                        v146 = (unsigned __int16)v728 | 0x80070000;
                      if ( v146 >= 0 )
                        v146 = -2147467259;
                    }
                    ((void (__fastcall *)(_QWORD, __int64))off_1805B7260[0])(0LL, v717);
                    if ( v146 < 0 )
                      goto LABEL_942;
                    v604 = v1351;
                    v729 = v1353;
                    if ( v1351 == 1 )
                      v729 = v1410;
                    v1354 = v729;
                    memset_0(v1778, 0, 0x5CuLL);
                    v146 = 0;
                    v730 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71F8[0])(0LL, 0LL, 1027LL);
                    if ( !v730 )
                    {
                      v731 = GetLastError();
                      v146 = v731;
                      if ( v731 > 0 )
                        v146 = (unsigned __int16)v731 | 0x80070000;
                      if ( v146 < 0 )
                        goto LABEL_943;
                      goto LABEL_978;
                    }
                    v732 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71B8)(dwBytes_4, v715, 72LL);
                    v1778[4] = 400;
                    v1778[0] = -v732;
                    v1779 = 5;
                    StringCchCopyW(v1780, 0x20uLL, v1354);
                    v733 = ((__int64 (__fastcall *)(_DWORD *))off_1805B7120[0])(v1778);
                    if ( v733 )
                    {
                      v1696 = (void *)v733;
                    }
                    else
                    {
                      v734 = GetLastError();
                      v146 = v734;
                      if ( v734 > 0 )
                        v146 = (unsigned __int16)v734 | 0x80070000;
                      if ( v146 >= 0 )
                        v146 = -2147467259;
                    }
                    ((void (__fastcall *)(_QWORD, __int64))off_1805B7260[0])(0LL, v730);
                    if ( v146 < 0 )
                      goto LABEL_943;
                    v735 = 0;
                    v736 = 0;
                    if ( v1351 != 1 )
                    {
                      if ( v1351 == 2 )
                      {
                        v736 = 0;
                        v735 = (int)v1526 / 4;
LABEL_990:
                        v1460 = __PAIR64__(v736, v735);
                        if ( v1351 == 1 )
                        {
                          v737 = 150;
                          dwBytes_4 = 32;
                        }
                        else
                        {
                          if ( (unsigned int)(v1351 - 2) > 1 )
                          {
                            v738 = v1451;
                            dwBytes_4 = v1451;
                            LODWORD(v1409) = v1451;
                            v737 = v1451;
                            goto LABEL_997;
                          }
                          v737 = 0;
                          LODWORD(v1409) = 0;
                          dwBytes_4 = 0;
                        }
                        v738 = 0;
LABEL_997:
                        v1390 = v737;
                        v739 = v1692;
                        v146 = 0;
                        v740 = v735 - v737 - v738;
                        DWORD2(v1700) = v740;
                        DWORD2(v1699) = v740;
                        v1396 = ((__int64 (__fastcall *)(__int64, void *))off_1805B7178)(v1337, v1695);
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1805B71D8)(
                                              v1337,
                                              v739,
                                              0xFFFFFFFFLL,
                                              &v1699,
                                              3152,
                                              0LL) )
                          v146 = -2147467259;
                        if ( v1396 )
                          ((void (__fastcall *)(__int64, SIZE_T))off_1805B7178)(v1337, v1396);
                        if ( v146 < 0 )
                          goto LABEL_942;
                        v146 = 0;
                        v741 = v1693;
                        v1396 = ((__int64 (__fastcall *)(__int64, void *))off_1805B7178)(v1337, v1696);
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1805B71D8)(
                                              v1337,
                                              v741,
                                              0xFFFFFFFFLL,
                                              &v1700,
                                              3152,
                                              0LL) )
                          v146 = -2147467259;
                        if ( v1396 )
                          ((void (__fastcall *)(__int64, SIZE_T))off_1805B7178)(v1337, v1396);
                        if ( v146 < 0 )
                          goto LABEL_942;
                        if ( (unsigned int)(v1351 - 2) <= 1 )
                        {
                          v740 = DWORD2(v1700);
                          if ( SDWORD2(v1699) > SDWORD2(v1700) )
                            v740 = DWORD2(v1699);
                        }
                        if ( v1690 )
                        {
                          off_1805B7250(
                            (CToastCenterExperienceManager *)&v1699,
                            (struct CSingleViewShellExperience *)(v740 + v738 - DWORD2(v1699)));
                          v742 = v740 + v738 - DWORD2(v1700);
                        }
                        else
                        {
                          off_1805B7250(
                            (CToastCenterExperienceManager *)&v1699,
                            (struct CSingleViewShellExperience *)v1390);
                          v742 = v1390;
                        }
                        ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_1805B7250)(
                          &v1700,
                          v742,
                          dwBytes_4 + HIDWORD(v1699));
                        v604 = v1351;
                        if ( (unsigned int)(v1351 - 2) <= 1 )
                        {
                          v1460 = __PAIR64__(HIDWORD(v1700), v740);
                          v1698 = -5723992;
                        }
                        else if ( v1351 == 1 )
                        {
                          v1698 = 0xFFFFFF;
                          memset_0(v1781, 0, 0x5CuLL);
                          v146 = 0;
                          v743 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71F8[0])(0LL, 0LL, 1027LL);
                          if ( v743 )
                          {
                            v745 = v1366;
                            v750 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1805B71B8)(11LL, v1366);
                            v1781[4] = 400;
                            v1781[0] = -v750;
                            v1782 = 5;
                            StringCchCopyW(v1783, 0x20uLL, v1427);
                            v751 = ((__int64 (__fastcall *)(_DWORD *))off_1805B7120[0])(v1781);
                            if ( v751 )
                            {
                              v1697 = v751;
                            }
                            else
                            {
                              v146 = GetLastError();
                              v752 = v146 < 0;
                              if ( v146 > 0 )
                              {
                                v146 = (unsigned __int16)v146 | 0x80070000;
                                v752 = v146 < 0;
                              }
                              if ( !v752 )
                                v146 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1805B7260[0])(0LL, v743);
                          }
                          else
                          {
                            v744 = GetLastError();
                            v146 = v744;
                            if ( v744 > 0 )
                              v146 = (unsigned __int16)v744 | 0x80070000;
                            if ( v146 >= 0 )
                            {
LABEL_978:
                              v146 = -2147467259;
                              goto LABEL_943;
                            }
                            v745 = v1366;
                          }
                          if ( v146 < 0 )
                            goto LABEL_942;
                          v146 = 0;
                          v746 = v1694;
                          v1703 = v740;
                          v747 = ((__int64 (__fastcall *)(__int64, __int64))off_1805B7178)(v1337, v1697);
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, void *, __int64, unsigned int *, int, _QWORD))off_1805B71D8)(
                                                v1337,
                                                v746,
                                                0xFFFFFFFFLL,
                                                &v1701,
                                                1120,
                                                0LL) )
                            v146 = -2147467259;
                          if ( v747 )
                            ((void (__fastcall *)(__int64, __int64))off_1805B7178)(v1337, v747);
                          if ( v146 < 0 )
                            goto LABEL_942;
                          v748 = v1703 + 24;
                          if ( (int)(v1703 + 24) < 90 )
                            v748 = 90;
                          v1703 = v748;
                          v1704 = 32;
                          v1701 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71B8)(v1701, v745, 96LL);
                          v1702 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71B8)(v1702, v745, 96LL);
                          v1703 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71B8)(v1703, v745, 96LL);
                          v1704 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1805B71B8)(v1704, v745, 96LL);
                          if ( v1690 )
                          {
                            v749 = (unsigned int)v1699;
                            if ( (int)v1699 >= (int)v1700 )
                              v749 = (unsigned int)v1700;
                          }
                          else
                          {
                            v753 = DWORD2(v1699);
                            if ( SDWORD2(v1699) <= SDWORD2(v1700) )
                              v753 = DWORD2(v1700);
                            v749 = v1701 + v753 - v1703;
                          }
                          off_1805B7250(
                            (CToastCenterExperienceManager *)&v1701,
                            (struct CSingleViewShellExperience *)v749);
                        }
                        v754 = v1690;
                        v755 = HIDWORD(v1460);
                        v756 = v1460;
                        switch ( v1351 )
                        {
                          case 1:
                            v1459 = 0LL;
                            goto LABEL_1049;
                          case 2:
                            memset_0(v1769, 0, 0x28uLL);
                            v760 = (CToastCenterExperienceManager *)off_1805B7248[0](
                                                                      0LL,
                                                                      (struct CSingleViewShellExperience *)1);
                            v1769[0] = 40;
                            if ( !(unsigned int)off_1805B7208(v760, (struct CSingleViewShellExperience *)v1769) )
                              goto LABEL_1049;
                            off_1805B7240[0](0LL, (struct CSingleViewShellExperience *)&v1770);
                            off_1805B7240[0](0LL, (struct CSingleViewShellExperience *)v1771);
                            if ( v754 )
                              v758 = v1770 + 5 * v1771[0] / 100;
                            else
                              v758 = 95 * (v1771[0] - v756) / 100;
                            v759 = 95 * (v1771[1] - v755);
                            break;
                          case 3:
                            memset_0(v1772, 0, 0x28uLL);
                            v757 = (CToastCenterExperienceManager *)off_1805B7248[0](
                                                                      0LL,
                                                                      (struct CSingleViewShellExperience *)1);
                            v1772[0] = 40;
                            if ( !(unsigned int)off_1805B7208(v757, (struct CSingleViewShellExperience *)v1772) )
                              goto LABEL_1049;
                            off_1805B7240[0](0LL, (struct CSingleViewShellExperience *)v1773);
                            off_1805B7240[0](0LL, (struct CSingleViewShellExperience *)v1774);
                            v758 = 50 * (v1774[0] - v756) / 100;
                            v759 = 50 * (v1774[1] - v755);
                            break;
                          default:
                            goto LABEL_1049;
                        }
                        LODWORD(v1459) = v758;
                        HIDWORD(v1459) = v759 / 100;
LABEL_1049:
                        v146 = 0;
LABEL_942:
                        v604 = v1351;
LABEL_943:
                        ((void (__fastcall *)(_QWORD, __int64))off_1805B7260[0])(0LL, v1337);
                        goto LABEL_944;
                      }
                      if ( v1351 != 3 )
                        goto LABEL_990;
                    }
                    v735 = v1526;
                    v736 = HIDWORD(v1526);
                    goto LABEL_990;
                  }
                  v1359 = 15;
                }
                dwBytes_4 = 11;
                goto LABEL_931;
              }
              v606 = 0;
            }
            v146 = -2147024882;
            goto LABEL_835;
          }
          v546 = dword_1805C1C38;
        }
        dword_1805C1C38 = v546 + 1;
        goto LABEL_806;
      }
      v488 = dword_1805C1C38;
    }
    dword_1805C1C38 = v488 + 1;
    goto LABEL_757;
  }
LABEL_1723:
  v1012 = v1481;
LABEL_1724:
  while ( _InterlockedCompareExchange(&dword_1805C2560, 1, 0) )
    ;
  v1316 = dword_1805C1C38;
  if ( dword_1805C1C38 > 0 )
  {
    --dword_1805C1C38;
    if ( v1316 == 1 )
    {
      v1317 = 4LL;
      v1318 = (HMODULE *)&unk_1805C2570;
      do
      {
        if ( *v1318 )
          FreeLibrary(*v1318);
        v1318 += 3;
        --v1317;
      }
      while ( v1317 );
      memset_0(&unk_1805C2570, 0, 0x60uLL);
      memcpy_0(off_1805B7100, off_1804517D0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1805C2560, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1456);
  if ( v87 < 0 )
  {
    switch ( v87 )
    {
      case -805306316:
        v87 = -1073418222;
LABEL_1735:
        v1319 = v87;
        goto LABEL_1745;
      case -805306139:
      case -1073425151:
        v87 = -1073418201;
        break;
      case -805306306:
        v87 = -1073418200;
        goto LABEL_1735;
    }
    if ( v87 != -2147024774 )
      goto LABEL_1735;
    goto LABEL_1742;
  }
  if ( v1012 != 4 )
  {
LABEL_1742:
    v1319 = -1073418210;
    goto LABEL_1745;
  }
  Ptr = (int *)SP<unsigned char,SP_HLOCAL<unsigned char>>::GetPtrAs<unsigned long>(&v1588);
  v1319 = v1451;
  v1505 = *Ptr;
LABEL_1745:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1588);
  if ( v1319 >= 0 )
  {
    *(_BYTE *)v1665 = v1505 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)v1319);
    return (unsigned int)v1319;
  }
}
