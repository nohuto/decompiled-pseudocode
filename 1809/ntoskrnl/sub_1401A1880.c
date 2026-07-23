/*
 * XREFs of sub_1401A1880 @ 0x1401A1880
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x1400103F0 (KeAreApcsDisabled.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     KeCheckProcessorGroupAffinity @ 0x1400D5780 (KeCheckProcessorGroupAffinity.c)
 *     KeVerifyGroupAffinity @ 0x14016B82C (KeVerifyGroupAffinity.c)
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     sub_1401ADB1C @ 0x1401ADB1C (sub_1401ADB1C.c)
 *     sub_1401AEA44 @ 0x1401AEA44 (sub_1401AEA44.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KiGetNtDdiVersion @ 0x14028F600 (KiGetNtDdiVersion.c)
 *     sub_140348B4C @ 0x140348B4C (sub_140348B4C.c)
 *     sub_1403495B4 @ 0x1403495B4 (sub_1403495B4.c)
 *     sub_140349E50 @ 0x140349E50 (sub_140349E50.c)
 *     KiGetGdtIdt @ 0x14034B7B0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x14034B7C0 (KiGetLdtr.c)
 *     KiGetTr @ 0x14034B7D0 (KiGetTr.c)
 *     KiErrata704Present @ 0x14034B7E0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x14034B890 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14034BB50 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x14034BCEC (RtlInitMinimalBarrier.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     sub_14098FFA4 @ 0x14098FFA4 (sub_14098FFA4.c)
 */

__int64 __fastcall sub_1401A1880(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r12
  _DWORD *v5; // r14
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // ebx
  unsigned __int8 v11; // al
  SIZE_T v12; // rbx
  _SLIST_ENTRY *PoolWithTag; // rax
  PSLIST_ENTRY v14; // rax
  PSLIST_ENTRY v15; // r13
  PSLIST_ENTRY v16; // r15
  __int64 v17; // rdx
  unsigned __int64 j; // r14
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 Next_low; // rcx
  __int64 v22; // rbx
  int v23; // esi
  __int64 v24; // rbx
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  int Next_high; // eax
  unsigned __int64 v29; // rax
  unsigned __int128 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // rcx
  int v34; // ecx
  int v35; // ecx
  unsigned int v36; // r10d
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int128 v42; // rt2
  unsigned int v43; // r10d
  __int64 v44; // r14
  _BYTE *v45; // rax
  int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ebx
  unsigned int v49; // r12d
  int v50; // eax
  __int64 v51; // r9
  int v52; // r8d
  char *v53; // r13
  unsigned int v54; // ecx
  __int64 v55; // r10
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rax
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int128 v63; // rax
  __int64 v64; // rbx
  unsigned __int64 v65; // rax
  unsigned __int128 v66; // rax
  unsigned __int64 v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rax
  int v71; // r8d
  unsigned __int64 v72; // rcx
  int v73; // edx
  __int64 v74; // r9
  bool v75; // zf
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned __int64 *v78; // rdx
  unsigned __int64 v79; // r11
  int v80; // eax
  int v81; // r9d
  unsigned __int64 v82; // r10
  unsigned int *v83; // rcx
  int v84; // ecx
  int v85; // r10d
  unsigned int v86; // ecx
  unsigned __int64 v87; // rbx
  unsigned __int64 i35; // rsi
  _QWORD *v89; // rsi
  __int64 v90; // r8
  _QWORD *v91; // r9
  const char *v92; // rax
  int v93; // r10d
  __int64 v94; // r14
  unsigned __int64 v95; // rbx
  unsigned int v96; // r11d
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rbx
  unsigned __int128 v100; // rax
  unsigned int v101; // r8d
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  unsigned __int64 i36; // rax
  unsigned __int64 v105; // rcx
  unsigned int v106; // ebx
  __int64 v107; // rdx
  __int64 v108; // r8
  unsigned __int8 v109; // r15
  unsigned __int64 v110; // rsi
  __int64 v111; // r13
  unsigned __int64 v112; // r12
  unsigned __int64 v113; // r14
  int v114; // eax
  int v115; // ecx
  unsigned __int64 v116; // rbx
  unsigned __int64 v117; // r12
  unsigned __int64 v118; // r13
  __int64 v119; // r8
  _QWORD *v120; // r9
  const char *v121; // rax
  int v122; // r11d
  __int64 v123; // r15
  unsigned __int64 v124; // r14
  unsigned __int64 v125; // rsi
  unsigned int v126; // r10d
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // r8
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 i34; // rax
  __int64 v136; // rbx
  unsigned int v137; // ecx
  unsigned int v138; // esi
  unsigned __int8 v139; // r12
  unsigned __int64 v140; // r14
  unsigned __int64 v141; // r13
  unsigned __int64 v142; // r15
  int v143; // eax
  __int64 v144; // rax
  int *v145; // rcx
  bool v146; // zf
  __int64 v147; // r8
  unsigned __int16 v148; // dx
  _QWORD *v149; // rsi
  __int64 v150; // r8
  _QWORD *v151; // r9
  const char *v152; // rax
  int v153; // r10d
  __int64 v154; // r14
  unsigned __int64 v155; // rbx
  unsigned int v156; // r11d
  __int64 v157; // rax
  __int64 v158; // rbx
  unsigned __int128 v159; // rax
  unsigned int v160; // r8d
  unsigned __int64 v161; // rax
  __int64 v162; // rax
  unsigned __int64 i33; // rax
  unsigned int v164; // ebx
  BOOL v165; // r15d
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // r8
  unsigned __int8 v169; // r12
  unsigned __int64 v170; // rsi
  unsigned __int64 v171; // r13
  unsigned __int64 v172; // r14
  int v173; // eax
  __int16 v174; // ax
  __int64 v175; // rcx
  int (__fastcall *v176)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64); // rax
  __int64 v177; // rcx
  int v178; // eax
  __int64 v179; // rcx
  unsigned int i32; // r10d
  __int64 v181; // rcx
  unsigned __int64 v182; // rdx
  __int64 v183; // r9
  __int64 v184; // r8
  unsigned __int64 v185; // rdx
  unsigned __int64 v186; // r9
  int v187; // ecx
  int v188; // r13d
  bool v189; // zf
  unsigned __int64 v190; // rax
  unsigned __int128 v191; // rax
  void (*v192)(void); // rax
  __int64 v193; // rbx
  int v194; // r12d
  unsigned int v195; // ecx
  unsigned __int8 v196; // si
  volatile signed __int8 **v197; // r8
  volatile signed __int8 *v198; // rdx
  unsigned __int64 v199; // rbx
  int *v200; // r12
  __int64 v201; // r14
  unsigned __int64 v202; // r15
  __int64 *v203; // rax
  __int64 *v204; // r10
  _BYTE *v205; // rdx
  char v206; // cl
  __int64 v207; // r8
  __int64 v208; // rcx
  __int64 v209; // rax
  bool v210; // zf
  int v211; // r12d
  void (*v212)(void); // rax
  __int64 v213; // rsi
  unsigned int v214; // ecx
  void (__fastcall *v215)(__int64, _QWORD); // rax
  _QWORD **v216; // r9
  _QWORD *v217; // r8
  unsigned __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // rsi
  _QWORD **v221; // r10
  _QWORD *v222; // r8
  __int64 v223; // rcx
  char *v224; // rdx
  _QWORD *v225; // rsi
  __int64 v226; // r8
  _QWORD *v227; // r9
  const char *v228; // rax
  int v229; // r10d
  __int64 v230; // r14
  unsigned __int64 v231; // rbx
  unsigned int i30; // r11d
  __int64 v233; // rax
  __int64 v234; // rbx
  unsigned __int128 v235; // rax
  __int64 v236; // r8
  unsigned __int64 v237; // rax
  __int64 v238; // rax
  unsigned __int64 i31; // rax
  BOOL v240; // r15d
  __int64 v241; // rcx
  __int64 v242; // rdx
  unsigned __int8 v243; // r12
  unsigned __int64 v244; // rsi
  unsigned __int64 v245; // r13
  int v246; // eax
  int v247; // eax
  __int64 v248; // rcx
  int v249; // ebx
  __int64 v250; // r15
  int v251; // r13d
  void (*v252)(void); // rax
  _QWORD *v253; // r12
  __int64 v254; // rsi
  unsigned int v255; // ecx
  void (__fastcall *v256)(__int64, _QWORD); // rax
  _QWORD **v257; // r9
  _QWORD *v258; // r8
  __int64 v259; // rdx
  __int64 v260; // rax
  _QWORD **v261; // r11
  _QWORD *v262; // r9
  char v263; // si
  int v264; // r15d
  int *v265; // rbx
  unsigned __int8 v266; // si
  char *v267; // rdx
  __int64 v268; // rcx
  _QWORD *v269; // r10
  _QWORD **v270; // r10
  _QWORD *i17; // r9
  __int64 v272; // r15
  void (*v273)(void); // rax
  char *v274; // r12
  __int64 v275; // rsi
  unsigned int v276; // ecx
  volatile signed __int8 **v277; // r8
  volatile signed __int8 *v278; // rdx
  _QWORD **v279; // r11
  _QWORD *v280; // r10
  char *v281; // rcx
  __int64 v282; // rdx
  __int64 v283; // r8
  _QWORD **v284; // r15
  __int64 (*v285)(void); // rax
  __int64 v286; // rcx
  __int64 v287; // rdx
  unsigned int v288; // r13d
  unsigned int *v289; // rcx
  __int64 v290; // r12
  _QWORD *v291; // rax
  unsigned __int64 v292; // rax
  __int64 v293; // rcx
  unsigned __int128 v294; // rt2
  int v295; // ebx
  unsigned __int64 v296; // rax
  unsigned __int128 v297; // rax
  __int64 v298; // r8
  unsigned __int64 v299; // rsi
  __int64 v300; // rax
  __int64 v301; // r11
  int v302; // r10d
  _QWORD *v303; // r9
  unsigned __int64 v304; // r8
  unsigned __int64 v305; // rax
  unsigned __int128 v306; // rax
  unsigned __int64 v307; // rax
  unsigned __int128 v308; // rax
  unsigned __int64 v309; // rdx
  unsigned int v310; // ebx
  _QWORD *v311; // r8
  unsigned __int64 v312; // rax
  unsigned __int128 v313; // rax
  unsigned __int64 v314; // rax
  unsigned __int128 v315; // rax
  unsigned __int64 v316; // rdx
  __int64 v317; // r14
  _QWORD *v318; // rbx
  __int64 v319; // rsi
  unsigned __int64 v320; // rsi
  unsigned __int64 v321; // r15
  unsigned __int64 v322; // rbx
  int v323; // edx
  int v324; // r8d
  int v325; // ecx
  unsigned __int64 v326; // r9
  int *v327; // rcx
  unsigned __int64 v328; // rax
  unsigned __int128 v329; // rax
  __int64 v330; // r12
  int v331; // ecx
  int v332; // ecx
  int v333; // ecx
  int v334; // ecx
  int v335; // ecx
  _QWORD *v336; // rbx
  unsigned int v337; // r13d
  unsigned int v338; // esi
  _QWORD *v339; // rcx
  int v340; // edx
  __int64 v341; // r8
  char v342; // al
  __int64 v343; // rax
  __int64 v344; // rcx
  __int64 (__fastcall *v345)(_QWORD); // rax
  __int64 v346; // r14
  char *v347; // r12
  char *v348; // rbx
  int v349; // r15d
  __int64 v350; // rsi
  _QWORD *v351; // rcx
  int v352; // edx
  __int64 v353; // r8
  char v354; // al
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 (__fastcall *v357)(__int64); // rax
  _BYTE *v358; // r12
  __int64 *v359; // rax
  __int64 v360; // rbx
  int *v361; // rcx
  __int64 v362; // rax
  __int64 v363; // rax
  __int64 v364; // rax
  __int64 (__fastcall *v365)(__int64, unsigned __int64, unsigned __int64); // rax
  __int64 v366; // rax
  __int64 v367; // r9
  __int64 v368; // r13
  int v369; // ecx
  __int64 v370; // r14
  _BYTE *v371; // rax
  int v372; // r15d
  __int64 v373; // rdx
  int v374; // ecx
  unsigned int v375; // esi
  int v376; // r10d
  unsigned int v377; // r11d
  __int64 v378; // rbx
  int *v379; // r8
  __int64 v380; // r9
  int v381; // ecx
  int v382; // ecx
  int v383; // ecx
  int v384; // ecx
  __int64 v385; // rax
  int v386; // eax
  unsigned __int64 v387; // rcx
  __int64 v388; // r11
  int v389; // eax
  __int64 v390; // rdx
  int v391; // esi
  int v392; // eax
  __int64 (__fastcall *v393)(__int64, __int64, _QWORD, unsigned __int64); // rax
  __int64 v394; // rcx
  __int64 v395; // rax
  __int64 v396; // rcx
  __int64 v397; // rdx
  __int64 (__fastcall *v398)(__int64, __int64, __int64, unsigned __int64); // rax
  __int64 v399; // rax
  __int64 v400; // rdx
  int v401; // ecx
  __int64 (__fastcall *v402)(_QWORD, __int64, __int64, unsigned __int64); // rax
  __int64 v403; // rax
  __int64 v404; // rcx
  int v405; // edx
  __int64 (__fastcall *v406)(__int64); // rax
  __int64 v407; // rbx
  __int64 v408; // rax
  __int64 v409; // r14
  __int64 v410; // r8
  unsigned int v411; // eax
  int v412; // r9d
  __int64 v413; // rax
  __int64 v414; // rbx
  int v415; // edx
  unsigned int v416; // ecx
  __int64 v417; // r9
  _QWORD *v418; // rax
  int v419; // r8d
  unsigned __int64 v420; // rdx
  int v421; // esi
  int v422; // ecx
  __int64 v423; // r15
  _QWORD *v424; // r13
  unsigned int *v425; // rdi
  __int64 v426; // r12
  __int64 v427; // rdx
  _QWORD *v428; // r14
  int v429; // ecx
  _QWORD *v430; // rax
  _QWORD *v431; // r10
  const char *v432; // rax
  int v433; // r11d
  __int64 v434; // rsi
  unsigned __int64 v435; // r8
  unsigned int v436; // r9d
  __int64 v437; // rdx
  __int64 v438; // rax
  __int64 v439; // r8
  unsigned __int64 v440; // rcx
  __int64 v441; // rdx
  unsigned int v442; // edx
  unsigned __int64 v443; // r9
  __int64 v444; // rax
  unsigned __int64 i21; // rax
  __int64 v446; // rcx
  __int64 v447; // rax
  int v448; // r13d
  __int64 v449; // r9
  int v450; // r8d
  __int64 v451; // rdx
  unsigned int v452; // r9d
  _BYTE *v453; // rcx
  _QWORD *v454; // rbx
  _BYTE *v455; // r15
  int v456; // ecx
  _QWORD *v457; // rax
  __int64 v458; // rdx
  _QWORD *v459; // r10
  const char *v460; // rax
  int v461; // esi
  __int64 v462; // r14
  unsigned __int64 v463; // rcx
  unsigned __int64 v464; // r8
  unsigned int v465; // r11d
  __int64 v466; // rdx
  unsigned __int64 v467; // rax
  __int64 v468; // r8
  unsigned __int64 v469; // rcx
  __int64 v470; // rdx
  unsigned __int64 v471; // r9
  unsigned __int64 v472; // rdx
  __int64 v473; // rax
  unsigned __int64 i22; // rax
  _DWORD *v475; // rdx
  int *v476; // rcx
  int v477; // r15d
  __int64 v478; // r14
  unsigned int v479; // eax
  _BYTE *v480; // rbx
  int v481; // ecx
  unsigned int v482; // eax
  __int64 v483; // r8
  int v484; // edx
  unsigned __int64 v485; // rcx
  int v486; // esi
  int v487; // ecx
  _BYTE *v488; // r14
  _QWORD *v489; // rax
  int v490; // ecx
  __int64 v491; // rdx
  const char *v492; // r12
  __int64 v493; // r15
  int v494; // r11d
  __int64 v495; // rsi
  const char *v496; // rax
  unsigned int v497; // r10d
  __int64 v498; // rax
  __int64 v499; // r8
  unsigned __int128 v500; // rax
  unsigned int v501; // edx
  unsigned __int64 v502; // rax
  __int64 v503; // rax
  unsigned __int64 i23; // rax
  __int64 v505; // rax
  __int64 v506; // rdx
  __int64 v507; // rsi
  unsigned __int64 v508; // r14
  __int64 v509; // r15
  __int64 v510; // rax
  __int64 v511; // rcx
  unsigned __int64 v512; // rcx
  _QWORD *v513; // rax
  _QWORD *v514; // rax
  ULONG_PTR v515; // rsi
  __int64 v516; // rax
  __int64 v517; // r14
  unsigned __int16 v518; // r12
  unsigned __int128 v519; // rax
  unsigned int v520; // ecx
  unsigned int v521; // r9d
  unsigned int *v522; // r15
  __int64 v523; // r13
  __int64 v524; // r8
  _DWORD *v525; // r13
  unsigned int v526; // r12d
  unsigned int v527; // edx
  unsigned int v528; // r12d
  unsigned int v529; // eax
  __int64 v530; // rax
  unsigned int v531; // esi
  unsigned int v532; // r14d
  unsigned int v533; // esi
  unsigned int *v534; // rax
  ULONG_PTR v535; // r10
  unsigned int *v536; // rax
  unsigned int v537; // eax
  __int64 v538; // r10
  __int64 v539; // r14
  __int16 v540; // r12
  __int64 v541; // r13
  __int64 v542; // rsi
  unsigned int v543; // eax
  __int64 v544; // rax
  _BYTE *v545; // r15
  int v546; // edx
  unsigned int v547; // ecx
  __int64 v548; // r9
  int v549; // r8d
  unsigned __int64 v550; // rax
  int v551; // ebx
  int v552; // ecx
  _BYTE *v553; // rdx
  _QWORD *v554; // rax
  int v555; // ecx
  __int64 v556; // r8
  __int64 v557; // rax
  unsigned __int64 v558; // rcx
  unsigned __int64 i24; // rax
  __int64 v560; // rax
  __int64 v561; // rcx
  int v562; // r14d
  __int64 v563; // rcx
  __int64 v564; // rax
  unsigned int *v565; // rsi
  unsigned int *v566; // r10
  unsigned int *v567; // r8
  __int64 v568; // rcx
  __int64 v569; // rdx
  _DWORD *v570; // rax
  __int64 v571; // rcx
  unsigned __int8 *v572; // r12
  int v573; // ecx
  __int16 v574; // ax
  unsigned __int8 *v575; // r8
  int v576; // r10d
  __int64 *v577; // r11
  unsigned __int8 *v578; // r9
  unsigned __int8 *v579; // rbx
  unsigned __int8 *v580; // rsi
  __int64 v581; // rdx
  __int64 v582; // rax
  unsigned int v583; // r8d
  __int64 *v584; // r9
  __int64 v585; // rcx
  __int64 v586; // rax
  __int64 v587; // rdx
  __int64 v588; // rax
  int v589; // r9d
  unsigned __int8 *v590; // r8
  __int64 v591; // rdx
  __int64 v592; // rax
  int v593; // r9d
  unsigned __int8 *v594; // r8
  __int64 v595; // rdx
  __int64 v596; // rax
  int v597; // ecx
  __int64 v598; // rax
  unsigned int v599; // r15d
  unsigned int v600; // r11d
  unsigned int *v601; // r8
  unsigned int v602; // r15d
  unsigned int v603; // r12d
  unsigned int v604; // r13d
  ULONG_PTR v605; // r14
  unsigned int *v606; // rdx
  unsigned __int64 *v607; // r8
  __int64 v608; // rax
  unsigned int v609; // r9d
  unsigned __int64 v610; // rsi
  unsigned __int64 v611; // rbx
  unsigned int i25; // r10d
  __int64 v613; // r15
  _QWORD *v614; // r11
  const char *v615; // rax
  int v616; // r14d
  unsigned __int64 v617; // r15
  unsigned int v618; // r10d
  unsigned __int64 v619; // r8
  __int64 v620; // rax
  __int64 v621; // r8
  unsigned __int128 v622; // rax
  unsigned int v623; // r9d
  unsigned __int64 v624; // rax
  __int64 v625; // rax
  unsigned __int64 i26; // rax
  bool v627; // cc
  int v628; // r13d
  unsigned int *v629; // rax
  unsigned int v630; // r12d
  char v631; // r8
  unsigned int v632; // edx
  __int64 v633; // rcx
  __int64 v634; // r11
  unsigned __int64 v635; // rsi
  unsigned int v636; // r9d
  unsigned int *v637; // rdx
  unsigned __int64 *v638; // r8
  unsigned __int64 v639; // rbx
  unsigned int i27; // r10d
  const char *v641; // rax
  int v642; // r15d
  unsigned __int64 v643; // r14
  _QWORD *v644; // r11
  unsigned int v645; // r10d
  unsigned __int64 v646; // r8
  __int64 v647; // rdx
  __int64 v648; // rax
  __int64 v649; // r8
  unsigned __int64 v650; // rcx
  __int64 v651; // rdx
  unsigned int v652; // r9d
  unsigned __int64 v653; // rdx
  __int64 v654; // rax
  unsigned __int64 i28; // rax
  char *v656; // rax
  _DWORD *v657; // rsi
  int v658; // eax
  unsigned int *v659; // rdx
  unsigned __int64 *v660; // r8
  __int64 v661; // rax
  unsigned int v662; // r9d
  unsigned __int64 v663; // rbx
  unsigned __int64 v664; // r11
  unsigned int i29; // r10d
  __int64 v666; // rax
  _QWORD *v667; // r10
  int v668; // r14d
  unsigned __int64 v669; // rsi
  const char *v670; // rax
  unsigned __int64 v671; // r8
  unsigned int v672; // r11d
  __int64 v673; // rdx
  __int64 v674; // rax
  __int64 v675; // r8
  unsigned __int64 v676; // rcx
  __int64 v677; // rdx
  unsigned int v678; // r9d
  unsigned __int64 v679; // rdx
  __int64 v680; // rax
  unsigned __int64 v681; // rax
  unsigned int *v682; // rdx
  unsigned int *v683; // rcx
  _BYTE *v684; // rax
  char *v685; // rdx
  _BYTE *v686; // rax
  char *v687; // rdx
  char *v688; // rbx
  unsigned int v689; // r15d
  unsigned __int64 v690; // r12
  __int64 v691; // rsi
  _QWORD *v692; // rcx
  int v693; // edx
  __int64 v694; // r8
  char v695; // al
  __int64 v696; // rax
  __int64 v697; // rax
  _QWORD *v698; // rbx
  __int64 v699; // r14
  __int64 v700; // rsi
  _QWORD *v701; // rcx
  int v702; // edx
  __int64 v703; // r8
  char v704; // al
  __int64 v705; // rax
  __int64 v706; // rax
  _QWORD *v707; // rbx
  _QWORD *v708; // rcx
  int v709; // edx
  __int64 v710; // r8
  char v711; // al
  __int64 v712; // rax
  __int64 v713; // rax
  __int64 v714; // rsi
  int v715; // ebx
  __int64 v716; // rax
  __int64 v717; // rdx
  unsigned __int64 v718; // rbx
  unsigned __int64 v719; // rcx
  __int64 v720; // rdx
  unsigned __int64 v721; // r8
  __int64 v722; // rcx
  __int64 v723; // rsi
  __int64 v724; // rbx
  unsigned __int64 v725; // rax
  __int64 v726; // rcx
  unsigned __int64 v727; // rcx
  unsigned int v728; // ecx
  _QWORD *v729; // rsi
  __int64 v730; // r8
  _QWORD *v731; // r9
  const char *v732; // rax
  int v733; // r10d
  __int64 v734; // r14
  unsigned __int64 v735; // rbx
  unsigned int v736; // r11d
  __int64 v737; // rdx
  __int64 v738; // rax
  __int64 v739; // rbx
  unsigned __int128 v740; // rax
  __int64 v741; // r8
  unsigned __int64 v742; // rdx
  __int64 v743; // rax
  unsigned __int64 i16; // rax
  unsigned int v745; // ebx
  __int64 v746; // rcx
  __int64 v747; // rdx
  unsigned __int8 v748; // r15
  unsigned __int64 v749; // rsi
  __int64 v750; // r13
  unsigned __int64 v751; // r12
  unsigned __int64 v752; // r14
  int v753; // eax
  __int64 v754; // r8
  unsigned int v755; // r8d
  __int64 *v756; // r9
  __int64 *v757; // r10
  __int64 v758; // rcx
  __int64 v759; // rax
  __int64 v760; // rdx
  __int64 v761; // rax
  int v762; // eax
  int v763; // eax
  __int64 v764; // rcx
  __int64 v765; // rdx
  __int64 v766; // rcx
  __int64 v767; // r8
  unsigned __int8 v768; // r14
  unsigned __int64 v769; // rbx
  __int64 v770; // r12
  unsigned __int64 v771; // r15
  unsigned __int64 v772; // rsi
  int v773; // eax
  __int64 v774; // r8
  __int16 v775; // ax
  __int64 v776; // rcx
  int (__fastcall *v777)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, unsigned __int64, __int64); // rax
  __int64 v778; // rax
  __int64 v779; // rax
  unsigned __int8 v780; // dl
  unsigned __int64 v781; // r10
  unsigned __int64 v782; // r11
  __int64 v783; // r15
  unsigned __int64 v784; // r9
  _QWORD *v785; // rsi
  __int64 v786; // r9
  _QWORD *v787; // r10
  const char *v788; // rax
  int v789; // r11d
  __int64 v790; // r14
  unsigned __int64 v791; // r8
  unsigned int v792; // ebx
  __int64 v793; // rax
  __int64 v794; // r8
  unsigned __int128 v795; // rax
  unsigned int v796; // r9d
  unsigned __int64 v797; // rax
  __int64 v798; // rax
  unsigned __int64 i14; // rax
  unsigned int v800; // r10d
  const char *v801; // rsi
  unsigned __int8 v802; // r8
  unsigned int v803; // r9d
  unsigned __int64 v804; // r11
  unsigned __int64 v805; // rbx
  unsigned __int64 v806; // rcx
  const char *v807; // r9
  int v808; // ebx
  const char *v809; // rax
  __int64 v810; // r14
  const char *v811; // rcx
  unsigned __int64 v812; // r8
  unsigned int v813; // r11d
  __int64 v814; // rdx
  __int64 v815; // rax
  __int64 v816; // r8
  signed __int64 v817; // rcx
  __int64 v818; // rdx
  unsigned int v819; // r10d
  unsigned __int64 v820; // rdx
  __int64 v821; // rax
  unsigned __int64 i15; // rax
  __int64 v823; // rax
  _QWORD *v824; // rcx
  int v825; // edx
  __int64 v826; // r8
  char v827; // al
  __int64 v828; // rax
  __int64 v829; // rcx
  _QWORD *v830; // rsi
  _QWORD *v831; // r9
  int v832; // r11d
  const char *v833; // rax
  __int64 v834; // r14
  unsigned int v835; // r10d
  unsigned __int64 v836; // rbx
  __int64 v837; // rdx
  __int64 v838; // rax
  __int64 v839; // rbx
  unsigned __int64 v840; // rcx
  __int64 v841; // rdx
  unsigned int v842; // r8d
  unsigned __int64 v843; // rdx
  __int64 v844; // rax
  unsigned __int64 i12; // rax
  unsigned int v846; // ebx
  BOOL v847; // r15d
  __int64 v848; // rcx
  __int64 v849; // rdx
  __int64 v850; // r8
  unsigned __int8 v851; // r12
  unsigned __int64 v852; // rsi
  unsigned __int64 v853; // r13
  unsigned __int64 v854; // r14
  int v855; // eax
  unsigned int v856; // r9d
  __int64 v857; // rax
  const char *v858; // r14
  const char *v859; // r10
  int v860; // ebx
  const char *v861; // rax
  __int64 v862; // rsi
  const char *v863; // rcx
  unsigned __int64 v864; // r8
  unsigned int v865; // r11d
  __int64 v866; // rdx
  __int64 v867; // rax
  __int64 v868; // r8
  signed __int64 v869; // rcx
  __int64 v870; // rdx
  unsigned int v871; // r9d
  unsigned __int64 v872; // rdx
  __int64 v873; // rax
  unsigned __int64 i13; // rax
  int v875; // eax
  __int64 v876; // rcx
  __int64 v877; // rdx
  unsigned int v878; // r8d
  _QWORD *v879; // rsi
  __int64 v880; // r8
  _QWORD *v881; // r9
  const char *v882; // rax
  int v883; // r10d
  unsigned __int64 v884; // r14
  unsigned int v885; // r11d
  unsigned __int64 v886; // rbx
  __int64 v887; // rdx
  __int64 v888; // rax
  __int64 v889; // rbx
  unsigned __int128 v890; // rax
  char v891; // r10
  __int64 v892; // r8
  unsigned __int64 v893; // rdx
  __int64 v894; // rax
  unsigned __int64 m; // rax
  unsigned int v896; // ebx
  BOOL v897; // r15d
  __int64 v898; // rcx
  __int64 v899; // rdx
  unsigned __int8 v900; // r12
  unsigned __int64 v901; // rsi
  unsigned __int64 v902; // r13
  unsigned __int64 v903; // r14
  int v904; // eax
  int v905; // eax
  __int64 v906; // rcx
  __int64 v907; // rcx
  unsigned __int8 v908; // r14
  __int64 v909; // rdx
  unsigned int *v910; // rcx
  unsigned int *v911; // rbx
  char v912; // r15
  unsigned __int64 v913; // r12
  __int64 v914; // r8
  __int64 *v915; // r9
  unsigned int *v916; // r10
  __int64 v917; // rcx
  __int64 v918; // rax
  __int64 v919; // rax
  __int64 v920; // rcx
  unsigned __int8 v921; // r14
  unsigned int *v922; // rcx
  unsigned int *v923; // rbx
  unsigned __int64 v924; // rax
  unsigned __int64 v925; // rsi
  unsigned __int64 v926; // rcx
  unsigned __int64 v927; // rdx
  unsigned int v928; // edx
  unsigned int v929; // ecx
  int v930; // edx
  unsigned __int64 v931; // rbx
  unsigned __int64 n; // rsi
  _QWORD *v933; // rsi
  __int64 v934; // r8
  _QWORD *v935; // r9
  const char *v936; // rax
  int v937; // r11d
  __int64 v938; // r14
  unsigned __int64 v939; // rbx
  unsigned int v940; // r10d
  __int64 v941; // rdx
  __int64 v942; // rax
  __int64 v943; // rbx
  unsigned __int64 v944; // rcx
  __int64 v945; // rdx
  unsigned int v946; // r8d
  unsigned __int64 v947; // rdx
  __int64 v948; // rax
  unsigned __int64 ii; // rax
  unsigned __int64 v950; // rcx
  unsigned int v951; // ebx
  __int64 v952; // rdx
  __int64 v953; // r8
  unsigned __int8 v954; // r15
  unsigned __int64 v955; // rsi
  __int64 v956; // r13
  unsigned __int64 v957; // r12
  unsigned __int64 v958; // r14
  int v959; // eax
  int v960; // eax
  __int64 v961; // r8
  __int64 v962; // rcx
  __int64 v963; // rdx
  __int64 v964; // rax
  int v965; // eax
  __int64 v966; // rcx
  __int64 v967; // rcx
  __int64 v968; // rdx
  __int64 v969; // rax
  int v970; // eax
  __int64 v971; // rcx
  int v972; // eax
  unsigned __int64 v973; // rcx
  __int64 v974; // rcx
  _QWORD *v975; // rsi
  __int64 v976; // r8
  _QWORD *v977; // r9
  const char *v978; // rax
  int v979; // r10d
  __int64 v980; // r14
  unsigned __int64 v981; // rbx
  unsigned int v982; // r11d
  __int64 v983; // rdx
  __int64 v984; // rax
  __int64 v985; // rbx
  unsigned __int128 v986; // rax
  unsigned int v987; // r8d
  unsigned __int64 v988; // rdx
  __int64 v989; // rax
  unsigned __int64 jj; // rax
  unsigned int v991; // ebx
  BOOL v992; // r15d
  __int64 v993; // rcx
  __int64 v994; // rdx
  __int64 v995; // r8
  unsigned __int8 v996; // r12
  unsigned __int64 v997; // rsi
  unsigned __int64 v998; // r13
  int v999; // eax
  int v1000; // eax
  unsigned __int64 v1001; // rbx
  __int64 (__fastcall *v1002)(_QWORD); // rax
  int v1003; // r12d
  __int64 v1004; // rax
  unsigned __int64 *v1005; // r15
  __int64 v1006; // r14
  char *v1007; // rsi
  unsigned __int8 v1008; // bl
  unsigned __int8 v1009; // r13
  char *v1010; // r10
  char v1011; // dl
  char v1012; // r9
  __int64 v1013; // r8
  unsigned __int64 v1014; // rcx
  char v1015; // al
  unsigned __int64 v1016; // rdx
  unsigned __int64 v1017; // rcx
  unsigned __int64 *v1018; // rbx
  __int64 v1019; // r15
  unsigned __int64 v1020; // rcx
  __int64 v1021; // rdx
  unsigned __int64 v1022; // r12
  unsigned __int64 v1023; // rcx
  _QWORD *v1024; // rcx
  __int64 v1025; // r8
  char v1026; // al
  char *v1027; // rsi
  unsigned __int8 v1028; // bl
  unsigned __int8 v1029; // r13
  char *v1030; // r10
  char v1031; // dl
  char v1032; // r9
  __int64 v1033; // r8
  unsigned __int64 v1034; // rcx
  unsigned __int64 v1035; // rcx
  unsigned __int64 *v1036; // rbx
  __int64 v1037; // r15
  unsigned __int64 v1038; // rcx
  __int64 v1039; // rdx
  unsigned __int64 v1040; // r12
  unsigned __int64 v1041; // rcx
  _QWORD *v1042; // rcx
  __int64 v1043; // r8
  char v1044; // al
  __int64 (__fastcall *v1045)(__int64); // rax
  __int64 v1046; // r14
  unsigned __int8 v1047; // bl
  unsigned __int8 v1048; // r12
  __int64 v1049; // r13
  int *v1050; // r10
  char v1051; // dl
  char v1052; // r9
  __int64 v1053; // r8
  unsigned __int64 v1054; // rcx
  unsigned __int64 *v1055; // rsi
  unsigned __int64 v1056; // rcx
  unsigned __int64 *v1057; // rbx
  char *v1058; // rsi
  __int64 v1059; // rdx
  unsigned __int64 v1060; // r15
  unsigned __int64 v1061; // rcx
  _QWORD *v1062; // rcx
  int v1063; // edx
  __int64 v1064; // r8
  char v1065; // al
  int v1066; // ecx
  __int64 v1067; // r10
  __int64 v1068; // r8
  unsigned __int64 v1069; // rcx
  __int64 v1070; // r9
  _DWORD *v1071; // r11
  unsigned __int64 v1072; // rbx
  unsigned int v1073; // esi
  unsigned __int64 v1074; // r10
  char *v1075; // rdx
  __int64 v1076; // rax
  unsigned int v1077; // eax
  unsigned __int64 v1078; // r12
  __int64 v1079; // r9
  _QWORD *v1080; // r10
  int v1081; // ebx
  const char *v1082; // rax
  unsigned __int64 v1083; // rsi
  __int64 v1084; // r15
  unsigned __int64 v1085; // r8
  unsigned int v1086; // r11d
  __int64 v1087; // rax
  __int64 v1088; // r8
  unsigned __int128 v1089; // rax
  unsigned int v1090; // r9d
  unsigned __int64 v1091; // rax
  __int64 v1092; // rax
  unsigned __int64 kk; // rax
  char v1094; // cl
  unsigned int v1095; // r13d
  unsigned __int8 v1096; // r14
  unsigned __int64 v1097; // rbx
  __int64 v1098; // r12
  unsigned __int64 v1099; // r15
  unsigned __int64 v1100; // rsi
  int v1101; // eax
  __int64 v1102; // r9
  unsigned int v1103; // esi
  unsigned __int64 v1104; // rcx
  __int64 v1105; // r15
  unsigned int *v1106; // rdx
  unsigned __int64 v1107; // r14
  __int64 v1108; // r8
  _QWORD *v1109; // r9
  int v1110; // r10d
  const char *v1111; // rax
  unsigned __int64 v1112; // rsi
  __int64 v1113; // r12
  unsigned __int64 v1114; // rbx
  unsigned int v1115; // r11d
  __int64 v1116; // rax
  __int64 v1117; // rbx
  unsigned __int128 v1118; // rax
  unsigned int v1119; // r8d
  unsigned __int64 v1120; // rax
  __int64 v1121; // rax
  unsigned __int64 mm; // rax
  unsigned int v1123; // ecx
  unsigned int v1124; // ebx
  __int64 v1125; // r8
  unsigned __int8 v1126; // r15
  unsigned __int64 v1127; // rsi
  __int64 v1128; // r13
  unsigned __int64 v1129; // r12
  unsigned __int64 v1130; // r14
  int v1131; // eax
  __int64 v1132; // rcx
  __int64 v1133; // rax
  _QWORD *v1134; // rsi
  __int64 v1135; // r8
  _QWORD *v1136; // r9
  const char *v1137; // rax
  int v1138; // r11d
  __int64 v1139; // r14
  unsigned __int64 v1140; // rbx
  unsigned int i; // r10d
  __int64 v1142; // rax
  __int64 v1143; // rbx
  unsigned __int64 v1144; // rcx
  __int64 v1145; // rdx
  __int64 v1146; // r8
  unsigned __int64 v1147; // rax
  __int64 v1148; // rax
  unsigned __int64 k; // rax
  unsigned int v1150; // ebx
  BOOL v1151; // r15d
  __int64 v1152; // rcx
  __int64 v1153; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v1155; // rsi
  unsigned __int64 v1156; // r13
  unsigned __int64 v1157; // r14
  int v1158; // eax
  __int64 **v1159; // r15
  unsigned int v1160; // eax
  __int64 v1161; // r13
  char *v1162; // rbx
  int v1163; // r12d
  __int64 v1164; // r14
  __int64 v1165; // rsi
  _QWORD *v1166; // rcx
  int v1167; // edx
  __int64 v1168; // r8
  char v1169; // al
  __int64 v1170; // rax
  __int64 v1171; // rax
  int v1172; // eax
  __int64 v1173; // rcx
  volatile signed __int32 *v1174; // rcx
  _QWORD *v1175; // rsi
  __int64 v1176; // r8
  _QWORD *v1177; // r9
  const char *v1178; // rax
  int v1179; // r10d
  __int64 v1180; // r14
  unsigned __int64 v1181; // rbx
  unsigned int i1; // r11d
  __int64 v1183; // rax
  __int64 v1184; // rbx
  unsigned __int128 v1185; // rax
  __int64 v1186; // r8
  unsigned __int64 v1187; // rax
  __int64 v1188; // rax
  unsigned __int64 i2; // rax
  unsigned int v1190; // ebx
  BOOL v1191; // r15d
  __int64 v1192; // rcx
  __int64 v1193; // rdx
  unsigned __int8 v1194; // r12
  unsigned __int64 v1195; // rsi
  unsigned __int64 v1196; // r13
  unsigned __int64 v1197; // r14
  int v1198; // eax
  int v1199; // eax
  unsigned __int64 v1200; // rcx
  __int64 v1201; // rcx
  unsigned int v1202; // edx
  int v1203; // ecx
  unsigned __int64 v1204; // rbx
  unsigned __int64 i3; // rsi
  _QWORD *v1206; // rsi
  __int64 v1207; // r8
  _QWORD *v1208; // r9
  const char *v1209; // rax
  int v1210; // r10d
  __int64 v1211; // r14
  unsigned __int64 v1212; // rbx
  unsigned int i4; // r11d
  __int64 v1214; // rax
  __int64 v1215; // rbx
  unsigned __int128 v1216; // rax
  unsigned int v1217; // r8d
  unsigned __int64 v1218; // rax
  __int64 v1219; // rax
  unsigned __int64 i5; // rax
  unsigned int v1221; // edx
  unsigned int v1222; // ebx
  __int64 v1223; // rcx
  __int64 v1224; // r8
  unsigned __int8 v1225; // r15
  unsigned __int64 v1226; // rsi
  __int64 v1227; // r13
  unsigned __int64 v1228; // r12
  int v1229; // eax
  __int64 v1230; // rsi
  __int64 v1231; // rcx
  int v1232; // eax
  unsigned __int64 v1233; // rcx
  unsigned int v1234; // ebx
  __int64 v1235; // rax
  _QWORD *v1236; // rcx
  int v1237; // edx
  __int64 v1238; // r8
  char v1239; // al
  __int64 v1240; // rcx
  int v1241; // esi
  __int64 v1242; // r14
  unsigned int v1243; // ecx
  char v1244; // bl
  volatile signed __int8 **v1245; // r8
  volatile signed __int8 *v1246; // rdx
  unsigned __int8 v1247; // bl
  int v1248; // ecx
  unsigned int v1249; // eax
  unsigned int v1250; // ecx
  int v1251; // edx
  unsigned __int64 v1252; // rbx
  unsigned __int64 v1253; // rsi
  BOOL v1254; // esi
  _QWORD *v1255; // rsi
  __int64 v1256; // r8
  _QWORD *v1257; // r9
  const char *v1258; // rax
  int v1259; // r10d
  __int64 v1260; // r14
  unsigned __int64 v1261; // rbx
  unsigned int i6; // r11d
  __int64 v1263; // rax
  __int64 v1264; // rbx
  unsigned __int128 v1265; // rax
  unsigned int v1266; // r8d
  unsigned __int64 v1267; // rax
  __int64 v1268; // rax
  unsigned __int64 i7; // rax
  unsigned int v1270; // edx
  unsigned int v1271; // ebx
  __int64 v1272; // rcx
  __int64 v1273; // r8
  unsigned __int8 v1274; // r15
  unsigned __int64 v1275; // rsi
  __int64 v1276; // r13
  unsigned __int64 v1277; // r12
  unsigned __int64 v1278; // r14
  int v1279; // eax
  __int64 v1280; // r13
  __int64 v1281; // rax
  _DWORD *v1282; // r15
  _DWORD *v1283; // rax
  unsigned int v1284; // r14d
  int v1285; // eax
  unsigned __int64 v1286; // rcx
  __int64 v1287; // rcx
  _QWORD *v1288; // rsi
  __int64 v1289; // r8
  _QWORD *v1290; // r9
  const char *v1291; // rax
  int v1292; // r11d
  __int64 v1293; // r14
  unsigned __int64 v1294; // rbx
  unsigned int v1295; // r10d
  __int64 v1296; // rdx
  __int64 v1297; // rax
  __int64 v1298; // rbx
  unsigned __int64 v1299; // rcx
  __int64 v1300; // rdx
  unsigned int v1301; // r8d
  unsigned __int64 v1302; // rdx
  __int64 v1303; // rax
  unsigned __int64 i8; // rax
  unsigned int v1305; // ebx
  BOOL v1306; // r15d
  __int64 v1307; // rcx
  __int64 v1308; // rdx
  __int64 v1309; // r8
  unsigned __int8 v1310; // r12
  unsigned __int64 v1311; // rsi
  unsigned __int64 v1312; // r13
  int v1313; // eax
  int v1314; // edi
  unsigned int v1315; // ecx
  unsigned int v1316; // r11d
  unsigned int v1317; // r12d
  int v1318; // ecx
  __int16 v1319; // ax
  _QWORD *v1320; // rcx
  unsigned __int8 *v1321; // r8
  __int128 v1322; // xmm1
  int v1323; // r10d
  unsigned __int8 *v1324; // r9
  __int64 v1325; // rdx
  __int64 v1326; // rax
  __int64 v1327; // r8
  _DWORD *v1328; // rax
  __int64 *v1329; // r9
  unsigned int v1330; // r8d
  __int64 *v1331; // r10
  __int64 v1332; // rcx
  __int64 v1333; // rax
  __int64 v1334; // rdx
  __int64 v1335; // rax
  unsigned __int8 *v1336; // r8
  int v1337; // r10d
  unsigned __int8 *v1338; // r9
  __int64 v1339; // rdx
  __int64 v1340; // rax
  unsigned __int8 *v1341; // r8
  int v1342; // r10d
  unsigned __int8 *v1343; // r9
  __int64 v1344; // rdx
  __int64 v1345; // rax
  int v1346; // eax
  __int64 v1347; // rbx
  int v1348; // eax
  int *v1349; // rcx
  unsigned __int64 v1350; // rax
  __int64 v1351; // rcx
  unsigned __int8 v1352; // bl
  int v1353; // eax
  unsigned int v1354; // edx
  int v1355; // ecx
  __int64 v1356; // rbx
  unsigned __int64 v1357; // rsi
  __int64 v1358; // rbx
  unsigned __int64 v1359; // rbx
  __int64 v1360; // rcx
  unsigned __int8 v1361; // r15
  __int64 v1362; // rdx
  unsigned int *v1363; // rcx
  unsigned int *v1364; // rbx
  char v1365; // r12
  unsigned __int64 v1366; // r14
  __int64 v1367; // r8
  __int64 *v1368; // r9
  unsigned int *v1369; // r10
  __int64 v1370; // rcx
  __int64 v1371; // rax
  __int64 v1372; // rax
  int v1373; // ecx
  unsigned __int64 v1374; // rbx
  unsigned __int64 v1375; // rsi
  __int64 v1376; // r9
  __int64 v1377; // r8
  unsigned __int64 v1378; // rcx
  unsigned int *v1379; // rbx
  unsigned int *v1380; // r12
  unsigned int *v1381; // rsi
  unsigned __int64 v1382; // r15
  unsigned int v1383; // r14d
  _QWORD *v1384; // r8
  int v1385; // r10d
  const char *v1386; // rax
  __int64 v1387; // r11
  unsigned __int64 v1388; // rcx
  unsigned __int64 v1389; // r13
  unsigned int v1390; // r9d
  __int64 v1391; // rdx
  __int64 v1392; // rax
  __int64 v1393; // r13
  unsigned __int64 v1394; // rcx
  __int64 v1395; // rdx
  unsigned int v1396; // edx
  unsigned __int64 v1397; // r9
  __int64 v1398; // rax
  unsigned __int64 i9; // rax
  _QWORD *v1400; // r11
  __int64 v1401; // r8
  _QWORD *v1402; // r9
  const char *v1403; // rax
  int v1404; // esi
  __int64 v1405; // r14
  unsigned __int64 v1406; // rbx
  unsigned int v1407; // r10d
  __int64 v1408; // rdx
  __int64 v1409; // rax
  __int64 v1410; // rbx
  unsigned __int128 v1411; // rax
  unsigned int v1412; // r8d
  unsigned __int64 v1413; // rdx
  __int64 v1414; // rax
  unsigned __int64 i10; // rax
  unsigned int v1416; // edx
  unsigned int v1417; // ebx
  __int64 v1418; // rcx
  __int64 v1419; // r8
  unsigned __int8 v1420; // r15
  unsigned __int64 v1421; // rsi
  __int64 v1422; // r13
  unsigned __int64 v1423; // r12
  unsigned __int64 v1424; // r14
  int v1425; // eax
  int v1426; // eax
  __int64 v1427; // rcx
  _QWORD *v1428; // rsi
  __int64 v1429; // r8
  _QWORD *v1430; // r9
  const char *v1431; // rax
  int v1432; // r11d
  __int64 v1433; // r14
  unsigned __int64 v1434; // rbx
  unsigned int v1435; // r10d
  __int64 v1436; // rdx
  __int64 v1437; // rax
  __int64 v1438; // rbx
  unsigned __int128 v1439; // rax
  unsigned int v1440; // r8d
  unsigned __int64 v1441; // rdx
  __int64 v1442; // rax
  unsigned __int64 i11; // rax
  unsigned int v1444; // ebx
  BOOL v1445; // r15d
  __int64 v1446; // rcx
  __int64 v1447; // rdx
  __int64 v1448; // r8
  unsigned __int8 v1449; // r12
  unsigned __int64 v1450; // rsi
  unsigned __int64 v1451; // r13
  int v1452; // eax
  int v1453; // eax
  __int64 v1454; // rcx
  unsigned int v1455; // r13d
  _BYTE *v1456; // rbx
  char *v1457; // rsi
  char v1458; // cl
  volatile signed __int32 *v1459; // rcx
  __int64 CurrentPrcb; // rdx
  _QWORD *v1461; // rax
  int v1462; // ecx
  __int128 v1463; // xmm0
  unsigned __int64 v1464; // rcx
  BOOL v1465; // r9d
  int *v1466; // rcx
  unsigned int v1467; // ecx
  __int64 v1468; // rdx
  unsigned __int8 v1469; // r14
  unsigned __int64 v1470; // rbx
  __int64 v1471; // r12
  unsigned __int64 v1472; // r15
  unsigned __int64 v1473; // rsi
  int v1474; // eax
  bool v1475; // zf
  __int64 v1476; // rcx
  unsigned __int8 v1477; // r14
  __int64 v1478; // rdx
  unsigned int *v1479; // rcx
  unsigned int *v1480; // rbx
  char v1481; // r15
  unsigned __int64 v1482; // r12
  __int64 v1483; // r8
  __int64 *v1484; // r9
  unsigned int *v1485; // r10
  __int64 v1486; // rcx
  __int64 v1487; // rax
  __int64 v1488; // rax
  __int64 v1489; // rax
  __int64 v1490; // r9
  _QWORD *v1491; // rbx
  int v1492; // r11d
  _QWORD *v1493; // r10
  __int64 v1494; // r14
  const char *v1495; // rax
  __int64 v1496; // r8
  unsigned int nn; // esi
  __int64 v1498; // rax
  __int64 v1499; // r8
  unsigned __int128 v1500; // rax
  unsigned int v1501; // r9d
  unsigned __int64 v1502; // rax
  __int64 v1503; // rax
  __int64 v1504; // rcx
  int v1505; // eax
  __int64 v1506; // rcx
  int v1507; // r10d
  int v1508; // r10d
  __int64 v1509; // r8
  unsigned int v1510; // ebx
  unsigned __int64 v1511; // rax
  unsigned int v1512; // esi
  unsigned __int64 v1513; // rax
  __int64 v1514; // r8
  unsigned __int64 v1515; // rdx
  __int64 v1516; // r8
  unsigned __int64 v1517; // rdx
  _QWORD *v1518; // r14
  __int64 v1519; // rsi
  __int64 v1520; // rdx
  _QWORD *v1521; // rax
  int v1522; // ecx
  __int128 v1523; // xmm0
  unsigned __int64 v1524; // rcx
  unsigned __int16 Ldtr; // r15
  unsigned __int16 Tr; // ax
  unsigned __int64 v1527; // rdx
  int v1528; // r10d
  unsigned __int16 v1529; // r12
  unsigned __int64 v1530; // r11
  _QWORD *v1531; // r8
  const char *v1532; // rcx
  unsigned __int64 v1533; // rbx
  unsigned int v1534; // r9d
  __int64 v1535; // rdx
  __int64 v1536; // rax
  __int64 v1537; // rbx
  unsigned __int64 v1538; // rcx
  __int64 v1539; // rdx
  unsigned int v1540; // esi
  __int64 v1541; // rax
  unsigned __int64 i18; // rax
  unsigned int v1543; // ebx
  _QWORD *v1544; // rcx
  int v1545; // edx
  __int64 v1546; // r8
  char v1547; // al
  __int64 v1548; // rax
  int v1549; // eax
  __int64 v1550; // rcx
  __int64 v1551; // rdx
  void (__fastcall *v1552)(unsigned __int64, __int64); // rax
  __int64 v1553; // rcx
  unsigned int v1554; // r10d
  __int64 v1555; // rcx
  unsigned __int64 v1556; // r8
  __int64 v1557; // rsi
  unsigned __int64 v1558; // r13
  __int64 v1559; // r15
  __int64 v1560; // r12
  unsigned __int8 v1561; // r14
  __int16 v1562; // r9
  int v1563; // eax
  __int64 v1564; // rcx
  unsigned __int64 v1565; // rbx
  __int64 v1566; // rdx
  bool v1567; // cf
  __int64 v1568; // r15
  __int64 v1569; // rax
  __int64 v1570; // rax
  __int64 v1571; // r12
  unsigned __int64 v1572; // rdx
  __int64 v1573; // rax
  __int16 *v1574; // rax
  unsigned int *v1575; // rax
  __int64 v1576; // rcx
  __int64 v1577; // rcx
  unsigned __int64 v1578; // rbx
  unsigned __int64 v1579; // rdx
  struct _KPRCB *v1580; // r8
  _QWORD *v1581; // r14
  _QWORD *v1582; // r8
  int v1583; // ebx
  const char *v1584; // rax
  int v1585; // r9d
  __int64 v1586; // r11
  int v1587; // r10d
  unsigned __int64 v1588; // rsi
  __int64 v1589; // rax
  __int64 v1590; // rsi
  _QWORD *v1591; // r8
  __int64 v1592; // rsi
  unsigned __int128 v1593; // rax
  int v1594; // edx
  int v1595; // r15d
  __int64 v1596; // rax
  __int64 v1597; // rax
  unsigned __int64 i19; // rax
  unsigned int *v1599; // rax
  __int64 v1600; // rdx
  __int64 v1601; // rax
  unsigned int v1602; // esi
  _QWORD *v1603; // rdx
  int v1604; // r9d
  unsigned __int64 v1605; // rbx
  const char *v1606; // rax
  __int64 v1607; // rax
  int v1608; // r8d
  __int64 v1609; // rax
  unsigned __int64 i20; // rax
  unsigned int v1611; // ebx
  int *v1612; // r9
  __int64 v1613; // r8
  __int64 v1614; // rdx
  int v1615; // ecx
  unsigned __int64 v1616; // rcx
  __int64 v1617; // rcx
  __int64 v1618; // rax
  __int64 v1619; // rdx
  int v1620; // eax
  __int64 v1621; // rbx
  __int64 v1622; // rbx
  int v1623; // eax
  __int64 Next; // r13
  __int64 v1625; // rbx
  __int64 v1626; // rdi
  _SLIST_ENTRY *v1627; // r14
  struct _KPRCB *v1628; // rdx
  unsigned __int64 v1629; // rsi
  __int64 v1630; // r9
  __int64 v1631; // r15
  __int64 v1632; // rax
  __int64 v1633; // r9
  unsigned __int64 v1634; // r12
  unsigned __int64 v1635; // r10
  unsigned __int64 v1636; // r14
  unsigned int v1637; // r8d
  _QWORD *v1638; // rdx
  unsigned __int64 v1639; // rcx
  unsigned __int64 v1640; // rax
  __int64 v1641; // rdi
  _QWORD *v1642; // rcx
  char *v1643; // r8
  int v1644; // r11d
  unsigned __int64 v1645; // rbx
  signed __int64 v1646; // r8
  unsigned int v1647; // ebx
  unsigned int v1648; // ebx
  unsigned __int8 EffectiveIrql; // al
  unsigned int v1650; // ebx
  unsigned __int8 v1651; // al
  unsigned int v1652; // ebx
  unsigned __int8 v1653; // al
  ULONG_PTR v1654; // r8
  __int64 v1655; // r9
  int v1656; // ecx
  int v1657; // ecx
  int v1658; // ecx
  int v1659; // ecx
  int v1660; // ecx
  volatile signed __int32 *v1661; // rax
  unsigned int v1662; // ebx
  unsigned __int8 v1663; // al
  signed __int32 v1664[8]; // [rsp+A00h] [rbp+A00h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A20h] [rbp+A20h]
  __int64 v1666; // [rsp+A28h] [rbp+A28h]
  __int64 v1667; // [rsp+A30h] [rbp+A30h]
  __int64 v1668; // [rsp+A38h] [rbp+A38h]
  _BYTE v1669[2560]; // [rsp+AD0h] [rbp+AD0h] BYREF

  v2 = (unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL;
  v3 = a2;
  if ( !__29 )
    KeBugCheck(0x33u);
  v5 = Src;
  _InterlockedOr(v1664, 0);
  if ( !v5 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v3 + 16)
    || *(_QWORD *)(v3 + 24)
    || *(_QWORD *)(v3 + 32)
    || *(_DWORD *)(v3 + 4) >= v5[509] )
  {
    return 3221225485LL;
  }
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 20) & 1;
  v9 = *(_DWORD *)(a1 + 52);
  if ( v7 )
  {
    if ( v7 <= 0 )
      return 3221225485LL;
    if ( v7 > 4 )
    {
      if ( v7 == 5 && !v9 )
      {
        if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
        {
          v1648 = KeAreAllApcsDisabled();
          EffectiveIrql = KeGetEffectiveIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)EffectiveIrql << 16) | 0xFF, v1648, 0LL, 0LL);
        }
        goto LABEL_34;
      }
      return 3221225485LL;
    }
    if ( v9 != 16 || !KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    v10 = *(_DWORD *)(a1 + 20);
    v11 = KeGetEffectiveIrql();
    if ( v10 >= 0 )
    {
      if ( v11 || KeAreApcsDisabled() )
      {
        v1652 = KeAreAllApcsDisabled();
        v1653 = KeGetEffectiveIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1653 << 16) | 0xFF, v1652, 0LL, 0LL);
      }
    }
    else if ( v11 > 1u )
    {
      v1650 = KeAreAllApcsDisabled();
      v1651 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1651 << 16) | 0xFF, v1650, 0LL, 0LL);
    }
  }
  else
  {
    if ( v9 != 16 || (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) - 1LL) > 0xFFFFFFFE )
      return 3221225485LL;
    if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
    {
      v1662 = KeAreAllApcsDisabled();
      v1663 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1663 << 16) | 0xFF, v1662, 0LL, 0LL);
    }
  }
LABEL_34:
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = 2752LL;
  if ( !v8
    || (v12 = *((_QWORD *)v5 + 332) + 2759LL,
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = v12,
        v12 == 2752) )
  {
    ++dword_140406714;
    v14 = RtlpInterlockedPopEntrySList(&Lookaside);
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = v14;
    v15 = v14;
    if ( v14 )
      goto LABEL_40;
    ++dword_140406718;
    PoolWithTag = (_SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140406730)(
                                    (unsigned int)dword_140406724,
                                    (unsigned int)dword_14040672C,
                                    (unsigned int)dword_140406728);
  }
  else
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x746E494Bu);
  }
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = PoolWithTag;
  v15 = PoolWithTag;
LABEL_40:
  if ( !v15 )
    return 3221225626LL;
  v16 = v15 + 2;
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v15 + 2;
  memmove(&v15[2], v5, 0xA70uLL);
  *((_QWORD *)&v15[166].Next + 1) = v5;
  v15[167].Next = v15 + 169;
  j = 0LL;
  *((_DWORD *)&v15[130].Next + 2) = *(_DWORD *)v3;
  *(_SLIST_ENTRY **)((char *)&v15[130].Next + 12) = (_SLIST_ENTRY *)*(unsigned int *)(v3 + 4);
  *((_DWORD *)&v15[131].Next + 2) = 0;
  HIDWORD(v15[153].Next) |= 0x1000u;
  if ( v8 )
    *((_QWORD *)&v15[167].Next + 1) = ((unsigned __int64)&v15[172].Next + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v16;
  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 0;
  if ( v19 > 0x80000 )
    v19 = 0x80000;
  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) = 0;
  HIDWORD(v15[131].Next) = v19;
  if ( !v19 )
    v19 = 1;
  HIDWORD(v15[131].Next) = v19;
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) = a1;
  v20 = (__int64)&v15[2];
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x248) = v3;
  Next_low = LODWORD(v15[151].Next);
  if ( (_DWORD)Next_low == -1 )
    goto LABEL_59;
  v22 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v15[41].Next)(Next_low, v17, 6LL);
  if ( !v22 )
  {
    v22 = (*((__int64 (__fastcall **)(_QWORD))&v15[41].Next + 1))(0LL);
    if ( !v22 )
      goto LABEL_59;
  }
  v23 = (*((__int64 (__fastcall **)(__int64, unsigned __int64))&v15[42].Next + 1))(v22, v2 + 1632);
  if ( v23 >= 0 )
  {
    v15[152].Next = (_SLIST_ENTRY *)v22;
    v24 = ((__int64 (*)(void))v15[45].Next)();
    v25 = ((__int64 (__fastcall *)(__int64))v15[47].Next)(v24);
    if ( v25 )
    {
      ((void (__fastcall *)(__int64, __int64))v15[48].Next)(v24, v25);
      v26 = 0;
    }
    else
    {
      v26 = 4;
    }
    v23 = 0;
    HIDWORD(v15[153].Next) = v26 | HIDWORD(v15[153].Next) & 0xFFFFFFFB;
    LODWORD(v15[131].Next) += 0x10000;
  }
  else
  {
    ((void (__fastcall *)(__int64))v15[42].Next)(v22);
  }
  if ( v23 >= 0 )
  {
    v27 = 1LL;
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) = 1;
  }
  else
  {
LABEL_59:
    Next_high = HIDWORD(v15[153].Next);
    if ( (Next_high & 8) != 0 && (Next_high & 0x1000) == 0 )
    {
      v29 = __rdtsc();
      v30 = (__ROR8__(v29, 3) ^ v29) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C8) = *((_QWORD *)&v30 + 1);
      if ( (((unsigned __int8)v30 ^ BYTE8(v30)) & 3) == 0 )
      {
        v31 = __rdtsc();
        v32 = (__ROR8__(v31, 3) ^ v31) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D0) = *((_QWORD *)&v32 + 1);
        v33 = ((unsigned __int64)v32 ^ *((_QWORD *)&v32 + 1)) % 0xB;
        if ( (unsigned int)v33 > 5 )
        {
          v37 = v33 - 6;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                if ( v39 == 1 )
                {
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) = -1333354875;
                  v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) ^ 9, 33);
                }
                else
                {
                  v40 = __rdtsc();
                  v41 = __ROR8__(v40, 3);
                  v42 = (v41 ^ v40) * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D8) = *((_QWORD *)&v42 + 1);
                  v43 = (67117057 * (v41 ^ v40)) ^ DWORD2(v42);
                  v36 = ((((((v43 % 0x1A + 97) << 8) | ((v43 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v43 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v43 >> 10)
                                                                    - 26
                                                                    * ((unsigned int)((1321528399
                                                                                     * (unsigned __int64)(v43 >> 10)) >> 32) >> 3)
                                                                    + 97)) << 8) | ((v43 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = 1684422978;
                v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x170), 8);
              }
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x174) = -2100910376;
              v36 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x174), 7);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = 1314342514;
            v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) ^ 6, 24);
          }
        }
        else if ( (_DWORD)v33 == 5 )
        {
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = 680282605;
          v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x168), 5);
        }
        else if ( (_DWORD)v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1CC) = -1474152136;
                v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1CC) ^ 3, 15);
              }
              else
              {
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = 1728537748;
                v36 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0), 4);
              }
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) = -2051698419;
              v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8), 2);
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = -1297272415;
            v36 = __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x160), 1);
          }
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x164) = -795291432;
          v36 = __ROR4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x164), 6);
        }
        v44 = ((__int64 (__fastcall *)(__int64, _SLIST_ENTRY *, _QWORD))v15[17].Next)(512LL, v15[119].Next, v36);
        if ( v44 )
        {
          v61 = *(unsigned int *)((char *)&v15[111].Next->Next + *((_QWORD *)&v15[82].Next + 1));
          if ( (_DWORD)v61 )
          {
            v62 = __rdtsc();
            v63 = (__ROR8__(v62, 3) ^ v62) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E0) = *((_QWORD *)&v63 + 1);
            v61 = (*((_QWORD *)&v63 + 1) ^ (unsigned __int64)v63) % v61;
          }
          v64 = (*((__int64 (__fastcall **)(_QWORD))&v15[60].Next + 1))(0LL);
          if ( v64 )
          {
            do
            {
              if ( !(_DWORD)v61 )
                break;
              LODWORD(v61) = v61 - 1;
              v64 = (*((__int64 (__fastcall **)(__int64))&v15[60].Next + 1))(v64);
            }
            while ( v64 );
            v20 = (__int64)&v15[2];
            if ( v64 )
            {
              if ( (*((int (__fastcall **)(__int64))&v15[59].Next + 1))(v64) < 0 )
              {
                ((void (__fastcall *)(__int64))v15[61].Next)(v64);
                v64 = 0LL;
              }
              if ( v64 )
              {
                ((void (__fastcall *)(__int64, unsigned __int64))v15[69].Next)(v64, v2 + 1632);
                (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))&v15[29].Next + 1))(v64, v44, 0LL, 0LL);
                v65 = __rdtsc();
                v66 = (__ROR8__(v65, 3) ^ v65) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4E8) = *((_QWORD *)&v66 + 1);
                v67 = ((unsigned __int64)v66 ^ *((_QWORD *)&v66 + 1))
                    % ((unsigned int (__fastcall *)(__int64))v15[29].Next)(v44);
                _disable();
                v68 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + (unsigned __int64)v15[101].Next);
                _enable();
                ((void (__fastcall *)(__int64, unsigned __int64))v15[30].Next)(v68, v2 + 904);
                ((void (__fastcall *)(unsigned __int64, __int64))v15[28].Next)(v2 + 1552, v44);
                while ( (*((int (__fastcall **)(unsigned __int64, unsigned __int64))&v15[28].Next + 1))(
                          v2 + 264,
                          v2 + 1552) >= 0 )
                {
                  if ( !(_DWORD)v67 )
                  {
                    (*((void (__fastcall **)(unsigned __int64, _QWORD))&v15[27].Next + 1))(
                      v2 + 904,
                      *(unsigned int *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x108));
                    break;
                  }
                  LODWORD(v67) = v67 - 1;
                }
                (*((void (__fastcall **)(unsigned __int64, unsigned __int64))&v15[30].Next + 1))(v2 + 904, v2 + 1528);
                (*((void (__fastcall **)(__int64))&v15[17].Next + 1))(v44);
                v27 = 1LL;
                j = 0LL;
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 1;
                goto LABEL_86;
              }
            }
          }
          (*((void (__fastcall **)(__int64))&v15[17].Next + 1))(v44);
        }
        j = 0LL;
      }
    }
    v27 = 1LL;
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 0;
  }
LABEL_86:
  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = 0LL;
  v45 = (_BYTE *)(v2 + 304);
  v46 = 4;
  do
  {
    *v45++ = 0;
    --v46;
  }
  while ( v46 );
  v47 = *((_DWORD *)&v15[130].Next + 2);
  if ( SLODWORD(v15[131].Next) >= SHIDWORD(v15[131].Next) )
    goto LABEL_2439;
  v48 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D0);
  v49 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0);
  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC) = v48;
  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v49;
  while ( 1 )
  {
    v50 = *(_DWORD *)(v20 + 2416) & 0x110000;
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x184) = v47;
    if ( v50 != 1114112 )
      __writedr(7u, j);
    if ( v47 == *(_DWORD *)(v20 + 2036) )
      break;
    v51 = v20;
    v52 = j;
    if ( *(_QWORD *)(v20 + 2632) )
      v51 = *(_QWORD *)(v20 + 2632);
    v53 = (char *)(v51 + *(unsigned int *)(v51 + 2032));
    *(_QWORD *)v2 = v53;
    if ( *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) != (_DWORD)j
      && *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x12C) <= v47 )
    {
      v52 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x12C);
      v53 = (char *)(v51 + *(unsigned int *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x130));
      *(_QWORD *)v2 = v53;
    }
    if ( v52 != v47 )
    {
      v54 = v47 - v52;
      v55 = v54;
      v52 += v54;
      while ( 1 )
      {
        v56 = *(_DWORD *)v53;
        if ( *(int *)v53 > 12 )
          break;
        if ( v56 == 12 )
          goto LABEL_131;
        v57 = v56 - 1;
        if ( !v57 )
          goto LABEL_131;
        v58 = v57 - 6;
        if ( v58 )
        {
          v59 = v58 - 1;
          if ( !v59 )
          {
            v69 = *((unsigned __int16 *)v53 + 16);
LABEL_137:
            v60 = (v69 + 55) & 0xFFFFFFF8;
            goto LABEL_138;
          }
          if ( v59 != 2 )
          {
LABEL_134:
            v60 = 48LL;
            goto LABEL_138;
          }
          v60 = (unsigned int)(16 * (*((_DWORD *)v53 + 7) + 3));
        }
        else
        {
          v60 = (unsigned int)(24 * (*((_DWORD *)v53 + 6) + 2));
        }
LABEL_138:
        v53 += v60;
        if ( !--v55 )
        {
          v49 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
          v48 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC);
          *(_QWORD *)v2 = v53;
          goto LABEL_140;
        }
      }
      if ( v56 == 28 )
      {
        v69 = *((unsigned __int16 *)v53 + 20);
        goto LABEL_137;
      }
      if ( v56 == 30 )
      {
        v60 = (((*((_DWORD *)v53 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v53 + 20) + 2);
      }
      else
      {
        if ( v56 <= 32 )
          goto LABEL_134;
        if ( v56 <= 34 )
        {
          v60 = 20
              * (unsigned int)(((*((_DWORD *)v53 + 8) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v53 + 10) + 4095) >> 12)
              + 48;
        }
        else
        {
          if ( v56 != 43 )
            goto LABEL_134;
LABEL_131:
          v60 = 4 * (*((_DWORD *)v53 + 4) / 0xCu) + 48;
        }
      }
      v27 = 1LL;
      goto LABEL_138;
    }
LABEL_140:
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = 1;
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x12C) = v52;
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = (_DWORD)v53 - v51;
    if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
    {
      v70 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x240);
      v71 = j;
      v72 = *(int *)v53;
      v73 = *(_DWORD *)(v70 + 48);
      v74 = *(_QWORD *)(v70 + 56);
      if ( (int)v72 > 21 )
      {
        if ( (_DWORD)v72 == 24 )
          goto LABEL_184;
        if ( (int)v72 <= 27 )
          goto LABEL_178;
        if ( (int)v72 <= 29 )
          goto LABEL_184;
        if ( (unsigned int)v72 > 0x23 || (v76 = 0x940000000LL, !_bittest64(&v76, v72)) )
        {
          if ( (unsigned int)(v72 - 43) > 1 )
            goto LABEL_178;
        }
LABEL_172:
        if ( v73 )
          goto LABEL_178;
      }
      else
      {
        if ( (_DWORD)v72 == 21 )
          goto LABEL_157;
        if ( (v72 & 0x80000000) != 0LL )
          goto LABEL_178;
        if ( (int)v72 <= 1 )
          goto LABEL_172;
        if ( (int)v72 > 3 )
        {
          if ( (_DWORD)v72 != 7 )
          {
            if ( (_DWORD)v72 != 8 )
            {
              if ( (_DWORD)v72 != 9 && (unsigned int)(v72 - 11) > 3 )
                goto LABEL_178;
              goto LABEL_172;
            }
LABEL_184:
            if ( v73 != 5 )
              goto LABEL_178;
LABEL_185:
            v27 = 1LL;
            ++*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x248) + 8LL);
            goto LABEL_186;
          }
          v71 = *((_DWORD *)v53 + 7);
          v75 = v73 == 1;
LABEL_155:
          if ( !v75 )
            goto LABEL_178;
          goto LABEL_164;
        }
        if ( v73 )
        {
LABEL_157:
          if ( (_DWORD)v72 == 21 )
          {
            v71 = *((_DWORD *)v53 + 11);
            v75 = v73 == 4;
            goto LABEL_155;
          }
          if ( (unsigned int)(v72 - 2) <= 1 )
          {
            v71 = *((_DWORD *)v53 + 10);
            if ( (_DWORD)v72 == 3 && v73 != 2 )
              goto LABEL_178;
            if ( (_DWORD)v72 == 2 && v73 != 3 )
              goto LABEL_178;
          }
LABEL_164:
          if ( !(unsigned int)KeCheckProcessorGroupAffinity(v74, v71) )
            goto LABEL_178;
          goto LABEL_185;
        }
      }
      v77 = *((unsigned int *)v53 + 4);
      if ( !(_DWORD)v77 )
        goto LABEL_178;
      v78 = (unsigned __int64 *)(v2 + 680);
      v79 = *((_QWORD *)v53 + 1);
      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) = *(_QWORD *)v74;
      v80 = *(_DWORD *)(v74 + 8);
      v81 = j;
      *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x17C) = v80;
      v82 = v79 + v77;
      v83 = (unsigned int *)(v2 + 380);
      while ( v79 >= *v78 + *v83 || v82 <= *v78 )
      {
        ++v81;
        ++v78;
        ++v83;
        if ( v81 )
          goto LABEL_178;
      }
      goto LABEL_185;
    }
LABEL_186:
    v85 = *(_DWORD *)v53;
    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *(_DWORD *)v53;
    if ( v85 > 28 )
    {
      if ( v85 <= 37 )
      {
        if ( v85 == 37 )
        {
          if ( (*(_DWORD *)(v20 + 2420) & 2) != 0
            || !(*(unsigned __int8 (**)(void))(v20 + 1056))()
            || *(_DWORD *)(v20 + 2264) != (_DWORD)j )
          {
            goto LABEL_178;
          }
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = j;
          goto LABEL_446;
        }
        if ( v85 == 29 )
        {
          v1134 = (_QWORD *)*((_QWORD *)v53 + 1);
          v1135 = *((unsigned int *)v53 + 4);
          v1136 = v1134;
          *(_DWORD *)(v20 + 2064) += v1135;
          v1137 = (const char *)v1134;
          v1138 = *(_DWORD *)(v20 + 2044);
          v1139 = *(_QWORD *)(v20 + 2048);
          if ( v1134 < (_QWORD *)((char *)v1134 + v1135) )
          {
            do
            {
              _mm_prefetch(v1137, 0);
              v1137 += 64;
            }
            while ( v1137 < (const char *)v1134 + v1135 );
          }
          v1140 = *(_QWORD *)(v20 + 2048);
          for ( i = (unsigned int)v1135 >> 7; i; --i )
          {
            v1142 = 8LL;
            do
            {
              v1143 = v1136[1] ^ __ROL8__(*v1136 ^ v1140, v1138);
              v1136 += 2;
              v1140 = __ROL8__(v1143, v1138);
              --v1142;
            }
            while ( v1142 );
            v1144 = __ROL8__(v1139 ^ ((char *)v1136 - (char *)v1134), 17) ^ v1139 ^ ((char *)v1136 - (char *)v1134);
            v1145 = (v1144 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x450) = v1145;
            v1138 = ((unsigned __int8)(v1145 ^ v1144) ^ (unsigned __int8)v1138) & 0x3F;
            if ( !v1138 )
              LOBYTE(v1138) = 1;
          }
          v1146 = v1135 & 0x7F;
          if ( (unsigned int)v1146 >= 8 )
          {
            v1147 = (unsigned __int64)(unsigned int)v1146 >> 3;
            do
            {
              v1140 = __ROL8__(*v1136++ ^ v1140, v1138);
              v1146 = (unsigned int)(v1146 - 8);
              --v1147;
            }
            while ( v1147 );
          }
          for ( j = 0LL; (_DWORD)v1146; v1146 = (unsigned int)(v1146 - 1) )
          {
            v1148 = *(unsigned __int8 *)v1136;
            v1136 = (_QWORD *)((char *)v1136 + 1);
            v1140 = __ROL8__(v1148 ^ v1140, v1138);
          }
          for ( k = v1140; ; LODWORD(v1140) = k ^ v1140 )
          {
            k >>= 31;
            if ( !k )
              break;
          }
          v1150 = v1140 & 0x7FFFFFFF;
          v1151 = 0;
          if ( v1150 == *((_DWORD *)v53 + 5) )
            goto LABEL_1730;
          if ( !*(_DWORD *)v53 )
            v1151 = *((_DWORD *)v53 + 6) != 0;
          v1152 = *((unsigned int *)v53 + 4);
          v1153 = *((_QWORD *)v53 + 1);
          if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1155 = v1153 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1153 + v1152 - 1) | 0xFFF;
            v1156 = (v1153 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v1157 = CurrentIrql;
              while ( 1 )
              {
                v1158 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                          v1155,
                          0LL,
                          v1146,
                          v1136);
                if ( v1158 != -1073741267 )
                  break;
                if ( v1151 )
                  goto LABEL_1747;
                if ( CurrentIrql > 1u )
                  goto LABEL_1728;
                v1157 = CurrentIrql;
                __writecr8(CurrentIrql);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1158 < 0 )
                break;
LABEL_1728:
              v1146 = 4096LL;
              v1155 += 4096LL;
              v1156 += 4096LL;
              if ( v1156 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
              {
                __writecr8(v1157);
                v53 = *(char **)v2;
                j = 0LL;
LABEL_1730:
                v1159 = (__int64 **)*((_QWORD *)v53 + 1);
                v1160 = *((_DWORD *)v53 + 4) >> 4;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1159;
                if ( !v1160 )
                  goto LABEL_178;
                v1161 = v1160;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1160;
                do
                {
                  v1162 = *(char **)v2;
                  v1163 = 1;
                  v1164 = **v1159;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) = 0LL;
                  v1165 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))(v20 + 776))(
                            v1164,
                            v2 + 560,
                            v1146,
                            v1136);
                  if ( v1165 )
                  {
                    do
                    {
                      ++v1163;
                      if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 512))(v1165, v2 + 1112) )
                      {
                        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                        {
                          v1166 = *(_QWORD **)(v20 + 2640);
                          v1167 = 48;
                          v1168 = 6LL;
                          do
                          {
                            v1167 -= 8;
                            *v1166 = *(_QWORD *)v1162;
                            v1162 += 8;
                            ++v1166;
                            --v1168;
                          }
                          while ( v1168 );
                          if ( v1167 )
                          {
                            do
                            {
                              v1169 = *v1162++;
                              *(_BYTE *)v1166 = v1169;
                              v1166 = (_QWORD *)((char *)v1166 + 1);
                              --v1167;
                            }
                            while ( v1167 );
                            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          }
                          v1162 = *(char **)(v20 + 2640);
                        }
                        *((_QWORD *)v1162 + 3) = v1165;
                        *((_QWORD *)v1162 + 4) = v1164;
                        v1170 = *(_QWORD *)(v20 + 1408);
                        *(_QWORD *)v1170 = v1162;
                        *(_DWORD *)(v1170 + 16) = 48;
                        v1171 = *(_QWORD *)(v20 + 1408);
                        *(_QWORD *)(v1171 + 8) = v1165;
                        *(_DWORD *)(v1171 + 20) = 4096;
                        if ( !*(_DWORD *)(v20 + 2264) )
                        {
                          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v20 + 2280) = v1162 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v20 + 2288) = *(int *)v1162;
                          *(_QWORD *)(v20 + 2296) = 6LL;
                          *(_DWORD *)(v20 + 2264) = 1;
                        }
                      }
                      v1165 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 776))(v1164, v2 + 560);
                    }
                    while ( v1165 );
                    v1159 = *(__int64 ***)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v1161 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  }
                  v1159 += 2;
                  --v1161;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1159;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1161;
                }
                while ( v1161 );
                goto LABEL_238;
              }
            }
LABEL_1747:
            __writecr8(v1157);
            v53 = *(char **)v2;
            j = 0LL;
          }
          v1172 = *(_DWORD *)(v20 + 2264);
          if ( !v1172 )
          {
            *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = *((unsigned int *)v53 + 5) ^ (unsigned __int64)v1150;
            v1172 = *(_DWORD *)(v20 + 2264);
          }
          v1173 = *((_QWORD *)v53 + 1);
          if ( !v1172 )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v1173;
            *(_DWORD *)(v20 + 2264) = 1;
          }
          goto LABEL_1730;
        }
        if ( v85 != 30 )
        {
          if ( v85 != 31 )
          {
            if ( v85 == 32 )
            {
              sub_1401AEA44(v20, v53);
              goto LABEL_178;
            }
            if ( v85 == 33 )
            {
              sub_1401ADB1C(v20, v53);
              goto LABEL_178;
            }
            if ( v85 != 35 )
            {
              if ( v85 == 36 )
              {
                v879 = (_QWORD *)*((_QWORD *)v53 + 1);
                v880 = *((unsigned int *)v53 + 4);
                v881 = v879;
                *(_DWORD *)(v20 + 2064) += v880;
                v882 = (const char *)v879;
                v883 = *(_DWORD *)(v20 + 2044);
                v884 = *(_QWORD *)(v20 + 2048);
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v880;
                if ( v879 < (_QWORD *)((char *)v879 + v880) )
                {
                  do
                  {
                    _mm_prefetch(v882, 0);
                    v882 += 64;
                  }
                  while ( v882 < (const char *)v879 + v880 );
                }
                v885 = (unsigned int)v880 >> 7;
                v886 = v884;
                if ( (unsigned int)v880 >> 7 )
                {
                  do
                  {
                    v887 = 8LL;
                    do
                    {
                      v888 = v886 ^ *v881;
                      v889 = v881[1];
                      v881 += 2;
                      v886 = __ROL8__(__ROL8__(v888, v883) ^ v889, v883);
                      --v887;
                    }
                    while ( v887 );
                    v890 = (__ROL8__(v884 ^ ((char *)v881 - (char *)v879), 17) ^ v884 ^ ((char *)v881 - (char *)v879))
                         * (unsigned __int128)0x7010008004002001uLL;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x428) = *((_QWORD *)&v890 + 1);
                    v891 = BYTE8(v890) ^ v890 ^ v883;
                    v27 = 1LL;
                    v883 = v891 & 0x3F;
                    if ( !v883 )
                      LOBYTE(v883) = 1;
                    --v885;
                  }
                  while ( v885 );
                  v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  LODWORD(v880) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                }
                v892 = v880 & 0x7F;
                if ( (unsigned int)v892 >= 8 )
                {
                  v893 = (unsigned __int64)(unsigned int)v892 >> 3;
                  do
                  {
                    v886 = __ROL8__(*v881++ ^ v886, v883);
                    v892 = (unsigned int)(v892 - 8);
                    --v893;
                  }
                  while ( v893 );
                  v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  v27 = 1LL;
                }
                for ( ; (_DWORD)v892; v892 = (unsigned int)(v892 - 1) )
                {
                  v894 = *(unsigned __int8 *)v881;
                  v881 = (_QWORD *)((char *)v881 + 1);
                  v886 = __ROL8__(v894 ^ v886, v883);
                }
                for ( m = v886; ; LODWORD(v886) = m ^ v886 )
                {
                  m >>= 31;
                  if ( !m )
                    break;
                }
                v896 = v886 & 0x7FFFFFFF;
                v897 = 0;
                if ( v896 == *((_DWORD *)v53 + 5) )
                  goto LABEL_1347;
                if ( !*(_DWORD *)v53 )
                  v897 = *((_DWORD *)v53 + 6) != 0;
                v898 = *((unsigned int *)v53 + 4);
                v899 = *((_QWORD *)v53 + 1);
                if ( *((_DWORD *)v53 + 4) )
                {
                  v892 = 64LL;
                  if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
                  {
                    v900 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v901 = v899 & 0xFFFFFFFFFFFFF000uLL;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v899 + v898 - 1) | 0xFFF;
                    v902 = (v899 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v903 = v900;
                      while ( 1 )
                      {
                        v904 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                                 v901,
                                 0LL,
                                 v892,
                                 v881);
                        if ( v904 != -1073741267 )
                          break;
                        if ( v897 )
                          goto LABEL_1342;
                        if ( v900 > 1u )
                          goto LABEL_1340;
                        v903 = v900;
                        __writecr8(v900);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v904 < 0 )
                        break;
LABEL_1340:
                      v901 += 4096LL;
                      v902 += 4096LL;
                      if ( v902 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                      {
                        __writecr8(v903);
                        v53 = *(char **)v2;
LABEL_1347:
                        v907 = *(_QWORD *)(v20 + 1328);
                        v908 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v20 + 328))(v907, v27, v892, v881);
                        v910 = **(unsigned int ***)(v20 + 1536);
                        v911 = v910 + 4;
                        v912 = *((_BYTE *)v910 + 12);
                        v913 = (unsigned __int64)&v910[6 * *v910 + 4];
                        do
                        {
                          v914 = 24LL;
                          v915 = (__int64 *)(v53 + 24);
                          v916 = v911;
                          do
                          {
                            v917 = *(_QWORD *)v916;
                            v916 += 2;
                            v918 = *v915++;
                            if ( v917 != v918 )
                              goto LABEL_1355;
                            v914 = (unsigned int)(v914 - 8);
                          }
                          while ( (unsigned int)v914 >= 8 );
                          if ( !(_DWORD)v914 )
                            break;
                          while ( 1 )
                          {
                            v909 = *(unsigned __int8 *)v916;
                            v916 = (unsigned int *)((char *)v916 + 1);
                            v919 = *(unsigned __int8 *)v915;
                            v915 = (__int64 *)((char *)v915 + 1);
                            if ( v909 != v919 )
                              break;
                            v75 = (_DWORD)v914 == 1;
                            v914 = (unsigned int)(v914 - 1);
                            if ( v75 )
                              goto LABEL_1356;
                          }
LABEL_1355:
                          v911 += 6;
                        }
                        while ( (unsigned __int64)v911 < v913 );
LABEL_1356:
                        v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v20 + 392))(
                          *(_QWORD *)(v20 + 1328),
                          v909,
                          v914,
                          v915);
                        __writecr8(v908);
                        if ( !v912 )
                          goto LABEL_2515;
                        if ( (*(_DWORD *)(v20 + 2420) & 0x10) != 0 && !*(_DWORD *)(v20 + 2264) )
                        {
                          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v20 + 2288) = *(int *)v53;
                          *(_QWORD *)(v20 + 2296) = 1LL;
                          *(_DWORD *)(v20 + 2264) = 1;
                        }
                        if ( *((_QWORD *)v53 + 3) != 1LL )
                        {
LABEL_2515:
                          if ( v911 == (unsigned int *)v913 && !*(_DWORD *)(v20 + 2264) )
                          {
                            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v20 + 2288) = *(int *)v53;
                            *(_QWORD *)(v20 + 2296) = v911;
                            *(_DWORD *)(v20 + 2264) = 1;
                          }
                        }
                        v920 = *(_QWORD *)(v20 + 1328);
                        v921 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64))(v20 + 328))(v920);
                        v922 = **(unsigned int ***)(v20 + 1536);
                        v923 = v922 + 4;
                        v924 = 0LL;
                        v925 = (unsigned __int64)&v922[6 * *v922 + 4];
                        do
                        {
                          v923 += 6;
                          v927 = v924;
                          if ( (unsigned __int64)v923 >= v925 )
                            break;
                          v926 = *((_QWORD *)v923 + 1);
                          if ( v926 < v924 )
                            break;
                          if ( (v926 & 0xFFFFFFFFFFFFF000uLL) != v926 )
                            break;
                          v924 = v926 + v923[4];
                          if ( v924 <= v926 )
                            break;
                        }
                        while ( v924 != v927 );
                        (*(void (__fastcall **)(_QWORD, unsigned __int64))(v20 + 392))(*(_QWORD *)(v20 + 1328), v927);
                        __writecr8(v921);
                        j = 0LL;
                        if ( v923 == (unsigned int *)v925 || *(_DWORD *)(v20 + 2264) )
                          goto LABEL_178;
                        *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v20 + 2288) = *(int *)v53;
                        *(_QWORD *)(v20 + 2296) = v923;
LABEL_1373:
                        *(_DWORD *)(v20 + 2264) = 1;
                        goto LABEL_178;
                      }
                    }
LABEL_1342:
                    __writecr8(v903);
                    v53 = *(char **)v2;
                  }
                }
                v905 = *(_DWORD *)(v20 + 2264);
                v27 = *((unsigned int *)v53 + 5);
                if ( !v905 )
                {
                  *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v27 ^ v896;
                  v905 = *(_DWORD *)(v20 + 2264);
                }
                v906 = *((_QWORD *)v53 + 1);
                if ( !v905 )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v53;
                  *(_QWORD *)(v20 + 2296) = v906;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                goto LABEL_1347;
              }
              goto LABEL_2276;
            }
            if ( (*((_DWORD *)v53 + 10) & 1) != 0
              && (*(_QWORD *)(v20 + 2400) == j || (*(_DWORD *)(v20 + 2420) & 4) != 0) )
            {
              goto LABEL_2252;
            }
            if ( (*((_DWORD *)v53 + 10) & 1) != 0 )
            {
              v928 = *(_DWORD *)(v20 + 2420);
              v929 = v928;
              if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
              {
                v929 = v928 ^ ((unsigned __int8)v928 ^ (unsigned __int8)(8 * v928)) & 0x20;
                *(_DWORD *)(v20 + 2420) = v929;
              }
              else if ( (((unsigned __int8)v928 ^ (unsigned __int8)(v928 >> 3)) & 4) != 0 )
              {
                goto LABEL_2252;
              }
              if ( *(_QWORD *)(v20 + 2400) == j )
                goto LABEL_1440;
              LOBYTE(v930) = v929;
              if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
              {
                v930 = v929 ^ ((unsigned __int8)v929 ^ (unsigned __int8)(8 * v929)) & 0x20;
                *(_DWORD *)(v20 + 2420) = v930;
                goto LABEL_1386;
              }
              if ( (((unsigned __int8)v929 ^ (unsigned __int8)(v929 >> 3)) & 4) != 0 )
              {
LABEL_1440:
                *(_DWORD *)(v20 + 2060) = j;
LABEL_1421:
                v960 = *((_DWORD *)v53 + 10);
                if ( (v960 & 2) != 0 )
                {
                  v961 = *((_QWORD *)v53 + 1);
                  if ( (v960 & 4) != 0 )
                  {
                    v962 = *((_QWORD *)v53 + 3);
                    v963 = **(_QWORD **)(v961 + 112);
                    if ( v963 != v962 )
                    {
                      v964 = *(_QWORD *)(v20 + 1408);
                      *(_QWORD *)v964 = v963;
                      *(_DWORD *)(v964 + 16) = 256;
                      v965 = *(_DWORD *)(v20 + 2264);
                      if ( !v965 )
                      {
                        *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v963 ^ v962;
                        v965 = *(_DWORD *)(v20 + 2264);
                      }
                      v966 = *(_QWORD *)(v961 + 112);
                      if ( !v965 )
                      {
                        *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v20 + 2288) = *(int *)v53;
                        *(_QWORD *)(v20 + 2296) = v966;
                        *(_DWORD *)(v20 + 2264) = 1;
                      }
                    }
                  }
                  if ( (*((_DWORD *)v53 + 10) & 8) != 0 )
                  {
                    v967 = *((_QWORD *)v53 + 4);
                    v968 = **(_QWORD **)(v961 + 120);
                    if ( v968 != v967 )
                    {
                      v969 = *(_QWORD *)(v20 + 1408);
                      *(_QWORD *)v969 = v968;
                      *(_DWORD *)(v969 + 16) = 256;
                      v970 = *(_DWORD *)(v20 + 2264);
                      if ( !v970 )
                      {
                        *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v968 ^ v967;
                        v970 = *(_DWORD *)(v20 + 2264);
                      }
                      v971 = *(_QWORD *)(v961 + 120);
                      if ( !v970 )
                      {
                        *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v20 + 2288) = *(int *)v53;
                        *(_QWORD *)(v20 + 2296) = v971;
                        *(_DWORD *)(v20 + 2264) = 1;
                      }
                    }
                  }
                }
                goto LABEL_178;
              }
LABEL_1386:
              if ( (v930 & 4) != 0 )
              {
                v931 = *((_QWORD *)v53 + 1) & 0xFFFFFFFFFFFFF000uLL;
                for ( n = ((*((_QWORD *)v53 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v53 + 4) + 4095) >> 12;
                      n;
                      v931 += 4096LL )
                {
                  --n;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v20 + 680))(v931)
                    && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
                  {
                    *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v20 + 2288) = *(int *)v53;
                    *(_QWORD *)(v20 + 2296) = v931;
                    *(_DWORD *)(v20 + 2264) = 1;
                  }
                  *(_DWORD *)(v20 + 2064) += 256;
                }
                goto LABEL_1421;
              }
              v933 = (_QWORD *)*((_QWORD *)v53 + 1);
              v934 = *((unsigned int *)v53 + 4);
              v935 = v933;
              *(_DWORD *)(v20 + 2064) += v934;
              v936 = (const char *)v933;
              v937 = *(_DWORD *)(v20 + 2044);
              v938 = *(_QWORD *)(v20 + 2048);
              if ( v933 < (_QWORD *)((char *)v933 + v934) )
              {
                do
                {
                  _mm_prefetch(v936, 0);
                  v936 += 64;
                }
                while ( v936 < (const char *)v933 + v934 );
              }
              v939 = *(_QWORD *)(v20 + 2048);
              v940 = (unsigned int)v934 >> 7;
              if ( (unsigned int)v934 >> 7 )
              {
                do
                {
                  v941 = 8LL;
                  do
                  {
                    v942 = v939 ^ *v935;
                    v943 = v935[1];
                    v935 += 2;
                    v939 = __ROL8__(__ROL8__(v942, v937) ^ v943, v937);
                    --v941;
                  }
                  while ( v941 );
                  v944 = __ROL8__(v938 ^ ((char *)v935 - (char *)v933), 17) ^ v938 ^ ((char *)v935 - (char *)v933);
                  v945 = (v944 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x430) = v945;
                  v937 = ((unsigned __int8)(v945 ^ v944) ^ (unsigned __int8)v937) & 0x3F;
                  if ( !v937 )
                    LOBYTE(v937) = 1;
                  --v940;
                }
                while ( v940 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v946 = v934 & 0x7F;
              if ( v946 >= 8 )
              {
                v947 = (unsigned __int64)v946 >> 3;
                do
                {
                  v939 = __ROL8__(*v935++ ^ v939, v937);
                  v946 -= 8;
                  --v947;
                }
                while ( v947 );
              }
              for ( j = 0LL; v946; --v946 )
              {
                v948 = *(unsigned __int8 *)v935;
                v935 = (_QWORD *)((char *)v935 + 1);
                v939 = __ROL8__(v948 ^ v939, v937);
              }
              for ( ii = v939; ; LODWORD(v939) = ii ^ v939 )
              {
                ii >>= 31;
                if ( !ii )
                  break;
              }
              v950 = *((unsigned int *)v53 + 5);
              v951 = v939 & 0x7FFFFFFF;
              if ( v951 == (_DWORD)v950 )
                goto LABEL_1421;
              v952 = *((unsigned int *)v53 + 4);
              v953 = *((_QWORD *)v53 + 1);
              if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
              {
                v954 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v955 = v953 & 0xFFFFFFFFFFFFF000uLL;
                v956 = (v953 + v952 - 1) | 0xFFF;
                v957 = (v953 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v958 = v954;
                  while ( 1 )
                  {
                    v959 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v20 + 1120))(v955, 0LL);
                    if ( v959 != -1073741267 )
                      break;
                    if ( v954 > 1u )
                      goto LABEL_1419;
                    v958 = v954;
                    __writecr8(v954);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v959 < 0 )
                    break;
LABEL_1419:
                  v955 += 4096LL;
                  v957 += 4096LL;
                  if ( v957 == v956 )
                    goto LABEL_1420;
                }
                __writecr8(v958);
                v53 = *(char **)v2;
                j = 0LL;
                v950 = *(unsigned int *)(*(_QWORD *)v2 + 20LL);
              }
              v972 = *(_DWORD *)(v20 + 2264);
              if ( !v972 )
              {
                v973 = v951 ^ v950;
                goto LABEL_1437;
              }
            }
            else
            {
              v975 = (_QWORD *)*((_QWORD *)v53 + 1);
              v976 = *((unsigned int *)v53 + 4);
              v977 = v975;
              *(_DWORD *)(v20 + 2064) += v976;
              v978 = (const char *)v975;
              v979 = *(_DWORD *)(v20 + 2044);
              v980 = *(_QWORD *)(v20 + 2048);
              if ( v975 < (_QWORD *)((char *)v975 + v976) )
              {
                do
                {
                  _mm_prefetch(v978, 0);
                  v978 += 64;
                }
                while ( v978 < (const char *)v975 + v976 );
              }
              v981 = *(_QWORD *)(v20 + 2048);
              v982 = (unsigned int)v976 >> 7;
              if ( (unsigned int)v976 >> 7 )
              {
                do
                {
                  v983 = 8LL;
                  do
                  {
                    v984 = v981 ^ *v977;
                    v985 = v977[1];
                    v977 += 2;
                    v981 = __ROL8__(__ROL8__(v984, v979) ^ v985, v979);
                    --v983;
                  }
                  while ( v983 );
                  v986 = (__ROL8__(v980 ^ ((char *)v977 - (char *)v975), 17) ^ v980 ^ (unsigned __int64)((char *)v977 - (char *)v975))
                       * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x438) = *((_QWORD *)&v986 + 1);
                  v979 = (BYTE8(v986) ^ (unsigned __int8)(v986 ^ v979)) & 0x3F;
                  if ( !v979 )
                    LOBYTE(v979) = 1;
                  --v982;
                }
                while ( v982 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v987 = v976 & 0x7F;
              if ( v987 >= 8 )
              {
                v988 = (unsigned __int64)v987 >> 3;
                do
                {
                  v981 = __ROL8__(*v977++ ^ v981, v979);
                  v987 -= 8;
                  --v988;
                }
                while ( v988 );
              }
              for ( j = 0LL; v987; --v987 )
              {
                v989 = *(unsigned __int8 *)v977;
                v977 = (_QWORD *)((char *)v977 + 1);
                v981 = __ROL8__(v989 ^ v981, v979);
              }
              for ( jj = v981; ; LODWORD(v981) = jj ^ v981 )
              {
                jj >>= 31;
                if ( !jj )
                  break;
              }
              v991 = v981 & 0x7FFFFFFF;
              v992 = 0;
              if ( v991 == *((_DWORD *)v53 + 5) )
                goto LABEL_1421;
              if ( !*(_DWORD *)v53 )
                v992 = *((_DWORD *)v53 + 6) != 0;
              v993 = *((unsigned int *)v53 + 4);
              v994 = *((_QWORD *)v53 + 1);
              if ( *((_DWORD *)v53 + 4) )
              {
                v995 = 64LL;
                if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
                {
                  v996 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v997 = v994 & 0xFFFFFFFFFFFFF000uLL;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v994 + v993 - 1) | 0xFFF;
                  v998 = (v994 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v958 = v996;
                    while ( 1 )
                    {
                      v999 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                               v997,
                               0LL,
                               v995,
                               v977);
                      if ( v999 != -1073741267 )
                        break;
                      if ( v992 )
                        goto LABEL_1472;
                      if ( v996 > 1u )
                        goto LABEL_1470;
                      v958 = v996;
                      __writecr8(v996);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v999 < 0 )
                      break;
LABEL_1470:
                    v995 = 4096LL;
                    v997 += 4096LL;
                    v998 += 4096LL;
                    if ( v998 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                    {
LABEL_1420:
                      __writecr8(v958);
                      v53 = *(char **)v2;
                      j = 0LL;
                      goto LABEL_1421;
                    }
                  }
LABEL_1472:
                  __writecr8(v958);
                  v53 = *(char **)v2;
                  j = 0LL;
                }
              }
              v972 = *(_DWORD *)(v20 + 2264);
              if ( !v972 )
              {
                v973 = *((unsigned int *)v53 + 5) ^ (unsigned __int64)v991;
LABEL_1437:
                *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v973;
                v972 = *(_DWORD *)(v20 + 2264);
              }
            }
            v974 = *((_QWORD *)v53 + 1);
            if ( !v972 )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v53;
              *(_QWORD *)(v20 + 2296) = v974;
              *(_DWORD *)(v20 + 2264) = 1;
            }
            goto LABEL_1421;
          }
          if ( (*(_DWORD *)(v20 + 2072) & 1) == 0 )
            goto LABEL_178;
          if ( *(_QWORD *)(v20 + 2400) == j || (*(_DWORD *)(v20 + 2420) & 4) != 0 )
          {
            v1001 = j;
          }
          else
          {
            v1000 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(v20 + 968))(26LL, v2 + 712, 0LL);
            v1001 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8);
            if ( v1000 < 0 )
              v1001 = j;
          }
          v1002 = *(__int64 (__fastcall **)(_QWORD))(v20 + 936);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1001;
          v1003 = j;
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = j;
          v1004 = v1002(0LL);
          v1005 = 0LL;
          while ( 2 )
          {
            v1006 = v1004;
            if ( !v1004 )
            {
              v1046 = *(_QWORD *)(v20 + 1232);
              if ( (*(int (__fastcall **)(__int64))(v20 + 920))(v1046) >= 0 )
              {
                v1047 = (*(__int64 (__fastcall **)(__int64))(v20 + 984))(v1046);
                *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xEA) = v1047;
                v1048 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 992))(v1046, v2 + 98);
                v1049 = (*(__int64 (__fastcall **)(__int64))(v20 + 1000))(v1046);
                if ( v1047 == 114
                  || *(_DWORD *)(v20 + 2264)
                  || (*(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1047 ^ 0x72LL, *(_DWORD *)(v20 + 2264)) )
                {
                  v1050 = *(int **)v2;
                }
                else
                {
                  v1050 = *(int **)v2;
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = (char *)v1050 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *v1050;
                  *(_QWORD *)(v20 + 2296) = v1046;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                v1051 = 0;
                v1052 = 0;
                if ( (v1047 & 7) == 1 )
                {
                  v1051 = 48;
                }
                else if ( (v1047 & 7) == 2 )
                {
                  v1051 = 16;
                  v1052 = 16;
                }
                else if ( (v1047 & 7) != 0 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = (char *)v1050 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *v1050;
                  *(_QWORD *)(v20 + 2296) = v1046;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                v1053 = *(_QWORD *)(v20 + 1464);
                v1054 = (unsigned __int64)v1047 >> 4;
                if ( ((unsigned __int8)v1051 | *(_BYTE *)(v1053 + 2 * v1054)) != v1048 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = (char *)v1050 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *v1050;
                  *(_QWORD *)(v20 + 2296) = v1046;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                if ( ((unsigned __int8)v1052 | *(_BYTE *)(v1053 + 2 * v1054 + 1)) != *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                              + 0x62)
                  && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = (char *)v1050 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *v1050;
                  *(_QWORD *)(v20 + 2296) = v1046;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                if ( v1046 == *(_QWORD *)(v20 + 1232) )
                  v1055 = 0LL;
                else
                  v1055 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v20 + 976))(v1046, 1LL);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1055;
                if ( v1055 )
                {
                  v1056 = *v1055;
                  v1057 = v1055;
                  if ( *v1055 )
                  {
                    v1058 = *(char **)v2;
                    do
                    {
                      *v1057 = v1056 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v20 + 472))();
                      v1059 = *(unsigned __int8 *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x62);
                      v1060 = v1057[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1060 == v1049 )
                        v1059 = v1048;
                      v1061 = v1057[1] >> 6;
                      LOBYTE(v1061) = v1061 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v20 + 1008))(v1061, v1059) )
                      {
                        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                        {
                          v1062 = *(_QWORD **)(v20 + 2640);
                          v1063 = 48;
                          v1064 = 6LL;
                          do
                          {
                            v1063 -= 8;
                            *v1062 = *(_QWORD *)v1058;
                            v1058 += 8;
                            ++v1062;
                            --v1064;
                          }
                          while ( v1064 );
                          if ( v1063 )
                          {
                            do
                            {
                              v1065 = *v1058++;
                              *(_BYTE *)v1062 = v1065;
                              v1062 = (_QWORD *)((char *)v1062 + 1);
                              --v1063;
                            }
                            while ( v1063 );
                            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          }
                          v1058 = *(char **)(v20 + 2640);
                        }
                        *((_QWORD *)v1058 + 3) = v1060;
                        *((_QWORD *)v1058 + 4) = *v1057;
                        v1058[40] = ((unsigned __int64)*((unsigned int *)v1057 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v20 + 2264) )
                        {
                          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v20 + 2280) = v1058 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v20 + 2288) = *(int *)v1058;
                          *(_QWORD *)(v20 + 2296) = v1046;
                          *(_DWORD *)(v20 + 2264) = 1;
                        }
                      }
                      v1057 += 6;
                      v1056 = *v1057;
                    }
                    while ( *v1057 );
                    v1055 = *(unsigned __int64 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  }
                  (*(void (__fastcall **)(unsigned __int64 *))(v20 + 248))(v1055);
                }
                (*(void (__fastcall **)(__int64))(v20 + 928))(v1046);
                v1003 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                *(_DWORD *)(v20 + 2064) += 0x8000;
              }
              j = 0LL;
              if ( *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                (*(void (**)(void))(v20 + 472))();
              *(_DWORD *)(v20 + 2064) += v1003 << 8;
              goto LABEL_178;
            }
            if ( v1001 == v1004 )
            {
              v1007 = v53;
              if ( (*(int (__fastcall **)(__int64))(v20 + 920))(v1004) >= 0 )
              {
                v1008 = (*(__int64 (__fastcall **)(__int64))(v20 + 984))(v1006);
                *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) = v1008;
                v1009 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 992))(v1006, v2 + 96);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v20 + 1000))(v1006);
                if ( v1008 == 97
                  || *(_DWORD *)(v20 + 2264)
                  || (*(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1008 ^ 0x61LL, *(_DWORD *)(v20 + 2264)) )
                {
                  v1010 = *(char **)v2;
                }
                else
                {
                  v1010 = *(char **)v2;
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1007 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1010;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                v1011 = 0;
                v1012 = 0;
                if ( (v1008 & 7) == 1 )
                {
                  v1011 = 48;
                }
                else if ( (v1008 & 7) == 2 )
                {
                  v1011 = 16;
                  v1012 = 16;
                }
                else if ( (v1008 & 7) != 0 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1007 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1010;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                v1013 = *(_QWORD *)(v20 + 1464);
                v1014 = (unsigned __int64)v1008 >> 4;
                v1015 = v1011 | *(_BYTE *)(v1013 + 2 * v1014);
                v1016 = 0xA3A03F5891C8B4E8uLL;
                if ( v1015 != v1009 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1007 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1010;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                if ( ((unsigned __int8)v1012 | *(_BYTE *)(v1013 + 2 * v1014 + 1)) != *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                              + 0x60)
                  && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1007 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1010;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                if ( v1006 != *(_QWORD *)(v20 + 1232) )
                  v1005 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v20 + 976))(v1006, 1LL);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1005;
                if ( v1005 )
                {
                  v1017 = *v1005;
                  v1018 = v1005;
                  if ( *v1005 )
                  {
                    v1019 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    do
                    {
                      v1020 = v1017 & 0xFFFFFFFFFFFFFFFCuLL;
                      *v1018 = v1020;
                      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 472))(v1020, v1016);
                      v1021 = *(unsigned __int8 *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                      v1022 = v1018[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1022 == v1019 )
                        v1021 = v1009;
                      v1023 = v1018[1] >> 6;
                      LOBYTE(v1023) = v1023 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v20 + 1008))(v1023, v1021) )
                      {
                        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                        {
                          v1024 = *(_QWORD **)(v20 + 2640);
                          LODWORD(v1016) = 48;
                          v1025 = 6LL;
                          do
                          {
                            v1016 = (unsigned int)(v1016 - 8);
                            *v1024 = *(_QWORD *)v1007;
                            v1007 += 8;
                            ++v1024;
                            --v1025;
                          }
                          while ( v1025 );
                          if ( (_DWORD)v1016 )
                          {
                            do
                            {
                              v1026 = *v1007++;
                              *(_BYTE *)v1024 = v1026;
                              v1024 = (_QWORD *)((char *)v1024 + 1);
                              v1016 = (unsigned int)(v1016 - 1);
                            }
                            while ( (_DWORD)v1016 );
                            v1019 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                          }
                          v1007 = *(char **)(v20 + 2640);
                        }
                        *((_QWORD *)v1007 + 3) = v1022;
                        *((_QWORD *)v1007 + 4) = *v1018;
                        v1007[40] = ((unsigned __int64)*((unsigned int *)v1018 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v20 + 2264) )
                        {
                          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v20 + 2280) = v1007 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v20 + 2288) = *(int *)v1007;
                          *(_QWORD *)(v20 + 2296) = v1006;
                          *(_DWORD *)(v20 + 2264) = 1;
                        }
                      }
                      v1018 += 6;
                      v1017 = *v1018;
                    }
                    while ( *v1018 );
                    goto LABEL_1563;
                  }
                  goto LABEL_1564;
                }
                goto LABEL_1565;
              }
            }
            else if ( (*(unsigned int (__fastcall **)(__int64))(v20 + 960))(v1004) )
            {
              v1027 = v53;
              if ( (*(int (__fastcall **)(__int64))(v20 + 920))(v1006) >= 0 )
              {
                v1028 = (*(__int64 (__fastcall **)(__int64))(v20 + 984))(v1006);
                *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xE9) = v1028;
                v1029 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 992))(v1006, v2 + 97);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v20 + 1000))(v1006);
                if ( v1028 == 97
                  || *(_DWORD *)(v20 + 2264)
                  || (*(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1028 ^ 0x61LL, *(_DWORD *)(v20 + 2264)) )
                {
                  v1030 = *(char **)v2;
                }
                else
                {
                  v1030 = *(char **)v2;
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1027 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1030;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                v1031 = 0;
                v1032 = 0;
                if ( (v1028 & 7) == 1 )
                {
                  v1031 = 48;
                }
                else if ( (v1028 & 7) == 2 )
                {
                  v1031 = 16;
                  v1032 = 16;
                }
                else if ( (v1028 & 7) != 0 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1027 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1030;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                v1033 = *(_QWORD *)(v20 + 1464);
                v1034 = (unsigned __int64)v1028 >> 4;
                v75 = (*(_BYTE *)(v1033 + 2 * v1034) | (unsigned __int8)v1031) == v1029;
                v1016 = 0xA3A03F5891C8B4E8uLL;
                if ( !v75 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1027 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1030;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                if ( ((unsigned __int8)v1032 | *(_BYTE *)(v1033 + 2 * v1034 + 1)) != *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                              + 0x61)
                  && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v1027 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v1030;
                  *(_QWORD *)(v20 + 2296) = v1006;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
                if ( v1006 != *(_QWORD *)(v20 + 1232) )
                  v1005 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v20 + 976))(v1006, 1LL);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1005;
                if ( v1005 )
                {
                  v1035 = *v1005;
                  v1036 = v1005;
                  if ( *v1005 )
                  {
                    v1037 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    do
                    {
                      v1038 = v1035 & 0xFFFFFFFFFFFFFFFCuLL;
                      *v1036 = v1038;
                      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 472))(v1038, v1016);
                      v1039 = *(unsigned __int8 *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x61);
                      v1040 = v1036[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1040 == v1037 )
                        v1039 = v1029;
                      v1041 = v1036[1] >> 6;
                      LOBYTE(v1041) = v1041 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v20 + 1008))(v1041, v1039) )
                      {
                        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                        {
                          v1042 = *(_QWORD **)(v20 + 2640);
                          LODWORD(v1016) = 48;
                          v1043 = 6LL;
                          do
                          {
                            v1016 = (unsigned int)(v1016 - 8);
                            *v1042 = *(_QWORD *)v1027;
                            v1027 += 8;
                            ++v1042;
                            --v1043;
                          }
                          while ( v1043 );
                          if ( (_DWORD)v1016 )
                          {
                            do
                            {
                              v1044 = *v1027++;
                              *(_BYTE *)v1042 = v1044;
                              v1042 = (_QWORD *)((char *)v1042 + 1);
                              v1016 = (unsigned int)(v1016 - 1);
                            }
                            while ( (_DWORD)v1016 );
                            v1037 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                          }
                          v1027 = *(char **)(v20 + 2640);
                        }
                        *((_QWORD *)v1027 + 3) = v1040;
                        *((_QWORD *)v1027 + 4) = *v1036;
                        v1027[40] = ((unsigned __int64)*((unsigned int *)v1036 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v20 + 2264) )
                        {
                          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v20 + 2280) = v1027 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v20 + 2288) = *(int *)v1027;
                          *(_QWORD *)(v20 + 2296) = v1006;
                          *(_DWORD *)(v20 + 2264) = 1;
                        }
                      }
                      v1036 += 6;
                      v1035 = *v1036;
                    }
                    while ( *v1036 );
LABEL_1563:
                    v1005 = *(unsigned __int64 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                    v1003 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  }
LABEL_1564:
                  (*(void (__fastcall **)(unsigned __int64 *, unsigned __int64))(v20 + 248))(v1005, v1016);
                }
LABEL_1565:
                (*(void (__fastcall **)(__int64, unsigned __int64))(v20 + 928))(v1006, v1016);
                v53 = *(char **)v2;
                *(_DWORD *)(v20 + 2064) += 0x8000;
                v1001 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                v1005 = 0LL;
              }
            }
            v1045 = *(__int64 (__fastcall **)(__int64))(v20 + 936);
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = ++v1003;
            v1004 = v1045(v1006);
            continue;
          }
        }
        if ( (v53[42] & 1) == 0 )
          goto LABEL_1617;
        if ( *(_QWORD *)(v20 + 2400) != j )
        {
          v1066 = *(_DWORD *)(v20 + 2420);
          if ( (v1066 & 4) == 0 )
          {
            if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
            {
              *(_DWORD *)(v20 + 2420) = v1066 ^ ((unsigned __int8)v1066 ^ (unsigned __int8)(8 * v1066)) & 0x20;
              goto LABEL_1617;
            }
            if ( (v1066 & 0x20) == 0 )
            {
LABEL_1617:
              v1067 = *((_QWORD *)v53 + 1);
              v1068 = *(unsigned int *)(v20 + 2060);
              v1069 = *((unsigned int *)v53 + 9);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v1067;
              v1070 = v1067 + 12 * v1068;
              v1071 = (_DWORD *)(v1070 + 12);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1070;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1070 + 12;
              v1072 = v1069 / 0xC;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1069 / 0xC;
              v1073 = v1069 / 0xC - 1;
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1073;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1067
                                                                                    + 12LL * (unsigned int)(v1069 / 0xC);
              v1074 = (unsigned __int64)&v53[((v1073 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
              v1075 = &v53[v1068 + 48];
              v1076 = *((unsigned __int16 *)v53 + 20);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1075;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1074;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v1074 + 24 * v1076;
              if ( (unsigned int)v1068 < v1073 )
              {
                do
                {
                  if ( *v1075 >= (char)j )
                  {
                    v1077 = *(_DWORD *)(v1070 + 4);
                    v1078 = *((_QWORD *)v53 + 3) + v1077;
                    v1079 = *v1071 - v1077;
                    *(_DWORD *)(v20 + 2064) += v1079;
                    v1080 = (_QWORD *)v1078;
                    v1081 = *(_DWORD *)(v20 + 2044);
                    v1082 = (const char *)v1078;
                    v1083 = *(_QWORD *)(v20 + 2048);
                    v1084 = (unsigned int)v1079;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1078;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (unsigned int)v1079;
                    if ( v1078 < v1079 + v1078 )
                    {
                      do
                      {
                        _mm_prefetch(v1082, 0);
                        v1082 += 64;
                      }
                      while ( (unsigned __int64)v1082 < v1079 + v1078 );
                    }
                    v1085 = v1083;
                    v1086 = (unsigned int)v1079 >> 7;
                    if ( (unsigned int)v1079 >> 7 )
                    {
                      do
                      {
                        v1087 = 8LL;
                        do
                        {
                          v1088 = v1080[1] ^ __ROL8__(*v1080 ^ v1085, v1081);
                          v1080 += 2;
                          v1085 = __ROL8__(v1088, v1081);
                          --v1087;
                        }
                        while ( v1087 );
                        v1089 = (__ROL8__(v1083 ^ ((unsigned __int64)v1080 - v1078), 17) ^ v1083 ^ ((unsigned __int64)v1080
                                                                                                  - v1078))
                              * (unsigned __int128)0x7010008004002001uLL;
                        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x440) = *((_QWORD *)&v1089 + 1);
                        v1081 = (BYTE8(v1089) ^ (unsigned __int8)(v1089 ^ v1081)) & 0x3F;
                        if ( !v1081 )
                          LOBYTE(v1081) = 1;
                        --v1086;
                      }
                      while ( v1086 );
                      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      v1084 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      v1075 = *(char **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    }
                    v1090 = v1079 & 0x7F;
                    if ( v1090 >= 8 )
                    {
                      v1091 = (unsigned __int64)v1090 >> 3;
                      do
                      {
                        v1085 = __ROL8__(*v1080++ ^ v1085, v1081);
                        v1090 -= 8;
                        --v1091;
                      }
                      while ( v1091 );
                    }
                    if ( v1090 )
                    {
                      do
                      {
                        v1092 = *(unsigned __int8 *)v1080;
                        v1080 = (_QWORD *)((char *)v1080 + 1);
                        v1085 = __ROL8__(v1092 ^ v1085, v1081);
                        --v1090;
                      }
                      while ( v1090 );
                      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    for ( kk = v1085; ; LOBYTE(v1085) = kk ^ v1085 )
                    {
                      kk >>= 7;
                      if ( !kk )
                        break;
                    }
                    v1094 = *v1075;
                    v1095 = v1085 & 0x7F;
                    if ( v1095 == (*v1075 & 0x7F) )
                      goto LABEL_1648;
                    if ( v1084 && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
                    {
                      v1096 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1097 = v1078 & 0xFFFFFFFFFFFFF000uLL;
                      v1098 = (v1084 - 1 + v1078) | 0xFFF;
                      v1099 = v1097 - 1;
                      while ( 1 )
                      {
                        v1100 = v1096;
                        while ( 1 )
                        {
                          v1101 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v20 + 1120))(v1097, 0LL);
                          if ( v1101 != -1073741267 )
                            break;
                          if ( v1096 > 1u )
                            goto LABEL_1646;
                          v1100 = v1096;
                          __writecr8(v1096);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1101 < 0 )
                          break;
LABEL_1646:
                        v1097 += 4096LL;
                        v1099 += 4096LL;
                        if ( v1099 == v1098 )
                        {
                          __writecr8(v1100);
                          j = 0LL;
                          goto LABEL_1648;
                        }
                      }
                      __writecr8(v1100);
                      j = 0LL;
                      v1078 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                      v1094 = **(_BYTE **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    }
                    if ( *(_DWORD *)(v20 + 2264)
                      || (*(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1094 & 0x7F ^ (unsigned __int64)v1095,
                          *(_DWORD *)(v20 + 2264)) )
                    {
LABEL_1648:
                      v53 = *(char **)v2;
                    }
                    else
                    {
                      v53 = *(char **)v2;
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v53;
                      *(_QWORD *)(v20 + 2296) = v1078;
                      *(_DWORD *)(v20 + 2264) = 1;
                    }
                    v1070 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    *(_DWORD *)(v20 + 2064) += 64;
                    v1075 = *(char **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v1071 = *(_DWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                  }
                  ++v1075;
                  v1070 += 12LL;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1075;
                  v1071 += 3;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1070;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1071;
                }
                while ( (unsigned __int64)v1071 < *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70)
                     && *(_DWORD *)(v20 + 2064) < *(_DWORD *)(v20 + 2068) );
                v1102 = v1070 - *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
                v1103 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v1074 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                v1072 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                *(_DWORD *)(v20 + 2060) = v1102 / 12;
                LODWORD(v1068) = v1102 / 12;
                if ( (unsigned int)v1068 < v1103 )
                  goto LABEL_178;
              }
              if ( *(_DWORD *)(v20 + 2064) >= *(_DWORD *)(v20 + 2068) )
                goto LABEL_178;
              v1104 = v1074 + 24LL * (unsigned int)(v1068 - v1072 + 1);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1104;
              while ( 1 )
              {
                v1105 = 2LL;
                v1106 = (unsigned int *)(v1104 + 8);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1104 + 8;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 2LL;
                do
                {
                  if ( (int)*v1106 >= (int)j )
                  {
                    v1107 = *((_QWORD *)v53 + 3) + *(v1106 - 2);
                    v1108 = *(v1106 - 1) - *(v1106 - 2);
                    *(_DWORD *)(v20 + 2064) += v1108;
                    v1109 = (_QWORD *)v1107;
                    v1110 = *(_DWORD *)(v20 + 2044);
                    v1111 = (const char *)v1107;
                    v1112 = *(_QWORD *)(v20 + 2048);
                    v1113 = (unsigned int)v1108;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1107;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (unsigned int)v1108;
                    if ( v1107 < v1108 + v1107 )
                    {
                      do
                      {
                        _mm_prefetch(v1111, 0);
                        v1111 += 64;
                      }
                      while ( (unsigned __int64)v1111 < v1108 + v1107 );
                    }
                    v1114 = v1112;
                    v1115 = (unsigned int)v1108 >> 7;
                    if ( (unsigned int)v1108 >> 7 )
                    {
                      do
                      {
                        v1116 = 8LL;
                        do
                        {
                          v1117 = v1109[1] ^ __ROL8__(*v1109 ^ v1114, v1110);
                          v1109 += 2;
                          v1114 = __ROL8__(v1117, v1110);
                          --v1116;
                        }
                        while ( v1116 );
                        v1118 = (__ROL8__(v1112 ^ ((unsigned __int64)v1109 - v1107), 17) ^ v1112 ^ ((unsigned __int64)v1109
                                                                                                  - v1107))
                              * (unsigned __int128)0x7010008004002001uLL;
                        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x448) = *((_QWORD *)&v1118 + 1);
                        v1110 = (BYTE8(v1118) ^ (unsigned __int8)(v1118 ^ v1110)) & 0x3F;
                        if ( !v1110 )
                          LOBYTE(v1110) = 1;
                        --v1115;
                      }
                      while ( v1115 );
                      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      v1113 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      v1106 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      v1105 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    }
                    v1119 = v1108 & 0x7F;
                    if ( v1119 >= 8 )
                    {
                      v1120 = (unsigned __int64)v1119 >> 3;
                      do
                      {
                        v1114 = __ROL8__(*v1109++ ^ v1114, v1110);
                        v1119 -= 8;
                        --v1120;
                      }
                      while ( v1120 );
                    }
                    if ( v1119 )
                    {
                      do
                      {
                        v1121 = *(unsigned __int8 *)v1109;
                        v1109 = (_QWORD *)((char *)v1109 + 1);
                        v1114 = __ROL8__(v1121 ^ v1114, v1110);
                        --v1119;
                      }
                      while ( v1119 );
                      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    for ( mm = v1114; ; LODWORD(v1114) = mm ^ v1114 )
                    {
                      mm >>= 31;
                      if ( !mm )
                        break;
                    }
                    v1123 = *v1106;
                    v1124 = v1114 & 0x7FFFFFFF;
                    if ( v1124 == (*v1106 & 0x7FFFFFFF) )
                      goto LABEL_1690;
                    if ( v1113 )
                    {
                      v1125 = 64LL;
                      if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
                      {
                        v1126 = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        v1127 = v1107 & 0xFFFFFFFFFFFFF000uLL;
                        v1128 = (v1107 + v1113 - 1) | 0xFFF;
                        v1129 = (v1107 & 0xFFFFFFFFFFFFF000uLL) - 1;
                        while ( 1 )
                        {
                          v1130 = v1126;
                          while ( 1 )
                          {
                            v1131 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                                      v1127,
                                      0LL,
                                      v1125,
                                      v1109);
                            if ( v1131 != -1073741267 )
                              break;
                            if ( v1126 > 1u )
                              goto LABEL_1688;
                            v1130 = v1126;
                            __writecr8(v1126);
                            KeGetCurrentIrql();
                            __writecr8(2uLL);
                          }
                          if ( v1131 < 0 )
                            break;
LABEL_1688:
                          v1125 = 4096LL;
                          v1127 += 4096LL;
                          v1129 += 4096LL;
                          if ( v1129 == v1128 )
                          {
                            __writecr8(v1130);
                            v1106 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                            v1105 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                            goto LABEL_1690;
                          }
                        }
                        __writecr8(v1130);
                        v1106 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        v1107 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        v1105 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        v53 = *(char **)v2;
                        v1123 = *v1106;
                      }
                    }
                    v1133 = v1123;
                    if ( *(_DWORD *)(v20 + 2264)
                      || (LODWORD(v1133) = v1123 & 0x7FFFFFFF,
                          *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1133 ^ v1124,
                          *(_DWORD *)(v20 + 2264)) )
                    {
LABEL_1690:
                      j = 0LL;
                    }
                    else
                    {
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v53;
                      *(_QWORD *)(v20 + 2296) = v1107;
                      *(_DWORD *)(v20 + 2264) = 1;
                      j = 0LL;
                    }
                  }
                  v53 = *(char **)v2;
                  v1106 += 3;
                  --v1105;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1106;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1105;
                }
                while ( v1105 );
                v1132 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                ++*(_DWORD *)(v20 + 2060);
                v1104 = v1132 + 24;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v1104;
                if ( v1104 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) )
                  break;
                if ( *(_DWORD *)(v20 + 2064) >= *(_DWORD *)(v20 + 2068) )
                  goto LABEL_178;
              }
            }
          }
        }
        *(_DWORD *)(v20 + 2060) = j;
        goto LABEL_178;
      }
      if ( v85 == 38 )
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD))(v20 + 408))(v2 + 1496, *((unsigned int *)v53 + 11));
        v1618 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 456))(v2 + 1496, v2 + 1512);
        __asm { xgetbv }
        v719 = v2 + 1512;
        v718 = v1618 | (v1619 << 32);
        goto LABEL_1074;
      }
      if ( v85 <= 42 )
      {
        *(_DWORD *)(v20 + 2064) += *((_DWORD *)v53 + 9);
        v1490 = *((unsigned int *)v53 + 9);
        v1491 = (_QWORD *)(v20 + *((unsigned int *)v53 + 8));
        v1492 = *(_DWORD *)(v20 + 2044);
        v1493 = v1491;
        v1494 = *(_QWORD *)(v20 + 2048);
        v1495 = (const char *)v1491;
        if ( v1491 < (_QWORD *)((char *)v1491 + v1490) )
        {
          do
          {
            _mm_prefetch(v1495, 0);
            v1495 += 64;
          }
          while ( v1495 < (const char *)v1491 + v1490 );
        }
        v1496 = *(_QWORD *)(v20 + 2048);
        for ( nn = (unsigned int)v1490 >> 7; nn; --nn )
        {
          v1498 = 8LL;
          do
          {
            v1499 = v1493[1] ^ __ROL8__(*v1493 ^ v1496, v1492);
            v1493 += 2;
            v1496 = __ROL8__(v1499, v1492);
            --v1498;
          }
          while ( v1498 );
          v1500 = (__ROL8__(v1494 ^ ((char *)v1493 - (char *)v1491), 17) ^ v1494 ^ (unsigned __int64)((char *)v1493 - (char *)v1491))
                * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B0) = *((_QWORD *)&v1500 + 1);
          v1492 = ((unsigned __int8)v1500 ^ (unsigned __int8)(BYTE8(v1500) ^ v1492)) & 0x3F;
          if ( !v1492 )
            LOBYTE(v1492) = 1;
        }
        v1501 = v1490 & 0x7F;
        if ( v1501 >= 8 )
        {
          v1502 = (unsigned __int64)v1501 >> 3;
          do
          {
            v1496 = __ROL8__(*v1493++ ^ v1496, v1492);
            v1501 -= 8;
            --v1502;
          }
          while ( v1502 );
        }
        for ( j = 0LL; v1501; --v1501 )
        {
          v1503 = *(unsigned __int8 *)v1493;
          v1493 = (_QWORD *)((char *)v1493 + 1);
          v1496 = __ROL8__(v1503 ^ v1496, v1492);
        }
        v1504 = *((_QWORD *)v53 + 3);
        if ( v1496 == v1504 )
          goto LABEL_178;
        v1505 = *(_DWORD *)(v20 + 2264);
        if ( !v1505 )
        {
          *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1496 ^ v1504;
          v1505 = *(_DWORD *)(v20 + 2264);
        }
        v1506 = v20 + *((unsigned int *)v53 + 8);
        if ( v1505 )
          goto LABEL_178;
        *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v20 + 2288) = *(int *)v53;
        *(_QWORD *)(v20 + 2296) = v1506;
LABEL_2275:
        *(_DWORD *)(v20 + 2264) = 1;
        goto LABEL_178;
      }
      if ( v85 != 43 )
      {
        if ( v85 != 44 )
        {
          if ( v85 == 46 )
          {
            if ( (*(_DWORD *)(v20 + 2072) & 1) != 0 )
              goto LABEL_178;
            v1241 = j;
            v1242 = *(_QWORD *)(v20 + 1336);
            (*(void (**)(void))(v20 + 368))();
            if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 || (v1243 = *(_DWORD *)(v20 + 2352), v1243 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 288))(*(_QWORD *)(v20 + 2528), 0LL);
              v1244 = 0x80;
            }
            else
            {
              v1244 = 1 << v1243;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v20 + 304))(v1242, 0LL);
            if ( v1244 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 296))(*(_QWORD *)(v20 + 2528), 0LL);
            }
            else
            {
              v1245 = *(volatile signed __int8 ***)(v20 + 1296);
              v1246 = *v1245;
              if ( *v1245 != (volatile signed __int8 *)v1245 )
              {
                v1247 = ~v1244;
                do
                {
                  _InterlockedAnd8(&v1246[*(_QWORD *)(v20 + 1696) - *(_QWORD *)(v20 + 1720)], v1247);
                  v1246 = *(volatile signed __int8 **)v1246;
                  ++v1241;
                }
                while ( v1246 != (volatile signed __int8 *)v1245 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 312))(*(_QWORD *)(v20 + 1336), 0LL);
            (*(void (**)(void))(v20 + 376))();
            *(_DWORD *)(v20 + 2064) += v1241 << 7;
            goto LABEL_238;
          }
          if ( v85 == 47 )
          {
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = *(_QWORD *)(*(_QWORD *)(v20 + 1680)
                                                                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v20 + 1584))
                                                                                              + *(_QWORD *)(v20 + 1648));
            v1230 = (*(__int64 (**)(void))(v20 + 1160))();
            if ( v1230 == 0xFFFFFFFFLL )
            {
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = j;
              v1231 = *(_QWORD *)(v20 + 2408);
              if ( !v1231 )
                goto LABEL_1855;
              v1232 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 1144))(v1231, v2 + 160);
              v1233 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
              if ( v1232 < 0 )
                v1233 = j;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v1233;
              if ( !v1233 )
LABEL_1855:
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = (*(__int64 (__fastcall **)(_QWORD))(v20 + 952))(0LL);
              *(_QWORD *)(v20 + 2408) = j;
              v1234 = j;
              if ( !*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) )
                goto LABEL_1863;
              while ( 1 )
              {
                ++v1234;
                if ( (*(int (**)(void))(v20 + 920))() >= 0 )
                {
                  (*(void (__fastcall **)(_QWORD, unsigned __int64))(v20 + 1072))(
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0),
                    v2 + 1704);
                  v1230 = (*(__int64 (**)(void))(v20 + 1160))();
                  (*(void (__fastcall **)(unsigned __int64))(v20 + 1080))(v2 + 1704);
                  (*(void (__fastcall **)(_QWORD))(v20 + 928))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                         + 0xA0));
                  if ( v1230 != 0xFFFFFFFFLL || v1234 > 0x100 )
                    break;
                }
                v1235 = (*(__int64 (__fastcall **)(_QWORD))(v20 + 952))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                  + 0xA0));
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v1235;
                if ( !v1235 )
                  goto LABEL_1863;
              }
              *(_QWORD *)(v20 + 2408) = (*(__int64 (__fastcall **)(_QWORD))(v20 + 1152))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0));
              (*(void (__fastcall **)(_QWORD))(v20 + 472))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                     + 0xA0));
              if ( v1230 == 0xFFFFFFFFLL )
              {
LABEL_1863:
                *(_DWORD *)(v20 + 2064) += v1234 << 12;
                goto LABEL_178;
              }
            }
            if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
            {
              v1236 = *(_QWORD **)(v20 + 2640);
              v1237 = 48;
              v1238 = 6LL;
              do
              {
                v1237 -= 8;
                *v1236 = *(_QWORD *)v53;
                v53 += 8;
                ++v1236;
                --v1238;
              }
              while ( v1238 );
              for ( ; v1237; --v1237 )
              {
                v1239 = *v53++;
                *(_BYTE *)v1236 = v1239;
                v1236 = (_QWORD *)((char *)v1236 + 1);
              }
              v53 = *(char **)(v20 + 2640);
            }
            *((_QWORD *)v53 + 3) = v1230;
            v1240 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0);
            if ( *(_DWORD *)(v20 + 2264) != (_DWORD)j )
              goto LABEL_178;
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v1240;
            goto LABEL_1373;
          }
          if ( v85 != 48 )
            goto LABEL_2276;
          if ( *((_DWORD *)v53 + 4) == (_DWORD)j )
            goto LABEL_178;
          if ( (*(_DWORD *)(v20 + 2420) & 0x4000) != 0 )
          {
            v1174 = *(volatile signed __int32 **)(v20 + 1232);
            while ( 1 )
            {
              _disable();
              if ( !_interlockedbittestandset(v1174, (*(_DWORD *)(v20 + 2416) >> 10) & 0x1F) )
                break;
              _enable();
              _mm_pause();
            }
          }
          if ( (*((_DWORD *)v53 + 6) & 1) == 0 )
          {
            v1175 = (_QWORD *)*((_QWORD *)v53 + 1);
            v1176 = *((unsigned int *)v53 + 4);
            v1177 = v1175;
            *(_DWORD *)(v20 + 2064) += v1176;
            v1178 = (const char *)v1175;
            v1179 = *(_DWORD *)(v20 + 2044);
            v1180 = *(_QWORD *)(v20 + 2048);
            if ( v1175 < (_QWORD *)((char *)v1175 + v1176) )
            {
              do
              {
                _mm_prefetch(v1178, 0);
                v1178 += 64;
              }
              while ( v1178 < (const char *)v1175 + v1176 );
            }
            v1181 = *(_QWORD *)(v20 + 2048);
            for ( i1 = (unsigned int)v1176 >> 7; i1; --i1 )
            {
              v1183 = 8LL;
              do
              {
                v1184 = v1177[1] ^ __ROL8__(*v1177 ^ v1181, v1179);
                v1177 += 2;
                v1181 = __ROL8__(v1184, v1179);
                --v1183;
              }
              while ( v1183 );
              v1185 = (__ROL8__(v1180 ^ ((char *)v1177 - (char *)v1175), 17) ^ v1180 ^ (unsigned __int64)((char *)v1177 - (char *)v1175))
                    * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x460) = *((_QWORD *)&v1185 + 1);
              v1179 = (BYTE8(v1185) ^ (unsigned __int8)(v1185 ^ v1179)) & 0x3F;
              if ( !v1179 )
                LOBYTE(v1179) = 1;
            }
            v1186 = v1176 & 0x7F;
            if ( (unsigned int)v1186 >= 8 )
            {
              v1187 = (unsigned __int64)(unsigned int)v1186 >> 3;
              do
              {
                v1181 = __ROL8__(*v1177++ ^ v1181, v1179);
                v1186 = (unsigned int)(v1186 - 8);
                --v1187;
              }
              while ( v1187 );
            }
            for ( j = 0LL; (_DWORD)v1186; v1186 = (unsigned int)(v1186 - 1) )
            {
              v1188 = *(unsigned __int8 *)v1177;
              v1177 = (_QWORD *)((char *)v1177 + 1);
              v1181 = __ROL8__(v1188 ^ v1181, v1179);
            }
            for ( i2 = v1181; ; LODWORD(v1181) = i2 ^ v1181 )
            {
              i2 >>= 31;
              if ( !i2 )
                break;
            }
            v1190 = v1181 & 0x7FFFFFFF;
            v1191 = 0;
            if ( v1190 == *((_DWORD *)v53 + 5) )
              goto LABEL_1848;
            if ( !*(_DWORD *)v53 )
              v1191 = *((_DWORD *)v53 + 6) != 0;
            v1192 = *((unsigned int *)v53 + 4);
            v1193 = *((_QWORD *)v53 + 1);
            if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
            {
              v1194 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1195 = v1193 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1193 + v1192 - 1) | 0xFFF;
              v1196 = (v1193 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1197 = v1194;
                while ( 1 )
                {
                  v1198 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                            v1195,
                            0LL,
                            v1186,
                            v1177);
                  if ( v1198 != -1073741267 )
                    break;
                  if ( v1191 )
                    goto LABEL_1800;
                  if ( v1194 > 1u )
                    goto LABEL_1797;
                  v1197 = v1194;
                  __writecr8(v1194);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1198 < 0 )
                  break;
LABEL_1797:
                v1186 = 4096LL;
                v1195 += 4096LL;
                v1196 += 4096LL;
                if ( v1196 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                  goto LABEL_1798;
              }
LABEL_1800:
              __writecr8(v1197);
              v53 = *(char **)v2;
              j = 0LL;
            }
            v1199 = *(_DWORD *)(v20 + 2264);
            if ( !v1199 )
            {
              v1200 = *((unsigned int *)v53 + 5) ^ (unsigned __int64)v1190;
              goto LABEL_1803;
            }
            goto LABEL_1804;
          }
          if ( *(_QWORD *)(v20 + 2400) != j )
          {
            v1202 = *(_DWORD *)(v20 + 2420);
            LOBYTE(v1203) = v1202;
            if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
            {
              v1203 = v1202 ^ ((unsigned __int8)v1202 ^ (unsigned __int8)(8 * v1202)) & 0x20;
              *(_DWORD *)(v20 + 2420) = v1203;
              goto LABEL_1810;
            }
            if ( (((unsigned __int8)v1202 ^ (unsigned __int8)(v1202 >> 3)) & 4) == 0 )
            {
LABEL_1810:
              if ( (v1203 & 4) != 0 )
              {
                v1204 = *((_QWORD *)v53 + 1) & 0xFFFFFFFFFFFFF000uLL;
                for ( i3 = ((*((_QWORD *)v53 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v53 + 4) + 4095) >> 12;
                      i3;
                      v1204 += 4096LL )
                {
                  --i3;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v20 + 680))(v1204)
                    && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
                  {
                    *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v20 + 2288) = *(int *)v53;
                    *(_QWORD *)(v20 + 2296) = v1204;
                    *(_DWORD *)(v20 + 2264) = 1;
                  }
                  *(_DWORD *)(v20 + 2064) += 256;
                }
                goto LABEL_1848;
              }
              v1206 = (_QWORD *)*((_QWORD *)v53 + 1);
              v1207 = *((unsigned int *)v53 + 4);
              v1208 = v1206;
              *(_DWORD *)(v20 + 2064) += v1207;
              v1209 = (const char *)v1206;
              v1210 = *(_DWORD *)(v20 + 2044);
              v1211 = *(_QWORD *)(v20 + 2048);
              if ( v1206 < (_QWORD *)((char *)v1206 + v1207) )
              {
                do
                {
                  _mm_prefetch(v1209, 0);
                  v1209 += 64;
                }
                while ( v1209 < (const char *)v1206 + v1207 );
              }
              v1212 = *(_QWORD *)(v20 + 2048);
              for ( i4 = (unsigned int)v1207 >> 7; i4; --i4 )
              {
                v1214 = 8LL;
                do
                {
                  v1215 = v1208[1] ^ __ROL8__(*v1208 ^ v1212, v1210);
                  v1208 += 2;
                  v1212 = __ROL8__(v1215, v1210);
                  --v1214;
                }
                while ( v1214 );
                v1216 = (__ROL8__(v1211 ^ ((char *)v1208 - (char *)v1206), 17) ^ v1211 ^ (unsigned __int64)((char *)v1208 - (char *)v1206))
                      * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x468) = *((_QWORD *)&v1216 + 1);
                v1210 = (BYTE8(v1216) ^ (unsigned __int8)(v1216 ^ v1210)) & 0x3F;
                if ( !v1210 )
                  LOBYTE(v1210) = 1;
              }
              v1217 = v1207 & 0x7F;
              if ( v1217 >= 8 )
              {
                v1218 = (unsigned __int64)v1217 >> 3;
                do
                {
                  v1212 = __ROL8__(*v1208++ ^ v1212, v1210);
                  v1217 -= 8;
                  --v1218;
                }
                while ( v1218 );
              }
              for ( j = 0LL; v1217; --v1217 )
              {
                v1219 = *(unsigned __int8 *)v1208;
                v1208 = (_QWORD *)((char *)v1208 + 1);
                v1212 = __ROL8__(v1219 ^ v1212, v1210);
              }
              for ( i5 = v1212; ; LODWORD(v1212) = i5 ^ v1212 )
              {
                i5 >>= 31;
                if ( !i5 )
                  break;
              }
              v1221 = *((_DWORD *)v53 + 5);
              v1222 = v1212 & 0x7FFFFFFF;
              if ( v1222 == v1221 )
                goto LABEL_1848;
              v1223 = *((unsigned int *)v53 + 4);
              v1224 = *((_QWORD *)v53 + 1);
              if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
              {
                v1225 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1226 = v1224 & 0xFFFFFFFFFFFFF000uLL;
                v1227 = (v1224 + v1223 - 1) | 0xFFF;
                v1228 = (v1224 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1197 = v1225;
                  while ( 1 )
                  {
                    v1229 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                              v1226,
                              0LL,
                              v1224,
                              v1208);
                    if ( v1229 != -1073741267 )
                      break;
                    if ( v1225 > 1u )
                      goto LABEL_1842;
                    v1197 = v1225;
                    __writecr8(v1225);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1229 < 0 )
                    break;
LABEL_1842:
                  v1224 = 4096LL;
                  v1226 += 4096LL;
                  v1228 += 4096LL;
                  if ( v1228 == v1227 )
                  {
LABEL_1798:
                    __writecr8(v1197);
                    j = 0LL;
LABEL_1848:
                    if ( (*(_DWORD *)(v20 + 2420) & 0x4000) != 0 )
                    {
                      _InterlockedAnd(
                        *(volatile signed __int32 **)(v20 + 1232),
                        ~(1 << ((*(_DWORD *)(v20 + 2416) >> 10) & 0x1F)));
                      _enable();
                    }
                    goto LABEL_178;
                  }
                }
                __writecr8(v1197);
                v53 = *(char **)v2;
                j = 0LL;
                v1221 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
              }
              v1199 = *(_DWORD *)(v20 + 2264);
              if ( !v1199 )
              {
                v1200 = v1221 ^ (unsigned __int64)v1222;
LABEL_1803:
                *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1200;
                v1199 = *(_DWORD *)(v20 + 2264);
              }
LABEL_1804:
              v1201 = *((_QWORD *)v53 + 1);
              if ( !v1199 )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = v1201;
                *(_DWORD *)(v20 + 2264) = 1;
              }
              goto LABEL_1848;
            }
          }
          *(_DWORD *)(v20 + 2060) = j;
          goto LABEL_1848;
        }
        v1248 = *((_DWORD *)v53 + 8);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v20;
        if ( (v1248 & 2) != 0 )
        {
          if ( *(_QWORD *)(v20 + 2400) == j )
            goto LABEL_1894;
          v1249 = *(_DWORD *)(v20 + 2420);
          if ( (v1249 & 4) != 0 )
            goto LABEL_1894;
          if ( (v1248 & 2) != 0 )
          {
            v1250 = *(_DWORD *)(v20 + 2420);
            if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
            {
              v1250 = v1249 ^ ((unsigned __int8)v1249 ^ (unsigned __int8)(8 * v1249)) & 0x20;
              *(_DWORD *)(v20 + 2420) = v1250;
              goto LABEL_1890;
            }
            if ( (((unsigned __int8)v1249 ^ (unsigned __int8)(v1249 >> 3)) & 4) != 0 )
            {
LABEL_1894:
              *(_DWORD *)(v20 + 2060) = j;
              goto LABEL_178;
            }
LABEL_1890:
            if ( *(_QWORD *)(v20 + 2400) == j )
              goto LABEL_1944;
            LOBYTE(v1251) = v1250;
            if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
            {
              v1251 = v1250 ^ ((unsigned __int8)v1250 ^ (unsigned __int8)(8 * v1250)) & 0x20;
              *(_DWORD *)(v20 + 2420) = v1251;
              goto LABEL_1896;
            }
            if ( (((unsigned __int8)v1250 ^ (unsigned __int8)(v1250 >> 3)) & 4) != 0 )
            {
LABEL_1944:
              *(_DWORD *)(v20 + 2060) = j;
              goto LABEL_1945;
            }
LABEL_1896:
            if ( (v1251 & 4) != 0 )
            {
              v1252 = *((_QWORD *)v53 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v1253 = ((*((_QWORD *)v53 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v53 + 4) + 4095) >> 12;
              if ( v1253 )
              {
                do
                {
                  --v1253;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v20 + 680))(v1252)
                    && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
                  {
                    *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v20 + 2288) = *(int *)v53;
                    *(_QWORD *)(v20 + 2296) = v1252;
                    *(_DWORD *)(v20 + 2264) = 1;
                  }
                  *(_DWORD *)(v20 + 2064) += 256;
                  v1252 += 4096LL;
                }
                while ( v1253 );
                v1254 = 1;
                goto LABEL_1931;
              }
LABEL_1945:
              v1254 = 1;
              goto LABEL_1931;
            }
            v1255 = (_QWORD *)*((_QWORD *)v53 + 1);
            v1256 = *((unsigned int *)v53 + 4);
            v1257 = v1255;
            *(_DWORD *)(v20 + 2064) += v1256;
            v1258 = (const char *)v1255;
            v1259 = *(_DWORD *)(v20 + 2044);
            v1260 = *(_QWORD *)(v20 + 2048);
            if ( v1255 < (_QWORD *)((char *)v1255 + v1256) )
            {
              do
              {
                _mm_prefetch(v1258, 0);
                v1258 += 64;
              }
              while ( v1258 < (const char *)v1255 + v1256 );
            }
            v1261 = *(_QWORD *)(v20 + 2048);
            for ( i6 = (unsigned int)v1256 >> 7; i6; --i6 )
            {
              v1263 = 8LL;
              do
              {
                v1264 = v1257[1] ^ __ROL8__(*v1257 ^ v1261, v1259);
                v1257 += 2;
                v1261 = __ROL8__(v1264, v1259);
                --v1263;
              }
              while ( v1263 );
              v1265 = (__ROL8__(v1260 ^ ((char *)v1257 - (char *)v1255), 17) ^ v1260 ^ (unsigned __int64)((char *)v1257 - (char *)v1255))
                    * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x470) = *((_QWORD *)&v1265 + 1);
              v1259 = (BYTE8(v1265) ^ (unsigned __int8)(v1265 ^ v1259)) & 0x3F;
              if ( !v1259 )
                LOBYTE(v1259) = 1;
            }
            v1266 = v1256 & 0x7F;
            if ( v1266 >= 8 )
            {
              v1267 = (unsigned __int64)v1266 >> 3;
              do
              {
                v1261 = __ROL8__(*v1257++ ^ v1261, v1259);
                v1266 -= 8;
                --v1267;
              }
              while ( v1267 );
            }
            for ( j = 0LL; v1266; --v1266 )
            {
              v1268 = *(unsigned __int8 *)v1257;
              v1257 = (_QWORD *)((char *)v1257 + 1);
              v1261 = __ROL8__(v1268 ^ v1261, v1259);
            }
            for ( i7 = v1261; ; LODWORD(v1261) = i7 ^ v1261 )
            {
              i7 >>= 31;
              if ( !i7 )
                break;
            }
            v1270 = *((_DWORD *)v53 + 5);
            v1271 = v1261 & 0x7FFFFFFF;
            if ( v1271 == v1270 )
            {
LABEL_1930:
              v1254 = 1;
              goto LABEL_1931;
            }
            v1272 = *((unsigned int *)v53 + 4);
            v1273 = *((_QWORD *)v53 + 1);
            if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
            {
              v1274 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1275 = v1273 & 0xFFFFFFFFFFFFF000uLL;
              v1276 = (v1273 + v1272 - 1) | 0xFFF;
              v1277 = (v1273 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1278 = v1274;
                while ( 1 )
                {
                  v1279 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                            v1275,
                            0LL,
                            v1273,
                            v1257);
                  if ( v1279 != -1073741267 )
                    break;
                  if ( v1274 > 1u )
                    goto LABEL_1928;
                  v1278 = v1274;
                  __writecr8(v1274);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1279 < 0 )
                  break;
LABEL_1928:
                v1273 = 4096LL;
                v1275 += 4096LL;
                v1277 += 4096LL;
                if ( v1277 == v1276 )
                  goto LABEL_1929;
              }
              __writecr8(v1278);
              v53 = *(char **)v2;
              j = 0LL;
              v1270 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
            }
            v1285 = *(_DWORD *)(v20 + 2264);
            if ( !v1285 )
            {
              v1286 = v1270 ^ (unsigned __int64)v1271;
              goto LABEL_1941;
            }
            goto LABEL_1942;
          }
        }
        v1288 = (_QWORD *)*((_QWORD *)v53 + 1);
        v1289 = *((unsigned int *)v53 + 4);
        v1290 = v1288;
        *(_DWORD *)(v20 + 2064) += v1289;
        v1291 = (const char *)v1288;
        v1292 = *(_DWORD *)(v20 + 2044);
        v1293 = *(_QWORD *)(v20 + 2048);
        if ( v1288 < (_QWORD *)((char *)v1288 + v1289) )
        {
          do
          {
            _mm_prefetch(v1291, 0);
            v1291 += 64;
          }
          while ( v1291 < (const char *)v1288 + v1289 );
        }
        v1294 = *(_QWORD *)(v20 + 2048);
        v1295 = (unsigned int)v1289 >> 7;
        if ( (unsigned int)v1289 >> 7 )
        {
          do
          {
            v1296 = 8LL;
            do
            {
              v1297 = v1294 ^ *v1290;
              v1298 = v1290[1];
              v1290 += 2;
              v1294 = __ROL8__(__ROL8__(v1297, v1292) ^ v1298, v1292);
              --v1296;
            }
            while ( v1296 );
            v1299 = __ROL8__(v1293 ^ ((char *)v1290 - (char *)v1288), 17) ^ v1293 ^ ((char *)v1290 - (char *)v1288);
            v1300 = (v1299 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x478) = v1300;
            v1292 = ((unsigned __int8)(v1300 ^ v1299) ^ (unsigned __int8)v1292) & 0x3F;
            if ( !v1292 )
              LOBYTE(v1292) = 1;
            --v1295;
          }
          while ( v1295 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1301 = v1289 & 0x7F;
        v1254 = 1;
        if ( v1301 >= 8 )
        {
          v1302 = (unsigned __int64)v1301 >> 3;
          do
          {
            v1294 = __ROL8__(*v1290++ ^ v1294, v1292);
            v1301 -= 8;
            --v1302;
          }
          while ( v1302 );
        }
        for ( j = 0LL; v1301; --v1301 )
        {
          v1303 = *(unsigned __int8 *)v1290;
          v1290 = (_QWORD *)((char *)v1290 + 1);
          v1294 = __ROL8__(v1303 ^ v1294, v1292);
        }
        for ( i8 = v1294; ; LODWORD(v1294) = i8 ^ v1294 )
        {
          i8 >>= 31;
          if ( !i8 )
            break;
        }
        v1305 = v1294 & 0x7FFFFFFF;
        v1306 = 0;
        if ( v1305 != *((_DWORD *)v53 + 5) )
        {
          if ( !*(_DWORD *)v53 )
            v1306 = *((_DWORD *)v53 + 6) != 0;
          v1307 = *((unsigned int *)v53 + 4);
          v1308 = *((_QWORD *)v53 + 1);
          if ( *((_DWORD *)v53 + 4) )
          {
            v1309 = 64LL;
            if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
            {
              v1310 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1311 = v1308 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1308 + v1307 - 1) | 0xFFF;
              v1312 = (v1308 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1278 = v1310;
                while ( 1 )
                {
                  v1313 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                            v1311,
                            0LL,
                            v1309,
                            v1290);
                  if ( v1313 != -1073741267 )
                    break;
                  if ( v1306 )
                    goto LABEL_1977;
                  if ( v1310 > 1u )
                    goto LABEL_1975;
                  v1278 = v1310;
                  __writecr8(v1310);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1313 < 0 )
                  break;
LABEL_1975:
                v1309 = 4096LL;
                v1311 += 4096LL;
                v1312 += 4096LL;
                if ( v1312 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                {
LABEL_1929:
                  __writecr8(v1278);
                  v53 = *(char **)v2;
                  j = 0LL;
                  goto LABEL_1930;
                }
              }
LABEL_1977:
              __writecr8(v1278);
              v53 = *(char **)v2;
              j = 0LL;
            }
          }
          v1285 = *(_DWORD *)(v20 + 2264);
          if ( !v1285 )
          {
            v1286 = *((unsigned int *)v53 + 5) ^ (unsigned __int64)v1305;
LABEL_1941:
            *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1286;
            v1285 = *(_DWORD *)(v20 + 2264);
          }
LABEL_1942:
          v1287 = *((_QWORD *)v53 + 1);
          v1254 = 1;
          if ( !v1285 )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v1287;
            *(_DWORD *)(v20 + 2264) = 1;
          }
        }
LABEL_1931:
        if ( (*((_DWORD *)v53 + 8) & 1) == 0 )
          goto LABEL_178;
        v1280 = *((_QWORD *)v53 + 3);
        v1281 = (*(__int64 (__fastcall **)(__int64))(v20 + 496))(v1280);
        v1282 = (_DWORD *)(v1281 + *(unsigned __int16 *)(v1281 + 20) + 24LL);
        v1283 = &v1282[10 * *(unsigned __int16 *)(v1281 + 6)];
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1283;
        if ( v1282 == v1283 )
          goto LABEL_178;
        v1284 = *(_DWORD *)(v20 + 2060);
        if ( !v1284 )
        {
          *(_DWORD *)(v20 + 2060) = 4096;
          v1284 = 4096;
        }
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1280 == *(_QWORD *)(v20 + 1496)
                                                                             || v1280 == *(_QWORD *)(v20 + 1504);
        v1314 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        while ( 2 )
        {
          v1315 = v1282[4];
          v1316 = v1282[3];
          if ( v1315 <= v1282[2] )
            v1315 = v1282[2];
          v1317 = (v1315 + v1316 + 4095) & 0xFFFFF000;
          if ( v1284 >= v1317 )
            goto LABEL_2001;
          if ( (v1282[9] & 0x2000000) != 0 )
            goto LABEL_2000;
          v1318 = *v1282;
          if ( *v1282 == 1414090313 && v1282[1] == 1195525195 )
            goto LABEL_2000;
          if ( v1318 == 1162297680 )
          {
            v1319 = *((_WORD *)v1282 + 2);
            if ( v1319 == 30839 || v1319 == 29303 || v1319 == 30583 )
              goto LABEL_2000;
          }
          if ( v1318 == 1095914053 && *((_WORD *)v1282 + 2) == 16724 )
            goto LABEL_2000;
          v1320 = *(_QWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          if ( v1320 )
          {
            v1321 = (unsigned __int8 *)v1320[290];
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x258) = v1320[291];
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x260) = v1320[292];
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x268) = v1320[293];
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = v1321;
          }
          else
          {
            v1322 = *(_OWORD *)off_140402D70;
            *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = *(_OWORD *)VfExcludeSections;
            v1321 = *(unsigned __int8 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x250);
            *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x260) = v1322;
          }
          v1323 = 7;
          v1324 = (unsigned __int8 *)v1282;
          while ( 1 )
          {
            v1325 = *v1324++;
            v1326 = *v1321++;
            if ( v1325 != v1326 )
              break;
            if ( !--v1323 )
              goto LABEL_2000;
          }
          v1329 = *(__int64 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x258);
          v1330 = 8;
          v1331 = (__int64 *)v1282;
          do
          {
            v1332 = *v1331++;
            v1333 = *v1329++;
            if ( v1332 != v1333 )
              goto LABEL_2011;
            v1330 -= 8;
          }
          while ( v1330 >= 8 );
          if ( !v1330 )
            goto LABEL_2000;
          while ( 1 )
          {
            v1334 = *(unsigned __int8 *)v1331;
            v1331 = (__int64 *)((char *)v1331 + 1);
            v1335 = *(unsigned __int8 *)v1329;
            v1329 = (__int64 *)((char *)v1329 + 1);
            if ( v1334 != v1335 )
              break;
            if ( !--v1330 )
              goto LABEL_2000;
          }
LABEL_2011:
          v1336 = *(unsigned __int8 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x260);
          v1337 = 4;
          v1338 = (unsigned __int8 *)v1282;
          while ( 1 )
          {
            v1339 = *v1338++;
            v1340 = *v1336++;
            if ( v1339 != v1340 )
              break;
            if ( !--v1337 )
              goto LABEL_2000;
          }
          v1341 = *(unsigned __int8 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x268);
          v1342 = 6;
          v1343 = (unsigned __int8 *)v1282;
          while ( 1 )
          {
            v1344 = *v1343++;
            v1345 = *v1341++;
            if ( v1344 != v1345 )
              break;
            if ( !--v1342 )
              goto LABEL_2000;
          }
          v1346 = v1282[9];
          if ( v1346 < 0 || (v1346 & 0x20000000) == 0 )
          {
LABEL_2000:
            v1284 = v1317;
LABEL_2001:
            v1327 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            goto LABEL_2002;
          }
          if ( v1314 && *v1282 != 778396769 )
            v1254 = *v1282 == 1162297680;
          v1327 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          if ( v1284 >= v1316 )
            v1316 = v1284;
          v1284 = v1316;
LABEL_2027:
          v1347 = v1280 + v1284;
          if ( (*(_BYTE *)(v1327 + 2147) & 4) != 0 )
          {
            __asm { xbegin  $+6 }
            __asm { xend }
            ++*(_DWORD *)(v1327 + 2084);
            *(_DWORD *)(v1327 + 2064) += 256;
            goto LABEL_2038;
          }
          if ( v1254 )
          {
            v1348 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, unsigned __int8 *))(v1327 + 1096))(
                      v2 + 848,
                      v1280 + v1284,
                      v1327,
                      v1343);
            if ( v1348 < 0 )
            {
              v1327 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              if ( v1348 == -1073741819 && !*(_DWORD *)(v1327 + 2264) )
              {
                v1349 = *(int **)v2;
                *(_QWORD *)(v1327 + 2272) = v1327 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v1327 + 2280) = (char *)v1349 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v1327 + 2288) = *v1349;
                *(_QWORD *)(v1327 + 2296) = v1347;
                *(_DWORD *)(v1327 + 2264) = 1;
              }
              goto LABEL_2038;
            }
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x350) = 0LL;
            *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x35A) = 0;
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x378) = 4096;
            *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x358) = 8
                                                                                  * (((unsigned __int16)((v1347 & 0xFFF) + 0x1FFF) >> 12)
                                                                                   + 6);
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x370) = v1347 & 0xFFFFFFFFFFFFF000uLL;
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x37C) = v1347 & 0xFFF;
            v1350 = (*(__int64 (__fastcall **)(__int64))(v1327 + 1104))(v1280 + v1284);
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x488) = v1350;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x380) = v1350 >> 12;
          }
          v1351 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          ++*(_DWORD *)(v1351 + 2088);
          *(_QWORD *)(v1351 + 2616) = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x370)
                                    + *(unsigned int *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x37C);
          *(_QWORD *)(v1351 + 2608) = *(_QWORD *)v2;
          v1352 = KeGetCurrentIrql();
          __writecr8(2uLL);
          RtlInitMinimalBarrier(v1351 + 2576, **(unsigned int **)(v1351 + 1512), 0LL);
          v1327 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                + 0x38)
                                                    + 1088LL))(
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38)
                  + *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) + 2012LL));
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1327;
          __writecr8(v1352);
          if ( v1254 )
          {
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(v1327 + 1112))(v2 + 848, 0LL);
            v1327 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
          }
          *(_DWORD *)(v1327 + 2064) += 81920;
LABEL_2038:
          v1353 = *(_DWORD *)(v1327 + 2064);
          v1284 += 4096;
          if ( v1284 >= v1317 || v1353 >= *(_DWORD *)(v1327 + 2068) )
          {
            if ( v1353 >= *(_DWORD *)(v1327 + 2068) )
            {
              v1328 = *(_DWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              goto LABEL_2043;
            }
            v1254 = 1;
LABEL_2002:
            v1328 = *(_DWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            v1282 += 10;
            if ( v1282 == v1328 )
            {
LABEL_2043:
              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              if ( v1282 == v1328 && v1284 >= v1317 )
              {
                j = 0LL;
                *(_DWORD *)(v1327 + 2060) = 0;
                goto LABEL_178;
              }
              *(_DWORD *)(v1327 + 2060) = v1284;
              goto LABEL_238;
            }
            continue;
          }
          goto LABEL_2027;
        }
      }
LABEL_2085:
      if ( *(_DWORD *)(v20 + 2060) != (_DWORD)j )
        goto LABEL_2096;
      if ( v85 == 12 )
      {
        if ( *(_QWORD *)(v20 + 2400) == j )
        {
          *(_DWORD *)(v20 + 2060) = j;
          goto LABEL_2096;
        }
        v1373 = *(_DWORD *)(v20 + 2420) ^ ((unsigned __int8)*(_DWORD *)(v20 + 2420) ^ (unsigned __int8)(8 * *(_DWORD *)(v20 + 2420))) & 0x20;
        *(_DWORD *)(v20 + 2420) = v1373;
        if ( (v1373 & 4) != 0 )
        {
          v1374 = *((_QWORD *)v53 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v1375 = ((*((_QWORD *)v53 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v53 + 4) + 4095) >> 12;
          if ( v1375 )
          {
            do
            {
              --v1375;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v20 + 680))(v1374)
                && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = v1374;
                *(_DWORD *)(v20 + 2264) = 1;
              }
              *(_DWORD *)(v20 + 2064) += 256;
              v1374 += 4096LL;
            }
            while ( v1375 );
            goto LABEL_2095;
          }
LABEL_2096:
          v1376 = *((_QWORD *)v53 + 1);
          v1377 = *(unsigned int *)(v20 + 2060);
          v1378 = *((unsigned int *)v53 + 4);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1376;
          v1379 = (unsigned int *)(v1376 + 12 * v1377);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1379;
          v1380 = (unsigned int *)&v53[4 * v1377 + 48];
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1380;
          v1381 = (unsigned int *)(v1376 + 12 * (v1378 / 0xC));
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1381;
          while ( 2 )
          {
            if ( (int)*v1380 >= (int)j )
            {
              v1382 = *((_QWORD *)v53 + 4) + *v1379;
              v1383 = v1379[1] - *v1379;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1382;
              if ( v85 == 43 )
              {
                v1455 = sub_140349E50(v20, v1382, v1383);
                *(_DWORD *)(v20 + 2064) += 8 * v1383;
                if ( (*(_DWORD *)(v20 + 2420) & 0x800) != 0 )
                {
                  v1456 = (_BYTE *)(v1382 - 6);
                  v1457 = (char *)(v1382 - 6 + 5);
                  v1458 = *v1457;
                  if ( *(_BYTE *)(v1382 - 6) != 76
                    || v1456[1] != 0x87
                    || v1456[2]
                    || v1456[3] != 0x98
                    || v1456[4] != 0xC3
                    || v1458 != -112 && v1458 != -15 )
                  {
                    goto LABEL_2212;
                  }
                  v1459 = *(volatile signed __int32 **)(v20 + 1232);
                  while ( 1 )
                  {
                    _disable();
                    if ( !_interlockedbittestandset(v1459, (*(_DWORD *)(v20 + 2416) >> 10) & 0x1F) )
                      break;
                    _enable();
                    _mm_pause();
                  }
                  CurrentPrcb = 38LL;
                  v1461 = (_QWORD *)(v2 + 2176);
                  v1462 = 304;
                  do
                  {
                    *v1461 = 0LL;
                    v1462 -= 8;
                    ++v1461;
                    --CurrentPrcb;
                  }
                  while ( CurrentPrcb );
                  if ( v1462 )
                  {
                    CurrentPrcb = 0xFFFFFFFFLL;
                    do
                    {
                      *(_BYTE *)v1461 = 0;
                      v1461 = (_QWORD *)((char *)v1461 + 1);
                      --v1462;
                    }
                    while ( v1462 );
                  }
                  *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x890) = *(_OWORD *)(v20 + 2096);
                  *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x8A0) = *(_OWORD *)(v20 + 2112);
                  v1463 = *(_OWORD *)(v20 + 2128);
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x272) = ((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                         + 2176;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A8) = v20 + 2164;
                  v1464 = (unsigned __int64)(v20 + 2164) >> 16;
                  *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x890) = v20 + 2164;
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x898) = (unsigned __int64)(v20 + 2164) >> 32;
                  *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x9A0) = v1463;
                  *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x270) = 304;
                  *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x896) = v1464;
                  __sidt((void *)(v2 + 816));
                  __lidt((void *)(v2 + 624));
                  *v1457 = -15;
                  if ( *v1457 != -15 )
                    goto LABEL_2209;
                  if ( (*(_DWORD *)(v20 + 2420) & 0x20000) == 0 )
                  {
                    CurrentPrcb = (__int64)KeGetCurrentPrcb();
                    **(_QWORD **)(v20 + 1200) = v20 - 0x5C5FC0A76E374B18LL;
                    v1464 = v1382;
                    **(_QWORD **)(v20 + 1208) = CurrentPrcb;
                    **(_QWORD **)(v20 + 1216) = v1382;
                    **(_QWORD **)(v20 + 1224) = 275LL;
                  }
                  ((void (__fastcall *)(unsigned __int64, __int64, __int64))(v1382 - 6 + 5))(v1464, CurrentPrcb, 1LL);
                  if ( (*(_DWORD *)(v20 + 2420) & 0x20000) == 0 )
                  {
                    **(_QWORD **)(v20 + 1200) = 0xA3A03F5891C8B4E8uLL;
                    **(_QWORD **)(v20 + 1208) = 0LL;
                    **(_QWORD **)(v20 + 1216) = 0LL;
                    **(_QWORD **)(v20 + 1224) = 0LL;
                  }
                  if ( *v1457 == -15 )
                  {
                    *v1457 = -112;
                    v1465 = *v1457 == -112;
                  }
                  else
                  {
LABEL_2209:
                    v1465 = 0;
                  }
                  __lidt((void *)(v2 + 816));
                  _InterlockedAnd(
                    *(volatile signed __int32 **)(v20 + 1232),
                    ~(1 << ((*(_DWORD *)(v20 + 2416) >> 10) & 0x1F)));
                  _enable();
                  if ( v1465 )
                  {
                    v1381 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                  }
                  else
                  {
LABEL_2212:
                    v1381 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    if ( !*(_DWORD *)(v20 + 2264) )
                    {
                      v1466 = *(int **)v2;
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = (char *)v1466 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *v1466;
                      *(_QWORD *)(v20 + 2296) = v1456;
                      *(_DWORD *)(v20 + 2264) = 1;
                    }
                  }
                  v1379 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                }
              }
              else
              {
                *(_DWORD *)(v20 + 2064) += v1383;
                v1384 = (_QWORD *)v1382;
                v1385 = *(_DWORD *)(v20 + 2044);
                v1386 = (const char *)v1382;
                v1387 = *(_QWORD *)(v20 + 2048);
                v1388 = v1382 + v1383;
                if ( v1382 < v1388 )
                {
                  do
                  {
                    _mm_prefetch(v1386, 0);
                    v1386 += 64;
                  }
                  while ( (unsigned __int64)v1386 < v1388 );
                }
                v1389 = *(_QWORD *)(v20 + 2048);
                v1390 = v1383 >> 7;
                if ( v1383 >> 7 )
                {
                  do
                  {
                    v1391 = 8LL;
                    do
                    {
                      v1392 = v1389 ^ *v1384;
                      v1393 = v1384[1];
                      v1384 += 2;
                      v1389 = __ROL8__(__ROL8__(v1392, v1385) ^ v1393, v1385);
                      --v1391;
                    }
                    while ( v1391 );
                    v1394 = __ROL8__(v1387 ^ ((unsigned __int64)v1384 - v1382), 17) ^ v1387 ^ ((unsigned __int64)v1384
                                                                                             - v1382);
                    v1395 = (v1394 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0) = v1395;
                    v1385 = ((unsigned __int8)(v1394 ^ v1395) ^ (unsigned __int8)v1385) & 0x3F;
                    if ( !v1385 )
                      LOBYTE(v1385) = 1;
                    --v1390;
                  }
                  while ( v1390 );
                  v1380 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  v1381 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                }
                v1396 = v1383 & 0x7F;
                if ( v1396 >= 8 )
                {
                  v1397 = (unsigned __int64)(v1383 & 0x7F) >> 3;
                  do
                  {
                    v1389 = __ROL8__(*v1384++ ^ v1389, v1385);
                    v1396 -= 8;
                    --v1397;
                  }
                  while ( v1397 );
                }
                if ( v1396 )
                {
                  do
                  {
                    v1398 = *(unsigned __int8 *)v1384;
                    v1384 = (_QWORD *)((char *)v1384 + 1);
                    v1389 = __ROL8__(v1398 ^ v1389, v1385);
                    --v1396;
                  }
                  while ( v1396 );
                  v1380 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                }
                for ( i9 = v1389; ; LODWORD(v1389) = i9 ^ v1389 )
                {
                  i9 >>= 31;
                  if ( !i9 )
                    break;
                }
                v1455 = v1389 & 0x7FFFFFFF;
              }
              v1467 = *v1380;
              if ( v1455 == (*v1380 & 0x7FFFFFFF) )
              {
LABEL_2227:
                j = 0LL;
              }
              else
              {
                v1468 = v1383;
                j = 0LL;
                if ( v1468 && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
                {
                  v1469 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1470 = v1382 & 0xFFFFFFFFFFFFF000uLL;
                  v1471 = (v1468 + v1382 - 1) | 0xFFF;
                  v1472 = (v1382 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1473 = v1469;
                    while ( 1 )
                    {
                      v1474 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v20 + 1120))(v1470, 0LL);
                      if ( v1474 != -1073741267 )
                        break;
                      if ( v1469 > 1u )
                        goto LABEL_2225;
                      v1473 = v1469;
                      __writecr8(v1469);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1474 < 0 )
                      break;
LABEL_2225:
                    v1470 += 4096LL;
                    v1472 += 4096LL;
                    if ( v1472 == v1471 )
                    {
                      __writecr8(v1473);
                      v1379 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                      v1380 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      v1381 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                      goto LABEL_2227;
                    }
                  }
                  __writecr8(v1473);
                  v1380 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  j = 0LL;
                  v1382 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                  v1467 = *v1380;
                }
                v1489 = v1467;
                if ( !*(_DWORD *)(v20 + 2264) )
                {
                  LODWORD(v1489) = v1467 & 0x7FFFFFFF;
                  *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1489 ^ v1455;
                  if ( !*(_DWORD *)(v20 + 2264) )
                  {
                    v53 = *(char **)v2;
                    v1379 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                    v1381 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v20 + 2288) = *(int *)v53;
                    *(_QWORD *)(v20 + 2296) = v1382;
                    *(_DWORD *)(v20 + 2264) = 1;
                    goto LABEL_2229;
                  }
                }
                v1379 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                v1381 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
              }
              v53 = *(char **)v2;
            }
LABEL_2229:
            ++v1380;
            v1379 += 3;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1380;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1379;
            v1475 = v1379 == v1381;
            if ( v1379 >= v1381 )
              goto LABEL_2232;
            v85 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            if ( *(_DWORD *)(v20 + 2064) >= *(_DWORD *)(v20 + 2068) )
            {
              v1475 = v1379 == v1381;
LABEL_2232:
              if ( !v1475 )
              {
                *(_DWORD *)(v20 + 2060) = ((__int64)v1379
                                         - *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30))
                                        / 12;
                goto LABEL_178;
              }
              v1476 = *(_QWORD *)(v20 + 1328);
              v1477 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              (*(void (__fastcall **)(__int64))(v20 + 328))(v1476);
              v1479 = **(unsigned int ***)(v20 + 1536);
              v1480 = v1479 + 4;
              v1481 = *((_BYTE *)v1479 + 12);
              v1482 = (unsigned __int64)&v1479[6 * *v1479 + 4];
              do
              {
                v1483 = 24LL;
                v1484 = (__int64 *)(v53 + 24);
                v1485 = v1480;
                do
                {
                  v1486 = *(_QWORD *)v1485;
                  v1485 += 2;
                  v1487 = *v1484++;
                  if ( v1486 != v1487 )
                    goto LABEL_2246;
                  v1483 = (unsigned int)(v1483 - 8);
                }
                while ( (unsigned int)v1483 >= 8 );
                if ( !(_DWORD)v1483 )
                  break;
                while ( 1 )
                {
                  v1478 = *(unsigned __int8 *)v1485;
                  v1485 = (unsigned int *)((char *)v1485 + 1);
                  v1488 = *(unsigned __int8 *)v1484;
                  v1484 = (__int64 *)((char *)v1484 + 1);
                  if ( v1478 != v1488 )
                    break;
                  v75 = (_DWORD)v1483 == 1;
                  v1483 = (unsigned int)(v1483 - 1);
                  if ( v75 )
                    goto LABEL_2247;
                }
LABEL_2246:
                v1480 += 6;
              }
              while ( (unsigned __int64)v1480 < v1482 );
LABEL_2247:
              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v20 + 392))(
                *(_QWORD *)(v20 + 1328),
                v1478,
                v1483,
                v1484);
              __writecr8(v1477);
              j = 0LL;
              if ( !v1481 )
                goto LABEL_2516;
              if ( (*(_DWORD *)(v20 + 2420) & 0x10) != 0 && !*(_DWORD *)(v20 + 2264) )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = 1LL;
                *(_DWORD *)(v20 + 2264) = 1;
              }
              if ( *((_QWORD *)v53 + 3) != 1LL )
              {
LABEL_2516:
                if ( v1480 == (unsigned int *)v1482 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v53;
                  *(_QWORD *)(v20 + 2296) = v1480;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
              }
LABEL_2252:
              *(_DWORD *)(v20 + 2060) = j;
              goto LABEL_178;
            }
            continue;
          }
        }
        v1400 = (_QWORD *)*((_QWORD *)v53 + 1);
        v1401 = *((unsigned int *)v53 + 4);
        v1402 = v1400;
        *(_DWORD *)(v20 + 2064) += v1401;
        v1403 = (const char *)v1400;
        v1404 = *(_DWORD *)(v20 + 2044);
        v1405 = *(_QWORD *)(v20 + 2048);
        if ( v1400 < (_QWORD *)((char *)v1400 + v1401) )
        {
          do
          {
            _mm_prefetch(v1403, 0);
            v1403 += 64;
          }
          while ( v1403 < (const char *)v1400 + v1401 );
        }
        v1406 = *(_QWORD *)(v20 + 2048);
        v1407 = (unsigned int)v1401 >> 7;
        if ( (unsigned int)v1401 >> 7 )
        {
          do
          {
            v1408 = 8LL;
            do
            {
              v1409 = v1406 ^ *v1402;
              v1410 = v1402[1];
              v1402 += 2;
              v1406 = __ROL8__(__ROL8__(v1409, v1404) ^ v1410, v1404);
              --v1408;
            }
            while ( v1408 );
            v1411 = (__ROL8__(v1405 ^ ((char *)v1402 - (char *)v1400), 17) ^ v1405 ^ (unsigned __int64)((char *)v1402 - (char *)v1400))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x490) = *((_QWORD *)&v1411 + 1);
            v1404 = ((unsigned __int8)(v1411 ^ BYTE8(v1411)) ^ (unsigned __int8)v1404) & 0x3F;
            if ( !v1404 )
              LOBYTE(v1404) = 1;
            --v1407;
          }
          while ( v1407 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1412 = v1401 & 0x7F;
        if ( v1412 >= 8 )
        {
          v1413 = (unsigned __int64)v1412 >> 3;
          do
          {
            v1406 = __ROL8__(*v1402++ ^ v1406, v1404);
            v1412 -= 8;
            --v1413;
          }
          while ( v1413 );
        }
        for ( j = 0LL; v1412; --v1412 )
        {
          v1414 = *(unsigned __int8 *)v1402;
          v1402 = (_QWORD *)((char *)v1402 + 1);
          v1406 = __ROL8__(v1414 ^ v1406, v1404);
        }
        for ( i10 = v1406; ; LODWORD(v1406) = i10 ^ v1406 )
        {
          i10 >>= 31;
          if ( !i10 )
            break;
        }
        v1416 = *((_DWORD *)v53 + 5);
        v1417 = v1406 & 0x7FFFFFFF;
        if ( v1417 != v1416 )
        {
          v1418 = *((unsigned int *)v53 + 4);
          v1419 = *((_QWORD *)v53 + 1);
          if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
          {
            v1420 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1421 = v1419 & 0xFFFFFFFFFFFFF000uLL;
            v1422 = (v1419 + v1418 - 1) | 0xFFF;
            v1423 = (v1419 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v1424 = v1420;
              while ( 1 )
              {
                v1425 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v20 + 1120))(v1421, 0LL);
                if ( v1425 != -1073741267 )
                  break;
                if ( v1420 > 1u )
                  goto LABEL_2141;
                v1424 = v1420;
                __writecr8(v1420);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1425 < 0 )
                break;
LABEL_2141:
              v1421 += 4096LL;
              v1423 += 4096LL;
              if ( v1423 == v1422 )
                goto LABEL_2142;
            }
            __writecr8(v1424);
            v53 = *(char **)v2;
            j = 0LL;
            v1416 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
          }
          v1426 = *(_DWORD *)(v20 + 2264);
          if ( !v1426 )
          {
            *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1416 ^ (unsigned __int64)v1417;
            v1426 = *(_DWORD *)(v20 + 2264);
          }
          v1427 = *((_QWORD *)v53 + 1);
          v85 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          if ( !v1426 )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v1427;
            *(_DWORD *)(v20 + 2264) = 1;
          }
          goto LABEL_2096;
        }
      }
      else
      {
        v1428 = (_QWORD *)*((_QWORD *)v53 + 1);
        v1429 = *((unsigned int *)v53 + 4);
        v1430 = v1428;
        *(_DWORD *)(v20 + 2064) += v1429;
        v1431 = (const char *)v1428;
        v1432 = *(_DWORD *)(v20 + 2044);
        v1433 = *(_QWORD *)(v20 + 2048);
        if ( v1428 < (_QWORD *)((char *)v1428 + v1429) )
        {
          do
          {
            _mm_prefetch(v1431, 0);
            v1431 += 64;
          }
          while ( v1431 < (const char *)v1428 + v1429 );
        }
        v1434 = *(_QWORD *)(v20 + 2048);
        v1435 = (unsigned int)v1429 >> 7;
        if ( (unsigned int)v1429 >> 7 )
        {
          do
          {
            v1436 = 8LL;
            do
            {
              v1437 = v1434 ^ *v1430;
              v1438 = v1430[1];
              v1430 += 2;
              v1434 = __ROL8__(__ROL8__(v1437, v1432) ^ v1438, v1432);
              --v1436;
            }
            while ( v1436 );
            v1439 = (__ROL8__(v1433 ^ ((char *)v1430 - (char *)v1428), 17) ^ v1433 ^ (unsigned __int64)((char *)v1430 - (char *)v1428))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x498) = *((_QWORD *)&v1439 + 1);
            v1432 = ((unsigned __int8)(v1439 ^ BYTE8(v1439)) ^ (unsigned __int8)v1432) & 0x3F;
            if ( !v1432 )
              LOBYTE(v1432) = 1;
            --v1435;
          }
          while ( v1435 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1440 = v1429 & 0x7F;
        if ( v1440 >= 8 )
        {
          v1441 = (unsigned __int64)v1440 >> 3;
          do
          {
            v1434 = __ROL8__(*v1430++ ^ v1434, v1432);
            v1440 -= 8;
            --v1441;
          }
          while ( v1441 );
        }
        for ( j = 0LL; v1440; --v1440 )
        {
          v1442 = *(unsigned __int8 *)v1430;
          v1430 = (_QWORD *)((char *)v1430 + 1);
          v1434 = __ROL8__(v1442 ^ v1434, v1432);
        }
        for ( i11 = v1434; ; LODWORD(v1434) = i11 ^ v1434 )
        {
          i11 >>= 31;
          if ( !i11 )
            break;
        }
        v1444 = v1434 & 0x7FFFFFFF;
        v1445 = 0;
        if ( v1444 != *((_DWORD *)v53 + 5) )
        {
          if ( !*(_DWORD *)v53 )
            v1445 = *((_DWORD *)v53 + 6) != 0;
          v1446 = *((unsigned int *)v53 + 4);
          v1447 = *((_QWORD *)v53 + 1);
          if ( *((_DWORD *)v53 + 4) )
          {
            v1448 = 64LL;
            if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
            {
              v1449 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1450 = v1447 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1447 + v1446 - 1) | 0xFFF;
              v1451 = (v1447 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1424 = v1449;
                while ( 1 )
                {
                  v1452 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                            v1450,
                            0LL,
                            v1448,
                            v1430);
                  if ( v1452 != -1073741267 )
                    break;
                  if ( v1445 )
                    goto LABEL_2179;
                  if ( v1449 > 1u )
                    goto LABEL_2177;
                  v1424 = v1449;
                  __writecr8(v1449);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1452 < 0 )
                  break;
LABEL_2177:
                v1450 += 4096LL;
                v1451 += 4096LL;
                if ( v1451 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                {
LABEL_2142:
                  __writecr8(v1424);
                  v53 = *(char **)v2;
                  j = 0LL;
                  goto LABEL_2095;
                }
              }
LABEL_2179:
              __writecr8(v1424);
              v53 = *(char **)v2;
              j = 0LL;
            }
          }
          v1453 = *(_DWORD *)(v20 + 2264);
          if ( !v1453 )
          {
            *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = *((unsigned int *)v53 + 5) ^ (unsigned __int64)v1444;
            v1453 = *(_DWORD *)(v20 + 2264);
          }
          v1454 = *((_QWORD *)v53 + 1);
          if ( !v1453 )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v1454;
            *(_DWORD *)(v20 + 2264) = 1;
          }
        }
      }
LABEL_2095:
      v85 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      goto LABEL_2096;
    }
    if ( v85 == 28 )
    {
      v774 = *((unsigned int *)v53 + 4);
      *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v774;
      if ( (_DWORD)v774 )
      {
        v830 = (_QWORD *)*((_QWORD *)v53 + 1);
        *(_DWORD *)(v20 + 2064) += v774;
        v831 = v830;
        v832 = *(_DWORD *)(v20 + 2044);
        v833 = (const char *)v830;
        v834 = *(_QWORD *)(v20 + 2048);
        if ( v830 < (_QWORD *)((char *)v830 + v774) )
        {
          do
          {
            _mm_prefetch(v833, 0);
            v833 += 64;
          }
          while ( v833 < (const char *)v830 + v774 );
        }
        v835 = (unsigned int)v774 >> 7;
        v836 = *(_QWORD *)(v20 + 2048);
        if ( (unsigned int)v774 >> 7 )
        {
          do
          {
            v837 = 8LL;
            do
            {
              v838 = v836 ^ *v831;
              v839 = v831[1];
              v831 += 2;
              v836 = __ROL8__(__ROL8__(v838, v832) ^ v839, v832);
              --v837;
            }
            while ( v837 );
            v840 = __ROL8__(v834 ^ ((char *)v831 - (char *)v830), 17) ^ v834 ^ ((char *)v831 - (char *)v830);
            v841 = (v840 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x418) = v841;
            v832 = ((unsigned __int8)(v841 ^ v840) ^ (unsigned __int8)v832) & 0x3F;
            if ( !v832 )
              LOBYTE(v832) = 1;
            --v835;
          }
          while ( v835 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          LODWORD(v774) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        }
        v842 = v774 & 0x7F;
        if ( v842 >= 8 )
        {
          v843 = (unsigned __int64)v842 >> 3;
          do
          {
            v836 = __ROL8__(*v831++ ^ v836, v832);
            v842 -= 8;
            --v843;
          }
          while ( v843 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        for ( ; v842; --v842 )
        {
          v844 = *(unsigned __int8 *)v831;
          v831 = (_QWORD *)((char *)v831 + 1);
          v836 = __ROL8__(v844 ^ v836, v832);
        }
        for ( i12 = v836; ; LODWORD(v836) = i12 ^ v836 )
        {
          i12 >>= 31;
          if ( !i12 )
            break;
        }
        v846 = v836 & 0x7FFFFFFF;
        v847 = 0;
        if ( v846 == *((_DWORD *)v53 + 5) )
          goto LABEL_1271;
        if ( !*(_DWORD *)v53 )
          v847 = *((_DWORD *)v53 + 6) != 0;
        v848 = *((unsigned int *)v53 + 4);
        v849 = *((_QWORD *)v53 + 1);
        if ( *((_DWORD *)v53 + 4) )
        {
          v850 = 64LL;
          if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
          {
            v851 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v852 = v849 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v849 + v848 - 1) | 0xFFF;
            v853 = (v849 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v854 = v851;
              while ( 1 )
              {
                v855 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                         v852,
                         0LL,
                         v850,
                         v831);
                if ( v855 != -1073741267 )
                  break;
                if ( v847 )
                  goto LABEL_1289;
                if ( v851 > 1u )
                  goto LABEL_1269;
                v854 = v851;
                __writecr8(v851);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v855 < 0 )
                break;
LABEL_1269:
              v852 += 4096LL;
              v853 += 4096LL;
              if ( v853 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
              {
                __writecr8(v854);
                v53 = *(char **)v2;
LABEL_1271:
                v856 = 0;
                v857 = *((_QWORD *)v53 + 1) - 112LL;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) = v857;
                v858 = *(const char **)(v857 + 80);
                if ( v858 )
                  v856 = *(_DWORD *)v858;
                *(_DWORD *)(v20 + 2064) += v856;
                v859 = v858;
                v860 = *(_DWORD *)(v20 + 2044);
                v861 = v858;
                v862 = *(_QWORD *)(v20 + 2048);
                v863 = &v858[v856];
                if ( v858 < v863 )
                {
                  do
                  {
                    _mm_prefetch(v861, 0);
                    v861 += 64;
                  }
                  while ( v861 < v863 );
                }
                v864 = *(_QWORD *)(v20 + 2048);
                v865 = v856 >> 7;
                if ( v856 >> 7 )
                {
                  do
                  {
                    v866 = 8LL;
                    do
                    {
                      v867 = v864 ^ *(_QWORD *)v859;
                      v868 = *((_QWORD *)v859 + 1);
                      v859 += 16;
                      v864 = __ROL8__(__ROL8__(v867, v860) ^ v868, v860);
                      --v866;
                    }
                    while ( v866 );
                    v869 = __ROL8__(v862 ^ (v859 - v858), 17) ^ v862 ^ (v859 - v858);
                    v870 = ((unsigned __int64)v869 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x420) = v870;
                    v860 = ((unsigned __int8)(v870 ^ v869) ^ (unsigned __int8)v860) & 0x3F;
                    if ( !v860 )
                      LOBYTE(v860) = 1;
                    --v865;
                  }
                  while ( v865 );
                  v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v871 = v856 & 0x7F;
                if ( v871 >= 8 )
                {
                  v872 = (unsigned __int64)v871 >> 3;
                  do
                  {
                    v864 = __ROL8__(*(_QWORD *)v859 ^ v864, v860);
                    v859 += 8;
                    v871 -= 8;
                    --v872;
                  }
                  while ( v872 );
                }
                if ( v871 )
                {
                  do
                  {
                    v873 = *(unsigned __int8 *)v859++;
                    v864 = __ROL8__(v873 ^ v864, v860);
                    --v871;
                  }
                  while ( v871 );
                  v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                for ( i13 = v864; ; LODWORD(v864) = i13 ^ v864 )
                {
                  i13 >>= 31;
                  if ( !i13 )
                    break;
                }
                v877 = *((unsigned int *)v53 + 11);
                v878 = v864 & 0x7FFFFFFF;
                if ( v878 != (_DWORD)v877 && !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v877 ^ v878;
                  if ( !*(_DWORD *)(v20 + 2264) )
                  {
                    *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v20 + 2288) = *(int *)v53;
                    *(_QWORD *)(v20 + 2296) = v858;
                    j = 0LL;
                    *(_DWORD *)(v20 + 2264) = 1;
                    goto LABEL_178;
                  }
                }
LABEL_238:
                j = 0LL;
                goto LABEL_178;
              }
            }
LABEL_1289:
            __writecr8(v854);
            v53 = *(char **)v2;
          }
        }
        v875 = *(_DWORD *)(v20 + 2264);
        if ( !v875 )
        {
          *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v846 ^ (unsigned __int64)*((unsigned int *)v53 + 5);
          v875 = *(_DWORD *)(v20 + 2264);
        }
        v876 = *((_QWORD *)v53 + 1);
        if ( !v875 )
        {
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v876;
          *(_DWORD *)(v20 + 2264) = 1;
        }
        goto LABEL_1271;
      }
      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F8) = v53 + 48;
      v775 = *((_WORD *)v53 + 20);
      v1668 = v2 + 256;
      *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F0) = v775;
      *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F2) = v775;
      v776 = *(_QWORD *)(v20 + 1280);
      v777 = *(int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, unsigned __int64, __int64))(v20 + 480);
      LOBYTE(v1666) = j;
      if ( v777(v2 + 752, 0LL, 0LL, 0LL, v776, v1666, j, v1668) < 0 )
        goto LABEL_178;
      if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) + 16LL) & 0x10) != 0 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v20 + 504))(
               *(_QWORD *)(v20 + 480),
               v2 + 440,
               v2 + 708) )
        {
          v778 = (*(__int64 (__fastcall **)(_QWORD))(v20 + 496))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 0x1B8));
          if ( v778 )
          {
            v48 = *(_DWORD *)(v778 + 80);
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC) = v48;
          }
        }
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v20 + 504))(
               *((_QWORD *)v53 + 3),
               v2 + 448,
               v2 + 672) )
        {
          v779 = (*(__int64 (__fastcall **)(_QWORD))(v20 + 496))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                           + 0x1C0));
          if ( v779 )
          {
            v49 = *(_DWORD *)(v779 + 80);
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v49;
          }
        }
        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) == 0 )
        {
          *((_QWORD *)v53 + 1) = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) + 112LL;
          *((_DWORD *)v53 + 4) = 224;
        }
        v177 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x100);
        v780 = j;
        v781 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8);
        v782 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
        v783 = v48;
        do
        {
          v784 = *(_QWORD *)(v177 + 8LL * v780 + 112);
          if ( (!v48 || v784 < v781 || v784 > v48 + v781 - 1) && (!v49 || v784 < v782 || v784 > v49 + v782 - 1) )
          {
            if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
            {
              v824 = *(_QWORD **)(v20 + 2640);
              v825 = 48;
              v826 = 6LL;
              do
              {
                v825 -= 8;
                *v824 = *(_QWORD *)v53;
                v53 += 8;
                ++v824;
                --v826;
              }
              while ( v826 );
              if ( v825 )
              {
                do
                {
                  v827 = *v53++;
                  *(_BYTE *)v824 = v827;
                  v824 = (_QWORD *)((char *)v824 + 1);
                  --v825;
                }
                while ( v825 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v53 = *(char **)(v20 + 2640);
            }
            *((_QWORD *)v53 + 4) = v784;
            v828 = *(_QWORD *)(v20 + 1408);
            *(_QWORD *)v828 = v53;
            *(_DWORD *)(v828 + 16) = 48;
            v829 = *((_QWORD *)v53 + 1);
            if ( *(_DWORD *)(v20 + 2264) == (_DWORD)j )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v53;
              *(_QWORD *)(v20 + 2296) = v829;
              *(_DWORD *)(v20 + 2264) = 1;
            }
            goto LABEL_178;
          }
          ++v780;
        }
        while ( v780 < 0x1Cu );
        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) == 0 )
        {
          v785 = (_QWORD *)*((_QWORD *)v53 + 1);
          v786 = *((unsigned int *)v53 + 4);
          v787 = v785;
          *(_DWORD *)(v20 + 2064) += v786;
          v788 = (const char *)v785;
          v789 = *(_DWORD *)(v20 + 2044);
          v790 = *(_QWORD *)(v20 + 2048);
          if ( v785 < (_QWORD *)((char *)v785 + v786) )
          {
            do
            {
              _mm_prefetch(v788, 0);
              v788 += 64;
            }
            while ( v788 < (const char *)v785 + v786 );
          }
          v791 = *(_QWORD *)(v20 + 2048);
          v792 = (unsigned int)v786 >> 7;
          if ( (unsigned int)v786 >> 7 )
          {
            do
            {
              v793 = 8LL;
              do
              {
                v794 = v787[1] ^ __ROL8__(*v787 ^ v791, v789);
                v787 += 2;
                v791 = __ROL8__(v794, v789);
                --v793;
              }
              while ( v793 );
              v795 = (__ROL8__(v790 ^ ((char *)v787 - (char *)v785), 17) ^ v790 ^ (unsigned __int64)((char *)v787 - (char *)v785))
                   * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x408) = *((_QWORD *)&v795 + 1);
              v789 = (BYTE8(v795) ^ (unsigned __int8)(v795 ^ v789)) & 0x3F;
              if ( !v789 )
                LOBYTE(v789) = 1;
              --v792;
            }
            while ( v792 );
            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v49 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
          }
          v796 = v786 & 0x7F;
          if ( v796 >= 8 )
          {
            v797 = (unsigned __int64)v796 >> 3;
            do
            {
              v791 = __ROL8__(*v787++ ^ v791, v789);
              v796 -= 8;
              --v797;
            }
            while ( v797 );
          }
          j = 0LL;
          if ( v796 )
          {
            do
            {
              v798 = *(unsigned __int8 *)v787;
              v787 = (_QWORD *)((char *)v787 + 1);
              v791 = __ROL8__(v798 ^ v791, v789);
              --v796;
            }
            while ( v796 );
            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          for ( i14 = v791; ; LODWORD(v791) = i14 ^ v791 )
          {
            i14 >>= 31;
            if ( !i14 )
              break;
          }
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = 0;
          *((_DWORD *)v53 + 5) = v791 & 0x7FFFFFFF;
          v800 = 0;
          v801 = *(const char **)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) + 80LL);
          if ( !v801
            || (v800 = *(_DWORD *)v801,
                v802 = 0,
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_DWORD *)v801,
                (v803 = (v800 - 8) >> 3) == 0) )
          {
LABEL_1209:
            *(_DWORD *)(v20 + 2064) += v800;
            v807 = v801;
            v808 = *(_DWORD *)(v20 + 2044);
            v809 = v801;
            v810 = *(_QWORD *)(v20 + 2048);
            v811 = &v801[v800];
            if ( v801 < v811 )
            {
              do
              {
                _mm_prefetch(v809, 0);
                v809 += 64;
              }
              while ( v809 < v811 );
            }
            v812 = *(_QWORD *)(v20 + 2048);
            v813 = v800 >> 7;
            if ( v800 >> 7 )
            {
              do
              {
                v814 = 8LL;
                do
                {
                  v815 = v812 ^ *(_QWORD *)v807;
                  v816 = *((_QWORD *)v807 + 1);
                  v807 += 16;
                  v812 = __ROL8__(__ROL8__(v815, v808) ^ v816, v808);
                  --v814;
                }
                while ( v814 );
                v817 = __ROL8__(v810 ^ (v807 - v801), 17) ^ v810 ^ (v807 - v801);
                v818 = ((unsigned __int64)v817 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x410) = v818;
                v808 = ((unsigned __int8)(v818 ^ v817) ^ (unsigned __int8)v808) & 0x3F;
                if ( !v808 )
                  LOBYTE(v808) = 1;
                --v813;
              }
              while ( v813 );
              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              v800 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            }
            v819 = v800 & 0x7F;
            if ( v819 >= 8 )
            {
              v820 = (unsigned __int64)v819 >> 3;
              do
              {
                v812 = __ROL8__(*(_QWORD *)v807 ^ v812, v808);
                v807 += 8;
                v819 -= 8;
                --v820;
              }
              while ( v820 );
              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            }
            for ( j = 0LL; v819; --v819 )
            {
              v821 = *(unsigned __int8 *)v807++;
              v812 = __ROL8__(v821 ^ v812, v808);
            }
            for ( i15 = v812; ; LODWORD(v812) = i15 ^ v812 )
            {
              i15 >>= 31;
              if ( !i15 )
                break;
            }
            *((_DWORD *)v53 + 11) = v812 & 0x7FFFFFFF;
            goto LABEL_178;
          }
          v804 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8);
          v805 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0);
          while ( 1 )
          {
            v806 = *(_QWORD *)&v801[8 * v802 + 8];
            if ( v806
              && (!v783 || v806 < v804 || v806 > v783 + v804 - 1)
              && (!v49 || v806 < v805 || v806 > v49 + v805 - 1) )
            {
              break;
            }
            if ( ++v802 >= v803 )
              goto LABEL_1209;
          }
          *((_QWORD *)v53 + 4) = v806;
          v823 = *(_QWORD *)(v20 + 1408);
          *(_QWORD *)v823 = v53;
          *(_DWORD *)(v823 + 16) = 48;
          if ( *(_DWORD *)(v20 + 2264) )
            goto LABEL_178;
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v801;
          goto LABEL_446;
        }
      }
      else
      {
        v177 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x100);
      }
LABEL_1179:
      (*(void (__fastcall **)(__int64))(v20 + 472))(v177);
      goto LABEL_178;
    }
    if ( v85 > 12 )
    {
      if ( v85 <= 14 )
      {
        if ( v85 == 14 )
        {
          if ( *(_QWORD *)(v20 + 2400) == j )
            goto LABEL_2252;
          v728 = *(_DWORD *)(v20 + 2420);
          if ( ((v728 >> 2) & 1) != 0 )
            goto LABEL_2252;
          if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
          {
            *(_DWORD *)(v20 + 2420) = v728 ^ ((unsigned __int8)v728 ^ (unsigned __int8)(8 * v728)) & 0x20;
          }
          else if ( ((v728 >> 5) & 1) != 0 )
          {
            goto LABEL_2252;
          }
        }
        v729 = (_QWORD *)*((_QWORD *)v53 + 1);
        v730 = *((unsigned int *)v53 + 4);
        v731 = v729;
        *(_DWORD *)(v20 + 2064) += v730;
        v732 = (const char *)v729;
        v733 = *(_DWORD *)(v20 + 2044);
        v734 = *(_QWORD *)(v20 + 2048);
        if ( v729 < (_QWORD *)((char *)v729 + v730) )
        {
          do
          {
            _mm_prefetch(v732, 0);
            v732 += 64;
          }
          while ( v732 < (const char *)v729 + v730 );
        }
        v735 = *(_QWORD *)(v20 + 2048);
        v736 = (unsigned int)v730 >> 7;
        if ( (unsigned int)v730 >> 7 )
        {
          do
          {
            v737 = 8LL;
            do
            {
              v738 = v735 ^ *v731;
              v739 = v731[1];
              v731 += 2;
              v735 = __ROL8__(__ROL8__(v738, v733) ^ v739, v733);
              --v737;
            }
            while ( v737 );
            v740 = (__ROL8__(v734 ^ ((char *)v731 - (char *)v729), 17) ^ v734 ^ (unsigned __int64)((char *)v731
                                                                                                 - (char *)v729))
                 * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x400) = *((_QWORD *)&v740 + 1);
            v733 = (BYTE8(v740) ^ (unsigned __int8)(v740 ^ v733)) & 0x3F;
            if ( !v733 )
              LOBYTE(v733) = 1;
            --v736;
          }
          while ( v736 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v741 = v730 & 0x7F;
        if ( (unsigned int)v741 >= 8 )
        {
          v742 = (unsigned __int64)(unsigned int)v741 >> 3;
          do
          {
            v735 = __ROL8__(*v731++ ^ v735, v733);
            v741 = (unsigned int)(v741 - 8);
            --v742;
          }
          while ( v742 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        for ( j = 0LL; (_DWORD)v741; v741 = (unsigned int)(v741 - 1) )
        {
          v743 = *(unsigned __int8 *)v731;
          v731 = (_QWORD *)((char *)v731 + 1);
          v735 = __ROL8__(v743 ^ v735, v733);
        }
        for ( i16 = v735; ; LODWORD(v735) = i16 ^ v735 )
        {
          i16 >>= 31;
          if ( !i16 )
            break;
        }
        v745 = v735 & 0x7FFFFFFF;
        if ( v745 == *((_DWORD *)v53 + 5) )
          goto LABEL_1128;
        _InterlockedOr(v1664, 0);
        if ( (*((_DWORD *)v53 + 6) & 1) != 0 )
        {
          if ( **(_BYTE **)(v20 + 1392) )
            goto LABEL_1128;
        }
        v746 = *((unsigned int *)v53 + 4);
        v747 = *((_QWORD *)v53 + 1);
        if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
        {
          v748 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v749 = v747 & 0xFFFFFFFFFFFFF000uLL;
          v750 = (v747 + v746 - 1) | 0xFFF;
          v751 = (v747 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v752 = v748;
            while ( 1 )
            {
              v753 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                       v749,
                       0LL,
                       v741,
                       v731);
              if ( v753 != -1073741267 )
                break;
              if ( v748 > 1u )
                goto LABEL_1126;
              v752 = v748;
              __writecr8(v748);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v753 < 0 )
              break;
LABEL_1126:
            v741 = 4096LL;
            v749 += 4096LL;
            v751 += 4096LL;
            if ( v751 == v750 )
            {
              __writecr8(v752);
              v53 = *(char **)v2;
              j = 0LL;
LABEL_1128:
              if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) == 0 )
                goto LABEL_178;
              v754 = *((unsigned int *)v53 + 4);
              if ( !(_DWORD)v754 )
                goto LABEL_178;
              sub_1401ADA3C(v20, *((_QWORD *)v53 + 1), v754, v2 + 1384);
              v755 = 16;
              v756 = (__int64 *)(v53 + 28);
              v757 = (__int64 *)(v2 + 1384);
              do
              {
                v758 = *v757++;
                v759 = *v756++;
                if ( v758 != v759 )
                  goto LABEL_1143;
                v755 -= 8;
              }
              while ( v755 >= 8 );
              if ( !v755 )
                goto LABEL_1136;
              while ( 1 )
              {
                v760 = *(unsigned __int8 *)v757;
                v757 = (__int64 *)((char *)v757 + 1);
                v761 = *(unsigned __int8 *)v756;
                v756 = (__int64 *)((char *)v756 + 1);
                if ( v760 != v761 )
                  break;
                if ( !--v755 )
                  goto LABEL_1136;
              }
LABEL_1143:
              _InterlockedOr(v1664, 0);
              if ( (*((_DWORD *)v53 + 6) & 1) == 0 || !**(_BYTE **)(v20 + 1392) )
              {
                v765 = *((unsigned int *)v53 + 4);
                v766 = *((_QWORD *)v53 + 1);
                if ( *((_DWORD *)v53 + 4) )
                {
                  v767 = 64LL;
                  if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
                  {
                    v768 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v769 = v766 & 0xFFFFFFFFFFFFF000uLL;
                    v770 = (v766 + v765 - 1) | 0xFFF;
                    v771 = (v766 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v772 = v768;
                      while ( 1 )
                      {
                        v773 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v20 + 1120))(
                                 v769,
                                 0LL,
                                 v767,
                                 v756);
                        if ( v773 != -1073741267 )
                          break;
                        if ( v768 > 1u )
                          goto LABEL_1153;
                        v772 = v768;
                        __writecr8(v768);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v773 < 0 )
                        break;
LABEL_1153:
                      v767 = 4096LL;
                      v769 += 4096LL;
                      v771 += 4096LL;
                      if ( v771 == v770 )
                      {
                        __writecr8(v772);
                        j = 0LL;
                        goto LABEL_1136;
                      }
                    }
                    __writecr8(v772);
                    v766 = *((_QWORD *)v53 + 1);
                    j = 0LL;
                  }
                }
                if ( !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v53;
                  *(_QWORD *)(v20 + 2296) = v766;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
              }
LABEL_1136:
              v762 = 16 * *((_DWORD *)v53 + 4);
LABEL_1137:
              *(_DWORD *)(v20 + 2064) += v762;
              goto LABEL_178;
            }
          }
          __writecr8(v752);
          v53 = *(char **)v2;
          j = 0LL;
        }
        v763 = *(_DWORD *)(v20 + 2264);
        if ( !v763 )
        {
          *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v745 ^ (unsigned __int64)*((unsigned int *)v53 + 5);
          v763 = *(_DWORD *)(v20 + 2264);
        }
        v764 = *((_QWORD *)v53 + 1);
        if ( !v763 )
        {
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v764;
          *(_DWORD *)(v20 + 2264) = 1;
        }
        goto LABEL_1128;
      }
      v249 = 15;
      if ( v85 == 15 )
      {
        if ( *(_DWORD *)(v20 + 2356) == 11 )
        {
          *(_DWORD *)(v20 + 2064) += 256;
          v723 = *(_QWORD *)(v20 + 1400);
          v724 = (*(__int64 (__fastcall **)(__int64))(v20 + 720))(v723);
          if ( v724 )
          {
            v725 = (*(__int64 (__fastcall **)(__int64))(v20 + 728))(v724);
            v726 = *((_QWORD *)v53 + 3);
            if ( v726 )
            {
              if ( v726 != v725 && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = v725;
                *(_DWORD *)(v20 + 2264) = 1;
              }
            }
            else
            {
              v727 = *(_QWORD *)(v20 + 2392);
              if ( (!*(_DWORD *)(v20 + 2388) || v725 < v727 || v725 > v727 + *(unsigned int *)(v20 + 2388) - 1LL)
                && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = v725;
                *(_DWORD *)(v20 + 2264) = 1;
              }
              *((_QWORD *)v53 + 3) = v725;
            }
            (*(void (__fastcall **)(__int64, __int64))(v20 + 736))(v723, v724);
          }
        }
        goto LABEL_178;
      }
      if ( v85 != 21 )
      {
        if ( v85 != 24 )
        {
          if ( v85 != 25 )
          {
            if ( v85 == 26 )
            {
              if ( (*(_DWORD *)(v20 + 2072) & 1) != 0 )
                goto LABEL_178;
              v272 = *(_QWORD *)(v20 + 1432);
              v273 = *(void (**)(void))(v20 + 368);
              v274 = *(char **)(v20 + 1440);
              v275 = *(_QWORD *)(v20 + 1336);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v272;
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = j;
              v273();
              if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 || (v276 = *(_DWORD *)(v20 + 2352), v276 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 288))(*(_QWORD *)(v20 + 2528), 0LL);
                LOBYTE(v48) = 0x80;
              }
              else
              {
                LOBYTE(v48) = 1 << v276;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v20 + 304))(v275, 0LL);
              v277 = *(volatile signed __int8 ***)(v20 + 1296);
              v278 = *v277;
              if ( *v277 != (volatile signed __int8 *)v277 )
              {
                do
                {
                  _InterlockedOr8(&v278[*(_QWORD *)(v20 + 1696) - *(_QWORD *)(v20 + 1720)], v48);
                  v278 = *(volatile signed __int8 **)v278;
                  LODWORD(j) = j + 1;
                }
                while ( v278 != (volatile signed __int8 *)v277 );
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = j;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v20 + 304))(v272, 0LL);
              v279 = *(_QWORD ***)(v20 + 1424);
              v280 = *v279;
              if ( *v279 != v279 )
              {
                do
                {
                  v281 = (char *)v280 - *(_QWORD *)(v20 + 1832);
                  if ( v281 != v274 )
                  {
                    v282 = *(_QWORD *)(v20 + 1696);
                    v283 = *(_QWORD *)&v281[*(_QWORD *)(v20 + 1824)];
                    if ( ((unsigned __int8)v48 & *(_BYTE *)(v283 + v282)) == 0
                      && (*(_DWORD *)(v283 + *(_QWORD *)(v20 + 1704)) & *(_DWORD *)(v20 + 1728)) != 0
                      && !*(_DWORD *)(v20 + 2264) )
                    {
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v53;
                      *(_QWORD *)(v20 + 2296) = v283;
                      *(_DWORD *)(v20 + 2264) = 1;
                      v282 = *(_QWORD *)(v20 + 1696);
                    }
                    _InterlockedAnd8((volatile signed __int8 *)(v283 + v282), ~(_BYTE)v48);
                  }
                  v280 = (_QWORD *)*v280;
                }
                while ( v280 != v279 );
                LODWORD(j) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v272 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v20 + 312))(v272, 0LL);
              goto LABEL_407;
            }
            if ( v85 == 27 )
            {
              if ( (*(_DWORD *)(v20 + 2072) & 1) == 0 )
                goto LABEL_178;
              v250 = *(_QWORD *)(v20 + 1432);
              v251 = j;
              v252 = *(void (**)(void))(v20 + 368);
              v253 = *(_QWORD **)(v20 + 1440);
              v254 = *(_QWORD *)(v20 + 1336);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v250;
              v252();
              if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 || (v255 = *(_DWORD *)(v20 + 2352), v255 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 288))(*(_QWORD *)(v20 + 2528), 0LL);
                LOBYTE(v249) = 0x80;
              }
              else
              {
                v249 = 1;
                LOBYTE(v249) = 1 << v255;
              }
              v256 = *(void (__fastcall **)(__int64, _QWORD))(v20 + 304);
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v249;
              v256(v254, 0LL);
              (*(void (__fastcall **)(__int64, _QWORD))(v20 + 304))(v250, 0LL);
              v257 = *(_QWORD ***)(v20 + 1424);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = j;
              v258 = *v257;
              if ( *v257 != v257 )
              {
                do
                {
                  if ( v258 - 3 != v253 )
                  {
                    v259 = *(_QWORD *)((char *)v258 + *(_QWORD *)(v20 + 1824) - 24);
                    if ( (*(_DWORD *)(v259 + *(_QWORD *)(v20 + 1704)) & *(_DWORD *)(v20 + 1728)) == 0 )
                    {
                      v260 = *(_QWORD *)((char *)v258 + *(_QWORD *)(v20 + 1824) - 24);
                      if ( j )
                        v260 = 1LL;
                      j = v260;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v259 + *(_QWORD *)(v20 + 1696)), v249);
                  }
                  v258 = (_QWORD *)*v258;
                }
                while ( v258 != v257 );
                v250 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = j;
              }
              v261 = *(_QWORD ***)(v20 + 1296);
              v262 = *v261;
              if ( *v261 != v261 )
              {
                v263 = v249;
                v264 = (unsigned __int8)v249;
                v265 = *(int **)v2;
                v266 = ~v263;
                do
                {
                  v267 = (char *)v262 - *(_QWORD *)(v20 + 1720);
                  v268 = *(_QWORD *)(v20 + 1696);
                  if ( (v267[v268] & v264) == 0 )
                  {
                    v269 = *(_QWORD **)&v267[*(_QWORD *)(v20 + 1712)];
                    if ( v269 )
                    {
                      if ( v269 != v253 && !*(_DWORD *)(v20 + 2264) )
                      {
                        *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v20 + 2280) = (char *)v265 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v20 + 2288) = *v265;
                        *(_QWORD *)(v20 + 2296) = v267;
                        *(_DWORD *)(v20 + 2264) = 1;
                        v268 = *(_QWORD *)(v20 + 1696);
                      }
                    }
                  }
                  _InterlockedAnd8(&v267[v268], v266);
                  v262 = (_QWORD *)*v262;
                  ++v251;
                }
                while ( v262 != v261 );
                v249 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                j = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                v250 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              }
              if ( j )
              {
                if ( j == 1 )
                {
                  v270 = *(_QWORD ***)(v20 + 1424);
                  for ( i17 = *v270; i17 != v270; i17 = (_QWORD *)*i17 )
                  {
                    if ( i17 - 3 != v253 )
                      _InterlockedAnd8(
                        (volatile signed __int8 *)(*(_QWORD *)((char *)i17 + *(_QWORD *)(v20 + 1824) - 24)
                                                 + *(_QWORD *)(v20 + 1696)),
                        ~(_BYTE)v249);
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(j + *(_QWORD *)(v20 + 1696)), ~(_BYTE)v249);
                }
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v20 + 312))(v250, 0LL);
              if ( (_BYTE)v249 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 296))(*(_QWORD *)(v20 + 2528), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 312))(*(_QWORD *)(v20 + 1336), 0LL);
              (*(void (**)(void))(v20 + 376))();
              *(_DWORD *)(v20 + 2064) += v251 << 8;
              goto LABEL_238;
            }
LABEL_2276:
            v1507 = v85 - 2;
            if ( v1507 )
            {
              v1508 = v1507 - 1;
              if ( v1508 )
              {
                if ( v1508 != 20 )
                {
                  if ( *(_DWORD *)(v20 + 2264) != (_DWORD)j )
                    goto LABEL_178;
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = 257LL;
                  *(_QWORD *)(v20 + 2296) = j;
                  goto LABEL_2275;
                }
                (*(void (__fastcall **)(unsigned __int64, _QWORD))(v20 + 408))(v2 + 1400, *((unsigned int *)v53 + 10));
                (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 456))(v2 + 1400, v2 + 1416);
                v1509 = *(_QWORD *)(v20 + 2544);
                if ( v1509 )
                {
                  v1510 = *(_DWORD *)(v1509 + 800);
                  v1509 = *(_QWORD *)(v20 + 2544);
                }
                else
                {
                  v1511 = __readmsr(0x832u);
                  v1510 = v1511;
                }
                if ( v1509 )
                {
                  v1512 = *(_DWORD *)(v1509 + 832);
                }
                else
                {
                  v1513 = __readmsr(0x834u);
                  v1512 = v1513;
                }
                (*(void (__fastcall **)(unsigned __int64))(v20 + 400))(v2 + 1416);
                v1514 = *((unsigned int *)v53 + 6);
                if ( (v1510 & *((_DWORD *)v53 + 7)) != (_DWORD)v1514
                  || (v1510 & 0x10000) == 0 && (_BYTE)v1510 != 0xD1 && (unsigned __int8)(v1510 + 3) > 1u )
                {
                  v1515 = v1514 | ((unsigned __int64)*((unsigned int *)v53 + 10) << 48) | 0x32000000000LL;
                  if ( !*(_DWORD *)(v20 + 2264) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1514 ^ v1510;
                    if ( !*(_DWORD *)(v20 + 2264) )
                    {
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v53;
                      *(_QWORD *)(v20 + 2296) = v1515;
                      *(_DWORD *)(v20 + 2264) = 1;
                    }
                  }
                }
                v1516 = *((unsigned int *)v53 + 8);
                if ( (v1512 & *((_DWORD *)v53 + 9)) != (_DWORD)v1516
                  || (v1512 & 0x10000) == 0 && (_BYTE)v1512 != 0xD1 && (unsigned __int8)(v1512 + 3) > 1u )
                {
                  v1517 = v1516 | ((unsigned __int64)*((unsigned int *)v53 + 10) << 48) | 0x34000000000LL;
                  if ( !*(_DWORD *)(v20 + 2264) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1516 ^ v1512;
                    if ( !*(_DWORD *)(v20 + 2264) )
                    {
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v53;
                      *(_QWORD *)(v20 + 2296) = v1517;
                      *(_DWORD *)(v20 + 2264) = 1;
                    }
                  }
                }
LABEL_2301:
                v762 = 0x8000;
                goto LABEL_1137;
              }
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(v20 + 408))(v2 + 1432, *((unsigned int *)v53 + 10));
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 456))(v2 + 1432, v2 + 1448);
              KiGetGdtIdt(v2 + 504, v2 + 1600);
              v1518 = *(_QWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1FA);
              v1519 = *((unsigned int *)v53 + 4);
              if ( (*(_BYTE *)(v20 + 2147) & 2) != 0 )
              {
                v1520 = 38LL;
                v1521 = (_QWORD *)(v2 + 1792);
                v1522 = 304;
                do
                {
                  *v1521 = 0LL;
                  v1522 -= 8;
                  ++v1521;
                  --v1520;
                }
                while ( v1520 );
                if ( v1522 )
                {
                  v1520 = 0xFFFFFFFFLL;
                  do
                  {
                    *(_BYTE *)v1521 = 0;
                    v1521 = (_QWORD *)((char *)v1521 + 1);
                    --v1522;
                  }
                  while ( v1522 );
                }
                *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x710) = *(_OWORD *)(v20 + 2096);
                *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x720) = *(_OWORD *)(v20 + 2112);
                v1523 = *(_OWORD *)(v20 + 2128);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x282) = ((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                       + 1792;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v20 + 2144;
                *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x710) = v20 + 2144;
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x718) = (unsigned __int64)(v20 + 2144) >> 32;
                *(_OWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x820) = v1523;
                *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x280) = 304;
                *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x716) = (unsigned int)(v20 + 2144) >> 16;
                _disable();
                __sidt((void *)(v2 + 832));
                __lidt((void *)(v2 + 640));
                __writedr(7u, 0LL);
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v20 + 2150;
                *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x710) = v20 + 2150;
                v1524 = (unsigned __int64)(v20 + 2150) >> 16;
                *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x716) = v1524;
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x718) = (unsigned __int64)(v20 + 2150) >> 32;
                *(_QWORD *)(v20 + 2248) = KiErrata704Present(v1524, v1520, 0LL, 1LL);
                *(_DWORD *)(v20 + 2256) = KeGetPcr()->Prcb.Number;
                __lidt((void *)(v2 + 832));
                _enable();
              }
              Ldtr = KiGetLdtr();
              Tr = KiGetTr();
              *(_DWORD *)(v20 + 2064) += v1519;
              v1527 = (unsigned __int64)v1518 + v1519;
              v1528 = *(_DWORD *)(v20 + 2044);
              v1529 = Tr;
              v1530 = *(_QWORD *)(v20 + 2048);
              v1531 = v1518;
              *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = Tr;
              v1532 = (const char *)v1518;
              if ( v1518 < (_QWORD *)((char *)v1518 + v1519) )
              {
                do
                {
                  _mm_prefetch(v1532, 0);
                  v1532 += 64;
                }
                while ( (unsigned __int64)v1532 < v1527 );
              }
              v1533 = v1530;
              v1534 = (unsigned int)v1519 >> 7;
              if ( (unsigned int)v1519 >> 7 )
              {
                do
                {
                  v1535 = 8LL;
                  do
                  {
                    v1536 = v1533 ^ *v1531;
                    v1537 = v1531[1];
                    v1531 += 2;
                    v1533 = __ROL8__(__ROL8__(v1536, v1528) ^ v1537, v1528);
                    --v1535;
                  }
                  while ( v1535 );
                  v1538 = __ROL8__(v1530 ^ ((char *)v1531 - (char *)v1518), 17) ^ v1530 ^ ((char *)v1531 - (char *)v1518);
                  v1539 = (v1538 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B8) = v1539;
                  v1527 = (67117057 * (_DWORD)v1538) ^ (unsigned int)v1539;
                  v1528 = ((unsigned __int8)v1527 ^ (unsigned __int8)v1528) & 0x3F;
                  if ( !v1528 )
                    LOBYTE(v1528) = 1;
                  --v1534;
                }
                while ( v1534 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                v1529 = *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              }
              v1540 = v1519 & 0x7F;
              if ( v1540 >= 8 )
              {
                v1527 = (unsigned __int64)v1540 >> 3;
                do
                {
                  v1533 = __ROL8__(*v1531++ ^ v1533, v1528);
                  v1540 -= 8;
                  --v1527;
                }
                while ( v1527 );
              }
              j = 0LL;
              if ( v1540 )
              {
                do
                {
                  v1541 = *(unsigned __int8 *)v1531;
                  v1531 = (_QWORD *)((char *)v1531 + 1);
                  v1533 = __ROL8__(v1541 ^ v1533, v1528);
                  --v1540;
                }
                while ( v1540 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              for ( i18 = v1533; ; LODWORD(v1533) = i18 ^ v1533 )
              {
                i18 >>= 31;
                if ( !i18 )
                  break;
              }
              v1543 = v1533 & 0x7FFFFFFF;
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD *, __int64))(v20 + 400))(
                v2 + 1448,
                v1527,
                v1531,
                1LL);
              if ( v1543 == *((_DWORD *)v53 + 5)
                && *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8) == *((_WORD *)v53 + 22)
                && !Ldtr
                && v1529 == 64 )
              {
                goto LABEL_2301;
              }
              if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
              {
                v1544 = *(_QWORD **)(v20 + 2640);
                v1545 = 48;
                v1546 = 6LL;
                do
                {
                  v1545 -= 8;
                  *v1544 = *(_QWORD *)v53;
                  v53 += 8;
                  ++v1544;
                  --v1546;
                }
                while ( v1546 );
                if ( v1545 )
                {
                  do
                  {
                    v1547 = *v53++;
                    *(_BYTE *)v1544 = v1547;
                    v1544 = (_QWORD *)((char *)v1544 + 1);
                    --v1545;
                  }
                  while ( v1545 );
                  v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v53 = *(char **)(v20 + 2640);
              }
              *((_QWORD *)v53 + 3) = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1FA);
              *((_QWORD *)v53 + 4) = v1543;
              if ( Ldtr )
              {
                v1548 = Ldtr;
                goto LABEL_2342;
              }
              if ( v1529 != 64 )
              {
                v1548 = v1529;
LABEL_2342:
                *((_QWORD *)v53 + 3) = v1548;
              }
              v1549 = *(_DWORD *)(v20 + 2264);
              if ( !v1549 )
              {
                *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = *((unsigned int *)v53 + 5) ^ (unsigned __int64)v1543;
                v1549 = *(_DWORD *)(v20 + 2264);
              }
              v1550 = *((_QWORD *)v53 + 1);
              if ( !v1549 )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = v1550;
                *(_DWORD *)(v20 + 2264) = 1;
              }
              goto LABEL_2301;
            }
            v1551 = *((unsigned int *)v53 + 10);
            v1552 = *(void (__fastcall **)(unsigned __int64, __int64))(v20 + 408);
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = j;
            v1552(v2 + 1464, v1551);
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 456))(v2 + 1464, v2 + 1480);
            KiGetGdtIdt(v2 + 1616, v2 + 656);
            v1553 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x292);
            v1554 = j;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1553;
            v1555 = v1553 + 4;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1555;
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = j;
            while ( 2 )
            {
              v1556 = j;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) = *(_QWORD *)(v20 + 2224);
              v1557 = j;
              v1558 = *(_QWORD *)(v20 + 2232);
              v1559 = *(unsigned int *)(v20 + 2196);
              v1560 = *(unsigned int *)(v20 + 2200);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = j;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = j;
              v1561 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              v1562 = *(_WORD *)v1555;
              *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = *(_WORD *)(v1555 - 4);
              *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF2) = *(_WORD *)(v1555 + 2);
              v1563 = *(_DWORD *)(v1555 + 4);
              v1564 = *(_QWORD *)(v20 + 1544);
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF4) = v1563;
              v1565 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
              *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1562;
              v1566 = v1564 + 8LL * v1554;
              if ( v1565 == v1566 )
              {
                if ( (v1562 & 0x6000) != 0 )
                {
                  __writecr8(v1561);
                  j = 0LL;
                  goto LABEL_2356;
                }
                v1557 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(v20 + 1128))(
                                     v1554,
                                     v1566,
                                     v1556);
                if ( v1557 )
                {
                  v1567 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) < 0x30u;
                  v1568 = *(_QWORD *)(v1559 + v1557);
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1568;
                  if ( v1567 )
                  {
                    __writecr8(v1561);
                    j = 0LL;
LABEL_2355:
                    v1556 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
LABEL_2356:
                    v1569 = *(_QWORD *)(v20 + 1408);
                    *(_QWORD *)v1569 = v1565;
                    *(_DWORD *)(v1569 + 16) = 128;
                    if ( v1556 )
                    {
                      v1570 = *(_QWORD *)(v20 + 1408);
                      *(_QWORD *)(v1570 + 8) = v1556;
                      *(_DWORD *)(v1570 + 20) = 128;
                    }
                    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 1;
                    goto LABEL_2375;
                  }
                  v1571 = *(_QWORD *)(v1560 + v1557);
LABEL_2363:
                  __writecr8(v1561);
                  j = 0LL;
                  if ( !v1557 )
                  {
                    v1572 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x118);
                    if ( v1565 < v1572 )
                      goto LABEL_2355;
                    if ( v1565 > v1558 )
                      goto LABEL_2355;
                    v1573 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v20 + 520))(
                              *(_QWORD *)(v20 + 2240),
                              v1572,
                              (unsigned int)(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0)
                                           - v1572));
                    if ( !v1573 || (*(_DWORD *)(v1573 + 36) & 0x2000000) != 0 )
                      goto LABEL_2355;
                  }
                  v1574 = *(__int16 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  if ( *(v1574 - 1) != 16 || (*v1574 & 0x1F00) != 0xE00 || *v1574 >= 0 )
                    goto LABEL_2355;
                  v1575 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(v20 + 600))(
                                            v1565,
                                            v2 + 280,
                                            0LL);
                  if ( v1575
                    && (v1576 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x118),
                        v1576 + *v1575 == v1565)
                    && v1576 == *(_QWORD *)(v20 + 2224) )
                  {
                    if ( !v1557 )
                      goto LABEL_2375;
                  }
                  else if ( !v1557 )
                  {
                    goto LABEL_2355;
                  }
                  if ( (*(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) & 0x6000) != 0 )
                    goto LABEL_2355;
                  if ( v1557 != -1 )
                  {
                    v1599 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(v20 + 600))(
                                              v1568,
                                              v2 + 280,
                                              0LL);
                    if ( !v1599 )
                      goto LABEL_2355;
                    v1600 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x118);
                    if ( v1600 + *v1599 != v1568 )
                      goto LABEL_2355;
                    if ( v1600 != *(_QWORD *)(v20 + 2224) )
                      goto LABEL_2355;
                    v1601 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v20 + 520))(
                              *(_QWORD *)(v20 + 2240),
                              v1600,
                              (unsigned int)(v1568 - v1600));
                    if ( !v1601
                      || (*(_DWORD *)(v1601 + 36) & 0x2000000) != 0
                      || *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) == 254
                      && v1571 != *(_QWORD *)(v20 + 2208) )
                    {
                      goto LABEL_2355;
                    }
                  }
LABEL_2375:
                  v1554 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) + 1;
                  v1555 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) + 16LL;
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1554;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1555;
                  if ( v1554 > 0xFF )
                  {
                    if ( (*(_BYTE *)(v20 + 2147) & 1) != 0 )
                    {
                      _disable();
                      v1577 = 3221225602LL;
                      v1578 = __readmsr(0xC0000082);
                      v1579 = (unsigned __int64)(v20 + 2146) >> 32;
                      __writemsr(0xC0000082, v20 + 2146);
                      if ( (*(_DWORD *)(v20 + 2420) & 0x20000) == 0 )
                      {
                        v1580 = KeGetCurrentPrcb();
                        v1579 = v20 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v20 + 1200) = v20 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v20 + 1208) = v1580;
                        **(_QWORD **)(v20 + 1216) = 3221225602LL;
                        v1577 = *(_QWORD *)(v20 + 1224);
                        *(_QWORD *)v1577 = 274LL;
                      }
                      ((void (__fastcall *)(__int64, unsigned __int64))(v20 + 2148))(v1577, v1579);
                      if ( (*(_DWORD *)(v20 + 2420) & 0x20000) == 0 )
                      {
                        **(_QWORD **)(v20 + 1200) = 0xA3A03F5891C8B4E8uLL;
                        **(_QWORD **)(v20 + 1208) = 0LL;
                        **(_QWORD **)(v20 + 1216) = 0LL;
                        **(_QWORD **)(v20 + 1224) = 0LL;
                      }
                      __writemsr(0xC0000082, v1578);
                      _enable();
                    }
                    v1581 = *(_QWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                    *(_DWORD *)(v20 + 2064) += 848;
                    v1582 = v1581;
                    v1583 = *(_DWORD *)(v20 + 2064);
                    v1584 = (const char *)v1581;
                    v1585 = *(_DWORD *)(v20 + 2044);
                    v1586 = *(_QWORD *)(v20 + 2048);
                    if ( v1581 < v1581 + 106 )
                    {
                      do
                      {
                        _mm_prefetch(v1584, 0);
                        v1584 += 64;
                      }
                      while ( v1584 < (const char *)v1581 + 848 );
                    }
                    v1587 = 6;
                    v1588 = *(_QWORD *)(v20 + 2048);
                    do
                    {
                      v1589 = 8LL;
                      do
                      {
                        v1590 = *v1582 ^ v1588;
                        v1591 = v1582 + 1;
                        v1592 = *v1591 ^ __ROL8__(v1590, v1585);
                        v1582 = v1591 + 1;
                        v1588 = __ROL8__(v1592, v1585);
                        --v1589;
                      }
                      while ( v1589 );
                      v1593 = (__ROL8__(v1586 ^ ((char *)v1582 - (char *)v1581), 17) ^ v1586 ^ (unsigned __int64)((char *)v1582 - (char *)v1581))
                            * (unsigned __int128)0x7010008004002001uLL;
                      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C0) = *((_QWORD *)&v1593 + 1);
                      v1585 = ((unsigned __int8)v1593 ^ (unsigned __int8)(BYTE8(v1593) ^ v1585)) & 0x3F;
                      if ( !v1585 )
                        LOBYTE(v1585) = 1;
                      --v1587;
                    }
                    while ( v1587 );
                    v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    v1594 = 80;
                    v1595 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v1596 = 10LL;
                    do
                    {
                      v1588 = __ROL8__(*v1582++ ^ v1588, v1585);
                      v1594 -= 8;
                      --v1596;
                    }
                    while ( v1596 );
                    for ( ; v1594; --v1594 )
                    {
                      v1597 = *(unsigned __int8 *)v1582;
                      v1582 = (_QWORD *)((char *)v1582 + 1);
                      v1588 = __ROL8__(v1597 ^ v1588, v1585);
                    }
                    for ( i19 = v1588; ; LODWORD(v1588) = i19 ^ v1588 )
                    {
                      i19 >>= 31;
                      if ( !i19 )
                        break;
                    }
                    v1602 = v1588 & 0x7FFFFFFF;
                    *(_DWORD *)(v20 + 2064) = v1583 + 16;
                    v1603 = v1581 + 450;
                    v1604 = *(_DWORD *)(v20 + 2044);
                    v1605 = *(_QWORD *)(v20 + 2048);
                    v1606 = (const char *)(v1581 + 450);
                    if ( v1581 + 450 < v1581 + 452 )
                    {
                      do
                      {
                        _mm_prefetch(v1606, 0);
                        v1606 += 64;
                      }
                      while ( v1606 < (const char *)v1581 + 3616 );
                    }
                    v1607 = 2LL;
                    v1608 = 16;
                    do
                    {
                      v1605 = __ROL8__(*v1603++ ^ v1605, v1604);
                      v1608 -= 8;
                      --v1607;
                    }
                    while ( v1607 );
                    for ( j = 0LL; v1608; --v1608 )
                    {
                      v1609 = *(unsigned __int8 *)v1603;
                      v1603 = (_QWORD *)((char *)v1603 + 1);
                      v1605 = __ROL8__(v1609 ^ v1605, v1604);
                    }
                    for ( i20 = v1605; ; LODWORD(v1605) = i20 ^ v1605 )
                    {
                      i20 >>= 31;
                      if ( !i20 )
                        break;
                    }
                    v1611 = v1605 & 0x7FFFFFFF;
                    (*(void (__fastcall **)(unsigned __int64, _QWORD *))(v20 + 400))(v2 + 1480, v1603);
                    v1612 = *(int **)v2;
                    v1613 = *(unsigned int *)(*(_QWORD *)v2 + 20LL);
                    if ( v1602 != (_DWORD)v1613
                      || v1611 != *((_QWORD *)v1612 + 3)
                      || *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x290) != *((_WORD *)v1612 + 22)
                      || v1595 )
                    {
                      if ( !v1595 )
                      {
                        v1614 = *((_QWORD *)v1612 + 3);
                        v1615 = *(_DWORD *)(v20 + 2264);
                        if ( v1611 == v1614 )
                        {
                          if ( !v1615 )
                          {
                            v1616 = v1613 ^ v1602;
                            goto LABEL_2427;
                          }
                        }
                        else if ( !v1615 )
                        {
                          v1616 = (unsigned int)v1614 ^ (unsigned __int64)v1611;
LABEL_2427:
                          *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v1616;
                        }
                      }
                      v1617 = *((_QWORD *)v1612 + 1);
                      if ( !*(_DWORD *)(v20 + 2264) )
                      {
                        *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v20 + 2280) = (char *)v1612 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v20 + 2288) = *v1612;
                        *(_QWORD *)(v20 + 2296) = v1617;
                        *(_DWORD *)(v20 + 2264) = 1;
                      }
                    }
                    *(_DWORD *)(v20 + 2064) += 0x10000;
                    goto LABEL_178;
                  }
                  continue;
                }
                v1571 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                v1557 = -1LL;
              }
              else
              {
                v1571 = v1557;
              }
              break;
            }
            v1568 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            goto LABEL_2363;
          }
          v284 = *(_QWORD ***)(v20 + 1312);
          v285 = *(__int64 (**)(void))(v20 + 880);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v284;
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = j;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v285();
          _disable();
          v286 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v20 + 1584));
          _enable();
          (*(void (__fastcall **)(__int64))(v20 + 352))(v286);
          LOBYTE(v287) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v20 + 232))(*(_QWORD *)(v20 + 1320), v287);
          v288 = j;
          v289 = **(unsigned int ***)(v20 + 1536);
          v290 = *v289;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v289 + 4;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = &v289[6 * v290 + 4];
          if ( *((_BYTE *)v289 + 12) != (_BYTE)j )
          {
            v291 = *v284;
            LODWORD(v290) = j;
            while ( v291 != v284 )
            {
              v291 = (_QWORD *)*v291;
              LODWORD(v290) = v290 + 1;
            }
          }
          v292 = __rdtsc();
          v293 = __ROR8__(v292, 3);
          v294 = (v293 ^ v292) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x518) = *((_QWORD *)&v294 + 1);
          v295 = ((unsigned __int16)(8193 * (v293 ^ v292)) ^ WORD4(v294)) & 0x7FF;
          v296 = __rdtsc();
          v297 = (__ROR8__(v296, 3) ^ v296) * (unsigned __int128)0x7010008004002001uLL;
          v298 = *(unsigned int *)(v20 + 2040);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x520) = *((_QWORD *)&v297 + 1);
          v299 = (*((_QWORD *)&v297 + 1) ^ (unsigned __int64)v297) % (unsigned int)(v295 + 1);
          v300 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v20 + 240))(
                   512LL,
                   (unsigned int)(v295 + 8 * v290),
                   v298);
          v301 = v300;
          if ( !v300 )
          {
            ++*(_DWORD *)(v20 + 2552);
            goto LABEL_526;
          }
          v302 = v299;
          v303 = (_QWORD *)v300;
          if ( (unsigned int)v299 >= 8 )
          {
            v304 = (unsigned __int64)(unsigned int)v299 >> 3;
            do
            {
              v305 = __rdtsc();
              v302 -= 8;
              v306 = (__ROR8__(v305, 3) ^ v305) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x608) = *((_QWORD *)&v306 + 1);
              *v303++ = v306 ^ *((_QWORD *)&v306 + 1);
              --v304;
            }
            while ( v304 );
            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v284 = *(_QWORD ***)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          if ( v302 )
          {
            v307 = __rdtsc();
            v308 = (__ROR8__(v307, 3) ^ v307) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x628) = *((_QWORD *)&v308 + 1);
            v309 = v308 ^ *((_QWORD *)&v308 + 1);
            do
            {
              *(_BYTE *)v303 = v309;
              v303 = (_QWORD *)((char *)v303 + 1);
              v309 >>= 8;
              --v302;
            }
            while ( v302 );
          }
          v310 = v295 - v299;
          v311 = (_QWORD *)((unsigned int)v299 + v301 + (unsigned int)(8 * v290));
          if ( v310 >= 8 )
          {
            v303 = (_QWORD *)((unsigned __int64)v310 >> 3);
            do
            {
              v312 = __rdtsc();
              v310 -= 8;
              v313 = (__ROR8__(v312, 3) ^ v312) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x630) = *((_QWORD *)&v313 + 1);
              *v311++ = v313 ^ *((_QWORD *)&v313 + 1);
              v303 = (_QWORD *)((char *)v303 - 1);
            }
            while ( v303 );
          }
          if ( v310 )
          {
            v314 = __rdtsc();
            v315 = (__ROR8__(v314, 3) ^ v314) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x638) = *((_QWORD *)&v315 + 1);
            v316 = v315 ^ *((_QWORD *)&v315 + 1);
            do
            {
              *(_BYTE *)v311 = v316;
              v311 = (_QWORD *)((char *)v311 + 1);
              v316 >>= 8;
              --v310;
            }
            while ( v310 );
          }
          v317 = v301 + (unsigned int)v299;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = v301;
          if ( v317 )
          {
            v318 = *v284;
            while ( v318 != v284 )
            {
              v319 = *(_QWORD *)((char *)v318 + *(_QWORD *)(v20 + 1848) - *(_QWORD *)(v20 + 1840));
              if ( !(*(unsigned int (__fastcall **)(__int64))(v20 + 672))(v319) && v288 < (unsigned int)v290 )
                *(_QWORD *)(v317 + 8LL * v288++) = v319;
              v318 = (_QWORD *)*v318;
              ++*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
            }
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(v20 + 912))(v317, v288, v311, v303);
            v320 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            v321 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            do
            {
              v322 = *(_QWORD *)(v320 + 8);
              if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v20 + 672))(v322) )
              {
                v323 = v288 - 1;
                v324 = 0;
                if ( (int)(v288 - 1) < 0 )
                  goto LABEL_543;
                do
                {
                  v325 = (v323 + v324) >> 1;
                  v326 = *(_QWORD *)(v317 + 8LL * v325);
                  if ( v322 >= v326 )
                  {
                    if ( v322 <= v326 )
                      break;
                    v324 = v325 + 1;
                  }
                  else
                  {
                    if ( !v325 )
                      goto LABEL_543;
                    v323 = v325 - 1;
                  }
                }
                while ( v323 >= v324 );
                if ( v323 < v324 )
                {
LABEL_543:
                  if ( !*(_DWORD *)(v20 + 2264) )
                  {
                    v327 = *(int **)v2;
                    *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v20 + 2280) = (char *)v327 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v20 + 2288) = *v327;
                    *(_QWORD *)(v20 + 2296) = v322;
                    *(_DWORD *)(v20 + 2264) = 1;
                  }
                }
              }
              v320 += 24LL;
            }
            while ( v320 < v321 );
            j = 0LL;
          }
          else
          {
LABEL_526:
            j = 0LL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = 0LL;
          }
          (*(void (__fastcall **)(_QWORD))(v20 + 272))(*(_QWORD *)(v20 + 1320));
          (*(void (**)(void))(v20 + 360))();
          (*(void (__fastcall **)(_QWORD))(v20 + 888))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x48));
          if ( *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) )
          {
            *(_DWORD *)(v20 + 2064) += *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) << 9;
            (*(void (__fastcall **)(_QWORD))(v20 + 248))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x1A8));
          }
          goto LABEL_178;
        }
        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 && (*(_DWORD *)(v20 + 2420) & 0x1000) == 0 )
        {
          v328 = __rdtsc();
          v329 = (__ROR8__(v328, 3) ^ v328) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x398) = *((_QWORD *)&v329 + 1);
          *(_DWORD *)(v20 + 2060) = ((unsigned __int64)v329 ^ *((_QWORD *)&v329 + 1)) % 5;
        }
        v330 = 1LL;
LABEL_553:
        v331 = *(_DWORD *)(v20 + 2060);
        if ( !v331 )
        {
          v707 = v53;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x228) = j;
          v337 = j;
          while ( 1 )
          {
            v714 = (*(__int64 (__fastcall **)(unsigned __int64))(v20 + 760))(v2 + 552);
            if ( !v714 )
              break;
            v337 += v330;
            if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 512))(v714, v2 + 1016) )
            {
              if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
              {
                v708 = *(_QWORD **)(v20 + 2640);
                v709 = 48;
                v710 = 6LL;
                do
                {
                  v709 -= 8;
                  *v708++ = *v707++;
                  v710 -= v330;
                }
                while ( v710 );
                if ( v709 )
                {
                  do
                  {
                    v711 = *(_BYTE *)v707;
                    v707 = (_QWORD *)((char *)v707 + v330);
                    *(_BYTE *)v708 = v711;
                    v708 = (_QWORD *)((char *)v708 + v330);
                    --v709;
                  }
                  while ( v709 );
                  v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v707 = *(_QWORD **)(v20 + 2640);
              }
              v707[3] = v714;
              v712 = *(_QWORD *)(v20 + 1408);
              *(_QWORD *)v712 = v707;
              *(_DWORD *)(v712 + 16) = 48;
              v713 = *(_QWORD *)(v20 + 1408);
              *(_QWORD *)(v713 + 8) = v714;
              *(_DWORD *)(v713 + 20) = 4096;
              if ( *(_DWORD *)(v20 + 2264) == (_DWORD)j )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = (char *)v707 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v707;
                *(_QWORD *)(v20 + 2296) = 3LL;
                *(_DWORD *)(v20 + 2264) = v330;
              }
            }
          }
          goto LABEL_1064;
        }
        v332 = v331 - 1;
        if ( !v332 )
        {
          v698 = v53;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = j;
          v337 = j;
          v699 = KeGetCurrentIrql();
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v699;
          __writecr8(0xCuLL);
          v700 = (*(__int64 (__fastcall **)(unsigned __int64))(v20 + 768))(v2 + 544);
          if ( v700 )
          {
            do
            {
              v337 += v330;
              if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 512))(v700, v2 + 1008) )
              {
                if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                {
                  v701 = *(_QWORD **)(v20 + 2640);
                  v702 = 48;
                  v703 = 6LL;
                  do
                  {
                    v702 -= 8;
                    *v701++ = *v698++;
                    v703 -= v330;
                  }
                  while ( v703 );
                  if ( v702 )
                  {
                    do
                    {
                      v704 = *(_BYTE *)v698;
                      v698 = (_QWORD *)((char *)v698 + v330);
                      *(_BYTE *)v701 = v704;
                      v701 = (_QWORD *)((char *)v701 + v330);
                      --v702;
                    }
                    while ( v702 );
                    v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  }
                  v698 = *(_QWORD **)(v20 + 2640);
                }
                v698[3] = v700;
                v705 = *(_QWORD *)(v20 + 1408);
                *(_QWORD *)v705 = v698;
                *(_DWORD *)(v705 + 16) = 48;
                v706 = *(_QWORD *)(v20 + 1408);
                *(_QWORD *)(v706 + 8) = v700;
                *(_DWORD *)(v706 + 20) = 4096;
                if ( !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = (char *)v698 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v698;
                  *(_QWORD *)(v20 + 2296) = 4LL;
                  *(_DWORD *)(v20 + 2264) = v330;
                }
              }
              v700 = (*(__int64 (__fastcall **)(unsigned __int64))(v20 + 768))(v2 + 544);
            }
            while ( v700 );
            v699 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
          }
          __writecr8((unsigned __int8)v699);
          goto LABEL_1064;
        }
        v333 = v332 - 1;
        if ( !v333 )
        {
          v688 = v53;
          v689 = j;
          v337 = j;
          v690 = j;
          while ( 1 )
          {
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = j;
            while ( 1 )
            {
              do
              {
                if ( !(*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v20 + 752))(
                        v689,
                        v2 + 272,
                        v2 + 432) )
                  goto LABEL_1036;
                v691 = (*(__int64 (__fastcall **)(_QWORD))(v20 + 720))(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                 + 0x1B0));
              }
              while ( !v691 );
              ++v337;
              j = (*(__int64 (__fastcall **)(__int64))(v20 + 728))(v691);
              if ( !(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 512))(j, v2 + 1000) )
                break;
              (*(void (__fastcall **)(_QWORD, __int64))(v20 + 736))(
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0),
                v691);
              LODWORD(j) = 0;
            }
            if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
            {
              v692 = *(_QWORD **)(v20 + 2640);
              v693 = 48;
              v694 = 6LL;
              do
              {
                v693 -= 8;
                *v692 = *(_QWORD *)v688;
                v688 += 8;
                ++v692;
                --v694;
              }
              while ( v694 );
              if ( v693 )
              {
                do
                {
                  v695 = *v688++;
                  *(_BYTE *)v692 = v695;
                  v692 = (_QWORD *)((char *)v692 + 1);
                  --v693;
                }
                while ( v693 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v688 = *(char **)(v20 + 2640);
            }
            *((_QWORD *)v688 + 3) = j;
            v696 = *(_QWORD *)(v20 + 1408);
            *(_QWORD *)v696 = v688;
            *(_DWORD *)(v696 + 16) = 48;
            v697 = *(_QWORD *)(v20 + 1408);
            *(_QWORD *)(v697 + 8) = j;
            LODWORD(j) = 0;
            *(_DWORD *)(v697 + 20) = 4096;
            if ( !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v688 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v688;
              *(_QWORD *)(v20 + 2296) = v690;
              *(_DWORD *)(v20 + 2264) = 1;
            }
LABEL_1036:
            ++v689;
            ++v690;
            if ( v689 >= 3 )
            {
              v330 = 1LL;
              goto LABEL_1064;
            }
          }
        }
        v334 = v333 - 1;
        if ( v334 )
        {
          v335 = v334 - 1;
          if ( v335 )
          {
            if ( v335 == 1 )
            {
              v336 = v53;
              *(_BYTE *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = -1;
              v337 = j;
              v338 = j;
              do
              {
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) = 0LL;
                while ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, unsigned __int64))(v20 + 1064))(
                          v338,
                          v2 + 520,
                          v2 + 104,
                          v2 + 336) )
                {
                  v337 += v330;
                  if ( !(*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(v20 + 512))(
                          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x150),
                          v2 + 928) )
                  {
                    if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                    {
                      v339 = *(_QWORD **)(v20 + 2640);
                      v340 = 48;
                      v341 = 6LL;
                      do
                      {
                        v340 -= 8;
                        *v339++ = *v336++;
                        v341 -= v330;
                      }
                      while ( v341 );
                      if ( v340 )
                      {
                        do
                        {
                          v342 = *(_BYTE *)v336;
                          v336 = (_QWORD *)((char *)v336 + v330);
                          *(_BYTE *)v339 = v342;
                          v339 = (_QWORD *)((char *)v339 + v330);
                          --v340;
                        }
                        while ( v340 );
                        v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      v336 = *(_QWORD **)(v20 + 2640);
                    }
                    v336[3] = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x150);
                    v343 = *(_QWORD *)(v20 + 1408);
                    *(_QWORD *)v343 = v336;
                    *(_DWORD *)(v343 + 16) = 48;
                    v344 = *(_QWORD *)(v20 + 1408);
                    *(_QWORD *)(v344 + 8) = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x150);
                    *(_DWORD *)(v344 + 20) = 4096;
                    if ( !*(_DWORD *)(v20 + 2264) )
                    {
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = (char *)v336 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v336;
                      *(_QWORD *)(v20 + 2296) = j;
                      *(_DWORD *)(v20 + 2264) = v330;
                    }
                  }
                }
                v338 += v330;
                j += v330;
              }
              while ( v338 < 3 );
              goto LABEL_1064;
            }
            *(_DWORD *)(v20 + 2060) = j;
            goto LABEL_1067;
          }
          v345 = *(__int64 (__fastcall **)(_QWORD))(v20 + 784);
          v337 = j;
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = j;
          v346 = v345(0LL);
          if ( v346 )
          {
            v347 = *(char **)v2;
            do
            {
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x210) = 0LL;
              v348 = v347;
              v349 = 1;
              v350 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 776))(v346, v2 + 528);
              if ( v350 )
              {
                do
                {
                  ++v349;
                  if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 512))(v350, v2 + 936) )
                  {
                    if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
                    {
                      v351 = *(_QWORD **)(v20 + 2640);
                      v352 = 48;
                      v353 = 6LL;
                      do
                      {
                        v352 -= 8;
                        *v351 = *(_QWORD *)v348;
                        v348 += 8;
                        ++v351;
                        --v353;
                      }
                      while ( v353 );
                      if ( v352 )
                      {
                        do
                        {
                          v354 = *v348++;
                          *(_BYTE *)v351 = v354;
                          v351 = (_QWORD *)((char *)v351 + 1);
                          --v352;
                        }
                        while ( v352 );
                        v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      v348 = *(char **)(v20 + 2640);
                    }
                    *((_QWORD *)v348 + 3) = v350;
                    *((_QWORD *)v348 + 4) = v346;
                    v355 = *(_QWORD *)(v20 + 1408);
                    *(_QWORD *)v355 = v348;
                    *(_DWORD *)(v355 + 16) = 48;
                    v356 = *(_QWORD *)(v20 + 1408);
                    *(_QWORD *)(v356 + 8) = v350;
                    *(_DWORD *)(v356 + 20) = 4096;
                    if ( !*(_DWORD *)(v20 + 2264) )
                    {
                      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v20 + 2280) = v348 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v20 + 2288) = *(int *)v348;
                      *(_QWORD *)(v20 + 2296) = 6LL;
                      *(_DWORD *)(v20 + 2264) = 1;
                    }
                  }
                  v350 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 776))(v346, v2 + 528);
                }
                while ( v350 );
                v337 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                v347 = *(char **)v2;
              }
              v357 = *(__int64 (__fastcall **)(__int64))(v20 + 784);
              v337 += v349;
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v337;
              v346 = v357(v346);
            }
            while ( v346 );
          }
LABEL_590:
          v330 = 1LL;
          goto LABEL_1064;
        }
        v75 = (*(_DWORD *)(v20 + 2416) & 0x40000000) == 0;
        v358 = (_BYTE *)v20;
        v359 = *(__int64 **)(v20 + 1248);
        v337 = j;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v20;
        v360 = *v359;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = *v359;
        if ( !v75 )
          goto LABEL_590;
        v361 = *(int **)v2;
        v362 = *(_QWORD *)(*(_QWORD *)v2 + 40LL);
        if ( v362 )
        {
          v330 = 1LL;
          v337 = 1;
          if ( v360 != v362 )
          {
            *((_QWORD *)v361 + 3) = v360;
            v363 = *(_QWORD *)(v20 + 1408);
            *(_QWORD *)v363 = v361;
            *(_DWORD *)(v363 + 16) = 48;
            v364 = *(_QWORD *)(v20 + 1408);
            *(_QWORD *)(v364 + 8) = v360;
            *(_DWORD *)(v364 + 20) = 4096;
            if ( *(_DWORD *)(v20 + 2264) == (_DWORD)j )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = (char *)v361 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *v361;
              *(_QWORD *)(v20 + 2296) = 5LL;
              *(_DWORD *)(v20 + 2264) = 1;
            }
          }
          goto LABEL_1064;
        }
        if ( !v360 )
          goto LABEL_590;
        v365 = *(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(v20 + 504);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v20;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 1;
        v366 = v365(v360, v2 + 144, v2 + 100);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v366;
        v368 = v366;
        if ( !v366 )
        {
          v369 = -1073741701;
          goto LABEL_1017;
        }
        v370 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v371 = (_BYTE *)(v2 + 320);
        v372 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v372;
        v373 = 0xFFFFFFFFLL;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v370;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = 0LL;
        v374 = 4;
        do
        {
          *v371++ = 0;
          --v374;
        }
        while ( v374 );
        v375 = 0;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = 0;
        if ( *(_DWORD *)(v20 + 2036) )
        {
          LODWORD(v373) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x140);
          LODWORD(v367) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x13C);
          v376 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x138);
          while ( 1 )
          {
            v377 = 0;
            v378 = v20;
            if ( *(_QWORD *)(v20 + 2632) )
              v378 = *(_QWORD *)(v20 + 2632);
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v378;
            v379 = (int *)(v378 + *(unsigned int *)(v378 + 2032));
            if ( v376 && (unsigned int)v367 <= v375 )
            {
              v377 = v367;
              v379 = (int *)(v378 + (unsigned int)v373);
            }
            if ( v377 != v375 )
              break;
LABEL_632:
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = 1;
            v373 = (unsigned int)((_DWORD)v379 - v378);
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x13C) = v377;
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = v373;
            v376 = 1;
            v387 = *v379;
            v367 = v377;
            if ( (unsigned int)v387 <= 0x2B )
            {
              v388 = 0x80000001002LL;
              if ( _bittest64(&v388, v387) )
              {
                if ( *((_QWORD *)v379 + 1) == v368 && v379[4] == v372 )
                  goto LABEL_642;
              }
            }
            if ( (unsigned int)(v387 - 33) <= 1 && *((_QWORD *)v379 + 4) == v370 )
              goto LABEL_642;
            *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = ++v375;
            if ( v375 >= *(_DWORD *)(v20 + 2036) )
              goto LABEL_641;
          }
          v380 = v375 - v377;
          v377 = v375;
          while ( 2 )
          {
            v381 = *v379;
            if ( *v379 > 12 )
            {
              if ( v381 == 28 )
              {
                v386 = *((unsigned __int16 *)v379 + 20);
                goto LABEL_629;
              }
              if ( v381 == 30 )
              {
                v385 = (((v379[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v379 + 20) + 2);
                goto LABEL_630;
              }
              if ( v381 <= 32 )
                goto LABEL_626;
              if ( v381 <= 34 )
              {
                v385 = 20
                     * (unsigned int)(((v379[8] & 0xFFFLL) + (unsigned __int64)(unsigned int)v379[10] + 4095) >> 12)
                     + 48;
                goto LABEL_630;
              }
              if ( v381 != 43 )
                goto LABEL_626;
            }
            else if ( v381 != 12 )
            {
              v382 = v381 - 1;
              if ( v382 )
              {
                v383 = v382 - 6;
                if ( !v383 )
                {
                  v385 = (unsigned int)(24 * (v379[6] + 2));
                  goto LABEL_630;
                }
                v384 = v383 - 1;
                if ( v384 )
                {
                  if ( v384 == 2 )
                  {
                    v385 = (unsigned int)(16 * (v379[7] + 3));
                    goto LABEL_630;
                  }
LABEL_626:
                  v385 = 48LL;
LABEL_630:
                  v379 = (int *)((char *)v379 + v385);
                  if ( !--v380 )
                  {
                    v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    v378 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v375 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    v370 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    v372 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                    v368 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    goto LABEL_632;
                  }
                  continue;
                }
                v386 = *((unsigned __int16 *)v379 + 16);
LABEL_629:
                v385 = (v386 + 55) & 0xFFFFFFF8;
                goto LABEL_630;
              }
            }
            break;
          }
          v385 = 4 * (v379[4] / 0xCu) + 48;
          goto LABEL_630;
        }
LABEL_641:
        v379 = 0LL;
LABEL_642:
        v360 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = v379;
        if ( v379 )
        {
          v369 = -1073741554;
          goto LABEL_1017;
        }
        v389 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v20 + 672))(v360, v373, 0LL, v367);
        v75 = (*(_DWORD *)(v20 + 2416) & 0x40000000) == 0;
        v391 = v389;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v389;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                          + 0x64);
        if ( !v75 )
        {
          v392 = sub_14098FFA4(v2 + 216, *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90), 9LL);
          v358 = *(_BYTE **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
          v369 = v392;
          goto LABEL_1017;
        }
        v393 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))(v20 + 488);
        v394 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x320) = 0LL;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0) = 0;
        LOBYTE(v390) = 1;
        v395 = v393(v394, v390, 0LL, v2 + 100);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x308) = v395;
        v396 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v397 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) & (unsigned int)-(v395 != 0);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) = v397;
        v398 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v20 + 488);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E4) = v397;
        LOBYTE(v397) = 1;
        v399 = v398(v396, v397, 12LL, v2 + 100);
        v400 = v399;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v399;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x310) = v399;
        LOBYTE(v400) = 1;
        v401 = v399 != 0 ? *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) : 0;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) = v401;
        v402 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64))(v20 + 488);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v401;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) = v401;
        v403 = v402(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90), v400, 10LL, v2 + 100);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x318) = v403;
        v404 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v405 = v403 != 0 ? *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) : 0;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) = v405;
        v406 = *(__int64 (__fastcall **)(__int64))(v20 + 496);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1EC) = v405;
        v407 = v406(v404);
        if ( !v407 )
        {
LABEL_647:
          v369 = -1073741701;
          goto LABEL_1016;
        }
        v408 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(v20 + 1168))(
                 *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90),
                 v2 + 688);
        v409 = *(unsigned int *)(v20 + 1996);
        v410 = *(unsigned int *)(v20 + 2308);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x328) = v408;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F4) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                           + 0x2B0);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x300) = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                           + 0x90);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = *(_DWORD *)(v407 + 84);
        v411 = v409 + 288;
        v412 = v391 != 0 ? 0xB : 0;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v412;
        if ( (unsigned int)(v409 + 288) <= *(_DWORD *)(v20 + 2556) )
        {
          v414 = v20;
          *(_DWORD *)(v20 + 1996) = v411;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v20;
          goto LABEL_668;
        }
        v413 = sub_1403495B4(v20, v411, v410);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v413;
        v414 = v413;
        if ( !v413 )
          goto LABEL_665;
        v415 = *(_DWORD *)(v20 + 2416);
        if ( (v415 & 4) == 0 )
        {
          v416 = *(_DWORD *)(v20 + 1996);
          v417 = *(_QWORD *)(v20 + 1968);
          v418 = (_QWORD *)v20;
          v419 = (v415 & 0x20000000) != 0 ? *(_DWORD *)(v20 + 2308) : 0;
          if ( v416 >= 8 )
          {
            v420 = (unsigned __int64)v416 >> 3;
            do
            {
              *v418 = 0LL;
              v416 -= 8;
              ++v418;
              --v420;
            }
            while ( v420 );
          }
          for ( ; v416; --v416 )
          {
            *(_BYTE *)v418 = 0;
            v418 = (_QWORD *)((char *)v418 + 1);
          }
          v421 = *(_DWORD *)(v414 + 2308);
          *(_DWORD *)(v414 + 2308) = v419;
          if ( v419 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v414 + 864))(v417);
          }
          else
          {
            v422 = 0;
            if ( (*(_DWORD *)(v414 + 2416) & 0x10000000) == 0 )
              v422 = v419;
            if ( v422 )
              (*(void (__fastcall **)(__int64, _QWORD))(v414 + 544))(v417 - 8, *(_QWORD *)(v417 - 8));
            else
              (*(void (__fastcall **)(__int64))(v414 + 248))(v417);
          }
          *(_DWORD *)(v414 + 2308) = v421;
        }
        *(_DWORD *)(v414 + 2416) &= ~4u;
        v412 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
LABEL_668:
        v423 = v414 + v409;
        *(_DWORD *)(v414 + 2036) += 6;
        v424 = (_QWORD *)(v2 + 768);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = v414 + v409;
        v425 = (unsigned int *)(v2 + 480);
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = v414 + v409;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 6LL;
        do
        {
          v426 = *v425;
          v427 = 6LL;
          v428 = (_QWORD *)*v424;
          v429 = 48;
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v426;
          v430 = (_QWORD *)v423;
          do
          {
            *v430 = 0LL;
            v429 -= 8;
            ++v430;
            --v427;
          }
          while ( v427 );
          for ( ; v429; --v429 )
          {
            *(_BYTE *)v430 = 0;
            v430 = (_QWORD *)((char *)v430 + 1);
          }
          *(_DWORD *)v423 = v412;
          *(_QWORD *)(v423 + 8) = v428;
          v431 = v428;
          *(_DWORD *)(v423 + 16) = v426;
          v432 = (const char *)v428;
          *(_DWORD *)(v414 + 2064) += v426;
          v433 = *(_DWORD *)(v414 + 2044);
          v434 = *(_QWORD *)(v414 + 2048);
          if ( v428 < (_QWORD *)((char *)v428 + v426) )
          {
            do
            {
              _mm_prefetch(v432, 0);
              v432 += 64;
            }
            while ( v432 < (const char *)v428 + v426 );
          }
          v435 = *(_QWORD *)(v414 + 2048);
          v436 = (unsigned int)v426 >> 7;
          if ( (unsigned int)v426 >> 7 )
          {
            do
            {
              v437 = 8LL;
              do
              {
                v438 = v435 ^ *v431;
                v439 = v431[1];
                v431 += 2;
                v435 = __ROL8__(__ROL8__(v438, v433) ^ v439, v433);
                --v437;
              }
              while ( v437 );
              v440 = __ROL8__(v434 ^ ((char *)v431 - (char *)v428), 17) ^ v434 ^ ((char *)v431 - (char *)v428);
              v441 = (v440 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B0) = v441;
              v433 = ((unsigned __int8)v440 ^ (unsigned __int8)(v441 ^ v433)) & 0x3F;
              if ( !v433 )
                LOBYTE(v433) = 1;
              --v436;
            }
            while ( v436 );
            v414 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            LODWORD(v426) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
          }
          v442 = v426 & 0x7F;
          if ( v442 >= 8 )
          {
            v443 = (unsigned __int64)(v426 & 0x7F) >> 3;
            do
            {
              v435 = __ROL8__(*v431++ ^ v435, v433);
              v442 -= 8;
              --v443;
            }
            while ( v443 );
          }
          if ( v442 )
          {
            do
            {
              v444 = *(unsigned __int8 *)v431;
              v431 = (_QWORD *)((char *)v431 + 1);
              v435 = __ROL8__(v444 ^ v435, v433);
              --v442;
            }
            while ( v442 );
            v414 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          for ( i21 = v435; ; LODWORD(v435) = i21 ^ v435 )
          {
            i21 >>= 31;
            if ( !i21 )
              break;
          }
          v412 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
          *(_DWORD *)(v423 + 20) = v435 & 0x7FFFFFFF;
          ++v425;
          *(_DWORD *)(v414 + 2064) += v426;
          ++v424;
          v423 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) + 48LL;
          v75 = (*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30))-- == 1LL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = v423;
        }
        while ( !v75 );
        v446 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8);
        v447 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        v448 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
        *(_DWORD *)v446 = 44;
        *(_QWORD *)(v446 + 24) = v447;
        if ( (*(_DWORD *)(v414 + 2416) & 0x10200000) != 0 )
        {
LABEL_696:
          if ( !v448 )
            goto LABEL_698;
        }
        else if ( !v448 )
        {
          if ( (*(_DWORD *)(v414 + 2420) & 0x8000) != 0 )
          {
            *(_DWORD *)(v446 + 32) |= 1u;
            goto LABEL_696;
          }
LABEL_698:
          v449 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
          v450 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          v451 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
          v358 = (_BYTE *)v414;
          v1668 = v2 + 384;
          v1667 = v2 + 268;
          LODWORD(v1666) = 9;
          LODWORD(BugCheckParameter4) = v448;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v414;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v414;
          v369 = sub_140348B4C((int)v2 + 200, v451, v450, v449, BugCheckParameter4, v1666, v1667, v1668);
          if ( v369 < 0 )
            goto LABEL_1016;
          v358 = *(_BYTE **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
          v452 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x180)
               - *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10C);
          v453 = &v358[*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) - v414];
          v454 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90)
                          + *(unsigned int *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10C));
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = v453;
          v455 = v453 + 192;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v358;
          v456 = 48;
          v457 = v455;
          v458 = 6LL;
          do
          {
            *v457 = 0LL;
            v456 -= 8;
            ++v457;
            --v458;
          }
          while ( v458 );
          for ( ; v456; --v456 )
          {
            *(_BYTE *)v457 = 0;
            v457 = (_QWORD *)((char *)v457 + 1);
          }
          v459 = v454;
          *(_DWORD *)v455 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
          v460 = (const char *)v454;
          *((_QWORD *)v455 + 1) = v454;
          *((_DWORD *)v455 + 4) = v452;
          *((_DWORD *)v358 + 516) += v452;
          v461 = *((_DWORD *)v358 + 511);
          v462 = *((_QWORD *)v358 + 256);
          v463 = (unsigned __int64)v454 + v452;
          if ( (unsigned __int64)v454 < v463 )
          {
            do
            {
              _mm_prefetch(v460, 0);
              v460 += 64;
            }
            while ( (unsigned __int64)v460 < v463 );
          }
          v464 = *((_QWORD *)v358 + 256);
          v465 = v452 >> 7;
          if ( v452 >> 7 )
          {
            do
            {
              v466 = 8LL;
              do
              {
                v467 = v464 ^ *v459;
                v468 = v459[1];
                v459 += 2;
                v464 = __ROL8__(__ROL8__(v467, v461) ^ v468, v461);
                --v466;
              }
              while ( v466 );
              v469 = __ROL8__(v462 ^ ((char *)v459 - (char *)v454), 17) ^ v462 ^ ((char *)v459 - (char *)v454);
              v470 = (v469 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8) = v470;
              v461 = ((unsigned __int8)(v469 ^ v470) ^ (unsigned __int8)v461) & 0x3F;
              if ( !v461 )
                LOBYTE(v461) = 1;
              --v465;
            }
            while ( v465 );
            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v448 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
          }
          v471 = v452 & 0x7F;
          if ( (unsigned int)v471 >= 8 )
          {
            v472 = (unsigned __int64)(unsigned int)v471 >> 3;
            do
            {
              v464 = __ROL8__(*v459++ ^ v464, v461);
              v471 = (unsigned int)(v471 - 8);
              --v472;
            }
            while ( v472 );
          }
          for ( ; (_DWORD)v471; v471 = (unsigned int)(v471 - 1) )
          {
            v473 = *(unsigned __int8 *)v459;
            v459 = (_QWORD *)((char *)v459 + 1);
            v464 = __ROL8__(v473 ^ v464, v461);
          }
          for ( i22 = v464 >> 31; i22; i22 >>= 31 )
            v464 = (unsigned int)i22 ^ (unsigned int)v464;
          LODWORD(v464) = v464 & 0x7FFFFFFF;
          *((_DWORD *)v455 + 5) = v464;
          v475 = *(_DWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8);
          v475[60] = 48;
          if ( v475[64] )
          {
            v464 = 4294967294LL;
            v475[66] = v475[66] & 0xFFFFFFFE | (v448 != 0);
          }
          v476 = (int *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) + 96LL);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v358;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = v476;
          v477 = (v448 != 0) + 13;
          if ( v476 )
          {
            v480 = v358;
            *v476 = v477;
            LODWORD(v493) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            v492 = *(const char **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            goto LABEL_766;
          }
          v478 = *((unsigned int *)v358 + 499);
          v479 = v478 + 48;
          if ( (unsigned int)(v478 + 48) <= *((_DWORD *)v358 + 639) )
          {
            v480 = v358;
            *((_DWORD *)v358 + 499) = v479;
            goto LABEL_741;
          }
          v480 = (_BYTE *)sub_1403495B4(v358, v479, *((unsigned int *)v358 + 577));
          if ( v480 )
          {
            v481 = *((_DWORD *)v358 + 604);
            if ( (v481 & 4) == 0 )
            {
              v482 = *((_DWORD *)v358 + 499);
              v483 = *((_QWORD *)v358 + 246);
              v484 = (v481 & 0x20000000) != 0 ? *((_DWORD *)v358 + 577) : 0;
              if ( v482 >= 8 )
              {
                v485 = (unsigned __int64)v482 >> 3;
                do
                {
                  *(_QWORD *)v358 = 0LL;
                  v482 -= 8;
                  v358 += 8;
                  --v485;
                }
                while ( v485 );
              }
              for ( ; v482; --v482 )
                *v358++ = 0;
              v486 = *((_DWORD *)v480 + 577);
              *((_DWORD *)v480 + 577) = v484;
              if ( v484 == 3 )
              {
                (*((void (__fastcall **)(__int64))v480 + 108))(v483);
              }
              else
              {
                v487 = 0;
                if ( (*((_DWORD *)v480 + 604) & 0x10000000) == 0 )
                  v487 = v484;
                if ( v487 )
                  (*((void (__fastcall **)(__int64, _QWORD))v480 + 68))(v483 - 8, *(_QWORD *)(v483 - 8));
                else
                  (*((void (__fastcall **)(__int64))v480 + 31))(v483);
              }
              *((_DWORD *)v480 + 577) = v486;
            }
            *((_DWORD *)v480 + 604) &= ~4u;
LABEL_741:
            ++*((_DWORD *)v480 + 509);
            v488 = &v480[v478];
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B8) = v488;
            v489 = v488;
            v490 = 48;
            v491 = 6LL;
            do
            {
              *v489 = 0LL;
              v490 -= 8;
              ++v489;
              --v491;
            }
            while ( v491 );
            for ( ; v490; --v490 )
            {
              *(_BYTE *)v489 = 0;
              v489 = (_QWORD *)((char *)v489 + 1);
            }
            v492 = *(const char **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
            *(_DWORD *)v488 = v477;
            v471 = (unsigned __int64)v492;
            v493 = *(unsigned int *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
            *((_QWORD *)v488 + 1) = v492;
            *((_DWORD *)v488 + 4) = v493;
            *((_DWORD *)v480 + 516) += v493;
            v494 = *((_DWORD *)v480 + 511);
            v495 = *((_QWORD *)v480 + 256);
            if ( v492 < &v492[v493] )
            {
              v496 = v492;
              do
              {
                _mm_prefetch(v496, 0);
                v496 += 64;
              }
              while ( v496 < &v492[v493] );
            }
            v464 = *((_QWORD *)v480 + 256);
            v497 = (unsigned int)v493 >> 7;
            if ( (unsigned int)v493 >> 7 )
            {
              do
              {
                v498 = 8LL;
                do
                {
                  v499 = *(_QWORD *)(v471 + 8) ^ __ROL8__(*(_QWORD *)v471 ^ v464, v494);
                  v471 += 16LL;
                  v464 = __ROL8__(v499, v494);
                  --v498;
                }
                while ( v498 );
                v500 = (__ROL8__(v495 ^ (v471 - (_QWORD)v492), 17) ^ v495 ^ (v471 - (unsigned __int64)v492))
                     * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0) = *((_QWORD *)&v500 + 1);
                v494 = ((unsigned __int8)(v500 ^ BYTE8(v500)) ^ (unsigned __int8)v494) & 0x3F;
                if ( !v494 )
                  LOBYTE(v494) = 1;
                --v497;
              }
              while ( v497 );
              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              LODWORD(v493) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
              v448 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
            }
            v501 = v493 & 0x7F;
            if ( v501 >= 8 )
            {
              v502 = (unsigned __int64)(v493 & 0x7F) >> 3;
              do
              {
                v464 = __ROL8__(*(_QWORD *)v471 ^ v464, v494);
                v471 += 8LL;
                v501 -= 8;
                --v502;
              }
              while ( v502 );
            }
            if ( v501 )
            {
              do
              {
                v503 = *(unsigned __int8 *)v471++;
                v464 = __ROL8__(v503 ^ v464, v494);
                --v501;
              }
              while ( v501 );
              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            }
            for ( i23 = v464; ; v464 = (unsigned int)i23 ^ (unsigned int)v464 )
            {
              i23 >>= 31;
              if ( !i23 )
                break;
            }
            LODWORD(v464) = v464 & 0x7FFFFFFF;
            *((_DWORD *)v488 + 5) = v464;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                               + 0x2B8);
            *((_DWORD *)v480 + 516) += v493;
LABEL_766:
            if ( (*((_DWORD *)v480 + 604) & 0x40000000) != 0 && (_DWORD)v493 )
              sub_1401ADA3C(
                v480,
                v492,
                (unsigned int)v493,
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) + 28LL);
            v505 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x148);
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v480;
            v358 = v480;
            *(_DWORD *)(v505 + 24) = 0;
            v506 = 4294967294LL;
            *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) + 24LL) |= 1u;
            v507 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8);
            v508 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
            *(_DWORD *)(v507 + 144) = 35;
            *(_DWORD *)(v507 + 184) = *(_DWORD *)(v507 + 184) & 0xFFFFFFFE | (v448 != 0);
            if ( *(_DWORD *)(v507 + 160) >= 0x94u )
            {
              v509 = *(_QWORD *)(v507 + 152);
              v510 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, unsigned __int64))v480 + 62))(
                       v508,
                       4294967294LL,
                       v464,
                       v471);
              if ( !v510 )
              {
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = 0LL;
                goto LABEL_666;
              }
              v511 = *(unsigned int *)(v510 + 80);
              *(_DWORD *)(v507 + 184) |= 2u;
              v512 = v508 + v511;
              v513 = *(_QWORD **)(v509 + 112);
              if ( (unsigned __int64)v513 >= v508 && (unsigned __int64)v513 < v512 )
              {
                *(_QWORD *)(v507 + 168) = *v513;
                *(_DWORD *)(v507 + 184) |= 4u;
              }
              v514 = *(_QWORD **)(v509 + 120);
              if ( (unsigned __int64)v514 >= v508 && (unsigned __int64)v514 < v512 )
              {
                *(_QWORD *)(v507 + 176) = *v514;
                *(_DWORD *)(v507 + 184) |= 8u;
              }
            }
            v75 = (*((_DWORD *)v480 + 604) & 0x400000) == 0;
            v515 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v515;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v480;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v480;
            if ( !v75 )
            {
              v516 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v480 + 62))(
                       v515,
                       v506,
                       v464,
                       v471);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v516;
              v517 = v516;
              if ( !v516 )
                goto LABEL_647;
              v518 = *(_WORD *)(v516 + 6);
              v519 = *(unsigned int *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20)
                   * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
              *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v518;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *((_QWORD *)&v519 + 1) >> 3;
              if ( !v518 )
              {
                if ( (*((_DWORD *)v480 + 604) & 0x200000) == 0 )
                {
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x188) = 1329594368;
                  KeBugCheckEx(
                    __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x188), 10),
                    0xAuLL,
                    v515,
                    0LL,
                    0LL);
                }
                if ( !*((_DWORD *)v480 + 566) )
                {
                  *((_QWORD *)v480 + 284) = v480 - 0x5C5FC0A76E374B18LL;
                  *((_QWORD *)v480 + 285) = 0LL;
                  *((_QWORD *)v480 + 286) = 271LL;
                  *((_QWORD *)v480 + 287) = v515;
                  *((_DWORD *)v480 + 566) = 1;
                }
                goto LABEL_784;
              }
              v520 = 0;
              v521 = v518;
              v522 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 0;
              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v518;
              v523 = 3LL * (unsigned int)(*((_QWORD *)&v519 + 1) >> 3);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v523 * 4;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = &v522[v523];
              v524 = *(unsigned __int16 *)(v517 + 20) + v517 + 24;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v524;
              v525 = (_DWORD *)v524;
              do
              {
                v526 = v525[4];
                v527 = v525[3];
                if ( v526 <= v525[2] )
                  v526 = v525[2];
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v527;
                v528 = v527 + v526;
                if ( v520 )
                {
                  if ( v528 < *(_DWORD *)(v524 + 40LL * (v520 - 1) + 12) )
                  {
                    if ( (*((_DWORD *)v480 + 604) & 0x200000) == 0 )
                    {
                      *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18C) = 1329594368;
                      KeBugCheckEx(
                        __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18C), 10),
                        0xAuLL,
                        v515,
                        1uLL,
                        0LL);
                    }
                    if ( !*((_DWORD *)v480 + 566) )
                    {
                      *((_QWORD *)v480 + 284) = v480 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v480 + 285) = 0LL;
                      *((_QWORD *)v480 + 286) = 271LL;
                      *((_QWORD *)v480 + 287) = v515;
                      *((_DWORD *)v480 + 566) = 1;
                    }
                    goto LABEL_784;
                  }
                  v520 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                }
                if ( v522 != *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) )
                {
                  do
                  {
                    v529 = v522[1];
                    if ( *v522 >= v528 || v529 <= v527 )
                      break;
                    if ( *v522 < v527 || v529 > v528 )
                    {
                      if ( (*((_DWORD *)v480 + 604) & 0x200000) == 0 )
                      {
                        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x19C) = 1329594368;
                        KeBugCheckEx(
                          __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x19C), 10),
                          0xAuLL,
                          v515,
                          2uLL,
                          0LL);
                      }
LABEL_822:
                      if ( !*((_DWORD *)v480 + 566) )
                      {
                        *((_QWORD *)v480 + 284) = v480 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v480 + 285) = 0LL;
                        *((_QWORD *)v480 + 286) = 271LL;
                        *((_QWORD *)v480 + 287) = v515;
                        *((_DWORD *)v480 + 566) = 1;
                      }
LABEL_784:
                      v369 = -1073741701;
LABEL_1015:
                      v358 = v480;
LABEL_1016:
                      v360 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8);
LABEL_1017:
                      v685 = *(char **)v2;
                      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v358;
                      v686 = &v358[-v20];
                      v20 = (__int64)v358;
                      v687 = &v685[(_QWORD)v686];
                      *(_QWORD *)v2 = v687;
                      if ( (int)(v369 + 0x80000000) < 0 || v369 == -1073741554 )
                        *((_QWORD *)v687 + 5) = v360;
                      v337 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                      v330 = v337;
LABEL_1064:
                      j = 0LL;
                      *(_DWORD *)(v20 + 2064) += v337 << 12;
                      *(_DWORD *)(v20 + 2060) += v330;
                      if ( *(_DWORD *)(v20 + 2064) < *(_DWORD *)(v20 + 2068) )
                      {
                        v53 = *(char **)v2;
                        goto LABEL_553;
                      }
LABEL_1067:
                      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v20;
                      goto LABEL_178;
                    }
                    v530 = v522[2];
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8) = v522;
                    if ( (v530 & 1) != 0 || (*(_BYTE *)(v530 + v515) & 0x20) != 0 )
                    {
                      v531 = v525[4];
                      v532 = v525[3];
                      if ( v531 <= v525[2] )
                        v531 = v525[2];
                      v533 = v532 + v531;
                      v534 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, _QWORD))v480 + 130))(
                                               v522,
                                               *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38));
                      if ( *v534 >= v532 && v534[1] <= v533 )
                      {
                        v535 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      }
                      else
                      {
                        v535 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        if ( (*((_DWORD *)v480 + 604) & 0x200000) == 0 )
                        {
                          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x194) = 1329594368;
                          KeBugCheckEx(
                            __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x194), 10),
                            0xAuLL,
                            v535,
                            ((_DWORD)v534 - (_DWORD)v535) | 0x80000000,
                            0LL);
                        }
                        if ( !*((_DWORD *)v480 + 566) )
                        {
                          *((_QWORD *)v480 + 284) = v480 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v480 + 285) = 0LL;
                          *((_QWORD *)v480 + 286) = 271LL;
                          *((_QWORD *)v480 + 287) = v535;
                          *((_DWORD *)v480 + 566) = 1;
                        }
                      }
                      v536 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v480 + 131))(
                                               v534,
                                               v535,
                                               v535 + *v534);
                      if ( *v536 >= v532 && v536[1] <= v533 )
                      {
                        v527 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                        v515 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      }
                      else
                      {
                        v515 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        v537 = ((_DWORD)v536 - v515) | 0x80000000;
                        if ( (*((_DWORD *)v480 + 604) & 0x200000) == 0 )
                        {
                          v1654 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x190) = 1329594368;
                          KeBugCheckEx(
                            __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x190), 10),
                            0xAuLL,
                            v1654,
                            v537,
                            0LL);
                        }
                        v527 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                        if ( !*((_DWORD *)v480 + 566) )
                        {
                          *((_QWORD *)v480 + 284) = v480 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v480 + 285) = 0LL;
                          *((_QWORD *)v480 + 286) = 271LL;
                          *((_QWORD *)v480 + 287) = v515;
                          *((_DWORD *)v480 + 566) = 1;
                        }
                      }
                    }
                    v522 += 3;
                  }
                  while ( v522 != *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) );
                  v520 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  v521 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  v524 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                }
                ++v520;
                v525 += 10;
                *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v520;
              }
              while ( v520 < v521 );
              v538 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              v539 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              v540 = *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              v541 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              if ( v522 != *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) )
              {
                if ( (*((_DWORD *)v480 + 604) & 0x200000) == 0 )
                {
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) = 1329594368;
                  KeBugCheckEx(
                    __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x198), 10),
                    0xAuLL,
                    v515,
                    3uLL,
                    0LL);
                }
                goto LABEL_822;
              }
              v542 = *((unsigned int *)v480 + 499);
              v543 = v542 + ((v538 + 6) & 0xFFFFFFF8) + 24 * (v521 + 2);
              if ( v543 <= *((_DWORD *)v480 + 639) )
              {
                v545 = v480;
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v480;
                *((_DWORD *)v480 + 499) = v543;
              }
              else
              {
                v544 = sub_1403495B4(v480, v543, *((unsigned int *)v480 + 577));
                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v544;
                v545 = (_BYTE *)v544;
                if ( !v544 )
                {
                  v369 = -1073741670;
                  goto LABEL_1015;
                }
                v546 = *((_DWORD *)v480 + 604);
                if ( (v546 & 4) == 0 )
                {
                  v547 = *((_DWORD *)v480 + 499);
                  v548 = *((_QWORD *)v480 + 246);
                  v549 = (v546 & 0x20000000) != 0 ? *((_DWORD *)v480 + 577) : 0;
                  if ( v547 >= 8 )
                  {
                    v550 = (unsigned __int64)v547 >> 3;
                    do
                    {
                      *(_QWORD *)v480 = 0LL;
                      v547 -= 8;
                      v480 += 8;
                      --v550;
                    }
                    while ( v550 );
                  }
                  for ( ; v547; --v547 )
                    *v480++ = 0;
                  v551 = *((_DWORD *)v545 + 577);
                  *((_DWORD *)v545 + 577) = v549;
                  if ( v549 == 3 )
                  {
                    (*((void (__fastcall **)(__int64, __int64))v545 + 108))(v548, 1LL);
                  }
                  else
                  {
                    v552 = 0;
                    if ( (*((_DWORD *)v545 + 604) & 0x10000000) == 0 )
                      v552 = v549;
                    if ( v552 )
                      (*((void (__fastcall **)(__int64, _QWORD))v545 + 68))(v548 - 8, *(_QWORD *)(v548 - 8));
                    else
                      (*((void (__fastcall **)(__int64, __int64))v545 + 31))(v548, 1LL);
                  }
                  *((_DWORD *)v545 + 577) = v551;
                }
                *((_DWORD *)v545 + 604) &= ~4u;
                v521 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                v538 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              }
              v553 = &v545[v542];
              ++*((_DWORD *)v545 + 509);
              v554 = &v545[v542];
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D8) = &v545[v542];
              v555 = 48;
              v556 = 6LL;
              do
              {
                *v554 = 0LL;
                v555 -= 8;
                ++v554;
                --v556;
              }
              while ( v556 );
              for ( ; v555; --v555 )
              {
                *(_BYTE *)v554 = 0;
                v554 = (_QWORD *)((char *)v554 + 1);
              }
              v557 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
              *(_DWORD *)v553 = 30;
              *((_QWORD *)v553 + 1) = v557;
              *((_DWORD *)v553 + 4) = 0;
              v558 = *((_QWORD *)v545 + 256);
              for ( i24 = v558; ; LODWORD(v558) = i24 ^ v558 )
              {
                i24 >>= 31;
                if ( !i24 )
                  break;
              }
              *((_DWORD *)v553 + 5) = v558 & 0x7FFFFFFF;
              v560 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D8);
              v480 = v545;
              v561 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = v560;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v545;
              *(_QWORD *)(v560 + 24) = v561;
              LODWORD(v561) = *(_DWORD *)(v539 + 80);
              v562 = 0;
              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) + 32LL) = v561;
              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) + 36LL) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              LOWORD(v561) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) != 0;
              *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) + 40LL) = v540;
              *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) + 42LL) = *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) + 42LL) & 0xFFFE | v561;
              v563 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
              v564 = *(unsigned __int16 *)(v563 + 40);
              v565 = (unsigned int *)(v563 + 48 + (((unsigned int)(v538 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v563 + 48;
              v75 = (_DWORD)v538 == 0;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v565;
              v566 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
              v567 = &v565[6 * v564];
              v568 = 12LL;
              if ( v75 )
                v568 = v541;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v567;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (char *)v566 + v568;
              if ( v521 )
              {
                v569 = v521;
                v570 = v565 + 2;
                do
                {
                  v571 = 2LL;
                  do
                  {
                    *(v570 - 2) = 0;
                    *(v570 - 1) = 0;
                    *v570 = 0x80000000;
                    v570 += 3;
                    --v571;
                  }
                  while ( v571 );
                  --v569;
                }
                while ( v569 );
                v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              if ( v565 != v567 )
              {
                v572 = *(unsigned __int8 **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                do
                {
                  if ( (*((_DWORD *)v572 + 9) & 0x2000000) != 0
                    || (v573 = *(_DWORD *)v572, *(_DWORD *)v572 == 1414090313) && *((_DWORD *)v572 + 1) == 1195525195
                    || v573 == 1162297680
                    && ((v574 = *((_WORD *)v572 + 2), v574 == 30839) || v574 == 29303 || v574 == 30583)
                    || v573 == 1095914053 && *((_WORD *)v572 + 2) == 16724 )
                  {
                    v562 = 1;
                  }
                  else
                  {
                    v575 = (unsigned __int8 *)*((_QWORD *)v545 + 290);
                    v576 = 7;
                    v577 = (__int64 *)*((_QWORD *)v545 + 291);
                    v578 = v572;
                    v579 = (unsigned __int8 *)*((_QWORD *)v545 + 292);
                    v580 = (unsigned __int8 *)*((_QWORD *)v545 + 293);
                    while ( 1 )
                    {
                      v581 = *v578++;
                      v582 = *v575++;
                      if ( v581 != v582 )
                        break;
                      if ( !--v576 )
                        goto LABEL_887;
                    }
                    v583 = 8;
                    v584 = (__int64 *)v572;
                    do
                    {
                      v585 = *v584++;
                      v586 = *v577++;
                      if ( v585 != v586 )
                        goto LABEL_880;
                      v583 -= 8;
                    }
                    while ( v583 >= 8 );
                    if ( v583 )
                    {
                      while ( 1 )
                      {
                        v587 = *(unsigned __int8 *)v584;
                        v584 = (__int64 *)((char *)v584 + 1);
                        v588 = *(unsigned __int8 *)v577;
                        v577 = (__int64 *)((char *)v577 + 1);
                        if ( v587 != v588 )
                          break;
                        if ( !--v583 )
                          goto LABEL_887;
                      }
LABEL_880:
                      v589 = 4;
                      v590 = v572;
                      while ( 1 )
                      {
                        v591 = *v590++;
                        v592 = *v579++;
                        if ( v591 != v592 )
                          break;
                        if ( !--v589 )
                          goto LABEL_887;
                      }
                      v593 = 6;
                      v594 = v572;
                      while ( 1 )
                      {
                        v595 = *v594++;
                        v596 = *v580++;
                        if ( v595 != v596 )
                          break;
                        if ( !--v593 )
                          goto LABEL_887;
                      }
                    }
                    else
                    {
LABEL_887:
                      v562 = 1;
                    }
                    v566 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    v565 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  }
                  v597 = *((_DWORD *)v572 + 9);
                  if ( v597 < 0 )
                    v562 = 1;
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v562;
                  if ( v562 && *(_DWORD *)v572 == 1414090313 && *((_DWORD *)v572 + 1) == 1195525195 )
                  {
                    if ( (*((_DWORD *)v545 + 605) & 0x2000) != 0 )
                      v562 = 0;
                    *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v562;
                  }
                  if ( (*((_DWORD *)v545 + 605) & 0x4000) != 0 && (v597 & 0x20000000) != 0 )
                  {
                    v598 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    if ( v598 == *((_QWORD *)v545 + 187) || v598 == *((_QWORD *)v545 + 188) )
                    {
                      v562 = 1;
                      *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 1;
                    }
                  }
                  v599 = *((_DWORD *)v572 + 4);
                  v600 = *((_DWORD *)v572 + 3);
                  v601 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                  if ( v599 <= *((_DWORD *)v572 + 2) )
                    v599 = *((_DWORD *)v572 + 2);
                  v602 = v600 + v599;
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v600;
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v602;
                  if ( v566 == v601 )
                  {
                    v603 = 0;
                    v604 = 0;
                  }
                  else
                  {
                    v603 = *v566;
                    v604 = v566[1];
                  }
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v604;
                  *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v600;
                  if ( v566 == v601 || v603 <= v600 || v604 > v602 )
                  {
                    v605 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  }
                  else
                  {
                    v75 = v562 == 0;
                    v605 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    if ( v75 )
                    {
                      *v565 = v600;
                      v606 = (unsigned int *)(v2 + 480);
                      v565[1] = v603;
                      v607 = (unsigned __int64 *)(v2 + 768);
                      v608 = *v565;
                      v609 = v603 - v608;
                      *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v603;
                      v610 = v605 + v608;
                      v611 = v605 + v608 + v603 - (unsigned int)v608;
                      for ( i25 = 0; i25 < 6; ++i25 )
                      {
                        if ( v610 < *v607 + *v606 && v611 > *v607 )
                          goto LABEL_936;
                        ++v607;
                        ++v606;
                      }
                      v613 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      v614 = (_QWORD *)(v605 + v608);
                      v615 = (const char *)(v605 + v608);
                      *(_DWORD *)(v613 + 2064) += v609;
                      v616 = *(_DWORD *)(v613 + 2044);
                      v617 = *(_QWORD *)(v613 + 2048);
                      if ( v610 < v611 )
                      {
                        do
                        {
                          _mm_prefetch(v615, 0);
                          v615 += 64;
                        }
                        while ( (unsigned __int64)v615 < v611 );
                      }
                      v618 = v609 >> 7;
                      v619 = v617;
                      if ( v609 >> 7 )
                      {
                        do
                        {
                          v620 = 8LL;
                          do
                          {
                            v621 = v614[1] ^ __ROL8__(*v614 ^ v619, v616);
                            v614 += 2;
                            v619 = __ROL8__(v621, v616);
                            --v620;
                          }
                          while ( v620 );
                          v622 = (__ROL8__(v617 ^ ((unsigned __int64)v614 - v610), 17) ^ v617 ^ ((unsigned __int64)v614
                                                                                               - v610))
                               * (unsigned __int128)0x7010008004002001uLL;
                          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D0) = *((_QWORD *)&v622 + 1);
                          v616 = ((unsigned __int8)v622 ^ (unsigned __int8)(BYTE8(v622) ^ v616)) & 0x3F;
                          if ( !v616 )
                            LOBYTE(v616) = 1;
                          --v618;
                        }
                        while ( v618 );
                        v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        v604 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                      }
                      v623 = v609 & 0x7F;
                      if ( v623 >= 8 )
                      {
                        v624 = (unsigned __int64)v623 >> 3;
                        do
                        {
                          v619 = __ROL8__(*v614++ ^ v619, v616);
                          v623 -= 8;
                          --v624;
                        }
                        while ( v624 );
                      }
                      if ( v623 )
                      {
                        do
                        {
                          v625 = *(unsigned __int8 *)v614;
                          v614 = (_QWORD *)((char *)v614 + 1);
                          v619 = __ROL8__(v625 ^ v619, v616);
                          --v623;
                        }
                        while ( v623 );
                        v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      for ( i26 = v619; ; LODWORD(v619) = i26 ^ v619 )
                      {
                        i26 >>= 31;
                        if ( !i26 )
                          break;
                      }
                      v602 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      v600 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                      v605 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) + 8LL) = v619 & 0x7FFFFFFF;
LABEL_936:
                      v566 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                      v601 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                    }
                  }
                  if ( v603 < v600 )
                  {
                    v628 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  }
                  else
                  {
                    v627 = v604 <= v602;
                    v628 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    if ( v627 && v566 != v601 )
                    {
                      v629 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      v630 = v629[1];
                      while ( v630 <= v602 )
                      {
                        if ( v629 == v601 )
                          break;
                        if ( v628 )
                        {
                          v631 = 0x80;
                        }
                        else
                        {
                          v632 = *v629;
                          v633 = v566[1];
                          v634 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *v629;
                          if ( v632 < (unsigned int)v633 )
                          {
                            if ( (*(_DWORD *)(v634 + 2416) & 0x200000) == 0 )
                            {
                              *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) = 1329594368;
                              KeBugCheckEx(
                                __ROL4__(*(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8), 10),
                                0xAuLL,
                                v605,
                                6uLL,
                                0LL);
                            }
                            if ( !*(_DWORD *)(v634 + 2264) )
                            {
                              *(_QWORD *)(v634 + 2272) = v634 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v634 + 2280) = 0LL;
                              *(_QWORD *)(v634 + 2288) = 271LL;
                              *(_QWORD *)(v634 + 2296) = v605;
                              *(_DWORD *)(v634 + 2264) = 1;
                            }
                          }
                          v635 = v605 + v633;
                          v636 = v632 - v633;
                          v637 = (unsigned int *)(v2 + 480);
                          v638 = (unsigned __int64 *)(v2 + 768);
                          v639 = v605 + v633 + v636;
                          for ( i27 = 0; i27 < 6; ++i27 )
                          {
                            if ( v635 < *v638 + *v637 && v639 > *v638 )
                              goto LABEL_972;
                            ++v638;
                            ++v637;
                          }
                          if ( v636 < 4 )
                          {
LABEL_972:
                            v631 = 0x80;
                          }
                          else
                          {
                            *(_DWORD *)(v634 + 2064) += v636;
                            v641 = (const char *)(v605 + v633);
                            v642 = *(_DWORD *)(v634 + 2044);
                            v643 = *(_QWORD *)(v634 + 2048);
                            v644 = (_QWORD *)v635;
                            if ( v635 < v639 )
                            {
                              do
                              {
                                _mm_prefetch(v641, 0);
                                v641 += 64;
                              }
                              while ( (unsigned __int64)v641 < v639 );
                            }
                            v645 = v636 >> 7;
                            v646 = v643;
                            if ( v636 >> 7 )
                            {
                              do
                              {
                                v647 = 8LL;
                                do
                                {
                                  v648 = v646 ^ *v644;
                                  v649 = v644[1];
                                  v644 += 2;
                                  v646 = __ROL8__(__ROL8__(v648, v642) ^ v649, v642);
                                  --v647;
                                }
                                while ( v647 );
                                v650 = __ROL8__(v643 ^ ((unsigned __int64)v644 - v635), 17) ^ v643 ^ ((unsigned __int64)v644 - v635);
                                v651 = (v650 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D8) = v651;
                                v642 = ((unsigned __int8)(v650 ^ v651) ^ (unsigned __int8)v642) & 0x3F;
                                if ( !v642 )
                                  LOBYTE(v642) = 1;
                                --v645;
                              }
                              while ( v645 );
                              v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              v628 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                            }
                            v652 = v636 & 0x7F;
                            if ( v652 >= 8 )
                            {
                              v653 = (unsigned __int64)v652 >> 3;
                              do
                              {
                                v646 = __ROL8__(*v644++ ^ v646, v642);
                                v652 -= 8;
                                --v653;
                              }
                              while ( v653 );
                            }
                            if ( v652 )
                            {
                              do
                              {
                                v654 = *(unsigned __int8 *)v644;
                                v644 = (_QWORD *)((char *)v644 + 1);
                                v646 = __ROL8__(v654 ^ v646, v642);
                                --v652;
                              }
                              while ( v652 );
                              v628 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                            }
                            for ( i28 = v646; ; LOBYTE(v646) = i28 ^ v646 )
                            {
                              i28 >>= 7;
                              if ( !i28 )
                                break;
                            }
                            v602 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            v631 = v646 & 0x7F;
                            v605 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                          }
                          v566 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                        }
                        v656 = *(char **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        v566 += 3;
                        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v656 + 1;
                        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v566;
                        *v656 = v631;
                        v601 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                        v629 = (unsigned int *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) + 12LL);
                        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v629;
                        if ( v629 != v601 )
                          v630 = v629[1];
                      }
                    }
                  }
                  v657 = *(_DWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  if ( v628
                    || (v658 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20), v658 == v602) )
                  {
                    v562 = 0;
                  }
                  else
                  {
                    v657[3] = v658;
                    v659 = (unsigned int *)(v2 + 480);
                    v657[4] = v602;
                    v660 = (unsigned __int64 *)(v2 + 768);
                    v661 = (unsigned int)v657[3];
                    v662 = v602 - v661;
                    v663 = v605 + v661;
                    v664 = v605 + v661 + v602 - (unsigned int)v661;
                    v562 = 0;
                    for ( i29 = 0; i29 < 6; ++i29 )
                    {
                      if ( v663 < *v660 + *v659 && v664 > *v660 )
                        goto LABEL_1004;
                      ++v660;
                      ++v659;
                    }
                    v666 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    v667 = (_QWORD *)v663;
                    *(_DWORD *)(v666 + 2064) += v662;
                    v668 = *(_DWORD *)(v666 + 2044);
                    v669 = *(_QWORD *)(v666 + 2048);
                    v670 = (const char *)v663;
                    if ( v663 < v664 )
                    {
                      do
                      {
                        _mm_prefetch(v670, 0);
                        v670 += 64;
                      }
                      while ( (unsigned __int64)v670 < v664 );
                    }
                    v671 = v669;
                    v672 = v662 >> 7;
                    if ( v662 >> 7 )
                    {
                      do
                      {
                        v673 = 8LL;
                        do
                        {
                          v674 = v671 ^ *v667;
                          v675 = v667[1];
                          v667 += 2;
                          v671 = __ROL8__(__ROL8__(v674, v668) ^ v675, v668);
                          --v673;
                        }
                        while ( v673 );
                        v676 = __ROL8__(v669 ^ ((unsigned __int64)v667 - v663), 17) ^ v669 ^ ((unsigned __int64)v667
                                                                                            - v663);
                        v677 = (v676 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0) = v677;
                        v668 = ((unsigned __int8)(v676 ^ v677) ^ (unsigned __int8)v668) & 0x3F;
                        if ( !v668 )
                          LOBYTE(v668) = 1;
                        --v672;
                      }
                      while ( v672 );
                      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    v678 = v662 & 0x7F;
                    if ( v678 >= 8 )
                    {
                      v679 = (unsigned __int64)v678 >> 3;
                      do
                      {
                        v671 = __ROL8__(*v667++ ^ v671, v668);
                        v678 -= 8;
                        --v679;
                      }
                      while ( v679 );
                    }
                    if ( v678 )
                    {
                      do
                      {
                        v680 = *(unsigned __int8 *)v667;
                        v667 = (_QWORD *)((char *)v667 + 1);
                        v671 = __ROL8__(v680 ^ v671, v668);
                        --v678;
                      }
                      while ( v678 );
                      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    v681 = v671 >> 31;
                    v562 = 0;
                    while ( v681 )
                    {
                      LODWORD(v671) = v681 ^ v671;
                      v681 >>= 31;
                    }
                    v657 = *(_DWORD **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v657[5] = v671 & 0x7FFFFFFF;
LABEL_1004:
                    v566 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                  }
                  v682 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                  if ( v566 != v682
                    && *v566 >= *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x80)
                    && v566[1] <= v602 )
                  {
                    v683 = *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    if ( v683 != v682 )
                    {
                      v684 = *(_BYTE **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                      *v684 = 0x80;
                      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v684 + 1;
                      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v683 + 3;
                    }
                    v566 += 3;
                    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v566;
                  }
                  v565 = v657 + 6;
                  v545 = *(_BYTE **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  v572 = (unsigned __int8 *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) + 40LL);
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v565;
                  *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v572;
                }
                while ( v565 != *(unsigned int **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) );
                v480 = *(_BYTE **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
              }
            }
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v480;
            v369 = 0;
            goto LABEL_1015;
          }
LABEL_665:
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = 0LL;
LABEL_666:
          v369 = -1073741670;
          goto LABEL_1016;
        }
        *(_DWORD *)(v446 + 32) |= 2u;
        goto LABEL_698;
      }
      v715 = *((_DWORD *)v53 + 10);
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(v20 + 408))(v2 + 1352, *((unsigned int *)v53 + 11));
      v716 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 456))(v2 + 1352, v2 + 1368);
      if ( *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) == 38 )
      {
        __asm { xgetbv }
        v718 = v716 | (v717 << 32);
      }
      else if ( v715 )
      {
        v718 = __readcr4();
      }
      else
      {
        v718 = __readcr0();
      }
      v719 = v2 + 1368;
LABEL_1074:
      (*(void (__fastcall **)(unsigned __int64))(v20 + 400))(v719);
      v720 = *((_QWORD *)v53 + 4);
      v721 = v718 & *((_QWORD *)v53 + 3);
      if ( v721 != v720 )
      {
        v722 = *((_QWORD *)v53 + 5);
        if ( !*(_DWORD *)(v20 + 2264) )
        {
          *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v721 ^ v720;
          if ( !*(_DWORD *)(v20 + 2264) )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v722;
            *(_DWORD *)(v20 + 2264) = 1;
          }
        }
      }
      goto LABEL_178;
    }
    switch ( v85 )
    {
      case 12:
        if ( *(_QWORD *)(v20 + 2400) == j )
          goto LABEL_2252;
        v1354 = *(_DWORD *)(v20 + 2420);
        LOBYTE(v1355) = v1354;
        if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
        {
          v1355 = v1354 ^ ((unsigned __int8)v1354 ^ (unsigned __int8)(8 * v1354)) & 0x20;
          *(_DWORD *)(v20 + 2420) = v1355;
        }
        else if ( (((unsigned __int8)v1354 ^ (unsigned __int8)(v1354 >> 3)) & 4) != 0 )
        {
          goto LABEL_2252;
        }
        if ( (v1355 & 4) != 0 )
        {
          j = *((_QWORD *)v53 + 4);
          if ( j )
          {
            v1356 = *(unsigned int *)(v20 + 2060);
            v1357 = ((((_WORD)j + (_WORD)v1356) & 0xFFF)
                   + (unsigned __int64)(unsigned int)(*((_DWORD *)v53 + 10) - v1356)
                   + 4095) >> 12;
            v1358 = j + v1356;
          }
          else
          {
            v1358 = *((_QWORD *)v53 + 1);
            v1357 = (*((unsigned int *)v53 + 4) + (unsigned __int64)(v1358 & 0xFFF) + 4095) >> 12;
          }
          v1359 = v1358 & 0xFFFFFFFFFFFFF000uLL;
          while ( v1357 )
          {
            --v1357;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v20 + 680))(v1359) && !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v53;
              *(_QWORD *)(v20 + 2296) = v1359;
              *(_DWORD *)(v20 + 2264) = 1;
            }
            *(_DWORD *)(v20 + 2064) += 256;
            v1359 += 4096LL;
            if ( j )
            {
              *(_DWORD *)(v20 + 2060) += 4096;
              if ( *(_DWORD *)(v20 + 2064) >= *(_DWORD *)(v20 + 2068) )
                break;
            }
          }
          if ( j )
          {
            j = 0LL;
            if ( !v1357 )
              *(_DWORD *)(v20 + 2060) = 0;
          }
          if ( *(_DWORD *)(v20 + 2060) != (_DWORD)j )
            goto LABEL_178;
          v1360 = *(_QWORD *)(v20 + 1328);
          v1361 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v20 + 328))(v1360);
          v1363 = **(unsigned int ***)(v20 + 1536);
          v1364 = v1363 + 4;
          v1365 = *((_BYTE *)v1363 + 12);
          v1366 = (unsigned __int64)&v1363[6 * *v1363 + 4];
          while ( 1 )
          {
            v1367 = 24LL;
            v1368 = (__int64 *)(v53 + 24);
            v1369 = v1364;
            do
            {
              v1370 = *(_QWORD *)v1369;
              v1369 += 2;
              v1371 = *v1368++;
              if ( v1370 != v1371 )
                goto LABEL_2075;
              v1367 = (unsigned int)(v1367 - 8);
            }
            while ( (unsigned int)v1367 >= 8 );
            if ( (_DWORD)v1367 )
            {
              while ( 1 )
              {
                v1362 = *(unsigned __int8 *)v1369;
                v1369 = (unsigned int *)((char *)v1369 + 1);
                v1372 = *(unsigned __int8 *)v1368;
                v1368 = (__int64 *)((char *)v1368 + 1);
                if ( v1362 != v1372 )
                  break;
                v75 = (_DWORD)v1367 == 1;
                v1367 = (unsigned int)(v1367 - 1);
                if ( v75 )
                  goto LABEL_2076;
              }
LABEL_2075:
              v1364 += 6;
              if ( (unsigned __int64)v1364 < v1366 )
                continue;
            }
LABEL_2076:
            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v20 + 392))(
              *(_QWORD *)(v20 + 1328),
              v1362,
              v1367,
              v1368);
            __writecr8(v1361);
            if ( !v1365 )
              goto LABEL_2082;
            if ( (*(_DWORD *)(v20 + 2420) & 0x10) != 0 && !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v53;
              *(_QWORD *)(v20 + 2296) = 1LL;
              *(_DWORD *)(v20 + 2264) = 1;
            }
            if ( *((_QWORD *)v53 + 3) == 1LL )
            {
              j = 0LL;
            }
            else
            {
LABEL_2082:
              if ( v1364 == (unsigned int *)v1366 )
              {
                j = 0LL;
                if ( !*(_DWORD *)(v20 + 2264) )
                {
                  *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v20 + 2288) = *(int *)v53;
                  *(_QWORD *)(v20 + 2296) = v1364;
                  *(_DWORD *)(v20 + 2264) = 1;
                }
              }
              else
              {
                j = 0LL;
              }
            }
            goto LABEL_178;
          }
        }
        goto LABEL_2085;
      case 0:
        v225 = (_QWORD *)*((_QWORD *)v53 + 1);
        v226 = *((unsigned int *)v53 + 4);
        v227 = v225;
        *(_DWORD *)(v20 + 2064) += v226;
        v228 = (const char *)v225;
        v229 = *(_DWORD *)(v20 + 2044);
        v230 = *(_QWORD *)(v20 + 2048);
        if ( v225 < (_QWORD *)((char *)v225 + v226) )
        {
          do
          {
            _mm_prefetch(v228, 0);
            v228 += 64;
          }
          while ( v228 < (const char *)v225 + v226 );
        }
        v231 = *(_QWORD *)(v20 + 2048);
        for ( i30 = (unsigned int)v226 >> 7; i30; --i30 )
        {
          v233 = 8LL;
          do
          {
            v234 = v227[1] ^ __ROL8__(*v227 ^ v231, v229);
            v227 += 2;
            v231 = __ROL8__(v234, v229);
            --v233;
          }
          while ( v233 );
          v235 = (__ROL8__(v230 ^ ((char *)v227 - (char *)v225), 17) ^ v230 ^ (unsigned __int64)((char *)v227
                                                                                               - (char *)v225))
               * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x510) = *((_QWORD *)&v235 + 1);
          v229 = ((unsigned __int8)v235 ^ (unsigned __int8)(BYTE8(v235) ^ v229)) & 0x3F;
          if ( !v229 )
            LOBYTE(v229) = 1;
        }
        v236 = v226 & 0x7F;
        if ( (unsigned int)v236 >= 8 )
        {
          v237 = (unsigned __int64)(unsigned int)v236 >> 3;
          do
          {
            v231 = __ROL8__(*v227++ ^ v231, v229);
            v236 = (unsigned int)(v236 - 8);
            --v237;
          }
          while ( v237 );
        }
        for ( j = 0LL; (_DWORD)v236; v236 = (unsigned int)(v236 - 1) )
        {
          v238 = *(unsigned __int8 *)v227;
          v227 = (_QWORD *)((char *)v227 + 1);
          v231 = __ROL8__(v238 ^ v231, v229);
        }
        for ( i31 = v231; ; LODWORD(v231) = i31 ^ v231 )
        {
          i31 >>= 31;
          if ( !i31 )
            break;
        }
        v106 = v231 & 0x7FFFFFFF;
        v240 = 0;
        if ( v106 == *((_DWORD *)v53 + 5) )
          goto LABEL_178;
        if ( !*(_DWORD *)v53 )
          v240 = *((_DWORD *)v53 + 6) != 0;
        v241 = *((unsigned int *)v53 + 4);
        v242 = *((_QWORD *)v53 + 1);
        if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
        {
          v243 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v244 = v242 & 0xFFFFFFFFFFFFF000uLL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (v242 + v241 - 1) | 0xFFF;
          v245 = (v242 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v113 = v243;
            while ( 1 )
            {
              v246 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                       v244,
                       0LL,
                       v236,
                       v227);
              if ( v246 != -1073741267 )
                break;
              if ( v240 )
                goto LABEL_440;
              if ( v243 > 1u )
                goto LABEL_438;
              v113 = v243;
              __writecr8(v243);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v246 < 0 )
              break;
LABEL_438:
            v236 = 4096LL;
            v244 += 4096LL;
            v245 += 4096LL;
            if ( v245 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
              goto LABEL_237;
          }
LABEL_440:
          __writecr8(v113);
          v53 = *(char **)v2;
          j = 0LL;
        }
        v105 = *((unsigned int *)v53 + 5);
        goto LABEL_442;
      case 1:
        goto LABEL_2085;
      case 4:
        if ( (*(_DWORD *)(v20 + 2072) & 1) != 0 )
          goto LABEL_178;
        v212 = *(void (**)(void))(v20 + 368);
        v213 = *(_QWORD *)(v20 + 1336);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = j;
        v212();
        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 || (v214 = *(_DWORD *)(v20 + 2352), v214 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 288))(*(_QWORD *)(v20 + 2528), 0LL);
          LOBYTE(v48) = 0x80;
        }
        else
        {
          v48 = 1;
          LOBYTE(v48) = 1 << v214;
        }
        v215 = *(void (__fastcall **)(__int64, _QWORD))(v20 + 304);
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v48;
        v215(v213, 0LL);
        v216 = *(_QWORD ***)(v20 + 1296);
        v217 = *v216;
        if ( *v216 != v216 )
        {
          do
          {
            v218 = (unsigned __int64)v217 - *(_QWORD *)(v20 + 1720);
            if ( (_BYTE)v48 != 0x80
              && ((unsigned __int8)v48 & *(_BYTE *)(v218 + *(_QWORD *)(v20 + 1696))) != 0
              && (*(_DWORD *)(v218 + *(_QWORD *)(v20 + 1704)) & *(_DWORD *)(v20 + 1728)) != 0
              && !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v53;
              *(_QWORD *)(v20 + 2296) = v218 | 1;
              *(_DWORD *)(v20 + 2264) = 1;
            }
            _InterlockedOr8((volatile signed __int8 *)(v218 + *(_QWORD *)(v20 + 1696)), v48);
            v217 = (_QWORD *)*v217;
            LODWORD(j) = j + 1;
          }
          while ( v217 != v216 );
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = j;
        }
        v219 = *(_QWORD *)(v20 + 1264);
        v220 = KeGetCurrentIrql();
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v220;
        __writecr8(0xCuLL);
        (*(void (__fastcall **)(__int64, unsigned __int64))(v20 + 320))(v219, v2 + 1680);
        v221 = *(_QWORD ***)(v20 + 1256);
        v222 = *v221;
        if ( *v221 != v221 )
        {
          do
          {
            v223 = *(_QWORD *)(v20 + 1696);
            v224 = (char *)v222 - *(_QWORD *)(v20 + 1688);
            if ( (v224[v223] & (unsigned __int8)v48) == 0 && !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *(int *)v53;
              *(_QWORD *)(v20 + 2296) = v224;
              *(_DWORD *)(v20 + 2264) = 1;
              v223 = *(_QWORD *)(v20 + 1696);
            }
            _InterlockedAnd8(&v224[v223], ~(_BYTE)v48);
            v222 = (_QWORD *)*v222;
          }
          while ( v222 != v221 );
          v48 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          v220 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          LODWORD(j) = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
        }
        (*(void (__fastcall **)(unsigned __int64))(v20 + 384))(v2 + 1680);
        __writecr8((unsigned __int8)v220);
LABEL_407:
        if ( (_BYTE)v48 == 0x80 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 296))(*(_QWORD *)(v20 + 2528), 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 312))(*(_QWORD *)(v20 + 1336), 0LL);
        (*(void (**)(void))(v20 + 376))();
        *(_DWORD *)(v20 + 2064) += (_DWORD)j << 8;
        goto LABEL_238;
      case 5:
        v187 = *(_DWORD *)(v20 + 2072);
        if ( (v187 & 1) == 0 )
          goto LABEL_178;
        v188 = j;
        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 )
        {
          v190 = __rdtsc();
          v191 = (__ROR8__(v190, 3) ^ v190) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x508) = *((_QWORD *)&v191 + 1);
          v189 = ((unsigned __int64)v191 ^ *((_QWORD *)&v191 + 1)) == 3
                                                                    * (((unsigned __int64)v191 ^ *((_QWORD *)&v191 + 1))
                                                                     / 3);
        }
        else
        {
          v189 = (v187 & 3) == 3;
        }
        v192 = *(void (**)(void))(v20 + 368);
        LOBYTE(v188) = v189;
        v193 = *(_QWORD *)(v20 + 1336);
        v194 = j;
        *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = j;
        v192();
        if ( (*(_DWORD *)(v20 + 2416) & 0x40000000) != 0 || (v195 = *(_DWORD *)(v20 + 2352), v195 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 288))(*(_QWORD *)(v20 + 2528), 0LL);
          v196 = 0x80;
        }
        else
        {
          v196 = 1 << v195;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v20 + 304))(v193, 0LL);
        v197 = *(volatile signed __int8 ***)(v20 + 1296);
        v198 = *v197;
        if ( *v197 != (volatile signed __int8 *)v197 )
        {
          do
          {
            _InterlockedOr8(&v198[*(_QWORD *)(v20 + 1696) - *(_QWORD *)(v20 + 1720)], v196);
            v198 = *(volatile signed __int8 **)v198;
            ++v194;
          }
          while ( v198 != (volatile signed __int8 *)v197 );
          *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v194;
        }
        v199 = 4LL;
        v200 = *(int **)v2;
        v201 = **(_QWORD **)(v20 + 1344);
        v202 = *(unsigned int *)(*(_QWORD *)(v20 + 1816) + v201);
        while ( 1 )
        {
          v203 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v20 + 256))(v201, v199);
          v204 = v203;
          if ( v203 )
            break;
LABEL_383:
          v199 += 4LL;
          if ( v199 >= v202 )
          {
            v211 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            if ( v196 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 296))(*(_QWORD *)(v20 + 2528), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v20 + 312))(*(_QWORD *)(v20 + 1336), 0LL);
            (*(void (**)(void))(v20 + 376))();
            *(_DWORD *)(v20 + 2064) += ((unsigned int)(v202 >> 2) + v211) << 8;
            goto LABEL_238;
          }
        }
        v205 = (_BYTE *)((*v203 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v206 = *v205 & 0x7F;
        if ( v206 == 3 )
        {
          v207 = *(_QWORD *)(v20 + 1696);
          if ( (v196 & v205[v207]) == 0
            && (*(_DWORD *)&v205[*(_QWORD *)(v20 + 1704)] & *(_DWORD *)(v20 + 1728)) != 0
            && !*(_DWORD *)(v20 + 2264) )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = (char *)v200 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *v200;
            *(_QWORD *)(v20 + 2296) = v205;
            *(_DWORD *)(v20 + 2264) = 1;
            v207 = *(_QWORD *)(v20 + 1696);
          }
          _InterlockedAnd8(&v205[v207], ~v196);
          goto LABEL_382;
        }
        if ( v206 == 6 )
        {
          if ( v188 )
          {
            v208 = *(_QWORD *)(v20 + 1640);
            v209 = *(_QWORD *)&v205[v208 + 32];
            if ( (v209 == *(_QWORD *)(v20 + 792) || v209 == *(_QWORD *)(v20 + 800))
              && *(_QWORD *)&v205[v208 + 48] == *(_QWORD *)(v20 + 808) )
            {
              v210 = *(_QWORD *)&v205[v208 + 40] == *(_QWORD *)(v20 + 816);
              goto LABEL_379;
            }
            goto LABEL_380;
          }
        }
        else
        {
          v210 = v206 == 0;
LABEL_379:
          if ( !v210 )
          {
LABEL_380:
            if ( !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v20 + 2280) = (char *)v200 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v20 + 2288) = *v200;
              *(_QWORD *)(v20 + 2296) = v205;
              *(_DWORD *)(v20 + 2264) = 1;
            }
          }
        }
LABEL_382:
        (*(void (__fastcall **)(__int64, __int64 *))(v20 + 280))(v201, v204);
        goto LABEL_383;
      case 7:
        (*(void (__fastcall **)(unsigned __int64, _QWORD))(v20 + 408))(v2 + 1320, *((unsigned int *)v53 + 7));
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v20 + 456))(v2 + 1320, v2 + 1336);
        for ( i32 = j; i32 < *((_DWORD *)v53 + 6); ++i32 )
        {
          v181 = *(unsigned int *)&v53[24 * i32 + 64];
          if ( (*(_BYTE *)(v20 + 2147) & 2) != 0
            && (_DWORD)v181 == -1073741694
            && KeGetPcr()->Prcb.Number == *(_DWORD *)(v20 + 2256) )
          {
            v182 = *(_QWORD *)(v20 + 2248);
          }
          else
          {
            v182 = __readmsr(v181);
          }
          v183 = *(_QWORD *)&v53[24 * i32 + 48];
          v184 = *(_QWORD *)&v53[24 * i32 + 56];
          v185 = v183 & v182;
          if ( v185 == v184 )
          {
            if ( (*(_DWORD *)(v20 + 2420) & 0x200) != 0 && v183 == -1 )
              __writemsr(v181, v185);
          }
          else
          {
            v186 = v181 | ((unsigned __int64)*((unsigned int *)v53 + 7) << 32);
            if ( !*(_DWORD *)(v20 + 2264) )
            {
              *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v185 ^ v184;
              if ( !*(_DWORD *)(v20 + 2264) )
              {
                *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v20 + 2288) = *(int *)v53;
                *(_QWORD *)(v20 + 2296) = v186;
                *(_DWORD *)(v20 + 2264) = 1;
              }
            }
          }
        }
        (*(void (__fastcall **)(unsigned __int64))(v20 + 400))(v2 + 1336);
        *(_DWORD *)(v20 + 2064) += *((_DWORD *)v53 + 6) << 15;
        goto LABEL_178;
      case 8:
        v147 = *((_QWORD *)v53 + 3);
        v148 = *((_WORD *)v53 + 17);
        if ( *(_WORD *)(v147 + *(_QWORD *)(v20 + 1752) + *(_QWORD *)(v20 + 1800)) != v148
          && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
        {
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v147;
          *(_DWORD *)(v20 + 2264) = 1;
          v148 = *((_WORD *)v53 + 17);
        }
        if ( (v148 & *(_WORD *)(v20 + 1808)) == 0
          && *(_QWORD *)(v147 + *(_QWORD *)(v20 + 1760)) != v147 + *(_QWORD *)(v20 + 1760)
          && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
        {
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v147;
          *(_DWORD *)(v20 + 2264) = 1;
        }
        v149 = (_QWORD *)*((_QWORD *)v53 + 1);
        v150 = *((unsigned int *)v53 + 4);
        v151 = v149;
        *(_DWORD *)(v20 + 2064) += v150;
        v152 = (const char *)v149;
        v153 = *(_DWORD *)(v20 + 2044);
        v154 = *(_QWORD *)(v20 + 2048);
        if ( v149 < (_QWORD *)((char *)v149 + v150) )
        {
          do
          {
            _mm_prefetch(v152, 0);
            v152 += 64;
          }
          while ( v152 < (const char *)v149 + v150 );
        }
        v155 = *(_QWORD *)(v20 + 2048);
        v156 = (unsigned int)v150 >> 7;
        if ( (unsigned int)v150 >> 7 )
        {
          do
          {
            v157 = 8LL;
            do
            {
              v158 = v151[1] ^ __ROL8__(*v151 ^ v155, v153);
              v151 += 2;
              v155 = __ROL8__(v158, v153);
              --v157;
            }
            while ( v157 );
            v159 = (__ROL8__(v154 ^ ((char *)v151 - (char *)v149), 17) ^ v154 ^ (unsigned __int64)((char *)v151
                                                                                                 - (char *)v149))
                 * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x500) = *((_QWORD *)&v159 + 1);
            v153 = ((unsigned __int8)v159 ^ (unsigned __int8)(BYTE8(v159) ^ v153)) & 0x3F;
            if ( !v153 )
              LOBYTE(v153) = 1;
            --v156;
          }
          while ( v156 );
          v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v160 = v150 & 0x7F;
        if ( v160 >= 8 )
        {
          v161 = (unsigned __int64)v160 >> 3;
          do
          {
            v155 = __ROL8__(*v151++ ^ v155, v153);
            v160 -= 8;
            --v161;
          }
          while ( v161 );
        }
        for ( j = 0LL; v160; --v160 )
        {
          v162 = *(unsigned __int8 *)v151;
          v151 = (_QWORD *)((char *)v151 + 1);
          v155 = __ROL8__(v162 ^ v155, v153);
        }
        for ( i33 = v155; ; LODWORD(v155) = i33 ^ v155 )
        {
          i33 >>= 31;
          if ( !i33 )
            break;
        }
        v164 = v155 & 0x7FFFFFFF;
        v165 = 0;
        if ( v164 != *((_DWORD *)v53 + 5) )
        {
          if ( !*(_DWORD *)v53 )
            v165 = *((_DWORD *)v53 + 6) != 0;
          v166 = *((unsigned int *)v53 + 4);
          v167 = *((_QWORD *)v53 + 1);
          if ( *((_DWORD *)v53 + 4) )
          {
            v168 = 64LL;
            if ( (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
            {
              v169 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v170 = v167 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (v167 + v166 - 1) | 0xFFF;
              v171 = (v167 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v172 = v169;
                while ( 1 )
                {
                  v173 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                           v170,
                           0LL,
                           v168,
                           v151);
                  if ( v173 != -1073741267 )
                    break;
                  if ( v165 )
                    goto LABEL_333;
                  if ( v169 > 1u )
                    goto LABEL_326;
                  v172 = v169;
                  __writecr8(v169);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v173 < 0 )
                  break;
LABEL_326:
                v170 += 4096LL;
                v171 += 4096LL;
                if ( v171 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                {
                  __writecr8(v172);
                  v53 = *(char **)v2;
                  j = 0LL;
                  goto LABEL_328;
                }
              }
LABEL_333:
              __writecr8(v172);
              v53 = *(char **)v2;
              j = 0LL;
            }
          }
          v178 = *(_DWORD *)(v20 + 2264);
          if ( !v178 )
          {
            *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v164 ^ (unsigned __int64)*((unsigned int *)v53 + 5);
            v178 = *(_DWORD *)(v20 + 2264);
          }
          v179 = *((_QWORD *)v53 + 1);
          if ( !v178 )
          {
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *(int *)v53;
            *(_QWORD *)(v20 + 2296) = v179;
            *(_DWORD *)(v20 + 2264) = 1;
          }
        }
LABEL_328:
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E8) = v53 + 48;
        v174 = *((_WORD *)v53 + 16);
        v1668 = v2 + 568;
        *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0) = v174;
        *(_WORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E2) = v174;
        v175 = *(_QWORD *)(v20 + 1272);
        v176 = *(int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64))(v20 + 480);
        LOBYTE(v1666) = 0;
        if ( v176(v2 + 736, 0LL, 0LL, 0LL, v175, v1666, 0LL, v1668) < 0 )
          goto LABEL_178;
        v177 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x238);
        if ( v177 != *((_QWORD *)v53 + 3) && !*(_DWORD *)(v20 + 2264) )
        {
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v177;
          *(_DWORD *)(v20 + 2264) = 1;
          v177 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x238);
        }
        goto LABEL_1179;
      case 10:
        if ( *((_DWORD *)v53 + 6) != (_DWORD)j )
        {
          if ( *(_QWORD *)(v20 + 2400) == j )
            goto LABEL_265;
          v115 = *(_DWORD *)(v20 + 2420);
          if ( (v115 & 4) != 0 )
            goto LABEL_265;
          if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
          {
            *(_DWORD *)(v20 + 2420) = v115 ^ ((unsigned __int8)v115 ^ (unsigned __int8)(8 * v115)) & 0x20;
          }
          else if ( (v115 & 0x20) != 0 )
          {
            goto LABEL_265;
          }
        }
        v116 = (unsigned __int64)&v53[16 * *(unsigned int *)(v20 + 2060) + 48];
        v117 = (unsigned __int64)&v53[16 * *((unsigned int *)v53 + 7) + 48];
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v117;
        do
        {
          if ( *(_DWORD *)v116 < (int)j )
            goto LABEL_283;
          v118 = *(_QWORD *)(v116 + 8);
          v119 = *(unsigned int *)(v116 + 4);
          v120 = (_QWORD *)v118;
          *(_DWORD *)(v20 + 2064) += v119;
          v121 = (const char *)v118;
          v122 = *(_DWORD *)(v20 + 2044);
          v123 = (unsigned int)v119;
          v124 = *(_QWORD *)(v20 + 2048);
          *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v118;
          if ( v118 < v119 + v118 )
          {
            do
            {
              _mm_prefetch(v121, 0);
              v121 += 64;
            }
            while ( (unsigned __int64)v121 < v119 + v118 );
          }
          v125 = v124;
          v126 = (unsigned int)v119 >> 7;
          if ( (unsigned int)v119 >> 7 )
          {
            do
            {
              v127 = 8LL;
              do
              {
                v128 = v125 ^ *v120;
                v129 = v120[1];
                v120 += 2;
                v125 = __ROL8__(__ROL8__(v128, v122) ^ v129, v122);
                --v127;
              }
              while ( v127 );
              v130 = __ROL8__(v124 ^ ((unsigned __int64)v120 - v118), 17) ^ v124 ^ ((unsigned __int64)v120 - v118);
              v131 = (v130 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F8) = v131;
              v122 = ((unsigned __int8)(v130 ^ v131) ^ (unsigned __int8)v122) & 0x3F;
              if ( !v122 )
                LOBYTE(v122) = 1;
              --v126;
            }
            while ( v126 );
            v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v117 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          v132 = v119 & 0x7F;
          if ( (unsigned int)v132 >= 8 )
          {
            v133 = (unsigned __int64)(unsigned int)v132 >> 3;
            do
            {
              v125 = __ROL8__(*v120++ ^ v125, v122);
              v132 = (unsigned int)(v132 - 8);
              --v133;
            }
            while ( v133 );
            v117 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          j = 0LL;
          if ( (_DWORD)v132 )
          {
            do
            {
              v134 = *(unsigned __int8 *)v120;
              v120 = (_QWORD *)((char *)v120 + 1);
              v125 = __ROL8__(v134 ^ v125, v122);
              v132 = (unsigned int)(v132 - 1);
            }
            while ( (_DWORD)v132 );
            v118 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
          }
          for ( i34 = v125; ; LODWORD(v125) = i34 ^ v125 )
          {
            i34 >>= 31;
            if ( !i34 )
              break;
          }
          v137 = *(_DWORD *)v116;
          v138 = v125 & 0x7FFFFFFF;
          if ( v138 == (*(_DWORD *)v116 & 0x7FFFFFFF) )
            goto LABEL_283;
          if ( v123 && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
          {
            v139 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v140 = v118 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = (v123 + v118 - 1) | 0xFFF;
            v141 = (v118 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v142 = v139;
              while ( 1 )
              {
                v143 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                         v140,
                         0LL,
                         v132,
                         v120);
                if ( v143 != -1073741267 )
                  break;
                if ( v139 > 1u )
                  goto LABEL_277;
                v142 = v139;
                __writecr8(v139);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v143 < 0 )
                break;
LABEL_277:
              v140 += 4096LL;
              v141 += 4096LL;
              if ( v141 == *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) )
              {
                __writecr8(v142);
                v117 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                j = 0LL;
                goto LABEL_283;
              }
            }
            __writecr8(v142);
            v137 = *(_DWORD *)v116;
            j = 0LL;
            v118 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            v117 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          v144 = v137;
          if ( *(_DWORD *)(v20 + 2264)
            || (LODWORD(v144) = v137 & 0x7FFFFFFF,
                *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v144 ^ v138,
                *(_DWORD *)(v20 + 2264)) )
          {
LABEL_283:
            v145 = *(int **)v2;
          }
          else
          {
            v145 = *(int **)v2;
            *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v20 + 2280) = (char *)v145 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v20 + 2288) = *v145;
            *(_QWORD *)(v20 + 2296) = v118;
            *(_DWORD *)(v20 + 2264) = 1;
          }
          v116 += 16LL;
          v146 = v116 == v117;
          if ( v116 >= v117 )
            goto LABEL_287;
        }
        while ( *(_DWORD *)(v20 + 2064) < *(_DWORD *)(v20 + 2068) );
        v146 = v116 == v117;
LABEL_287:
        if ( !v146 )
        {
          v136 = (__int64)(v116 - (_QWORD)(v145 + 12)) >> 4;
          goto LABEL_289;
        }
LABEL_265:
        LODWORD(v136) = j;
LABEL_289:
        *(_DWORD *)(v20 + 2060) = v136;
        goto LABEL_178;
    }
    if ( v85 != 11 )
      goto LABEL_2276;
    if ( *(_QWORD *)(v20 + 2400) == j )
      goto LABEL_2252;
    if ( *(_DWORD *)(v20 + 2060) == (_DWORD)j )
    {
      v86 = *(_DWORD *)(v20 + 2420) ^ ((unsigned __int8)*(_DWORD *)(v20 + 2420) ^ (unsigned __int8)(8
                                                                                                  * *(_DWORD *)(v20 + 2420))) & 0x20;
      *(_DWORD *)(v20 + 2420) = v86;
    }
    else
    {
      v86 = *(_DWORD *)(v20 + 2420);
      if ( (((unsigned __int8)v86 ^ (unsigned __int8)(v86 >> 3)) & 4) != 0 )
        goto LABEL_2252;
    }
    if ( (v86 & 4) != 0 )
    {
      v87 = *((_QWORD *)v53 + 1) & 0xFFFFFFFFFFFFF000uLL;
      for ( i35 = ((*((_QWORD *)v53 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v53 + 4) + 4095) >> 12;
            i35;
            v87 += 4096LL )
      {
        --i35;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v20 + 680))(v87)
          && *(_DWORD *)(v20 + 2264) == (_DWORD)j )
        {
          *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v20 + 2288) = *(int *)v53;
          *(_QWORD *)(v20 + 2296) = v87;
          *(_DWORD *)(v20 + 2264) = 1;
        }
        *(_DWORD *)(v20 + 2064) += 256;
      }
      goto LABEL_178;
    }
    v89 = (_QWORD *)*((_QWORD *)v53 + 1);
    v90 = *((unsigned int *)v53 + 4);
    v91 = v89;
    *(_DWORD *)(v20 + 2064) += v90;
    v92 = (const char *)v89;
    v93 = *(_DWORD *)(v20 + 2044);
    v94 = *(_QWORD *)(v20 + 2048);
    if ( v89 < (_QWORD *)((char *)v89 + v90) )
    {
      do
      {
        _mm_prefetch(v92, 0);
        v92 += 64;
      }
      while ( v92 < (const char *)v89 + v90 );
    }
    v95 = *(_QWORD *)(v20 + 2048);
    v96 = (unsigned int)v90 >> 7;
    if ( (unsigned int)v90 >> 7 )
    {
      do
      {
        v97 = 8LL;
        do
        {
          v98 = v95 ^ *v91;
          v99 = v91[1];
          v91 += 2;
          v95 = __ROL8__(__ROL8__(v98, v93) ^ v99, v93);
          --v97;
        }
        while ( v97 );
        v100 = (__ROL8__(v94 ^ ((char *)v91 - (char *)v89), 17) ^ v94 ^ (unsigned __int64)((char *)v91 - (char *)v89))
             * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x4F0) = *((_QWORD *)&v100 + 1);
        v93 = ((unsigned __int8)v100 ^ (unsigned __int8)(BYTE8(v100) ^ v93)) & 0x3F;
        if ( !v93 )
          LOBYTE(v93) = 1;
        --v96;
      }
      while ( v96 );
      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
    }
    v101 = v90 & 0x7F;
    if ( v101 >= 8 )
    {
      v102 = (unsigned __int64)v101 >> 3;
      do
      {
        v95 = __ROL8__(*v91++ ^ v95, v93);
        v101 -= 8;
        --v102;
      }
      while ( v102 );
      v20 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
    }
    for ( j = 0LL; v101; --v101 )
    {
      v103 = *(unsigned __int8 *)v91;
      v91 = (_QWORD *)((char *)v91 + 1);
      v95 = __ROL8__(v103 ^ v95, v93);
    }
    for ( i36 = v95; ; LODWORD(v95) = i36 ^ v95 )
    {
      i36 >>= 31;
      if ( !i36 )
        break;
    }
    v105 = *((unsigned int *)v53 + 5);
    v106 = v95 & 0x7FFFFFFF;
    if ( v106 != (_DWORD)v105 )
    {
      v107 = *((unsigned int *)v53 + 4);
      v108 = *((_QWORD *)v53 + 1);
      if ( *((_DWORD *)v53 + 4) && (*(_DWORD *)(v20 + 2420) & 0x40) != 0 )
      {
        v109 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v110 = v108 & 0xFFFFFFFFFFFFF000uLL;
        v111 = (v108 + v107 - 1) | 0xFFF;
        v112 = (v108 & 0xFFFFFFFFFFFFF000uLL) - 1;
        do
        {
          v113 = v109;
          while ( 1 )
          {
            v114 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v20 + 1120))(
                     v110,
                     0LL,
                     v108,
                     v91);
            if ( v114 != -1073741267 )
              break;
            if ( v109 > 1u )
              goto LABEL_236;
            v113 = v109;
            __writecr8(v109);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v114 < 0 )
            goto LABEL_440;
LABEL_236:
          v110 += 4096LL;
          v112 += 4096LL;
        }
        while ( v112 != v111 );
LABEL_237:
        __writecr8(v113);
        goto LABEL_238;
      }
LABEL_442:
      v247 = *(_DWORD *)(v20 + 2264);
      if ( !v247 )
      {
        *(_QWORD *)(*(_QWORD *)(v20 + 1408) + 24LL) = v106 ^ v105;
        v247 = *(_DWORD *)(v20 + 2264);
      }
      v248 = *((_QWORD *)v53 + 1);
      if ( v247 )
        goto LABEL_178;
      *(_QWORD *)(v20 + 2272) = v20 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v20 + 2280) = v53 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v20 + 2288) = *(int *)v53;
      *(_QWORD *)(v20 + 2296) = v248;
LABEL_446:
      *(_DWORD *)(v20 + 2264) = 1;
    }
LABEL_178:
    v84 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x184) - 1;
    if ( !*(_DWORD *)(v20 + 2060) )
      v84 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x184);
    v27 = 1LL;
    v47 = v84 + 1;
    if ( *(_DWORD *)(v20 + 2264) != (_DWORD)j || *(_DWORD *)(v20 + 2064) >= *(_DWORD *)(v20 + 2068) )
      goto LABEL_2438;
    v49 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
    v48 = *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xEC);
  }
  ++*(_DWORD *)(v20 + 2072);
  v47 = j;
  if ( *(_DWORD *)(v20 + 2356) != 11 || (v1620 = *(_DWORD *)(v20 + 2416), (v1620 & 1) != 0) )
  {
LABEL_2438:
    v15 = *(PSLIST_ENTRY *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0);
    v3 = a2;
    v16 = *(PSLIST_ENTRY *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
  }
  else
  {
    v16 = *(PSLIST_ENTRY *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
    v3 = a2;
    v15 = *(PSLIST_ENTRY *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0);
    if ( *(_DWORD *)(v20 + 2384) == -1 )
      *(_DWORD *)(v20 + 2384) = j;
    else
      *(_DWORD *)(v20 + 2416) = v1620 | 1;
  }
LABEL_2439:
  *(_DWORD *)(v20 + 2056) = v47;
  if ( *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) != (_DWORD)j )
  {
    v1621 = *(_QWORD *)(*(_QWORD *)(v20 + 1680)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v20 + 1584))
                      + *(_QWORD *)(v20 + 1648));
    (*(void (__fastcall **)(unsigned __int64))(v20 + 400))(v2 + 1528);
    (*(void (__fastcall **)(unsigned __int64))(v20 + 1080))(v2 + 1632);
    (*(void (__fastcall **)(__int64))(v20 + 928))(v1621);
    (*(void (__fastcall **)(__int64))(v20 + 944))(v1621);
  }
  if ( *(_DWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) != (_DWORD)j
    && ((*(_DWORD *)(v20 + 2416) & 0x8000) != 0 || *(_DWORD *)(v20 + 2264) == (_DWORD)j) )
  {
    v1622 = *(_QWORD *)(v20 + 2400);
    *(_QWORD *)(v20 + 2400) = j;
    (*(void (__fastcall **)(__int64, unsigned __int64))(v20 + 656))(v1622, v2 + 1632);
    v1623 = *(_DWORD *)(v20 + 2416);
    if ( (v1623 & 1) != 0 )
    {
      *(_DWORD *)(v20 + 2416) = v1623 & 0xFFFFFFFE;
      v1622 = (*(__int64 (__fastcall **)(__int64))(v20 + 632))(v1622);
      if ( v1622 )
        *(_DWORD *)(v20 + 2384) = (*(__int64 (__fastcall **)(__int64))(v20 + 664))(v1622);
      else
        *(_DWORD *)(v20 + 2384) = -1;
    }
    if ( v1622 )
      (*(void (__fastcall **)(__int64))(v20 + 640))(v1622);
  }
  if ( *((_DWORD *)&v16[141].Next + 2) != (_DWORD)j )
  {
    Next = (__int64)v16[143].Next;
    v1625 = *((_QWORD *)&v16[143].Next + 1);
    v1626 = *((_QWORD *)&v16[142].Next + 1);
    v1627 = v16[142].Next;
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = Next;
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1625;
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = v1626;
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v1627;
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v16;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1628 = KeGetCurrentPrcb();
    v1629 = *(_QWORD *)((char *)&v1628->MxCsr
                      + *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) + 1568LL));
    v1630 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
    v1631 = *(_QWORD *)((char *)&v1628->MxCsr + *(_QWORD *)(v1630 + 1584));
    v1632 = *(_QWORD *)(v1630 + 1576);
    *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v1631;
    if ( !*((_BYTE *)&v1628->MxCsr + v1632) || v2 + 176 > v1629 || v2 + 176 < v1629 - 24576 )
      v1629 = *(_QWORD *)(v1631
                        + *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) + 1632LL));
    v1633 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
    if ( (*(_DWORD *)(v1633 + 2416) & 0x8000000) == 0 )
    {
      v1634 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1634;
      __writecr0(v1634 & 0xFFFFFFFFFFFEFFFFuLL);
      v1635 = v1633 + 2680;
      v1636 = 16LL * *(unsigned int *)(v1633 + 2672) + v1633 + 2680;
      v1637 = 0;
      v1638 = (_QWORD *)v1636;
      if ( *(_DWORD *)(v1633 + 2676) )
      {
        do
        {
          *(_QWORD *)*v1638 = v1638[1];
          v1639 = __readcr4();
          if ( (v1639 & 0x20080) != 0 )
          {
            __writecr4(v1639 ^ 0x80);
            __writecr4(v1639);
          }
          else
          {
            v1640 = __readcr3();
            __writecr3(v1640);
          }
          v1638 += 2;
          ++v1637;
        }
        while ( v1637 < *(_DWORD *)(v1633 + 2676) );
        Next = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
        v1625 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      }
      if ( v1635 < v1636 )
      {
        do
        {
          v1641 = *(unsigned int *)(v1635 + 8);
          v1642 = v1638;
          v1643 = *(char **)v1635;
          v1644 = v1641;
          if ( (unsigned int)v1641 >= 8 )
          {
            v1645 = (unsigned __int64)(unsigned int)v1641 >> 3;
            do
            {
              v1644 -= 8;
              *(_QWORD *)v1643 = *v1642++;
              v1643 += 8;
              --v1645;
            }
            while ( v1645 );
          }
          if ( v1644 )
          {
            v1646 = v1643 - (char *)v1642;
            do
            {
              *((_BYTE *)v1642 + v1646) = *(_BYTE *)v1642;
              v1642 = (_QWORD *)((char *)v1642 + 1);
              --v1644;
            }
            while ( v1644 );
          }
          v1638 = (_QWORD *)((char *)v1638 + v1641);
          v1635 += 16LL;
        }
        while ( v1635 < v1636 );
        v1631 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0);
        v1634 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
        Next = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
        v1625 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 8);
        v1626 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x158);
      }
      **(_BYTE **)(v1633 + 528) = -61;
      __writecr0(v1634);
      v1627 = *(_SLIST_ENTRY **)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
    }
    v1655 = *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
    v1656 = *(_DWORD *)(v1655 + 2312);
    if ( v1656 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1656 = *(_DWORD *)(v1655 + 2312);
      }
      if ( v1656 )
      {
        v1657 = v1656 - 1;
        if ( v1657 )
        {
          v1658 = v1657 - 1;
          if ( v1658 )
          {
            v1659 = v1658 - 1;
            if ( v1659 )
            {
              v1660 = v1659 - 1;
              if ( v1660 )
              {
                if ( v1660 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v1655 + 1584)),
                    (*(_DWORD *)(v1655 + 2416) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v1655 + 1448) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v1655 + 1680)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                          + *(_QWORD *)(v1655 + 1584))
                                              + *(_QWORD *)(v1655 + 1648)),
                  (*(_DWORD *)(v1655 + 2416) >> 10) & 0x1F);
              }
              goto LABEL_2511;
            }
            v1661 = *(volatile signed __int32 **)(v1655 + 1360);
          }
          else
          {
            v1661 = *(volatile signed __int32 **)(v1655 + 1352);
          }
        }
        else
        {
          v1661 = *(volatile signed __int32 **)(v1655 + 1336);
        }
        _interlockedbittestandset64(v1661, 0LL);
      }
    }
LABEL_2511:
    *(_QWORD *)(v1631 + *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) + 1656LL)) = 0LL;
    *(_QWORD *)(v1631 + *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) + 1672LL)) = 0LL;
    SdbpCheckDll(
      265,
      (_DWORD)v1627,
      v1626,
      v1625,
      Next,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) + 336LL),
      v1629);
    __debugbreak();
  }
  if ( *((_DWORD *)&v16[128].Next + 3) == (_DWORD)j && *((_DWORD *)&v16[128].Next + 2) == (_DWORD)j )
  {
    v1647 = *(_QWORD *)(v3 + 8) == 0LL ? 0xC0000225 : 0;
  }
  else
  {
    v1647 = -1073741802;
    *(_DWORD *)v3 = *((_DWORD *)&v16[128].Next + 2);
    *(_DWORD *)(v3 + 4) = *((_DWORD *)&v16[128].Next + 3);
  }
  if ( *(_QWORD *)(((unsigned __int64)v1669 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) == 2752LL )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, v15);
  else
    ExFreePool(v15);
  return v1647;
}
