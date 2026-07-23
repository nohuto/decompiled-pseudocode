/*
 * XREFs of sub_1401AC160 @ 0x1401AC160
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KeAreAllApcsDisabled @ 0x1400C17F0 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     KeAreApcsDisabled @ 0x1400EE0F0 (KeAreApcsDisabled.c)
 *     KeCheckProcessorGroupAffinity @ 0x1400FDC70 (KeCheckProcessorGroupAffinity.c)
 *     KeVerifyGroupAffinity @ 0x14015A778 (KeVerifyGroupAffinity.c)
 *     sub_1401B877C @ 0x1401B877C (sub_1401B877C.c)
 *     sub_1401B885C @ 0x1401B885C (sub_1401B885C.c)
 *     sub_1401B97C8 @ 0x1401B97C8 (sub_1401B97C8.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     KiGetNtDdiVersion @ 0x1402A5E10 (KiGetNtDdiVersion.c)
 *     sub_14036A0A4 @ 0x14036A0A4 (sub_14036A0A4.c)
 *     sub_14036AB20 @ 0x14036AB20 (sub_14036AB20.c)
 *     sub_14036B3BC @ 0x14036B3BC (sub_14036B3BC.c)
 *     sub_14036B5D8 @ 0x14036B5D8 (sub_14036B5D8.c)
 *     KiGetGdtIdt @ 0x14036CF40 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x14036CF50 (KiGetLdtr.c)
 *     KiGetSs @ 0x14036CF60 (KiGetSs.c)
 *     KiGetTr @ 0x14036CF70 (KiGetTr.c)
 *     KiErrata361Present @ 0x14036CF80 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x14036CFA0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x14036CFB0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x14036D060 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14036D320 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x14036D510 (RtlInitMinimalBarrier.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_1409D0FB4 @ 0x1409D0FB4 (sub_1409D0FB4.c)
 */

__int64 __fastcall sub_1401AC160(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r14
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // ebx
  unsigned __int8 v10; // al
  SIZE_T v11; // rbx
  _SLIST_ENTRY *PoolWithTag; // rax
  PSLIST_ENTRY v13; // r13
  PSLIST_ENTRY v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 i1; // rsi
  ULONG_PTR v18; // rdi
  __int64 Next_low; // rcx
  __int64 v20; // rbx
  int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  int Next_high; // eax
  unsigned __int64 v27; // rax
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int128 v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // ecx
  int v33; // ecx
  unsigned int v34; // r10d
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r10d
  __int64 v41; // r14
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int128 v44; // rax
  __int64 v45; // rbx
  unsigned int *v46; // rax
  int v47; // ecx
  int v48; // r14d
  unsigned int Next; // ecx
  unsigned int v50; // ebx
  unsigned int i7; // r15d
  unsigned int v52; // r12d
  int v53; // eax
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r8
  char *v56; // r13
  unsigned int v57; // ecx
  __int64 v58; // r10
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int128 v65; // rax
  unsigned __int64 v66; // rbx
  __int64 v67; // rcx
  int v68; // eax
  unsigned __int64 v69; // rcx
  int v70; // edx
  bool v71; // zf
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned int *v74; // rdx
  unsigned __int64 v75; // r11
  int v76; // eax
  unsigned int v77; // ecx
  int v78; // r10d
  unsigned int v79; // ecx
  unsigned __int64 v80; // rbx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r8
  const char *v84; // rax
  int v85; // r11d
  __int64 v86; // r14
  unsigned __int64 v87; // rbx
  unsigned int v88; // r10d
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbx
  unsigned __int128 v92; // rax
  unsigned int v93; // r8d
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 i35; // rax
  unsigned int v97; // edx
  unsigned int v98; // ebx
  __int64 v99; // rcx
  unsigned __int8 v100; // r15
  __int64 v101; // r13
  unsigned __int64 v102; // r12
  unsigned __int64 v103; // r14
  int v104; // eax
  int v105; // eax
  unsigned __int64 v106; // rcx
  __int64 v107; // rcx
  int v108; // ecx
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // r12
  ULONG_PTR v111; // r13
  __int64 v112; // r8
  _QWORD *v113; // r9
  const char *v114; // rax
  int v115; // r11d
  __int64 v116; // r15
  unsigned __int64 v117; // r14
  unsigned __int64 v118; // rsi
  unsigned int v119; // r10d
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rsi
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  unsigned __int64 v125; // rdx
  __int64 v126; // rax
  unsigned __int64 i34; // rax
  __int64 v128; // rbx
  unsigned int v129; // ecx
  unsigned int v130; // esi
  unsigned __int8 v131; // r12
  unsigned __int64 v132; // r14
  unsigned __int64 v133; // r13
  unsigned __int64 v134; // r15
  int v135; // eax
  bool v136; // zf
  __int64 v137; // rax
  __int64 v138; // rbx
  unsigned __int16 v139; // dx
  _QWORD *v140; // rsi
  __int64 v141; // r8
  _QWORD *v142; // r9
  const char *v143; // rax
  int v144; // r10d
  __int64 v145; // r14
  unsigned __int64 v146; // rbx
  unsigned int v147; // r11d
  __int64 v148; // rax
  __int64 v149; // rbx
  unsigned __int128 v150; // rax
  __int64 v151; // r8
  unsigned __int64 v152; // rax
  __int64 v153; // rax
  unsigned __int64 i33; // rax
  unsigned int v155; // ebx
  __int64 v156; // rcx
  __int64 v157; // rdx
  unsigned __int8 v158; // r12
  unsigned __int64 v159; // rsi
  unsigned __int64 v160; // r13
  unsigned __int64 v161; // r14
  int v162; // eax
  __int16 v163; // ax
  __int64 v164; // rcx
  int (__fastcall *v165)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rcx
  void (*v169)(void); // rax
  int v170; // eax
  __int64 v171; // rcx
  unsigned int i32; // ebx
  __int64 v173; // rcx
  unsigned __int64 v174; // rdx
  __int64 v175; // r9
  __int64 v176; // r8
  unsigned __int64 v177; // rdx
  unsigned __int64 v178; // r9
  unsigned __int64 v179; // r8
  int v180; // eax
  int v181; // ecx
  unsigned __int64 v182; // rax
  unsigned __int128 v183; // rax
  void (*v184)(void); // rax
  int v185; // r14d
  __int64 v186; // rbx
  unsigned int v187; // ecx
  volatile signed __int8 **v188; // r8
  volatile signed __int8 *v189; // rdx
  unsigned __int64 v190; // r14
  __int64 v191; // r12
  unsigned __int64 v192; // r13
  __int64 *v193; // rax
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 *v196; // r15
  _BYTE *v197; // rbx
  char v198; // cl
  __int64 v199; // rdx
  int *v200; // rcx
  __int64 v201; // rcx
  __int64 v202; // rax
  bool v203; // zf
  int *v204; // rcx
  void (*v205)(void); // rax
  int v206; // r13d
  __int64 v207; // rbx
  unsigned int v208; // ecx
  __int64 v209; // r8
  __int64 v210; // r9
  _QWORD **v211; // r15
  _QWORD *v212; // r14
  unsigned __int64 v213; // rbx
  int *v214; // rcx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  _QWORD **v218; // r12
  _QWORD *v219; // r14
  char v220; // r15
  int v221; // r13d
  int *v222; // rsi
  unsigned __int8 v223; // r15
  __int64 v224; // rcx
  char *v225; // rbx
  __int64 v226; // r8
  const char *v227; // rax
  int v228; // r10d
  __int64 v229; // r14
  unsigned __int64 v230; // rbx
  unsigned int v231; // r11d
  __int64 v232; // rax
  __int64 v233; // rbx
  unsigned __int128 v234; // rax
  unsigned __int64 v235; // rax
  __int64 v236; // rax
  unsigned __int64 i31; // rax
  unsigned int v238; // ebx
  __int64 v239; // rcx
  __int64 v240; // rdx
  unsigned __int8 v241; // r12
  unsigned __int64 v242; // r13
  int v243; // eax
  unsigned __int64 v244; // rsi
  _QWORD *v245; // r12
  void (*v246)(void); // rax
  __int64 v247; // rbx
  unsigned int v248; // ecx
  void (__fastcall *v249)(__int64, _QWORD); // rax
  unsigned __int64 *v250; // r9
  __int64 v251; // r13
  unsigned __int64 v252; // r8
  __int64 v253; // rdx
  __int64 v254; // rax
  unsigned __int64 *v255; // r15
  unsigned int v256; // r13d
  unsigned __int8 v257; // r12
  ULONG_PTR v258; // r14
  unsigned __int64 v259; // rbx
  __int64 v260; // rcx
  __int64 v261; // r8
  int *v262; // rcx
  _QWORD **v263; // r10
  _QWORD *i13; // r9
  int v265; // r12d
  ULONG_PTR v266; // r13
  __int64 v267; // rbx
  void (*v268)(void); // rax
  unsigned int v269; // ecx
  unsigned __int8 v270; // r14
  volatile signed __int8 **v271; // r8
  volatile signed __int8 *v272; // rdx
  __int64 v273; // r9
  unsigned __int64 *v274; // r15
  __int64 v275; // rax
  int *v276; // r13
  unsigned __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // rdx
  __int64 v280; // rbx
  _QWORD **v281; // r15
  __int64 (*v282)(void); // rax
  __int64 v283; // rcx
  __int64 v284; // rdx
  unsigned int v285; // r13d
  unsigned int *v286; // rcx
  __int64 v287; // r12
  _QWORD *v288; // rax
  __int64 v289; // r8
  unsigned __int64 v290; // rax
  __int64 v291; // rcx
  int v292; // ebx
  unsigned __int64 v293; // rax
  unsigned __int128 v294; // rax
  __int64 v295; // rax
  __int64 v296; // r11
  int v297; // r10d
  _QWORD *v298; // r9
  unsigned __int64 v299; // r8
  unsigned __int64 v300; // rax
  unsigned __int128 v301; // rax
  unsigned __int64 v302; // rax
  unsigned __int128 v303; // rax
  unsigned __int64 v304; // rdx
  __int64 v305; // r10
  unsigned int v306; // ebx
  _QWORD *v307; // r8
  unsigned __int64 v308; // rax
  unsigned __int128 v309; // rax
  unsigned __int64 v310; // rax
  unsigned __int128 v311; // rax
  unsigned __int64 v312; // rdx
  __int64 v313; // r14
  _QWORD *v314; // rbx
  __int64 v315; // rsi
  __int64 v316; // rax
  unsigned __int64 v317; // r15
  unsigned __int64 v318; // rbx
  __int64 v319; // r9
  int v320; // edx
  __int64 v321; // r8
  int v322; // ecx
  int *v323; // rcx
  unsigned __int64 v324; // rax
  unsigned __int128 v325; // rax
  int v326; // ecx
  int v327; // ecx
  int v328; // ecx
  int v329; // ecx
  int v330; // ecx
  char *v331; // rbx
  int i17; // r13d
  __int64 v333; // r14
  __int64 v334; // r8
  __int64 v335; // r9
  _QWORD *v336; // rcx
  int v337; // edx
  char v338; // al
  __int64 v339; // rax
  __int64 v340; // rcx
  __int64 (__fastcall *v341)(_QWORD); // rax
  __int64 v342; // r14
  char *v343; // r12
  char *v344; // rbx
  int v345; // r15d
  __int64 v346; // r8
  _QWORD *v347; // rcx
  int v348; // edx
  char v349; // al
  __int64 v350; // rax
  __int64 v351; // rax
  __int64 (__fastcall *v352)(__int64); // rax
  _BYTE *v353; // rbx
  unsigned __int64 *v354; // rax
  int *v355; // rcx
  __int64 v356; // rax
  __int64 v357; // rax
  __int64 v358; // rax
  __int64 (__fastcall *v359)(unsigned __int64, ULONG_PTR *, unsigned int *); // rax
  unsigned __int64 v360; // r13
  int v361; // ecx
  ULONG_PTR v362; // r15
  int *v363; // rax
  unsigned int v364; // r12d
  int v365; // ecx
  __int64 v366; // rdx
  unsigned int v367; // r14d
  int v368; // r10d
  unsigned int v369; // r11d
  ULONG_PTR v370; // rsi
  int *v371; // r8
  __int64 v372; // r9
  int v373; // ecx
  int v374; // ecx
  int v375; // ecx
  int v376; // ecx
  __int64 v377; // rax
  int v378; // eax
  unsigned __int64 v379; // rcx
  __int64 v380; // r11
  unsigned int v381; // eax
  __int64 v382; // rdx
  unsigned int v383; // r14d
  int v384; // eax
  __int64 (__fastcall *v385)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v386; // rdx
  __int64 (__fastcall *v387)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v388; // rax
  __int64 v389; // rdx
  __int64 (__fastcall *v390)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v391)(ULONG_PTR); // rax
  __int64 v392; // rsi
  __int64 v393; // rax
  __int64 v394; // r8
  __int64 v395; // r14
  int v396; // r9d
  unsigned int v397; // eax
  ULONG_PTR v398; // rsi
  int v399; // edx
  unsigned int v400; // ecx
  __int64 v401; // r9
  _QWORD *v402; // rax
  int v403; // r8d
  unsigned __int64 v404; // rdx
  int v405; // ebx
  int v406; // ecx
  __int64 v407; // r15
  ULONG_PTR *v408; // r13
  unsigned int *v409; // rdi
  __int64 v410; // r12
  int v411; // ecx
  _QWORD *v412; // r14
  __int64 v413; // rdx
  _QWORD *v414; // rax
  _QWORD *v415; // r10
  const char *v416; // rax
  int v417; // ebx
  __int64 v418; // r11
  unsigned __int64 v419; // r8
  unsigned int v420; // r9d
  __int64 v421; // rdx
  __int64 v422; // rax
  __int64 v423; // r8
  unsigned __int64 v424; // rcx
  unsigned int v425; // edx
  unsigned __int64 v426; // r9
  __int64 v427; // rax
  unsigned __int64 i18; // rax
  _DWORD *v429; // rcx
  ULONG_PTR v430; // rax
  unsigned int v431; // r13d
  unsigned int v432; // r9d
  _DWORD *v433; // rcx
  ULONG_PTR v434; // rsi
  int *v435; // r12
  int v436; // ecx
  int *v437; // rax
  __int64 v438; // rdx
  _QWORD *v439; // r10
  const char *v440; // rax
  int v441; // r14d
  __int64 v442; // r15
  ULONG_PTR v443; // rcx
  unsigned __int64 v444; // r8
  unsigned int v445; // r11d
  __int64 v446; // rdx
  unsigned __int64 v447; // rax
  __int64 v448; // r8
  unsigned __int64 v449; // rcx
  unsigned __int64 v450; // rdx
  __int64 v451; // rax
  unsigned __int64 i19; // rax
  _DWORD *v453; // rdx
  int v454; // r15d
  __int64 v455; // r14
  unsigned int v456; // eax
  __int64 v457; // rsi
  int v458; // edx
  unsigned int v459; // ecx
  __int64 v460; // r9
  int v461; // r8d
  unsigned __int64 v462; // rax
  int v463; // ebx
  int v464; // ecx
  __int64 v465; // r14
  _QWORD *v466; // rax
  int v467; // ecx
  __int64 v468; // rdx
  const char *v469; // r12
  __int64 v470; // r15
  int v471; // r11d
  __int64 v472; // rbx
  const char *v473; // rax
  unsigned int v474; // r10d
  __int64 v475; // rax
  __int64 v476; // r8
  unsigned __int128 v477; // rax
  unsigned int v478; // edx
  unsigned __int64 v479; // rax
  __int64 v480; // rax
  unsigned __int64 i20; // rax
  __int64 v482; // rdx
  _DWORD *v483; // rsi
  ULONG_PTR v484; // r14
  __int64 v485; // r15
  __int64 v486; // rax
  __int64 v487; // rcx
  unsigned __int64 v488; // rcx
  _QWORD *v489; // rax
  _QWORD *v490; // rax
  ULONG_PTR v491; // rsi
  __int64 v492; // rax
  unsigned __int16 v493; // r15
  __int64 v494; // r8
  unsigned int v495; // ecx
  unsigned int *v496; // r12
  ULONG_PTR v497; // r11
  _DWORD *v498; // rdx
  unsigned int v499; // r13d
  unsigned int v500; // r13d
  unsigned int v501; // eax
  __int64 v502; // rax
  unsigned int v503; // r14d
  unsigned int v504; // r15d
  unsigned int v505; // r14d
  unsigned int *v506; // rax
  __int64 v507; // r9
  unsigned int *v508; // rsi
  ULONG_PTR v509; // r8
  unsigned int *v510; // rax
  __int64 v511; // r8
  unsigned int v512; // eax
  int v513; // r10d
  _BYTE *v514; // r14
  __int64 v515; // r13
  __int64 v516; // rsi
  unsigned int v517; // eax
  _BYTE *v518; // r12
  int v519; // edx
  unsigned int v520; // ecx
  __int64 v521; // r9
  int v522; // r8d
  unsigned __int64 v523; // rax
  int v524; // ebx
  int v525; // ecx
  _BYTE *v526; // rdx
  _QWORD *v527; // rax
  int v528; // ecx
  __int64 v529; // r8
  unsigned __int64 v530; // rax
  unsigned __int64 v531; // rcx
  unsigned __int64 i21; // rax
  ULONG_PTR v533; // rsi
  __int64 v534; // rax
  unsigned int *v535; // r14
  unsigned int *v536; // r10
  unsigned int *v537; // r8
  __int64 v538; // rcx
  __int64 v539; // rdx
  _DWORD *v540; // rax
  __int64 v541; // rcx
  __int64 *v542; // r13
  int v543; // r11d
  int v544; // ecx
  __int16 v545; // ax
  int v546; // r10d
  unsigned __int8 *v547; // r8
  __int64 v548; // rdx
  __int64 v549; // rax
  unsigned int v550; // r8d
  __int64 *v551; // r10
  __int64 v552; // rcx
  __int64 v553; // rax
  __int64 v554; // rdx
  __int64 v555; // rax
  unsigned __int8 *v556; // r8
  int v557; // r10d
  __int64 v558; // rdx
  __int64 v559; // rax
  unsigned __int8 *v560; // r8
  int v561; // r10d
  __int64 v562; // rdx
  __int64 v563; // rax
  int v564; // ecx
  unsigned int v565; // r15d
  unsigned int v566; // ebx
  unsigned int *v567; // r8
  unsigned int v568; // r15d
  unsigned int v569; // r12d
  unsigned int v570; // r13d
  ULONG_PTR v571; // rsi
  ULONG_PTR *v572; // r8
  unsigned int v573; // r10d
  __int64 v574; // rax
  unsigned int *v575; // rdx
  unsigned __int64 v576; // rsi
  ULONG_PTR v577; // r11
  __int64 v578; // r15
  _QWORD *v579; // rbx
  const char *v580; // rax
  int v581; // r14d
  unsigned __int64 v582; // r15
  unsigned int v583; // r10d
  unsigned __int64 v584; // r8
  __int64 v585; // rax
  __int64 v586; // r8
  unsigned __int128 v587; // rax
  unsigned __int64 v588; // rax
  __int64 v589; // rax
  unsigned __int64 i22; // rax
  bool v591; // cc
  int v592; // r13d
  unsigned int *v593; // rax
  unsigned int i23; // r12d
  char v595; // r8
  unsigned int v596; // r14d
  __int64 v597; // rbx
  __int64 v598; // r11
  __int64 v599; // rcx
  ULONG_PTR *v600; // r8
  unsigned __int64 v601; // rsi
  unsigned int v602; // r10d
  unsigned int *v603; // rdx
  ULONG_PTR v604; // rbx
  const char *v605; // rax
  int v606; // r15d
  unsigned __int64 v607; // r14
  _QWORD *v608; // r11
  unsigned __int64 v609; // r8
  unsigned int v610; // r10d
  __int64 v611; // rdx
  __int64 v612; // rax
  __int64 v613; // r8
  unsigned __int64 v614; // rcx
  unsigned __int64 v615; // rdx
  __int64 v616; // rax
  unsigned __int64 i24; // rax
  char *v618; // rax
  unsigned int *v619; // r14
  ULONG_PTR *v620; // r8
  __int64 v621; // rax
  unsigned int v622; // r10d
  unsigned int *v623; // rdx
  unsigned __int64 v624; // rbx
  ULONG_PTR v625; // r11
  _QWORD *v626; // r10
  const char *v627; // rax
  int v628; // esi
  __int64 v629; // r14
  unsigned __int64 v630; // r8
  unsigned int v631; // r11d
  __int64 v632; // rdx
  __int64 v633; // rax
  __int64 v634; // r8
  unsigned __int64 v635; // rcx
  unsigned __int64 v636; // rdx
  __int64 v637; // rax
  unsigned __int64 i25; // rax
  __int64 v639; // rcx
  _BYTE *v640; // rax
  _BYTE *v641; // rax
  char *v642; // rdx
  char *v643; // rbx
  __int64 v644; // r12
  int v645; // eax
  __int64 v646; // rdx
  __int64 v647; // r8
  __int64 v648; // r14
  __int64 v649; // rax
  __int64 v650; // r8
  _QWORD *v651; // rcx
  int v652; // edx
  char v653; // al
  __int64 v654; // rax
  __int64 v655; // rax
  char *v656; // rbx
  unsigned __int8 v657; // r14
  __int64 v658; // r8
  __int64 v659; // r9
  _QWORD *v660; // rcx
  int v661; // edx
  char v662; // al
  __int64 v663; // rax
  __int64 v664; // rax
  char *v665; // rbx
  __int64 v666; // r8
  __int64 v667; // r9
  _QWORD *v668; // rcx
  int v669; // edx
  char v670; // al
  __int64 v671; // rax
  __int64 v672; // rax
  int v673; // ebx
  __int64 v674; // rax
  __int64 v675; // rdx
  unsigned __int64 v676; // rbx
  __int64 v677; // rcx
  __int64 v678; // rdx
  __int64 v679; // r14
  unsigned __int64 v680; // rax
  __int64 v681; // r8
  __int64 v682; // r9
  __int64 v683; // rcx
  unsigned __int64 v684; // rbx
  unsigned __int64 v685; // rcx
  unsigned int v686; // ecx
  __int64 v687; // r8
  _QWORD *v688; // r9
  const char *v689; // rax
  int v690; // r10d
  __int64 v691; // r14
  unsigned __int64 v692; // rbx
  unsigned int v693; // r11d
  __int64 v694; // rdx
  __int64 v695; // rax
  __int64 v696; // rbx
  unsigned __int128 v697; // rax
  __int64 v698; // r8
  unsigned __int64 v699; // rdx
  __int64 v700; // rax
  unsigned __int64 i12; // rax
  unsigned int v702; // ebx
  __int64 v703; // rcx
  __int64 v704; // rdx
  unsigned __int8 v705; // r15
  __int64 v706; // r13
  unsigned __int64 v707; // r12
  unsigned __int64 v708; // r14
  int v709; // eax
  __int64 v710; // r8
  __int64 v711; // r8
  __int64 *v712; // r9
  unsigned __int8 *v713; // r10
  __int64 v714; // rcx
  __int64 v715; // rax
  __int64 v716; // rdx
  __int64 v717; // rax
  int v718; // eax
  __int64 v719; // rcx
  __int64 v720; // rdx
  __int64 v721; // rcx
  unsigned __int8 v722; // r14
  unsigned __int64 v723; // rbx
  __int64 v724; // r12
  unsigned __int64 v725; // r15
  int v726; // eax
  __int64 v727; // r8
  __int16 v728; // ax
  __int64 v729; // rcx
  int (__fastcall *v730)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 v731; // rax
  __int64 v732; // rax
  unsigned __int8 v733; // dl
  __int64 v734; // r15
  _QWORD *v735; // rsi
  __int64 v736; // r9
  _QWORD *v737; // r10
  const char *v738; // rax
  int v739; // ebx
  __int64 v740; // r14
  unsigned int v741; // r11d
  __int64 v742; // rdx
  unsigned __int64 v743; // rax
  __int64 v744; // r8
  unsigned __int64 v745; // rcx
  unsigned int v746; // r9d
  unsigned __int64 v747; // rdx
  __int64 v748; // rax
  unsigned __int64 i8; // rax
  unsigned int v750; // r10d
  unsigned __int64 v751; // rcx
  _QWORD *v752; // r9
  int v753; // ebx
  const char *v754; // rax
  __int64 v755; // r14
  unsigned __int64 v756; // rcx
  unsigned int v757; // r11d
  unsigned __int64 v758; // r8
  __int64 v759; // rdx
  __int64 v760; // rax
  __int64 v761; // r8
  unsigned __int64 v762; // rcx
  unsigned int v763; // r10d
  unsigned __int64 v764; // rdx
  __int64 v765; // rax
  unsigned __int64 i9; // rax
  __int64 v767; // rax
  _QWORD *v768; // rcx
  int v769; // edx
  char v770; // al
  __int64 v771; // rax
  __int64 v772; // rcx
  _QWORD *v773; // rsi
  _QWORD *v774; // r9
  int v775; // r10d
  const char *v776; // rax
  __int64 v777; // r14
  unsigned __int64 v778; // rbx
  unsigned int v779; // r11d
  __int64 v780; // rdx
  __int64 v781; // rax
  __int64 v782; // rbx
  unsigned __int128 v783; // rax
  __int64 v784; // r8
  unsigned __int64 v785; // rdx
  __int64 v786; // rax
  unsigned __int64 i10; // rax
  unsigned int v788; // ebx
  __int64 v789; // rcx
  __int64 v790; // rdx
  unsigned __int8 v791; // r12
  unsigned __int64 v792; // rsi
  unsigned __int64 v793; // r13
  unsigned __int64 v794; // r14
  int v795; // eax
  unsigned int v796; // r9d
  const char *v797; // r14
  const char *v798; // r10
  int v799; // ebx
  const char *v800; // rax
  const char *v801; // rcx
  unsigned int v802; // r11d
  __int64 v803; // rdx
  unsigned __int64 v804; // rax
  __int64 v805; // r8
  unsigned __int64 v806; // rcx
  unsigned __int64 v807; // rdx
  __int64 v808; // rax
  unsigned __int64 i11; // rax
  int v810; // eax
  __int64 v811; // rcx
  __int64 v812; // rdx
  const char *v813; // rsi
  __int64 v814; // r8
  __int64 v815; // r9
  const char *v816; // rax
  int v817; // r10d
  __int64 j; // r14
  unsigned __int64 v819; // rbx
  unsigned int v820; // r11d
  __int64 v821; // rdx
  __int64 v822; // rax
  __int64 v823; // rbx
  unsigned __int128 v824; // rax
  char v825; // r10
  __int64 v826; // r8
  unsigned __int64 v827; // rdx
  __int64 v828; // rax
  unsigned __int64 k; // rax
  unsigned int v830; // ebx
  __int64 v831; // rcx
  __int64 v832; // rdx
  unsigned __int8 v833; // r12
  unsigned __int64 v834; // rsi
  unsigned __int64 v835; // r13
  unsigned __int64 v836; // r14
  int v837; // eax
  int v838; // eax
  __int64 v839; // rcx
  __int64 v840; // rcx
  unsigned __int8 v841; // r14
  __int64 v842; // rdx
  unsigned int *v843; // rcx
  unsigned int *v844; // rbx
  char v845; // r15
  unsigned __int64 v846; // r12
  __int64 v847; // r8
  __int64 *v848; // r9
  unsigned int *v849; // r10
  __int64 v850; // rcx
  __int64 v851; // rax
  __int64 v852; // rax
  __int64 v853; // r8
  __int64 v854; // r9
  __int64 v855; // rcx
  unsigned __int8 v856; // r14
  unsigned __int64 v857; // rdx
  unsigned int *v858; // rcx
  unsigned int *v859; // rbx
  unsigned __int64 v860; // rcx
  unsigned __int64 v861; // rax
  unsigned int v862; // edx
  unsigned int v863; // ecx
  int v864; // edx
  unsigned __int64 v865; // rbx
  unsigned __int64 v866; // rsi
  const char *v867; // rsi
  __int64 v868; // r8
  const char *v869; // rax
  int v870; // r11d
  __int64 m; // r14
  unsigned __int64 v872; // rbx
  unsigned int v873; // r10d
  __int64 v874; // rdx
  __int64 v875; // rax
  __int64 v876; // rbx
  unsigned __int64 v877; // rcx
  unsigned __int64 v878; // rdx
  __int64 v879; // rax
  unsigned __int64 n; // rax
  unsigned int v881; // edx
  unsigned int v882; // ebx
  __int64 v883; // rcx
  unsigned __int8 v884; // r15
  unsigned __int64 v885; // rsi
  __int64 v886; // r13
  unsigned __int64 v887; // r12
  unsigned __int64 v888; // r14
  int v889; // eax
  int v890; // eax
  unsigned __int64 v891; // rcx
  __int64 v892; // rcx
  const char *v893; // rsi
  __int64 v894; // r8
  const char *v895; // rax
  int v896; // r11d
  __int64 ii; // r14
  unsigned __int64 v898; // rbx
  unsigned int v899; // r10d
  __int64 v900; // rdx
  __int64 v901; // rax
  __int64 v902; // rbx
  unsigned __int64 v903; // rcx
  unsigned __int64 v904; // rdx
  __int64 v905; // rax
  unsigned __int64 jj; // rax
  unsigned int v907; // ebx
  __int64 v908; // rcx
  __int64 v909; // rdx
  unsigned __int8 v910; // r12
  unsigned __int64 v911; // rsi
  unsigned __int64 v912; // r13
  int v913; // eax
  int v914; // eax
  __int64 v915; // rbx
  __int64 v916; // rcx
  __int64 v917; // rdx
  __int64 v918; // rax
  int v919; // eax
  __int64 v920; // rcx
  __int64 v921; // rcx
  __int64 v922; // rdx
  __int64 v923; // rax
  int v924; // eax
  __int64 v925; // rcx
  int v926; // eax
  __int64 v927; // rbx
  unsigned int v928; // esi
  __int64 v929; // rcx
  char *v930; // r14
  unsigned __int8 v931; // bl
  __int64 v932; // r8
  __int64 v933; // r9
  char v934; // si
  char v935; // r13
  __int64 v936; // r15
  unsigned __int64 v937; // rbx
  char *v938; // rsi
  unsigned __int8 v939; // al
  unsigned __int64 *v940; // rsi
  unsigned __int64 v941; // rcx
  unsigned __int64 *v942; // rbx
  unsigned __int8 v943; // si
  __int64 v944; // r13
  __int64 v945; // rdx
  unsigned __int64 v946; // r15
  unsigned __int64 v947; // rcx
  __int64 v948; // r8
  __int64 v949; // r9
  _QWORD *v950; // rcx
  int v951; // edx
  char v952; // al
  char *v953; // r14
  unsigned __int8 v954; // bl
  __int64 v955; // r8
  __int64 v956; // r9
  char v957; // si
  char v958; // r13
  __int64 v959; // r15
  unsigned __int64 v960; // rbx
  char *v961; // rsi
  unsigned __int8 v962; // al
  unsigned __int64 v963; // rcx
  unsigned __int64 *v964; // rbx
  unsigned __int8 v965; // si
  __int64 v966; // r13
  __int64 v967; // rdx
  unsigned __int64 v968; // r15
  unsigned __int64 v969; // rcx
  __int64 v970; // r8
  __int64 v971; // r9
  _QWORD *v972; // rcx
  int v973; // edx
  char v974; // al
  __int64 v975; // rax
  __int64 v976; // r12
  __int64 v977; // r12
  unsigned __int8 v978; // bl
  unsigned __int8 v979; // r13
  __int64 v980; // r8
  __int64 v981; // r9
  int *v982; // r14
  char v983; // si
  __int64 v984; // r14
  unsigned __int64 v985; // rbx
  char v986; // al
  int *v987; // rsi
  char v988; // al
  unsigned __int64 *v989; // rsi
  unsigned __int64 v990; // rcx
  unsigned __int64 *v991; // rbx
  __int64 v992; // r15
  char *v993; // rsi
  __int64 v994; // rdx
  unsigned __int64 v995; // r14
  unsigned __int64 v996; // rcx
  __int64 v997; // r8
  _QWORD *v998; // rcx
  int v999; // edx
  char v1000; // al
  int v1001; // ecx
  __int64 v1002; // r8
  unsigned __int64 v1003; // rcx
  ULONG_PTR v1004; // r9
  unsigned int *v1005; // r10
  unsigned __int64 v1006; // rbx
  unsigned __int64 v1007; // r11
  char *v1008; // rdx
  __int64 v1009; // rax
  unsigned int v1010; // eax
  unsigned __int64 v1011; // r12
  __int64 v1012; // r9
  _QWORD *v1013; // r10
  int v1014; // ebx
  const char *v1015; // rax
  unsigned __int64 v1016; // rsi
  __int64 v1017; // r15
  unsigned __int64 v1018; // r8
  unsigned int v1019; // r11d
  __int64 v1020; // rax
  __int64 v1021; // r8
  unsigned __int128 v1022; // rax
  __int64 v1023; // r9
  unsigned __int64 v1024; // rax
  __int64 v1025; // rax
  unsigned __int64 kk; // rax
  char v1027; // cl
  unsigned int v1028; // r13d
  unsigned __int8 v1029; // r14
  unsigned __int64 v1030; // rbx
  __int64 v1031; // r12
  unsigned __int64 v1032; // r15
  unsigned __int64 v1033; // rsi
  int v1034; // eax
  signed __int64 v1035; // r9
  ULONG_PTR v1036; // rcx
  int *v1037; // rdx
  __int64 v1038; // r15
  unsigned __int64 v1039; // r14
  __int64 v1040; // r8
  _QWORD *v1041; // r9
  int v1042; // r11d
  const char *v1043; // rax
  unsigned __int64 v1044; // rsi
  __int64 v1045; // r12
  unsigned __int64 v1046; // rbx
  unsigned int v1047; // r10d
  __int64 v1048; // rax
  __int64 v1049; // rbx
  unsigned __int128 v1050; // rax
  __int64 v1051; // r8
  unsigned __int64 v1052; // rax
  __int64 v1053; // rax
  unsigned __int64 mm; // rax
  unsigned int v1055; // ecx
  unsigned int v1056; // ebx
  unsigned __int8 v1057; // r15
  __int64 v1058; // r13
  unsigned __int64 v1059; // r12
  unsigned __int64 v1060; // r14
  int v1061; // eax
  __int64 v1062; // rax
  ULONG_PTR v1063; // rcx
  _QWORD *v1064; // rsi
  __int64 v1065; // r8
  _QWORD *v1066; // r9
  const char *v1067; // rax
  int v1068; // r11d
  __int64 v1069; // r14
  unsigned __int64 v1070; // rbx
  unsigned int v1071; // r10d
  __int64 v1072; // rax
  __int64 v1073; // rbx
  unsigned __int64 v1074; // rcx
  __int64 v1075; // r8
  unsigned __int64 v1076; // rax
  __int64 v1077; // rax
  unsigned __int64 i; // rax
  unsigned int v1079; // ebx
  __int64 v1080; // rcx
  __int64 v1081; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v1083; // rsi
  unsigned __int64 v1084; // r13
  unsigned __int64 v1085; // r14
  int v1086; // eax
  int v1087; // r12d
  __int64 **v1088; // r15
  unsigned int v1089; // eax
  __int64 v1090; // r13
  char *v1091; // rbx
  __int64 v1092; // r14
  __int64 v1093; // rsi
  __int64 v1094; // r8
  _QWORD *v1095; // rcx
  int v1096; // edx
  char v1097; // al
  __int64 v1098; // rax
  __int64 v1099; // rax
  int v1100; // eax
  __int64 v1101; // rcx
  volatile signed __int32 *v1102; // rcx
  __int64 v1103; // r8
  __int64 v1104; // r9
  const char *v1105; // rax
  int v1106; // r11d
  __int64 v1107; // r14
  unsigned __int64 v1108; // rbx
  unsigned int v1109; // r10d
  __int64 v1110; // rax
  __int64 v1111; // rbx
  unsigned __int64 v1112; // rcx
  __int64 v1113; // r8
  unsigned __int64 v1114; // rax
  __int64 v1115; // rax
  unsigned __int64 nn; // rax
  unsigned int v1117; // ebx
  __int64 v1118; // rcx
  __int64 v1119; // rdx
  unsigned __int8 v1120; // r12
  unsigned __int64 v1121; // r13
  unsigned __int64 v1122; // r14
  int v1123; // eax
  int v1124; // eax
  unsigned __int64 v1125; // rcx
  __int64 v1126; // rcx
  unsigned int v1127; // edx
  int v1128; // ecx
  unsigned __int64 v1129; // rbx
  __int64 v1130; // r8
  __int64 v1131; // r9
  __int64 v1132; // r8
  const char *v1133; // rax
  int v1134; // r10d
  __int64 v1135; // r14
  unsigned __int64 v1136; // rbx
  unsigned int v1137; // r11d
  __int64 v1138; // rax
  __int64 v1139; // rbx
  unsigned __int128 v1140; // rax
  unsigned int v1141; // r8d
  unsigned __int64 v1142; // rax
  __int64 v1143; // rax
  unsigned __int64 i2; // rax
  unsigned int v1145; // edx
  unsigned int v1146; // ebx
  __int64 v1147; // rcx
  unsigned __int8 v1148; // r15
  __int64 v1149; // r13
  unsigned __int64 v1150; // r12
  int v1151; // eax
  __int64 v1152; // rcx
  int v1153; // eax
  __int64 v1154; // rcx
  unsigned int v1155; // ebx
  _QWORD *v1156; // rcx
  int v1157; // edx
  char v1158; // al
  __int64 v1159; // rcx
  int v1160; // esi
  __int64 v1161; // r14
  unsigned int v1162; // ecx
  char v1163; // bl
  volatile signed __int8 **v1164; // r8
  volatile signed __int8 *v1165; // rdx
  unsigned __int8 v1166; // bl
  int v1167; // ecx
  unsigned int v1168; // eax
  unsigned int v1169; // ecx
  int v1170; // edx
  unsigned __int64 v1171; // rbx
  unsigned __int64 v1172; // rsi
  __int64 v1173; // r8
  __int64 v1174; // r9
  const char *v1175; // rsi
  __int64 v1176; // r8
  __int64 v1177; // r9
  const char *v1178; // rax
  int v1179; // r11d
  __int64 i3; // r14
  unsigned __int64 v1181; // rbx
  unsigned int v1182; // r10d
  __int64 v1183; // rdx
  __int64 v1184; // rax
  __int64 v1185; // rbx
  __int64 v1186; // rcx
  unsigned int v1187; // r8d
  unsigned __int64 v1188; // rdx
  __int64 v1189; // rax
  unsigned __int64 i4; // rax
  unsigned int v1191; // edx
  unsigned int v1192; // ebx
  __int64 v1193; // rcx
  __int64 v1194; // r8
  unsigned __int8 v1195; // r15
  unsigned __int64 v1196; // rsi
  __int64 v1197; // r13
  unsigned __int64 v1198; // r12
  unsigned __int64 v1199; // r14
  int v1200; // eax
  __int64 v1201; // r13
  __int64 v1202; // rax
  _DWORD *v1203; // r15
  unsigned int v1204; // r14d
  int v1205; // eax
  __int64 v1206; // rcx
  const char *v1207; // rsi
  __int64 v1208; // r8
  const char *v1209; // rax
  int v1210; // r11d
  __int64 i5; // r14
  unsigned __int64 v1212; // rbx
  unsigned int v1213; // r10d
  __int64 v1214; // rdx
  __int64 v1215; // rax
  __int64 v1216; // rbx
  __int64 v1217; // rcx
  unsigned __int64 v1218; // rdx
  __int64 v1219; // rax
  unsigned __int64 i6; // rax
  unsigned int v1221; // ebx
  __int64 v1222; // rcx
  __int64 v1223; // rdx
  unsigned __int8 v1224; // r12
  unsigned __int64 v1225; // rsi
  unsigned __int64 v1226; // r13
  int v1227; // eax
  int v1228; // eax
  unsigned int v1229; // ecx
  unsigned int v1230; // r11d
  unsigned int v1231; // r12d
  int v1232; // ecx
  __int16 v1233; // ax
  char *v1234; // r8
  int v1235; // r10d
  unsigned __int8 *v1236; // r9
  __int64 v1237; // rdx
  __int64 v1238; // rax
  __int64 v1239; // r8
  _DWORD *v1240; // rax
  __int64 *v1241; // r9
  unsigned int v1242; // r8d
  __int64 *v1243; // r10
  __int64 v1244; // rcx
  __int64 v1245; // rax
  __int64 v1246; // rdx
  __int64 v1247; // rax
  unsigned __int8 *v1248; // r8
  int v1249; // r10d
  unsigned __int8 *v1250; // r9
  __int64 v1251; // rdx
  __int64 v1252; // rax
  unsigned __int8 *v1253; // r8
  int v1254; // r10d
  unsigned __int8 *v1255; // r9
  __int64 v1256; // rdx
  __int64 v1257; // rax
  int v1258; // eax
  __int64 v1259; // rbx
  int v1260; // eax
  int *v1261; // rcx
  ULONG_PTR v1262; // rcx
  unsigned __int8 v1263; // bl
  int v1264; // eax
  unsigned int v1265; // edx
  int v1266; // ecx
  __int64 v1267; // r14
  __int64 v1268; // rbx
  __int64 v1269; // rbx
  unsigned __int64 v1270; // rbx
  __int64 v1271; // r8
  __int64 v1272; // r9
  __int64 v1273; // rcx
  unsigned __int8 v1274; // r14
  __int64 v1275; // rdx
  unsigned int *v1276; // rcx
  unsigned int *v1277; // rbx
  char v1278; // r15
  unsigned __int64 v1279; // r12
  __int64 v1280; // r8
  __int64 *v1281; // r9
  unsigned int *v1282; // r10
  __int64 v1283; // rcx
  __int64 v1284; // rax
  __int64 v1285; // rax
  int v1286; // ecx
  unsigned __int64 v1287; // rbx
  unsigned __int64 v1288; // rsi
  __int64 v1289; // r8
  __int64 v1290; // r9
  const char *v1291; // r11
  __int64 v1292; // r8
  __int64 v1293; // r9
  const char *v1294; // rax
  int v1295; // esi
  __int64 i27; // r14
  unsigned __int64 v1297; // rbx
  unsigned int v1298; // r10d
  __int64 v1299; // rdx
  __int64 v1300; // rax
  __int64 v1301; // rbx
  __int64 v1302; // rcx
  unsigned int v1303; // r8d
  unsigned __int64 v1304; // rdx
  __int64 v1305; // rax
  unsigned __int64 i28; // rax
  unsigned int v1307; // edx
  unsigned int v1308; // ebx
  __int64 v1309; // rcx
  __int64 v1310; // r8
  unsigned __int8 v1311; // r15
  unsigned __int64 v1312; // rsi
  __int64 v1313; // r13
  unsigned __int64 v1314; // r12
  unsigned __int64 v1315; // r14
  int v1316; // eax
  __int64 v1317; // r8
  unsigned __int64 v1318; // rcx
  unsigned int *v1319; // rbx
  int *v1320; // r12
  unsigned __int64 v1321; // r15
  unsigned int v1322; // r14d
  __int64 v1323; // r8
  int v1324; // r10d
  const char *v1325; // rax
  __int64 v1326; // r11
  unsigned __int64 v1327; // rcx
  unsigned __int64 v1328; // r13
  unsigned __int64 v1329; // r9
  __int64 v1330; // rdx
  __int64 v1331; // rax
  __int64 v1332; // r13
  __int64 v1333; // rcx
  unsigned int v1334; // edx
  __int64 v1335; // rax
  unsigned __int64 i26; // rax
  int v1337; // eax
  unsigned __int64 v1338; // rcx
  __int64 v1339; // rcx
  const char *v1340; // rsi
  __int64 v1341; // r8
  const char *v1342; // rax
  int v1343; // r11d
  __int64 i29; // r14
  unsigned __int64 v1345; // rbx
  unsigned int v1346; // r10d
  __int64 v1347; // rdx
  __int64 v1348; // rax
  __int64 v1349; // rbx
  __int64 v1350; // rcx
  unsigned __int64 v1351; // rdx
  __int64 v1352; // rax
  unsigned __int64 i30; // rax
  __int64 v1354; // rcx
  __int64 v1355; // rdx
  unsigned __int8 v1356; // r12
  unsigned __int64 v1357; // rsi
  unsigned __int64 v1358; // r13
  int v1359; // eax
  unsigned int v1360; // r13d
  _BYTE *v1361; // rbx
  char *v1362; // rsi
  char v1363; // cl
  volatile signed __int32 *v1364; // rcx
  struct _KPRCB *v1365; // rdx
  __int64 v1366; // r8
  int v1367; // ecx
  struct _KPRCB *v1368; // rax
  unsigned __int64 v1369; // rcx
  int *v1370; // rcx
  unsigned int v1371; // ecx
  __int64 v1372; // rdx
  unsigned __int8 v1373; // r14
  unsigned __int64 v1374; // rbx
  __int64 v1375; // r12
  unsigned __int64 v1376; // r15
  unsigned __int64 v1377; // rsi
  int v1378; // eax
  bool v1379; // zf
  __int64 v1380; // rcx
  unsigned __int8 v1381; // r14
  __int64 v1382; // rdx
  unsigned int *v1383; // rcx
  unsigned int *v1384; // rbx
  char v1385; // r15
  unsigned __int64 v1386; // r12
  __int64 v1387; // r8
  __int64 *v1388; // r9
  unsigned int *v1389; // r10
  __int64 v1390; // rcx
  __int64 v1391; // rax
  __int64 v1392; // rax
  __int64 v1393; // rax
  __int64 v1394; // r8
  __int64 v1395; // r9
  __int64 v1396; // r9
  _QWORD *v1397; // rbx
  int v1398; // r11d
  _QWORD *v1399; // r10
  __int64 v1400; // r14
  const char *v1401; // rax
  __int64 v1402; // rax
  __int64 v1403; // r8
  unsigned __int128 v1404; // rax
  unsigned __int64 v1405; // rax
  __int64 v1406; // rax
  __int64 v1407; // rcx
  int v1408; // eax
  ULONG_PTR v1409; // rcx
  int v1410; // r10d
  int v1411; // r10d
  __int64 v1412; // r8
  unsigned int v1413; // ebx
  unsigned __int64 v1414; // rax
  unsigned __int64 v1415; // rax
  __int64 v1416; // r9
  __int64 v1417; // rdx
  __int64 v1418; // r8
  int v1419; // ecx
  _QWORD *v1420; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1422; // r8
  unsigned __int64 v1423; // rdx
  __int64 v1424; // r8
  unsigned __int64 v1425; // rdx
  _QWORD *v1426; // r14
  __int64 v1427; // rdx
  __int64 v1428; // r8
  int v1429; // ecx
  _QWORD *v1430; // rax
  unsigned __int64 v1431; // rcx
  unsigned __int16 Ldtr; // r15
  unsigned __int16 Tr; // ax
  unsigned __int64 v1434; // rdx
  int v1435; // r10d
  unsigned __int16 v1436; // r12
  __int64 v1437; // r11
  _QWORD *v1438; // r8
  const char *v1439; // rcx
  unsigned __int64 v1440; // rbx
  unsigned int v1441; // r9d
  __int64 v1442; // rdx
  __int64 v1443; // rax
  __int64 v1444; // rbx
  unsigned __int64 v1445; // rcx
  __int64 v1446; // rax
  unsigned __int64 i14; // rax
  unsigned int v1448; // ebx
  _QWORD *v1449; // rcx
  int v1450; // edx
  char v1451; // al
  __int64 v1452; // rax
  int v1453; // eax
  __int64 v1454; // rcx
  __int64 v1455; // rdx
  void (__fastcall *v1456)(_BYTE *, __int64); // rax
  unsigned int v1457; // r10d
  __int64 v1458; // rcx
  unsigned __int64 v1459; // r8
  __int64 v1460; // rsi
  unsigned __int64 v1461; // r13
  __int64 v1462; // r12
  __int64 v1463; // r15
  unsigned __int8 v1464; // r14
  __int16 v1465; // r9
  int v1466; // eax
  __int64 v1467; // rcx
  unsigned __int64 v1468; // rbx
  __int64 v1469; // rdx
  unsigned __int64 v1470; // r15
  __int64 v1471; // rax
  __int64 v1472; // rax
  ULONG_PTR v1473; // r12
  __int64 v1474; // rax
  unsigned int *v1475; // rax
  __int64 v1476; // rcx
  unsigned __int64 v1477; // rbx
  unsigned __int64 v1478; // rdx
  struct _KPRCB *v1479; // r8
  _QWORD *v1480; // r14
  _QWORD *v1481; // r8
  int v1482; // ebx
  const char *v1483; // rax
  int v1484; // r9d
  __int64 v1485; // r11
  int v1486; // r10d
  __int64 v1487; // rax
  __int64 v1488; // rsi
  unsigned __int128 v1489; // rax
  int v1490; // edx
  int v1491; // r15d
  __int64 v1492; // rax
  __int64 v1493; // rax
  unsigned __int64 i15; // rax
  unsigned int *v1495; // rax
  __int64 v1496; // rax
  _QWORD *v1497; // rdx
  int v1498; // r9d
  unsigned __int64 v1499; // rbx
  const char *v1500; // rax
  __int64 v1501; // rax
  int v1502; // r8d
  __int64 v1503; // rax
  unsigned __int64 i16; // rax
  unsigned int v1505; // ebx
  __int64 v1506; // r9
  int *v1507; // r8
  __int64 v1508; // rdx
  unsigned __int64 v1509; // rcx
  __int64 v1510; // rcx
  __int64 v1511; // rax
  __int64 v1512; // rdx
  __int64 v1513; // rbx
  __int64 v1514; // rdx
  int v1515; // eax
  __int64 v1516; // rbx
  __int64 v1517; // rbx
  int v1518; // eax
  __int64 v1519; // r13
  unsigned __int64 v1520; // rbx
  __int64 v1521; // rdi
  _SLIST_ENTRY *v1522; // r14
  struct _KPRCB *v1523; // rdx
  unsigned __int64 v1524; // rsi
  __int64 v1525; // r15
  _SLIST_ENTRY *v1526; // rax
  PSLIST_ENTRY v1527; // r9
  unsigned __int64 v1528; // r12
  unsigned __int64 v1529; // r10
  unsigned __int64 v1530; // r14
  unsigned int v1531; // r8d
  _QWORD *v1532; // rdx
  unsigned __int64 v1533; // rcx
  unsigned __int64 v1534; // rax
  __int64 v1535; // rdi
  _QWORD *v1536; // rcx
  char *v1537; // r8
  int v1538; // r11d
  unsigned __int64 v1539; // rbx
  signed __int64 v1540; // r8
  unsigned int v1541; // ebx
  unsigned int v1542; // ebx
  unsigned __int8 EffectiveIrql; // al
  unsigned int v1544; // ebx
  unsigned __int8 v1545; // al
  unsigned int v1546; // ebx
  unsigned __int8 v1547; // al
  int v1548; // ecx
  int v1549; // ecx
  int v1550; // ecx
  int v1551; // ecx
  int v1552; // ecx
  volatile signed __int32 *v1553; // rax
  unsigned int v1554; // ebx
  unsigned __int8 v1555; // al
  signed __int32 v1556[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1557; // [rsp+28h] [rbp-D8h]
  __int64 *v1558; // [rsp+38h] [rbp-C8h]
  char *v1559; // [rsp+50h] [rbp-B0h]
  _SLIST_ENTRY *v1560; // [rsp+58h] [rbp-A8h]
  __int64 v1561; // [rsp+60h] [rbp-A0h]
  unsigned int v1562; // [rsp+68h] [rbp-98h]
  ULONG_PTR v1563; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1564; // [rsp+78h] [rbp-88h]
  ULONG_PTR v1565; // [rsp+80h] [rbp-80h]
  unsigned __int8 v1566; // [rsp+88h] [rbp-78h] BYREF
  char v1567[3]; // [rsp+89h] [rbp-77h] BYREF
  unsigned int v1568; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v1569; // [rsp+90h] [rbp-70h]
  char v1570[8]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v1571; // [rsp+A0h] [rbp-60h]
  _BYTE *v1572; // [rsp+A8h] [rbp-58h]
  unsigned int v1573; // [rsp+B0h] [rbp-50h]
  __int64 v1574; // [rsp+B8h] [rbp-48h]
  unsigned int *v1575; // [rsp+C0h] [rbp-40h]
  unsigned int v1576; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1577; // [rsp+D0h] [rbp-30h]
  int v1578; // [rsp+D8h] [rbp-28h]
  __int64 v1579; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v1581; // [rsp+F0h] [rbp-10h]
  PSLIST_ENTRY v1582; // [rsp+F8h] [rbp-8h] BYREF
  int v1583; // [rsp+100h] [rbp+0h]
  unsigned int v1584; // [rsp+104h] [rbp+4h]
  _BYTE *v1585; // [rsp+108h] [rbp+8h] BYREF
  PSLIST_ENTRY v1586; // [rsp+110h] [rbp+10h]
  PSLIST_ENTRY v1587; // [rsp+118h] [rbp+18h]
  unsigned int v1588; // [rsp+120h] [rbp+20h]
  unsigned __int64 v1589; // [rsp+128h] [rbp+28h]
  unsigned __int8 v1590; // [rsp+130h] [rbp+30h]
  unsigned __int8 v1591; // [rsp+131h] [rbp+31h]
  unsigned __int8 v1592; // [rsp+132h] [rbp+32h]
  _BYTE *v1593; // [rsp+138h] [rbp+38h] BYREF
  _DWORD *v1594; // [rsp+140h] [rbp+40h]
  __int64 v1595; // [rsp+148h] [rbp+48h] BYREF
  int v1596; // [rsp+150h] [rbp+50h]
  unsigned int v1597; // [rsp+154h] [rbp+54h] BYREF
  __int64 v1598; // [rsp+158h] [rbp+58h]
  unsigned int v1599; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v1600; // [rsp+168h] [rbp+68h] BYREF
  int v1601; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1602; // [rsp+174h] [rbp+74h] BYREF
  _BYTE *v1603; // [rsp+178h] [rbp+78h]
  __int64 v1604; // [rsp+180h] [rbp+80h]
  int v1605; // [rsp+188h] [rbp+88h] BYREF
  __int64 v1606; // [rsp+190h] [rbp+90h]
  __int64 v1607; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v1608; // [rsp+1A0h] [rbp+A0h]
  int v1609; // [rsp+1A8h] [rbp+A8h]
  int v1610; // [rsp+1ACh] [rbp+ACh]
  int v1611; // [rsp+1B0h] [rbp+B0h]
  int v1612; // [rsp+1B4h] [rbp+B4h]
  int v1613; // [rsp+1B8h] [rbp+B8h]
  int v1614; // [rsp+1BCh] [rbp+BCh]
  int v1615; // [rsp+1C0h] [rbp+C0h]
  int v1616; // [rsp+1C4h] [rbp+C4h]
  int v1617; // [rsp+1C8h] [rbp+C8h]
  _DWORD v1618[7]; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1619; // [rsp+1E8h] [rbp+E8h]
  int v1620; // [rsp+1ECh] [rbp+ECh]
  int v1621; // [rsp+1F0h] [rbp+F0h]
  int v1622; // [rsp+1F4h] [rbp+F4h] BYREF
  __int64 v1623; // [rsp+1F8h] [rbp+F8h]
  __int64 v1624; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v1625; // [rsp+208h] [rbp+108h] BYREF
  unsigned __int64 v1626; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v1627[6]; // [rsp+218h] [rbp+118h] BYREF
  __int16 v1628; // [rsp+230h] [rbp+130h] BYREF
  _QWORD *v1629; // [rsp+232h] [rbp+132h]
  __int64 v1630; // [rsp+240h] [rbp+140h] BYREF
  __int64 v1631; // [rsp+248h] [rbp+148h] BYREF
  __int64 v1632; // [rsp+250h] [rbp+150h] BYREF
  __int64 v1633; // [rsp+258h] [rbp+158h] BYREF
  ULONG_PTR v1634; // [rsp+260h] [rbp+160h]
  __int64 v1635; // [rsp+268h] [rbp+168h]
  __int64 v1636; // [rsp+270h] [rbp+170h]
  __int64 v1637; // [rsp+278h] [rbp+178h] BYREF
  __int64 v1638; // [rsp+280h] [rbp+180h] BYREF
  __int128 v1639; // [rsp+288h] [rbp+188h]
  __int128 v1640; // [rsp+298h] [rbp+198h]
  __int16 v1641; // [rsp+2A8h] [rbp+1A8h] BYREF
  struct _KPRCB *v1642; // [rsp+2AAh] [rbp+1AAh]
  __int16 v1643; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v1644; // [rsp+2BAh] [rbp+1BAh]
  __int16 v1645; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v1646; // [rsp+2CAh] [rbp+1CAh]
  __int16 v1647; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v1648; // [rsp+2DAh] [rbp+1DAh]
  __int64 v1649; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int v1650; // [rsp+2F0h] [rbp+1F0h]
  unsigned int v1651; // [rsp+2F4h] [rbp+1F4h]
  char v1652[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  char v1653[4]; // [rsp+2FCh] [rbp+1FCh] BYREF
  __int64 v1654; // [rsp+300h] [rbp+200h] BYREF
  int v1655; // [rsp+308h] [rbp+208h] BYREF
  _WORD v1656[4]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE *v1657; // [rsp+318h] [rbp+218h]
  _WORD v1658[4]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE *v1659; // [rsp+328h] [rbp+228h]
  _DWORD *v1660; // [rsp+330h] [rbp+230h]
  _BYTE *v1661; // [rsp+338h] [rbp+238h]
  unsigned __int8 *v1662; // [rsp+340h] [rbp+240h]
  unsigned __int64 v1663; // [rsp+348h] [rbp+248h]
  unsigned __int8 *v1664; // [rsp+350h] [rbp+250h]
  unsigned __int8 *v1665; // [rsp+358h] [rbp+258h]
  ULONG_PTR v1666; // [rsp+360h] [rbp+260h] BYREF
  __int64 v1667; // [rsp+368h] [rbp+268h]
  __int64 v1668; // [rsp+370h] [rbp+270h]
  __int64 v1669; // [rsp+378h] [rbp+278h]
  __int64 v1670; // [rsp+380h] [rbp+280h]
  __int64 v1671; // [rsp+388h] [rbp+288h]
  _BYTE v1672[16]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v1673[16]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v1674[16]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v1675; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int16 v1676; // [rsp+3C8h] [rbp+2C8h]
  __int16 v1677; // [rsp+3CAh] [rbp+2CAh]
  unsigned __int64 v1678; // [rsp+3E0h] [rbp+2E0h]
  int v1679; // [rsp+3E8h] [rbp+2E8h]
  unsigned int v1680; // [rsp+3ECh] [rbp+2ECh]
  unsigned __int64 v1681; // [rsp+3F0h] [rbp+2F0h]
  _BYTE v1682[16]; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1683; // [rsp+408h] [rbp+308h]
  __int64 v1684; // [rsp+410h] [rbp+310h]
  __int64 v1685; // [rsp+418h] [rbp+318h]
  unsigned int *v1686; // [rsp+420h] [rbp+320h]
  __int64 v1687; // [rsp+428h] [rbp+328h]
  __int64 v1688; // [rsp+430h] [rbp+330h]
  __int64 v1689; // [rsp+438h] [rbp+338h]
  char v1690[8]; // [rsp+440h] [rbp+340h] BYREF
  char v1691[8]; // [rsp+448h] [rbp+348h] BYREF
  char v1692[8]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v1693; // [rsp+458h] [rbp+358h]
  __int64 v1694; // [rsp+460h] [rbp+360h]
  __int64 v1695; // [rsp+468h] [rbp+368h]
  __int64 v1696; // [rsp+470h] [rbp+370h]
  __int64 v1697; // [rsp+478h] [rbp+378h]
  __int64 v1698; // [rsp+480h] [rbp+380h]
  __int64 v1699; // [rsp+488h] [rbp+388h]
  __int64 v1700; // [rsp+490h] [rbp+390h]
  __int64 v1701; // [rsp+498h] [rbp+398h]
  __int64 v1702; // [rsp+4A0h] [rbp+3A0h]
  __int64 v1703; // [rsp+4A8h] [rbp+3A8h]
  char v1704[8]; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v1705; // [rsp+4B8h] [rbp+3B8h]
  __int64 v1706; // [rsp+4C0h] [rbp+3C0h]
  __int64 v1707; // [rsp+4C8h] [rbp+3C8h]
  __int64 v1708; // [rsp+4D0h] [rbp+3D0h]
  unsigned __int64 v1709; // [rsp+4E0h] [rbp+3E0h]
  __int64 v1710; // [rsp+4E8h] [rbp+3E8h]
  __int64 v1711; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1712; // [rsp+4F8h] [rbp+3F8h]
  __int64 v1713; // [rsp+500h] [rbp+400h]
  __int64 v1714; // [rsp+508h] [rbp+408h]
  ULONG_PTR v1715; // [rsp+510h] [rbp+410h]
  ULONG_PTR v1716; // [rsp+518h] [rbp+418h]
  unsigned __int64 v1717; // [rsp+520h] [rbp+420h]
  __int64 v1718; // [rsp+528h] [rbp+428h]
  __int64 v1719; // [rsp+530h] [rbp+430h]
  __int64 v1720; // [rsp+538h] [rbp+438h]
  __int64 v1721; // [rsp+540h] [rbp+440h]
  __int64 v1722; // [rsp+548h] [rbp+448h]
  __int64 v1723; // [rsp+550h] [rbp+450h]
  __int64 v1724; // [rsp+558h] [rbp+458h]
  __int64 v1725; // [rsp+560h] [rbp+460h]
  __int64 v1726; // [rsp+568h] [rbp+468h]
  __int64 v1727; // [rsp+570h] [rbp+470h]
  __int64 v1728; // [rsp+578h] [rbp+478h]
  __int64 v1729; // [rsp+580h] [rbp+480h]
  __int64 v1730; // [rsp+588h] [rbp+488h]
  __int64 v1731; // [rsp+590h] [rbp+490h]
  __int64 v1732; // [rsp+598h] [rbp+498h]
  ULONG_PTR v1733; // [rsp+5A0h] [rbp+4A0h]
  _BYTE v1734[16]; // [rsp+5A8h] [rbp+4A8h] BYREF
  _BYTE v1735[16]; // [rsp+5B8h] [rbp+4B8h] BYREF
  _BYTE v1736[16]; // [rsp+5C8h] [rbp+4C8h] BYREF
  _BYTE v1737[16]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _BYTE v1738[16]; // [rsp+5E8h] [rbp+4E8h] BYREF
  _BYTE v1739[16]; // [rsp+5F8h] [rbp+4F8h] BYREF
  _BYTE v1740[16]; // [rsp+608h] [rbp+508h] BYREF
  _BYTE v1741[16]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v1742[16]; // [rsp+628h] [rbp+528h] BYREF
  _BYTE v1743[16]; // [rsp+638h] [rbp+538h] BYREF
  _BYTE v1744[16]; // [rsp+648h] [rbp+548h] BYREF
  _BYTE v1745[16]; // [rsp+658h] [rbp+558h] BYREF
  _BYTE v1746[16]; // [rsp+668h] [rbp+568h] BYREF
  __int64 v1747; // [rsp+678h] [rbp+578h]
  _BYTE v1748[24]; // [rsp+680h] [rbp+580h] BYREF
  __int64 v1749; // [rsp+698h] [rbp+598h]
  char v1750[8]; // [rsp+6A0h] [rbp+5A0h] BYREF
  char v1751[8]; // [rsp+6A8h] [rbp+5A8h] BYREF
  _BYTE v1752[16]; // [rsp+6B0h] [rbp+5B0h] BYREF
  char v1753[16]; // [rsp+6C0h] [rbp+5C0h] BYREF
  char v1754[16]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _BYTE v1755[24]; // [rsp+6E0h] [rbp+5E0h] BYREF
  _BYTE v1756[48]; // [rsp+6F8h] [rbp+5F8h] BYREF
  _BYTE v1757[104]; // [rsp+728h] [rbp+628h] BYREF
  int v1759; // [rsp+7B0h] [rbp+6B0h]
  unsigned __int64 v1760; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1761; // [rsp+7B0h] [rbp+6B0h]
  BOOL v1762; // [rsp+7B0h] [rbp+6B0h]
  int v1763; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1764; // [rsp+7B0h] [rbp+6B0h]
  unsigned int v1765; // [rsp+7B0h] [rbp+6B0h]
  int v1766; // [rsp+7B0h] [rbp+6B0h]
  int v1767; // [rsp+7B0h] [rbp+6B0h]
  unsigned int v1768; // [rsp+7B0h] [rbp+6B0h]
  int v1769; // [rsp+7B0h] [rbp+6B0h]
  unsigned __int16 v1770; // [rsp+7B0h] [rbp+6B0h]
  int v1771; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1772; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1773; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1774; // [rsp+7B0h] [rbp+6B0h]
  unsigned __int8 v1775; // [rsp+7B0h] [rbp+6B0h]
  unsigned __int8 v1776; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1777; // [rsp+7B0h] [rbp+6B0h]
  unsigned int v1778; // [rsp+7B0h] [rbp+6B0h]
  int *v1779; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1780; // [rsp+7B0h] [rbp+6B0h]
  __int64 **v1781; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1782; // [rsp+7B0h] [rbp+6B0h]
  BOOL v1783; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1784; // [rsp+7B0h] [rbp+6B0h]
  unsigned __int16 v1785; // [rsp+7B0h] [rbp+6B0h]
  __int16 v1786; // [rsp+7B0h] [rbp+6B0h]
  char v1787; // [rsp+7B8h] [rbp+6B8h] BYREF

  v2 = a2;
  if ( !__31 )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1556, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2060) )
  {
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 20) & 1;
  v8 = *(_DWORD *)(a1 + 52);
  if ( v6 )
  {
    if ( v6 <= 0 )
      return 3221225485LL;
    if ( v6 > 4 )
    {
      if ( v6 == 5 && !v8 )
      {
        if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
        {
          v1542 = KeAreAllApcsDisabled();
          EffectiveIrql = KeGetEffectiveIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)EffectiveIrql << 16) | 0xFF, v1542, 0LL, 0LL);
        }
        goto LABEL_34;
      }
      return 3221225485LL;
    }
    if ( v8 != 16 || !KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    v9 = *(_DWORD *)(a1 + 20);
    v10 = KeGetEffectiveIrql();
    if ( v9 >= 0 )
    {
      if ( v10 || KeAreApcsDisabled() )
      {
        v1546 = KeAreAllApcsDisabled();
        v1547 = KeGetEffectiveIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1547 << 16) | 0xFF, v1546, 0LL, 0LL);
      }
    }
    else if ( v10 > 1u )
    {
      v1544 = KeAreAllApcsDisabled();
      v1545 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1545 << 16) | 0xFF, v1544, 0LL, 0LL);
    }
  }
  else
  {
    if ( v8 != 16 || (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) - 1LL) > 0xFFFFFFFE )
      return 3221225485LL;
    if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
    {
      v1554 = KeAreAllApcsDisabled();
      v1555 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1555 << 16) | 0xFF, v1554, 0LL, 0LL);
    }
  }
LABEL_34:
  v1606 = 2800LL;
  if ( !v7 || (v11 = *(_QWORD *)(v4 + 2704) + 2807LL, v1606 = v11, v11 == 2800) )
  {
    ++dword_14042BC54;
    v1587 = RtlpInterlockedPopEntrySList(&Lookaside);
    v13 = v1587;
    if ( v1587 )
      goto LABEL_40;
    ++dword_14042BC58;
    PoolWithTag = (_SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14042BC70)(
                                    (unsigned int)dword_14042BC64,
                                    (unsigned int)dword_14042BC6C,
                                    (unsigned int)dword_14042BC68);
  }
  else
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x746E494Bu);
  }
  v1587 = PoolWithTag;
  v13 = PoolWithTag;
LABEL_40:
  if ( !v13 )
    return 3221225626LL;
  v14 = v13 + 2;
  v1586 = v13 + 2;
  memmove(&v13[2], (const void *)v4, 0xAA0uLL);
  *((_QWORD *)&v13[169].Next + 1) = v4;
  v13[170].Next = v13 + 172;
  LODWORD(v13[132].Next) = *(_DWORD *)v2;
  HIDWORD(v13[132].Next) = *(_DWORD *)(v2 + 4);
  *((_DWORD *)&v13[132].Next + 2) = 0;
  LODWORD(v13[133].Next) = 0;
  HIDWORD(v13[155].Next) |= 0x1000u;
  if ( v7 )
    *((_QWORD *)&v13[170].Next + 1) = ((unsigned __int64)&v13[175].Next + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = *(_DWORD *)(a1 + 16);
  v1560 = v13 + 2;
  if ( v16 > 0x80000 )
    v16 = 0x80000;
  LODWORD(i1) = 0;
  *((_DWORD *)&v13[132].Next + 3) = v16;
  v1578 = 0;
  v1596 = 0;
  if ( !v16 )
    v16 = 1;
  *((_DWORD *)&v13[132].Next + 3) = v16;
  v1635 = a1;
  v18 = (ULONG_PTR)&v13[2];
  v1636 = v2;
  Next_low = LODWORD(v13[153].Next);
  if ( (_DWORD)Next_low != -1 )
  {
    v20 = (*((__int64 (__fastcall **)(__int64, __int64, __int64))&v13[41].Next + 1))(Next_low, v15, 6LL);
    if ( v20 || (v20 = ((__int64 (__fastcall *)(_QWORD))v13[42].Next)(0LL)) != 0 )
    {
      v21 = ((__int64 (__fastcall *)(__int64, _BYTE *))v13[43].Next)(v20, v1756);
      if ( v21 >= 0 )
      {
        v13[154].Next = (_SLIST_ENTRY *)v20;
        v22 = (*((__int64 (**)(void))&v13[45].Next + 1))();
        v23 = (*((__int64 (__fastcall **)(__int64))&v13[47].Next + 1))(v22);
        if ( v23 )
        {
          (*((void (__fastcall **)(__int64, __int64))&v13[48].Next + 1))(v22, v23);
          v24 = 0;
        }
        else
        {
          v24 = 4;
        }
        v21 = 0;
        HIDWORD(v13[155].Next) = v24 | HIDWORD(v13[155].Next) & 0xFFFFFFFB;
        *((_DWORD *)&v13[132].Next + 2) += 0x10000;
      }
      else
      {
        (*((void (__fastcall **)(__int64))&v13[42].Next + 1))(v20);
      }
      if ( v21 >= 0 )
      {
        v25 = 1LL;
        LODWORD(i1) = 0;
        v1596 = 1;
        goto LABEL_97;
      }
      LODWORD(i1) = 0;
    }
  }
  Next_high = HIDWORD(v13[155].Next);
  if ( (Next_high & 8) != 0 && (Next_high & 0x1000) == 0 )
  {
    v27 = __rdtsc();
    v28 = (__ROR8__(v27, 3) ^ v27) * (unsigned __int128)0x7010008004002001uLL;
    v1713 = *((_QWORD *)&v28 + 1);
    if ( (((unsigned __int8)v28 ^ BYTE8(v28)) & 3) == 0 )
    {
      v29 = __rdtsc();
      v30 = (__ROR8__(v29, 3) ^ v29) * (unsigned __int128)0x7010008004002001uLL;
      v1719 = *((_QWORD *)&v30 + 1);
      v31 = ((unsigned __int64)v30 ^ *((_QWORD *)&v30 + 1)) % 0xB;
      if ( (unsigned int)v31 > 5 )
      {
        v35 = v31 - 6;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
              {
                v1614 = -1333354875;
                v34 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v38 = __rdtsc();
                v39 = __ROR8__(v38, 3);
                v1720 = ((v39 ^ v38) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v40 = (67117057 * (v39 ^ v38)) ^ v1720;
                v34 = ((((((v40 % 0x1A + 97) << 8) | ((v40 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v40 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v40 >> 10)
                                                                  - 26
                                                                  * ((unsigned int)((1321528399
                                                                                   * (unsigned __int64)(v40 >> 10)) >> 32) >> 3)
                                                                  + 97)) << 8) | ((v40 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v1615 = 1684422978;
              v34 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v1617 = -2100910376;
            v34 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v1618[5] = 1314342514;
          v34 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v31 == 5 )
      {
        v1613 = 680282605;
        v34 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 == 1 )
            {
              v1610 = -1474152136;
              v34 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v1609 = 1728537748;
              v34 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v1621 = -2051698419;
            v34 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v1611 = -1297272415;
          v34 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v1612 = -795291432;
        v34 = __ROR4__(-795291432, 6);
      }
      v41 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))&v13[17].Next + 1))(
              512LL,
              *((_QWORD *)&v13[120].Next + 1),
              v34);
      if ( v41 )
      {
        v42 = *(unsigned int *)(*((_QWORD *)&v13[112].Next + 1) + *((_QWORD *)&v13[83].Next + 1));
        if ( (_DWORD)v42 )
        {
          v43 = __rdtsc();
          v44 = (__ROR8__(v43, 3) ^ v43) * (unsigned __int128)0x7010008004002001uLL;
          v1721 = *((_QWORD *)&v44 + 1);
          v42 = (*((_QWORD *)&v44 + 1) ^ (unsigned __int64)v44) % v42;
        }
        v45 = ((__int64 (__fastcall *)(_QWORD))v13[61].Next)(0LL);
        if ( v45 )
        {
          do
          {
            if ( !(_DWORD)v42 )
              break;
            LODWORD(v42) = v42 - 1;
            v45 = ((__int64 (__fastcall *)(__int64))v13[61].Next)(v45);
          }
          while ( v45 );
          LODWORD(i1) = 0;
          v18 = (ULONG_PTR)&v13[2];
          if ( !v45 )
          {
LABEL_95:
            ((void (__fastcall *)(__int64))v13[18].Next)(v41);
            goto LABEL_96;
          }
          if ( ((int (__fastcall *)(__int64))v13[60].Next)(v45) < 0 )
          {
            (*((void (__fastcall **)(__int64))&v13[61].Next + 1))(v45);
            v45 = 0LL;
          }
        }
        else
        {
          LODWORD(i1) = 0;
        }
        if ( v45 )
        {
          (*((void (__fastcall **)(__int64, _BYTE *))&v13[69].Next + 1))(v45, v1756);
          ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v13[30].Next)(v45, v41, 0LL, 0LL);
          v64 = __rdtsc();
          v65 = (__ROR8__(v64, 3) ^ v64) * (unsigned __int128)0x7010008004002001uLL;
          v1722 = *((_QWORD *)&v65 + 1);
          v66 = ((unsigned __int64)v65 ^ *((_QWORD *)&v65 + 1))
              % (*((unsigned int (__fastcall **)(__int64))&v13[29].Next + 1))(v41);
          _disable();
          v67 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)&v13[102].Next + 1));
          _enable();
          (*((void (__fastcall **)(__int64, _BYTE *))&v13[30].Next + 1))(v67, v1682);
          (*((void (__fastcall **)(_BYTE *, __int64))&v13[28].Next + 1))(v1748, v41);
          while ( ((int (__fastcall *)(unsigned int *, _BYTE *))v13[29].Next)(&v1602, v1748) >= 0 )
          {
            if ( !(_DWORD)v66 )
            {
              ((void (__fastcall *)(_BYTE *, _QWORD))v13[28].Next)(v1682, v1602);
              break;
            }
            LODWORD(v66) = v66 - 1;
          }
          ((void (__fastcall *)(_BYTE *, _BYTE *))v13[31].Next)(v1682, v1746);
          ((void (__fastcall *)(__int64))v13[18].Next)(v41);
          v25 = 1LL;
          v1578 = 1;
          goto LABEL_97;
        }
        goto LABEL_95;
      }
    }
  }
LABEL_96:
  v25 = 1LL;
  v1578 = 0;
LABEL_97:
  v1598 = 0LL;
  v46 = &v1599;
  v47 = 4;
  v48 = -1;
  do
  {
    *(_BYTE *)v46 = 0;
    v46 = (unsigned int *)((char *)v46 + 1);
    --v47;
  }
  while ( v47 );
  Next = (unsigned int)v13[132].Next;
  if ( *((_DWORD *)&v13[132].Next + 2) >= *((_DWORD *)&v13[132].Next + 3) )
    goto LABEL_2493;
  v50 = v1651;
  i7 = 0;
  v52 = v1650;
  v1588 = v1651;
  v1584 = v1650;
  while ( 1 )
  {
    v53 = *(_DWORD *)(v18 + 2448) & 0x110000;
    v1619 = Next;
    if ( v53 != 1114112 )
      __writedr(7u, 0LL);
    if ( Next == *(_DWORD *)(v18 + 2060) )
      break;
    v54 = v18;
    v55 = 0LL;
    if ( *(_QWORD *)(v18 + 2680) )
      v54 = *(_QWORD *)(v18 + 2680);
    v56 = (char *)(v54 + *(unsigned int *)(v54 + 2056));
    v1559 = v56;
    if ( (_DWORD)v1598 && HIDWORD(v1598) <= Next )
    {
      v55 = HIDWORD(v1598);
      v56 = (char *)(v54 + v1599);
      v1559 = v56;
    }
    if ( (_DWORD)v55 != Next )
    {
      v57 = Next - v55;
      v58 = v57;
      v55 = v57 + (unsigned int)v55;
      while ( 1 )
      {
        v59 = *(_DWORD *)v56;
        if ( *(int *)v56 > 12 )
          break;
        if ( v59 == 12 )
          goto LABEL_132;
        v60 = v59 - 1;
        if ( !v60 )
          goto LABEL_132;
        v61 = v60 - 6;
        if ( v61 )
        {
          v62 = v61 - 1;
          if ( !v62 )
          {
            v68 = *((unsigned __int16 *)v56 + 16);
LABEL_138:
            v63 = (v68 + 55) & 0xFFFFFFF8;
            goto LABEL_139;
          }
          if ( v62 != 2 )
          {
LABEL_135:
            v63 = 48LL;
            goto LABEL_139;
          }
          v63 = (unsigned int)(16 * (*((_DWORD *)v56 + 7) + 3));
        }
        else
        {
          v63 = (unsigned int)(24 * (*((_DWORD *)v56 + 6) + 2));
        }
LABEL_139:
        v56 += v63;
        if ( !--v58 )
        {
          v52 = v1584;
          v48 = -1;
          v50 = v1588;
          v1559 = v56;
          goto LABEL_141;
        }
      }
      if ( v59 == 28 )
      {
        v68 = *((unsigned __int16 *)v56 + 20);
        goto LABEL_138;
      }
      if ( v59 == 30 )
      {
        v63 = (((*((_DWORD *)v56 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v56 + 20) + 2);
      }
      else
      {
        if ( v59 <= 32 )
          goto LABEL_135;
        if ( v59 <= 34 )
        {
          v63 = 20
              * (unsigned int)(((*((_DWORD *)v56 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 10) + 4095) >> 12)
              + 48;
        }
        else
        {
          if ( v59 != 43 )
            goto LABEL_135;
LABEL_132:
          v63 = 4 * (*((_DWORD *)v56 + 4) / 0xCu) + 48;
        }
      }
      v25 = 1LL;
      goto LABEL_139;
    }
LABEL_141:
    LODWORD(v1598) = 1;
    HIDWORD(v1598) = v55;
    v1599 = (_DWORD)v56 - v54;
    if ( !*(_DWORD *)(v18 + 2084) )
    {
      v55 = 0LL;
      v69 = *(int *)v56;
      v70 = *(_DWORD *)(v1635 + 48);
      v54 = *(_QWORD *)(v1635 + 56);
      if ( (int)v69 > 21 )
      {
        if ( (_DWORD)v69 != 24 )
        {
          if ( (int)v69 <= 27 )
            goto LABEL_181;
          if ( (int)v69 > 29 )
          {
            if ( (unsigned int)v69 <= 0x23 && (v72 = 0x940000000LL, _bittest64(&v72, v69)) )
            {
              LODWORD(i1) = 1;
            }
            else
            {
              LODWORD(i1) = 1;
              if ( (unsigned int)(v69 - 43) > 1 )
                goto LABEL_181;
            }
            goto LABEL_175;
          }
        }
        goto LABEL_186;
      }
      if ( (_DWORD)v69 == 21 )
      {
        LODWORD(i1) = 1;
      }
      else
      {
        if ( (v69 & 0x80000000) != 0LL )
          goto LABEL_181;
        LODWORD(i1) = 1;
        if ( (int)v69 <= 1 )
          goto LABEL_175;
        if ( (int)v69 > 3 )
        {
          if ( (_DWORD)v69 != 7 )
          {
            if ( (_DWORD)v69 != 8 )
            {
              if ( (_DWORD)v69 != 9 && (unsigned int)(v69 - 11) > 3 )
                goto LABEL_181;
LABEL_175:
              if ( v70 )
                goto LABEL_181;
LABEL_176:
              v73 = *((unsigned int *)v56 + 4);
              if ( !(_DWORD)v73 )
                goto LABEL_181;
              v74 = v1618;
              v75 = *((_QWORD *)v56 + 1);
              v55 = (unsigned __int64)&v1654;
              v1654 = *(_QWORD *)v54;
              v76 = *(_DWORD *)(v54 + 8);
              v54 = 0LL;
              v1618[0] = v76;
              while ( v75 >= *(_QWORD *)v55 + (unsigned __int64)*v74 || v75 + v73 <= *(_QWORD *)v55 )
              {
                v54 = (unsigned int)(v54 + 1);
                v55 += 8LL;
                ++v74;
                if ( (_DWORD)v54 )
                  goto LABEL_181;
              }
LABEL_187:
              v25 = 1LL;
              ++*(_QWORD *)(v1636 + 8);
              goto LABEL_188;
            }
LABEL_186:
            if ( v70 != 5 )
              goto LABEL_181;
            goto LABEL_187;
          }
          LODWORD(v55) = *((_DWORD *)v56 + 7);
          v71 = v70 == 1;
LABEL_156:
          if ( !v71 )
            goto LABEL_181;
          goto LABEL_165;
        }
        if ( !v70 )
          goto LABEL_176;
      }
      if ( (_DWORD)v69 == 21 )
      {
        LODWORD(v55) = *((_DWORD *)v56 + 11);
        v71 = v70 == 4;
        goto LABEL_156;
      }
      if ( (unsigned int)(v69 - 2) <= 1 )
      {
        LODWORD(v55) = *((_DWORD *)v56 + 10);
        if ( (_DWORD)v69 == 3 && v70 != 2 )
          goto LABEL_181;
        if ( (_DWORD)v69 == 2 && v70 != 3 )
          goto LABEL_181;
      }
LABEL_165:
      if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v1635 + 56), v55) )
        goto LABEL_181;
      goto LABEL_187;
    }
LABEL_188:
    v78 = *(_DWORD *)v56;
    v1759 = *(_DWORD *)v56;
    if ( *(int *)v56 > 28 )
    {
      if ( v78 <= 37 )
      {
        if ( v78 == 37 )
        {
          if ( (*(_DWORD *)(v18 + 2452) & 2) != 0
            || !(*(unsigned __int8 (**)(void))(v18 + 1064))()
            || *(_DWORD *)(v18 + 2296) )
          {
            goto LABEL_181;
          }
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = 0LL;
          goto LABEL_249;
        }
        if ( v78 == 29 )
        {
          v1064 = (_QWORD *)*((_QWORD *)v56 + 1);
          v1065 = *((unsigned int *)v56 + 4);
          v1066 = v1064;
          *(_DWORD *)(v18 + 2088) += v1065;
          v1067 = (const char *)v1064;
          v1068 = *(_DWORD *)(v18 + 2068);
          v1069 = *(_QWORD *)(v18 + 2072);
          if ( v1064 < (_QWORD *)((char *)v1064 + v1065) )
          {
            do
            {
              _mm_prefetch(v1067, 0);
              v1067 += 64;
            }
            while ( v1067 < (const char *)v1064 + v1065 );
          }
          v1070 = *(_QWORD *)(v18 + 2072);
          v1071 = (unsigned int)v1065 >> 7;
          if ( (unsigned int)v1065 >> 7 )
          {
            do
            {
              v1072 = 8LL;
              do
              {
                v1073 = v1066[1] ^ __ROL8__(*v1066 ^ v1070, v1068);
                v1066 += 2;
                v1070 = __ROL8__(v1073, v1068);
                --v1072;
              }
              while ( v1072 );
              v1074 = __ROL8__(v1069 ^ ((char *)v1066 - (char *)v1064), 17) ^ v1069 ^ ((char *)v1066 - (char *)v1064);
              v1703 = (v1074 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1068 = ((unsigned __int8)(v1703 ^ v1074) ^ (unsigned __int8)v1068) & 0x3F;
              if ( !v1068 )
                LOBYTE(v1068) = 1;
              --v1071;
            }
            while ( v1071 );
            v18 = (ULONG_PTR)v1560;
          }
          v1075 = v1065 & 0x7F;
          if ( (unsigned int)v1075 >= 8 )
          {
            v1076 = (unsigned __int64)(unsigned int)v1075 >> 3;
            do
            {
              v1070 = __ROL8__(*v1066++ ^ v1070, v1068);
              v1075 = (unsigned int)(v1075 - 8);
              --v1076;
            }
            while ( v1076 );
          }
          for ( ; (_DWORD)v1075; v1075 = (unsigned int)(v1075 - 1) )
          {
            v1077 = *(unsigned __int8 *)v1066;
            v1066 = (_QWORD *)((char *)v1066 + 1);
            v1070 = __ROL8__(v1077 ^ v1070, v1068);
          }
          for ( i = v1070; ; LODWORD(v1070) = i ^ v1070 )
          {
            i >>= 31;
            if ( !i )
              break;
          }
          v1079 = v1070 & 0x7FFFFFFF;
          LODWORD(i1) = 0;
          if ( v1079 == *((_DWORD *)v56 + 5) )
            goto LABEL_1755;
          if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
            i7 = 1;
          v1080 = *((unsigned int *)v56 + 4);
          v1081 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v1075 = 64LL;
            if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1083 = v1081 & 0xFFFFFFFFFFFFF000uLL;
              v1780 = (v1081 + v1080 - 1) | 0xFFF;
              v1084 = (v1081 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1085 = CurrentIrql;
                while ( 1 )
                {
                  v1086 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                            v1083,
                            0LL,
                            v1075,
                            v1066);
                  if ( v1086 != -1073741267 )
                    break;
                  if ( i7 )
                    goto LABEL_1773;
                  if ( CurrentIrql > 1u )
                    goto LABEL_1753;
                  v1085 = CurrentIrql;
                  __writecr8(CurrentIrql);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1086 < 0 )
                  break;
LABEL_1753:
                v1083 += 4096LL;
                v1084 += 4096LL;
                if ( v1084 == v1780 )
                {
                  __writecr8(v1085);
                  v56 = v1559;
                  LODWORD(i1) = 0;
                  goto LABEL_1755;
                }
              }
LABEL_1773:
              __writecr8(v1085);
              v56 = v1559;
              LODWORD(i1) = 0;
            }
          }
          v1100 = *(_DWORD *)(v18 + 2296);
          if ( !v1100 )
          {
            *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1079 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
            v1100 = *(_DWORD *)(v18 + 2296);
          }
          v1101 = *((_QWORD *)v56 + 1);
          if ( v1100 )
          {
LABEL_1755:
            v1087 = 1;
          }
          else
          {
            v1087 = 1;
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *(int *)v56;
            *(_QWORD *)(v18 + 2328) = v1101;
            *(_DWORD *)(v18 + 2296) = 1;
            sub_14036B3BC(v18, 0LL, v1075, v1066);
          }
          v1088 = (__int64 **)*((_QWORD *)v56 + 1);
          v1089 = *((_DWORD *)v56 + 4) >> 4;
          v1781 = v1088;
          if ( v1089 )
          {
            v1090 = v1089;
            v1561 = v1089;
            do
            {
              v1091 = v1559;
              v1092 = **v1088;
              v1638 = 0LL;
              v1093 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(v18 + 784))(
                        v1092,
                        &v1638,
                        v1075,
                        v1066);
              if ( v1093 )
              {
                do
                {
                  ++v1087;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 520))(v1093, v1704) )
                  {
                    if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
                    {
                      v1095 = *(_QWORD **)(v18 + 2688);
                      v1096 = 48;
                      v1094 = 6LL;
                      do
                      {
                        v1096 -= 8;
                        *v1095 = *(_QWORD *)v1091;
                        v1091 += 8;
                        ++v1095;
                        --v1094;
                      }
                      while ( v1094 );
                      if ( v1096 )
                      {
                        do
                        {
                          v1097 = *v1091++;
                          *(_BYTE *)v1095 = v1097;
                          v1095 = (_QWORD *)((char *)v1095 + 1);
                          --v1096;
                        }
                        while ( v1096 );
                        v18 = (ULONG_PTR)v1560;
                      }
                      v1091 = *(char **)(v18 + 2688);
                    }
                    *((_QWORD *)v1091 + 3) = v1093;
                    *((_QWORD *)v1091 + 4) = v1092;
                    v1098 = *(_QWORD *)(v18 + 1424);
                    *(_QWORD *)v1098 = v1091;
                    *(_DWORD *)(v1098 + 16) = 48;
                    v1099 = *(_QWORD *)(v18 + 1424);
                    *(_QWORD *)(v1099 + 8) = v1093;
                    *(_DWORD *)(v1099 + 20) = 4096;
                    if ( !*(_DWORD *)(v18 + 2296) )
                    {
                      *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2312) = v1091 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2320) = *(int *)v1091;
                      *(_QWORD *)(v18 + 2328) = 6LL;
                      *(_DWORD *)(v18 + 2296) = 1;
                      sub_14036B3BC(v18, 0LL, v1094, 1LL);
                    }
                  }
                  v1093 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 784))(v1092, &v1638);
                }
                while ( v1093 );
                v1088 = v1781;
                v1090 = v1561;
              }
              v1087 = 1;
              v1088 += 2;
              --v1090;
              v1781 = v1088;
              v1561 = v1090;
              LODWORD(i1) = 0;
            }
            while ( v1090 );
          }
          goto LABEL_241;
        }
        if ( v78 != 30 )
        {
          if ( v78 != 31 )
          {
            if ( v78 == 32 )
            {
              sub_1401B97C8(v18, v56);
              goto LABEL_181;
            }
            if ( v78 == 33 )
            {
              sub_1401B885C(v18, v56);
              goto LABEL_181;
            }
            if ( v78 != 35 )
            {
              if ( v78 == 36 )
              {
                v813 = (const char *)*((_QWORD *)v56 + 1);
                v814 = *((unsigned int *)v56 + 4);
                v815 = (__int64)v813;
                *(_DWORD *)(v18 + 2088) += v814;
                v816 = v813;
                v817 = *(_DWORD *)(v18 + 2068);
                for ( j = *(_QWORD *)(v18 + 2072); v816 < &v813[v814]; v816 += 64 )
                  _mm_prefetch(v816, 0);
                v819 = *(_QWORD *)(v18 + 2072);
                v820 = (unsigned int)v814 >> 7;
                if ( (unsigned int)v814 >> 7 )
                {
                  do
                  {
                    v821 = 8LL;
                    do
                    {
                      v822 = v819 ^ *(_QWORD *)v815;
                      v823 = *(_QWORD *)(v815 + 8);
                      v815 += 16LL;
                      v819 = __ROL8__(__ROL8__(v822, v817) ^ v823, v817);
                      --v821;
                    }
                    while ( v821 );
                    v824 = (__ROL8__(j ^ (v815 - (_QWORD)v813), 17) ^ j ^ (unsigned __int64)(v815 - (_QWORD)v813))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v1698 = *((_QWORD *)&v824 + 1);
                    v825 = BYTE8(v824) ^ v824 ^ v817;
                    v25 = 1LL;
                    v817 = v825 & 0x3F;
                    if ( !v817 )
                      LOBYTE(v817) = 1;
                    --v820;
                  }
                  while ( v820 );
                  v18 = (ULONG_PTR)v1560;
                }
                v826 = v814 & 0x7F;
                if ( (unsigned int)v826 >= 8 )
                {
                  v827 = (unsigned __int64)(unsigned int)v826 >> 3;
                  do
                  {
                    v819 = __ROL8__(*(_QWORD *)v815 ^ v819, v817);
                    v815 += 8LL;
                    v826 = (unsigned int)(v826 - 8);
                    --v827;
                  }
                  while ( v827 );
                  v18 = (ULONG_PTR)v1560;
                  v25 = 1LL;
                }
                for ( ; (_DWORD)v826; v826 = (unsigned int)(v826 - 1) )
                {
                  v828 = *(unsigned __int8 *)v815++;
                  v819 = __ROL8__(v828 ^ v819, v817);
                }
                for ( k = v819; ; LODWORD(v819) = k ^ v819 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v830 = v819 & 0x7FFFFFFF;
                if ( v830 == *((_DWORD *)v56 + 5) )
                  goto LABEL_1361;
                v826 = 0LL;
                if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
                  i7 = 1;
                v831 = *((unsigned int *)v56 + 4);
                v832 = *((_QWORD *)v56 + 1);
                if ( *((_DWORD *)v56 + 4) )
                {
                  v815 = 64LL;
                  if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
                  {
                    v833 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v834 = v832 & 0xFFFFFFFFFFFFF000uLL;
                    v1773 = (v832 + v831 - 1) | 0xFFF;
                    v835 = (v832 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v836 = v833;
                      while ( 1 )
                      {
                        v837 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(v834, 0LL);
                        if ( v837 != -1073741267 )
                          break;
                        if ( i7 )
                          goto LABEL_1356;
                        if ( v833 > 1u )
                          goto LABEL_1354;
                        v836 = v833;
                        __writecr8(v833);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v837 < 0 )
                        break;
LABEL_1354:
                      v834 += 4096LL;
                      v835 += 4096LL;
                      if ( v835 == v1773 )
                      {
                        __writecr8(v836);
                        v56 = v1559;
LABEL_1361:
                        v840 = *(_QWORD *)(v18 + 1344);
                        v841 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v18 + 336))(v840, v25, v826, v815);
                        v843 = **(unsigned int ***)(v18 + 1552);
                        v844 = v843 + 4;
                        v845 = *((_BYTE *)v843 + 12);
                        v846 = (unsigned __int64)&v843[6 * *v843 + 4];
                        do
                        {
                          v847 = 24LL;
                          v848 = (__int64 *)(v56 + 24);
                          v849 = v844;
                          do
                          {
                            v850 = *(_QWORD *)v849;
                            v849 += 2;
                            v851 = *v848++;
                            if ( v850 != v851 )
                              goto LABEL_1369;
                            v847 = (unsigned int)(v847 - 8);
                          }
                          while ( (unsigned int)v847 >= 8 );
                          if ( !(_DWORD)v847 )
                            break;
                          while ( 1 )
                          {
                            v842 = *(unsigned __int8 *)v849;
                            v849 = (unsigned int *)((char *)v849 + 1);
                            v852 = *(unsigned __int8 *)v848;
                            v848 = (__int64 *)((char *)v848 + 1);
                            if ( v842 != v852 )
                              break;
                            v71 = (_DWORD)v847 == 1;
                            v847 = (unsigned int)(v847 - 1);
                            if ( v71 )
                              goto LABEL_1370;
                          }
LABEL_1369:
                          v844 += 6;
                        }
                        while ( (unsigned __int64)v844 < v846 );
LABEL_1370:
                        v18 = (ULONG_PTR)v1560;
                        ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1560[25].Next)(
                          v1560[84].Next,
                          v842,
                          v847,
                          v848);
                        __writecr8(v841);
                        if ( !v845 )
                          goto LABEL_1377;
                        if ( (*(_DWORD *)(v18 + 2452) & 0x10) != 0 && !*(_DWORD *)(v18 + 2296) )
                        {
                          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2320) = *(int *)v56;
                          *(_QWORD *)(v18 + 2328) = 1LL;
                          *(_DWORD *)(v18 + 2296) = 1;
                          sub_14036B3BC(v18, 0LL, v853, v854);
                        }
                        if ( *((_QWORD *)v56 + 3) == 1LL )
                        {
                          i7 = 0;
                        }
                        else
                        {
LABEL_1377:
                          i7 = 0;
                          if ( v844 == (unsigned int *)v846 && !*(_DWORD *)(v18 + 2296) )
                          {
                            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v18 + 2320) = *(int *)v56;
                            *(_QWORD *)(v18 + 2328) = v844;
                            *(_DWORD *)(v18 + 2296) = 1;
                            sub_14036B3BC(v18, 0LL, v853, v854);
                          }
                        }
                        v855 = *(_QWORD *)(v18 + 1344);
                        v856 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64))(v18 + 336))(v855);
                        v857 = 0LL;
                        v858 = **(unsigned int ***)(v18 + 1552);
                        v859 = v858 + 4;
                        i1 = (unsigned __int64)&v858[6 * *v858 + 4];
                        while ( 1 )
                        {
                          v859 += 6;
                          if ( (unsigned __int64)v859 >= i1 )
                            break;
                          v860 = *((_QWORD *)v859 + 1);
                          if ( v860 < v857 )
                            break;
                          if ( (v860 & 0xFFFFFFFFFFFFF000uLL) != v860 )
                            break;
                          v861 = v860 + v859[4];
                          if ( v861 <= v860 || v861 == v857 )
                            break;
                          v857 = v860 + v859[4];
                        }
                        (*(void (__fastcall **)(_QWORD))(v18 + 400))(*(_QWORD *)(v18 + 1344));
                        __writecr8(v856);
                        if ( v859 == (unsigned int *)i1 || *(_DWORD *)(v18 + 2296) )
                          goto LABEL_181;
                        *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v18 + 2320) = *(int *)v56;
                        *(_QWORD *)(v18 + 2328) = v859;
LABEL_249:
                        *(_DWORD *)(v18 + 2296) = 1;
                        goto LABEL_250;
                      }
                    }
LABEL_1356:
                    __writecr8(v836);
                    v56 = v1559;
                  }
                }
                v838 = *(_DWORD *)(v18 + 2296);
                v25 = *((unsigned int *)v56 + 5);
                if ( !v838 )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v25 ^ v830;
                  v838 = *(_DWORD *)(v18 + 2296);
                }
                v839 = *((_QWORD *)v56 + 1);
                if ( !v838 )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v56;
                  *(_QWORD *)(v18 + 2328) = v839;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v826, v815);
                }
                goto LABEL_1361;
              }
              goto LABEL_2311;
            }
            if ( (*((_DWORD *)v56 + 10) & 1) != 0 && (!*(_QWORD *)(v18 + 2432) || (*(_DWORD *)(v18 + 2452) & 4) != 0) )
              goto LABEL_1722;
            if ( (*((_DWORD *)v56 + 10) & 1) != 0 )
            {
              v862 = *(_DWORD *)(v18 + 2452);
              v863 = v862;
              if ( *(_DWORD *)(v18 + 2084) )
              {
                if ( (((unsigned __int8)v862 ^ (unsigned __int8)(v862 >> 3)) & 4) != 0 )
                  goto LABEL_1722;
              }
              else
              {
                v863 = v862 ^ ((unsigned __int8)v862 ^ (unsigned __int8)(8 * v862)) & 0x20;
                *(_DWORD *)(v18 + 2452) = v863;
              }
              if ( !*(_QWORD *)(v18 + 2432) )
                goto LABEL_1442;
              LOBYTE(v864) = v863;
              if ( !*(_DWORD *)(v18 + 2084) )
              {
                v864 = v863 ^ ((unsigned __int8)v863 ^ (unsigned __int8)(8 * v863)) & 0x20;
                *(_DWORD *)(v18 + 2452) = v864;
                goto LABEL_1400;
              }
              if ( (((unsigned __int8)v863 ^ (unsigned __int8)(v863 >> 3)) & 4) != 0 )
              {
LABEL_1442:
                *(_DWORD *)(v18 + 2084) = 0;
                goto LABEL_1479;
              }
LABEL_1400:
              if ( (v864 & 4) != 0 )
              {
                v865 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v866 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
                while ( v866 )
                {
                  --v866;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v18 + 688))(v865)
                    && !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v865;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v55, v54);
                  }
                  v865 += 4096LL;
                  *(_DWORD *)(v18 + 2088) += 256;
                }
                goto LABEL_1479;
              }
              v867 = (const char *)*((_QWORD *)v56 + 1);
              v868 = *((unsigned int *)v56 + 4);
              v54 = (unsigned __int64)v867;
              *(_DWORD *)(v18 + 2088) += v868;
              v869 = v867;
              v870 = *(_DWORD *)(v18 + 2068);
              for ( m = *(_QWORD *)(v18 + 2072); v869 < &v867[v868]; v869 += 64 )
                _mm_prefetch(v869, 0);
              v872 = *(_QWORD *)(v18 + 2072);
              v873 = (unsigned int)v868 >> 7;
              if ( (unsigned int)v868 >> 7 )
              {
                do
                {
                  v874 = 8LL;
                  do
                  {
                    v875 = v872 ^ *(_QWORD *)v54;
                    v876 = *(_QWORD *)(v54 + 8);
                    v54 += 16LL;
                    v872 = __ROL8__(__ROL8__(v875, v870) ^ v876, v870);
                    --v874;
                  }
                  while ( v874 );
                  v877 = __ROL8__(m ^ (v54 - (_QWORD)v867), 17) ^ m ^ (v54 - (_QWORD)v867);
                  v1699 = (v877 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v870 = ((unsigned __int8)(v1699 ^ v877) ^ (unsigned __int8)v870) & 0x3F;
                  if ( !v870 )
                    LOBYTE(v870) = 1;
                  --v873;
                }
                while ( v873 );
                v18 = (ULONG_PTR)v1560;
              }
              v55 = v868 & 0x7F;
              if ( (unsigned int)v55 >= 8 )
              {
                v878 = (unsigned __int64)(unsigned int)v55 >> 3;
                do
                {
                  v872 = __ROL8__(*(_QWORD *)v54 ^ v872, v870);
                  v54 += 8LL;
                  v55 = (unsigned int)(v55 - 8);
                  --v878;
                }
                while ( v878 );
              }
              for ( ; (_DWORD)v55; v55 = (unsigned int)(v55 - 1) )
              {
                v879 = *(unsigned __int8 *)v54++;
                v872 = __ROL8__(v879 ^ v872, v870);
              }
              for ( n = v872; ; LODWORD(v872) = n ^ v872 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v881 = *((_DWORD *)v56 + 5);
              v882 = v872 & 0x7FFFFFFF;
              if ( v882 != v881 )
              {
                v883 = *((unsigned int *)v56 + 4);
                v55 = *((_QWORD *)v56 + 1);
                if ( *((_DWORD *)v56 + 4) )
                {
                  v54 = 64LL;
                  if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
                  {
                    v884 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v885 = v55 & 0xFFFFFFFFFFFFF000uLL;
                    v886 = (v55 + v883 - 1) | 0xFFF;
                    v887 = (v55 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v888 = v884;
                      while ( 1 )
                      {
                        v889 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(v885, 0LL);
                        if ( v889 != -1073741267 )
                          break;
                        if ( v884 > 1u )
                          goto LABEL_1434;
                        v888 = v884;
                        __writecr8(v884);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v889 < 0 )
                        break;
LABEL_1434:
                      v885 += 4096LL;
                      v887 += 4096LL;
                      if ( v887 == v886 )
                        goto LABEL_1435;
                    }
                    __writecr8(v888);
                    v56 = v1559;
                    i7 = 0;
                    v881 = *((_DWORD *)v1559 + 5);
                  }
                }
                v890 = *(_DWORD *)(v18 + 2296);
                if ( !v890 )
                {
                  v891 = v881 ^ (unsigned __int64)v882;
                  goto LABEL_1439;
                }
                goto LABEL_1440;
              }
LABEL_1479:
              LODWORD(i1) = -1849117464;
            }
            else
            {
              v893 = (const char *)*((_QWORD *)v56 + 1);
              v894 = *((unsigned int *)v56 + 4);
              v54 = (unsigned __int64)v893;
              *(_DWORD *)(v18 + 2088) += v894;
              v895 = v893;
              v896 = *(_DWORD *)(v18 + 2068);
              for ( ii = *(_QWORD *)(v18 + 2072); v895 < &v893[v894]; v895 += 64 )
                _mm_prefetch(v895, 0);
              v898 = *(_QWORD *)(v18 + 2072);
              v899 = (unsigned int)v894 >> 7;
              if ( (unsigned int)v894 >> 7 )
              {
                do
                {
                  v900 = 8LL;
                  do
                  {
                    v901 = v898 ^ *(_QWORD *)v54;
                    v902 = *(_QWORD *)(v54 + 8);
                    v54 += 16LL;
                    v898 = __ROL8__(__ROL8__(v901, v896) ^ v902, v896);
                    --v900;
                  }
                  while ( v900 );
                  v903 = __ROL8__(ii ^ (v54 - (_QWORD)v893), 17) ^ ii ^ (v54 - (_QWORD)v893);
                  v1700 = (v903 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v896 = ((unsigned __int8)(v1700 ^ v903) ^ (unsigned __int8)v896) & 0x3F;
                  if ( !v896 )
                    LOBYTE(v896) = 1;
                  --v899;
                }
                while ( v899 );
                v18 = (ULONG_PTR)v1560;
              }
              v55 = v894 & 0x7F;
              if ( (unsigned int)v55 >= 8 )
              {
                v904 = (unsigned __int64)(unsigned int)v55 >> 3;
                do
                {
                  v898 = __ROL8__(*(_QWORD *)v54 ^ v898, v896);
                  v54 += 8LL;
                  v55 = (unsigned int)(v55 - 8);
                  --v904;
                }
                while ( v904 );
              }
              for ( ; (_DWORD)v55; v55 = (unsigned int)(v55 - 1) )
              {
                v905 = *(unsigned __int8 *)v54++;
                v898 = __ROL8__(v905 ^ v898, v896);
              }
              for ( jj = v898; ; LODWORD(v898) = jj ^ v898 )
              {
                jj >>= 31;
                if ( !jj )
                  break;
              }
              v907 = v898 & 0x7FFFFFFF;
              if ( v907 == *((_DWORD *)v56 + 5) )
              {
                i7 = 0;
                goto LABEL_1479;
              }
              if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
                i7 = 1;
              v908 = *((unsigned int *)v56 + 4);
              v909 = *((_QWORD *)v56 + 1);
              if ( *((_DWORD *)v56 + 4) )
              {
                v55 = 64LL;
                if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
                {
                  v910 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v911 = v909 & 0xFFFFFFFFFFFFF000uLL;
                  v1774 = (v909 + v908 - 1) | 0xFFF;
                  v912 = (v909 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v888 = v910;
                    while ( 1 )
                    {
                      v913 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v18 + 1128))(
                               v911,
                               0LL,
                               v55,
                               v54);
                      if ( v913 != -1073741267 )
                        break;
                      if ( i7 )
                        goto LABEL_1475;
                      if ( v910 > 1u )
                        goto LABEL_1473;
                      v888 = v910;
                      __writecr8(v910);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v913 < 0 )
                      break;
LABEL_1473:
                    v911 += 4096LL;
                    v912 += 4096LL;
                    if ( v912 == v1774 )
                    {
LABEL_1435:
                      __writecr8(v888);
                      v56 = v1559;
                      i7 = 0;
                      goto LABEL_1479;
                    }
                  }
LABEL_1475:
                  __writecr8(v888);
                  v56 = v1559;
                }
              }
              v890 = *(_DWORD *)(v18 + 2296);
              i7 = 0;
              if ( !v890 )
              {
                v891 = *((unsigned int *)v56 + 5) ^ (unsigned __int64)v907;
LABEL_1439:
                *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v891;
                v890 = *(_DWORD *)(v18 + 2296);
              }
LABEL_1440:
              v892 = *((_QWORD *)v56 + 1);
              LODWORD(i1) = -1849117464;
              if ( !v890 )
              {
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = *(int *)v56;
                *(_QWORD *)(v18 + 2328) = v892;
                *(_DWORD *)(v18 + 2296) = 1;
                sub_14036B3BC(v18, 0LL, v55, v54);
              }
            }
            v914 = *((_DWORD *)v56 + 10);
            if ( (v914 & 2) == 0 )
              goto LABEL_181;
            v915 = *((_QWORD *)v56 + 1);
            if ( (v914 & 4) != 0 )
            {
              v916 = *((_QWORD *)v56 + 3);
              v917 = **(_QWORD **)(v915 + 112);
              if ( v917 != v916 )
              {
                v918 = *(_QWORD *)(v18 + 1424);
                *(_QWORD *)v918 = v917;
                *(_DWORD *)(v918 + 16) = 256;
                v919 = *(_DWORD *)(v18 + 2296);
                if ( !v919 )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v917 ^ v916;
                  v919 = *(_DWORD *)(v18 + 2296);
                }
                v920 = *(_QWORD *)(v915 + 112);
                if ( !v919 )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v56;
                  *(_QWORD *)(v18 + 2328) = v920;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v55, v54);
                }
              }
            }
            if ( (*((_DWORD *)v56 + 10) & 8) == 0 )
              goto LABEL_181;
            v921 = *((_QWORD *)v56 + 4);
            v922 = **(_QWORD **)(v915 + 120);
            if ( v922 == v921 )
              goto LABEL_181;
            v923 = *(_QWORD *)(v18 + 1424);
            *(_QWORD *)v923 = v922;
            *(_DWORD *)(v923 + 16) = 256;
            v924 = *(_DWORD *)(v18 + 2296);
            if ( !v924 )
            {
              *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v922 ^ v921;
              v924 = *(_DWORD *)(v18 + 2296);
            }
            v925 = *(_QWORD *)(v915 + 120);
            if ( v924 )
              goto LABEL_181;
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *(int *)v56;
            *(_QWORD *)(v18 + 2328) = v925;
            goto LABEL_1313;
          }
          if ( (*(_DWORD *)(v18 + 2096) & 1) == 0 )
            goto LABEL_181;
          if ( !*(_QWORD *)(v18 + 2432) || (*(_DWORD *)(v18 + 2452) & 4) != 0 )
          {
            v927 = 0LL;
          }
          else
          {
            v926 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v18 + 976))(26LL, &v1649, 0LL);
            v927 = v1649;
            if ( v926 < 0 )
              v927 = 0LL;
          }
          v1561 = v927;
          v928 = 0;
          v1562 = 0;
          v929 = 0LL;
          while ( 2 )
          {
            v975 = (*(__int64 (__fastcall **)(__int64))(v18 + 944))(v929);
            v976 = v975;
            if ( !v975 )
            {
              v977 = *(_QWORD *)(v18 + 1248);
              if ( (*(int (__fastcall **)(__int64))(v18 + 928))(v977) >= 0 )
              {
                v978 = (*(__int64 (__fastcall **)(__int64))(v18 + 992))(v977);
                v1590 = v978;
                v979 = (*(__int64 (__fastcall **)(__int64, char *))(v18 + 1000))(v977, v1567);
                v1777 = (*(__int64 (__fastcall **)(__int64))(v18 + 1008))(v977);
                if ( v978 == 114
                  || *(_DWORD *)(v18 + 2296)
                  || (*(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v978 ^ 0x72LL, *(_DWORD *)(v18 + 2296)) )
                {
                  v982 = (int *)v1559;
                }
                else
                {
                  v982 = (int *)v1559;
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = (char *)v982 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *v982;
                  *(_QWORD *)(v18 + 2328) = v977;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v980, v981);
                }
                v983 = 0;
                if ( (v978 & 7) == 1 )
                {
                  v983 = 48;
                }
                else if ( (v978 & 7) == 2 )
                {
                  v983 = 16;
                  LOBYTE(i7) = 16;
                }
                else if ( (v978 & 7) != 0 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = (char *)v982 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *v982;
                  *(_QWORD *)(v18 + 2328) = v977;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v980, v981);
                }
                v984 = *(_QWORD *)(v18 + 1480);
                v985 = (unsigned __int64)v978 >> 4;
                v986 = v983 | *(_BYTE *)(v984 + 2 * v985);
                v987 = (int *)v1559;
                if ( v986 != v979 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = (char *)v987 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *v987;
                  *(_QWORD *)(v18 + 2328) = v977;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v980, v981);
                }
                v988 = i7 | *(_BYTE *)(v984 + 2 * v985 + 1);
                i7 = 0;
                if ( v988 != v1567[0] && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = (char *)v987 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *v987;
                  *(_QWORD *)(v18 + 2328) = v977;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v980, v981);
                }
                if ( v977 == *(_QWORD *)(v18 + 1248) )
                  v989 = 0LL;
                else
                  v989 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v18 + 984))(v977, 1LL);
                v1563 = (ULONG_PTR)v989;
                if ( v989 )
                {
                  v990 = *v989;
                  v991 = v989;
                  if ( *v989 )
                  {
                    v992 = v1777;
                    v993 = v1559;
                    do
                    {
                      *v991 = v990 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v18 + 480))();
                      v994 = (unsigned __int8)v1567[0];
                      v995 = v991[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v995 == v992 )
                        v994 = v979;
                      v996 = v991[1] >> 6;
                      LOBYTE(v996) = v996 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v18 + 1016))(v996, v994) )
                      {
                        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
                        {
                          v998 = *(_QWORD **)(v18 + 2688);
                          v999 = 48;
                          v997 = 6LL;
                          do
                          {
                            v999 -= 8;
                            *v998 = *(_QWORD *)v993;
                            v993 += 8;
                            ++v998;
                            --v997;
                          }
                          while ( v997 );
                          if ( v999 )
                          {
                            do
                            {
                              v1000 = *v993++;
                              *(_BYTE *)v998 = v1000;
                              v998 = (_QWORD *)((char *)v998 + 1);
                              --v999;
                            }
                            while ( v999 );
                            v992 = v1777;
                          }
                          v993 = *(char **)(v18 + 2688);
                        }
                        *((_QWORD *)v993 + 3) = v995;
                        *((_QWORD *)v993 + 4) = *v991;
                        v993[40] = ((unsigned __int64)*((unsigned int *)v991 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v18 + 2296) )
                        {
                          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2312) = v993 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2320) = *(int *)v993;
                          *(_QWORD *)(v18 + 2328) = v977;
                          *(_DWORD *)(v18 + 2296) = 1;
                          sub_14036B3BC(v18, 0LL, v997, 0LL);
                        }
                      }
                      v991 += 6;
                      v990 = *v991;
                    }
                    while ( *v991 );
                    v989 = (unsigned __int64 *)v1563;
                    i7 = 0;
                  }
                  (*(void (__fastcall **)(unsigned __int64 *))(v18 + 256))(v989);
                }
                (*(void (__fastcall **)(__int64))(v18 + 936))(v977);
                v928 = v1562;
                *(_DWORD *)(v18 + 2088) += 0x8000;
              }
              if ( v1561 )
                (*(void (**)(void))(v18 + 480))();
              LODWORD(i1) = v928 << 8;
              goto LABEL_1631;
            }
            if ( v927 == v975 )
            {
              v930 = v56;
              if ( (*(int (__fastcall **)(__int64))(v18 + 928))(v975) >= 0 )
              {
                v931 = (*(__int64 (__fastcall **)(__int64))(v18 + 992))(v976);
                v1592 = v931;
                v1775 = (*(__int64 (__fastcall **)(__int64, char *))(v18 + 1000))(v976, v1570);
                v1574 = (*(__int64 (__fastcall **)(__int64))(v18 + 1008))(v976);
                if ( v931 != 97 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v931 ^ 0x61LL;
                  if ( !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v976;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v932, v933);
                  }
                }
                v934 = 0;
                v935 = 0;
                if ( (v931 & 7) == 1 )
                {
                  v934 = 48;
                }
                else if ( (v931 & 7) == 2 )
                {
                  v934 = 16;
                  v935 = 16;
                }
                else if ( (v931 & 7) != 0 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v930 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v1559;
                  *(_QWORD *)(v18 + 2328) = v976;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v932, v933);
                }
                v936 = *(_QWORD *)(v18 + 1480);
                v937 = (unsigned __int64)v931 >> 4;
                v71 = (*(_BYTE *)(v936 + 2 * v937) | (unsigned __int8)v934) == v1775;
                v938 = v1559;
                if ( !v71 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v930 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v938;
                  *(_QWORD *)(v18 + 2328) = v976;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v932, v933);
                }
                v939 = *(_BYTE *)(v936 + 2 * v937 + 1);
                i7 = 0;
                if ( ((unsigned __int8)v935 | v939) != v1570[0] && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v930 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v938;
                  *(_QWORD *)(v18 + 2328) = v976;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v932, v933);
                }
                if ( v976 == *(_QWORD *)(v18 + 1248) )
                  v940 = 0LL;
                else
                  v940 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v18 + 984))(v976, 1LL);
                v1563 = (ULONG_PTR)v940;
                if ( v940 )
                {
                  v941 = *v940;
                  v942 = v940;
                  if ( *v940 )
                  {
                    v943 = v1775;
                    v944 = v1574;
                    do
                    {
                      *v942 = v941 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v18 + 480))();
                      v945 = (unsigned __int8)v1570[0];
                      v946 = v942[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v946 == v944 )
                        v945 = v943;
                      v947 = v942[1] >> 6;
                      LOBYTE(v947) = v947 & 0xF;
                      if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v18 + 1016))(v947, v945) )
                      {
                        i7 = 0;
                      }
                      else
                      {
                        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
                        {
                          v950 = *(_QWORD **)(v18 + 2688);
                          v951 = 48;
                          v948 = 6LL;
                          do
                          {
                            v951 -= 8;
                            *v950 = *(_QWORD *)v930;
                            v930 += 8;
                            ++v950;
                            --v948;
                          }
                          while ( v948 );
                          if ( v951 )
                          {
                            do
                            {
                              v952 = *v930++;
                              *(_BYTE *)v950 = v952;
                              v950 = (_QWORD *)((char *)v950 + 1);
                              --v951;
                            }
                            while ( v951 );
                            v943 = v1775;
                          }
                          v930 = *(char **)(v18 + 2688);
                        }
                        *((_QWORD *)v930 + 3) = v946;
                        i7 = 0;
                        *((_QWORD *)v930 + 4) = *v942;
                        v930[40] = ((unsigned __int64)*((unsigned int *)v942 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v18 + 2296) )
                        {
                          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2312) = v930 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2320) = *(int *)v930;
                          *(_QWORD *)(v18 + 2328) = v976;
                          *(_DWORD *)(v18 + 2296) = 1;
                          sub_14036B3BC(v18, 0LL, v948, v949);
                        }
                      }
                      v942 += 6;
                      v941 = *v942;
                    }
                    while ( *v942 );
                    goto LABEL_1582;
                  }
                  goto LABEL_1583;
                }
                goto LABEL_1584;
              }
            }
            else if ( (*(unsigned int (__fastcall **)(__int64))(v18 + 968))(v975) )
            {
              v953 = v56;
              if ( (*(int (__fastcall **)(__int64))(v18 + 928))(v976) >= 0 )
              {
                v954 = (*(__int64 (__fastcall **)(__int64))(v18 + 992))(v976);
                v1591 = v954;
                v1776 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v18 + 1000))(v976, &v1566);
                v1574 = (*(__int64 (__fastcall **)(__int64))(v18 + 1008))(v976);
                if ( v954 != 97 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v954 ^ 0x61LL;
                  if ( !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v976;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v955, v956);
                  }
                }
                v957 = 0;
                v958 = 0;
                if ( (v954 & 7) == 1 )
                {
                  v957 = 48;
                }
                else if ( (v954 & 7) == 2 )
                {
                  v957 = 16;
                  v958 = 16;
                }
                else if ( (v954 & 7) != 0 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v953 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v1559;
                  *(_QWORD *)(v18 + 2328) = v976;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v955, v956);
                }
                v959 = *(_QWORD *)(v18 + 1480);
                v960 = (unsigned __int64)v954 >> 4;
                v71 = (*(_BYTE *)(v959 + 2 * v960) | (unsigned __int8)v957) == v1776;
                v961 = v1559;
                if ( !v71 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v953 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v961;
                  *(_QWORD *)(v18 + 2328) = v976;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v955, v956);
                }
                v962 = *(_BYTE *)(v959 + 2 * v960 + 1);
                i7 = 0;
                if ( ((unsigned __int8)v958 | v962) != v1566 && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v953 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v961;
                  *(_QWORD *)(v18 + 2328) = v976;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v955, v956);
                }
                if ( v976 == *(_QWORD *)(v18 + 1248) )
                  v940 = 0LL;
                else
                  v940 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v18 + 984))(v976, 1LL);
                v1563 = (ULONG_PTR)v940;
                if ( v940 )
                {
                  v963 = *v940;
                  v964 = v940;
                  if ( *v940 )
                  {
                    v965 = v1776;
                    v966 = v1574;
                    do
                    {
                      *v964 = v963 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v18 + 480))();
                      v967 = v1566;
                      v968 = v964[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v968 == v966 )
                        v967 = v965;
                      v969 = v964[1] >> 6;
                      LOBYTE(v969) = v969 & 0xF;
                      if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v18 + 1016))(v969, v967) )
                      {
                        i7 = 0;
                      }
                      else
                      {
                        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
                        {
                          v972 = *(_QWORD **)(v18 + 2688);
                          v973 = 48;
                          v970 = 6LL;
                          do
                          {
                            v973 -= 8;
                            *v972 = *(_QWORD *)v953;
                            v953 += 8;
                            ++v972;
                            --v970;
                          }
                          while ( v970 );
                          if ( v973 )
                          {
                            do
                            {
                              v974 = *v953++;
                              *(_BYTE *)v972 = v974;
                              v972 = (_QWORD *)((char *)v972 + 1);
                              --v973;
                            }
                            while ( v973 );
                            v965 = v1776;
                          }
                          v953 = *(char **)(v18 + 2688);
                        }
                        *((_QWORD *)v953 + 3) = v968;
                        i7 = 0;
                        *((_QWORD *)v953 + 4) = *v964;
                        v953[40] = ((unsigned __int64)*((unsigned int *)v964 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v18 + 2296) )
                        {
                          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2312) = v953 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2320) = *(int *)v953;
                          *(_QWORD *)(v18 + 2328) = v976;
                          *(_DWORD *)(v18 + 2296) = 1;
                          sub_14036B3BC(v18, 0LL, v970, v971);
                        }
                      }
                      v964 += 6;
                      v963 = *v964;
                    }
                    while ( *v964 );
LABEL_1582:
                    v940 = (unsigned __int64 *)v1563;
                  }
LABEL_1583:
                  (*(void (__fastcall **)(unsigned __int64 *))(v18 + 256))(v940);
                }
LABEL_1584:
                (*(void (__fastcall **)(__int64))(v18 + 936))(v976);
                v56 = v1559;
                *(_DWORD *)(v18 + 2088) += 0x8000;
                v928 = v1562;
                v927 = v1561;
              }
            }
            ++v928;
            v929 = v976;
            v1562 = v928;
            continue;
          }
        }
        if ( (v56[42] & 1) != 0 )
        {
          if ( !*(_QWORD *)(v18 + 2432) )
            goto LABEL_1722;
          v1001 = *(_DWORD *)(v18 + 2452);
          if ( (v1001 & 4) != 0 )
            goto LABEL_1722;
          if ( *(_DWORD *)(v18 + 2084) )
          {
            if ( (v1001 & 0x20) != 0 )
              goto LABEL_1722;
          }
          else
          {
            *(_DWORD *)(v18 + 2452) = v1001 ^ ((unsigned __int8)v1001 ^ (unsigned __int8)(8 * v1001)) & 0x20;
          }
        }
        v1002 = *(unsigned int *)(v18 + 2084);
        v1003 = *((unsigned int *)v56 + 9);
        v1581 = *((_QWORD *)v56 + 1);
        v1004 = v1581 + 12 * v1002;
        v1005 = (unsigned int *)(v1004 + 12);
        v1563 = v1004;
        v1571 = v1004 + 12;
        v1006 = v1003 / 0xC;
        v1577 = v1003 / 0xC;
        LODWORD(i1) = v1003 / 0xC - 1;
        v1778 = i1;
        v1575 = (unsigned int *)(v1581 + 12LL * (unsigned int)(v1003 / 0xC));
        v1007 = (unsigned __int64)&v56[(((unsigned int)i1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
        v1008 = &v56[v1002 + 48];
        v1009 = *((unsigned __int16 *)v56 + 20);
        v1561 = (__int64)v1008;
        v1565 = v1007;
        v1564 = v1007 + 24 * v1009;
        if ( (unsigned int)v1002 >= (unsigned int)i1 )
          goto LABEL_1675;
        while ( 2 )
        {
          if ( *v1008 < 0 )
            goto LABEL_1672;
          v1010 = *(_DWORD *)(v1004 + 4);
          v1011 = *((_QWORD *)v56 + 3) + v1010;
          v1012 = *v1005 - v1010;
          *(_DWORD *)(v18 + 2088) += v1012;
          v1013 = (_QWORD *)v1011;
          v1014 = *(_DWORD *)(v18 + 2068);
          v1015 = (const char *)v1011;
          v1016 = *(_QWORD *)(v18 + 2072);
          v1017 = (unsigned int)v1012;
          v1572 = (_BYTE *)v1011;
          v1574 = (unsigned int)v1012;
          if ( v1011 < v1012 + v1011 )
          {
            do
            {
              _mm_prefetch(v1015, 0);
              v1015 += 64;
            }
            while ( (unsigned __int64)v1015 < v1012 + v1011 );
          }
          v1018 = v1016;
          v1019 = (unsigned int)v1012 >> 7;
          if ( (unsigned int)v1012 >> 7 )
          {
            do
            {
              v1020 = 8LL;
              do
              {
                v1021 = v1013[1] ^ __ROL8__(*v1013 ^ v1018, v1014);
                v1013 += 2;
                v1018 = __ROL8__(v1021, v1014);
                --v1020;
              }
              while ( v1020 );
              v1022 = (__ROL8__(v1016 ^ ((unsigned __int64)v1013 - v1011), 17) ^ v1016 ^ ((unsigned __int64)v1013 - v1011))
                    * (unsigned __int128)0x7010008004002001uLL;
              v1701 = *((_QWORD *)&v1022 + 1);
              v1014 = (BYTE8(v1022) ^ (unsigned __int8)(v1022 ^ v1014)) & 0x3F;
              if ( !v1014 )
                LOBYTE(v1014) = 1;
              --v1019;
            }
            while ( v1019 );
            v18 = (ULONG_PTR)v1560;
            v1017 = v1574;
            v1008 = (char *)v1561;
          }
          v1023 = v1012 & 0x7F;
          if ( (unsigned int)v1023 >= 8 )
          {
            v1024 = (unsigned __int64)(unsigned int)v1023 >> 3;
            do
            {
              v1018 = __ROL8__(*v1013++ ^ v1018, v1014);
              v1023 = (unsigned int)(v1023 - 8);
              --v1024;
            }
            while ( v1024 );
          }
          if ( (_DWORD)v1023 )
          {
            do
            {
              v1025 = *(unsigned __int8 *)v1013;
              v1013 = (_QWORD *)((char *)v1013 + 1);
              v1018 = __ROL8__(v1025 ^ v1018, v1014);
              v1023 = (unsigned int)(v1023 - 1);
            }
            while ( (_DWORD)v1023 );
            v18 = (ULONG_PTR)v1560;
          }
          for ( kk = v1018; ; LOBYTE(v1018) = kk ^ v1018 )
          {
            kk >>= 7;
            if ( !kk )
              break;
          }
          v1027 = *v1008;
          v1028 = v1018 & 0x7F;
          if ( v1028 == (*v1008 & 0x7F) )
          {
LABEL_1669:
            i7 = 0;
          }
          else
          {
            if ( v1017 && (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
            {
              v1029 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1030 = v1011 & 0xFFFFFFFFFFFFF000uLL;
              v1031 = (v1017 - 1 + v1011) | 0xFFF;
              v1032 = v1030 - 1;
              while ( 1 )
              {
                v1033 = v1029;
                while ( 1 )
                {
                  v1034 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(v1030, 0LL);
                  if ( v1034 != -1073741267 )
                    break;
                  if ( v1029 > 1u )
                    goto LABEL_1667;
                  v1033 = v1029;
                  __writecr8(v1029);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1034 < 0 )
                  break;
LABEL_1667:
                v1030 += 4096LL;
                v1032 += 4096LL;
                if ( v1032 == v1031 )
                {
                  __writecr8(v1033);
                  goto LABEL_1669;
                }
              }
              __writecr8(v1033);
              v1011 = (unsigned __int64)v1572;
              v1027 = *(_BYTE *)v1561;
            }
            i7 = 0;
            if ( !*(_DWORD *)(v18 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1027 & 0x7F ^ (unsigned __int64)v1028;
              if ( !*(_DWORD *)(v18 + 2296) )
              {
                v56 = v1559;
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = *(int *)v56;
                *(_QWORD *)(v18 + 2328) = v1011;
                *(_DWORD *)(v18 + 2296) = 1;
                sub_14036B3BC(v18, 0LL, v1018, v1023);
LABEL_1671:
                v1004 = v1563;
                *(_DWORD *)(v18 + 2088) += 64;
                v1008 = (char *)v1561;
                v1005 = (unsigned int *)v1571;
LABEL_1672:
                ++v1008;
                v1004 += 12LL;
                v1561 = (__int64)v1008;
                v1005 += 3;
                v1563 = v1004;
                v1571 = (unsigned __int64)v1005;
                if ( v1005 >= v1575 || *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
                {
                  v1035 = v1004 - v1581;
                  LODWORD(i1) = v1778;
                  v1007 = v1565;
                  LODWORD(v1006) = v1577;
                  *(_DWORD *)(v18 + 2084) = v1035 / 12;
                  LODWORD(v1002) = v1035 / 12;
                  if ( (unsigned int)v1002 < v1778 )
                    goto LABEL_181;
LABEL_1675:
                  if ( *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
                    goto LABEL_181;
                  v1036 = v1007 + 24LL * (unsigned int)(v1002 - v1006 + 1);
                  v1563 = v1036;
                  while ( 1 )
                  {
                    v1037 = (int *)(v1036 + 8);
                    v1038 = 2LL;
                    v1561 = 2LL;
                    v1779 = (int *)(v1036 + 8);
                    do
                    {
                      if ( *v1037 < 0 )
                        goto LABEL_1715;
                      v1039 = *((_QWORD *)v56 + 3) + (unsigned int)*(v1037 - 2);
                      v1040 = (unsigned int)(*(v1037 - 1) - *(v1037 - 2));
                      *(_DWORD *)(v18 + 2088) += v1040;
                      v1041 = (_QWORD *)v1039;
                      v1042 = *(_DWORD *)(v18 + 2068);
                      v1043 = (const char *)v1039;
                      v1044 = *(_QWORD *)(v18 + 2072);
                      v1045 = (unsigned int)v1040;
                      v1571 = v1039;
                      v1574 = (unsigned int)v1040;
                      if ( v1039 < v1040 + v1039 )
                      {
                        do
                        {
                          _mm_prefetch(v1043, 0);
                          v1043 += 64;
                        }
                        while ( (unsigned __int64)v1043 < v1040 + v1039 );
                      }
                      v1046 = v1044;
                      v1047 = (unsigned int)v1040 >> 7;
                      if ( (unsigned int)v1040 >> 7 )
                      {
                        do
                        {
                          v1048 = 8LL;
                          do
                          {
                            v1049 = v1041[1] ^ __ROL8__(*v1041 ^ v1046, v1042);
                            v1041 += 2;
                            v1046 = __ROL8__(v1049, v1042);
                            --v1048;
                          }
                          while ( v1048 );
                          v1050 = (__ROL8__(v1044 ^ ((unsigned __int64)v1041 - v1039), 17) ^ v1044 ^ ((unsigned __int64)v1041 - v1039))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v1702 = *((_QWORD *)&v1050 + 1);
                          v1042 = (BYTE8(v1050) ^ (unsigned __int8)(v1050 ^ v1042)) & 0x3F;
                          if ( !v1042 )
                            LOBYTE(v1042) = 1;
                          --v1047;
                        }
                        while ( v1047 );
                        v18 = (ULONG_PTR)v1560;
                        v1045 = v1574;
                        v1037 = v1779;
                        v1038 = v1561;
                      }
                      v1051 = v1040 & 0x7F;
                      LODWORD(i1) = 1;
                      if ( (unsigned int)v1051 >= 8 )
                      {
                        v1052 = (unsigned __int64)(unsigned int)v1051 >> 3;
                        do
                        {
                          v1046 = __ROL8__(*v1041++ ^ v1046, v1042);
                          v1051 = (unsigned int)(v1051 - 8);
                          --v1052;
                        }
                        while ( v1052 );
                      }
                      if ( (_DWORD)v1051 )
                      {
                        do
                        {
                          v1053 = *(unsigned __int8 *)v1041;
                          v1041 = (_QWORD *)((char *)v1041 + 1);
                          v1046 = __ROL8__(v1053 ^ v1046, v1042);
                          v1051 = (unsigned int)(v1051 - 1);
                        }
                        while ( (_DWORD)v1051 );
                        v18 = (ULONG_PTR)v1560;
                      }
                      for ( mm = v1046; ; LODWORD(v1046) = mm ^ v1046 )
                      {
                        mm >>= 31;
                        if ( !mm )
                          break;
                      }
                      v1055 = *v1037;
                      v1056 = v1046 & 0x7FFFFFFF;
                      if ( v1056 == (*v1037 & 0x7FFFFFFF) )
                        goto LABEL_1715;
                      if ( !v1045 )
                        goto LABEL_1711;
                      v1051 = 64LL;
                      if ( (*(_DWORD *)(v18 + 2452) & 0x40) == 0 )
                        goto LABEL_1711;
                      v1057 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      i1 = v1039 & 0xFFFFFFFFFFFFF000uLL;
                      v1058 = (v1039 + v1045 - 1) | 0xFFF;
                      v1059 = (v1039 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      do
                      {
                        v1060 = v1057;
                        while ( 1 )
                        {
                          v1061 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                                    i1,
                                    0LL,
                                    v1051,
                                    v1041);
                          if ( v1061 != -1073741267 )
                            break;
                          if ( v1057 > 1u )
                            goto LABEL_1719;
                          v1060 = v1057;
                          __writecr8(v1057);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1061 < 0 )
                        {
                          __writecr8(v1060);
                          v1037 = v1779;
                          v1039 = v1571;
                          v1038 = v1561;
                          v56 = v1559;
                          v1055 = *v1779;
LABEL_1711:
                          v1062 = v1055;
                          if ( !*(_DWORD *)(v18 + 2296) )
                          {
                            LODWORD(v1062) = v1055 & 0x7FFFFFFF;
                            *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1062 ^ v1056;
                            if ( !*(_DWORD *)(v18 + 2296) )
                            {
                              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v18 + 2320) = *(int *)v56;
                              *(_QWORD *)(v18 + 2328) = v1039;
                              *(_DWORD *)(v18 + 2296) = 1;
                              sub_14036B3BC(v18, 0LL, v1051, v1041);
                              goto LABEL_1714;
                            }
                          }
                          goto LABEL_1715;
                        }
LABEL_1719:
                        i1 += 4096LL;
                        v1059 += 4096LL;
                      }
                      while ( v1059 != v1058 );
                      __writecr8(v1060);
                      v1038 = v1561;
LABEL_1714:
                      v1037 = v1779;
LABEL_1715:
                      v56 = v1559;
                      v1037 += 3;
                      --v1038;
                      v1779 = v1037;
                      v1561 = v1038;
                    }
                    while ( v1038 );
                    v1063 = v1563;
                    ++*(_DWORD *)(v18 + 2084);
                    v1036 = v1063 + 24;
                    v1563 = v1036;
                    if ( v1036 == v1564 )
                    {
                      i7 = 0;
                      goto LABEL_1722;
                    }
                    if ( *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
                      goto LABEL_241;
                  }
                }
                continue;
              }
            }
          }
          break;
        }
        v56 = v1559;
        goto LABEL_1671;
      }
      if ( v78 == 38 )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 416))(v1744, *((unsigned int *)v56 + 11));
        v1511 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v18 + 464))(v1744, v1745);
        __asm { xgetbv }
        v1513 = v1511 | (v1512 << 32);
        (*(void (__fastcall **)(_BYTE *))(v18 + 408))(v1745);
        v1514 = *((_QWORD *)v56 + 4);
        v55 = v1513 & *((_QWORD *)v56 + 3);
        if ( v55 == v1514 )
          goto LABEL_181;
        v107 = *((_QWORD *)v56 + 5);
        if ( *(_DWORD *)(v18 + 2296) )
          goto LABEL_181;
        *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v55 ^ v1514;
        v105 = *(_DWORD *)(v18 + 2296);
        goto LABEL_247;
      }
      if ( v78 <= 42 )
      {
        *(_DWORD *)(v18 + 2088) += *((_DWORD *)v56 + 9);
        v1396 = *((unsigned int *)v56 + 9);
        v1397 = (_QWORD *)(v18 + *((unsigned int *)v56 + 8));
        v1398 = *(_DWORD *)(v18 + 2068);
        v1399 = v1397;
        v1400 = *(_QWORD *)(v18 + 2072);
        v1401 = (const char *)v1397;
        if ( v1397 < (_QWORD *)((char *)v1397 + v1396) )
        {
          do
          {
            _mm_prefetch(v1401, 0);
            v1401 += 64;
          }
          while ( v1401 < (const char *)v1397 + v1396 );
        }
        v55 = *(_QWORD *)(v18 + 2072);
        LODWORD(i1) = (unsigned int)v1396 >> 7;
        if ( (unsigned int)v1396 >> 7 )
        {
          do
          {
            v1402 = 8LL;
            do
            {
              v1403 = v1399[1] ^ __ROL8__(*v1399 ^ v55, v1398);
              v1399 += 2;
              v55 = __ROL8__(v1403, v1398);
              --v1402;
            }
            while ( v1402 );
            v1404 = (__ROL8__(v1400 ^ ((char *)v1399 - (char *)v1397), 17) ^ v1400 ^ (unsigned __int64)((char *)v1399 - (char *)v1397))
                  * (unsigned __int128)0x7010008004002001uLL;
            v1714 = *((_QWORD *)&v1404 + 1);
            v1398 = (BYTE8(v1404) ^ (unsigned __int8)(v1404 ^ v1398)) & 0x3F;
            if ( !v1398 )
              LOBYTE(v1398) = 1;
            LODWORD(i1) = i1 - 1;
          }
          while ( (_DWORD)i1 );
          v18 = (ULONG_PTR)v1560;
        }
        v54 = v1396 & 0x7F;
        if ( (unsigned int)v54 >= 8 )
        {
          v1405 = (unsigned __int64)(unsigned int)v54 >> 3;
          do
          {
            v55 = __ROL8__(*v1399++ ^ v55, v1398);
            v54 = (unsigned int)(v54 - 8);
            --v1405;
          }
          while ( v1405 );
        }
        for ( ; (_DWORD)v54; v54 = (unsigned int)(v54 - 1) )
        {
          v1406 = *(unsigned __int8 *)v1399;
          v1399 = (_QWORD *)((char *)v1399 + 1);
          v55 = __ROL8__(v1406 ^ v55, v1398);
        }
        v1407 = *((_QWORD *)v56 + 3);
        if ( v55 == v1407 )
          goto LABEL_181;
        v1408 = *(_DWORD *)(v18 + 2296);
        if ( !v1408 )
        {
          *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v55 ^ v1407;
          v1408 = *(_DWORD *)(v18 + 2296);
        }
        v1409 = v18 + *((unsigned int *)v56 + 8);
        if ( v1408 )
          goto LABEL_181;
        *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v18 + 2320) = *(int *)v56;
        *(_QWORD *)(v18 + 2328) = v1409;
        goto LABEL_2310;
      }
      if ( v78 == 43 )
        goto LABEL_2116;
      if ( v78 != 44 )
      {
        if ( v78 == 46 )
        {
          if ( (*(_DWORD *)(v18 + 2096) & 1) != 0 )
            goto LABEL_181;
          v1160 = 0;
          v1161 = *(_QWORD *)(v18 + 1352);
          (*(void (**)(void))(v18 + 376))();
          if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 || (v1162 = *(_DWORD *)(v18 + 2384), v1162 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 296))(*(_QWORD *)(v18 + 2560), 0LL);
            v1163 = 0x80;
          }
          else
          {
            v1163 = 1 << v1162;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v18 + 312))(v1161, 0LL);
          if ( v1163 == (char)0x80 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 304))(*(_QWORD *)(v18 + 2560), 0LL);
          }
          else
          {
            v1164 = *(volatile signed __int8 ***)(v18 + 1312);
            v1165 = *v1164;
            if ( *v1164 != (volatile signed __int8 *)v1164 )
            {
              v1166 = ~v1163;
              do
              {
                _InterlockedAnd8(&v1165[*(_QWORD *)(v18 + 1720) - *(_QWORD *)(v18 + 1744)], v1166);
                v1165 = *(volatile signed __int8 **)v1165;
                ++v1160;
              }
              while ( v1165 != (volatile signed __int8 *)v1164 );
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 1352), 0LL);
          (*(void (**)(void))(v18 + 384))();
          LODWORD(i1) = v1160 << 7;
LABEL_1631:
          *(_DWORD *)(v18 + 2088) += i1;
          goto LABEL_181;
        }
        if ( v78 == 47 )
        {
          v1579 = *(_QWORD *)(*(_QWORD *)(v18 + 1704)
                            + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1608))
                            + *(_QWORD *)(v18 + 1672));
          i1 = (*(__int64 (**)(void))(v18 + 1168))();
          if ( i1 == 0xFFFFFFFF )
          {
            v1579 = 0LL;
            v1152 = *(_QWORD *)(v18 + 2440);
            if ( !v1152 )
              goto LABEL_1883;
            v1153 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 1152))(v1152, &v1579);
            v1154 = v1579;
            if ( v1153 < 0 )
              v1154 = 0LL;
            v1579 = v1154;
            if ( !v1154 )
LABEL_1883:
              v1579 = (*(__int64 (__fastcall **)(_QWORD))(v18 + 960))(0LL);
            *(_QWORD *)(v18 + 2440) = 0LL;
            v1155 = 0;
            if ( !v1579 )
              goto LABEL_1891;
            while ( 1 )
            {
              ++v1155;
              if ( (*(int (**)(void))(v18 + 928))() >= 0 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(v18 + 1080))(v1579, v1757);
                i1 = (*(__int64 (**)(void))(v18 + 1168))();
                (*(void (__fastcall **)(_BYTE *))(v18 + 1088))(v1757);
                (*(void (__fastcall **)(__int64))(v18 + 936))(v1579);
                if ( i1 != 0xFFFFFFFF || v1155 > 0x100 )
                  break;
              }
              v1579 = (*(__int64 (__fastcall **)(__int64))(v18 + 960))(v1579);
              if ( !v1579 )
                goto LABEL_1891;
            }
            *(_QWORD *)(v18 + 2440) = (*(__int64 (__fastcall **)(__int64))(v18 + 1160))(v1579);
            (*(void (__fastcall **)(__int64))(v18 + 480))(v1579);
            if ( i1 == 0xFFFFFFFF )
            {
LABEL_1891:
              *(_DWORD *)(v18 + 2088) += v1155 << 12;
              goto LABEL_181;
            }
          }
          if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
          {
            v1156 = *(_QWORD **)(v18 + 2688);
            v1157 = 48;
            v55 = 6LL;
            do
            {
              v1157 -= 8;
              *v1156 = *(_QWORD *)v56;
              v56 += 8;
              ++v1156;
              --v55;
            }
            while ( v55 );
            for ( ; v1157; --v1157 )
            {
              v1158 = *v56++;
              *(_BYTE *)v1156 = v1158;
              v1156 = (_QWORD *)((char *)v1156 + 1);
            }
            v56 = *(char **)(v18 + 2688);
          }
          *((_QWORD *)v56 + 3) = i1;
          v1159 = v1579;
          if ( *(_DWORD *)(v18 + 2296) )
            goto LABEL_181;
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v1159;
          goto LABEL_1237;
        }
        if ( v78 != 48 )
          goto LABEL_2311;
        if ( !*((_DWORD *)v56 + 4) )
          goto LABEL_181;
        if ( (*(_DWORD *)(v18 + 2452) & 0x4000) != 0 )
        {
          v1102 = *(volatile signed __int32 **)(v18 + 1248);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1102, (*(_DWORD *)(v18 + 2448) >> 10) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
        }
        if ( (*((_DWORD *)v56 + 6) & 1) == 0 )
        {
          i1 = *((_QWORD *)v56 + 1);
          v1103 = *((unsigned int *)v56 + 4);
          v1104 = i1;
          *(_DWORD *)(v18 + 2088) += v1103;
          v1105 = (const char *)i1;
          v1106 = *(_DWORD *)(v18 + 2068);
          v1107 = *(_QWORD *)(v18 + 2072);
          if ( i1 < i1 + v1103 )
          {
            do
            {
              _mm_prefetch(v1105, 0);
              v1105 += 64;
            }
            while ( (unsigned __int64)v1105 < i1 + v1103 );
          }
          v1108 = *(_QWORD *)(v18 + 2072);
          v1109 = (unsigned int)v1103 >> 7;
          if ( (unsigned int)v1103 >> 7 )
          {
            do
            {
              v1110 = 8LL;
              do
              {
                v1111 = *(_QWORD *)(v1104 + 8) ^ __ROL8__(*(_QWORD *)v1104 ^ v1108, v1106);
                v1104 += 16LL;
                v1108 = __ROL8__(v1111, v1106);
                --v1110;
              }
              while ( v1110 );
              v1112 = __ROL8__(v1107 ^ (v1104 - i1), 17) ^ v1107 ^ (v1104 - i1);
              v1705 = (v1112 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1106 = ((unsigned __int8)(v1705 ^ v1112) ^ (unsigned __int8)v1106) & 0x3F;
              if ( !v1106 )
                LOBYTE(v1106) = 1;
              --v1109;
            }
            while ( v1109 );
            v18 = (ULONG_PTR)v1560;
          }
          v1113 = v1103 & 0x7F;
          if ( (unsigned int)v1113 >= 8 )
          {
            v1114 = (unsigned __int64)(unsigned int)v1113 >> 3;
            do
            {
              v1108 = __ROL8__(*(_QWORD *)v1104 ^ v1108, v1106);
              v1104 += 8LL;
              v1113 = (unsigned int)(v1113 - 8);
              --v1114;
            }
            while ( v1114 );
          }
          for ( ; (_DWORD)v1113; v1113 = (unsigned int)(v1113 - 1) )
          {
            v1115 = *(unsigned __int8 *)v1104++;
            v1108 = __ROL8__(v1115 ^ v1108, v1106);
          }
          for ( nn = v1108; ; LODWORD(v1108) = nn ^ v1108 )
          {
            nn >>= 31;
            if ( !nn )
              break;
          }
          v1117 = v1108 & 0x7FFFFFFF;
          if ( v1117 == *((_DWORD *)v56 + 5) )
            goto LABEL_1876;
          if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
            i7 = 1;
          v1118 = *((unsigned int *)v56 + 4);
          v1119 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v1113 = 64LL;
            if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
            {
              v1120 = KeGetCurrentIrql();
              __writecr8(2uLL);
              i1 = v1119 & 0xFFFFFFFFFFFFF000uLL;
              v1782 = (v1119 + v1118 - 1) | 0xFFF;
              v1121 = (v1119 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1122 = v1120;
                while ( 1 )
                {
                  v1123 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v18 + 1128))(
                            i1,
                            0LL,
                            v1113,
                            v1104);
                  if ( v1123 != -1073741267 )
                    break;
                  if ( i7 )
                    goto LABEL_1827;
                  if ( v1120 > 1u )
                    goto LABEL_1825;
                  v1122 = v1120;
                  __writecr8(v1120);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1123 < 0 )
                  break;
LABEL_1825:
                i1 += 4096LL;
                v1121 += 4096LL;
                if ( v1121 == v1782 )
                  goto LABEL_1826;
              }
LABEL_1827:
              __writecr8(v1122);
              v56 = v1559;
            }
          }
          v1124 = *(_DWORD *)(v18 + 2296);
          if ( !v1124 )
          {
            v1125 = *((unsigned int *)v56 + 5) ^ (unsigned __int64)v1117;
            goto LABEL_1830;
          }
          goto LABEL_1831;
        }
        if ( *(_QWORD *)(v18 + 2432) )
        {
          v1127 = *(_DWORD *)(v18 + 2452);
          LOBYTE(v1128) = v1127;
          if ( !*(_DWORD *)(v18 + 2084) )
          {
            v1128 = v1127 ^ ((unsigned __int8)v1127 ^ (unsigned __int8)(8 * v1127)) & 0x20;
            *(_DWORD *)(v18 + 2452) = v1128;
            goto LABEL_1837;
          }
          if ( (((unsigned __int8)v1127 ^ (unsigned __int8)(v1127 >> 3)) & 4) == 0 )
          {
LABEL_1837:
            if ( (v1128 & 4) != 0 )
            {
              v1129 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
              for ( i1 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
                    i1;
                    v1129 += 4096LL )
              {
                --i1;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v18 + 688))(v1129)
                  && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v56;
                  *(_QWORD *)(v18 + 2328) = v1129;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v1130, v1131);
                }
                *(_DWORD *)(v18 + 2088) += 256;
              }
              goto LABEL_1876;
            }
            i1 = *((_QWORD *)v56 + 1);
            v1132 = *((unsigned int *)v56 + 4);
            v1104 = i1;
            *(_DWORD *)(v18 + 2088) += v1132;
            v1133 = (const char *)i1;
            v1134 = *(_DWORD *)(v18 + 2068);
            v1135 = *(_QWORD *)(v18 + 2072);
            if ( i1 < i1 + v1132 )
            {
              do
              {
                _mm_prefetch(v1133, 0);
                v1133 += 64;
              }
              while ( (unsigned __int64)v1133 < i1 + v1132 );
            }
            v1136 = *(_QWORD *)(v18 + 2072);
            v1137 = (unsigned int)v1132 >> 7;
            if ( (unsigned int)v1132 >> 7 )
            {
              do
              {
                v1138 = 8LL;
                do
                {
                  v1139 = *(_QWORD *)(v1104 + 8) ^ __ROL8__(*(_QWORD *)v1104 ^ v1136, v1134);
                  v1104 += 16LL;
                  v1136 = __ROL8__(v1139, v1134);
                  --v1138;
                }
                while ( v1138 );
                v1140 = (__ROL8__(v1135 ^ (v1104 - i1), 17) ^ v1135 ^ (v1104 - i1))
                      * (unsigned __int128)0x7010008004002001uLL;
                v1706 = *((_QWORD *)&v1140 + 1);
                v1134 = (BYTE8(v1140) ^ (unsigned __int8)(v1140 ^ v1134)) & 0x3F;
                if ( !v1134 )
                  LOBYTE(v1134) = 1;
                --v1137;
              }
              while ( v1137 );
              v18 = (ULONG_PTR)v1560;
            }
            v1141 = v1132 & 0x7F;
            if ( v1141 >= 8 )
            {
              v1142 = (unsigned __int64)v1141 >> 3;
              do
              {
                v1136 = __ROL8__(*(_QWORD *)v1104 ^ v1136, v1134);
                v1104 += 8LL;
                v1141 -= 8;
                --v1142;
              }
              while ( v1142 );
            }
            for ( ; v1141; --v1141 )
            {
              v1143 = *(unsigned __int8 *)v1104++;
              v1136 = __ROL8__(v1143 ^ v1136, v1134);
            }
            for ( i2 = v1136; ; LODWORD(v1136) = i2 ^ v1136 )
            {
              i2 >>= 31;
              if ( !i2 )
                break;
            }
            v1145 = *((_DWORD *)v56 + 5);
            v1146 = v1136 & 0x7FFFFFFF;
            if ( v1146 == v1145 )
              goto LABEL_1876;
            v1147 = *((unsigned int *)v56 + 4);
            v1113 = *((_QWORD *)v56 + 1);
            if ( *((_DWORD *)v56 + 4) )
            {
              v1104 = 64LL;
              if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
              {
                v1148 = KeGetCurrentIrql();
                __writecr8(2uLL);
                i1 = v1113 & 0xFFFFFFFFFFFFF000uLL;
                v1149 = (v1113 + v1147 - 1) | 0xFFF;
                v1150 = (v1113 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1122 = v1148;
                  while ( 1 )
                  {
                    v1151 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(i1, 0LL);
                    if ( v1151 != -1073741267 )
                      break;
                    if ( v1148 > 1u )
                      goto LABEL_1870;
                    v1122 = v1148;
                    __writecr8(v1148);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1151 < 0 )
                    break;
LABEL_1870:
                  i1 += 4096LL;
                  v1150 += 4096LL;
                  if ( v1150 == v1149 )
                  {
LABEL_1826:
                    __writecr8(v1122);
                    goto LABEL_1876;
                  }
                }
                __writecr8(v1122);
                v56 = v1559;
                v1145 = *((_DWORD *)v1559 + 5);
              }
            }
            v1124 = *(_DWORD *)(v18 + 2296);
            if ( !v1124 )
            {
              v1125 = v1146 ^ (unsigned __int64)v1145;
LABEL_1830:
              *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1125;
              v1124 = *(_DWORD *)(v18 + 2296);
            }
LABEL_1831:
            v1126 = *((_QWORD *)v56 + 1);
            if ( !v1124 )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v56;
              *(_QWORD *)(v18 + 2328) = v1126;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v1113, v1104);
            }
            goto LABEL_1876;
          }
        }
        *(_DWORD *)(v18 + 2084) = 0;
LABEL_1876:
        if ( (*(_DWORD *)(v18 + 2452) & 0x4000) != 0 )
        {
          _InterlockedAnd(*(volatile signed __int32 **)(v18 + 1248), ~(1 << ((*(_DWORD *)(v18 + 2448) >> 10) & 0x1F)));
          _enable();
        }
        goto LABEL_241;
      }
      v1167 = *((_DWORD *)v56 + 8);
      v1565 = v18;
      if ( (v1167 & 2) == 0 )
        goto LABEL_1974;
      if ( !*(_QWORD *)(v18 + 2432) )
        goto LABEL_1922;
      v1168 = *(_DWORD *)(v18 + 2452);
      if ( (v1168 & 4) != 0 )
        goto LABEL_1922;
      if ( (v1167 & 2) != 0 )
      {
        v1169 = *(_DWORD *)(v18 + 2452);
        if ( !*(_DWORD *)(v18 + 2084) )
        {
          v1169 = v1168 ^ ((unsigned __int8)v1168 ^ (unsigned __int8)(8 * v1168)) & 0x20;
          *(_DWORD *)(v18 + 2452) = v1169;
          goto LABEL_1918;
        }
        if ( (((unsigned __int8)v1168 ^ (unsigned __int8)(v1168 >> 3)) & 4) != 0 )
        {
LABEL_1922:
          *(_DWORD *)(v18 + 2084) = 0;
          goto LABEL_181;
        }
LABEL_1918:
        if ( !*(_QWORD *)(v18 + 2432) )
          goto LABEL_1972;
        LOBYTE(v1170) = v1169;
        if ( !*(_DWORD *)(v18 + 2084) )
        {
          v1170 = v1169 ^ ((unsigned __int8)v1169 ^ (unsigned __int8)(8 * v1169)) & 0x20;
          *(_DWORD *)(v18 + 2452) = v1170;
          goto LABEL_1924;
        }
        if ( (((unsigned __int8)v1169 ^ (unsigned __int8)(v1169 >> 3)) & 4) != 0 )
        {
LABEL_1972:
          *(_DWORD *)(v18 + 2084) = 0;
          goto LABEL_1973;
        }
LABEL_1924:
        if ( (v1170 & 4) != 0 )
        {
          v1171 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v1172 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
          if ( v1172 )
          {
            do
            {
              --v1172;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v18 + 688))(v1171) && !*(_DWORD *)(v18 + 2296) )
              {
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = *(int *)v56;
                *(_QWORD *)(v18 + 2328) = v1171;
                *(_DWORD *)(v18 + 2296) = 1;
                sub_14036B3BC(v18, 0LL, v1173, v1174);
              }
              *(_DWORD *)(v18 + 2088) += 256;
              v1171 += 4096LL;
            }
            while ( v1172 );
            LODWORD(i1) = 1;
            goto LABEL_1960;
          }
LABEL_1973:
          LODWORD(i1) = 1;
          goto LABEL_1960;
        }
        v1175 = (const char *)*((_QWORD *)v56 + 1);
        v1176 = *((unsigned int *)v56 + 4);
        v1177 = (__int64)v1175;
        *(_DWORD *)(v18 + 2088) += v1176;
        v1178 = v1175;
        v1179 = *(_DWORD *)(v18 + 2068);
        for ( i3 = *(_QWORD *)(v18 + 2072); v1178 < &v1175[v1176]; v1178 += 64 )
          _mm_prefetch(v1178, 0);
        v1181 = *(_QWORD *)(v18 + 2072);
        v1182 = (unsigned int)v1176 >> 7;
        if ( (unsigned int)v1176 >> 7 )
        {
          do
          {
            v1183 = 8LL;
            do
            {
              v1184 = v1181 ^ *(_QWORD *)v1177;
              v1185 = *(_QWORD *)(v1177 + 8);
              v1177 += 16LL;
              v1181 = __ROL8__(__ROL8__(v1184, v1179) ^ v1185, v1179);
              --v1183;
            }
            while ( v1183 );
            v1186 = __ROL8__(i3 ^ (v1177 - (_QWORD)v1175), 17) ^ i3 ^ (v1177 - (_QWORD)v1175);
            v1707 = ((unsigned __int64)v1186 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1179 = ((unsigned __int8)(v1707 ^ v1186) ^ (unsigned __int8)v1179) & 0x3F;
            if ( !v1179 )
              LOBYTE(v1179) = 1;
            --v1182;
          }
          while ( v1182 );
          v18 = (ULONG_PTR)v1560;
        }
        v1187 = v1176 & 0x7F;
        if ( v1187 >= 8 )
        {
          v1188 = (unsigned __int64)v1187 >> 3;
          do
          {
            v1181 = __ROL8__(*(_QWORD *)v1177 ^ v1181, v1179);
            v1177 += 8LL;
            v1187 -= 8;
            --v1188;
          }
          while ( v1188 );
        }
        for ( ; v1187; --v1187 )
        {
          v1189 = *(unsigned __int8 *)v1177++;
          v1181 = __ROL8__(v1189 ^ v1181, v1179);
        }
        for ( i4 = v1181; ; LODWORD(v1181) = i4 ^ v1181 )
        {
          i4 >>= 31;
          if ( !i4 )
            break;
        }
        v1191 = *((_DWORD *)v56 + 5);
        v1192 = v1181 & 0x7FFFFFFF;
        if ( v1192 != v1191 )
        {
          v1193 = *((unsigned int *)v56 + 4);
          v1194 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v1177 = 64LL;
            if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
            {
              v1195 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1196 = v1194 & 0xFFFFFFFFFFFFF000uLL;
              v1197 = (v1194 + v1193 - 1) | 0xFFF;
              v1198 = (v1194 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1199 = v1195;
                while ( 1 )
                {
                  v1200 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(v1196, 0LL);
                  if ( v1200 != -1073741267 )
                    break;
                  if ( v1195 > 1u )
                    goto LABEL_1957;
                  v1199 = v1195;
                  __writecr8(v1195);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1200 < 0 )
                  break;
LABEL_1957:
                v1196 += 4096LL;
                v1198 += 4096LL;
                if ( v1198 == v1197 )
                  goto LABEL_1958;
              }
              __writecr8(v1199);
              v56 = v1559;
              i7 = 0;
              v1191 = *((_DWORD *)v1559 + 5);
            }
          }
          v1205 = *(_DWORD *)(v18 + 2296);
          if ( !v1205 )
          {
            *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1192 ^ (unsigned __int64)v1191;
            v1205 = *(_DWORD *)(v18 + 2296);
          }
          v1206 = *((_QWORD *)v56 + 1);
          LODWORD(i1) = 1;
          if ( !v1205 )
            goto LABEL_1971;
LABEL_1960:
          if ( (*((_DWORD *)v56 + 8) & 1) == 0 )
            goto LABEL_181;
          v1201 = *((_QWORD *)v56 + 3);
          v1202 = (*(__int64 (__fastcall **)(__int64))(v18 + 504))(v1201);
          v1203 = (_DWORD *)(v1202 + *(unsigned __int16 *)(v1202 + 20) + 24LL);
          v1561 = (__int64)&v1203[10 * *(unsigned __int16 *)(v1202 + 6)];
          if ( v1203 == (_DWORD *)v1561 )
            goto LABEL_241;
          v1204 = *(_DWORD *)(v18 + 2084);
          if ( !v1204 )
          {
            *(_DWORD *)(v18 + 2084) = 4096;
            v1204 = 4096;
          }
          v1783 = v1201 == *(_QWORD *)(v18 + 1512) || v1201 == *(_QWORD *)(v18 + 1520);
          while ( 2 )
          {
            v1229 = v1203[4];
            v1230 = v1203[3];
            if ( v1229 <= v1203[2] )
              v1229 = v1203[2];
            v1231 = (v1229 + v1230 + 4095) & 0xFFFFF000;
            if ( v1204 >= v1231 )
              goto LABEL_2032;
            if ( (v1203[9] & 0x2000000) != 0 )
              goto LABEL_2031;
            v1232 = *v1203;
            if ( *v1203 == 1414090313 && v1203[1] == 1195525195 )
              goto LABEL_2031;
            if ( v1232 == 1162297680 )
            {
              v1233 = *((_WORD *)v1203 + 2);
              if ( v1233 == 30839 || v1233 == 29303 || v1233 == 30583 )
                goto LABEL_2031;
            }
            if ( v1232 == 1095914053 && *((_WORD *)v1203 + 2) == 16724 )
              goto LABEL_2031;
            if ( v1565 )
            {
              v1234 = *(char **)(v1565 + 2352);
              *((_QWORD *)&v1639 + 1) = *(_QWORD *)(v1565 + 2360);
              v1640 = *(_OWORD *)(v1565 + 2368);
              *(_QWORD *)&v1639 = v1234;
            }
            else
            {
              v1639 = *(_OWORD *)VfExcludeSections;
              v1234 = VfExcludeSections[0];
              v1640 = *(_OWORD *)off_140428020;
            }
            v1235 = 7;
            v1236 = (unsigned __int8 *)v1203;
            while ( 1 )
            {
              v1237 = *v1236++;
              v1238 = (unsigned __int8)*v1234++;
              if ( v1237 != v1238 )
                break;
              if ( !--v1235 )
                goto LABEL_2031;
            }
            v1241 = (__int64 *)*((_QWORD *)&v1639 + 1);
            v1242 = 8;
            v1243 = (__int64 *)v1203;
            do
            {
              v1244 = *v1243++;
              v1245 = *v1241++;
              if ( v1244 != v1245 )
                goto LABEL_2042;
              v1242 -= 8;
            }
            while ( v1242 >= 8 );
            if ( !v1242 )
              goto LABEL_2031;
            while ( 1 )
            {
              v1246 = *(unsigned __int8 *)v1243;
              v1243 = (__int64 *)((char *)v1243 + 1);
              v1247 = *(unsigned __int8 *)v1241;
              v1241 = (__int64 *)((char *)v1241 + 1);
              if ( v1246 != v1247 )
                break;
              if ( !--v1242 )
                goto LABEL_2031;
            }
LABEL_2042:
            v1248 = (unsigned __int8 *)v1640;
            v1249 = 4;
            v1250 = (unsigned __int8 *)v1203;
            while ( 1 )
            {
              v1251 = *v1250++;
              v1252 = *v1248++;
              if ( v1251 != v1252 )
                break;
              if ( !--v1249 )
                goto LABEL_2031;
            }
            v1253 = (unsigned __int8 *)*((_QWORD *)&v1640 + 1);
            v1254 = 6;
            v1255 = (unsigned __int8 *)v1203;
            while ( 1 )
            {
              v1256 = *v1255++;
              v1257 = *v1253++;
              if ( v1256 != v1257 )
                break;
              if ( !--v1254 )
                goto LABEL_2031;
            }
            v1258 = v1203[9];
            if ( v1258 < 0 || (v1258 & 0x20000000) == 0 )
            {
LABEL_2031:
              v1204 = v1231;
LABEL_2032:
              v1239 = v1565;
              goto LABEL_2033;
            }
            if ( v1783 && *v1203 != 778396769 && *v1203 != 1162297680 )
              LODWORD(i1) = 0;
            v1239 = v1565;
            if ( v1204 >= v1230 )
              v1230 = v1204;
            v1204 = v1230;
LABEL_2059:
            v1259 = v1201 + v1204;
            if ( (*(_BYTE *)(v1239 + 2171) & 4) != 0 )
            {
              __asm { xbegin  $+6 }
              __asm { xend }
              ++*(_DWORD *)(v1239 + 2108);
              *(_DWORD *)(v1239 + 2088) += 256;
              goto LABEL_2070;
            }
            if ( (_DWORD)i1 )
            {
              v1260 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned __int8 *))(v1239 + 1104))(
                        &v1675,
                        v1201 + v1204,
                        v1239,
                        v1255);
              if ( v1260 < 0 )
              {
                v1239 = v1565;
                if ( v1260 == -1073741819 && !*(_DWORD *)(v1565 + 2296) )
                {
                  v1261 = (int *)v1559;
                  *(_QWORD *)(v1565 + 2304) = v1565 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v1239 + 2312) = (char *)v1261 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v1239 + 2320) = *v1261;
                  *(_QWORD *)(v1239 + 2328) = v1259;
                  *(_DWORD *)(v1239 + 2296) = 1;
                  sub_14036B3BC(v1239, 0LL, v1239, v1255);
                  v1239 = v1565;
                }
                goto LABEL_2070;
              }
            }
            else
            {
              v1675 = 0LL;
              v1677 = 0;
              v1679 = 4096;
              v1676 = 8 * ((((unsigned __int64)(v1259 & 0xFFF) + 0x1FFF) >> 12) + 6);
              v1678 = v1259 & 0xFFFFFFFFFFFFF000uLL;
              v1680 = v1259 & 0xFFF;
              v1709 = (*(__int64 (__fastcall **)(__int64))(v1239 + 1112))(v1201 + v1204);
              v1681 = v1709 >> 12;
            }
            v1262 = v1565;
            ++*(_DWORD *)(v1565 + 2112);
            *(_QWORD *)(v1262 + 2664) = v1678 + v1680;
            *(_QWORD *)(v1262 + 2656) = v1559;
            v1263 = KeGetCurrentIrql();
            __writecr8(2uLL);
            RtlInitMinimalBarrier(v1262 + 2624, **(unsigned int **)(v1262 + 1528), 0LL);
            v1239 = (*(__int64 (__fastcall **)(ULONG_PTR))(v1565 + 1096))(v1565 + *(unsigned int *)(v1565 + 2036));
            v1565 = v1239;
            __writecr8(v1263);
            if ( (_DWORD)i1 )
            {
              (*(void (__fastcall **)(__int64 *, _QWORD))(v1239 + 1120))(&v1675, 0LL);
              v1239 = v1565;
            }
            *(_DWORD *)(v1239 + 2088) += 81920;
LABEL_2070:
            v1264 = *(_DWORD *)(v1239 + 2088);
            v1204 += 4096;
            if ( v1204 >= v1231 || v1264 >= *(_DWORD *)(v1239 + 2092) )
            {
              if ( v1264 >= *(_DWORD *)(v1239 + 2092) )
              {
                v1240 = (_DWORD *)v1561;
                goto LABEL_2075;
              }
              LODWORD(i1) = 1;
LABEL_2033:
              v1240 = (_DWORD *)v1561;
              v1203 += 10;
              if ( v1203 == (_DWORD *)v1561 )
              {
LABEL_2075:
                v18 = (ULONG_PTR)v1560;
                if ( v1203 == v1240 && v1204 >= v1231 )
                {
                  i7 = 0;
                  *(_DWORD *)(v1239 + 2084) = 0;
                  goto LABEL_181;
                }
                *(_DWORD *)(v1239 + 2084) = v1204;
                goto LABEL_241;
              }
              continue;
            }
            goto LABEL_2059;
          }
        }
      }
      else
      {
LABEL_1974:
        v1207 = (const char *)*((_QWORD *)v56 + 1);
        v1208 = *((unsigned int *)v56 + 4);
        v1177 = (__int64)v1207;
        *(_DWORD *)(v18 + 2088) += v1208;
        v1209 = v1207;
        v1210 = *(_DWORD *)(v18 + 2068);
        for ( i5 = *(_QWORD *)(v18 + 2072); v1209 < &v1207[v1208]; v1209 += 64 )
          _mm_prefetch(v1209, 0);
        v1212 = *(_QWORD *)(v18 + 2072);
        v1213 = (unsigned int)v1208 >> 7;
        if ( (unsigned int)v1208 >> 7 )
        {
          do
          {
            v1214 = 8LL;
            do
            {
              v1215 = v1212 ^ *(_QWORD *)v1177;
              v1216 = *(_QWORD *)(v1177 + 8);
              v1177 += 16LL;
              v1212 = __ROL8__(__ROL8__(v1215, v1210) ^ v1216, v1210);
              --v1214;
            }
            while ( v1214 );
            v1217 = __ROL8__(i5 ^ (v1177 - (_QWORD)v1207), 17) ^ i5 ^ (v1177 - (_QWORD)v1207);
            v1708 = ((unsigned __int64)v1217 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1210 = ((unsigned __int8)(v1708 ^ v1217) ^ (unsigned __int8)v1210) & 0x3F;
            if ( !v1210 )
              LOBYTE(v1210) = 1;
            --v1213;
          }
          while ( v1213 );
          v18 = (ULONG_PTR)v1560;
        }
        v1194 = v1208 & 0x7F;
        LODWORD(i1) = 1;
        if ( (unsigned int)v1194 >= 8 )
        {
          v1218 = (unsigned __int64)(unsigned int)v1194 >> 3;
          do
          {
            v1212 = __ROL8__(*(_QWORD *)v1177 ^ v1212, v1210);
            v1177 += 8LL;
            v1194 = (unsigned int)(v1194 - 8);
            --v1218;
          }
          while ( v1218 );
        }
        for ( ; (_DWORD)v1194; v1194 = (unsigned int)(v1194 - 1) )
        {
          v1219 = *(unsigned __int8 *)v1177++;
          v1212 = __ROL8__(v1219 ^ v1212, v1210);
        }
        for ( i6 = v1212; ; LODWORD(v1212) = i6 ^ v1212 )
        {
          i6 >>= 31;
          if ( !i6 )
            break;
        }
        v1221 = v1212 & 0x7FFFFFFF;
        if ( v1221 == *((_DWORD *)v56 + 5) )
        {
          i7 = 0;
          goto LABEL_1960;
        }
        if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
          i7 = 1;
        v1222 = *((unsigned int *)v56 + 4);
        v1223 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v1194 = 64LL;
          if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
          {
            v1224 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1225 = v1223 & 0xFFFFFFFFFFFFF000uLL;
            v1784 = (v1223 + v1222 - 1) | 0xFFF;
            v1226 = (v1223 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v1199 = v1224;
              while ( 1 )
              {
                v1227 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v18 + 1128))(
                          v1225,
                          0LL,
                          v1194,
                          v1177);
                if ( v1227 != -1073741267 )
                  break;
                if ( i7 )
                  goto LABEL_2006;
                if ( v1224 > 1u )
                  goto LABEL_2004;
                v1199 = v1224;
                __writecr8(v1224);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1227 < 0 )
                break;
LABEL_2004:
              v1225 += 4096LL;
              v1226 += 4096LL;
              if ( v1226 == v1784 )
              {
LABEL_1958:
                __writecr8(v1199);
                v56 = v1559;
                i7 = 0;
                goto LABEL_1959;
              }
            }
LABEL_2006:
            __writecr8(v1199);
            v56 = v1559;
          }
        }
        v1228 = *(_DWORD *)(v18 + 2296);
        i7 = 0;
        if ( !v1228 )
        {
          *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1221 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
          v1228 = *(_DWORD *)(v18 + 2296);
        }
        v1206 = *((_QWORD *)v56 + 1);
        if ( !v1228 )
        {
          LODWORD(i1) = 1;
LABEL_1971:
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v1206;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, v1194, v1177);
          goto LABEL_1960;
        }
      }
LABEL_1959:
      LODWORD(i1) = 1;
      goto LABEL_1960;
    }
    if ( v78 == 28 )
    {
      v727 = *((unsigned int *)v56 + 4);
      if ( !(_DWORD)v727 )
      {
        v1659 = v56 + 48;
        v728 = *((_WORD *)v56 + 20);
        v1558 = &v1595;
        v1658[0] = v728;
        v1658[1] = v728;
        v729 = *(_QWORD *)(v18 + 1296);
        v730 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v18 + 488);
        LOBYTE(v1557) = 0;
        if ( v730(v1658, 0LL, 0LL, 0LL, v729, v1557, 0LL, &v1595) < 0 )
          goto LABEL_181;
        if ( (*(_DWORD *)(v1595 + 16) & 0x10) == 0 )
          goto LABEL_345;
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, char *))(v18 + 512))(
               *(_QWORD *)(v18 + 488),
               &v1625,
               v1652) )
        {
          v731 = (*(__int64 (__fastcall **)(unsigned __int64))(v18 + 504))(v1625);
          if ( v731 )
          {
            v50 = *(_DWORD *)(v731 + 80);
            v1588 = v50;
          }
        }
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, char *))(v18 + 512))(
               *((_QWORD *)v56 + 3),
               &v1626,
               v1653) )
        {
          v732 = (*(__int64 (__fastcall **)(unsigned __int64))(v18 + 504))(v1626);
          if ( v732 )
          {
            v52 = *(_DWORD *)(v732 + 80);
            v1584 = v52;
          }
        }
        LODWORD(i1) = 0x40000000;
        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) == 0 )
        {
          *((_QWORD *)v56 + 1) = v1595 + 112;
          *((_DWORD *)v56 + 4) = 224;
        }
        v55 = 0LL;
        v733 = 0;
        v734 = v50;
        do
        {
          v54 = *(_QWORD *)(v1595 + 8LL * v733 + 112);
          if ( !v50 || v54 < v1625 || v54 > v50 + v1625 - 1 )
          {
            if ( !v52 || (v55 = v52 + v1626 - 1, v54 < v1626) || v54 > v55 )
            {
              if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
              {
                v768 = *(_QWORD **)(v18 + 2688);
                v769 = 48;
                v55 = 6LL;
                do
                {
                  v769 -= 8;
                  *v768 = *(_QWORD *)v56;
                  v56 += 8;
                  ++v768;
                  --v55;
                }
                while ( v55 );
                for ( i7 = 0; v769; --v769 )
                {
                  v770 = *v56++;
                  *(_BYTE *)v768 = v770;
                  v768 = (_QWORD *)((char *)v768 + 1);
                }
                v56 = *(char **)(v18 + 2688);
              }
              else
              {
                i7 = 0;
              }
              *((_QWORD *)v56 + 4) = v54;
              v771 = *(_QWORD *)(v18 + 1424);
              *(_QWORD *)v771 = v56;
              *(_DWORD *)(v771 + 16) = 48;
              v772 = *((_QWORD *)v56 + 1);
              if ( *(_DWORD *)(v18 + 2296) )
                goto LABEL_181;
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v56;
              *(_QWORD *)(v18 + 2328) = v772;
              *(_DWORD *)(v18 + 2296) = 1;
              goto LABEL_250;
            }
            v55 = 0LL;
          }
          ++v733;
        }
        while ( v733 < 0x1Cu );
        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
        {
          (*(void (__fastcall **)(__int64))(v18 + 480))(v1595);
          goto LABEL_241;
        }
        v735 = (_QWORD *)*((_QWORD *)v56 + 1);
        v736 = *((unsigned int *)v56 + 4);
        v737 = v735;
        *(_DWORD *)(v18 + 2088) += v736;
        v738 = (const char *)v735;
        v739 = *(_DWORD *)(v18 + 2068);
        v740 = *(_QWORD *)(v18 + 2072);
        if ( v735 < (_QWORD *)((char *)v735 + v736) )
        {
          do
          {
            _mm_prefetch(v738, 0);
            v738 += 64;
          }
          while ( v738 < (const char *)v735 + v736 );
        }
        v55 = *(_QWORD *)(v18 + 2072);
        v741 = (unsigned int)v736 >> 7;
        if ( (unsigned int)v736 >> 7 )
        {
          do
          {
            v742 = 8LL;
            do
            {
              v743 = v55 ^ *v737;
              v744 = v737[1];
              v737 += 2;
              v55 = __ROL8__(__ROL8__(v743, v739) ^ v744, v739);
              --v742;
            }
            while ( v742 );
            v745 = __ROL8__(v740 ^ ((char *)v737 - (char *)v735), 17) ^ v740 ^ ((char *)v737 - (char *)v735);
            v1694 = (v745 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v739 = ((unsigned __int8)(v1694 ^ v745) ^ (unsigned __int8)v739) & 0x3F;
            if ( !v739 )
              LOBYTE(v739) = 1;
            --v741;
          }
          while ( v741 );
          v18 = (ULONG_PTR)v1560;
          v52 = v1584;
        }
        v746 = v736 & 0x7F;
        if ( v746 >= 8 )
        {
          v747 = (unsigned __int64)v746 >> 3;
          do
          {
            v55 = __ROL8__(*v737++ ^ v55, v739);
            v746 -= 8;
            --v747;
          }
          while ( v747 );
        }
        if ( v746 )
        {
          do
          {
            v748 = *(unsigned __int8 *)v737;
            v737 = (_QWORD *)((char *)v737 + 1);
            v55 = __ROL8__(v748 ^ v55, v739);
            --v746;
          }
          while ( v746 );
          v52 = v1584;
        }
        for ( i8 = v55; ; v55 = (unsigned int)i8 ^ (unsigned int)v55 )
        {
          i8 >>= 31;
          if ( !i8 )
            break;
        }
        LODWORD(v55) = v55 & 0x7FFFFFFF;
        v750 = 0;
        *((_DWORD *)v56 + 5) = v55;
        i1 = *(_QWORD *)(v1595 + 80);
        if ( !i1 || (v750 = *(_DWORD *)i1, LOBYTE(v55) = 0, v54 = (unsigned int)(*(_DWORD *)i1 - 8) >> 3, !(_DWORD)v54) )
        {
LABEL_1219:
          *(_DWORD *)(v18 + 2088) += v750;
          v752 = (_QWORD *)i1;
          v753 = *(_DWORD *)(v18 + 2068);
          v754 = (const char *)i1;
          v755 = *(_QWORD *)(v18 + 2072);
          v756 = i1 + v750;
          if ( i1 < v756 )
          {
            do
            {
              _mm_prefetch(v754, 0);
              v754 += 64;
            }
            while ( (unsigned __int64)v754 < v756 );
          }
          i7 = 0;
          v757 = v750 >> 7;
          v758 = *(_QWORD *)(v18 + 2072);
          if ( v750 >> 7 )
          {
            do
            {
              v759 = 8LL;
              do
              {
                v760 = v758 ^ *v752;
                v761 = v752[1];
                v752 += 2;
                v758 = __ROL8__(__ROL8__(v760, v753) ^ v761, v753);
                --v759;
              }
              while ( v759 );
              v762 = __ROL8__(v755 ^ ((unsigned __int64)v752 - i1), 17) ^ v755 ^ ((unsigned __int64)v752 - i1);
              v1695 = (v762 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v753 = ((unsigned __int8)(v1695 ^ v762) ^ (unsigned __int8)v753) & 0x3F;
              if ( !v753 )
                LOBYTE(v753) = 1;
              --v757;
            }
            while ( v757 );
            v18 = (ULONG_PTR)v1560;
          }
          v763 = v750 & 0x7F;
          if ( v763 >= 8 )
          {
            v764 = (unsigned __int64)v763 >> 3;
            do
            {
              v758 = __ROL8__(*v752++ ^ v758, v753);
              v763 -= 8;
              --v764;
            }
            while ( v764 );
          }
          if ( v763 )
          {
            do
            {
              v765 = *(unsigned __int8 *)v752;
              v752 = (_QWORD *)((char *)v752 + 1);
              v758 = __ROL8__(v765 ^ v758, v753);
              --v763;
            }
            while ( v763 );
            v18 = (ULONG_PTR)v1560;
          }
          for ( i9 = v758; ; LODWORD(v758) = i9 ^ v758 )
          {
            i9 >>= 31;
            if ( !i9 )
              break;
          }
          *((_DWORD *)v56 + 11) = v758 & 0x7FFFFFFF;
          goto LABEL_181;
        }
        while ( 1 )
        {
          v751 = *(_QWORD *)(i1 + 8LL * (unsigned __int8)v55 + 8);
          if ( v751
            && (!v734 || v751 < v1625 || v751 > v734 + v1625 - 1)
            && (!v52 || v751 < v1626 || v751 > v52 + v1626 - 1) )
          {
            break;
          }
          LOBYTE(v55) = v55 + 1;
          if ( (unsigned __int8)v55 >= (unsigned int)v54 )
            goto LABEL_1219;
        }
        *((_QWORD *)v56 + 4) = v751;
        i7 = 0;
        v767 = *(_QWORD *)(v18 + 1424);
        *(_QWORD *)v767 = v56;
        *(_DWORD *)(v767 + 16) = 48;
        if ( *(_DWORD *)(v18 + 2296) )
          goto LABEL_181;
        *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v18 + 2320) = *(int *)v56;
        *(_QWORD *)(v18 + 2328) = i1;
LABEL_1237:
        *(_DWORD *)(v18 + 2296) = 1;
        goto LABEL_250;
      }
      v773 = (_QWORD *)*((_QWORD *)v56 + 1);
      *(_DWORD *)(v18 + 2088) += v727;
      v774 = v773;
      v775 = *(_DWORD *)(v18 + 2068);
      v776 = (const char *)v773;
      v777 = *(_QWORD *)(v18 + 2072);
      if ( v773 < (_QWORD *)((char *)v773 + v727) )
      {
        do
        {
          _mm_prefetch(v776, 0);
          v776 += 64;
        }
        while ( v776 < (const char *)v773 + v727 );
      }
      v778 = *(_QWORD *)(v18 + 2072);
      v779 = (unsigned int)v727 >> 7;
      if ( (unsigned int)v727 >> 7 )
      {
        do
        {
          v780 = 8LL;
          do
          {
            v781 = v778 ^ *v774;
            v782 = v774[1];
            v774 += 2;
            v778 = __ROL8__(__ROL8__(v781, v775) ^ v782, v775);
            --v780;
          }
          while ( v780 );
          v783 = (__ROL8__(v777 ^ ((char *)v774 - (char *)v773), 17) ^ v777 ^ (unsigned __int64)((char *)v774
                                                                                               - (char *)v773))
               * (unsigned __int128)0x7010008004002001uLL;
          v1696 = *((_QWORD *)&v783 + 1);
          v775 = (BYTE8(v783) ^ (unsigned __int8)(v783 ^ v775)) & 0x3F;
          if ( !v775 )
            LOBYTE(v775) = 1;
          --v779;
        }
        while ( v779 );
        v18 = (ULONG_PTR)v1560;
      }
      v784 = v727 & 0x7F;
      if ( (unsigned int)v784 >= 8 )
      {
        v785 = (unsigned __int64)(unsigned int)v784 >> 3;
        do
        {
          v778 = __ROL8__(*v774++ ^ v778, v775);
          v784 = (unsigned int)(v784 - 8);
          --v785;
        }
        while ( v785 );
        v18 = (ULONG_PTR)v1560;
      }
      for ( ; (_DWORD)v784; v784 = (unsigned int)(v784 - 1) )
      {
        v786 = *(unsigned __int8 *)v774;
        v774 = (_QWORD *)((char *)v774 + 1);
        v778 = __ROL8__(v786 ^ v778, v775);
      }
      for ( i10 = v778; ; LODWORD(v778) = i10 ^ v778 )
      {
        i10 >>= 31;
        if ( !i10 )
          break;
      }
      v788 = v778 & 0x7FFFFFFF;
      if ( v788 == *((_DWORD *)v56 + 5) )
      {
LABEL_1283:
        i7 = 0;
      }
      else
      {
        if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
          i7 = 1;
        v789 = *((unsigned int *)v56 + 4);
        v790 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v784 = 64LL;
          if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
          {
            v791 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v792 = v790 & 0xFFFFFFFFFFFFF000uLL;
            v1772 = (v790 + v789 - 1) | 0xFFF;
            v793 = (v790 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v794 = v791;
              while ( 1 )
              {
                v795 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                         v792,
                         0LL,
                         v784,
                         v774);
                if ( v795 != -1073741267 )
                  break;
                if ( i7 )
                  goto LABEL_1302;
                if ( v791 > 1u )
                  goto LABEL_1281;
                v794 = v791;
                __writecr8(v791);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v795 < 0 )
                break;
LABEL_1281:
              v792 += 4096LL;
              v793 += 4096LL;
              if ( v793 == v1772 )
              {
                __writecr8(v794);
                v56 = v1559;
                goto LABEL_1283;
              }
            }
LABEL_1302:
            __writecr8(v794);
            v56 = v1559;
          }
        }
        v810 = *(_DWORD *)(v18 + 2296);
        i7 = 0;
        if ( !v810 )
        {
          *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = *((unsigned int *)v56 + 5) ^ (unsigned __int64)v788;
          v810 = *(_DWORD *)(v18 + 2296);
        }
        v811 = *((_QWORD *)v56 + 1);
        if ( !v810 )
        {
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v811;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, v784, v774);
        }
      }
      v796 = 0;
      v1595 = *((_QWORD *)v56 + 1) - 112LL;
      v797 = *(const char **)(v1595 + 80);
      if ( v797 )
        v796 = *(_DWORD *)v797;
      *(_DWORD *)(v18 + 2088) += v796;
      v798 = v797;
      v799 = *(_DWORD *)(v18 + 2068);
      v800 = v797;
      i1 = *(_QWORD *)(v18 + 2072);
      v801 = &v797[v796];
      if ( v797 < v801 )
      {
        do
        {
          _mm_prefetch(v800, 0);
          v800 += 64;
        }
        while ( v800 < v801 );
      }
      v55 = *(_QWORD *)(v18 + 2072);
      v802 = v796 >> 7;
      if ( v796 >> 7 )
      {
        do
        {
          v803 = 8LL;
          do
          {
            v804 = v55 ^ *(_QWORD *)v798;
            v805 = *((_QWORD *)v798 + 1);
            v798 += 16;
            v55 = __ROL8__(__ROL8__(v804, v799) ^ v805, v799);
            --v803;
          }
          while ( v803 );
          v806 = __ROL8__(i1 ^ (v798 - v797), 17) ^ i1 ^ (v798 - v797);
          v1697 = (v806 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v799 = ((unsigned __int8)(v1697 ^ v806) ^ (unsigned __int8)v799) & 0x3F;
          if ( !v799 )
            LOBYTE(v799) = 1;
          --v802;
        }
        while ( v802 );
        v18 = (ULONG_PTR)v1560;
      }
      v54 = v796 & 0x7F;
      if ( (unsigned int)v54 >= 8 )
      {
        v807 = (unsigned __int64)(unsigned int)v54 >> 3;
        do
        {
          v55 = __ROL8__(*(_QWORD *)v798 ^ v55, v799);
          v798 += 8;
          v54 = (unsigned int)(v54 - 8);
          --v807;
        }
        while ( v807 );
      }
      if ( (_DWORD)v54 )
      {
        do
        {
          v808 = *(unsigned __int8 *)v798++;
          v55 = __ROL8__(v808 ^ v55, v799);
          v54 = (unsigned int)(v54 - 1);
        }
        while ( (_DWORD)v54 );
        v18 = (ULONG_PTR)v1560;
      }
      for ( i11 = v55; ; v55 = (unsigned int)i11 ^ (unsigned int)v55 )
      {
        i11 >>= 31;
        if ( !i11 )
          break;
      }
      v812 = *((unsigned int *)v56 + 11);
      LODWORD(v55) = v55 & 0x7FFFFFFF;
      if ( (_DWORD)v55 == (_DWORD)v812 )
        goto LABEL_181;
      if ( *(_DWORD *)(v18 + 2296) )
        goto LABEL_181;
      *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v812 ^ (unsigned int)v55;
      if ( *(_DWORD *)(v18 + 2296) )
        goto LABEL_181;
      *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v18 + 2320) = *(int *)v56;
      *(_QWORD *)(v18 + 2328) = v797;
LABEL_1313:
      *(_DWORD *)(v18 + 2296) = 1;
      goto LABEL_250;
    }
    v55 = 12LL;
    if ( v78 > 12 )
    {
      if ( v78 <= 14 )
      {
        if ( v78 == 14 )
        {
          if ( !*(_QWORD *)(v18 + 2432) )
            goto LABEL_1722;
          v686 = *(_DWORD *)(v18 + 2452);
          if ( ((v686 >> 2) & 1) != 0 )
            goto LABEL_1722;
          if ( *(_DWORD *)(v18 + 2084) )
          {
            if ( ((v686 >> 5) & 1) != 0 )
              goto LABEL_1722;
          }
          else
          {
            *(_DWORD *)(v18 + 2452) = v686 ^ ((unsigned __int8)v686 ^ (unsigned __int8)(8 * v686)) & 0x20;
          }
        }
        i1 = *((_QWORD *)v56 + 1);
        v687 = *((unsigned int *)v56 + 4);
        v688 = (_QWORD *)i1;
        *(_DWORD *)(v18 + 2088) += v687;
        v689 = (const char *)i1;
        v690 = *(_DWORD *)(v18 + 2068);
        v691 = *(_QWORD *)(v18 + 2072);
        if ( i1 < i1 + v687 )
        {
          do
          {
            _mm_prefetch(v689, 0);
            v689 += 64;
          }
          while ( (unsigned __int64)v689 < i1 + v687 );
        }
        v692 = *(_QWORD *)(v18 + 2072);
        v693 = (unsigned int)v687 >> 7;
        if ( (unsigned int)v687 >> 7 )
        {
          do
          {
            v694 = 8LL;
            do
            {
              v695 = v692 ^ *v688;
              v696 = v688[1];
              v688 += 2;
              v692 = __ROL8__(__ROL8__(v695, v690) ^ v696, v690);
              --v694;
            }
            while ( v694 );
            v697 = (__ROL8__(v691 ^ ((unsigned __int64)v688 - i1), 17) ^ v691 ^ ((unsigned __int64)v688 - i1))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1693 = *((_QWORD *)&v697 + 1);
            v690 = (BYTE8(v697) ^ (unsigned __int8)(v697 ^ v690)) & 0x3F;
            if ( !v690 )
              LOBYTE(v690) = 1;
            --v693;
          }
          while ( v693 );
          v18 = (ULONG_PTR)v1560;
        }
        v698 = v687 & 0x7F;
        if ( (unsigned int)v698 >= 8 )
        {
          v699 = (unsigned __int64)(unsigned int)v698 >> 3;
          do
          {
            v692 = __ROL8__(*v688++ ^ v692, v690);
            v698 = (unsigned int)(v698 - 8);
            --v699;
          }
          while ( v699 );
          v18 = (ULONG_PTR)v1560;
        }
        for ( ; (_DWORD)v698; v698 = (unsigned int)(v698 - 1) )
        {
          v700 = *(unsigned __int8 *)v688;
          v688 = (_QWORD *)((char *)v688 + 1);
          v692 = __ROL8__(v700 ^ v692, v690);
        }
        for ( i12 = v692; ; LODWORD(v692) = i12 ^ v692 )
        {
          i12 >>= 31;
          if ( !i12 )
            break;
        }
        v702 = v692 & 0x7FFFFFFF;
        if ( v702 == *((_DWORD *)v56 + 5) )
          goto LABEL_1139;
        _InterlockedOr(v1556, 0);
        if ( (*((_DWORD *)v56 + 6) & 1) != 0 )
        {
          if ( **(_BYTE **)(v18 + 1408) )
            goto LABEL_1139;
        }
        v703 = *((unsigned int *)v56 + 4);
        v704 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v698 = 64LL;
          if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
          {
            v705 = KeGetCurrentIrql();
            __writecr8(2uLL);
            i1 = v704 & 0xFFFFFFFFFFFFF000uLL;
            v706 = (v704 + v703 - 1) | 0xFFF;
            v707 = (v704 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v708 = v705;
              while ( 1 )
              {
                v709 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                         i1,
                         0LL,
                         v698,
                         v688);
                if ( v709 != -1073741267 )
                  break;
                if ( v705 > 1u )
                  goto LABEL_1137;
                v708 = v705;
                __writecr8(v705);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v709 < 0 )
                break;
LABEL_1137:
              i1 += 4096LL;
              v707 += 4096LL;
              if ( v707 == v706 )
              {
                __writecr8(v708);
                v56 = v1559;
                i7 = 0;
LABEL_1139:
                if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) == 0 )
                  goto LABEL_181;
                v710 = *((unsigned int *)v56 + 4);
                if ( !(_DWORD)v710 )
                  goto LABEL_181;
                sub_1401B877C(v18, *((_QWORD *)v56 + 1), v710, v1737);
                v711 = 16LL;
                v712 = (__int64 *)(v56 + 28);
                v713 = v1737;
                do
                {
                  v714 = *(_QWORD *)v713;
                  v713 += 8;
                  v715 = *v712++;
                  if ( v714 != v715 )
                    goto LABEL_1153;
                  v711 = (unsigned int)(v711 - 8);
                }
                while ( (unsigned int)v711 >= 8 );
                if ( !(_DWORD)v711 )
                  goto LABEL_1168;
                while ( 1 )
                {
                  v716 = *v713++;
                  v717 = *(unsigned __int8 *)v712;
                  v712 = (__int64 *)((char *)v712 + 1);
                  if ( v716 != v717 )
                    break;
                  v71 = (_DWORD)v711 == 1;
                  v711 = (unsigned int)(v711 - 1);
                  if ( v71 )
                    goto LABEL_1168;
                }
LABEL_1153:
                _InterlockedOr(v1556, 0);
                if ( (*((_DWORD *)v56 + 6) & 1) == 0 || !**(_BYTE **)(v18 + 1408) )
                {
                  v720 = *((unsigned int *)v56 + 4);
                  v721 = *((_QWORD *)v56 + 1);
                  if ( *((_DWORD *)v56 + 4) )
                  {
                    v711 = 64LL;
                    if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
                    {
                      v722 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v723 = v721 & 0xFFFFFFFFFFFFF000uLL;
                      v724 = (v721 + v720 - 1) | 0xFFF;
                      v725 = (v721 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        i1 = v722;
                        while ( 1 )
                        {
                          v726 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v18 + 1128))(
                                   v723,
                                   0LL,
                                   v711,
                                   v712);
                          if ( v726 != -1073741267 )
                            break;
                          if ( v722 > 1u )
                            goto LABEL_1163;
                          i1 = v722;
                          __writecr8(v722);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v726 < 0 )
                          break;
LABEL_1163:
                        v723 += 4096LL;
                        v725 += 4096LL;
                        if ( v725 == v724 )
                        {
                          __writecr8(i1);
                          i7 = 0;
                          goto LABEL_1168;
                        }
                      }
                      __writecr8(i1);
                      v721 = *((_QWORD *)v56 + 1);
                      i7 = 0;
                    }
                  }
                  if ( !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v721;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v711, v712);
                  }
                }
LABEL_1168:
                v180 = 16 * *((_DWORD *)v56 + 4);
LABEL_367:
                *(_DWORD *)(v18 + 2088) += v180;
                goto LABEL_181;
              }
            }
            __writecr8(v708);
            v56 = v1559;
            i7 = 0;
          }
        }
        v718 = *(_DWORD *)(v18 + 2296);
        if ( !v718 )
        {
          *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v702 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
          v718 = *(_DWORD *)(v18 + 2296);
        }
        v719 = *((_QWORD *)v56 + 1);
        if ( !v718 )
        {
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v719;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, v698, v688);
        }
        goto LABEL_1139;
      }
      if ( v78 == 15 )
      {
        if ( *(_DWORD *)(v18 + 2392) == 11 )
        {
          *(_DWORD *)(v18 + 2088) += 256;
          v679 = *(_QWORD *)(v18 + 1416);
          i1 = (*(__int64 (__fastcall **)(__int64))(v18 + 728))(v679);
          if ( i1 )
          {
            v680 = (*(__int64 (__fastcall **)(unsigned __int64))(v18 + 736))(i1);
            v683 = *((_QWORD *)v56 + 3);
            v684 = v680;
            if ( v683 )
            {
              if ( v683 != v680 && !*(_DWORD *)(v18 + 2296) )
              {
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = *(int *)v56;
                *(_QWORD *)(v18 + 2328) = v680;
                *(_DWORD *)(v18 + 2296) = 1;
                sub_14036B3BC(v18, 0LL, v681, v682);
              }
            }
            else
            {
              v685 = *(_QWORD *)(v18 + 2424);
              if ( (!*(_DWORD *)(v18 + 2420) || v680 < v685 || v680 > v685 + *(unsigned int *)(v18 + 2420) - 1LL)
                && !*(_DWORD *)(v18 + 2296) )
              {
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = *(int *)v56;
                *(_QWORD *)(v18 + 2328) = v680;
                *(_DWORD *)(v18 + 2296) = 1;
                sub_14036B3BC(v18, 0LL, v681, v682);
              }
              *((_QWORD *)v56 + 3) = v684;
            }
            (*(void (__fastcall **)(__int64, unsigned __int64))(v18 + 744))(v679, i1);
          }
        }
        goto LABEL_181;
      }
      if ( v78 == 21 )
      {
        v673 = *((_DWORD *)v56 + 10);
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 416))(v1735, *((unsigned int *)v56 + 11));
        v674 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v18 + 464))(v1735, v1736);
        if ( v1759 == 38 )
        {
          __asm { xgetbv }
          v676 = v674 | (v675 << 32);
        }
        else if ( v673 )
        {
          v676 = __readcr4();
        }
        else
        {
          v676 = __readcr0();
        }
        (*(void (__fastcall **)(_BYTE *))(v18 + 408))(v1736);
        v677 = *((_QWORD *)v56 + 4);
        v55 = v676 & *((_QWORD *)v56 + 3);
        if ( v55 == v677 )
          goto LABEL_181;
        v678 = *((_QWORD *)v56 + 5);
        if ( *(_DWORD *)(v18 + 2296) )
          goto LABEL_181;
        *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v55 ^ v677;
        if ( *(_DWORD *)(v18 + 2296) )
          goto LABEL_181;
        *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v18 + 2320) = *(int *)v56;
        *(_QWORD *)(v18 + 2328) = v678;
        goto LABEL_249;
      }
      if ( v78 != 24 )
      {
        if ( v78 != 25 )
        {
          if ( v78 == 26 )
          {
            if ( (*(_DWORD *)(v18 + 2096) & 1) != 0 )
              goto LABEL_181;
            v265 = 0;
            v266 = *(_QWORD *)(v18 + 1448);
            v267 = *(_QWORD *)(v18 + 1352);
            v1561 = *(_QWORD *)(v18 + 1456);
            v268 = *(void (**)(void))(v18 + 376);
            v1766 = 0;
            v1563 = v266;
            v268();
            if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 || (v269 = *(_DWORD *)(v18 + 2384), v269 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 296))(*(_QWORD *)(v18 + 2560), 0LL);
              v270 = 0x80;
            }
            else
            {
              v270 = 1 << v269;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v18 + 312))(v267, 0LL);
            v271 = *(volatile signed __int8 ***)(v18 + 1312);
            v272 = *v271;
            if ( *v271 != (volatile signed __int8 *)v271 )
            {
              do
              {
                _InterlockedOr8(&v272[*(_QWORD *)(v18 + 1720) - *(_QWORD *)(v18 + 1744)], v270);
                v272 = *(volatile signed __int8 **)v272;
                ++v265;
              }
              while ( v272 != (volatile signed __int8 *)v271 );
              v1766 = v265;
            }
            (*(void (__fastcall **)(ULONG_PTR, _QWORD))(v18 + 312))(v266, 0LL);
            v274 = *(unsigned __int64 **)(v18 + 1440);
            i1 = *v274;
            if ( (unsigned __int64 *)*v274 != v274 )
            {
              v275 = v1561;
              v276 = (int *)v1559;
              do
              {
                v277 = i1 - *(_QWORD *)(v18 + 1856);
                if ( v277 != v275 )
                {
                  v278 = *(_QWORD *)(v18 + 1720);
                  v279 = v278;
                  v280 = *(_QWORD *)(v277 + *(_QWORD *)(v18 + 1848));
                  if ( (v270 & *(_BYTE *)(v280 + v278)) == 0
                    && (*(_DWORD *)(v280 + *(_QWORD *)(v18 + 1728)) & *(_DWORD *)(v18 + 1752)) != 0
                    && !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = (char *)v276 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *v276;
                    *(_QWORD *)(v18 + 2328) = v280;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v278, v273);
                    v279 = *(_QWORD *)(v18 + 1720);
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v280 + v279), ~v270);
                  v275 = v1561;
                }
                i1 = *(_QWORD *)i1;
              }
              while ( (unsigned __int64 *)i1 != v274 );
              v265 = v1766;
              v266 = v1563;
            }
            (*(void (__fastcall **)(ULONG_PTR, _QWORD))(v18 + 320))(v266, 0LL);
            if ( v270 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 304))(*(_QWORD *)(v18 + 2560), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 1352), 0LL);
            (*(void (**)(void))(v18 + 384))();
            *(_DWORD *)(v18 + 2088) += v265 << 8;
            goto LABEL_241;
          }
          if ( v78 == 27 )
          {
            if ( (*(_DWORD *)(v18 + 2096) & 1) == 0 )
              goto LABEL_181;
            v244 = *(_QWORD *)(v18 + 1448);
            v245 = *(_QWORD **)(v18 + 1456);
            v246 = *(void (**)(void))(v18 + 376);
            v247 = *(_QWORD *)(v18 + 1352);
            v1571 = v244;
            v1563 = (ULONG_PTR)v245;
            v1562 = 0;
            v246();
            if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 || (v248 = *(_DWORD *)(v18 + 2384), v248 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 296))(*(_QWORD *)(v18 + 2560), 0LL);
              LOBYTE(v48) = 0x80;
            }
            else
            {
              v48 = 1;
              LOBYTE(v48) = 1 << v248;
            }
            v249 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 312);
            LODWORD(v1564) = v48;
            v249(v247, 0LL);
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(v18 + 312))(v244, 0LL);
            v250 = *(unsigned __int64 **)(v18 + 1440);
            v251 = 0LL;
            v1561 = 0LL;
            v252 = *v250;
            if ( (unsigned __int64 *)*v250 != v250 )
            {
              do
              {
                if ( (_QWORD *)(v252 - 24) != v245 )
                {
                  v253 = *(_QWORD *)(v252 - 24 + *(_QWORD *)(v18 + 1848));
                  if ( (*(_DWORD *)(v253 + *(_QWORD *)(v18 + 1728)) & *(_DWORD *)(v18 + 1752)) == 0 )
                  {
                    v254 = *(_QWORD *)(v252 - 24 + *(_QWORD *)(v18 + 1848));
                    if ( v251 )
                      v254 = 1LL;
                    v251 = v254;
                  }
                  _InterlockedOr8((volatile signed __int8 *)(v253 + *(_QWORD *)(v18 + 1720)), v48);
                }
                v252 = *(_QWORD *)v252;
              }
              while ( (unsigned __int64 *)v252 != v250 );
              v1561 = v251;
            }
            v255 = *(unsigned __int64 **)(v18 + 1312);
            i1 = *v255;
            if ( (unsigned __int64 *)*v255 != v255 )
            {
              v256 = v1562;
              v252 = (unsigned __int8)v48;
              v257 = ~(_BYTE)v48;
              v258 = v1563;
              v1765 = v252;
              do
              {
                v259 = i1 - *(_QWORD *)(v18 + 1744);
                v260 = *(_QWORD *)(v18 + 1720);
                if ( (*(char *)(v259 + v260) & (unsigned int)v252) == 0 )
                {
                  v261 = *(_QWORD *)(v259 + *(_QWORD *)(v18 + 1736));
                  if ( v261 && v261 != v258 && !*(_DWORD *)(v18 + 2296) )
                  {
                    v262 = (int *)v1559;
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = (char *)v262 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *v262;
                    *(_QWORD *)(v18 + 2328) = v259;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v261, v250);
                    v260 = *(_QWORD *)(v18 + 1720);
                  }
                  v252 = v1765;
                }
                _InterlockedAnd8((volatile signed __int8 *)(v259 + v260), v257);
                i1 = *(_QWORD *)i1;
                ++v256;
              }
              while ( (unsigned __int64 *)i1 != v255 );
              LOBYTE(v48) = v1564;
              v245 = (_QWORD *)v1563;
              v1562 = v256;
              v251 = v1561;
            }
            i7 = 0;
            if ( v251 )
            {
              if ( v251 == 1 )
              {
                v263 = *(_QWORD ***)(v18 + 1440);
                for ( i13 = *v263; i13 != v263; i13 = (_QWORD *)*i13 )
                {
                  v252 = (unsigned __int64)(i13 - 3);
                  if ( i13 - 3 != v245 )
                  {
                    v252 = *(_QWORD *)(v252 + *(_QWORD *)(v18 + 1848));
                    _InterlockedAnd8((volatile signed __int8 *)(v252 + *(_QWORD *)(v18 + 1720)), ~(_BYTE)v48);
                  }
                }
              }
              else
              {
                _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v18 + 1720) + v251), ~(_BYTE)v48);
              }
            }
            (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64))(v18 + 320))(v1571, 0LL, v252);
            if ( (_BYTE)v48 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 304))(*(_QWORD *)(v18 + 2560), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 1352), 0LL);
            (*(void (**)(void))(v18 + 384))();
            v180 = v1562 << 8;
            goto LABEL_367;
          }
LABEL_2311:
          v1410 = v78 - 2;
          if ( v1410 )
          {
            v1411 = v1410 - 1;
            if ( v1411 )
            {
              if ( v1411 != 20 )
              {
                if ( *(_DWORD *)(v18 + 2296) )
                  goto LABEL_181;
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = 257LL;
                *(_QWORD *)(v18 + 2328) = 0LL;
LABEL_2310:
                *(_DWORD *)(v18 + 2296) = 1;
                goto LABEL_250;
              }
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 416))(v1738, *((unsigned int *)v56 + 10));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 464))(v1738, v1739);
              v1412 = *(_QWORD *)(v18 + 2576);
              if ( v1412 )
              {
                v1413 = *(_DWORD *)(v1412 + 800);
                v1412 = *(_QWORD *)(v18 + 2576);
              }
              else
              {
                v1414 = __readmsr(0x832u);
                v1413 = v1414;
              }
              if ( v1412 )
              {
                LODWORD(i1) = *(_DWORD *)(v1412 + 832);
              }
              else
              {
                v1415 = __readmsr(0x834u);
                LODWORD(i1) = v1415;
              }
              (*(void (__fastcall **)(_BYTE *))(v18 + 408))(v1739);
              if ( (*(_BYTE *)(v18 + 2171) & 0x10) != 0 )
              {
                _disable();
                v1417 = *(_QWORD *)(v18 + 2272);
                v1418 = 38LL;
                v1419 = 304;
                v1420 = (_QWORD *)v1417;
                do
                {
                  *v1420 = 0LL;
                  v1419 -= 8;
                  ++v1420;
                  --v1418;
                }
                while ( v1418 );
                for ( ; v1419; --v1419 )
                {
                  *(_BYTE *)v1420 = 0;
                  v1420 = (_QWORD *)((char *)v1420 + 1);
                }
                *(_OWORD *)(v1417 + 16) = *(_OWORD *)(v18 + 2120);
                *(_OWORD *)(v1417 + 32) = *(_OWORD *)(v18 + 2136);
                *(_OWORD *)(v1417 + 288) = *(_OWORD *)(v18 + 2152);
                v1643 = 303;
                v1644 = v1417;
                *(_WORD *)(v1417 + 16) = v18 + 2168;
                v1715 = v18 + 2168;
                *(_WORD *)(v1417 + 22) = (unsigned int)(v18 + 2168) >> 16;
                *(_DWORD *)(v1417 + 24) = (v18 + 2168) >> 32;
                __sidt(v1674);
                __lidt(&v1643);
                if ( (*(_DWORD *)(v18 + 2452) & 0x20000) == 0 )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  **(_QWORD **)(v18 + 1216) = v18 - 0x5C5FC0A76E374B18LL;
                  **(_QWORD **)(v18 + 1224) = CurrentPrcb;
                  **(_QWORD **)(v18 + 1232) = 0LL;
                  **(_QWORD **)(v18 + 1240) = 277LL;
                }
                KiErrata361Present();
                if ( (*(_DWORD *)(v18 + 2452) & 0x20000) == 0 )
                {
                  **(_QWORD **)(v18 + 1216) = 0xA3A03F5891C8B4E8uLL;
                  **(_QWORD **)(v18 + 1224) = 0LL;
                  **(_QWORD **)(v18 + 1232) = 0LL;
                  **(_QWORD **)(v18 + 1240) = 0LL;
                }
                __lidt(v1674);
                _enable();
              }
              v1422 = *((unsigned int *)v56 + 6);
              if ( (v1413 & *((_DWORD *)v56 + 7)) != (_DWORD)v1422
                || (v1413 & 0x10000) == 0 && (_BYTE)v1413 != 0xD1 && (unsigned __int8)(v1413 + 3) > 1u )
              {
                v1423 = v1422 | ((unsigned __int64)*((unsigned int *)v56 + 10) << 48) | 0x32000000000LL;
                if ( !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1422 ^ v1413;
                  if ( !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v1423;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v1422, v1416);
                  }
                }
              }
              v1424 = *((unsigned int *)v56 + 8);
              if ( ((unsigned int)i1 & *((_DWORD *)v56 + 9)) != (_DWORD)v1424
                || (i1 & 0x10000) == 0 && (_BYTE)i1 != 0xD1 && (unsigned __int8)(i1 + 3) > 1u )
              {
                v1425 = v1424 | ((unsigned __int64)*((unsigned int *)v56 + 10) << 48) | 0x34000000000LL;
                if ( !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1424 ^ (unsigned int)i1;
                  if ( !*(_DWORD *)(v18 + 2296) )
                  {
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v1425;
                    *(_DWORD *)(v18 + 2296) = 1;
                    goto LABEL_2346;
                  }
                }
              }
              goto LABEL_2347;
            }
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 416))(v1740, *((unsigned int *)v56 + 10));
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 464))(v1740, v1741);
            KiGetGdtIdt(&v1628, v1754);
            v1426 = v1629;
            i1 = *((unsigned int *)v56 + 4);
            if ( (*(_BYTE *)(v18 + 2171) & 2) != 0 )
            {
              v1427 = *(_QWORD *)(v18 + 2272);
              v1428 = 38LL;
              v1429 = 304;
              v1430 = (_QWORD *)v1427;
              do
              {
                *v1430 = 0LL;
                v1429 -= 8;
                ++v1430;
                --v1428;
              }
              while ( v1428 );
              if ( v1429 )
              {
                v1428 = 0xFFFFFFFFLL;
                do
                {
                  *(_BYTE *)v1430 = 0;
                  v1430 = (_QWORD *)((char *)v1430 + 1);
                  --v1429;
                }
                while ( v1429 );
              }
              *(_OWORD *)(v1427 + 16) = *(_OWORD *)(v18 + 2120);
              *(_OWORD *)(v1427 + 32) = *(_OWORD *)(v18 + 2136);
              *(_OWORD *)(v1427 + 288) = *(_OWORD *)(v18 + 2152);
              v1647 = 303;
              v1648 = v1427;
              *(_WORD *)(v1427 + 16) = v18 + 2168;
              v1716 = v18 + 2168;
              *(_WORD *)(v1427 + 22) = (unsigned int)(v18 + 2168) >> 16;
              *(_DWORD *)(v1427 + 24) = (v18 + 2168) >> 32;
              _disable();
              __sidt(v1672);
              __lidt(&v1647);
              __writedr(7u, 0LL);
              *(_WORD *)(v1427 + 16) = v18 + 2174;
              v1431 = (v18 + 2174) >> 16;
              *(_WORD *)(v1427 + 22) = v1431;
              *(_DWORD *)(v1427 + 24) = (v18 + 2174) >> 32;
              if ( (*(_BYTE *)(v18 + 2171) & 0x20) != 0 )
              {
                *(_WORD *)(v18 + 2218) = KiGetSs(v1431, v1427, v1428, 1LL);
                __writedr(0, v18 + 2218);
                __writedr(7u, 0x70001uLL);
                *(_QWORD *)(v18 + 2280) = KiErrataSkx55Present(v18 + 2218);
                __writedr(7u, 0LL);
                __writedr(0, 0LL);
              }
              else
              {
                *(_QWORD *)(v18 + 2280) = KiErrata704Present(v1431, v1427, v1428, 1LL);
              }
              *(_DWORD *)(v18 + 2288) = KeGetPcr()->Prcb.Number;
              __lidt(v1672);
              _enable();
            }
            Ldtr = KiGetLdtr();
            Tr = KiGetTr();
            *(_DWORD *)(v18 + 2088) += i1;
            v1434 = (unsigned __int64)v1426 + i1;
            v1435 = *(_DWORD *)(v18 + 2068);
            v1436 = Tr;
            v1437 = *(_QWORD *)(v18 + 2072);
            v1438 = v1426;
            v1785 = Tr;
            v1439 = (const char *)v1426;
            if ( v1426 < (_QWORD *)((char *)v1426 + i1) )
            {
              do
              {
                _mm_prefetch(v1439, 0);
                v1439 += 64;
              }
              while ( (unsigned __int64)v1439 < v1434 );
            }
            v1440 = *(_QWORD *)(v18 + 2072);
            v1441 = (unsigned int)i1 >> 7;
            if ( (unsigned int)i1 >> 7 )
            {
              do
              {
                v1442 = 8LL;
                do
                {
                  v1443 = v1440 ^ *v1438;
                  v1444 = v1438[1];
                  v1438 += 2;
                  v1440 = __ROL8__(__ROL8__(v1443, v1435) ^ v1444, v1435);
                  --v1442;
                }
                while ( v1442 );
                v1445 = __ROL8__(v1437 ^ ((char *)v1438 - (char *)v1426), 17) ^ v1437 ^ ((char *)v1438 - (char *)v1426);
                v1434 = (v1445 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1717 = v1434;
                v1435 = ((unsigned __int8)(v1434 ^ v1445) ^ (unsigned __int8)v1435) & 0x3F;
                if ( !v1435 )
                  LOBYTE(v1435) = 1;
                --v1441;
              }
              while ( v1441 );
              v18 = (ULONG_PTR)v1560;
              v1436 = v1785;
            }
            LODWORD(i1) = i1 & 0x7F;
            if ( (unsigned int)i1 >= 8 )
            {
              v1434 = (unsigned __int64)(unsigned int)i1 >> 3;
              do
              {
                v1440 = __ROL8__(*v1438++ ^ v1440, v1435);
                LODWORD(i1) = i1 - 8;
                --v1434;
              }
              while ( v1434 );
            }
            if ( (_DWORD)i1 )
            {
              do
              {
                v1446 = *(unsigned __int8 *)v1438;
                v1438 = (_QWORD *)((char *)v1438 + 1);
                v1440 = __ROL8__(v1446 ^ v1440, v1435);
                LODWORD(i1) = i1 - 1;
              }
              while ( (_DWORD)i1 );
              v18 = (ULONG_PTR)v1560;
            }
            for ( i14 = v1440; ; LODWORD(v1440) = i14 ^ v1440 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            v1448 = v1440 & 0x7FFFFFFF;
            (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD *, __int64))(v18 + 408))(v1741, v1434, v1438, 1LL);
            if ( v1448 == *((_DWORD *)v56 + 5) && v1628 == *((_WORD *)v56 + 22) && !Ldtr && v1436 == 64 )
            {
              i7 = 0;
              goto LABEL_2347;
            }
            v1416 = 1LL;
            if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
            {
              v1449 = *(_QWORD **)(v18 + 2688);
              v1450 = 48;
              v1424 = 6LL;
              do
              {
                v1450 -= 8;
                *v1449 = *(_QWORD *)v56;
                v56 += 8;
                ++v1449;
                --v1424;
              }
              while ( v1424 );
              if ( v1450 )
              {
                do
                {
                  v1451 = *v56++;
                  *(_BYTE *)v1449 = v1451;
                  v1449 = (_QWORD *)((char *)v1449 + 1);
                  --v1450;
                }
                while ( v1450 );
                v18 = (ULONG_PTR)v1560;
              }
              v56 = *(char **)(v18 + 2688);
            }
            *((_QWORD *)v56 + 3) = v1629;
            *((_QWORD *)v56 + 4) = v1448;
            if ( Ldtr )
            {
              v1452 = Ldtr;
              goto LABEL_2391;
            }
            if ( v1436 != 64 )
            {
              v1452 = v1436;
LABEL_2391:
              *((_QWORD *)v56 + 3) = v1452;
            }
            v1453 = *(_DWORD *)(v18 + 2296);
            i7 = 0;
            if ( !v1453 )
            {
              *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1448 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
              v1453 = *(_DWORD *)(v18 + 2296);
            }
            v1454 = *((_QWORD *)v56 + 1);
            if ( !v1453 )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v56;
              *(_QWORD *)(v18 + 2328) = v1454;
              *(_DWORD *)(v18 + 2296) = 1;
LABEL_2346:
              sub_14036B3BC(v18, 0LL, v1424, v1416);
            }
LABEL_2347:
            v180 = 0x8000;
            goto LABEL_367;
          }
          v1455 = *((unsigned int *)v56 + 10);
          v1456 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 416);
          LODWORD(v1569) = 0;
          v1456(v1742, v1455);
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 464))(v1742, v1743);
          KiGetGdtIdt(v1753, &v1645);
          v1457 = 0;
          v1574 = v1646;
          v1458 = v1646 + 4;
          v1561 = v1646 + 4;
          v1562 = 0;
          while ( 2 )
          {
            v1459 = 0LL;
            v1600 = *(_QWORD *)(v18 + 2248);
            v1460 = 0LL;
            v1461 = *(_QWORD *)(v18 + 2256);
            v1462 = *(unsigned int *)(v18 + 2224);
            v1564 = 0LL;
            v1463 = *(unsigned int *)(v18 + 2220);
            v1563 = 0LL;
            v1464 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            v1465 = *(_WORD *)v1458;
            LOWORD(v1589) = *(_WORD *)(v1458 - 4);
            WORD1(v1589) = *(_WORD *)(v1458 + 2);
            v1466 = *(_DWORD *)(v1458 + 4);
            v1467 = *(_QWORD *)(v18 + 1560);
            HIDWORD(v1589) = v1466;
            v1468 = v1589;
            v1786 = v1465;
            v1469 = v1467 + 8LL * v1457;
            if ( v1589 == v1469 )
            {
              if ( (v1465 & 0x6000) != 0 )
              {
                __writecr8(v1464);
                goto LABEL_2405;
              }
              v1460 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v18 + 1136))(v1457, v1469, 0LL);
              if ( v1460 )
              {
                v1470 = *(_QWORD *)(v1463 + v1460);
                v1564 = v1470;
                if ( v1562 < 0x30 )
                {
                  __writecr8(v1464);
LABEL_2404:
                  v1459 = v1564;
LABEL_2405:
                  v1471 = *(_QWORD *)(v18 + 1424);
                  *(_QWORD *)v1471 = v1468;
                  *(_DWORD *)(v1471 + 16) = 128;
                  if ( v1459 )
                  {
                    v1472 = *(_QWORD *)(v18 + 1424);
                    *(_QWORD *)(v1472 + 8) = v1459;
                    *(_DWORD *)(v1472 + 20) = 128;
                  }
                  LODWORD(v1569) = 1;
                  goto LABEL_2424;
                }
                v1473 = *(_QWORD *)(v1462 + v1460);
LABEL_2412:
                __writecr8(v1464);
                if ( !v1460 )
                {
                  if ( v1468 < v1600 )
                    goto LABEL_2404;
                  if ( v1468 > v1461 )
                    goto LABEL_2404;
                  v1474 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v18 + 528))(
                            *(_QWORD *)(v18 + 2264),
                            v1600,
                            (unsigned int)(v1589 - v1600));
                  if ( !v1474 || (*(_DWORD *)(v1474 + 36) & 0x2000000) != 0 )
                    goto LABEL_2404;
                }
                if ( *(_WORD *)(v1561 - 2) != 16 || (*(_WORD *)v1561 & 0x1F00) != 0xE00 || *(__int16 *)v1561 >= 0 )
                  goto LABEL_2404;
                v1475 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v18 + 608))(
                                          v1468,
                                          &v1600,
                                          0LL);
                if ( v1475 && v1600 + *v1475 == v1468 && v1600 == *(_QWORD *)(v18 + 2248) )
                {
                  if ( !v1460 )
                    goto LABEL_2424;
                }
                else if ( !v1460 )
                {
                  goto LABEL_2404;
                }
                if ( (v1786 & 0x6000) != 0 )
                  goto LABEL_2404;
                if ( v1460 != -1 )
                {
                  v1495 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v18 + 608))(
                                            v1470,
                                            &v1600,
                                            0LL);
                  if ( !v1495 )
                    goto LABEL_2404;
                  if ( v1600 + *v1495 != v1470 )
                    goto LABEL_2404;
                  if ( v1600 != *(_QWORD *)(v18 + 2248) )
                    goto LABEL_2404;
                  v1496 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v18 + 528))(
                            *(_QWORD *)(v18 + 2264),
                            v1600,
                            (unsigned int)(v1470 - v1600));
                  if ( !v1496
                    || (*(_DWORD *)(v1496 + 36) & 0x2000000) != 0
                    || v1562 == 254 && v1473 != *(_QWORD *)(v18 + 2232) )
                  {
                    goto LABEL_2404;
                  }
                }
LABEL_2424:
                v1457 = v1562 + 1;
                v1458 = v1561 + 16;
                v1562 = v1457;
                v1561 += 16LL;
                if ( v1457 > 0xFF )
                {
                  if ( (*(_BYTE *)(v18 + 2171) & 1) != 0 )
                  {
                    _disable();
                    v1476 = 3221225602LL;
                    v1477 = __readmsr(0xC0000082);
                    v1478 = (v18 + 2170) >> 32;
                    __writemsr(0xC0000082, v18 + 2170);
                    if ( (*(_DWORD *)(v18 + 2452) & 0x20000) == 0 )
                    {
                      v1479 = KeGetCurrentPrcb();
                      v1478 = v18 - 0x5C5FC0A76E374B18LL;
                      **(_QWORD **)(v18 + 1216) = v18 - 0x5C5FC0A76E374B18LL;
                      **(_QWORD **)(v18 + 1224) = v1479;
                      **(_QWORD **)(v18 + 1232) = 3221225602LL;
                      v1476 = *(_QWORD *)(v18 + 1240);
                      *(_QWORD *)v1476 = 274LL;
                    }
                    ((void (__fastcall *)(__int64, unsigned __int64))(v18 + 2172))(v1476, v1478);
                    if ( (*(_DWORD *)(v18 + 2452) & 0x20000) == 0 )
                    {
                      **(_QWORD **)(v18 + 1216) = 0xA3A03F5891C8B4E8uLL;
                      **(_QWORD **)(v18 + 1224) = 0LL;
                      **(_QWORD **)(v18 + 1232) = 0LL;
                      **(_QWORD **)(v18 + 1240) = 0LL;
                    }
                    __writemsr(0xC0000082, v1477);
                    _enable();
                  }
                  v1480 = (_QWORD *)v1574;
                  *(_DWORD *)(v18 + 2088) += 848;
                  v1481 = v1480;
                  v1482 = *(_DWORD *)(v18 + 2088);
                  v1483 = (const char *)v1480;
                  v1484 = *(_DWORD *)(v18 + 2068);
                  v1485 = *(_QWORD *)(v18 + 2072);
                  if ( v1480 < v1480 + 106 )
                  {
                    do
                    {
                      _mm_prefetch(v1483, 0);
                      v1483 += 64;
                    }
                    while ( v1483 < (const char *)v1480 + 848 );
                  }
                  i1 = *(_QWORD *)(v18 + 2072);
                  v1486 = 6;
                  do
                  {
                    v1487 = 8LL;
                    do
                    {
                      v1488 = v1481[1] ^ __ROL8__(*v1481 ^ i1, v1484);
                      v1481 += 2;
                      i1 = __ROL8__(v1488, v1484);
                      --v1487;
                    }
                    while ( v1487 );
                    v1489 = (__ROL8__(v1485 ^ ((char *)v1481 - (char *)v1480), 17) ^ v1485 ^ (unsigned __int64)((char *)v1481 - (char *)v1480))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v1718 = *((_QWORD *)&v1489 + 1);
                    v1484 = (BYTE8(v1489) ^ (unsigned __int8)(v1489 ^ v1484)) & 0x3F;
                    if ( !v1484 )
                      LOBYTE(v1484) = 1;
                    --v1486;
                  }
                  while ( v1486 );
                  v18 = (ULONG_PTR)v1560;
                  v1490 = 80;
                  v1491 = v1569;
                  v1492 = 10LL;
                  do
                  {
                    i1 = __ROL8__(*v1481++ ^ i1, v1484);
                    v1490 -= 8;
                    --v1492;
                  }
                  while ( v1492 );
                  for ( ; v1490; --v1490 )
                  {
                    v1493 = *(unsigned __int8 *)v1481;
                    v1481 = (_QWORD *)((char *)v1481 + 1);
                    i1 = __ROL8__(v1493 ^ i1, v1484);
                  }
                  for ( i15 = i1; ; LODWORD(i1) = i15 ^ i1 )
                  {
                    i15 >>= 31;
                    if ( !i15 )
                      break;
                  }
                  LODWORD(i1) = i1 & 0x7FFFFFFF;
                  *((_DWORD *)&v1560[130].Next + 2) = v1482 + 16;
                  v1497 = v1480 + 450;
                  v1498 = *(_DWORD *)(v18 + 2068);
                  v1499 = *(_QWORD *)(v18 + 2072);
                  v1500 = (const char *)(v1480 + 450);
                  if ( v1480 + 450 < v1480 + 452 )
                  {
                    do
                    {
                      _mm_prefetch(v1500, 0);
                      v1500 += 64;
                    }
                    while ( v1500 < (const char *)v1480 + 3616 );
                  }
                  v1501 = 2LL;
                  v1502 = 16;
                  do
                  {
                    v1499 = __ROL8__(*v1497++ ^ v1499, v1498);
                    v1502 -= 8;
                    --v1501;
                  }
                  while ( v1501 );
                  for ( ; v1502; --v1502 )
                  {
                    v1503 = *(unsigned __int8 *)v1497;
                    v1497 = (_QWORD *)((char *)v1497 + 1);
                    v1499 = __ROL8__(v1503 ^ v1499, v1498);
                  }
                  for ( i16 = v1499; ; LODWORD(v1499) = i16 ^ v1499 )
                  {
                    i16 >>= 31;
                    if ( !i16 )
                      break;
                  }
                  v1505 = v1499 & 0x7FFFFFFF;
                  (*(void (__fastcall **)(_BYTE *, _QWORD *))(v18 + 408))(v1743, v1497);
                  v1507 = (int *)v1559;
                  v1508 = *((unsigned int *)v1559 + 5);
                  if ( (_DWORD)i1 == (_DWORD)v1508
                    && v1505 == *((_QWORD *)v1559 + 3)
                    && v1645 == *((_WORD *)v1559 + 22)
                    && !v1491 )
                  {
                    i7 = 0;
                  }
                  else
                  {
                    if ( v1491 )
                    {
                      i7 = 0;
                    }
                    else
                    {
                      i7 = 0;
                      if ( v1505 == *((_QWORD *)v1559 + 3) )
                      {
                        if ( !*(_DWORD *)(v18 + 2296) )
                        {
                          v1509 = v1508 ^ (unsigned int)i1;
                          goto LABEL_2474;
                        }
                      }
                      else if ( !*(_DWORD *)(v18 + 2296) )
                      {
                        v1509 = v1505 ^ (unsigned __int64)*((unsigned int *)v1559 + 6);
LABEL_2474:
                        *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1509;
                      }
                    }
                    v1510 = *((_QWORD *)v1507 + 1);
                    if ( !*(_DWORD *)(v18 + 2296) )
                    {
                      *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2312) = (char *)v1507 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2320) = *v1507;
                      *(_QWORD *)(v18 + 2328) = v1510;
                      *(_DWORD *)(v18 + 2296) = 1;
                      sub_14036B3BC(v18, 0LL, v1507, v1506);
                    }
                  }
                  *(_DWORD *)(v18 + 2088) += 0x10000;
                  goto LABEL_181;
                }
                continue;
              }
              v1460 = -1LL;
              v1473 = 0LL;
            }
            else
            {
              v1473 = v1563;
            }
            break;
          }
          v1470 = v1564;
          goto LABEL_2412;
        }
        v281 = *(_QWORD ***)(v18 + 1328);
        v282 = *(__int64 (**)(void))(v18 + 888);
        v1561 = (__int64)v281;
        v1767 = 0;
        v1572 = (_BYTE *)v282();
        _disable();
        v283 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1608));
        _enable();
        (*(void (__fastcall **)(__int64))(v18 + 360))(v283);
        LOBYTE(v284) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(v18 + 240))(*(_QWORD *)(v18 + 1336), v284);
        v285 = 0;
        v286 = **(unsigned int ***)(v18 + 1552);
        v287 = *v286;
        v1563 = (ULONG_PTR)(v286 + 4);
        v1571 = (unsigned __int64)&v286[6 * v287 + 4];
        if ( *((_BYTE *)v286 + 12) )
        {
          v288 = *v281;
          LODWORD(v287) = 0;
          while ( v288 != v281 )
          {
            v288 = (_QWORD *)*v288;
            LODWORD(v287) = v287 + 1;
          }
        }
        v289 = *(unsigned int *)(v18 + 2064);
        v290 = __rdtsc();
        v291 = __ROR8__(v290, 3);
        v1728 = ((v291 ^ v290) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v292 = ((unsigned __int16)v1728 ^ (unsigned __int16)(8193 * (v291 ^ v290))) & 0x7FF;
        v293 = __rdtsc();
        v294 = (__ROR8__(v293, 3) ^ v293) * (unsigned __int128)0x7010008004002001uLL;
        v1729 = *((_QWORD *)&v294 + 1);
        i1 = (*((_QWORD *)&v294 + 1) ^ (unsigned __int64)v294) % (unsigned int)(v292 + 1);
        v295 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v18 + 248))(
                 512LL,
                 (unsigned int)(v292 + 8 * v287),
                 v289);
        v296 = v295;
        if ( !v295 )
        {
          ++*(_DWORD *)(v18 + 2584);
          goto LABEL_543;
        }
        v297 = i1;
        v298 = (_QWORD *)v295;
        if ( (unsigned int)i1 >= 8 )
        {
          v299 = (unsigned __int64)(unsigned int)i1 >> 3;
          do
          {
            v300 = __rdtsc();
            v297 -= 8;
            v301 = (__ROR8__(v300, 3) ^ v300) * (unsigned __int128)0x7010008004002001uLL;
            v1730 = *((_QWORD *)&v301 + 1);
            *v298++ = v301 ^ *((_QWORD *)&v301 + 1);
            --v299;
          }
          while ( v299 );
          v18 = (ULONG_PTR)v1560;
          v281 = (_QWORD **)v1561;
        }
        if ( v297 )
        {
          v302 = __rdtsc();
          v303 = (__ROR8__(v302, 3) ^ v302) * (unsigned __int128)0x7010008004002001uLL;
          v1731 = *((_QWORD *)&v303 + 1);
          v304 = v303 ^ *((_QWORD *)&v303 + 1);
          do
          {
            *(_BYTE *)v298 = v304;
            v298 = (_QWORD *)((char *)v298 + 1);
            v304 >>= 8;
            --v297;
          }
          while ( v297 );
        }
        v305 = (unsigned int)i1;
        v306 = v292 - i1;
        LODWORD(i1) = 67117057;
        v307 = (_QWORD *)(v296 + v305 + (unsigned int)(8 * v287));
        if ( v306 >= 8 )
        {
          v298 = (_QWORD *)((unsigned __int64)v306 >> 3);
          do
          {
            v308 = __rdtsc();
            v306 -= 8;
            v309 = (__ROR8__(v308, 3) ^ v308) * (unsigned __int128)0x7010008004002001uLL;
            v1732 = *((_QWORD *)&v309 + 1);
            *v307++ = v309 ^ *((_QWORD *)&v309 + 1);
            v298 = (_QWORD *)((char *)v298 - 1);
          }
          while ( v298 );
        }
        if ( v306 )
        {
          v310 = __rdtsc();
          v311 = (__ROR8__(v310, 3) ^ v310) * (unsigned __int128)0x7010008004002001uLL;
          v1747 = *((_QWORD *)&v311 + 1);
          v312 = v311 ^ *((_QWORD *)&v311 + 1);
          do
          {
            *(_BYTE *)v307 = v312;
            v307 = (_QWORD *)((char *)v307 + 1);
            v312 >>= 8;
            --v306;
          }
          while ( v306 );
        }
        v313 = v305 + v296;
        v1623 = v296;
        if ( v305 + v296 )
        {
          v314 = *v281;
          while ( v314 != v281 )
          {
            v315 = *(_QWORD *)((char *)v314 + *(_QWORD *)(v18 + 1872) - *(_QWORD *)(v18 + 1864));
            if ( !(*(unsigned int (__fastcall **)(__int64))(v18 + 680))(v315) && v285 < (unsigned int)v287 )
            {
              v316 = v285++;
              *(_QWORD *)(v313 + 8 * v316) = v315;
            }
            v314 = (_QWORD *)*v314;
            ++v1767;
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(v18 + 920))(v313, v285, v307, v298);
          i1 = v1563;
          v317 = v1571;
          do
          {
            v318 = *(_QWORD *)(i1 + 8);
            if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v18 + 680))(v318) )
            {
              v320 = v285 - 1;
              v321 = 0LL;
              if ( (int)(v285 - 1) < 0 )
                goto LABEL_560;
              do
              {
                v322 = (v320 + (int)v321) >> 1;
                if ( v318 >= *(_QWORD *)(v313 + 8LL * v322) )
                {
                  if ( v318 <= *(_QWORD *)(v313 + 8LL * v322) )
                    break;
                  v321 = (unsigned int)(v322 + 1);
                }
                else
                {
                  if ( !v322 )
                    goto LABEL_560;
                  v320 = v322 - 1;
                }
              }
              while ( v320 >= (int)v321 );
              if ( v320 < (int)v321 )
              {
LABEL_560:
                if ( !*(_DWORD *)(v18 + 2296) )
                {
                  v323 = (int *)v1559;
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = (char *)v323 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *v323;
                  *(_QWORD *)(v18 + 2328) = v318;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v321, v319);
                }
              }
            }
            i1 += 24LL;
          }
          while ( i1 < v317 );
          i7 = 0;
        }
        else
        {
LABEL_543:
          i7 = 0;
          v1623 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD))(v18 + 280))(*(_QWORD *)(v18 + 1336));
        (*(void (**)(void))(v18 + 368))();
        (*(void (__fastcall **)(_BYTE *))(v18 + 896))(v1572);
        if ( !v1623 )
          goto LABEL_181;
        *(_DWORD *)(v18 + 2088) += v1767 << 9;
        v169 = *(void (**)(void))(v18 + 256);
LABEL_346:
        v169();
        goto LABEL_181;
      }
      if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v18 + 2452) & 0x1000) == 0 )
      {
        v324 = __rdtsc();
        v325 = (__ROR8__(v324, 3) ^ v324) * (unsigned __int128)0x7010008004002001uLL;
        v1749 = *((_QWORD *)&v325 + 1);
        *(_DWORD *)(v18 + 2084) = ((unsigned __int64)v325 ^ *((_QWORD *)&v325 + 1)) % 5;
      }
LABEL_569:
      v326 = *(_DWORD *)(v18 + 2084);
      if ( !v326 )
      {
        v665 = v56;
        v1637 = 0LL;
        for ( i17 = 0; ; ++i17 )
        {
          i1 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 768))(&v1637);
          if ( !i1 )
            break;
          if ( !(*(__int64 (__fastcall **)(unsigned __int64, char *))(v18 + 520))(i1, v1692) )
          {
            if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
            {
              v668 = *(_QWORD **)(v18 + 2688);
              v669 = 48;
              v666 = 6LL;
              do
              {
                v669 -= 8;
                *v668 = *(_QWORD *)v665;
                v665 += 8;
                ++v668;
                --v666;
              }
              while ( v666 );
              for ( ; v669; --v669 )
              {
                v670 = *v665++;
                *(_BYTE *)v668 = v670;
                v668 = (_QWORD *)((char *)v668 + 1);
              }
              v665 = *(char **)(v18 + 2688);
            }
            *((_QWORD *)v665 + 3) = i1;
            v671 = *(_QWORD *)(v18 + 1424);
            *(_QWORD *)v671 = v665;
            *(_DWORD *)(v671 + 16) = 48;
            v672 = *(_QWORD *)(v18 + 1424);
            *(_QWORD *)(v672 + 8) = i1;
            *(_DWORD *)(v672 + 20) = 4096;
            if ( !*(_DWORD *)(v18 + 2296) )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v665 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v665;
              *(_QWORD *)(v18 + 2328) = 3LL;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v666, v667);
            }
          }
        }
        goto LABEL_1076;
      }
      v327 = v326 - 1;
      if ( !v327 )
      {
        v656 = v56;
        v1630 = 0LL;
        i17 = 0;
        v657 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        for ( i1 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 776))(&v1630);
              i1;
              i1 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 776))(&v1630) )
        {
          ++i17;
          if ( !(*(__int64 (__fastcall **)(unsigned __int64, char *))(v18 + 520))(i1, v1691) )
          {
            if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
            {
              v660 = *(_QWORD **)(v18 + 2688);
              v661 = 48;
              v658 = 6LL;
              do
              {
                v661 -= 8;
                *v660 = *(_QWORD *)v656;
                v656 += 8;
                ++v660;
                --v658;
              }
              while ( v658 );
              if ( v661 )
              {
                do
                {
                  v662 = *v656++;
                  *(_BYTE *)v660 = v662;
                  v660 = (_QWORD *)((char *)v660 + 1);
                  --v661;
                }
                while ( v661 );
                v18 = (ULONG_PTR)v1560;
              }
              v656 = *(char **)(v18 + 2688);
            }
            *((_QWORD *)v656 + 3) = i1;
            v663 = *(_QWORD *)(v18 + 1424);
            *(_QWORD *)v663 = v656;
            *(_DWORD *)(v663 + 16) = 48;
            v664 = *(_QWORD *)(v18 + 1424);
            *(_QWORD *)(v664 + 8) = i1;
            *(_DWORD *)(v664 + 20) = 4096;
            if ( !*(_DWORD *)(v18 + 2296) )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v656 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v656;
              *(_QWORD *)(v18 + 2328) = 4LL;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v658, v659);
            }
          }
        }
        __writecr8(v657);
        goto LABEL_1076;
      }
      v328 = v327 - 1;
      if ( !v328 )
      {
        v643 = v56;
        v644 = 0LL;
        i17 = 0;
        while ( 1 )
        {
          v1601 = 0;
          while ( 1 )
          {
            do
            {
              v645 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64 *))(v18 + 760))(i7, &v1601, &v1624);
              v54 = 0LL;
              if ( !v645 )
                goto LABEL_1050;
              i1 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(v18 + 728))(v1624, v646, v647, 0LL);
            }
            while ( !i1 );
            ++i17;
            v648 = (*(__int64 (__fastcall **)(unsigned __int64))(v18 + 736))(i1);
            v649 = (*(__int64 (__fastcall **)(__int64, char *))(v18 + 520))(v648, v1690);
            v54 = 0LL;
            if ( !v649 )
              break;
            (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD))(v18 + 744))(v1624, i1, v650, 0LL);
          }
          if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
          {
            v651 = *(_QWORD **)(v18 + 2688);
            v652 = 48;
            v650 = 6LL;
            do
            {
              v652 -= 8;
              *v651 = *(_QWORD *)v643;
              v643 += 8;
              ++v651;
              --v650;
            }
            while ( v650 );
            if ( v652 )
            {
              do
              {
                v653 = *v643++;
                *(_BYTE *)v651 = v653;
                v651 = (_QWORD *)((char *)v651 + 1);
                --v652;
              }
              while ( v652 );
              v18 = (ULONG_PTR)v1560;
            }
            v643 = *(char **)(v18 + 2688);
          }
          *((_QWORD *)v643 + 3) = v648;
          v654 = *(_QWORD *)(v18 + 1424);
          *(_QWORD *)v654 = v643;
          *(_DWORD *)(v654 + 16) = 48;
          v655 = *(_QWORD *)(v18 + 1424);
          *(_QWORD *)(v655 + 8) = v648;
          *(_DWORD *)(v655 + 20) = 4096;
          if ( !*(_DWORD *)(v18 + 2296) )
          {
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = v643 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *(int *)v643;
            *(_QWORD *)(v18 + 2328) = v644;
            *(_DWORD *)(v18 + 2296) = 1;
            sub_14036B3BC(v18, 0LL, v650, 0LL);
            v54 = 0LL;
          }
LABEL_1050:
          ++i7;
          ++v644;
          if ( i7 >= 3 )
            goto LABEL_1076;
        }
      }
      v329 = v328 - 1;
      if ( v329 )
      {
        v330 = v329 - 1;
        if ( !v330 )
        {
          v341 = *(__int64 (__fastcall **)(_QWORD))(v18 + 792);
          i17 = 0;
          v1583 = 0;
          v342 = v341(0LL);
          if ( v342 )
          {
            v343 = v1559;
            do
            {
              v1633 = 0LL;
              v344 = v343;
              v345 = 1;
              i1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 784))(v342, &v1633);
              if ( i1 )
              {
                do
                {
                  ++v345;
                  if ( !(*(__int64 (__fastcall **)(unsigned __int64, char *))(v18 + 520))(i1, v1751) )
                  {
                    if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
                    {
                      v347 = *(_QWORD **)(v18 + 2688);
                      v348 = 48;
                      v346 = 6LL;
                      do
                      {
                        v348 -= 8;
                        *v347 = *(_QWORD *)v344;
                        v344 += 8;
                        ++v347;
                        --v346;
                      }
                      while ( v346 );
                      if ( v348 )
                      {
                        do
                        {
                          v349 = *v344++;
                          *(_BYTE *)v347 = v349;
                          v347 = (_QWORD *)((char *)v347 + 1);
                          --v348;
                        }
                        while ( v348 );
                        v18 = (ULONG_PTR)v1560;
                      }
                      v344 = *(char **)(v18 + 2688);
                    }
                    *((_QWORD *)v344 + 3) = i1;
                    *((_QWORD *)v344 + 4) = v342;
                    v350 = *(_QWORD *)(v18 + 1424);
                    *(_QWORD *)v350 = v344;
                    *(_DWORD *)(v350 + 16) = 48;
                    v351 = *(_QWORD *)(v18 + 1424);
                    *(_QWORD *)(v351 + 8) = i1;
                    *(_DWORD *)(v351 + 20) = 4096;
                    if ( !*(_DWORD *)(v18 + 2296) )
                    {
                      *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2312) = v344 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2320) = *(int *)v344;
                      *(_QWORD *)(v18 + 2328) = 6LL;
                      *(_DWORD *)(v18 + 2296) = 1;
                      sub_14036B3BC(v18, 0LL, v346, 1LL);
                    }
                  }
                  i1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 784))(v342, &v1633);
                }
                while ( i1 );
                i17 = v1583;
                v343 = v1559;
              }
              v352 = *(__int64 (__fastcall **)(_QWORD))(v18 + 792);
              i17 += v345;
              v1583 = i17;
              v342 = v352(v342);
            }
            while ( v342 );
          }
          goto LABEL_1076;
        }
        if ( v330 == 1 )
        {
          v331 = v56;
          v1787 = -1;
          i17 = 0;
          LODWORD(i1) = 0;
          v333 = 0LL;
          do
          {
            v1632 = 0LL;
            while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v18 + 1072))(
                      (unsigned int)i1,
                      &v1632,
                      &v1787,
                      &v1607) )
            {
              ++i17;
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 520))(v1607, v1750) )
              {
                if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
                {
                  v336 = *(_QWORD **)(v18 + 2688);
                  v337 = 48;
                  v334 = 6LL;
                  do
                  {
                    v337 -= 8;
                    *v336 = *(_QWORD *)v331;
                    v331 += 8;
                    ++v336;
                    --v334;
                  }
                  while ( v334 );
                  if ( v337 )
                  {
                    do
                    {
                      v338 = *v331++;
                      *(_BYTE *)v336 = v338;
                      v336 = (_QWORD *)((char *)v336 + 1);
                      --v337;
                    }
                    while ( v337 );
                    v18 = (ULONG_PTR)v1560;
                  }
                  v331 = *(char **)(v18 + 2688);
                }
                *((_QWORD *)v331 + 3) = v1607;
                v339 = *(_QWORD *)(v18 + 1424);
                *(_QWORD *)v339 = v331;
                *(_DWORD *)(v339 + 16) = 48;
                v340 = *(_QWORD *)(v18 + 1424);
                *(_QWORD *)(v340 + 8) = v1607;
                *(_DWORD *)(v340 + 20) = 4096;
                if ( !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v331 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v331;
                  *(_QWORD *)(v18 + 2328) = v333;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v334, v335);
                }
              }
            }
            LODWORD(i1) = i1 + 1;
            ++v333;
          }
          while ( (unsigned int)i1 < 3 );
          goto LABEL_1076;
        }
        *(_DWORD *)(v18 + 2084) = 0;
        goto LABEL_1079;
      }
      v71 = (*(_DWORD *)(v18 + 2448) & 0x40000000) == 0;
      v353 = (_BYTE *)v18;
      v354 = *(unsigned __int64 **)(v18 + 1264);
      i17 = 0;
      v1593 = (_BYTE *)v18;
      i1 = *v354;
      v1581 = *v354;
      if ( !v71 )
        goto LABEL_1076;
      v355 = (int *)v1559;
      v356 = *((_QWORD *)v1559 + 5);
      if ( v356 )
      {
        i17 = 1;
        if ( i1 != v356 )
        {
          *((_QWORD *)v1559 + 3) = i1;
          v357 = *(_QWORD *)(v18 + 1424);
          *(_QWORD *)v357 = v355;
          *(_DWORD *)(v357 + 16) = 48;
          v358 = *(_QWORD *)(v18 + 1424);
          *(_QWORD *)(v358 + 8) = i1;
          *(_DWORD *)(v358 + 20) = 4096;
          if ( !*(_DWORD *)(v18 + 2296) )
          {
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = (char *)v355 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *v355;
            *(_QWORD *)(v18 + 2328) = 5LL;
            *(_DWORD *)(v18 + 2296) = 1;
            sub_14036B3BC(v18, 0LL, 12LL, v54);
          }
        }
        goto LABEL_1076;
      }
      if ( !i1 )
        goto LABEL_1076;
      v359 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v18 + 512);
      v1583 = 1;
      v1585 = (_BYTE *)v18;
      v1577 = v359(i1, &BugCheckParameter2, &v1568);
      v360 = v1577;
      if ( !v1577 )
      {
        v361 = -1073741701;
        goto LABEL_1031;
      }
      v362 = BugCheckParameter2;
      v363 = &v1605;
      v364 = v1568;
      v1768 = v1568;
      v1563 = BugCheckParameter2;
      v1604 = 0LL;
      v365 = 4;
      v366 = 1LL;
      do
      {
        *(_BYTE *)v363 = 0;
        v363 = (int *)((char *)v363 + 1);
        --v365;
      }
      while ( v365 );
      v367 = 0;
      if ( *(_DWORD *)(v18 + 2060) )
      {
        LODWORD(v366) = v1605;
        LODWORD(v54) = HIDWORD(v1604);
        v368 = v1604;
        while ( 1 )
        {
          v369 = 0;
          v370 = v18;
          if ( *(_QWORD *)(v18 + 2680) )
            v370 = *(_QWORD *)(v18 + 2680);
          v1561 = v370;
          v371 = (int *)(v370 + *(unsigned int *)(v370 + 2056));
          if ( v368 && (unsigned int)v54 <= v367 )
          {
            v369 = v54;
            v371 = (int *)(v370 + (unsigned int)v366);
          }
          if ( v369 != v367 )
            break;
LABEL_648:
          LODWORD(v1604) = 1;
          v366 = (unsigned int)((_DWORD)v371 - v370);
          HIDWORD(v1604) = v369;
          v1605 = (_DWORD)v371 - v370;
          v368 = 1;
          v379 = *v371;
          v54 = v369;
          if ( (unsigned int)v379 <= 0x2B )
          {
            v380 = 0x80000001002LL;
            if ( _bittest64(&v380, v379) )
            {
              if ( *((_QWORD *)v371 + 1) == v360 && v371[4] == v364 )
                goto LABEL_658;
            }
          }
          if ( (unsigned int)(v379 - 33) <= 1 && *((_QWORD *)v371 + 4) == v362 )
            goto LABEL_658;
          if ( ++v367 >= *(_DWORD *)(v18 + 2060) )
            goto LABEL_657;
        }
        v372 = v367 - v369;
        v369 = v367;
        while ( 2 )
        {
          v373 = *v371;
          if ( *v371 > 12 )
          {
            if ( v373 == 28 )
            {
              v378 = *((unsigned __int16 *)v371 + 20);
              goto LABEL_645;
            }
            if ( v373 == 30 )
            {
              v377 = (((v371[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v371 + 20) + 2);
              goto LABEL_646;
            }
            if ( v373 <= 32 )
              goto LABEL_642;
            if ( v373 <= 34 )
            {
              v377 = 20 * (unsigned int)(((v371[8] & 0xFFF) + (unsigned __int64)(unsigned int)v371[10] + 4095) >> 12)
                   + 48;
              goto LABEL_646;
            }
            if ( v373 != 43 )
              goto LABEL_642;
          }
          else if ( v373 != 12 )
          {
            v374 = v373 - 1;
            if ( v374 )
            {
              v375 = v374 - 6;
              if ( !v375 )
              {
                v377 = (unsigned int)(24 * (v371[6] + 2));
                goto LABEL_646;
              }
              v376 = v375 - 1;
              if ( v376 )
              {
                if ( v376 == 2 )
                {
                  v377 = (unsigned int)(16 * (v371[7] + 3));
                  goto LABEL_646;
                }
LABEL_642:
                v377 = 48LL;
LABEL_646:
                v371 = (int *)((char *)v371 + v377);
                if ( !--v372 )
                {
                  v18 = (ULONG_PTR)v1560;
                  LODWORD(v370) = v1561;
                  v362 = v1563;
                  v364 = v1768;
                  v360 = v1577;
                  goto LABEL_648;
                }
                continue;
              }
              v378 = *((unsigned __int16 *)v371 + 16);
LABEL_645:
              v377 = (v378 + 55) & 0xFFFFFFF8;
              goto LABEL_646;
            }
          }
          break;
        }
        v377 = 4 * (v371[4] / 0xCu) + 48;
        goto LABEL_646;
      }
LABEL_657:
      v371 = 0LL;
LABEL_658:
      i1 = v1581;
      v1594 = v371;
      if ( v371 )
      {
        v361 = -1073741554;
        goto LABEL_1031;
      }
      v381 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, unsigned __int64))(v18 + 680))(
               v1581,
               v366,
               0LL,
               v54);
      v71 = (*(_DWORD *)(v18 + 2448) & 0x40000000) == 0;
      v383 = v381;
      v1576 = v381;
      LODWORD(v1564) = v1568;
      if ( !v71 )
      {
        v384 = sub_1409D0FB4(&v1593, BugCheckParameter2, 9LL);
        v353 = v1593;
        v361 = v384;
        goto LABEL_1031;
      }
      v385 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v18 + 496);
      v1670 = 0LL;
      v1627[4] = 0;
      LOBYTE(v382) = 1;
      v1667 = v385(BugCheckParameter2, v382, 0LL, &v1568);
      v386 = v1667 != 0 ? v1568 : 0;
      v1568 = v386;
      v387 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v18 + 496);
      v1627[1] = v386;
      LOBYTE(v386) = 1;
      v388 = v387(BugCheckParameter2, v386, 12LL, &v1568);
      v389 = v388;
      v1571 = v388;
      v1668 = v388;
      LOBYTE(v389) = 1;
      v1568 &= -(v388 != 0);
      v390 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v18 + 496);
      v1562 = v1568;
      v1627[2] = v1568;
      v1669 = v390(BugCheckParameter2, v389, 10LL, &v1568);
      v1568 &= -(v1669 != 0);
      v391 = *(__int64 (__fastcall **)(_QWORD))(v18 + 504);
      v1627[3] = v1568;
      v392 = v391(BugCheckParameter2);
      if ( !v392 )
      {
LABEL_663:
        v361 = -1073741701;
        goto LABEL_1030;
      }
      v393 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v18 + 1176))(BugCheckParameter2, &v1655);
      v394 = *(unsigned int *)(v18 + 2340);
      v1671 = v393;
      v1627[5] = v1655;
      v1666 = BugCheckParameter2;
      v1627[0] = *(_DWORD *)(v392 + 84);
      LODWORD(v393) = v383;
      v395 = *(unsigned int *)(v18 + 2020);
      v396 = (_DWORD)v393 != 0 ? 0xB : 0;
      v397 = v395 + 288;
      v1769 = v396;
      if ( (unsigned int)(v395 + 288) <= *(_DWORD *)(v18 + 2588) )
      {
        v398 = v18;
        v1561 = v18;
        *(_DWORD *)(v18 + 2020) = v397;
        goto LABEL_684;
      }
      v1561 = sub_14036AB20(v18, v397, v394);
      v398 = v1561;
      if ( v1561 )
      {
        v399 = *(_DWORD *)(v18 + 2448);
        if ( (v399 & 4) == 0 )
        {
          v400 = *(_DWORD *)(v18 + 2020);
          v401 = *(_QWORD *)(v18 + 1992);
          v402 = (_QWORD *)v18;
          v403 = (v399 & 0x20000000) != 0 ? *(_DWORD *)(v18 + 2340) : 0;
          if ( v400 >= 8 )
          {
            v404 = (unsigned __int64)v400 >> 3;
            do
            {
              *v402 = 0LL;
              v400 -= 8;
              ++v402;
              --v404;
            }
            while ( v404 );
          }
          for ( ; v400; --v400 )
          {
            *(_BYTE *)v402 = 0;
            v402 = (_QWORD *)((char *)v402 + 1);
          }
          v405 = *(_DWORD *)(v398 + 2340);
          *(_DWORD *)(v398 + 2340) = v403;
          if ( v403 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v398 + 872))(v401);
          }
          else
          {
            v406 = 0;
            if ( (*(_DWORD *)(v398 + 2448) & 0x10000000) == 0 )
              v406 = v403;
            if ( v406 )
              (*(void (__fastcall **)(__int64, _QWORD))(v398 + 552))(v401 - 8, *(_QWORD *)(v401 - 8));
            else
              (*(void (__fastcall **)(__int64))(v398 + 256))(v401);
          }
          *(_DWORD *)(v398 + 2340) = v405;
        }
        *(_DWORD *)(v398 + 2448) &= ~4u;
        v396 = v1769;
LABEL_684:
        v407 = v398 + v395;
        *(_DWORD *)(v398 + 2060) += 6;
        v408 = &v1666;
        v1634 = v398 + v395;
        v1594 = (_DWORD *)(v398 + v395);
        v409 = v1627;
        v1563 = 6LL;
        do
        {
          v410 = *v409;
          v411 = 48;
          v412 = (_QWORD *)*v408;
          v413 = 6LL;
          v1573 = *v409;
          v414 = (_QWORD *)v407;
          do
          {
            *v414 = 0LL;
            v411 -= 8;
            ++v414;
            --v413;
          }
          while ( v413 );
          for ( ; v411; --v411 )
          {
            *(_BYTE *)v414 = 0;
            v414 = (_QWORD *)((char *)v414 + 1);
          }
          *(_DWORD *)v407 = v396;
          *(_QWORD *)(v407 + 8) = v412;
          v415 = v412;
          *(_DWORD *)(v407 + 16) = v410;
          v416 = (const char *)v412;
          *(_DWORD *)(v398 + 2088) += v410;
          v417 = *(_DWORD *)(v398 + 2068);
          v418 = *(_QWORD *)(v398 + 2072);
          if ( v412 < (_QWORD *)((char *)v412 + v410) )
          {
            do
            {
              _mm_prefetch(v416, 0);
              v416 += 64;
            }
            while ( v416 < (const char *)v412 + v410 );
          }
          v419 = *(_QWORD *)(v398 + 2072);
          v420 = (unsigned int)v410 >> 7;
          if ( (unsigned int)v410 >> 7 )
          {
            do
            {
              v421 = 8LL;
              do
              {
                v422 = v419 ^ *v415;
                v423 = v415[1];
                v415 += 2;
                v419 = __ROL8__(__ROL8__(v422, v417) ^ v423, v417);
                --v421;
              }
              while ( v421 );
              v424 = __ROL8__(v418 ^ ((char *)v415 - (char *)v412), 17) ^ v418 ^ ((char *)v415 - (char *)v412);
              v1683 = (v424 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v417 = ((unsigned __int8)(v1683 ^ v424) ^ (unsigned __int8)v417) & 0x3F;
              if ( !v417 )
                LOBYTE(v417) = 1;
              --v420;
            }
            while ( v420 );
            v398 = v1561;
            LODWORD(v410) = v1573;
          }
          v425 = v410 & 0x7F;
          if ( v425 >= 8 )
          {
            v426 = (unsigned __int64)(v410 & 0x7F) >> 3;
            do
            {
              v419 = __ROL8__(*v415++ ^ v419, v417);
              v425 -= 8;
              --v426;
            }
            while ( v426 );
          }
          if ( v425 )
          {
            do
            {
              v427 = *(unsigned __int8 *)v415;
              v415 = (_QWORD *)((char *)v415 + 1);
              v419 = __ROL8__(v427 ^ v419, v417);
              --v425;
            }
            while ( v425 );
            v398 = v1561;
          }
          for ( i18 = v419; ; LODWORD(v419) = i18 ^ v419 )
          {
            i18 >>= 31;
            if ( !i18 )
              break;
          }
          v396 = v1769;
          *(_DWORD *)(v407 + 20) = v419 & 0x7FFFFFFF;
          ++v409;
          *(_DWORD *)(v398 + 2088) += v410;
          ++v408;
          v407 = v1634 + 48;
          v71 = v1563-- == 1;
          v1634 += 48LL;
        }
        while ( !v71 );
        v429 = v1594;
        v430 = BugCheckParameter2;
        v18 = (ULONG_PTR)v1560;
        v431 = v1576;
        *v1594 = 44;
        *((_QWORD *)v429 + 3) = v430;
        if ( (*(_DWORD *)(v398 + 2448) & 0x10200000) != 0 )
        {
LABEL_712:
          if ( !v431 )
            goto LABEL_714;
        }
        else if ( !v431 )
        {
          if ( (*(_DWORD *)(v398 + 2452) & 0x8000) != 0 )
          {
            v429[8] |= 1u;
            goto LABEL_712;
          }
LABEL_714:
          v353 = (_BYTE *)v398;
          v1585 = (_BYTE *)v398;
          v1593 = (_BYTE *)v398;
          v361 = sub_14036A0A4(
                   (unsigned int)&v1585,
                   v1577,
                   v1564,
                   BugCheckParameter2,
                   v431,
                   9,
                   (__int64)&v1597,
                   (__int64)&v1622);
          if ( v361 < 0 )
            goto LABEL_1030;
          v353 = v1585;
          v432 = v1622 - v1597;
          v433 = &v1585[(_QWORD)v1594 - v398];
          v434 = BugCheckParameter2 + v1597;
          v1594 = v433;
          v435 = v433 + 48;
          v1593 = v1585;
          v436 = 48;
          v437 = v435;
          v438 = 6LL;
          do
          {
            *(_QWORD *)v437 = 0LL;
            v436 -= 8;
            v437 += 2;
            --v438;
          }
          while ( v438 );
          for ( ; v436; --v436 )
          {
            *(_BYTE *)v437 = 0;
            v437 = (int *)((char *)v437 + 1);
          }
          v439 = (_QWORD *)v434;
          *v435 = v1769;
          v440 = (const char *)v434;
          *((_QWORD *)v435 + 1) = v434;
          v435[4] = v432;
          *((_DWORD *)v353 + 522) += v432;
          v441 = *((_DWORD *)v353 + 517);
          v442 = *((_QWORD *)v353 + 259);
          v443 = v434 + v432;
          if ( v434 < v443 )
          {
            do
            {
              _mm_prefetch(v440, 0);
              v440 += 64;
            }
            while ( (unsigned __int64)v440 < v443 );
          }
          v444 = *((_QWORD *)v353 + 259);
          v445 = v432 >> 7;
          if ( v432 >> 7 )
          {
            do
            {
              v446 = 8LL;
              do
              {
                v447 = v444 ^ *v439;
                v448 = v439[1];
                v439 += 2;
                v444 = __ROL8__(__ROL8__(v447, v441) ^ v448, v441);
                --v446;
              }
              while ( v446 );
              v449 = __ROL8__(v442 ^ ((unsigned __int64)v439 - v434), 17) ^ v442 ^ ((unsigned __int64)v439 - v434);
              v1684 = (v449 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v441 = ((unsigned __int8)(v1684 ^ v449) ^ (unsigned __int8)v441) & 0x3F;
              if ( !v441 )
                LOBYTE(v441) = 1;
              --v445;
            }
            while ( v445 );
            v18 = (ULONG_PTR)v1560;
            v431 = v1576;
          }
          v54 = v432 & 0x7F;
          if ( (unsigned int)v54 >= 8 )
          {
            v450 = (unsigned __int64)(unsigned int)v54 >> 3;
            do
            {
              v444 = __ROL8__(*v439++ ^ v444, v441);
              v54 = (unsigned int)(v54 - 8);
              --v450;
            }
            while ( v450 );
            v18 = (ULONG_PTR)v1560;
          }
          if ( (_DWORD)v54 )
          {
            do
            {
              v451 = *(unsigned __int8 *)v439;
              v439 = (_QWORD *)((char *)v439 + 1);
              v444 = __ROL8__(v451 ^ v444, v441);
              v54 = (unsigned int)(v54 - 1);
            }
            while ( (_DWORD)v54 );
            v18 = (ULONG_PTR)v1560;
          }
          for ( i19 = v444 >> 31; i19; i19 >>= 31 )
            v444 = (unsigned int)i19 ^ (unsigned int)v444;
          LODWORD(v444) = v444 & 0x7FFFFFFF;
          v435[5] = v444;
          v453 = v1594;
          v1594[60] = 48;
          if ( v453[64] )
          {
            v444 = 4294967294LL;
            v453[66] = v453[66] & 0xFFFFFFFE | (v431 != 0);
          }
          v1593 = v353;
          v1608 = v1594 + 24;
          v454 = (v431 != 0) + 13;
          if ( v1594 == (_DWORD *)-96LL )
          {
            v455 = *((unsigned int *)v353 + 505);
            v456 = v455 + 48;
            if ( (unsigned int)(v455 + 48) <= *((_DWORD *)v353 + 647) )
            {
              v457 = (__int64)v353;
              *((_DWORD *)v353 + 505) = v456;
            }
            else
            {
              v457 = sub_14036AB20(v353, v456, *((unsigned int *)v353 + 585));
              if ( !v457 )
              {
                v1585 = 0LL;
                goto LABEL_759;
              }
              v458 = *((_DWORD *)v353 + 612);
              if ( (v458 & 4) == 0 )
              {
                v459 = *((_DWORD *)v353 + 505);
                v460 = *((_QWORD *)v353 + 249);
                v461 = (v458 & 0x20000000) != 0 ? *((_DWORD *)v353 + 585) : 0;
                if ( v459 >= 8 )
                {
                  v462 = (unsigned __int64)v459 >> 3;
                  do
                  {
                    *(_QWORD *)v353 = 0LL;
                    v459 -= 8;
                    v353 += 8;
                    --v462;
                  }
                  while ( v462 );
                }
                for ( ; v459; --v459 )
                  *v353++ = 0;
                v463 = *(_DWORD *)(v457 + 2340);
                *(_DWORD *)(v457 + 2340) = v461;
                if ( v461 == 3 )
                {
                  (*(void (__fastcall **)(__int64, __int64))(v457 + 872))(v460, 1LL);
                }
                else
                {
                  v464 = 0;
                  if ( (*(_DWORD *)(v457 + 2448) & 0x10000000) == 0 )
                    v464 = v461;
                  if ( v464 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v457 + 552))(v460 - 8, *(_QWORD *)(v460 - 8));
                  else
                    (*(void (__fastcall **)(__int64, __int64))(v457 + 256))(v460, 1LL);
                }
                *(_DWORD *)(v457 + 2340) = v463;
              }
              *(_DWORD *)(v457 + 2448) &= ~4u;
            }
            ++*(_DWORD *)(v457 + 2060);
            v465 = v457 + v455;
            v1660 = (_DWORD *)v465;
            v466 = (_QWORD *)v465;
            v467 = 48;
            v468 = 6LL;
            do
            {
              *v466 = 0LL;
              v467 -= 8;
              ++v466;
              --v468;
            }
            while ( v468 );
            for ( ; v467; --v467 )
            {
              *(_BYTE *)v466 = 0;
              v466 = (_QWORD *)((char *)v466 + 1);
            }
            v469 = (const char *)v1571;
            *(_DWORD *)v465 = v454;
            v54 = (unsigned __int64)v469;
            v470 = v1562;
            *(_QWORD *)(v465 + 8) = v469;
            *(_DWORD *)(v465 + 16) = v470;
            *(_DWORD *)(v457 + 2088) += v470;
            v471 = *(_DWORD *)(v457 + 2068);
            v472 = *(_QWORD *)(v457 + 2072);
            if ( v469 < &v469[v470] )
            {
              v473 = v469;
              do
              {
                _mm_prefetch(v473, 0);
                v473 += 64;
              }
              while ( v473 < &v469[v470] );
            }
            v444 = *(_QWORD *)(v457 + 2072);
            v474 = (unsigned int)v470 >> 7;
            if ( (unsigned int)v470 >> 7 )
            {
              do
              {
                v475 = 8LL;
                do
                {
                  v476 = *(_QWORD *)(v54 + 8) ^ __ROL8__(*(_QWORD *)v54 ^ v444, v471);
                  v54 += 16LL;
                  v444 = __ROL8__(v476, v471);
                  --v475;
                }
                while ( v475 );
                v477 = (__ROL8__(v472 ^ (v54 - (_QWORD)v469), 17) ^ v472 ^ (v54 - (unsigned __int64)v469))
                     * (unsigned __int128)0x7010008004002001uLL;
                v1685 = *((_QWORD *)&v477 + 1);
                v471 = (BYTE8(v477) ^ (unsigned __int8)(v477 ^ v471)) & 0x3F;
                if ( !v471 )
                  LOBYTE(v471) = 1;
                --v474;
              }
              while ( v474 );
              v18 = (ULONG_PTR)v1560;
              LODWORD(v470) = v1562;
              v431 = v1576;
            }
            v478 = v470 & 0x7F;
            if ( v478 >= 8 )
            {
              v479 = (unsigned __int64)(v470 & 0x7F) >> 3;
              do
              {
                v444 = __ROL8__(*(_QWORD *)v54 ^ v444, v471);
                v54 += 8LL;
                v478 -= 8;
                --v479;
              }
              while ( v479 );
            }
            if ( v478 )
            {
              do
              {
                v480 = *(unsigned __int8 *)v54++;
                v444 = __ROL8__(v480 ^ v444, v471);
                --v478;
              }
              while ( v478 );
              v18 = (ULONG_PTR)v1560;
            }
            for ( i20 = v444; ; v444 = (unsigned int)i20 ^ (unsigned int)v444 )
            {
              i20 >>= 31;
              if ( !i20 )
                break;
            }
            LODWORD(v444) = v444 & 0x7FFFFFFF;
            v353 = (_BYTE *)v457;
            *(_DWORD *)(v465 + 20) = v444;
            v1608 = v1660;
            *(_DWORD *)(v457 + 2088) += v470;
          }
          else
          {
            v469 = (const char *)v1571;
            v1594[24] = v454;
            LODWORD(v470) = v1562;
          }
          if ( (*((_DWORD *)v353 + 612) & 0x40000000) != 0 && (_DWORD)v470 )
            sub_1401B877C(v353, v469, (unsigned int)v470, v1608 + 7);
          v1593 = v353;
          v482 = 4294967294LL;
          v1608[6] = 0;
          v1608[6] |= 1u;
          v483 = v1594;
          v484 = BugCheckParameter2;
          v1594[36] = 35;
          v483[46] = v483[46] & 0xFFFFFFFE | (v431 != 0);
          if ( v483[40] >= 0x94u )
          {
            v485 = *((_QWORD *)v483 + 19);
            v486 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v353 + 63))(
                     v484,
                     4294967294LL,
                     v444,
                     v54);
            if ( !v486 )
            {
              v1585 = 0LL;
              goto LABEL_682;
            }
            v487 = *(unsigned int *)(v486 + 80);
            v483[46] |= 2u;
            v488 = v484 + v487;
            v489 = *(_QWORD **)(v485 + 112);
            if ( (unsigned __int64)v489 >= v484 && (unsigned __int64)v489 < v488 )
            {
              *((_QWORD *)v483 + 21) = *v489;
              v483[46] |= 4u;
            }
            v490 = *(_QWORD **)(v485 + 120);
            if ( (unsigned __int64)v490 >= v484 && (unsigned __int64)v490 < v488 )
            {
              *((_QWORD *)v483 + 22) = *v490;
              v483[46] |= 8u;
            }
          }
          v71 = (*((_DWORD *)v353 + 612) & 0x400000) == 0;
          v491 = BugCheckParameter2;
          v1565 = BugCheckParameter2;
          v1585 = v353;
          if ( v71 )
            goto LABEL_1029;
          v492 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v353 + 63))(
                   BugCheckParameter2,
                   v482,
                   v444,
                   v54);
          v1572 = (_BYTE *)v492;
          if ( v492 )
          {
            v493 = *(_WORD *)(v492 + 6);
            v494 = 0LL;
            v1770 = v493;
            v1571 = (unsigned int)v1564 / 0xCuLL;
            if ( !v493 )
            {
              if ( (*((_DWORD *)v353 + 612) & 0x200000) == 0 )
              {
                v1618[6] = 1073753351;
                KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v491, 0LL, 0LL);
              }
              goto LABEL_802;
            }
            v495 = 0;
            v54 = v493;
            v496 = (unsigned int *)v1577;
            LODWORD(v1569) = 0;
            v1562 = v493;
            v1574 = 12LL * ((unsigned int)v1564 / 0xC);
            v1575 = (unsigned int *)(v1577 + v1574);
            v1563 = *(unsigned __int16 *)(v492 + 20) + v492 + 24;
            v497 = v1563;
            v498 = (_DWORD *)v1563;
            v1561 = v1563;
            while ( 1 )
            {
              v499 = v498[4];
              v494 = (unsigned int)v498[3];
              if ( v499 <= v498[2] )
                v499 = v498[2];
              v1573 = v498[3];
              v500 = v494 + v499;
              if ( v495 )
              {
                if ( v500 < *(_DWORD *)(v497 + 40LL * (v495 - 1) + 12) )
                {
                  if ( (*((_DWORD *)v353 + 612) & 0x200000) == 0 )
                  {
                    v1616 = 1073753351;
                    KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v491, 1uLL, 0LL);
                  }
LABEL_802:
                  if ( !*((_DWORD *)v353 + 574) )
                  {
                    *((_QWORD *)v353 + 288) = v353 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v353 + 289) = 0LL;
                    *((_QWORD *)v353 + 290) = 271LL;
                    *((_QWORD *)v353 + 291) = v491;
                    *((_DWORD *)v353 + 574) = 1;
                    sub_14036B3BC(v353, 0LL, v494, v54);
                  }
                  goto LABEL_663;
                }
                v495 = v1569;
              }
              if ( v496 != v1575 )
              {
                do
                {
                  v501 = v496[1];
                  if ( *v496 >= v500 || v501 <= (unsigned int)v494 )
                    break;
                  if ( *v496 < (unsigned int)v494 || v501 > v500 )
                  {
                    if ( (*((_DWORD *)v353 + 612) & 0x200000) == 0 )
                    {
                      v1618[2] = 1073753351;
                      KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v491, 2uLL, 0LL);
                    }
                    goto LABEL_802;
                  }
                  v502 = v496[2];
                  v1686 = v496;
                  if ( (v502 & 1) != 0 || (*(_BYTE *)(v502 + v491) & 0x20) != 0 )
                  {
                    v503 = v498[4];
                    v504 = v498[3];
                    if ( v503 <= v498[2] )
                      v503 = v498[2];
                    v505 = v504 + v503;
                    v506 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v353 + 131))(
                                             v496,
                                             v491);
                    v508 = v506;
                    if ( *v506 < v504 || v506[1] > v505 )
                    {
                      v509 = v1565;
                      if ( (*((_DWORD *)v353 + 612) & 0x200000) == 0 )
                      {
                        v1618[3] = 1073753351;
                        KeBugCheckEx(
                          __ROR4__(1073741903, 222),
                          0xAuLL,
                          v1565,
                          ((_DWORD)v506 - (_DWORD)v1565) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v353 + 574) )
                      {
                        *((_QWORD *)v353 + 288) = v353 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v353 + 289) = 0LL;
                        *((_QWORD *)v353 + 290) = 271LL;
                        *((_QWORD *)v353 + 291) = v509;
                        *((_DWORD *)v353 + 574) = 1;
                        sub_14036B3BC(v353, 0LL, v509, v507);
                      }
                    }
                    v510 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v353 + 132))(
                                             v508,
                                             v1565,
                                             v1565 + *v508);
                    if ( *v510 >= v504 && v510[1] <= v505 )
                    {
                      v491 = v1565;
                    }
                    else
                    {
                      v491 = v1565;
                      v512 = ((_DWORD)v510 - v1565) | 0x80000000;
                      if ( (*((_DWORD *)v353 + 612) & 0x200000) == 0 )
                      {
                        v1618[4] = 1073753351;
                        KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v1565, v512, 0LL);
                      }
                      if ( !*((_DWORD *)v353 + 574) )
                      {
                        *((_QWORD *)v353 + 288) = v353 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v353 + 289) = 0LL;
                        *((_QWORD *)v353 + 290) = 271LL;
                        *((_QWORD *)v353 + 291) = v491;
                        *((_DWORD *)v353 + 574) = 1;
                        sub_14036B3BC(v353, 0LL, v511, v54);
                      }
                    }
                    v498 = (_DWORD *)v1561;
                    v494 = v1573;
                  }
                  v496 += 3;
                }
                while ( v496 != v1575 );
                v495 = v1569;
                v54 = v1562;
                v497 = v1563;
              }
              ++v495;
              v498 += 10;
              LODWORD(v1569) = v495;
              v1561 = (__int64)v498;
              if ( v495 >= (unsigned int)v54 )
              {
                v513 = v1571;
                v494 = 0LL;
                v514 = v1572;
                v515 = v1574;
                if ( v496 != v1575 )
                {
                  if ( (*((_DWORD *)v353 + 612) & 0x200000) == 0 )
                  {
                    v1618[1] = 1073753351;
                    KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v491, 3uLL, 0LL);
                  }
                  goto LABEL_802;
                }
                v516 = *((unsigned int *)v353 + 505);
                v517 = v516 + ((v1571 + 6) & 0xFFFFFFF8) + 24 * (v54 + 2);
                if ( v517 <= *((_DWORD *)v353 + 647) )
                {
                  v518 = v353;
                  v1569 = (__int64)v353;
                  *((_DWORD *)v353 + 505) = v517;
                  goto LABEL_859;
                }
                v1569 = sub_14036AB20(v353, v517, *((unsigned int *)v353 + 585));
                v518 = (_BYTE *)v1569;
                if ( v1569 )
                {
                  v519 = *((_DWORD *)v353 + 612);
                  if ( (v519 & 4) == 0 )
                  {
                    v520 = *((_DWORD *)v353 + 505);
                    v521 = *((_QWORD *)v353 + 249);
                    v522 = (v519 & 0x20000000) != 0 ? *((_DWORD *)v353 + 585) : 0;
                    if ( v520 >= 8 )
                    {
                      v523 = (unsigned __int64)v520 >> 3;
                      do
                      {
                        *(_QWORD *)v353 = 0LL;
                        v520 -= 8;
                        v353 += 8;
                        --v523;
                      }
                      while ( v523 );
                    }
                    for ( ; v520; --v520 )
                      *v353++ = 0;
                    v524 = *((_DWORD *)v518 + 585);
                    *((_DWORD *)v518 + 585) = v522;
                    if ( v522 == 3 )
                    {
                      (*((void (__fastcall **)(__int64, __int64))v518 + 109))(v521, 1LL);
                    }
                    else
                    {
                      v525 = 0;
                      if ( (*((_DWORD *)v518 + 612) & 0x10000000) == 0 )
                        v525 = v522;
                      if ( v525 )
                        (*((void (__fastcall **)(__int64, _QWORD))v518 + 69))(v521 - 8, *(_QWORD *)(v521 - 8));
                      else
                        (*((void (__fastcall **)(__int64, __int64))v518 + 32))(v521, 1LL);
                    }
                    *((_DWORD *)v518 + 585) = v524;
                  }
                  *((_DWORD *)v518 + 612) &= ~4u;
                  v54 = v1562;
                  v513 = v1571;
LABEL_859:
                  v526 = &v518[v516];
                  ++*((_DWORD *)v518 + 515);
                  v527 = &v518[v516];
                  v1661 = &v518[v516];
                  v528 = 48;
                  v529 = 6LL;
                  do
                  {
                    *v527 = 0LL;
                    v528 -= 8;
                    ++v527;
                    --v529;
                  }
                  while ( v529 );
                  for ( ; v528; --v528 )
                  {
                    *(_BYTE *)v527 = 0;
                    v527 = (_QWORD *)((char *)v527 + 1);
                  }
                  v530 = v1577;
                  *(_DWORD *)v526 = 30;
                  *((_QWORD *)v526 + 1) = v530;
                  *((_DWORD *)v526 + 4) = 0;
                  v531 = *((_QWORD *)v518 + 259);
                  for ( i21 = v531; ; LODWORD(v531) = i21 ^ v531 )
                  {
                    i21 >>= 31;
                    if ( !i21 )
                      break;
                  }
                  v533 = v1565;
                  *((_DWORD *)v526 + 5) = v531 & 0x7FFFFFFF;
                  v353 = v518;
                  v1603 = v1661;
                  v1585 = v518;
                  *((_QWORD *)v1661 + 3) = v533;
                  *((_DWORD *)v1603 + 8) = *((_DWORD *)v514 + 20);
                  *((_DWORD *)v1603 + 9) = v1564;
                  *((_WORD *)v1603 + 20) = v1770;
                  *((_WORD *)v1603 + 21) = *((_WORD *)v1603 + 21) & 0xFFFE | (v1576 != 0);
                  v534 = *((unsigned __int16 *)v1603 + 20);
                  v535 = (unsigned int *)&v1603[(((unsigned int)(v513 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
                  v1572 = v1603 + 48;
                  v71 = v513 == 0;
                  v1571 = (unsigned __int64)v535;
                  v536 = (unsigned int *)v1577;
                  v537 = &v535[6 * v534];
                  v538 = 12LL;
                  if ( v71 )
                    v538 = v515;
                  v1574 = (__int64)&v535[6 * v534];
                  v1561 = v1577 + v538;
                  if ( (_DWORD)v54 )
                  {
                    v539 = (unsigned int)v54;
                    v540 = v535 + 2;
                    v54 = 1LL;
                    do
                    {
                      v541 = 2LL;
                      do
                      {
                        *(v540 - 2) = 0;
                        *(v540 - 1) = 0;
                        *v540 = 0x80000000;
                        v540 += 3;
                        --v541;
                      }
                      while ( v541 );
                      --v539;
                    }
                    while ( v539 );
                    v18 = (ULONG_PTR)v1560;
                  }
                  if ( v535 != v537 )
                  {
                    v542 = (__int64 *)v1563;
                    while ( 1 )
                    {
                      v543 = 0;
                      if ( (*((_DWORD *)v542 + 9) & 0x2000000) != 0
                        || (v544 = *(_DWORD *)v542, *(_DWORD *)v542 == 1414090313)
                        && *((_DWORD *)v542 + 1) == 1195525195
                        || v544 == 1162297680
                        && ((v545 = *((_WORD *)v542 + 2), v545 == 30839) || v545 == 29303 || v545 == 30583)
                        || v544 == 1095914053 && *((_WORD *)v542 + 2) == 16724 )
                      {
                        v543 = 1;
                      }
                      else
                      {
                        v546 = 7;
                        v547 = (unsigned __int8 *)*((_QWORD *)v518 + 294);
                        v54 = (unsigned __int64)v542;
                        v1663 = *((_QWORD *)v518 + 295);
                        v1664 = (unsigned __int8 *)*((_QWORD *)v518 + 296);
                        v1665 = (unsigned __int8 *)*((_QWORD *)v518 + 297);
                        v1662 = v547;
                        while ( 1 )
                        {
                          v548 = *(unsigned __int8 *)v54++;
                          v549 = *v547++;
                          if ( v548 != v549 )
                            break;
                          if ( !--v546 )
                            goto LABEL_903;
                        }
                        v54 = v1663;
                        v550 = 8;
                        v551 = v542;
                        do
                        {
                          v552 = *v551++;
                          v553 = *(_QWORD *)v54;
                          v54 += 8LL;
                          if ( v552 != v553 )
                            goto LABEL_896;
                          v550 -= 8;
                        }
                        while ( v550 >= 8 );
                        if ( v550 )
                        {
                          while ( 1 )
                          {
                            v554 = *(unsigned __int8 *)v551;
                            v551 = (__int64 *)((char *)v551 + 1);
                            v555 = *(unsigned __int8 *)v54++;
                            if ( v554 != v555 )
                              break;
                            if ( !--v550 )
                              goto LABEL_903;
                          }
LABEL_896:
                          v556 = v1664;
                          v557 = 4;
                          v54 = (unsigned __int64)v542;
                          while ( 1 )
                          {
                            v558 = *(unsigned __int8 *)v54++;
                            v559 = *v556++;
                            if ( v558 != v559 )
                              break;
                            if ( !--v557 )
                              goto LABEL_903;
                          }
                          v560 = v1665;
                          v561 = 6;
                          v54 = (unsigned __int64)v542;
                          while ( 1 )
                          {
                            v562 = *(unsigned __int8 *)v54++;
                            v563 = *v560++;
                            if ( v562 != v563 )
                              break;
                            if ( !--v561 )
                              goto LABEL_903;
                          }
                        }
                        else
                        {
LABEL_903:
                          v543 = 1;
                        }
                        v536 = (unsigned int *)v1577;
                      }
                      v564 = *((_DWORD *)v542 + 9);
                      if ( v564 < 0 )
                        v543 = 1;
                      v1771 = v543;
                      if ( v543 && *(_DWORD *)v542 == 1414090313 && *((_DWORD *)v542 + 1) == 1195525195 )
                      {
                        if ( (*((_DWORD *)v518 + 613) & 0x2000) != 0 )
                          v543 = 0;
                        v1771 = v543;
                      }
                      if ( (*((_DWORD *)v518 + 613) & 0x4000) != 0
                        && (v564 & 0x20000000) != 0
                        && (v533 == *((_QWORD *)v518 + 189) || v533 == *((_QWORD *)v518 + 190)) )
                      {
                        v543 = 1;
                        v1771 = 1;
                      }
                      v565 = *((_DWORD *)v542 + 4);
                      v566 = *((_DWORD *)v542 + 3);
                      v567 = v1575;
                      if ( v565 <= *((_DWORD *)v542 + 2) )
                        v565 = *((_DWORD *)v542 + 2);
                      v568 = v566 + v565;
                      v1576 = *((_DWORD *)v542 + 3);
                      v1573 = v568;
                      if ( v536 == v1575 )
                      {
                        v569 = 0;
                        v570 = 0;
                      }
                      else
                      {
                        v569 = *v536;
                        v570 = v536[1];
                      }
                      v1562 = v570;
                      LODWORD(v1564) = v566;
                      if ( v536 != v1575 && v569 > v566 && v570 <= v568 && !v543 )
                      {
                        v571 = v1565;
                        v572 = &v1666;
                        *v535 = v566;
                        v535[1] = v569;
                        v573 = 0;
                        v574 = *v535;
                        v575 = v1627;
                        v54 = v569 - (unsigned int)v574;
                        LODWORD(v1564) = v569;
                        v576 = v574 + v571;
                        v577 = v576 + v54;
                        do
                        {
                          if ( v576 < *v572 + *v575 && v577 > *v572 )
                          {
                            v533 = v1565;
                            v567 = v1575;
                            v536 = (unsigned int *)v1577;
                            goto LABEL_952;
                          }
                          ++v573;
                          ++v572;
                          ++v575;
                        }
                        while ( v573 < 6 );
                        v578 = v1569;
                        v579 = (_QWORD *)v576;
                        v580 = (const char *)v576;
                        *(_DWORD *)(v1569 + 2088) += v54;
                        v581 = *(_DWORD *)(v578 + 2068);
                        v582 = *(_QWORD *)(v578 + 2072);
                        if ( v576 < v577 )
                        {
                          do
                          {
                            _mm_prefetch(v580, 0);
                            v580 += 64;
                          }
                          while ( (unsigned __int64)v580 < v577 );
                        }
                        v583 = (unsigned int)v54 >> 7;
                        v584 = v582;
                        if ( (unsigned int)v54 >> 7 )
                        {
                          do
                          {
                            v585 = 8LL;
                            do
                            {
                              v586 = v579[1] ^ __ROL8__(*v579 ^ v584, v581);
                              v579 += 2;
                              v584 = __ROL8__(v586, v581);
                              --v585;
                            }
                            while ( v585 );
                            v587 = (__ROL8__(v582 ^ ((unsigned __int64)v579 - v576), 17) ^ v582 ^ ((unsigned __int64)v579
                                                                                                 - v576))
                                 * (unsigned __int128)0x7010008004002001uLL;
                            v1687 = *((_QWORD *)&v587 + 1);
                            v581 = (BYTE8(v587) ^ (unsigned __int8)(v587 ^ v581)) & 0x3F;
                            if ( !v581 )
                              LOBYTE(v581) = 1;
                            --v583;
                          }
                          while ( v583 );
                          v18 = (ULONG_PTR)v1560;
                          v570 = v1562;
                        }
                        v54 &= 0x7Fu;
                        if ( (unsigned int)v54 >= 8 )
                        {
                          v588 = (unsigned __int64)(unsigned int)v54 >> 3;
                          do
                          {
                            v584 = __ROL8__(*v579++ ^ v584, v581);
                            v54 = (unsigned int)(v54 - 8);
                            --v588;
                          }
                          while ( v588 );
                        }
                        if ( (_DWORD)v54 )
                        {
                          do
                          {
                            v589 = *(unsigned __int8 *)v579;
                            v579 = (_QWORD *)((char *)v579 + 1);
                            v584 = __ROL8__(v589 ^ v584, v581);
                            v54 = (unsigned int)(v54 - 1);
                          }
                          while ( (_DWORD)v54 );
                          v18 = (ULONG_PTR)v1560;
                        }
                        for ( i22 = v584; ; LODWORD(v584) = i22 ^ v584 )
                        {
                          i22 >>= 31;
                          if ( !i22 )
                            break;
                        }
                        v568 = v1573;
                        v566 = v1576;
                        v533 = v1565;
                        v536 = (unsigned int *)v1577;
                        *(_DWORD *)(v1571 + 8) = v584 & 0x7FFFFFFF;
                        v567 = v1575;
                      }
LABEL_952:
                      if ( v569 < v566 )
                      {
                        v592 = v1771;
                      }
                      else
                      {
                        v591 = v570 <= v568;
                        v592 = v1771;
                        if ( v591 && v536 != v567 )
                        {
                          v593 = (unsigned int *)v1561;
                          for ( i23 = *(_DWORD *)(v1561 + 4); i23 <= v568; v533 = v1565 )
                          {
                            if ( v593 == v567 )
                              break;
                            if ( v592 )
                            {
                              v595 = 0x80;
                            }
                            else
                            {
                              v596 = *v593;
                              v597 = v536[1];
                              v598 = v1569;
                              LODWORD(v1564) = v596;
                              if ( v596 < (unsigned int)v597 )
                              {
                                if ( (*(_DWORD *)(v1569 + 2448) & 0x200000) == 0 )
                                {
                                  v1620 = 1073753351;
                                  KeBugCheckEx(__ROR4__(1073741903, 222), 0xAuLL, v533, 6uLL, 0LL);
                                }
                                if ( !*(_DWORD *)(v1569 + 2296) )
                                {
                                  v599 = v1569;
                                  *(_QWORD *)(v1569 + 2304) = v1569 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v598 + 2312) = 0LL;
                                  *(_QWORD *)(v598 + 2320) = 271LL;
                                  *(_QWORD *)(v598 + 2328) = v533;
                                  *(_DWORD *)(v598 + 2296) = 1;
                                  sub_14036B3BC(v599, 0LL, v567, v54);
                                  v598 = v1569;
                                }
                              }
                              v600 = &v1666;
                              v601 = v1565 + v597;
                              v54 = v596 - (unsigned int)v597;
                              v602 = 0;
                              v603 = v1627;
                              v604 = v1565 + v597 + v54;
                              do
                              {
                                if ( v601 < *v600 + *v603 && v604 > *v600 )
                                  goto LABEL_987;
                                ++v602;
                                ++v600;
                                ++v603;
                              }
                              while ( v602 < 6 );
                              if ( (unsigned int)v54 < 4 )
                              {
LABEL_987:
                                v595 = 0x80;
                              }
                              else
                              {
                                *(_DWORD *)(v598 + 2088) += v54;
                                v605 = (const char *)v601;
                                v606 = *(_DWORD *)(v598 + 2068);
                                v607 = *(_QWORD *)(v598 + 2072);
                                v608 = (_QWORD *)v601;
                                if ( v601 < v604 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v605, 0);
                                    v605 += 64;
                                  }
                                  while ( (unsigned __int64)v605 < v604 );
                                }
                                v609 = v607;
                                v610 = (unsigned int)v54 >> 7;
                                if ( (unsigned int)v54 >> 7 )
                                {
                                  do
                                  {
                                    v611 = 8LL;
                                    do
                                    {
                                      v612 = v609 ^ *v608;
                                      v613 = v608[1];
                                      v608 += 2;
                                      v609 = __ROL8__(__ROL8__(v612, v606) ^ v613, v606);
                                      --v611;
                                    }
                                    while ( v611 );
                                    v614 = __ROL8__(v607 ^ ((unsigned __int64)v608 - v601), 17) ^ v607 ^ ((unsigned __int64)v608 - v601);
                                    v1688 = (v614 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    v606 = ((unsigned __int8)(v1688 ^ v614) ^ (unsigned __int8)v606) & 0x3F;
                                    if ( !v606 )
                                      LOBYTE(v606) = 1;
                                    --v610;
                                  }
                                  while ( v610 );
                                  v592 = v1771;
                                }
                                v54 &= 0x7Fu;
                                if ( (unsigned int)v54 >= 8 )
                                {
                                  v615 = (unsigned __int64)(unsigned int)v54 >> 3;
                                  do
                                  {
                                    v609 = __ROL8__(*v608++ ^ v609, v606);
                                    v54 = (unsigned int)(v54 - 8);
                                    --v615;
                                  }
                                  while ( v615 );
                                }
                                if ( (_DWORD)v54 )
                                {
                                  do
                                  {
                                    v616 = *(unsigned __int8 *)v608;
                                    v608 = (_QWORD *)((char *)v608 + 1);
                                    v609 = __ROL8__(v616 ^ v609, v606);
                                    v54 = (unsigned int)(v54 - 1);
                                  }
                                  while ( (_DWORD)v54 );
                                  v18 = (ULONG_PTR)v1560;
                                }
                                for ( i24 = v609; ; LOBYTE(v609) = i24 ^ v609 )
                                {
                                  i24 >>= 7;
                                  if ( !i24 )
                                    break;
                                }
                                v568 = v1573;
                                v595 = v609 & 0x7F;
                              }
                              v536 = (unsigned int *)v1577;
                            }
                            v618 = v1572;
                            v536 += 3;
                            ++v1572;
                            v1577 = (unsigned __int64)v536;
                            *v618 = v595;
                            v567 = v1575;
                            v593 = (unsigned int *)(v1561 + 12);
                            v1561 = (__int64)v593;
                            if ( v593 != v1575 )
                              i23 = v593[1];
                          }
                        }
                      }
                      v619 = (unsigned int *)v1571;
                      v533 = v1565;
                      if ( v592 || (_DWORD)v1564 == v568 )
                        goto LABEL_1020;
                      *(_DWORD *)(v1571 + 12) = v1564;
                      v620 = &v1666;
                      v619[4] = v568;
                      v621 = v619[3];
                      v622 = 0;
                      v54 = v568 - (unsigned int)v621;
                      v623 = v1627;
                      v624 = v533 + v621;
                      v625 = v533 + v621 + v54;
                      do
                      {
                        if ( v624 < *v620 + *v623 && v625 > *v620 )
                        {
                          v536 = (unsigned int *)v1577;
LABEL_1020:
                          v518 = (_BYTE *)v1569;
                          goto LABEL_1021;
                        }
                        ++v622;
                        ++v620;
                        ++v623;
                      }
                      while ( v622 < 6 );
                      v518 = (_BYTE *)v1569;
                      v626 = (_QWORD *)(v533 + v621);
                      v627 = (const char *)(v533 + v621);
                      *(_DWORD *)(v1569 + 2088) += v54;
                      v628 = *((_DWORD *)v518 + 517);
                      v629 = *((_QWORD *)v518 + 259);
                      if ( v624 < v625 )
                      {
                        do
                        {
                          _mm_prefetch(v627, 0);
                          v627 += 64;
                        }
                        while ( (unsigned __int64)v627 < v625 );
                      }
                      v630 = *((_QWORD *)v518 + 259);
                      v631 = (unsigned int)v54 >> 7;
                      if ( (unsigned int)v54 >> 7 )
                      {
                        do
                        {
                          v632 = 8LL;
                          do
                          {
                            v633 = v630 ^ *v626;
                            v634 = v626[1];
                            v626 += 2;
                            v630 = __ROL8__(__ROL8__(v633, v628) ^ v634, v628);
                            --v632;
                          }
                          while ( v632 );
                          v635 = __ROL8__(v629 ^ ((unsigned __int64)v626 - v624), 17) ^ v629 ^ ((unsigned __int64)v626
                                                                                              - v624);
                          v1689 = (v635 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v628 = ((unsigned __int8)v1689 ^ (unsigned __int8)(v635 ^ v628)) & 0x3F;
                          if ( !v628 )
                            LOBYTE(v628) = 1;
                          --v631;
                        }
                        while ( v631 );
                        v18 = (ULONG_PTR)v1560;
                        v518 = (_BYTE *)v1569;
                      }
                      v54 &= 0x7Fu;
                      if ( (unsigned int)v54 >= 8 )
                      {
                        v636 = (unsigned __int64)(unsigned int)v54 >> 3;
                        do
                        {
                          v630 = __ROL8__(*v626++ ^ v630, v628);
                          v54 = (unsigned int)(v54 - 8);
                          --v636;
                        }
                        while ( v636 );
                      }
                      if ( (_DWORD)v54 )
                      {
                        do
                        {
                          v637 = *(unsigned __int8 *)v626;
                          v626 = (_QWORD *)((char *)v626 + 1);
                          v630 = __ROL8__(v637 ^ v630, v628);
                          v54 = (unsigned int)(v54 - 1);
                        }
                        while ( (_DWORD)v54 );
                        v568 = v1573;
                      }
                      for ( i25 = v630; ; LODWORD(v630) = i25 ^ v630 )
                      {
                        i25 >>= 31;
                        if ( !i25 )
                          break;
                      }
                      v619 = (unsigned int *)v1571;
                      v533 = v1565;
                      v536 = (unsigned int *)v1577;
                      *(_DWORD *)(v1571 + 20) = v630 & 0x7FFFFFFF;
LABEL_1021:
                      if ( v536 != v1575 && *v536 >= v1576 && v536[1] <= v568 )
                      {
                        v639 = v1561;
                        if ( (unsigned int *)v1561 != v1575 )
                        {
                          v640 = v1572;
                          *v1572 = 0x80;
                          v1572 = v640 + 1;
                          v1561 = v639 + 12;
                        }
                        v536 += 3;
                        v1577 = (unsigned __int64)v536;
                      }
                      v535 = v619 + 6;
                      v542 = (__int64 *)(v1563 + 40);
                      v1571 = (unsigned __int64)v535;
                      v1563 += 40LL;
                      if ( v535 == (unsigned int *)v1574 )
                      {
                        v353 = v1585;
                        break;
                      }
                    }
                  }
LABEL_1029:
                  v1593 = v353;
                  v361 = 0;
LABEL_1030:
                  i1 = v1581;
LABEL_1031:
                  v1560 = (_SLIST_ENTRY *)v353;
                  v641 = &v353[-v18];
                  v18 = (ULONG_PTR)v353;
                  v642 = &v1559[(_QWORD)v641];
                  v1559 = &v1559[(_QWORD)v641];
                  if ( (int)(v361 + 0x80000000) < 0 || v361 == -1073741554 )
                    *((_QWORD *)v642 + 5) = i1;
                  i17 = v1583;
LABEL_1076:
                  i7 = 0;
                  *(_DWORD *)(v18 + 2088) += i17 << 12;
                  ++*(_DWORD *)(v18 + 2084);
                  if ( *(_DWORD *)(v18 + 2088) < *(_DWORD *)(v18 + 2092) )
                  {
                    v56 = v1559;
                    goto LABEL_569;
                  }
LABEL_1079:
                  v1560 = (_SLIST_ENTRY *)v18;
                  goto LABEL_181;
                }
LABEL_759:
                v361 = -1073741670;
                goto LABEL_1030;
              }
            }
          }
          goto LABEL_663;
        }
        v429[8] |= 2u;
        goto LABEL_714;
      }
      v1585 = 0LL;
LABEL_682:
      v361 = -1073741670;
      goto LABEL_1030;
    }
    switch ( v78 )
    {
      case 12:
        if ( !*(_QWORD *)(v18 + 2432) )
          goto LABEL_1722;
        v1265 = *(_DWORD *)(v18 + 2452);
        LOBYTE(v1266) = v1265;
        if ( *(_DWORD *)(v18 + 2084) )
        {
          if ( (((unsigned __int8)v1265 ^ (unsigned __int8)(v1265 >> 3)) & 4) != 0 )
            goto LABEL_1722;
        }
        else
        {
          v1266 = v1265 ^ ((unsigned __int8)v1265 ^ (unsigned __int8)(8 * v1265)) & 0x20;
          *(_DWORD *)(v18 + 2452) = v1266;
        }
        if ( (v1266 & 4) != 0 )
        {
          v1267 = *((_QWORD *)v56 + 4);
          if ( v1267 )
          {
            v1268 = *(unsigned int *)(v18 + 2084);
            i1 = ((((_WORD)v1267 + (_WORD)v1268) & 0xFFF)
                + (unsigned __int64)(unsigned int)(*((_DWORD *)v56 + 10) - v1268)
                + 4095) >> 12;
            v1269 = v1267 + v1268;
          }
          else
          {
            v1269 = *((_QWORD *)v56 + 1);
            i1 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
          }
          v1270 = v1269 & 0xFFFFFFFFFFFFF000uLL;
          while ( i1 )
          {
            --i1;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v18 + 688))(v1270) && !*(_DWORD *)(v18 + 2296) )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v56;
              *(_QWORD *)(v18 + 2328) = v1270;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v1271, v1272);
            }
            *(_DWORD *)(v18 + 2088) += 256;
            v1270 += 4096LL;
            if ( v1267 )
            {
              *(_DWORD *)(v18 + 2084) += 4096;
              if ( *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
                break;
            }
          }
          if ( v1267 && !i1 )
            *(_DWORD *)(v18 + 2084) = 0;
          if ( *(_DWORD *)(v18 + 2084) )
            goto LABEL_181;
          v1273 = *(_QWORD *)(v18 + 1344);
          v1274 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v18 + 336))(v1273);
          i1 = (unsigned __int64)(v56 + 24);
          v1276 = **(unsigned int ***)(v18 + 1552);
          v1277 = v1276 + 4;
          v1278 = *((_BYTE *)v1276 + 12);
          v1279 = (unsigned __int64)&v1276[6 * *v1276 + 4];
          do
          {
            v1280 = 24LL;
            v1281 = (__int64 *)(v56 + 24);
            v1282 = v1277;
            do
            {
              v1283 = *(_QWORD *)v1282;
              v1282 += 2;
              v1284 = *v1281++;
              if ( v1283 != v1284 )
                goto LABEL_2107;
              v1280 = (unsigned int)(v1280 - 8);
            }
            while ( (unsigned int)v1280 >= 8 );
            if ( !(_DWORD)v1280 )
              break;
            while ( 1 )
            {
              v1275 = *(unsigned __int8 *)v1282;
              v1282 = (unsigned int *)((char *)v1282 + 1);
              v1285 = *(unsigned __int8 *)v1281;
              v1281 = (__int64 *)((char *)v1281 + 1);
              if ( v1275 != v1285 )
                break;
              v71 = (_DWORD)v1280 == 1;
              v1280 = (unsigned int)(v1280 - 1);
              if ( v71 )
                goto LABEL_2108;
            }
LABEL_2107:
            v1277 += 6;
          }
          while ( (unsigned __int64)v1277 < v1279 );
LABEL_2108:
          v18 = (ULONG_PTR)v1560;
          ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1560[25].Next)(
            v1560[84].Next,
            v1275,
            v1280,
            v1281);
          __writecr8(v1274);
          if ( v1278 )
          {
            i7 = 0;
            if ( (*(_DWORD *)(v18 + 2452) & 0x10) != 0 && !*(_DWORD *)(v18 + 2296) )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *(int *)v56;
              *(_QWORD *)(v18 + 2328) = 1LL;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v55, v54);
            }
            if ( *(_QWORD *)i1 == 1LL )
              goto LABEL_181;
          }
          i7 = 0;
          if ( v1277 != (unsigned int *)v1279 || *(_DWORD *)(v18 + 2296) )
            goto LABEL_181;
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v1277;
          *(_DWORD *)(v18 + 2296) = 1;
LABEL_250:
          sub_14036B3BC(v18, 0LL, v55, v54);
          goto LABEL_181;
        }
LABEL_2116:
        if ( *(_DWORD *)(v18 + 2084) )
          goto LABEL_2158;
        if ( v78 == 12 )
        {
          if ( !*(_QWORD *)(v18 + 2432) )
          {
            *(_DWORD *)(v18 + 2084) = 0;
            goto LABEL_2158;
          }
          v1286 = *(_DWORD *)(v18 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v18 + 2452) ^ (unsigned __int8)(8 * *(_DWORD *)(v18 + 2452))) & 0x20;
          *(_DWORD *)(v18 + 2452) = v1286;
          if ( (v1286 & 4) != 0 )
          {
            v1287 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v1288 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
            if ( v1288 )
            {
              do
              {
                --v1288;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v18 + 688))(v1287)
                  && !*(_DWORD *)(v18 + 2296) )
                {
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)v56;
                  *(_QWORD *)(v18 + 2328) = v1287;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v1289, v1290);
                }
                *(_DWORD *)(v18 + 2088) += 256;
                v1287 += 4096LL;
              }
              while ( v1288 );
              goto LABEL_2157;
            }
LABEL_2158:
            v1317 = *(unsigned int *)(v18 + 2084);
            v1318 = *((unsigned int *)v56 + 4);
            v1563 = *((_QWORD *)v56 + 1);
            v1319 = (unsigned int *)(v1563 + 12 * v1317);
            v1575 = v1319;
            v1320 = (int *)&v56[4 * v1317 + 48];
            v1561 = (__int64)v1320;
            i1 = v1563 + 12 * (v1318 / 0xC);
            v1572 = (_BYTE *)i1;
            while ( 2 )
            {
              if ( *v1320 < 0 )
                goto LABEL_2265;
              v1321 = *((_QWORD *)v56 + 4) + *v1319;
              v1322 = v1319[1] - *v1319;
              v1574 = v1321;
              if ( v78 == 43 )
              {
                v1360 = sub_14036B5D8(v18, v1321, v1322);
                *(_DWORD *)(v18 + 2088) += 8 * v1322;
                if ( (*(_DWORD *)(v18 + 2452) & 0x800) != 0 )
                {
                  v1361 = (_BYTE *)(v1321 - 6);
                  v1362 = (char *)(v1321 - 6 + 5);
                  v1363 = *v1362;
                  if ( *(_BYTE *)(v1321 - 6) != 76
                    || v1361[1] != 0x87
                    || v1361[2]
                    || v1361[3] != 0x98
                    || v1361[4] != 0xC3
                    || v1363 != -112 && v1363 != -15 )
                  {
                    goto LABEL_2569;
                  }
                  v1364 = *(volatile signed __int32 **)(v18 + 1248);
                  while ( 1 )
                  {
                    _disable();
                    if ( !_interlockedbittestandset(v1364, (*(_DWORD *)(v18 + 2448) >> 10) & 0x1F) )
                      break;
                    _enable();
                    _mm_pause();
                  }
                  v1365 = *(struct _KPRCB **)(v18 + 2272);
                  v1366 = 38LL;
                  v1367 = 304;
                  v1368 = v1365;
                  do
                  {
                    *(_QWORD *)&v1368->MxCsr = 0LL;
                    v1367 -= 8;
                    v1368 = (struct _KPRCB *)((char *)v1368 + 8);
                    --v1366;
                  }
                  while ( v1366 );
                  if ( v1367 )
                  {
                    v1366 = 0xFFFFFFFFLL;
                    do
                    {
                      LOBYTE(v1368->MxCsr) = 0;
                      v1368 = (struct _KPRCB *)((char *)v1368 + 1);
                      --v1367;
                    }
                    while ( v1367 );
                  }
                  *(_OWORD *)&v1365->NextThread = *(_OWORD *)(v18 + 2120);
                  *(_OWORD *)&v1365->NestingLevel = *(_OWORD *)(v18 + 2136);
                  *(_OWORD *)&v1365->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v18 + 2152);
                  v1641 = 303;
                  v1642 = v1365;
                  LOWORD(v1365->NextThread) = v18 + 2188;
                  v1369 = (v18 + 2188) >> 16;
                  v1733 = v18 + 2188;
                  HIWORD(v1365->NextThread) = v1369;
                  LODWORD(v1365->IdleThread) = (v18 + 2188) >> 32;
                  __sidt(v1673);
                  __lidt(&v1641);
                  *v1362 = -15;
                  if ( *v1362 != -15 )
                    goto LABEL_2245;
                  if ( (*(_DWORD *)(v18 + 2452) & 0x20000) == 0 )
                  {
                    v1365 = KeGetCurrentPrcb();
                    **(_QWORD **)(v18 + 1216) = v18 - 0x5C5FC0A76E374B18LL;
                    v1369 = v1321;
                    **(_QWORD **)(v18 + 1224) = v1365;
                    **(_QWORD **)(v18 + 1232) = v1321;
                    **(_QWORD **)(v18 + 1240) = 275LL;
                  }
                  ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1321 - 6 + 5))(
                    v1369,
                    v1365,
                    v1366,
                    1LL);
                  if ( (*(_DWORD *)(v18 + 2452) & 0x20000) == 0 )
                  {
                    **(_QWORD **)(v18 + 1216) = 0xA3A03F5891C8B4E8uLL;
                    **(_QWORD **)(v18 + 1224) = 0LL;
                    **(_QWORD **)(v18 + 1232) = 0LL;
                    **(_QWORD **)(v18 + 1240) = 0LL;
                  }
                  if ( *v1362 == -15 )
                  {
                    *v1362 = -112;
                    v1329 = *v1362 == -112;
                  }
                  else
                  {
LABEL_2245:
                    v1329 = 0LL;
                  }
                  __lidt(v1673);
                  v1323 = *(_QWORD *)(v18 + 1248);
                  _InterlockedAnd((volatile signed __int32 *)v1323, ~(1 << ((*(_DWORD *)(v18 + 2448) >> 10) & 0x1F)));
                  _enable();
                  if ( !(_DWORD)v1329 )
                  {
LABEL_2569:
                    if ( !*(_DWORD *)(v18 + 2296) )
                    {
                      v1370 = (int *)v1559;
                      *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2312) = (char *)v1370 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2320) = *v1370;
                      *(_QWORD *)(v18 + 2328) = v1361;
                      *(_DWORD *)(v18 + 2296) = 1;
                      sub_14036B3BC(v18, 0LL, v1323, v1329);
                    }
                  }
                  i1 = (unsigned __int64)v1572;
                  v1319 = v1575;
                }
              }
              else
              {
                *(_DWORD *)(v18 + 2088) += v1322;
                v1323 = v1321;
                v1324 = *(_DWORD *)(v18 + 2068);
                v1325 = (const char *)v1321;
                v1326 = *(_QWORD *)(v18 + 2072);
                v1327 = v1321 + v1322;
                if ( v1321 < v1327 )
                {
                  do
                  {
                    _mm_prefetch(v1325, 0);
                    v1325 += 64;
                  }
                  while ( (unsigned __int64)v1325 < v1327 );
                }
                v1328 = *(_QWORD *)(v18 + 2072);
                v1329 = v1322 >> 7;
                if ( (_DWORD)v1329 )
                {
                  do
                  {
                    v1330 = 8LL;
                    do
                    {
                      v1331 = v1328 ^ *(_QWORD *)v1323;
                      v1332 = *(_QWORD *)(v1323 + 8);
                      v1323 += 16LL;
                      v1328 = __ROL8__(__ROL8__(v1331, v1324) ^ v1332, v1324);
                      --v1330;
                    }
                    while ( v1330 );
                    v1333 = __ROL8__(v1326 ^ (v1323 - v1321), 17) ^ v1326 ^ (v1323 - v1321);
                    v1712 = ((unsigned __int64)v1333 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1324 = ((unsigned __int8)(v1712 ^ v1333) ^ (unsigned __int8)v1324) & 0x3F;
                    if ( !v1324 )
                      LOBYTE(v1324) = 1;
                    v71 = (_DWORD)v1329 == 1;
                    v1329 = (unsigned int)(v1329 - 1);
                  }
                  while ( !v71 );
                  v18 = (ULONG_PTR)v1560;
                  v1320 = (int *)v1561;
                }
                v1334 = v1322 & 0x7F;
                if ( v1334 >= 8 )
                {
                  v1329 = (unsigned __int64)(v1322 & 0x7F) >> 3;
                  do
                  {
                    v1328 = __ROL8__(*(_QWORD *)v1323 ^ v1328, v1324);
                    v1323 += 8LL;
                    v1334 -= 8;
                    --v1329;
                  }
                  while ( v1329 );
                  i1 = (unsigned __int64)v1572;
                }
                if ( v1334 )
                {
                  do
                  {
                    v1335 = *(unsigned __int8 *)v1323++;
                    v1328 = __ROL8__(v1335 ^ v1328, v1324);
                    --v1334;
                  }
                  while ( v1334 );
                  v18 = (ULONG_PTR)v1560;
                  v1320 = (int *)v1561;
                }
                for ( i26 = v1328; ; LODWORD(v1328) = i26 ^ v1328 )
                {
                  i26 >>= 31;
                  if ( !i26 )
                    break;
                }
                v1360 = v1328 & 0x7FFFFFFF;
              }
              v1371 = *v1320;
              if ( v1360 != (*v1320 & 0x7FFFFFFF) )
              {
                v1372 = v1322;
                if ( v1322 )
                {
                  v1323 = 64LL;
                  if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
                  {
                    v1373 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1374 = v1321 & 0xFFFFFFFFFFFFF000uLL;
                    v1375 = (v1372 + v1321 - 1) | 0xFFF;
                    v1376 = (v1321 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1377 = v1373;
                      while ( 1 )
                      {
                        v1378 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(v1374, 0LL);
                        if ( v1378 != -1073741267 )
                          break;
                        if ( v1373 > 1u )
                          goto LABEL_2260;
                        v1377 = v1373;
                        __writecr8(v1373);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1378 < 0 )
                        break;
LABEL_2260:
                      v1374 += 4096LL;
                      v1376 += 4096LL;
                      if ( v1376 == v1375 )
                      {
                        __writecr8(v1377);
                        v1320 = (int *)v1561;
                        goto LABEL_2262;
                      }
                    }
                    __writecr8(v1377);
                    v1320 = (int *)v1561;
                    v1321 = v1574;
                    v1371 = *(_DWORD *)v1561;
                  }
                }
                v1393 = v1371;
                if ( !*(_DWORD *)(v18 + 2296) )
                {
                  LODWORD(v1393) = v1371 & 0x7FFFFFFF;
                  *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1393 ^ v1360;
                  if ( !*(_DWORD *)(v18 + 2296) )
                  {
                    v56 = v1559;
                    *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2320) = *(int *)v56;
                    *(_QWORD *)(v18 + 2328) = v1321;
                    *(_DWORD *)(v18 + 2296) = 1;
                    sub_14036B3BC(v18, 0LL, v1323, v1329);
                    v1319 = v1575;
                    i1 = (unsigned __int64)v1572;
LABEL_2264:
                    i7 = 0;
LABEL_2265:
                    ++v1320;
                    v1319 += 3;
                    v1561 = (__int64)v1320;
                    v1575 = v1319;
                    v1379 = v1319 == (unsigned int *)i1;
                    if ( (unsigned __int64)v1319 >= i1 )
                      goto LABEL_2268;
                    v78 = v1759;
                    if ( *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
                    {
                      v1379 = v1319 == (unsigned int *)i1;
LABEL_2268:
                      if ( !v1379 )
                      {
                        *(_DWORD *)(v18 + 2084) = (__int64)((__int64)v1319 - v1563) / 12;
                        goto LABEL_181;
                      }
                      v1380 = *(_QWORD *)(v18 + 1344);
                      v1381 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64))(v18 + 336))(v1380);
                      i1 = (unsigned __int64)(v56 + 24);
                      v1383 = **(unsigned int ***)(v18 + 1552);
                      v1384 = v1383 + 4;
                      v1385 = *((_BYTE *)v1383 + 12);
                      v1386 = (unsigned __int64)&v1383[6 * *v1383 + 4];
                      do
                      {
                        v1387 = 24LL;
                        v1388 = (__int64 *)(v56 + 24);
                        v1389 = v1384;
                        do
                        {
                          v1390 = *(_QWORD *)v1389;
                          v1389 += 2;
                          v1391 = *v1388++;
                          if ( v1390 != v1391 )
                            goto LABEL_2281;
                          v1387 = (unsigned int)(v1387 - 8);
                        }
                        while ( (unsigned int)v1387 >= 8 );
                        if ( !(_DWORD)v1387 )
                          break;
                        while ( 1 )
                        {
                          v1382 = *(unsigned __int8 *)v1389;
                          v1389 = (unsigned int *)((char *)v1389 + 1);
                          v1392 = *(unsigned __int8 *)v1388;
                          v1388 = (__int64 *)((char *)v1388 + 1);
                          if ( v1382 != v1392 )
                            break;
                          v71 = (_DWORD)v1387 == 1;
                          v1387 = (unsigned int)(v1387 - 1);
                          if ( v71 )
                            goto LABEL_2282;
                        }
LABEL_2281:
                        v1384 += 6;
                      }
                      while ( (unsigned __int64)v1384 < v1386 );
LABEL_2282:
                      v18 = (ULONG_PTR)v1560;
                      ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1560[25].Next)(
                        v1560[84].Next,
                        v1382,
                        v1387,
                        v1388);
                      __writecr8(v1381);
                      if ( !v1385 )
                        goto LABEL_2287;
                      i7 = 0;
                      if ( (*(_DWORD *)(v18 + 2452) & 0x10) != 0 && !*(_DWORD *)(v18 + 2296) )
                      {
                        *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v18 + 2320) = *(int *)v56;
                        *(_QWORD *)(v18 + 2328) = 1LL;
                        *(_DWORD *)(v18 + 2296) = 1;
                        sub_14036B3BC(v18, 0LL, v1394, v1395);
                      }
                      if ( *(_QWORD *)i1 != 1LL )
                      {
LABEL_2287:
                        i7 = 0;
                        if ( v1384 == (unsigned int *)v1386 && !*(_DWORD *)(v18 + 2296) )
                        {
                          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2320) = *(int *)v56;
                          *(_QWORD *)(v18 + 2328) = v1384;
                          *(_DWORD *)(v18 + 2296) = 1;
                          sub_14036B3BC(v18, 0LL, v1394, v1395);
                        }
                      }
LABEL_1722:
                      *(_DWORD *)(v18 + 2084) = 0;
                      goto LABEL_181;
                    }
                    continue;
                  }
                }
LABEL_2262:
                i1 = (unsigned __int64)v1572;
                v1319 = v1575;
              }
              break;
            }
            v56 = v1559;
            goto LABEL_2264;
          }
          v1291 = (const char *)*((_QWORD *)v56 + 1);
          v1292 = *((unsigned int *)v56 + 4);
          v1293 = (__int64)v1291;
          *(_DWORD *)(v18 + 2088) += v1292;
          v1294 = v1291;
          v1295 = *(_DWORD *)(v18 + 2068);
          for ( i27 = *(_QWORD *)(v18 + 2072); v1294 < &v1291[v1292]; v1294 += 64 )
            _mm_prefetch(v1294, 0);
          v1297 = *(_QWORD *)(v18 + 2072);
          v1298 = (unsigned int)v1292 >> 7;
          if ( (unsigned int)v1292 >> 7 )
          {
            do
            {
              v1299 = 8LL;
              do
              {
                v1300 = v1297 ^ *(_QWORD *)v1293;
                v1301 = *(_QWORD *)(v1293 + 8);
                v1293 += 16LL;
                v1297 = __ROL8__(__ROL8__(v1300, v1295) ^ v1301, v1295);
                --v1299;
              }
              while ( v1299 );
              v1302 = __ROL8__(i27 ^ (v1293 - (_QWORD)v1291), 17) ^ i27 ^ (v1293 - (_QWORD)v1291);
              v1710 = ((unsigned __int64)v1302 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1295 = ((unsigned __int8)(v1710 ^ v1302) ^ (unsigned __int8)v1295) & 0x3F;
              if ( !v1295 )
                LOBYTE(v1295) = 1;
              --v1298;
            }
            while ( v1298 );
            v18 = (ULONG_PTR)v1560;
          }
          v1303 = v1292 & 0x7F;
          if ( v1303 >= 8 )
          {
            v1304 = (unsigned __int64)v1303 >> 3;
            do
            {
              v1297 = __ROL8__(*(_QWORD *)v1293 ^ v1297, v1295);
              v1293 += 8LL;
              v1303 -= 8;
              --v1304;
            }
            while ( v1304 );
          }
          if ( v1303 )
          {
            do
            {
              v1305 = *(unsigned __int8 *)v1293++;
              v1297 = __ROL8__(v1305 ^ v1297, v1295);
              --v1303;
            }
            while ( v1303 );
            v18 = (ULONG_PTR)v1560;
          }
          for ( i28 = v1297; ; LODWORD(v1297) = i28 ^ v1297 )
          {
            i28 >>= 31;
            if ( !i28 )
              break;
          }
          v1307 = *((_DWORD *)v56 + 5);
          v1308 = v1297 & 0x7FFFFFFF;
          if ( v1308 != v1307 )
          {
            v1309 = *((unsigned int *)v56 + 4);
            v1310 = *((_QWORD *)v56 + 1);
            if ( *((_DWORD *)v56 + 4) )
            {
              v1293 = 64LL;
              if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
              {
                v1311 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1312 = v1310 & 0xFFFFFFFFFFFFF000uLL;
                v1313 = (v1310 + v1309 - 1) | 0xFFF;
                v1314 = (v1310 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1315 = v1311;
                  while ( 1 )
                  {
                    v1316 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(v1312, 0LL);
                    if ( v1316 != -1073741267 )
                      break;
                    if ( v1311 > 1u )
                      goto LABEL_2154;
                    v1315 = v1311;
                    __writecr8(v1311);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1316 < 0 )
                    break;
LABEL_2154:
                  v1312 += 4096LL;
                  v1314 += 4096LL;
                  if ( v1314 == v1313 )
                    goto LABEL_2155;
                }
                __writecr8(v1315);
                v56 = v1559;
                i7 = 0;
                v1307 = *((_DWORD *)v1559 + 5);
              }
            }
            v1337 = *(_DWORD *)(v18 + 2296);
            if ( !v1337 )
            {
              v1338 = v1307;
              goto LABEL_2181;
            }
            goto LABEL_2182;
          }
        }
        else
        {
          v1340 = (const char *)*((_QWORD *)v56 + 1);
          v1341 = *((unsigned int *)v56 + 4);
          v1293 = (__int64)v1340;
          *(_DWORD *)(v18 + 2088) += v1341;
          v1342 = v1340;
          v1343 = *(_DWORD *)(v18 + 2068);
          for ( i29 = *(_QWORD *)(v18 + 2072); v1342 < &v1340[v1341]; v1342 += 64 )
            _mm_prefetch(v1342, 0);
          v1345 = *(_QWORD *)(v18 + 2072);
          v1346 = (unsigned int)v1341 >> 7;
          if ( (unsigned int)v1341 >> 7 )
          {
            do
            {
              v1347 = 8LL;
              do
              {
                v1348 = v1345 ^ *(_QWORD *)v1293;
                v1349 = *(_QWORD *)(v1293 + 8);
                v1293 += 16LL;
                v1345 = __ROL8__(__ROL8__(v1348, v1343) ^ v1349, v1343);
                --v1347;
              }
              while ( v1347 );
              v1350 = __ROL8__(i29 ^ (v1293 - (_QWORD)v1340), 17) ^ i29 ^ (v1293 - (_QWORD)v1340);
              v1711 = ((unsigned __int64)v1350 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1343 = ((unsigned __int8)(v1711 ^ v1350) ^ (unsigned __int8)v1343) & 0x3F;
              if ( !v1343 )
                LOBYTE(v1343) = 1;
              --v1346;
            }
            while ( v1346 );
            v18 = (ULONG_PTR)v1560;
          }
          v1310 = v1341 & 0x7F;
          if ( (unsigned int)v1310 >= 8 )
          {
            v1351 = (unsigned __int64)(unsigned int)v1310 >> 3;
            do
            {
              v1345 = __ROL8__(*(_QWORD *)v1293 ^ v1345, v1343);
              v1293 += 8LL;
              v1310 = (unsigned int)(v1310 - 8);
              --v1351;
            }
            while ( v1351 );
          }
          if ( (_DWORD)v1310 )
          {
            do
            {
              v1352 = *(unsigned __int8 *)v1293++;
              v1345 = __ROL8__(v1352 ^ v1345, v1343);
              v1310 = (unsigned int)(v1310 - 1);
            }
            while ( (_DWORD)v1310 );
            v18 = (ULONG_PTR)v1560;
          }
          for ( i30 = v1345; ; LODWORD(v1345) = i30 ^ v1345 )
          {
            i30 >>= 31;
            if ( !i30 )
              break;
          }
          v1308 = v1345 & 0x7FFFFFFF;
          if ( v1308 == *((_DWORD *)v56 + 5) )
          {
LABEL_2156:
            i7 = 0;
            goto LABEL_2157;
          }
          if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
            i7 = 1;
          v1354 = *((unsigned int *)v56 + 4);
          v1355 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v1310 = 64LL;
            if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
            {
              v1356 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1357 = v1355 & 0xFFFFFFFFFFFFF000uLL;
              v1574 = (v1355 + v1354 - 1) | 0xFFF;
              v1358 = (v1355 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1315 = v1356;
                while ( 1 )
                {
                  v1359 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v18 + 1128))(
                            v1357,
                            0LL,
                            v1310,
                            v1293);
                  if ( v1359 != -1073741267 )
                    break;
                  if ( i7 )
                    goto LABEL_2217;
                  if ( v1356 > 1u )
                    goto LABEL_2215;
                  v1315 = v1356;
                  __writecr8(v1356);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1359 < 0 )
                  break;
LABEL_2215:
                v1357 += 4096LL;
                v1358 += 4096LL;
                if ( v1358 == v1574 )
                {
LABEL_2155:
                  __writecr8(v1315);
                  v56 = v1559;
                  goto LABEL_2156;
                }
              }
LABEL_2217:
              __writecr8(v1315);
              v56 = v1559;
            }
          }
          v1337 = *(_DWORD *)(v18 + 2296);
          i7 = 0;
          v1338 = *((unsigned int *)v56 + 5);
          if ( !v1337 )
          {
LABEL_2181:
            *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v1308 ^ v1338;
            v1337 = *(_DWORD *)(v18 + 2296);
          }
LABEL_2182:
          v1339 = *((_QWORD *)v56 + 1);
          if ( !v1337 )
          {
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *(int *)v56;
            *(_QWORD *)(v18 + 2328) = v1339;
            *(_DWORD *)(v18 + 2296) = 1;
            sub_14036B3BC(v18, 0LL, v1310, v1293);
          }
        }
LABEL_2157:
        v78 = v1759;
        goto LABEL_2158;
      case 0:
        i1 = *((_QWORD *)v56 + 1);
        v226 = *((unsigned int *)v56 + 4);
        v54 = i1;
        *(_DWORD *)(v18 + 2088) += v226;
        v227 = (const char *)i1;
        v228 = *(_DWORD *)(v18 + 2068);
        v229 = *(_QWORD *)(v18 + 2072);
        if ( i1 < i1 + v226 )
        {
          do
          {
            _mm_prefetch(v227, 0);
            v227 += 64;
          }
          while ( (unsigned __int64)v227 < i1 + v226 );
        }
        v230 = *(_QWORD *)(v18 + 2072);
        v231 = (unsigned int)v226 >> 7;
        if ( (unsigned int)v226 >> 7 )
        {
          do
          {
            v232 = 8LL;
            do
            {
              v233 = *(_QWORD *)(v54 + 8) ^ __ROL8__(*(_QWORD *)v54 ^ v230, v228);
              v54 += 16LL;
              v230 = __ROL8__(v233, v228);
              --v232;
            }
            while ( v232 );
            v234 = (__ROL8__(v229 ^ (v54 - i1), 17) ^ v229 ^ (v54 - i1)) * (unsigned __int128)0x7010008004002001uLL;
            v1727 = *((_QWORD *)&v234 + 1);
            v228 = ((unsigned __int8)v234 ^ (unsigned __int8)(BYTE8(v234) ^ v228)) & 0x3F;
            if ( !v228 )
              LOBYTE(v228) = 1;
            --v231;
          }
          while ( v231 );
          v18 = (ULONG_PTR)v1560;
        }
        v55 = v226 & 0x7F;
        if ( (unsigned int)v55 >= 8 )
        {
          v235 = (unsigned __int64)(unsigned int)v55 >> 3;
          do
          {
            v230 = __ROL8__(*(_QWORD *)v54 ^ v230, v228);
            v54 += 8LL;
            v55 = (unsigned int)(v55 - 8);
            --v235;
          }
          while ( v235 );
        }
        for ( ; (_DWORD)v55; v55 = (unsigned int)(v55 - 1) )
        {
          v236 = *(unsigned __int8 *)v54++;
          v230 = __ROL8__(v236 ^ v230, v228);
        }
        for ( i31 = v230; ; LODWORD(v230) = i31 ^ v230 )
        {
          i31 >>= 31;
          if ( !i31 )
            break;
        }
        v238 = v230 & 0x7FFFFFFF;
        if ( v238 == *((_DWORD *)v56 + 5) )
          goto LABEL_241;
        if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
          i7 = 1;
        v239 = *((unsigned int *)v56 + 4);
        v240 = *((_QWORD *)v56 + 1);
        if ( *((_DWORD *)v56 + 4) )
        {
          v55 = 64LL;
          if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
          {
            v241 = KeGetCurrentIrql();
            __writecr8(2uLL);
            i1 = v240 & 0xFFFFFFFFFFFFF000uLL;
            v1764 = (v240 + v239 - 1) | 0xFFF;
            v242 = (v240 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v103 = v241;
              while ( 1 )
              {
                v243 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v18 + 1128))(
                         i1,
                         0LL,
                         v55,
                         v54);
                if ( v243 != -1073741267 )
                  break;
                if ( i7 )
                  goto LABEL_457;
                if ( v241 > 1u )
                  goto LABEL_455;
                v103 = v241;
                __writecr8(v241);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v243 < 0 )
                break;
LABEL_455:
              i1 += 4096LL;
              v242 += 4096LL;
              if ( v242 == v1764 )
                goto LABEL_240;
            }
LABEL_457:
            __writecr8(v103);
            v56 = v1559;
          }
        }
        v105 = *(_DWORD *)(v18 + 2296);
        i7 = 0;
        if ( !v105 )
        {
          v106 = *((unsigned int *)v56 + 5) ^ (unsigned __int64)v238;
LABEL_245:
          *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v106;
          v105 = *(_DWORD *)(v18 + 2296);
        }
LABEL_246:
        v107 = *((_QWORD *)v56 + 1);
LABEL_247:
        if ( v105 )
          goto LABEL_181;
        *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v18 + 2320) = *(int *)v56;
        *(_QWORD *)(v18 + 2328) = v107;
        goto LABEL_249;
      case 1:
        goto LABEL_2116;
      case 4:
        if ( (*(_DWORD *)(v18 + 2096) & 1) != 0 )
          goto LABEL_181;
        v205 = *(void (**)(void))(v18 + 376);
        v206 = 0;
        v207 = *(_QWORD *)(v18 + 1352);
        LODWORD(v1564) = 0;
        v205();
        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 || (v208 = *(_DWORD *)(v18 + 2384), v208 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 296))(*(_QWORD *)(v18 + 2560), 0LL);
          LOBYTE(i1) = 0x80;
        }
        else
        {
          LODWORD(i1) = 1;
          LOBYTE(i1) = 1 << v208;
        }
        v1763 = i1;
        (*(void (__fastcall **)(__int64, _QWORD))(v18 + 312))(v207, 0LL);
        v211 = *(_QWORD ***)(v18 + 1312);
        v212 = *v211;
        if ( *v211 != v211 )
        {
          do
          {
            v213 = (unsigned __int64)v212 - *(_QWORD *)(v18 + 1744);
            if ( (_BYTE)i1 != 0x80
              && ((unsigned __int8)i1 & *(_BYTE *)(v213 + *(_QWORD *)(v18 + 1720))) != 0
              && (*(_DWORD *)(v213 + *(_QWORD *)(v18 + 1728)) & *(_DWORD *)(v18 + 1752)) != 0
              && !*(_DWORD *)(v18 + 2296) )
            {
              v214 = (int *)v1559;
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = (char *)v214 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *v214;
              *(_QWORD *)(v18 + 2328) = v213 | 1;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v209, v210);
            }
            _InterlockedOr8((volatile signed __int8 *)(v213 + *(_QWORD *)(v18 + 1720)), i1);
            v212 = (_QWORD *)*v212;
            ++v206;
          }
          while ( v212 != v211 );
          LODWORD(v1564) = v206;
        }
        v215 = *(_QWORD *)(v18 + 1280);
        v1561 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        (*(void (__fastcall **)(__int64, _BYTE *))(v18 + 328))(v215, v1755);
        v218 = *(_QWORD ***)(v18 + 1272);
        v219 = *v218;
        if ( *v218 != v218 )
        {
          v220 = i1;
          v221 = (unsigned __int8)i1;
          v222 = (int *)v1559;
          v223 = ~v220;
          do
          {
            v224 = *(_QWORD *)(v18 + 1720);
            v225 = (char *)v219 - *(_QWORD *)(v18 + 1712);
            if ( (v225[v224] & v221) == 0 && !*(_DWORD *)(v18 + 2296) )
            {
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = (char *)v222 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *v222;
              *(_QWORD *)(v18 + 2328) = v225;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v216, v217);
              v224 = *(_QWORD *)(v18 + 1720);
            }
            _InterlockedAnd8(&v225[v224], v223);
            v219 = (_QWORD *)*v219;
          }
          while ( v219 != v218 );
          LODWORD(i1) = v1763;
          v206 = v1564;
        }
        (*(void (__fastcall **)(_BYTE *))(v18 + 392))(v1755);
        __writecr8((unsigned __int8)v1561);
        if ( (_BYTE)i1 == 0x80 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 304))(*(_QWORD *)(v18 + 2560), 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 1352), 0LL);
        (*(void (**)(void))(v18 + 384))();
        *(_DWORD *)(v18 + 2088) += v206 << 8;
        goto LABEL_241;
      case 5:
        v181 = *(_DWORD *)(v18 + 2096);
        if ( (v181 & 1) == 0 )
          goto LABEL_181;
        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 )
        {
          v182 = __rdtsc();
          v183 = (__ROR8__(v182, 3) ^ v182) * (unsigned __int128)0x7010008004002001uLL;
          v1726 = *((_QWORD *)&v183 + 1);
          v1762 = ((unsigned __int64)v183 ^ *((_QWORD *)&v183 + 1)) == 3
                                                                     * (((unsigned __int64)v183 ^ *((_QWORD *)&v183 + 1))
                                                                      / 3);
        }
        else
        {
          LODWORD(i1) = (v181 & 3) == 3;
          v1762 = i1;
        }
        v184 = *(void (**)(void))(v18 + 376);
        v185 = 0;
        v186 = *(_QWORD *)(v18 + 1352);
        LODWORD(v1564) = 0;
        v184();
        if ( (*(_DWORD *)(v18 + 2448) & 0x40000000) != 0 || (v187 = *(_DWORD *)(v18 + 2384), v187 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 296))(*(_QWORD *)(v18 + 2560), 0LL);
          LOBYTE(i1) = 0x80;
        }
        else
        {
          LODWORD(i1) = 1;
          LOBYTE(i1) = 1 << v187;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v18 + 312))(v186, 0LL);
        v188 = *(volatile signed __int8 ***)(v18 + 1312);
        v189 = *v188;
        if ( *v188 != (volatile signed __int8 *)v188 )
        {
          do
          {
            _InterlockedOr8(&v189[*(_QWORD *)(v18 + 1720) - *(_QWORD *)(v18 + 1744)], i1);
            v189 = *(volatile signed __int8 **)v189;
            ++v185;
          }
          while ( v189 != (volatile signed __int8 *)v188 );
          LODWORD(v1564) = v185;
        }
        v190 = 4LL;
        v191 = **(_QWORD **)(v18 + 1360);
        v192 = *(unsigned int *)(*(_QWORD *)(v18 + 1840) + v191);
        while ( 1 )
        {
          v193 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v18 + 264))(v191, v190);
          v195 = 0LL;
          v196 = v193;
          if ( v193 )
            break;
LABEL_398:
          v190 += 4LL;
          if ( v190 >= v192 )
          {
            if ( (_BYTE)i1 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v18 + 304))(
                *(_QWORD *)(v18 + 2560),
                0LL,
                v194,
                v195);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v18 + 320))(
              *(_QWORD *)(v18 + 1352),
              0LL,
              v194,
              v195);
            (*(void (**)(void))(v18 + 384))();
            *(_DWORD *)(v18 + 2088) += ((unsigned int)(v192 >> 2) + (_DWORD)v1564) << 8;
            goto LABEL_241;
          }
        }
        v197 = (_BYTE *)((*v193 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v198 = *v197 & 0x7F;
        if ( v198 == 3 )
        {
          v194 = *(_QWORD *)(v18 + 1720);
          v199 = v194;
          if ( ((unsigned __int8)i1 & v197[v194]) == 0
            && (*(_DWORD *)&v197[*(_QWORD *)(v18 + 1728)] & *(_DWORD *)(v18 + 1752)) != 0
            && !*(_DWORD *)(v18 + 2296) )
          {
            v200 = (int *)v1559;
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = (char *)v200 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *v200;
            *(_QWORD *)(v18 + 2328) = v197;
            *(_DWORD *)(v18 + 2296) = 1;
            sub_14036B3BC(v18, 0LL, v194, 0LL);
            v199 = *(_QWORD *)(v18 + 1720);
          }
          _InterlockedAnd8(&v197[v199], ~(_BYTE)i1);
          goto LABEL_397;
        }
        if ( v198 == 6 )
        {
          if ( v1762 )
          {
            v201 = *(_QWORD *)(v18 + 1664);
            v202 = *(_QWORD *)&v197[v201 + 32];
            if ( (v202 == *(_QWORD *)(v18 + 800) || v202 == *(_QWORD *)(v18 + 808))
              && *(_QWORD *)&v197[v201 + 48] == *(_QWORD *)(v18 + 816) )
            {
              v203 = *(_QWORD *)&v197[v201 + 40] == *(_QWORD *)(v18 + 824);
              goto LABEL_394;
            }
            goto LABEL_395;
          }
        }
        else
        {
          v203 = v198 == 0;
LABEL_394:
          if ( !v203 )
          {
LABEL_395:
            if ( !*(_DWORD *)(v18 + 2296) )
            {
              v204 = (int *)v1559;
              *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2312) = (char *)v204 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2320) = *v204;
              *(_QWORD *)(v18 + 2328) = v197;
              *(_DWORD *)(v18 + 2296) = 1;
              sub_14036B3BC(v18, 0LL, v194, 0LL);
            }
          }
        }
LABEL_397:
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v18 + 288))(v191, v196, v194, v195);
        goto LABEL_398;
      case 7:
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 416))(v1752, *((unsigned int *)v56 + 7));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 464))(v1752, v1734);
        for ( i32 = 0; i32 < *((_DWORD *)v56 + 6); ++i32 )
        {
          v173 = *(unsigned int *)&v56[24 * i32 + 64];
          if ( (*(_BYTE *)(v18 + 2171) & 2) != 0
            && (_DWORD)v173 == -1073741694
            && KeGetPcr()->Prcb.Number == *(_DWORD *)(v18 + 2288) )
          {
            v174 = *(_QWORD *)(v18 + 2280);
          }
          else
          {
            v174 = __readmsr(v173);
          }
          v175 = *(_QWORD *)&v56[24 * i32 + 48];
          v176 = *(_QWORD *)&v56[24 * i32 + 56];
          v177 = v175 & v174;
          if ( v177 == v176 )
          {
            if ( (*(_DWORD *)(v18 + 2452) & 0x200) != 0 && v175 == -1 )
              __writemsr(v173, v177);
          }
          else
          {
            v178 = v173 | ((unsigned __int64)*((unsigned int *)v56 + 7) << 32);
            if ( !*(_DWORD *)(v18 + 2296) )
            {
              v179 = v177 ^ v176;
              *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v179;
              if ( !*(_DWORD *)(v18 + 2296) )
              {
                *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2320) = *(int *)v56;
                *(_QWORD *)(v18 + 2328) = v178;
                *(_DWORD *)(v18 + 2296) = 1;
                sub_14036B3BC(v18, 0LL, v179, v178);
              }
            }
          }
        }
        (*(void (__fastcall **)(_BYTE *))(v18 + 408))(v1734);
        v180 = *((_DWORD *)v56 + 6) << 15;
        goto LABEL_367;
      case 8:
        v138 = *((_QWORD *)v56 + 3);
        v139 = *((_WORD *)v56 + 17);
        if ( *(_WORD *)(v138 + *(_QWORD *)(v18 + 1776) + *(_QWORD *)(v18 + 1824)) != v139 && !*(_DWORD *)(v18 + 2296) )
        {
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v138;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, 12LL, v54);
          v139 = *((_WORD *)v56 + 17);
        }
        if ( (v139 & *(_WORD *)(v18 + 1832)) == 0
          && *(_QWORD *)(v138 + *(_QWORD *)(v18 + 1784)) != v138 + *(_QWORD *)(v18 + 1784)
          && !*(_DWORD *)(v18 + 2296) )
        {
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v138;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, v55, v54);
        }
        v140 = (_QWORD *)*((_QWORD *)v56 + 1);
        v141 = *((unsigned int *)v56 + 4);
        v142 = v140;
        *(_DWORD *)(v18 + 2088) += v141;
        v143 = (const char *)v140;
        v144 = *(_DWORD *)(v18 + 2068);
        v145 = *(_QWORD *)(v18 + 2072);
        if ( v140 < (_QWORD *)((char *)v140 + v141) )
        {
          do
          {
            _mm_prefetch(v143, 0);
            v143 += 64;
          }
          while ( v143 < (const char *)v140 + v141 );
        }
        v146 = *(_QWORD *)(v18 + 2072);
        v147 = (unsigned int)v141 >> 7;
        if ( (unsigned int)v141 >> 7 )
        {
          do
          {
            v148 = 8LL;
            do
            {
              v149 = v142[1] ^ __ROL8__(*v142 ^ v146, v144);
              v142 += 2;
              v146 = __ROL8__(v149, v144);
              --v148;
            }
            while ( v148 );
            v150 = (__ROL8__(v145 ^ ((char *)v142 - (char *)v140), 17) ^ v145 ^ (unsigned __int64)((char *)v142
                                                                                                 - (char *)v140))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1725 = *((_QWORD *)&v150 + 1);
            v144 = ((unsigned __int8)v150 ^ (unsigned __int8)(BYTE8(v150) ^ v144)) & 0x3F;
            if ( !v144 )
              LOBYTE(v144) = 1;
            --v147;
          }
          while ( v147 );
          v18 = (ULONG_PTR)v1560;
        }
        v151 = v141 & 0x7F;
        if ( (unsigned int)v151 >= 8 )
        {
          v152 = (unsigned __int64)(unsigned int)v151 >> 3;
          do
          {
            v146 = __ROL8__(*v142++ ^ v146, v144);
            v151 = (unsigned int)(v151 - 8);
            --v152;
          }
          while ( v152 );
        }
        for ( ; (_DWORD)v151; v151 = (unsigned int)(v151 - 1) )
        {
          v153 = *(unsigned __int8 *)v142;
          v142 = (_QWORD *)((char *)v142 + 1);
          v146 = __ROL8__(v153 ^ v146, v144);
        }
        for ( i33 = v146; ; LODWORD(v146) = i33 ^ v146 )
        {
          i33 >>= 31;
          if ( !i33 )
            break;
        }
        v155 = v146 & 0x7FFFFFFF;
        if ( v155 == *((_DWORD *)v56 + 5) )
        {
LABEL_339:
          i7 = 0;
        }
        else
        {
          if ( !*(_DWORD *)v56 && *((_DWORD *)v56 + 6) )
            i7 = 1;
          v156 = *((unsigned int *)v56 + 4);
          v157 = *((_QWORD *)v56 + 1);
          if ( *((_DWORD *)v56 + 4) )
          {
            v151 = 64LL;
            if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
            {
              v158 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v159 = v157 & 0xFFFFFFFFFFFFF000uLL;
              v1761 = (v157 + v156 - 1) | 0xFFF;
              v160 = (v157 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v161 = v158;
                while ( 1 )
                {
                  v162 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                           v159,
                           0LL,
                           v151,
                           v142);
                  if ( v162 != -1073741267 )
                    break;
                  if ( i7 )
                    goto LABEL_347;
                  if ( v158 > 1u )
                    goto LABEL_337;
                  v161 = v158;
                  __writecr8(v158);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v162 < 0 )
                  break;
LABEL_337:
                v159 += 4096LL;
                v160 += 4096LL;
                if ( v160 == v1761 )
                {
                  __writecr8(v161);
                  v56 = v1559;
                  goto LABEL_339;
                }
              }
LABEL_347:
              __writecr8(v161);
              v56 = v1559;
            }
          }
          v170 = *(_DWORD *)(v18 + 2296);
          i7 = 0;
          if ( !v170 )
          {
            *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v155 ^ (unsigned __int64)*((unsigned int *)v56 + 5);
            v170 = *(_DWORD *)(v18 + 2296);
          }
          v171 = *((_QWORD *)v56 + 1);
          if ( !v170 )
          {
            LODWORD(i1) = -1849117464;
            *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2320) = *(int *)v56;
            *(_QWORD *)(v18 + 2328) = v171;
            *(_DWORD *)(v18 + 2296) = 1;
            sub_14036B3BC(v18, 0LL, v151, v142);
            goto LABEL_341;
          }
        }
        LODWORD(i1) = -1849117464;
LABEL_341:
        v1657 = v56 + 48;
        v163 = *((_WORD *)v56 + 16);
        v1558 = &v1631;
        v1656[0] = v163;
        v1656[1] = v163;
        v164 = *(_QWORD *)(v18 + 1288);
        v165 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v18 + 488);
        LOBYTE(v1557) = 0;
        if ( v165(v1656, 0LL, 0LL, 0LL, v164, v1557, 0LL, &v1631) < 0 )
          goto LABEL_181;
        v168 = v1631;
        if ( v1631 != *((_QWORD *)v56 + 3) && !*(_DWORD *)(v18 + 2296) )
        {
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v168;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, v166, v167);
        }
LABEL_345:
        v169 = *(void (**)(void))(v18 + 480);
        goto LABEL_346;
      case 10:
        if ( *((_DWORD *)v56 + 6) )
        {
          if ( !*(_QWORD *)(v18 + 2432) )
            goto LABEL_274;
          v108 = *(_DWORD *)(v18 + 2452);
          if ( (v108 & 4) != 0 )
            goto LABEL_274;
          if ( *(_DWORD *)(v18 + 2084) )
          {
            if ( (v108 & 0x20) != 0 )
              goto LABEL_274;
          }
          else
          {
            *(_DWORD *)(v18 + 2452) = v108 ^ ((unsigned __int8)v108 ^ (unsigned __int8)(8 * v108)) & 0x20;
          }
        }
        v109 = (unsigned __int64)&v56[16 * *(unsigned int *)(v18 + 2084) + 48];
        v110 = (unsigned __int64)&v56[16 * *((unsigned int *)v56 + 7) + 48];
        v1760 = v110;
        while ( 1 )
        {
          if ( *(int *)v109 >= 0 )
          {
            v111 = *(_QWORD *)(v109 + 8);
            v112 = *(unsigned int *)(v109 + 4);
            v113 = (_QWORD *)v111;
            *(_DWORD *)(v18 + 2088) += v112;
            v114 = (const char *)v111;
            v115 = *(_DWORD *)(v18 + 2068);
            v116 = (unsigned int)v112;
            v117 = *(_QWORD *)(v18 + 2072);
            v1563 = v111;
            if ( v111 < v112 + v111 )
            {
              do
              {
                _mm_prefetch(v114, 0);
                v114 += 64;
              }
              while ( (unsigned __int64)v114 < v112 + v111 );
            }
            v118 = v117;
            v119 = (unsigned int)v112 >> 7;
            if ( (unsigned int)v112 >> 7 )
            {
              do
              {
                v120 = 8LL;
                do
                {
                  v121 = v118 ^ *v113;
                  v122 = v113[1];
                  v113 += 2;
                  v118 = __ROL8__(__ROL8__(v121, v115) ^ v122, v115);
                  --v120;
                }
                while ( v120 );
                v123 = __ROL8__(v117 ^ ((unsigned __int64)v113 - v111), 17) ^ v117 ^ ((unsigned __int64)v113 - v111);
                v1724 = (v123 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v115 = ((unsigned __int8)(v123 ^ v1724) ^ (unsigned __int8)v115) & 0x3F;
                if ( !v115 )
                  LOBYTE(v115) = 1;
                --v119;
              }
              while ( v119 );
              v18 = (ULONG_PTR)v1560;
              v110 = v1760;
            }
            v124 = v112 & 0x7F;
            if ( (unsigned int)v124 >= 8 )
            {
              v125 = (unsigned __int64)(unsigned int)v124 >> 3;
              do
              {
                v118 = __ROL8__(*v113++ ^ v118, v115);
                v124 = (unsigned int)(v124 - 8);
                --v125;
              }
              while ( v125 );
            }
            for ( ; (_DWORD)v124; v124 = (unsigned int)(v124 - 1) )
            {
              v126 = *(unsigned __int8 *)v113;
              v113 = (_QWORD *)((char *)v113 + 1);
              v118 = __ROL8__(v126 ^ v118, v115);
            }
            for ( i34 = v118; ; LODWORD(v118) = i34 ^ v118 )
            {
              i34 >>= 31;
              if ( !i34 )
                break;
            }
            v129 = *(_DWORD *)v109;
            v130 = v118 & 0x7FFFFFFF;
            if ( v130 == (*(_DWORD *)v109 & 0x7FFFFFFF) )
            {
LABEL_288:
              i7 = 0;
            }
            else
            {
              if ( v116 && (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
              {
                v131 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v132 = v111 & 0xFFFFFFFFFFFFF000uLL;
                v1561 = (v116 + v111 - 1) | 0xFFF;
                v133 = (v111 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v134 = v131;
                  while ( 1 )
                  {
                    v135 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                             v132,
                             0LL,
                             v124,
                             v113);
                    if ( v135 != -1073741267 )
                      break;
                    if ( v131 > 1u )
                      goto LABEL_286;
                    v134 = v131;
                    __writecr8(v131);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v135 < 0 )
                    break;
LABEL_286:
                  v132 += 4096LL;
                  v133 += 4096LL;
                  if ( v133 == v1561 )
                  {
                    __writecr8(v134);
                    v110 = v1760;
                    goto LABEL_288;
                  }
                }
                __writecr8(v134);
                v129 = *(_DWORD *)v109;
                v111 = v1563;
                v110 = v1760;
              }
              v137 = v129;
              i7 = 0;
              if ( !*(_DWORD *)(v18 + 2296) )
              {
                LODWORD(v137) = v129 & 0x7FFFFFFF;
                *(_QWORD *)(*(_QWORD *)(v18 + 1424) + 24LL) = v137 ^ v130;
                if ( !*(_DWORD *)(v18 + 2296) )
                {
                  i1 = (unsigned __int64)v1559;
                  *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2312) = i1 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2320) = *(int *)i1;
                  *(_QWORD *)(v18 + 2328) = v111;
                  *(_DWORD *)(v18 + 2296) = 1;
                  sub_14036B3BC(v18, 0LL, v124, v113);
                  goto LABEL_290;
                }
              }
            }
          }
          i1 = (unsigned __int64)v1559;
LABEL_290:
          v109 += 16LL;
          v136 = v109 == v110;
          if ( v109 >= v110 )
            goto LABEL_293;
          if ( *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
          {
            v136 = v109 == v110;
LABEL_293:
            if ( !v136 )
            {
              v128 = (__int64)(v109 - (i1 + 48)) >> 4;
              goto LABEL_295;
            }
LABEL_274:
            LODWORD(v128) = 0;
LABEL_295:
            *(_DWORD *)(v18 + 2084) = v128;
            goto LABEL_181;
          }
        }
    }
    if ( v78 != 11 )
      goto LABEL_2311;
    if ( !*(_QWORD *)(v18 + 2432) )
      goto LABEL_1722;
    if ( *(_DWORD *)(v18 + 2084) )
    {
      v79 = *(_DWORD *)(v18 + 2452);
      if ( (((unsigned __int8)v79 ^ (unsigned __int8)(v79 >> 3)) & 4) != 0 )
        goto LABEL_1722;
    }
    else
    {
      v79 = *(_DWORD *)(v18 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v18 + 2452) ^ (unsigned __int8)(8
                                                                                                  * *(_DWORD *)(v18 + 2452))) & 0x20;
      *(_DWORD *)(v18 + 2452) = v79;
    }
    if ( (v79 & 4) != 0 )
    {
      v80 = *((_QWORD *)v56 + 1) & 0xFFFFFFFFFFFFF000uLL;
      i1 = ((*((_DWORD *)v56 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v56 + 4) + 4095) >> 12;
      while ( i1 )
      {
        --i1;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v18 + 688))(v80) && !*(_DWORD *)(v18 + 2296) )
        {
          *(_QWORD *)(v18 + 2304) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2312) = v56 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2320) = *(int *)v56;
          *(_QWORD *)(v18 + 2328) = v80;
          *(_DWORD *)(v18 + 2296) = 1;
          sub_14036B3BC(v18, 0LL, v81, v82);
        }
        v80 += 4096LL;
        *(_DWORD *)(v18 + 2088) += 256;
      }
      goto LABEL_181;
    }
    i1 = *((_QWORD *)v56 + 1);
    v83 = *((unsigned int *)v56 + 4);
    v54 = i1;
    *(_DWORD *)(v18 + 2088) += v83;
    v84 = (const char *)i1;
    v85 = *(_DWORD *)(v18 + 2068);
    v86 = *(_QWORD *)(v18 + 2072);
    if ( i1 < i1 + v83 )
    {
      do
      {
        _mm_prefetch(v84, 0);
        v84 += 64;
      }
      while ( (unsigned __int64)v84 < i1 + v83 );
    }
    v87 = *(_QWORD *)(v18 + 2072);
    v88 = (unsigned int)v83 >> 7;
    if ( (unsigned int)v83 >> 7 )
    {
      do
      {
        v89 = 8LL;
        do
        {
          v90 = v87 ^ *(_QWORD *)v54;
          v91 = *(_QWORD *)(v54 + 8);
          v54 += 16LL;
          v87 = __ROL8__(__ROL8__(v90, v85) ^ v91, v85);
          --v89;
        }
        while ( v89 );
        v92 = (__ROL8__(v86 ^ (v54 - i1), 17) ^ v86 ^ (v54 - i1)) * (unsigned __int128)0x7010008004002001uLL;
        v1723 = *((_QWORD *)&v92 + 1);
        v85 = ((unsigned __int8)(v92 ^ BYTE8(v92)) ^ (unsigned __int8)v85) & 0x3F;
        if ( !v85 )
          LOBYTE(v85) = 1;
        --v88;
      }
      while ( v88 );
      v18 = (ULONG_PTR)v1560;
    }
    v93 = v83 & 0x7F;
    if ( v93 >= 8 )
    {
      v94 = (unsigned __int64)v93 >> 3;
      do
      {
        v87 = __ROL8__(*(_QWORD *)v54 ^ v87, v85);
        v54 += 8LL;
        v93 -= 8;
        --v94;
      }
      while ( v94 );
      v18 = (ULONG_PTR)v1560;
    }
    for ( ; v93; --v93 )
    {
      v95 = *(unsigned __int8 *)v54++;
      v87 = __ROL8__(v95 ^ v87, v85);
    }
    for ( i35 = v87; ; LODWORD(v87) = i35 ^ v87 )
    {
      i35 >>= 31;
      if ( !i35 )
        break;
    }
    v97 = *((_DWORD *)v56 + 5);
    v98 = v87 & 0x7FFFFFFF;
    if ( v98 != v97 )
    {
      v99 = *((unsigned int *)v56 + 4);
      v55 = *((_QWORD *)v56 + 1);
      if ( *((_DWORD *)v56 + 4) )
      {
        v54 = 64LL;
        if ( (*(_DWORD *)(v18 + 2452) & 0x40) != 0 )
        {
          v100 = KeGetCurrentIrql();
          __writecr8(2uLL);
          i1 = v55 & 0xFFFFFFFFFFFFF000uLL;
          v101 = (v55 + v99 - 1) | 0xFFF;
          v102 = (v55 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v103 = v100;
            while ( 1 )
            {
              v104 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v18 + 1128))(i1, 0LL);
              if ( v104 != -1073741267 )
                break;
              if ( v100 > 1u )
                goto LABEL_239;
              v103 = v100;
              __writecr8(v100);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v104 < 0 )
            {
              __writecr8(v103);
              v56 = v1559;
              i7 = 0;
              v97 = *((_DWORD *)v1559 + 5);
              goto LABEL_243;
            }
LABEL_239:
            i1 += 4096LL;
            v102 += 4096LL;
            if ( v102 != v101 )
              continue;
            break;
          }
LABEL_240:
          __writecr8(v103);
LABEL_241:
          i7 = 0;
          goto LABEL_181;
        }
      }
LABEL_243:
      v105 = *(_DWORD *)(v18 + 2296);
      if ( !v105 )
      {
        v106 = v97 ^ (unsigned __int64)v98;
        goto LABEL_245;
      }
      goto LABEL_246;
    }
LABEL_181:
    v48 = -1;
    v77 = v1619 - 1;
    if ( !*(_DWORD *)(v18 + 2084) )
      v77 = v1619;
    v25 = 1LL;
    Next = v77 + 1;
    if ( *(_DWORD *)(v18 + 2296) || *(_DWORD *)(v18 + 2088) >= *(_DWORD *)(v18 + 2092) )
      goto LABEL_2491;
    v52 = v1584;
    v50 = v1588;
  }
  ++*(_DWORD *)(v18 + 2096);
  Next = 0;
  if ( *(_DWORD *)(v18 + 2392) != 11 || (v1515 = *(_DWORD *)(v18 + 2448), (v1515 & 1) != 0) )
  {
LABEL_2491:
    v13 = v1587;
    v2 = a2;
  }
  else
  {
    v2 = a2;
    v13 = v1587;
    if ( *(_DWORD *)(v18 + 2416) == -1 )
      *(_DWORD *)(v18 + 2416) = 0;
    else
      *(_DWORD *)(v18 + 2448) = v1515 | 1;
  }
  v14 = v1586;
LABEL_2493:
  *(_DWORD *)(v18 + 2080) = Next;
  if ( v1578 )
  {
    v1516 = *(_QWORD *)(*(_QWORD *)(v18 + 1704)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1608))
                      + *(_QWORD *)(v18 + 1672));
    (*(void (__fastcall **)(_BYTE *))(v18 + 408))(v1746);
    (*(void (__fastcall **)(_BYTE *))(v18 + 1088))(v1756);
    (*(void (__fastcall **)(__int64))(v18 + 936))(v1516);
    (*(void (__fastcall **)(__int64))(v18 + 952))(v1516);
  }
  if ( v1596 && ((*(_DWORD *)(v18 + 2448) & 0x8000) != 0 || !*(_DWORD *)(v18 + 2296)) )
  {
    v1517 = *(_QWORD *)(v18 + 2432);
    *(_QWORD *)(v18 + 2432) = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(v18 + 664))(v1517, v1756);
    v1518 = *(_DWORD *)(v18 + 2448);
    if ( (v1518 & 1) != 0 )
    {
      *(_DWORD *)(v18 + 2448) = v1518 & 0xFFFFFFFE;
      v1517 = (*(__int64 (__fastcall **)(__int64))(v18 + 640))(v1517);
      if ( v1517 )
        *(_DWORD *)(v18 + 2416) = (*(__int64 (__fastcall **)(__int64))(v18 + 672))(v1517);
      else
        *(_DWORD *)(v18 + 2416) = -1;
    }
    if ( v1517 )
      (*(void (__fastcall **)(__int64))(v18 + 648))(v1517);
  }
  if ( *((_DWORD *)&v14[143].Next + 2) )
  {
    v1519 = (__int64)v14[145].Next;
    v1520 = *((_QWORD *)&v14[145].Next + 1);
    v1521 = *((_QWORD *)&v14[144].Next + 1);
    v1522 = v14[144].Next;
    v1589 = v1520;
    v1561 = v1521;
    v1586 = v1522;
    v1582 = v14;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1523 = KeGetCurrentPrcb();
    v1524 = *(_QWORD *)((char *)&v1523->MxCsr + *((_QWORD *)&v1582[99].Next + 1));
    v1525 = *(_QWORD *)((char *)&v1523->MxCsr + *((_QWORD *)&v1582[100].Next + 1));
    v1526 = v1582[100].Next;
    v1574 = v1525;
    if ( !*((_BYTE *)&v1526->Next + (_QWORD)v1523)
      || (unsigned __int64)&v1582 > v1524
      || (unsigned __int64)&v1582 < v1524 - 24576 )
    {
      v1524 = *(_QWORD *)(v1525 + *((_QWORD *)&v1582[103].Next + 1));
    }
    v1527 = v1582;
    if ( ((__int64)v1582[153].Next & 0x8000000) == 0 )
    {
      v1528 = __readcr0();
      v1606 = v1528;
      __writecr0(v1528 & 0xFFFFFFFFFFFEFFFFuLL);
      v1529 = (unsigned __int64)(&v1582[170].Next + 1);
      v1530 = (unsigned __int64)(&v1582[LODWORD(v1582[170].Next) + 170].Next + 1);
      v1531 = 0;
      v1532 = (_QWORD *)v1530;
      if ( HIDWORD(v1582[170].Next) )
      {
        do
        {
          *(_QWORD *)*v1532 = v1532[1];
          v1533 = __readcr4();
          if ( (v1533 & 0x20080) != 0 )
          {
            __writecr4(v1533 ^ 0x80);
            __writecr4(v1533);
          }
          else
          {
            v1534 = __readcr3();
            __writecr3(v1534);
          }
          v1532 += 2;
          ++v1531;
        }
        while ( v1531 < HIDWORD(v1527[170].Next) );
        LODWORD(v1520) = v1589;
      }
      if ( v1529 < v1530 )
      {
        do
        {
          v1535 = *(unsigned int *)(v1529 + 8);
          v1536 = v1532;
          v1537 = *(char **)v1529;
          v1538 = v1535;
          if ( (unsigned int)v1535 >= 8 )
          {
            v1539 = (unsigned __int64)(unsigned int)v1535 >> 3;
            do
            {
              v1538 -= 8;
              *(_QWORD *)v1537 = *v1536++;
              v1537 += 8;
              --v1539;
            }
            while ( v1539 );
          }
          if ( v1538 )
          {
            v1540 = v1537 - (char *)v1536;
            do
            {
              *((_BYTE *)v1536 + v1540) = *(_BYTE *)v1536;
              v1536 = (_QWORD *)((char *)v1536 + 1);
              --v1538;
            }
            while ( v1538 );
          }
          v1532 = (_QWORD *)((char *)v1532 + v1535);
          v1529 += 16LL;
        }
        while ( v1529 < v1530 );
        v1525 = v1574;
        v1528 = v1606;
        LODWORD(v1520) = v1589;
        LODWORD(v1521) = v1561;
      }
      **((_BYTE **)&v1527[33].Next + 1) = -61;
      __writecr0(v1528);
      LODWORD(v1522) = (_DWORD)v1586;
    }
    v1548 = *((_DWORD *)&v1582[146].Next + 2);
    if ( v1548 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1548 = *((_DWORD *)&v1582[146].Next + 2);
      }
      if ( v1548 )
      {
        v1549 = v1548 - 1;
        if ( v1549 )
        {
          v1550 = v1549 - 1;
          if ( v1550 )
          {
            v1551 = v1550 - 1;
            if ( v1551 )
            {
              v1552 = v1551 - 1;
              if ( v1552 )
              {
                if ( v1552 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)&v1582[100].Next + 1)),
                    (LODWORD(v1582[153].Next) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)&v1582[91].Next + 1) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*((_QWORD *)&v1582[106].Next + 1)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                          + *((_QWORD *)&v1582[100].Next + 1))
                                              + *((_QWORD *)&v1582[104].Next + 1)),
                  (LODWORD(v1582[153].Next) >> 10) & 0x1F);
              }
              goto LABEL_2565;
            }
            v1553 = (volatile signed __int32 *)v1582[86].Next;
          }
          else
          {
            v1553 = (volatile signed __int32 *)*((_QWORD *)&v1582[85].Next + 1);
          }
        }
        else
        {
          v1553 = (volatile signed __int32 *)*((_QWORD *)&v1582[84].Next + 1);
        }
        _interlockedbittestandset64(v1553, 0LL);
      }
    }
LABEL_2565:
    *(_SLIST_ENTRY **)((char *)&v1582[105].Next->Next + v1525) = 0LL;
    *(_SLIST_ENTRY **)((char *)&v1582[106].Next->Next + v1525) = 0LL;
    SdbpCheckDll(265, (_DWORD)v1522, v1521, v1520, v1519, *((_QWORD *)&v1582[21].Next + 1), v1524);
    __debugbreak();
  }
  if ( HIDWORD(v14[130].Next) || LODWORD(v14[130].Next) )
  {
    v1541 = -1073741802;
    *(_DWORD *)v2 = v14[130].Next;
    *(_DWORD *)(v2 + 4) = HIDWORD(v14[130].Next);
  }
  else
  {
    v1541 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v1606 == 2800 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, v13);
  else
    ExFreePoolWithTag(v13, v25);
  return v1541;
}
