/*
 * XREFs of UserPowerInfoCallout @ 0x1C0062AE4
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023550 (W32CalloutDispatch.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0039778 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     QueuePowerRequest @ 0x1C00588A0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C005B9DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0061E10 (SqmPowerState.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0063240 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     EtwTraceDisplayReqChange @ 0x1C00632A4 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C00632CC (CitDisplayRequestChange.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     SetPendingInput @ 0x1C00BAC00 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C00C0473 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0104C1C (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C01070A4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0107280 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010758C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C01205F0 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C0178A38 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, int a5, unsigned int *a6)
{
  unsigned int v6; // esi
  unsigned int *v7; // rdi
  int v8; // r12d
  int v9; // r14d
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  __int64 v13; // rcx
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // edi
  int v25; // ebx
  bool v26; // zf
  bool v27; // sf
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rdi
  char v42; // r13
  char v43; // r12
  __int64 v44; // r15
  __int64 v45; // rcx
  LARGE_INTEGER *v46; // rbx
  struct tagTHREADINFO *v47; // rbx
  struct tagTHREADINFO **v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PVOID v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rbx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 *v68; // r14
  int v69; // r14d
  __int64 v70; // rcx
  char v71; // r15
  char v72; // r14
  __int64 v73; // rcx
  __int64 v74; // rcx
  LARGE_INTEGER *v75; // rbx
  struct tagTHREADINFO *v76; // rbx
  struct tagTHREADINFO **v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  PVOID v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v88; // rax
  struct tagTHREADINFO *v89; // rbx
  struct tagTHREADINFO **v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  PVOID CurrentProcess; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned int v96; // r9d
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rdx
  __int64 v101; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 *v110; // r15
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  PERESOURCE *v114; // rdi
  __int64 v115; // r8
  int v116; // r14d
  int v117; // r14d
  int v118; // r14d
  int v119; // r14d
  char v120; // dl
  __int64 v121; // rcx
  LARGE_INTEGER *v122; // rbx
  __int64 v123; // rax
  struct tagTHREADINFO *v124; // rbx
  struct tagTHREADINFO **v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  PVOID v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  unsigned int v131; // r9d
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // rcx
  PERESOURCE *v135; // rbx
  __int64 v136; // r8
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // rax
  __int64 *v144; // rdi
  __int64 v145; // rbx
  __int64 v146; // rcx
  LARGE_INTEGER *v147; // rbx
  __int64 v148; // rax
  struct tagTHREADINFO *v149; // rbx
  struct tagTHREADINFO **v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  PVOID v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  unsigned int v156; // r9d
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // rdx
  __int64 v160; // rcx
  PERESOURCE *v161; // rbx
  __int64 v162; // r8
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // rax
  __int64 *v170; // rdi
  __int64 v171; // rcx
  int v172; // eax
  __int64 v173; // rcx
  __int64 v174; // rax
  unsigned int v175; // r9d
  __int64 v176; // rdx
  __int64 v177; // rcx
  PERESOURCE *v178; // rbx
  __int64 v179; // r8
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // rax
  __int64 *v187; // rdi
  __int64 v188; // rax
  unsigned int v189; // r9d
  __int64 v190; // rax
  __int64 v191; // rax
  unsigned int v192; // r9d
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  PERESOURCE *v196; // rdi
  __int64 v197; // r8
  __int64 v198; // rcx
  __int64 v199; // rcx
  LARGE_INTEGER *v200; // rbx
  __int64 v201; // rax
  struct tagTHREADINFO *v202; // rbx
  struct tagTHREADINFO **v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  PVOID v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  unsigned int v209; // r9d
  __int64 v210; // r8
  __int64 v211; // rdx
  __int64 v212; // rcx
  PERESOURCE *v213; // rbx
  __int64 v214; // r8
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 *v221; // r14
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  PERESOURCE *v225; // rdi
  __int64 v226; // r8
  __int64 v227; // rcx
  __int64 v228; // rcx
  LARGE_INTEGER *v229; // rbx
  __int64 v230; // rax
  struct tagTHREADINFO *v231; // rbx
  struct tagTHREADINFO **v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  PVOID v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  unsigned int v238; // r9d
  __int64 v239; // r8
  __int64 v240; // rdx
  __int64 v241; // rcx
  PERESOURCE *v242; // rbx
  __int64 v243; // r8
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 *v250; // r14
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  PERESOURCE *v254; // rdi
  __int64 v255; // r8
  __int64 v256; // rcx
  __int64 v257; // rcx
  LARGE_INTEGER *v258; // rbx
  __int64 v259; // rax
  struct tagTHREADINFO *v260; // rbx
  struct tagTHREADINFO **v261; // rax
  __int64 v262; // rdx
  __int64 v263; // rcx
  PVOID v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rcx
  unsigned int v267; // r9d
  __int64 v268; // r8
  __int64 v269; // rdx
  __int64 v270; // rcx
  PERESOURCE *v271; // rbx
  __int64 v272; // r8
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 *v279; // r14
  __int64 v280; // rax
  __int64 v281; // rdx
  __int64 v282; // rcx
  PERESOURCE *v283; // rdi
  __int64 v284; // r8
  __int64 v285; // rcx
  __int64 v286; // rcx
  LARGE_INTEGER *v287; // rbx
  __int64 v288; // rax
  struct tagTHREADINFO *v289; // rbx
  struct tagTHREADINFO **v290; // rax
  __int64 v291; // rdx
  __int64 v292; // rcx
  PVOID v293; // rax
  __int64 v294; // rdx
  __int64 v295; // rcx
  unsigned int v296; // r9d
  __int64 v297; // rdx
  __int64 v298; // r8
  __int64 v299; // rdx
  __int64 v300; // rcx
  PERESOURCE *v301; // rbx
  __int64 v302; // r8
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 *v309; // r14
  __int64 v310; // rax
  __int64 v311; // rdx
  __int64 v312; // rcx
  PERESOURCE *v313; // rdi
  __int64 v314; // r8
  __int64 v315; // rcx
  __int64 v316; // rcx
  LARGE_INTEGER *v317; // rbx
  __int64 v318; // rax
  struct tagTHREADINFO *v319; // rbx
  struct tagTHREADINFO **v320; // rax
  __int64 v321; // rdx
  __int64 v322; // rcx
  PVOID v323; // rax
  __int64 v324; // rdx
  __int64 v325; // rcx
  unsigned int v326; // r9d
  __int64 v327; // r8
  __int64 v328; // rdx
  __int64 v329; // rcx
  PERESOURCE *v330; // rbx
  __int64 v331; // r8
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 *v338; // r14
  __int64 v339; // rax
  __int64 v340; // rdx
  __int64 v341; // rcx
  PERESOURCE *v342; // rdi
  __int64 v343; // r8
  __int64 v344; // rcx
  __int64 v345; // rcx
  LARGE_INTEGER *v346; // rbx
  __int64 v347; // rax
  struct tagTHREADINFO *v348; // rbx
  struct tagTHREADINFO **v349; // rax
  __int64 v350; // rdx
  __int64 v351; // rcx
  PVOID v352; // rax
  __int64 v353; // rdx
  __int64 v354; // rcx
  unsigned int v355; // r9d
  __int64 v356; // r8
  __int64 v357; // rdx
  __int64 v358; // rcx
  PERESOURCE *v359; // rbx
  __int64 v360; // r8
  __int64 v361; // rdx
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // r8
  __int64 *v367; // r14
  __int64 v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  PERESOURCE *v371; // rdi
  __int64 v372; // r8
  __int64 v373; // rcx
  __int64 v374; // rcx
  LARGE_INTEGER *v375; // rbx
  __int64 v376; // rax
  struct tagTHREADINFO *v377; // rbx
  struct tagTHREADINFO **v378; // rax
  __int64 v379; // rdx
  __int64 v380; // rcx
  PVOID v381; // rax
  __int64 v382; // rdx
  __int64 v383; // rcx
  unsigned int v384; // r9d
  __int64 v385; // rdx
  __int64 v386; // rcx
  __int64 v387; // r8
  __int64 v388; // rdx
  __int64 v389; // rcx
  PERESOURCE *v390; // rbx
  __int64 v391; // r8
  __int64 v392; // rdx
  __int64 v393; // rcx
  __int64 v394; // r8
  __int64 v395; // rdx
  __int64 v396; // rcx
  __int64 v397; // r8
  __int64 *v398; // r14
  __int64 v399; // rax
  __int64 v400; // rdx
  __int64 v401; // rcx
  PERESOURCE *v402; // rdi
  __int64 v403; // r8
  __int64 v404; // rcx
  __int64 v405; // rcx
  __int64 v406; // rcx
  LARGE_INTEGER *v407; // rbx
  __int64 v408; // rax
  struct tagTHREADINFO *v409; // rbx
  struct tagTHREADINFO **v410; // rax
  __int64 v411; // rdx
  __int64 v412; // rcx
  PVOID v413; // rax
  __int64 v414; // rdx
  __int64 v415; // rcx
  unsigned int v416; // r9d
  __int64 v417; // r8
  __int64 v418; // rdx
  __int64 v419; // rcx
  PERESOURCE *v420; // rbx
  __int64 v421; // r8
  __int64 v422; // rdx
  __int64 v423; // rcx
  __int64 v424; // r8
  __int64 v425; // rdx
  __int64 v426; // rcx
  __int64 v427; // r8
  __int64 v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rcx
  PERESOURCE *v431; // rdi
  __int64 v432; // r8
  __int64 *v433; // r14
  enum POWER_MONITOR_REQUEST_REASON v434; // ecx
  __int64 v435; // rcx
  __int64 v436; // rcx
  LARGE_INTEGER *v437; // rbx
  __int64 v438; // rax
  struct tagTHREADINFO *v439; // rbx
  struct tagTHREADINFO **v440; // rax
  __int64 v441; // rdx
  __int64 v442; // rcx
  PVOID v443; // rax
  __int64 v444; // rdx
  __int64 v445; // rcx
  unsigned int v446; // r9d
  __int64 v447; // r8
  __int64 v448; // rdx
  __int64 v449; // rcx
  PERESOURCE *v450; // rbx
  __int64 v451; // r8
  __int64 v452; // rdx
  __int64 v453; // rcx
  __int64 v454; // r8
  __int64 v455; // rdx
  __int64 v456; // rcx
  __int64 v457; // r8
  __int64 *v458; // r14
  __int64 v459; // rax
  __int64 v460; // rdx
  __int64 v461; // rcx
  PERESOURCE *v462; // rdi
  __int64 v463; // r8
  __int64 v464; // rcx
  __int64 v465; // rcx
  LARGE_INTEGER *v466; // rbx
  __int64 v467; // rax
  struct tagTHREADINFO *v468; // rbx
  struct tagTHREADINFO **v469; // rax
  __int64 v470; // rdx
  __int64 v471; // rcx
  PVOID v472; // rax
  __int64 v473; // rdx
  __int64 v474; // rcx
  unsigned int v475; // r9d
  __int64 v476; // r8
  __int64 v477; // rdx
  __int64 v478; // rcx
  PERESOURCE *v479; // rbx
  __int64 v480; // r8
  __int64 v481; // rdx
  __int64 v482; // rcx
  __int64 v483; // r8
  __int64 v484; // rdx
  __int64 v485; // rcx
  __int64 v486; // r8
  __int64 *v487; // r14
  __int64 v488; // rax
  __int64 v489; // rdx
  __int64 v490; // rcx
  PERESOURCE *v491; // rdi
  __int64 v492; // r8
  __int64 v493; // rcx
  __int64 v494; // rcx
  LARGE_INTEGER *v495; // rbx
  __int64 v496; // rax
  struct tagTHREADINFO *v497; // rbx
  struct tagTHREADINFO **v498; // rax
  __int64 v499; // rdx
  __int64 v500; // rcx
  PVOID v501; // rax
  __int64 v502; // rdx
  __int64 v503; // rcx
  unsigned int v504; // r9d
  __int64 v505; // r8
  __int64 v506; // rdx
  __int64 v507; // rcx
  PERESOURCE *v508; // rbx
  __int64 v509; // r8
  __int64 v510; // rdx
  __int64 v511; // rcx
  __int64 v512; // r8
  __int64 v513; // rdx
  __int64 v514; // rcx
  __int64 v515; // r8
  __int64 *v516; // r14
  __int64 v517; // rax
  __int64 v518; // rdx
  __int64 v519; // rcx
  PERESOURCE *v520; // rdi
  __int64 v521; // r8
  __int64 v522; // rcx
  __int64 v523; // rcx
  LARGE_INTEGER *v524; // rbx
  __int64 v525; // rax
  struct tagTHREADINFO *v526; // rbx
  struct tagTHREADINFO **v527; // rax
  __int64 v528; // rdx
  __int64 v529; // rcx
  PVOID v530; // rax
  __int64 v531; // rdx
  __int64 v532; // rcx
  unsigned int v533; // r9d
  __int64 v534; // r8
  __int64 v535; // rdx
  __int64 v536; // rcx
  PERESOURCE *v537; // rbx
  __int64 v538; // r8
  __int64 v539; // rdx
  __int64 v540; // rcx
  __int64 v541; // r8
  __int64 v542; // rdx
  __int64 v543; // rcx
  __int64 v544; // r8
  __int64 *v545; // r14
  __int64 v546; // rax
  __int64 v547; // rdx
  __int64 v548; // rcx
  PERESOURCE *v549; // rdi
  __int64 v550; // r8
  __int64 v551; // rcx
  __int64 v552; // rcx
  LARGE_INTEGER *v553; // rbx
  __int64 v554; // rax
  struct tagTHREADINFO *v555; // rbx
  struct tagTHREADINFO **v556; // rax
  __int64 v557; // rdx
  __int64 v558; // rcx
  PVOID v559; // rax
  __int64 v560; // rdx
  __int64 v561; // rcx
  unsigned int v562; // r9d
  __int64 v563; // r8
  __int64 v564; // rdx
  __int64 v565; // rcx
  PERESOURCE *v566; // rbx
  __int64 v567; // r8
  __int64 v568; // rdx
  __int64 v569; // rcx
  __int64 v570; // r8
  __int64 v571; // rdx
  __int64 v572; // rcx
  __int64 v573; // r8
  __int64 *v574; // r14
  __int64 v575; // rax
  __int64 v576; // rdx
  __int64 v577; // rcx
  PERESOURCE *v578; // rdi
  __int64 v579; // r8
  __int64 v580; // rcx
  __int64 v581; // rcx
  LARGE_INTEGER *v582; // rbx
  __int64 v583; // rax
  struct tagTHREADINFO *v584; // rbx
  struct tagTHREADINFO **v585; // rax
  __int64 v586; // rdx
  __int64 v587; // rcx
  PVOID v588; // rax
  __int64 v589; // rdx
  __int64 v590; // rcx
  unsigned int v591; // r9d
  __int64 v592; // r8
  __int64 v593; // rdx
  __int64 v594; // rcx
  PERESOURCE *v595; // rbx
  __int64 v596; // r8
  __int64 v597; // rdx
  __int64 v598; // rcx
  __int64 v599; // r8
  __int64 v600; // rdx
  __int64 v601; // rcx
  __int64 v602; // r8
  __int64 v603; // rax
  __int64 v604; // rdx
  __int64 v605; // rcx
  PERESOURCE *v606; // rdi
  __int64 v607; // r8
  __int64 *v608; // r14
  __int64 v609; // rcx
  __int64 v610; // rcx
  LARGE_INTEGER *v611; // rbx
  __int64 v612; // rax
  struct tagTHREADINFO *v613; // rbx
  struct tagTHREADINFO **v614; // rax
  __int64 v615; // rdx
  __int64 v616; // rcx
  PVOID v617; // rax
  __int64 v618; // rdx
  __int64 v619; // rcx
  unsigned int v620; // r9d
  __int64 v621; // rdx
  __int64 v622; // r8
  __int64 v623; // rdx
  __int64 v624; // rcx
  PERESOURCE *v625; // rbx
  __int64 v626; // r8
  __int64 v627; // rdx
  __int64 v628; // rcx
  __int64 v629; // r8
  __int64 v630; // rdx
  __int64 v631; // rcx
  __int64 v632; // r8
  __int64 *v633; // r14
  __int64 v634; // rax
  __int64 v635; // rdx
  __int64 v636; // rcx
  PERESOURCE *v637; // rdi
  __int64 v638; // r8
  __int64 v639; // rcx
  LARGE_INTEGER *v640; // rbx
  __int64 v641; // rax
  struct tagTHREADINFO *v642; // rbx
  struct tagTHREADINFO **v643; // rax
  __int64 v644; // rdx
  __int64 v645; // rcx
  PVOID v646; // rax
  __int64 v647; // rdx
  __int64 v648; // rcx
  unsigned int v649; // r9d
  __int64 v650; // r8
  __int64 v651; // rdx
  __int64 v652; // rcx
  PERESOURCE *v653; // rbx
  __int64 v654; // r8
  __int64 v655; // rdx
  __int64 v656; // rcx
  __int64 v657; // r8
  __int64 v658; // rdx
  __int64 v659; // rcx
  __int64 v660; // r8
  __int64 *v661; // r14
  __int64 v662; // rax
  __int64 v663; // rdx
  __int64 v664; // rcx
  PERESOURCE *v665; // rdi
  __int64 v666; // r8
  unsigned int v667; // [rsp+40h] [rbp-C0h]
  bool v669; // [rsp+50h] [rbp-B0h] BYREF
  char v670; // [rsp+51h] [rbp-AFh]
  __int128 v671; // [rsp+58h] [rbp-A8h] BYREF
  int v672; // [rsp+68h] [rbp-98h] BYREF
  int v673; // [rsp+6Ch] [rbp-94h]
  int v674; // [rsp+70h] [rbp-90h] BYREF
  int v675; // [rsp+74h] [rbp-8Ch] BYREF
  int v676; // [rsp+78h] [rbp-88h] BYREF
  int v677; // [rsp+7Ch] [rbp-84h] BYREF
  int v678; // [rsp+80h] [rbp-80h] BYREF
  int v679; // [rsp+84h] [rbp-7Ch] BYREF
  int v680; // [rsp+88h] [rbp-78h] BYREF
  int v681; // [rsp+8Ch] [rbp-74h] BYREF
  int v682; // [rsp+90h] [rbp-70h] BYREF
  int v683; // [rsp+94h] [rbp-6Ch] BYREF
  int v684; // [rsp+98h] [rbp-68h] BYREF
  int v685; // [rsp+9Ch] [rbp-64h] BYREF
  int v686; // [rsp+A0h] [rbp-60h] BYREF
  int v687; // [rsp+A4h] [rbp-5Ch] BYREF
  int v688; // [rsp+A8h] [rbp-58h] BYREF
  int v689; // [rsp+ACh] [rbp-54h] BYREF
  int v690; // [rsp+B0h] [rbp-50h] BYREF
  int v691; // [rsp+B4h] [rbp-4Ch] BYREF
  int v692; // [rsp+B8h] [rbp-48h] BYREF
  int v693; // [rsp+BCh] [rbp-44h] BYREF
  int v694; // [rsp+C0h] [rbp-40h] BYREF
  int v695; // [rsp+C4h] [rbp-3Ch] BYREF
  int v696; // [rsp+C8h] [rbp-38h] BYREF
  int v697; // [rsp+CCh] [rbp-34h] BYREF
  int v698; // [rsp+D0h] [rbp-30h] BYREF
  int v699; // [rsp+D4h] [rbp-2Ch] BYREF
  int v700; // [rsp+D8h] [rbp-28h] BYREF
  int v701; // [rsp+DCh] [rbp-24h] BYREF
  int v702; // [rsp+E0h] [rbp-20h] BYREF
  int v703; // [rsp+E4h] [rbp-1Ch] BYREF
  int v704; // [rsp+E8h] [rbp-18h] BYREF
  int v705; // [rsp+ECh] [rbp-14h] BYREF
  int v706; // [rsp+F0h] [rbp-10h] BYREF
  int v707; // [rsp+F4h] [rbp-Ch] BYREF
  int v708; // [rsp+F8h] [rbp-8h] BYREF
  int v709; // [rsp+FCh] [rbp-4h] BYREF
  int v710; // [rsp+100h] [rbp+0h] BYREF
  int v711; // [rsp+104h] [rbp+4h] BYREF
  int v712; // [rsp+108h] [rbp+8h] BYREF
  int v713; // [rsp+10Ch] [rbp+Ch] BYREF
  int v714; // [rsp+110h] [rbp+10h] BYREF
  int v715; // [rsp+114h] [rbp+14h] BYREF
  int v716; // [rsp+118h] [rbp+18h] BYREF
  int v717; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v718; // [rsp+120h] [rbp+20h] BYREF
  int v719; // [rsp+124h] [rbp+24h] BYREF
  int v720; // [rsp+128h] [rbp+28h] BYREF
  int v721; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v722; // [rsp+130h] [rbp+30h] BYREF
  int v723; // [rsp+134h] [rbp+34h] BYREF
  int v724; // [rsp+138h] [rbp+38h] BYREF
  int v725; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v726; // [rsp+140h] [rbp+40h] BYREF
  int v727; // [rsp+144h] [rbp+44h] BYREF
  int v728; // [rsp+148h] [rbp+48h] BYREF
  int v729; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v730; // [rsp+150h] [rbp+50h] BYREF
  int v731; // [rsp+154h] [rbp+54h] BYREF
  int v732; // [rsp+158h] [rbp+58h] BYREF
  int v733; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v734; // [rsp+160h] [rbp+60h] BYREF
  int v735; // [rsp+164h] [rbp+64h] BYREF
  int v736; // [rsp+168h] [rbp+68h] BYREF
  int v737; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v738; // [rsp+170h] [rbp+70h] BYREF
  tagDomLock *v739; // [rsp+178h] [rbp+78h] BYREF
  tagDomLock *v740; // [rsp+180h] [rbp+80h] BYREF
  tagDomLock *v741; // [rsp+188h] [rbp+88h] BYREF
  PERESOURCE *v742; // [rsp+190h] [rbp+90h] BYREF
  tagDomLock *v743; // [rsp+198h] [rbp+98h] BYREF
  __int64 v744; // [rsp+1A0h] [rbp+A0h]
  unsigned __int8 v745; // [rsp+1A8h] [rbp+A8h]
  GUID ActivityId; // [rsp+1ACh] [rbp+ACh] BYREF
  __int64 v747; // [rsp+1C0h] [rbp+C0h]
  unsigned __int8 v748; // [rsp+1C8h] [rbp+C8h]
  GUID pActivityId; // [rsp+1CCh] [rbp+CCh] BYREF
  __int64 v750; // [rsp+1E0h] [rbp+E0h]
  unsigned __int8 v751; // [rsp+1E8h] [rbp+E8h]
  GUID v752; // [rsp+1ECh] [rbp+ECh] BYREF
  __int64 v753; // [rsp+200h] [rbp+100h]
  unsigned __int8 v754; // [rsp+208h] [rbp+108h]
  GUID v755; // [rsp+20Ch] [rbp+10Ch] BYREF
  __int64 v756; // [rsp+220h] [rbp+120h]
  unsigned __int8 v757; // [rsp+228h] [rbp+128h]
  GUID v758; // [rsp+22Ch] [rbp+12Ch] BYREF
  __int64 v759; // [rsp+240h] [rbp+140h]
  unsigned __int8 v760; // [rsp+248h] [rbp+148h]
  GUID v761; // [rsp+24Ch] [rbp+14Ch] BYREF
  __int64 v762; // [rsp+260h] [rbp+160h]
  unsigned __int8 v763; // [rsp+268h] [rbp+168h]
  GUID v764; // [rsp+26Ch] [rbp+16Ch] BYREF
  __int64 v765; // [rsp+280h] [rbp+180h]
  unsigned __int8 v766; // [rsp+288h] [rbp+188h]
  GUID v767; // [rsp+28Ch] [rbp+18Ch] BYREF
  __int64 v768; // [rsp+2A0h] [rbp+1A0h]
  unsigned __int8 v769; // [rsp+2A8h] [rbp+1A8h]
  GUID v770; // [rsp+2ACh] [rbp+1ACh] BYREF
  __int64 v771; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int8 v772; // [rsp+2C8h] [rbp+1C8h]
  GUID v773; // [rsp+2CCh] [rbp+1CCh] BYREF
  __int64 v774; // [rsp+2E0h] [rbp+1E0h]
  unsigned __int8 v775; // [rsp+2E8h] [rbp+1E8h]
  GUID v776; // [rsp+2ECh] [rbp+1ECh] BYREF
  __int64 v777; // [rsp+300h] [rbp+200h]
  unsigned __int8 v778; // [rsp+308h] [rbp+208h]
  GUID v779; // [rsp+30Ch] [rbp+20Ch] BYREF
  __int64 v780; // [rsp+320h] [rbp+220h]
  unsigned __int8 v781; // [rsp+328h] [rbp+228h]
  GUID v782; // [rsp+32Ch] [rbp+22Ch] BYREF
  __int64 v783; // [rsp+340h] [rbp+240h]
  unsigned __int8 v784; // [rsp+348h] [rbp+248h]
  GUID v785; // [rsp+34Ch] [rbp+24Ch] BYREF
  __int64 v786; // [rsp+360h] [rbp+260h]
  unsigned __int8 v787; // [rsp+368h] [rbp+268h]
  GUID v788; // [rsp+36Ch] [rbp+26Ch] BYREF
  __int64 v789; // [rsp+380h] [rbp+280h]
  unsigned __int8 v790; // [rsp+388h] [rbp+288h]
  GUID v791; // [rsp+38Ch] [rbp+28Ch] BYREF
  __int64 v792; // [rsp+3A0h] [rbp+2A0h]
  unsigned __int8 v793; // [rsp+3A8h] [rbp+2A8h]
  GUID v794; // [rsp+3ACh] [rbp+2ACh] BYREF
  __int64 v795; // [rsp+3C0h] [rbp+2C0h]
  unsigned __int8 v796; // [rsp+3C8h] [rbp+2C8h]
  GUID v797; // [rsp+3CCh] [rbp+2CCh] BYREF
  __int64 v798; // [rsp+3E0h] [rbp+2E0h]
  unsigned __int8 v799; // [rsp+3E8h] [rbp+2E8h]
  GUID v800; // [rsp+3ECh] [rbp+2ECh] BYREF
  __int64 v801; // [rsp+400h] [rbp+300h]
  unsigned __int8 v802; // [rsp+408h] [rbp+308h]
  GUID v803; // [rsp+40Ch] [rbp+30Ch] BYREF
  __int64 v804; // [rsp+420h] [rbp+320h]
  unsigned __int8 v805; // [rsp+428h] [rbp+328h]
  GUID v806; // [rsp+42Ch] [rbp+32Ch] BYREF
  __int64 v807; // [rsp+440h] [rbp+340h]
  unsigned __int8 v808; // [rsp+448h] [rbp+348h]
  GUID v809; // [rsp+44Ch] [rbp+34Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+460h] [rbp+360h] BYREF
  int *v811; // [rsp+480h] [rbp+380h]
  __int64 v812; // [rsp+488h] [rbp+388h]
  EVENT_DATA_DESCRIPTOR v813; // [rsp+490h] [rbp+390h] BYREF
  int *v814; // [rsp+4B0h] [rbp+3B0h]
  __int64 v815; // [rsp+4B8h] [rbp+3B8h]
  EVENT_DATA_DESCRIPTOR v816; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v817; // [rsp+4E0h] [rbp+3E0h]
  __int64 v818; // [rsp+4E8h] [rbp+3E8h]
  EVENT_DATA_DESCRIPTOR v819; // [rsp+4F0h] [rbp+3F0h] BYREF
  int *v820; // [rsp+510h] [rbp+410h]
  __int64 v821; // [rsp+518h] [rbp+418h]
  EVENT_DATA_DESCRIPTOR v822; // [rsp+520h] [rbp+420h] BYREF
  int *v823; // [rsp+540h] [rbp+440h]
  __int64 v824; // [rsp+548h] [rbp+448h]
  EVENT_DATA_DESCRIPTOR v825; // [rsp+550h] [rbp+450h] BYREF
  int *v826; // [rsp+570h] [rbp+470h]
  __int64 v827; // [rsp+578h] [rbp+478h]
  EVENT_DATA_DESCRIPTOR v828; // [rsp+580h] [rbp+480h] BYREF
  int *v829; // [rsp+5A0h] [rbp+4A0h]
  __int64 v830; // [rsp+5A8h] [rbp+4A8h]
  EVENT_DATA_DESCRIPTOR v831; // [rsp+5B0h] [rbp+4B0h] BYREF
  int *v832; // [rsp+5D0h] [rbp+4D0h]
  __int64 v833; // [rsp+5D8h] [rbp+4D8h]
  EVENT_DATA_DESCRIPTOR v834; // [rsp+5E0h] [rbp+4E0h] BYREF
  int *v835; // [rsp+600h] [rbp+500h]
  __int64 v836; // [rsp+608h] [rbp+508h]
  EVENT_DATA_DESCRIPTOR v837; // [rsp+610h] [rbp+510h] BYREF
  int *v838; // [rsp+630h] [rbp+530h]
  __int64 v839; // [rsp+638h] [rbp+538h]
  EVENT_DATA_DESCRIPTOR v840; // [rsp+640h] [rbp+540h] BYREF
  int *v841; // [rsp+660h] [rbp+560h]
  __int64 v842; // [rsp+668h] [rbp+568h]
  EVENT_DATA_DESCRIPTOR v843; // [rsp+670h] [rbp+570h] BYREF
  int *v844; // [rsp+690h] [rbp+590h]
  __int64 v845; // [rsp+698h] [rbp+598h]
  EVENT_DATA_DESCRIPTOR v846; // [rsp+6A0h] [rbp+5A0h] BYREF
  int *v847; // [rsp+6C0h] [rbp+5C0h]
  __int64 v848; // [rsp+6C8h] [rbp+5C8h]
  EVENT_DATA_DESCRIPTOR v849; // [rsp+6D0h] [rbp+5D0h] BYREF
  int *v850; // [rsp+6F0h] [rbp+5F0h]
  __int64 v851; // [rsp+6F8h] [rbp+5F8h]
  EVENT_DATA_DESCRIPTOR v852; // [rsp+700h] [rbp+600h] BYREF
  int *v853; // [rsp+720h] [rbp+620h]
  __int64 v854; // [rsp+728h] [rbp+628h]
  EVENT_DATA_DESCRIPTOR v855; // [rsp+730h] [rbp+630h] BYREF
  int *v856; // [rsp+750h] [rbp+650h]
  __int64 v857; // [rsp+758h] [rbp+658h]
  EVENT_DATA_DESCRIPTOR v858; // [rsp+760h] [rbp+660h] BYREF
  int *v859; // [rsp+780h] [rbp+680h]
  __int64 v860; // [rsp+788h] [rbp+688h]
  EVENT_DATA_DESCRIPTOR v861; // [rsp+790h] [rbp+690h] BYREF
  int *v862; // [rsp+7B0h] [rbp+6B0h]
  __int64 v863; // [rsp+7B8h] [rbp+6B8h]
  EVENT_DATA_DESCRIPTOR v864; // [rsp+7C0h] [rbp+6C0h] BYREF
  int *v865; // [rsp+7E0h] [rbp+6E0h]
  __int64 v866; // [rsp+7E8h] [rbp+6E8h]
  EVENT_DATA_DESCRIPTOR v867; // [rsp+7F0h] [rbp+6F0h] BYREF
  int *v868; // [rsp+810h] [rbp+710h]
  __int64 v869; // [rsp+818h] [rbp+718h]
  EVENT_DATA_DESCRIPTOR v870; // [rsp+820h] [rbp+720h] BYREF
  int *v871; // [rsp+840h] [rbp+740h]
  __int64 v872; // [rsp+848h] [rbp+748h]
  EVENT_DATA_DESCRIPTOR v873; // [rsp+850h] [rbp+750h] BYREF
  int *v874; // [rsp+870h] [rbp+770h]
  __int64 v875; // [rsp+878h] [rbp+778h]
  EVENT_DATA_DESCRIPTOR v876; // [rsp+880h] [rbp+780h] BYREF
  int *v877; // [rsp+8A0h] [rbp+7A0h]
  __int64 v878; // [rsp+8A8h] [rbp+7A8h]
  EVENT_DATA_DESCRIPTOR v879; // [rsp+8B0h] [rbp+7B0h] BYREF
  int *v880; // [rsp+8D0h] [rbp+7D0h]
  __int64 v881; // [rsp+8D8h] [rbp+7D8h]
  EVENT_DATA_DESCRIPTOR v882; // [rsp+8E0h] [rbp+7E0h] BYREF
  int *v883; // [rsp+900h] [rbp+800h]
  __int64 v884; // [rsp+908h] [rbp+808h]
  EVENT_DATA_DESCRIPTOR v885; // [rsp+910h] [rbp+810h] BYREF
  int *v886; // [rsp+930h] [rbp+830h]
  __int64 v887; // [rsp+938h] [rbp+838h]
  EVENT_DATA_DESCRIPTOR v888; // [rsp+940h] [rbp+840h] BYREF
  int *v889; // [rsp+960h] [rbp+860h]
  __int64 v890; // [rsp+968h] [rbp+868h]
  EVENT_DATA_DESCRIPTOR v891; // [rsp+970h] [rbp+870h] BYREF
  int *v892; // [rsp+990h] [rbp+890h]
  __int64 v893; // [rsp+998h] [rbp+898h]
  EVENT_DATA_DESCRIPTOR v894; // [rsp+9A0h] [rbp+8A0h] BYREF
  int *v895; // [rsp+9C0h] [rbp+8C0h]
  __int64 v896; // [rsp+9C8h] [rbp+8C8h]
  EVENT_DATA_DESCRIPTOR v897; // [rsp+9D0h] [rbp+8D0h] BYREF
  int *v898; // [rsp+9F0h] [rbp+8F0h]
  __int64 v899; // [rsp+9F8h] [rbp+8F8h]
  EVENT_DATA_DESCRIPTOR v900; // [rsp+A00h] [rbp+900h] BYREF
  int *v901; // [rsp+A20h] [rbp+920h]
  __int64 v902; // [rsp+A28h] [rbp+928h]
  EVENT_DATA_DESCRIPTOR v903; // [rsp+A30h] [rbp+930h] BYREF
  int *v904; // [rsp+A50h] [rbp+950h]
  __int64 v905; // [rsp+A58h] [rbp+958h]
  EVENT_DATA_DESCRIPTOR v906; // [rsp+A60h] [rbp+960h] BYREF
  int *v907; // [rsp+A80h] [rbp+980h]
  __int64 v908; // [rsp+A88h] [rbp+988h]
  EVENT_DATA_DESCRIPTOR v909; // [rsp+A90h] [rbp+990h] BYREF
  int *v910; // [rsp+AB0h] [rbp+9B0h]
  __int64 v911; // [rsp+AB8h] [rbp+9B8h]
  EVENT_DATA_DESCRIPTOR v912; // [rsp+AC0h] [rbp+9C0h] BYREF
  int *v913; // [rsp+AE0h] [rbp+9E0h]
  __int64 v914; // [rsp+AE8h] [rbp+9E8h]
  EVENT_DATA_DESCRIPTOR v915; // [rsp+AF0h] [rbp+9F0h] BYREF
  int *v916; // [rsp+B10h] [rbp+A10h]
  __int64 v917; // [rsp+B18h] [rbp+A18h]
  EVENT_DATA_DESCRIPTOR v918; // [rsp+B20h] [rbp+A20h] BYREF
  int *v919; // [rsp+B40h] [rbp+A40h]
  __int64 v920; // [rsp+B48h] [rbp+A48h]
  EVENT_DATA_DESCRIPTOR v921; // [rsp+B50h] [rbp+A50h] BYREF
  int *v922; // [rsp+B70h] [rbp+A70h]
  __int64 v923; // [rsp+B78h] [rbp+A78h]
  EVENT_DATA_DESCRIPTOR v924; // [rsp+B80h] [rbp+A80h] BYREF
  int *v925; // [rsp+BA0h] [rbp+AA0h]
  __int64 v926; // [rsp+BA8h] [rbp+AA8h]
  EVENT_DATA_DESCRIPTOR v927; // [rsp+BB0h] [rbp+AB0h] BYREF
  int *v928; // [rsp+BD0h] [rbp+AD0h]
  __int64 v929; // [rsp+BD8h] [rbp+AD8h]
  EVENT_DATA_DESCRIPTOR v930; // [rsp+BE0h] [rbp+AE0h] BYREF
  int *v931; // [rsp+C00h] [rbp+B00h]
  __int64 v932; // [rsp+C08h] [rbp+B08h]
  EVENT_DATA_DESCRIPTOR v933; // [rsp+C10h] [rbp+B10h] BYREF
  int *v934; // [rsp+C30h] [rbp+B30h]
  __int64 v935; // [rsp+C38h] [rbp+B38h]
  EVENT_DATA_DESCRIPTOR v936; // [rsp+C40h] [rbp+B40h] BYREF
  int *v937; // [rsp+C60h] [rbp+B60h]
  __int64 v938; // [rsp+C68h] [rbp+B68h]
  EVENT_DATA_DESCRIPTOR v939; // [rsp+C70h] [rbp+B70h] BYREF
  int *v940; // [rsp+C90h] [rbp+B90h]
  __int64 v941; // [rsp+C98h] [rbp+B98h]
  EVENT_DATA_DESCRIPTOR v942; // [rsp+CA0h] [rbp+BA0h] BYREF
  int *v943; // [rsp+CC0h] [rbp+BC0h]
  __int64 v944; // [rsp+CC8h] [rbp+BC8h]
  EVENT_DATA_DESCRIPTOR v945; // [rsp+CD0h] [rbp+BD0h] BYREF
  int *v946; // [rsp+CF0h] [rbp+BF0h]
  __int64 v947; // [rsp+CF8h] [rbp+BF8h]
  EVENT_DATA_DESCRIPTOR v948; // [rsp+D00h] [rbp+C00h] BYREF
  int *v949; // [rsp+D20h] [rbp+C20h]
  __int64 v950; // [rsp+D28h] [rbp+C28h]
  EVENT_DATA_DESCRIPTOR v951; // [rsp+D30h] [rbp+C30h] BYREF
  int *v952; // [rsp+D50h] [rbp+C50h]
  __int64 v953; // [rsp+D58h] [rbp+C58h]
  EVENT_DATA_DESCRIPTOR v954; // [rsp+D60h] [rbp+C60h] BYREF
  int *v955; // [rsp+D80h] [rbp+C80h]
  __int64 v956; // [rsp+D88h] [rbp+C88h]
  EVENT_DATA_DESCRIPTOR v957; // [rsp+D90h] [rbp+C90h] BYREF
  int *v958; // [rsp+DB0h] [rbp+CB0h]
  __int64 v959; // [rsp+DB8h] [rbp+CB8h]
  EVENT_DATA_DESCRIPTOR v960; // [rsp+DC0h] [rbp+CC0h] BYREF
  int *v961; // [rsp+DE0h] [rbp+CE0h]
  __int64 v962; // [rsp+DE8h] [rbp+CE8h]
  EVENT_DATA_DESCRIPTOR v963; // [rsp+DF0h] [rbp+CF0h] BYREF
  int *v964; // [rsp+E10h] [rbp+D10h]
  __int64 v965; // [rsp+E18h] [rbp+D18h]
  EVENT_DATA_DESCRIPTOR v966; // [rsp+E20h] [rbp+D20h] BYREF
  int *v967; // [rsp+E40h] [rbp+D40h]
  __int64 v968; // [rsp+E48h] [rbp+D48h]
  EVENT_DATA_DESCRIPTOR v969; // [rsp+E50h] [rbp+D50h] BYREF
  int *v970; // [rsp+E70h] [rbp+D70h]
  __int64 v971; // [rsp+E78h] [rbp+D78h]
  EVENT_DATA_DESCRIPTOR v972; // [rsp+E80h] [rbp+D80h] BYREF
  int *v973; // [rsp+EA0h] [rbp+DA0h]
  __int64 v974; // [rsp+EA8h] [rbp+DA8h]
  EVENT_DATA_DESCRIPTOR v975; // [rsp+EB0h] [rbp+DB0h] BYREF
  int *v976; // [rsp+ED0h] [rbp+DD0h]
  __int64 v977; // [rsp+ED8h] [rbp+DD8h]
  EVENT_DATA_DESCRIPTOR v978; // [rsp+EE0h] [rbp+DE0h] BYREF
  int *v979; // [rsp+F00h] [rbp+E00h]
  __int64 v980; // [rsp+F08h] [rbp+E08h]
  EVENT_DATA_DESCRIPTOR v981; // [rsp+F10h] [rbp+E10h] BYREF
  int *v982; // [rsp+F30h] [rbp+E30h]
  __int64 v983; // [rsp+F38h] [rbp+E38h]
  EVENT_DATA_DESCRIPTOR v984; // [rsp+F40h] [rbp+E40h] BYREF
  int *v985; // [rsp+F60h] [rbp+E60h]
  __int64 v986; // [rsp+F68h] [rbp+E68h]
  EVENT_DATA_DESCRIPTOR v987; // [rsp+F70h] [rbp+E70h] BYREF
  int *v988; // [rsp+F90h] [rbp+E90h]
  __int64 v989; // [rsp+F98h] [rbp+E98h]
  EVENT_DATA_DESCRIPTOR v990; // [rsp+FA0h] [rbp+EA0h] BYREF
  int *v991; // [rsp+FC0h] [rbp+EC0h]
  __int64 v992; // [rsp+FC8h] [rbp+EC8h]
  EVENT_DATA_DESCRIPTOR v993; // [rsp+FD0h] [rbp+ED0h] BYREF
  int *v994; // [rsp+FF0h] [rbp+EF0h]
  __int64 v995; // [rsp+FF8h] [rbp+EF8h]
  EVENT_DATA_DESCRIPTOR v996; // [rsp+1000h] [rbp+F00h] BYREF
  int *v997; // [rsp+1020h] [rbp+F20h]
  __int64 v998; // [rsp+1028h] [rbp+F28h]
  EVENT_DATA_DESCRIPTOR v999; // [rsp+1030h] [rbp+F30h] BYREF
  int *v1000; // [rsp+1050h] [rbp+F50h]
  __int64 v1001; // [rsp+1058h] [rbp+F58h]
  EVENT_DATA_DESCRIPTOR v1002; // [rsp+1060h] [rbp+F60h] BYREF
  int *v1003; // [rsp+1080h] [rbp+F80h]
  __int64 v1004; // [rsp+1088h] [rbp+F88h]
  EVENT_DATA_DESCRIPTOR v1005; // [rsp+1090h] [rbp+F90h] BYREF
  int *v1006; // [rsp+10B0h] [rbp+FB0h]
  __int64 v1007; // [rsp+10B8h] [rbp+FB8h]

  v6 = 0;
  v7 = a4;
  v8 = a3;
  v673 = a3;
  v9 = a1;
  v667 = 0;
  v671 = 0uLL;
  if ( !gbPowerCalloutsReady )
    return 3221225473LL;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v745 = 1;
      v88 = PsGetCurrentThreadWin32Thread(v86);
      v744 = v88;
      if ( v88 && (*(int *)(v88 + 24) > 0 || *(_DWORD *)(v744 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v725 = v745;
            v811 = &v725;
            v812 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v744 = 0LL;
    }
    v89 = 0LL;
    while ( 1 )
    {
      v90 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v90 )
        v89 = *v90;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v92, v91);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v95, v94) == gpepCSRSS && v89 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v89 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v744
      && (*(_DWORD *)(v744 + 48) || *(int *)(v744 + 24) > 0) )
    {
      *(_DWORD *)(v744 + 44) = 1;
      *(GUID *)(v744 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v737 = v745;
          v814 = &v737;
          v815 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v813);
          v96 = dword_1C020FB50;
        }
        if ( v96 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v672 = v745;
          v817 = &v672;
          v818 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v816);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v89;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v97, v99);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v101, v100, v103);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v105, v104, v106);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v110 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v110[2];
          v111 = *v110;
          v110[2] = 0LL;
          if ( !*(_DWORD *)(v111 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v108, v107, v109);
          v114 = (PERESOURCE *)GetDomainLockRef(12LL, v107, v109);
          if ( v114 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v113, v112, v115);
          ExReleaseResourceAndLeaveCriticalRegion(*v114);
          HMUnlockObject(*v110);
          tagDomLock::LockExclusive(v114);
          v110 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v8 = v673;
        v7 = a4;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    UserSessionSwitchLeaveCrit(v98, v97);
  }
  if ( !gbVideoInitialized )
    return 3221225473LL;
LABEL_4:
  if ( !v9 )
  {
    if ( v8 != 20 || !v7 )
      return 3221225473LL;
    v198 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)v7;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)v7 )
      v198 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
    if ( v198 )
    {
      v227 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)v7 )
        v227 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
      if ( v227 )
      {
        v256 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)v7;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)v7 )
          v256 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
        if ( v256 )
        {
          v285 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)v7;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)v7 )
            v285 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
          if ( v285 )
          {
            v315 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
              v315 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
            if ( !v315 )
            {
              v317 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v317 )
                v317[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v776.Data1 = 0LL;
              *(_QWORD *)v776.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v775 = 1;
                v318 = PsGetCurrentThreadWin32Thread(v316);
                v774 = v318;
                if ( v318 && (*(int *)(v318 + 24) > 0 || *(_DWORD *)(v774 + 48)) )
                {
                  EtwActivityIdControl(3u, &v776);
                  if ( dword_1C020FB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                    {
                      v701 = v775;
                      v901 = &v701;
                      v902 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v776, 0LL, 3u, &v900);
                    }
                  }
                }
              }
              else
              {
                v774 = 0LL;
              }
              v319 = 0LL;
              while ( 1 )
              {
                v320 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v320 )
                  v319 = *v320;
                v323 = (PVOID)PsGetCurrentProcess(v322, v321);
                if ( v323 )
                {
                  if ( v323 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v325, v324) == gpepCSRSS
                  && v319 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v319 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v774
                && (*(_DWORD *)(v774 + 48) || *(int *)(v774 + 24) > 0) )
              {
                *(_DWORD *)(v774 + 44) = 1;
                *(GUID *)(v774 + 28) = v776;
                if ( dword_1C020FB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v702 = v775;
                    v904 = &v702;
                    v905 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v776, 0LL, 3u, &v903);
                    v326 = dword_1C020FB50;
                  }
                  if ( v326 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v703 = v775;
                    v907 = &v703;
                    v908 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v776, 0LL, 3u, &v906);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v319;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v330 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v327);
                if ( v330 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v329, v328, v331);
                if ( ExIsResourceAcquiredExclusiveLite(*v330) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v333, v332, v334);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v330);
                v338 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v338[2];
                    v339 = *v338;
                    v338[2] = 0LL;
                    if ( !*(_DWORD *)(v339 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v336, v335, v337);
                    v342 = (PERESOURCE *)GetDomainLockRef(12LL, v335, v337);
                    if ( v342 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v341, v340, v343);
                    ExReleaseResourceAndLeaveCriticalRegion(*v342);
                    HMUnlockObject(*v338);
                    tagDomLock::LockExclusive(v342);
                    v338 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v330);
              }
              dword_1C0215790 = v7[4];
              goto LABEL_71;
            }
            v344 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
              v344 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
            if ( !v344 )
            {
              v346 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v346 )
                v346[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v779.Data1 = 0LL;
              *(_QWORD *)v779.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v778 = 1;
                v347 = PsGetCurrentThreadWin32Thread(v345);
                v777 = v347;
                if ( v347 && (*(int *)(v347 + 24) > 0 || *(_DWORD *)(v777 + 48)) )
                {
                  EtwActivityIdControl(3u, &v779);
                  if ( dword_1C020FB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                    {
                      v704 = v778;
                      v910 = &v704;
                      v911 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v779, 0LL, 3u, &v909);
                    }
                  }
                }
              }
              else
              {
                v777 = 0LL;
              }
              v348 = 0LL;
              while ( 1 )
              {
                v349 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v349 )
                  v348 = *v349;
                v352 = (PVOID)PsGetCurrentProcess(v351, v350);
                if ( v352 )
                {
                  if ( v352 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v354, v353) == gpepCSRSS
                  && v348 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v348 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v777
                && (*(_DWORD *)(v777 + 48) || *(int *)(v777 + 24) > 0) )
              {
                *(_DWORD *)(v777 + 44) = 1;
                *(GUID *)(v777 + 28) = v779;
                if ( dword_1C020FB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v705 = v778;
                    v913 = &v705;
                    v914 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v779, 0LL, 3u, &v912);
                    v355 = dword_1C020FB50;
                  }
                  if ( v355 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v706 = v778;
                    v916 = &v706;
                    v917 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v779, 0LL, 3u, &v915);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v348;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v359 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v356);
                if ( v359 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v358, v357, v360);
                if ( ExIsResourceAcquiredExclusiveLite(*v359) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v362, v361, v363);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v359);
                v367 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v367[2];
                    v368 = *v367;
                    v367[2] = 0LL;
                    if ( !*(_DWORD *)(v368 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v365, v364, v366);
                    v371 = (PERESOURCE *)GetDomainLockRef(12LL, v364, v366);
                    if ( v371 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v370, v369, v372);
                    ExReleaseResourceAndLeaveCriticalRegion(*v371);
                    HMUnlockObject(*v367);
                    tagDomLock::LockExclusive(v371);
                    v367 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v359);
              }
              dword_1C0215788 = v7[4];
              goto LABEL_71;
            }
            v373 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)v7 )
              v373 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)v7 + 1);
            if ( !v373 )
            {
              v375 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v375 )
                v375[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v782.Data1 = 0LL;
              *(_QWORD *)v782.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v781 = 1;
                v376 = PsGetCurrentThreadWin32Thread(v374);
                v780 = v376;
                if ( v376 && (*(int *)(v376 + 24) > 0 || *(_DWORD *)(v780 + 48)) )
                {
                  EtwActivityIdControl(3u, &v782);
                  if ( dword_1C020FB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                    {
                      v707 = v781;
                      v919 = &v707;
                      v920 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v782, 0LL, 3u, &v918);
                    }
                  }
                }
              }
              else
              {
                v780 = 0LL;
              }
              v377 = 0LL;
              while ( 1 )
              {
                v378 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v378 )
                  v377 = *v378;
                v381 = (PVOID)PsGetCurrentProcess(v380, v379);
                if ( v381 )
                {
                  if ( v381 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v383, v382) == gpepCSRSS
                  && v377 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v377 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v780
                && (*(_DWORD *)(v780 + 48) || *(int *)(v780 + 24) > 0) )
              {
                *(_DWORD *)(v780 + 44) = 1;
                *(GUID *)(v780 + 28) = v782;
                if ( dword_1C020FB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v708 = v781;
                    v922 = &v708;
                    v923 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v782, 0LL, 3u, &v921);
                    v384 = dword_1C020FB50;
                  }
                  if ( v384 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v709 = v781;
                    v925 = &v709;
                    v926 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v782, 0LL, 3u, &v924);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v377;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v390 = (PERESOURCE *)GetDomainLockRef(12LL, v385, v387);
                if ( v390 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v389, v388, v391);
                if ( ExIsResourceAcquiredExclusiveLite(*v390) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v393, v392, v394);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v390);
                v398 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v398[2];
                    v399 = *v398;
                    v398[2] = 0LL;
                    if ( !*(_DWORD *)(v399 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v396, v395, v397);
                    v402 = (PERESOURCE *)GetDomainLockRef(12LL, v395, v397);
                    if ( v402 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v401, v400, v403);
                    ExReleaseResourceAndLeaveCriticalRegion(*v402);
                    HMUnlockObject(*v398);
                    tagDomLock::LockExclusive(v402);
                    v398 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v390);
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v386, v385, v387);
              dword_1C0215798 = v7[4];
              goto LABEL_71;
            }
            v404 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)v7 )
              v404 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)v7 + 1);
            if ( !v404 )
              goto LABEL_1102;
            v404 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)v7 )
              v404 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)v7 + 1);
            if ( v404 )
            {
              v405 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)v7;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)v7 )
                v405 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)v7 + 1);
              if ( v405 )
              {
                v435 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)v7 )
                  v435 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)v7 + 1);
                if ( !v435 )
                {
                  v437 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v437 )
                    v437[1] = KeQueryPerformanceCounter(0LL);
                  *(_QWORD *)&v788.Data1 = 0LL;
                  *(_QWORD *)v788.Data4 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v787 = 1;
                    v438 = PsGetCurrentThreadWin32Thread(v436);
                    v786 = v438;
                    if ( v438 && (*(int *)(v438 + 24) > 0 || *(_DWORD *)(v786 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v788);
                      if ( dword_1C020FB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                        {
                          v713 = v787;
                          v937 = &v713;
                          v938 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v788, 0LL, 3u, &v936);
                        }
                      }
                    }
                  }
                  else
                  {
                    v786 = 0LL;
                  }
                  v439 = 0LL;
                  while ( 1 )
                  {
                    v440 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v440 )
                      v439 = *v440;
                    v443 = (PVOID)PsGetCurrentProcess(v442, v441);
                    if ( v443 )
                    {
                      if ( v443 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v445, v444) == gpepCSRSS
                      && v439 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v439 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                    && v786
                    && (*(_DWORD *)(v786 + 48) || *(int *)(v786 + 24) > 0) )
                  {
                    *(_DWORD *)(v786 + 44) = 1;
                    *(GUID *)(v786 + 28) = v788;
                    if ( dword_1C020FB50 > 6u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                      {
                        v714 = v787;
                        v940 = &v714;
                        v941 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v788, 0LL, 3u, &v939);
                        v446 = dword_1C020FB50;
                      }
                      if ( v446 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                      {
                        v715 = v787;
                        v943 = &v715;
                        v944 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v788, 0LL, 3u, &v942);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v439;
                  gbValidateHandleForIL = 1;
                  if ( IsValidGuiThreadContext() )
                  {
                    v450 = (PERESOURCE *)GetDomainLockRef(12LL, v157, v447);
                    if ( v450 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v449, v448, v451);
                    if ( ExIsResourceAcquiredExclusiveLite(*v450) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v453, v452, v454);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v450);
                    v458 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v458[2];
                        v459 = *v458;
                        v458[2] = 0LL;
                        if ( !*(_DWORD *)(v459 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v456, v455, v457);
                        v462 = (PERESOURCE *)GetDomainLockRef(12LL, v455, v457);
                        if ( v462 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v461, v460, v463);
                        ExReleaseResourceAndLeaveCriticalRegion(*v462);
                        HMUnlockObject(*v458);
                        tagDomLock::LockExclusive(v462);
                        v458 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v7 = a4;
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v450);
                  }
                  LOBYTE(v6) = v7[4] != 0;
                  dword_1C02157FC = v6;
                  goto LABEL_296;
                }
                v464 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)v7 )
                  v464 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)v7 + 1);
                if ( !v464 )
                {
                  v466 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v466 )
                    v466[1] = KeQueryPerformanceCounter(0LL);
                  *(_QWORD *)&v791.Data1 = 0LL;
                  *(_QWORD *)v791.Data4 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v790 = 1;
                    v467 = PsGetCurrentThreadWin32Thread(v465);
                    v789 = v467;
                    if ( v467 && (*(int *)(v467 + 24) > 0 || *(_DWORD *)(v789 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v791);
                      if ( dword_1C020FB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                        {
                          v716 = v790;
                          v946 = &v716;
                          v947 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v791, 0LL, 3u, &v945);
                        }
                      }
                    }
                  }
                  else
                  {
                    v789 = 0LL;
                  }
                  v468 = 0LL;
                  while ( 1 )
                  {
                    v469 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v469 )
                      v468 = *v469;
                    v472 = (PVOID)PsGetCurrentProcess(v471, v470);
                    if ( v472 )
                    {
                      if ( v472 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v474, v473) == gpepCSRSS
                      && v468 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v468 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                    && v789
                    && (*(_DWORD *)(v789 + 48) || *(int *)(v789 + 24) > 0) )
                  {
                    *(_DWORD *)(v789 + 44) = 1;
                    *(GUID *)(v789 + 28) = v791;
                    if ( dword_1C020FB50 > 6u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                      {
                        v717 = v790;
                        v949 = &v717;
                        v950 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v791, 0LL, 3u, &v948);
                        v475 = dword_1C020FB50;
                      }
                      if ( v475 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                      {
                        v718 = v790;
                        v952 = &v718;
                        v953 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v791, 0LL, 3u, &v951);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v468;
                  gbValidateHandleForIL = 1;
                  if ( IsValidGuiThreadContext() )
                  {
                    v479 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v476);
                    if ( v479 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v478, v477, v480);
                    if ( ExIsResourceAcquiredExclusiveLite(*v479) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v482, v481, v483);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v479);
                    v487 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v487[2];
                        v488 = *v487;
                        v487[2] = 0LL;
                        if ( !*(_DWORD *)(v488 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v485, v484, v486);
                        v491 = (PERESOURCE *)GetDomainLockRef(12LL, v484, v486);
                        if ( v491 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v490, v489, v492);
                        ExReleaseResourceAndLeaveCriticalRegion(*v491);
                        HMUnlockObject(*v487);
                        tagDomLock::LockExclusive(v491);
                        v487 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v7 = a4;
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v479);
                  }
                  if ( !v7[4] )
                  {
                    dword_1C02157CC = 0;
                    goto LABEL_71;
                  }
                  if ( gbTtmEnabled )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v476);
                  dword_1C02157CC = 1;
                  LODWORD(v671) = 5;
                  *((_QWORD *)&v671 + 1) = 13LL;
                  goto LABEL_70;
                }
                v493 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)v7 )
                  v493 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)v7 + 1);
                if ( v493 )
                {
                  v522 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)v7;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
                    v522 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
                  if ( v522 )
                  {
                    v551 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)v7;
                    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
                      v551 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
                    if ( v551 )
                    {
                      v580 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)v7;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)v7 )
                        v580 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)v7 + 1);
                      if ( v580 )
                      {
                        v609 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)v7;
                        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)v7 )
                          v609 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)v7 + 1);
                        if ( v609 )
                          return 3221225473LL;
                        v611 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                        if ( v611 )
                          v611[1] = KeQueryPerformanceCounter(0LL);
                        *(_QWORD *)&v806.Data1 = 0LL;
                        *(_QWORD *)v806.Data4 = 0LL;
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                        {
                          v805 = 1;
                          v612 = PsGetCurrentThreadWin32Thread(v610);
                          v804 = v612;
                          if ( v612 && (*(int *)(v612 + 24) > 0 || *(_DWORD *)(v804 + 48)) )
                          {
                            EtwActivityIdControl(3u, &v806);
                            if ( dword_1C020FB50 > 6u )
                            {
                              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                              {
                                v731 = v805;
                                v991 = &v731;
                                v992 = 4LL;
                                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v806, 0LL, 3u, &v990);
                              }
                            }
                          }
                        }
                        else
                        {
                          v804 = 0LL;
                        }
                        v613 = 0LL;
                        while ( 1 )
                        {
                          v614 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v614 )
                            v613 = *v614;
                          v617 = (PVOID)PsGetCurrentProcess(v616, v615);
                          if ( v617 )
                          {
                            if ( v617 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess(v619, v618) == gpepCSRSS
                            && v613 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v613 == gptiRit )
                          {
                            break;
                          }
                          ++gcDITHitTestWaiters;
                          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                        }
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                          && v804
                          && (*(_DWORD *)(v804 + 48) || *(int *)(v804 + 24) > 0) )
                        {
                          *(_DWORD *)(v804 + 44) = 1;
                          *(GUID *)(v804 + 28) = v806;
                          if ( dword_1C020FB50 > 6u )
                          {
                            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                            {
                              v732 = v805;
                              v994 = &v732;
                              v995 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v806, 0LL, 3u, &v993);
                              v620 = dword_1C020FB50;
                            }
                            if ( v620 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                            {
                              v733 = v805;
                              v997 = &v733;
                              v998 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v806, 0LL, 3u, &v996);
                            }
                          }
                        }
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v613;
                        gbValidateHandleForIL = 1;
                        if ( IsValidGuiThreadContext() )
                        {
                          v625 = (PERESOURCE *)GetDomainLockRef(12LL, v621, v622);
                          if ( v625 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v624, v623, v626);
                          if ( ExIsResourceAcquiredExclusiveLite(*v625) == 1 )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v628, v627, v629);
                          ExEnterCriticalRegionAndAcquireResourceExclusive(*v625);
                          v633 = (__int64 *)gpducstulHead;
                          if ( gpducstulHead )
                          {
                            do
                            {
                              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v633[2];
                              v634 = *v633;
                              v633[2] = 0LL;
                              if ( !*(_DWORD *)(v634 + 8) )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v631, v630, v632);
                              v637 = (PERESOURCE *)GetDomainLockRef(12LL, v630, v632);
                              if ( v637 == (PERESOURCE *)&gDomainDummyLock )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v636, v635, v638);
                              ExReleaseResourceAndLeaveCriticalRegion(*v637);
                              HMUnlockObject(*v633);
                              tagDomLock::LockExclusive(v637);
                              v633 = (__int64 *)gpducstulHead;
                            }
                            while ( gpducstulHead );
                            v7 = a4;
                          }
                          ExReleaseResourceAndLeaveCriticalRegion(*v625);
                        }
                        CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(&v742);
                        dword_1C0215800 = v7[4] != 0;
                        UserLogError((unsigned int)(-(unsigned __int8)dword_1C0215800 - 2147482947));
                        CBaseInput::OnInputSuppressedValueChanged(v7[4] != 0);
                        ExReleaseResourceAndLeaveCriticalRegion(*v742);
                      }
                      else
                      {
                        if ( !v7[4] )
                          return 0LL;
                        v582 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                        if ( v582 )
                          v582[1] = KeQueryPerformanceCounter(0LL);
                        *(_QWORD *)&v803.Data1 = 0LL;
                        *(_QWORD *)v803.Data4 = 0LL;
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                        {
                          v802 = 1;
                          v583 = PsGetCurrentThreadWin32Thread(v581);
                          v801 = v583;
                          if ( v583 && (*(int *)(v583 + 24) > 0 || *(_DWORD *)(v801 + 48)) )
                          {
                            EtwActivityIdControl(3u, &v803);
                            if ( dword_1C020FB50 > 6u )
                            {
                              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                              {
                                v728 = v802;
                                v982 = &v728;
                                v983 = 4LL;
                                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v803, 0LL, 3u, &v981);
                              }
                            }
                          }
                        }
                        else
                        {
                          v801 = 0LL;
                        }
                        v584 = 0LL;
                        while ( 1 )
                        {
                          v585 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v585 )
                            v584 = *v585;
                          v588 = (PVOID)PsGetCurrentProcess(v587, v586);
                          if ( v588 )
                          {
                            if ( v588 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess(v590, v589) == gpepCSRSS
                            && v584 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v584 == gptiRit )
                          {
                            break;
                          }
                          ++gcDITHitTestWaiters;
                          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                        }
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                          && v801
                          && (*(_DWORD *)(v801 + 48) || *(int *)(v801 + 24) > 0) )
                        {
                          *(_DWORD *)(v801 + 44) = 1;
                          *(GUID *)(v801 + 28) = v803;
                          if ( dword_1C020FB50 > 6u )
                          {
                            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                            {
                              v729 = v802;
                              v985 = &v729;
                              v986 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v803, 0LL, 3u, &v984);
                              v591 = dword_1C020FB50;
                            }
                            if ( v591 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                            {
                              v730 = v802;
                              v988 = &v730;
                              v989 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v803, 0LL, 3u, &v987);
                            }
                          }
                        }
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v584;
                        gbValidateHandleForIL = 1;
                        if ( IsValidGuiThreadContext() )
                        {
                          v595 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v592);
                          if ( v595 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v594, v593, v596);
                          if ( ExIsResourceAcquiredExclusiveLite(*v595) == 1 )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v598, v597, v599);
                          ExEnterCriticalRegionAndAcquireResourceExclusive(*v595);
                          while ( 1 )
                          {
                            v608 = (__int64 *)gpducstulHead;
                            if ( !gpducstulHead )
                              break;
                            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                            v603 = *v608;
                            v608[2] = 0LL;
                            if ( !*(_DWORD *)(v603 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v601, v600, v602);
                            v606 = (PERESOURCE *)GetDomainLockRef(12LL, v600, v602);
                            if ( v606 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v605, v604, v607);
                            ExReleaseResourceAndLeaveCriticalRegion(*v606);
                            HMUnlockObject(*v608);
                            tagDomLock::LockExclusive(v606);
                          }
                          ExReleaseResourceAndLeaveCriticalRegion(*v595);
                        }
                        gdwUpdateKeyboard |= 2u;
                      }
                    }
                    else
                    {
                      v553 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                      if ( v553 )
                        v553[1] = KeQueryPerformanceCounter(0LL);
                      *(_QWORD *)&v800.Data1 = 0LL;
                      *(_QWORD *)v800.Data4 = 0LL;
                      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                      {
                        v799 = 1;
                        v554 = PsGetCurrentThreadWin32Thread(v552);
                        v798 = v554;
                        if ( v554 && (*(int *)(v554 + 24) > 0 || *(_DWORD *)(v798 + 48)) )
                        {
                          EtwActivityIdControl(3u, &v800);
                          if ( dword_1C020FB50 > 6u )
                          {
                            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                            {
                              v734 = v799;
                              v973 = &v734;
                              v974 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v800, 0LL, 3u, &v972);
                            }
                          }
                        }
                      }
                      else
                      {
                        v798 = 0LL;
                      }
                      v555 = 0LL;
                      while ( 1 )
                      {
                        v556 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                        if ( v556 )
                          v555 = *v556;
                        v559 = (PVOID)PsGetCurrentProcess(v558, v557);
                        if ( v559 )
                        {
                          if ( v559 == g_pepDwm )
                            break;
                        }
                        if ( (PVOID)PsGetCurrentProcess(v561, v560) == gpepCSRSS
                          && v555 != (struct tagTHREADINFO *)gptiTSRequest
                          || gbDITInHitTest != 1
                          || v555 == gptiRit )
                        {
                          break;
                        }
                        ++gcDITHitTestWaiters;
                        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                      }
                      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                        && v798
                        && (*(_DWORD *)(v798 + 48) || *(int *)(v798 + 24) > 0) )
                      {
                        *(_DWORD *)(v798 + 44) = 1;
                        *(GUID *)(v798 + 28) = v800;
                        if ( dword_1C020FB50 > 6u )
                        {
                          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                          {
                            v726 = v799;
                            v976 = &v726;
                            v977 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v800, 0LL, 3u, &v975);
                            v562 = dword_1C020FB50;
                          }
                          if ( v562 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                          {
                            v727 = v799;
                            v979 = &v727;
                            v980 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v800, 0LL, 3u, &v978);
                          }
                        }
                      }
                      EtwTraceAcquiredExclusiveUserCrit();
                      gptiCurrent = v555;
                      gbValidateHandleForIL = 1;
                      if ( IsValidGuiThreadContext() )
                      {
                        v566 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v563);
                        if ( v566 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v565, v564, v567);
                        if ( ExIsResourceAcquiredExclusiveLite(*v566) == 1 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v569, v568, v570);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(*v566);
                        v574 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          do
                          {
                            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v574[2];
                            v575 = *v574;
                            v574[2] = 0LL;
                            if ( !*(_DWORD *)(v575 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v572, v571, v573);
                            v578 = (PERESOURCE *)GetDomainLockRef(12LL, v571, v573);
                            if ( v578 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v577, v576, v579);
                            ExReleaseResourceAndLeaveCriticalRegion(*v578);
                            HMUnlockObject(*v574);
                            tagDomLock::LockExclusive(v578);
                            v574 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                          v7 = a4;
                        }
                        ExReleaseResourceAndLeaveCriticalRegion(*v566);
                      }
                      dword_1C02157F8 = v7[4];
                    }
                  }
                  else
                  {
                    v524 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                    if ( v524 )
                      v524[1] = KeQueryPerformanceCounter(0LL);
                    *(_QWORD *)&v797.Data1 = 0LL;
                    *(_QWORD *)v797.Data4 = 0LL;
                    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                    {
                      v796 = 1;
                      v525 = PsGetCurrentThreadWin32Thread(v523);
                      v795 = v525;
                      if ( v525 && (*(int *)(v525 + 24) > 0 || *(_DWORD *)(v795 + 48)) )
                      {
                        EtwActivityIdControl(3u, &v797);
                        if ( dword_1C020FB50 > 6u )
                        {
                          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                          {
                            v722 = v796;
                            v964 = &v722;
                            v965 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v797, 0LL, 3u, &v963);
                          }
                        }
                      }
                    }
                    else
                    {
                      v795 = 0LL;
                    }
                    v526 = 0LL;
                    while ( 1 )
                    {
                      v527 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                      if ( v527 )
                        v526 = *v527;
                      v530 = (PVOID)PsGetCurrentProcess(v529, v528);
                      if ( v530 )
                      {
                        if ( v530 == g_pepDwm )
                          break;
                      }
                      if ( (PVOID)PsGetCurrentProcess(v532, v531) == gpepCSRSS
                        && v526 != (struct tagTHREADINFO *)gptiTSRequest
                        || gbDITInHitTest != 1
                        || v526 == gptiRit )
                      {
                        break;
                      }
                      ++gcDITHitTestWaiters;
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                    }
                    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                      && v795
                      && (*(_DWORD *)(v795 + 48) || *(int *)(v795 + 24) > 0) )
                    {
                      *(_DWORD *)(v795 + 44) = 1;
                      *(GUID *)(v795 + 28) = v797;
                      if ( dword_1C020FB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                        {
                          v723 = v796;
                          v967 = &v723;
                          v968 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v797, 0LL, 3u, &v966);
                          v533 = dword_1C020FB50;
                        }
                        if ( v533 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                        {
                          v724 = v796;
                          v970 = &v724;
                          v971 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v797, 0LL, 3u, &v969);
                        }
                      }
                    }
                    EtwTraceAcquiredExclusiveUserCrit();
                    gptiCurrent = v526;
                    gbValidateHandleForIL = 1;
                    if ( IsValidGuiThreadContext() )
                    {
                      v537 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v534);
                      if ( v537 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v536, v535, v538);
                      if ( ExIsResourceAcquiredExclusiveLite(*v537) == 1 )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v540, v539, v541);
                      ExEnterCriticalRegionAndAcquireResourceExclusive(*v537);
                      v545 = (__int64 *)gpducstulHead;
                      if ( gpducstulHead )
                      {
                        do
                        {
                          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v545[2];
                          v546 = *v545;
                          v545[2] = 0LL;
                          if ( !*(_DWORD *)(v546 + 8) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v543, v542, v544);
                          v549 = (PERESOURCE *)GetDomainLockRef(12LL, v542, v544);
                          if ( v549 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v548, v547, v550);
                          ExReleaseResourceAndLeaveCriticalRegion(*v549);
                          HMUnlockObject(*v545);
                          tagDomLock::LockExclusive(v549);
                          v545 = (__int64 *)gpducstulHead;
                        }
                        while ( gpducstulHead );
                        v7 = a4;
                      }
                      ExReleaseResourceAndLeaveCriticalRegion(*v537);
                    }
                    dword_1C021579C = v7[4];
                  }
                }
                else
                {
                  v495 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v495 )
                    v495[1] = KeQueryPerformanceCounter(0LL);
                  *(_QWORD *)&v794.Data1 = 0LL;
                  *(_QWORD *)v794.Data4 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v793 = 1;
                    v496 = PsGetCurrentThreadWin32Thread(v494);
                    v792 = v496;
                    if ( v496 && (*(int *)(v496 + 24) > 0 || *(_DWORD *)(v792 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v794);
                      if ( dword_1C020FB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                        {
                          v719 = v793;
                          v955 = &v719;
                          v956 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v794, 0LL, 3u, &v954);
                        }
                      }
                    }
                  }
                  else
                  {
                    v792 = 0LL;
                  }
                  v497 = 0LL;
                  while ( 1 )
                  {
                    v498 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v498 )
                      v497 = *v498;
                    v501 = (PVOID)PsGetCurrentProcess(v500, v499);
                    if ( v501 )
                    {
                      if ( v501 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v503, v502) == gpepCSRSS
                      && v497 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v497 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                    && v792
                    && (*(_DWORD *)(v792 + 48) || *(int *)(v792 + 24) > 0) )
                  {
                    *(_DWORD *)(v792 + 44) = 1;
                    *(GUID *)(v792 + 28) = v794;
                    if ( dword_1C020FB50 > 6u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                      {
                        v720 = v793;
                        v958 = &v720;
                        v959 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v794, 0LL, 3u, &v957);
                        v504 = dword_1C020FB50;
                      }
                      if ( v504 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                      {
                        v721 = v793;
                        v961 = &v721;
                        v962 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v794, 0LL, 3u, &v960);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v497;
                  gbValidateHandleForIL = 1;
                  if ( IsValidGuiThreadContext() )
                  {
                    v508 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v505);
                    if ( v508 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v507, v506, v509);
                    if ( ExIsResourceAcquiredExclusiveLite(*v508) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v511, v510, v512);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v508);
                    v516 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v516[2];
                        v517 = *v516;
                        v516[2] = 0LL;
                        if ( !*(_DWORD *)(v517 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v514, v513, v515);
                        v520 = (PERESOURCE *)GetDomainLockRef(12LL, v513, v515);
                        if ( v520 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v519, v518, v521);
                        ExReleaseResourceAndLeaveCriticalRegion(*v520);
                        HMUnlockObject(*v516);
                        tagDomLock::LockExclusive(v520);
                        v516 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v7 = a4;
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v508);
                  }
                  dword_1C02157F4 = v7[4];
                }
LABEL_71:
                UserSessionSwitchLeaveCrit(v55, v54);
                return 0LL;
              }
              v407 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v407 )
                v407[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v785.Data1 = 0LL;
              *(_QWORD *)v785.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v784 = 1;
                v408 = PsGetCurrentThreadWin32Thread(v406);
                v783 = v408;
                if ( v408 && (*(int *)(v408 + 24) > 0 || *(_DWORD *)(v783 + 48)) )
                {
                  EtwActivityIdControl(3u, &v785);
                  if ( dword_1C020FB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                    {
                      v710 = v784;
                      v928 = &v710;
                      v929 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v785, 0LL, 3u, &v927);
                    }
                  }
                }
              }
              else
              {
                v783 = 0LL;
              }
              v409 = 0LL;
              while ( 1 )
              {
                v410 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v410 )
                  v409 = *v410;
                v413 = (PVOID)PsGetCurrentProcess(v412, v411);
                if ( v413 )
                {
                  if ( v413 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v415, v414) == gpepCSRSS
                  && v409 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v409 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v783
                && (*(_DWORD *)(v783 + 48) || *(int *)(v783 + 24) > 0) )
              {
                *(_DWORD *)(v783 + 44) = 1;
                *(GUID *)(v783 + 28) = v785;
                if ( dword_1C020FB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v711 = v784;
                    v931 = &v711;
                    v932 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v785, 0LL, 3u, &v930);
                    v416 = dword_1C020FB50;
                  }
                  if ( v416 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v712 = v784;
                    v934 = &v712;
                    v935 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v785, 0LL, 3u, &v933);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v409;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v420 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v417);
                if ( v420 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v419, v418, v421);
                if ( ExIsResourceAcquiredExclusiveLite(*v420) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v423, v422, v424);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v420);
                while ( 1 )
                {
                  v433 = (__int64 *)gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  v428 = *v433;
                  v433[2] = 0LL;
                  if ( !*(_DWORD *)(v428 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v426, v425, v427);
                  v431 = (PERESOURCE *)GetDomainLockRef(12LL, v425, v427);
                  if ( v431 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v430, v429, v432);
                  ExReleaseResourceAndLeaveCriticalRegion(*v431);
                  HMUnlockObject(*v433);
                  tagDomLock::LockExclusive(v431);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v420);
              }
              if ( gbTtmEnabled || gProtocolType || dword_1C02157D8 )
                goto LABEL_71;
              v434 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_1102:
              v640 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v404);
              if ( v640 )
                v640[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v809.Data1 = 0LL;
              *(_QWORD *)v809.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v808 = 1;
                v641 = PsGetCurrentThreadWin32Thread(v639);
                v807 = v641;
                if ( v641 && (*(int *)(v641 + 24) > 0 || *(_DWORD *)(v807 + 48)) )
                {
                  EtwActivityIdControl(3u, &v809);
                  if ( dword_1C020FB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                    {
                      v738 = v808;
                      v1000 = &v738;
                      v1001 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v809, 0LL, 3u, &v999);
                    }
                  }
                }
              }
              else
              {
                v807 = 0LL;
              }
              v642 = 0LL;
              while ( 1 )
              {
                v643 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v643 )
                  v642 = *v643;
                v646 = (PVOID)PsGetCurrentProcess(v645, v644);
                if ( v646 )
                {
                  if ( v646 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v648, v647) == gpepCSRSS
                  && v642 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v642 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v807
                && (*(_DWORD *)(v807 + 48) || *(int *)(v807 + 24) > 0) )
              {
                *(_DWORD *)(v807 + 44) = 1;
                *(GUID *)(v807 + 28) = v809;
                if ( dword_1C020FB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v735 = v808;
                    v1003 = &v735;
                    v1004 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v809, 0LL, 3u, &v1002);
                    v649 = dword_1C020FB50;
                  }
                  if ( v649 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                  {
                    v736 = v808;
                    v1006 = &v736;
                    v1007 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v809, 0LL, 3u, &v1005);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v642;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v653 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v650);
                if ( v653 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v652, v651, v654);
                if ( ExIsResourceAcquiredExclusiveLite(*v653) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v656, v655, v657);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v653);
                v661 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v661[2];
                    v662 = *v661;
                    v661[2] = 0LL;
                    if ( !*(_DWORD *)(v662 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v659, v658, v660);
                    v665 = (PERESOURCE *)GetDomainLockRef(12LL, v658, v660);
                    if ( v665 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v664, v663, v666);
                    ExReleaseResourceAndLeaveCriticalRegion(*v665);
                    HMUnlockObject(*v661);
                    tagDomLock::LockExclusive(v665);
                    v661 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v653);
              }
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C02157D8 = v7[4] == 0;
              v55 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)v7;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)v7 )
                v55 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)v7 + 1);
              if ( !v55 || gbTtmEnabled || gProtocolType )
                goto LABEL_71;
              v434 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v434);
            goto LABEL_71;
          }
          v287 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v287 )
            v287[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&v773.Data1 = 0LL;
          *(_QWORD *)v773.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v772 = 1;
            v288 = PsGetCurrentThreadWin32Thread(v286);
            v771 = v288;
            if ( v288 && (*(int *)(v288 + 24) > 0 || *(_DWORD *)(v771 + 48)) )
            {
              EtwActivityIdControl(3u, &v773);
              if ( dword_1C020FB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                {
                  v698 = v772;
                  v892 = &v698;
                  v893 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v773, 0LL, 3u, &v891);
                }
              }
            }
          }
          else
          {
            v771 = 0LL;
          }
          v289 = 0LL;
          while ( 1 )
          {
            v290 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v290 )
              v289 = *v290;
            v293 = (PVOID)PsGetCurrentProcess(v292, v291);
            if ( v293 )
            {
              if ( v293 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v295, v294) == gpepCSRSS && v289 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v289 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v771
            && (*(_DWORD *)(v771 + 48) || *(int *)(v771 + 24) > 0) )
          {
            *(_DWORD *)(v771 + 44) = 1;
            *(GUID *)(v771 + 28) = v773;
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v699 = v772;
                v895 = &v699;
                v896 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v773, 0LL, 3u, &v894);
                v296 = dword_1C020FB50;
              }
              if ( v296 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v700 = v772;
                v898 = &v700;
                v899 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v773, 0LL, 3u, &v897);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v289;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            v301 = (PERESOURCE *)GetDomainLockRef(12LL, v297, v298);
            if ( v301 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v300, v299, v302);
            if ( ExIsResourceAcquiredExclusiveLite(*v301) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v304, v303, v305);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v301);
            v309 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v309[2];
                v310 = *v309;
                v309[2] = 0LL;
                if ( !*(_DWORD *)(v310 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v307, v306, v308);
                v313 = (PERESOURCE *)GetDomainLockRef(12LL, v306, v308);
                if ( v313 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v312, v311, v314);
                ExReleaseResourceAndLeaveCriticalRegion(*v313);
                HMUnlockObject(*v309);
                tagDomLock::LockExclusive(v313);
                v309 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = a4;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v301);
          }
          giDimTimeOutMs = 1000 * v7[4];
        }
        else
        {
          v258 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v258 )
            v258[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&v770.Data1 = 0LL;
          *(_QWORD *)v770.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v769 = 1;
            v259 = PsGetCurrentThreadWin32Thread(v257);
            v768 = v259;
            if ( v259 && (*(int *)(v259 + 24) > 0 || *(_DWORD *)(v768 + 48)) )
            {
              EtwActivityIdControl(3u, &v770);
              if ( dword_1C020FB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                {
                  v695 = v769;
                  v883 = &v695;
                  v884 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v770, 0LL, 3u, &v882);
                }
              }
            }
          }
          else
          {
            v768 = 0LL;
          }
          v260 = 0LL;
          while ( 1 )
          {
            v261 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v261 )
              v260 = *v261;
            v264 = (PVOID)PsGetCurrentProcess(v263, v262);
            if ( v264 )
            {
              if ( v264 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v266, v265) == gpepCSRSS && v260 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v260 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v768
            && (*(_DWORD *)(v768 + 48) || *(int *)(v768 + 24) > 0) )
          {
            *(_DWORD *)(v768 + 44) = 1;
            *(GUID *)(v768 + 28) = v770;
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v696 = v769;
                v886 = &v696;
                v887 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v770, 0LL, 3u, &v885);
                v267 = dword_1C020FB50;
              }
              if ( v267 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v697 = v769;
                v889 = &v697;
                v890 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v770, 0LL, 3u, &v888);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v260;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            v271 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v268);
            if ( v271 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v270, v269, v272);
            if ( ExIsResourceAcquiredExclusiveLite(*v271) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v274, v273, v275);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v271);
            v279 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v279[2];
                v280 = *v279;
                v279[2] = 0LL;
                if ( !*(_DWORD *)(v280 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v277, v276, v278);
                v283 = (PERESOURCE *)GetDomainLockRef(12LL, v276, v278);
                if ( v283 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v282, v281, v284);
                ExReleaseResourceAndLeaveCriticalRegion(*v283);
                HMUnlockObject(*v279);
                tagDomLock::LockExclusive(v283);
                v279 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = a4;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v271);
          }
          if ( gProtocolType )
            goto LABEL_71;
          giPowerSessionActivityTimeOutMs = 1000 * v7[4];
          if ( giPowerSessionActivityTimeOutMs )
            gPowerAdaptiveState = 0;
        }
      }
      else
      {
        v229 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
        if ( v229 )
          v229[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&v767.Data1 = 0LL;
        *(_QWORD *)v767.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v766 = 1;
          v230 = PsGetCurrentThreadWin32Thread(v228);
          v765 = v230;
          if ( v230 && (*(int *)(v230 + 24) > 0 || *(_DWORD *)(v765 + 48)) )
          {
            EtwActivityIdControl(3u, &v767);
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v692 = v766;
                v874 = &v692;
                v875 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v767, 0LL, 3u, &v873);
              }
            }
          }
        }
        else
        {
          v765 = 0LL;
        }
        v231 = 0LL;
        while ( 1 )
        {
          v232 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v232 )
            v231 = *v232;
          v235 = (PVOID)PsGetCurrentProcess(v234, v233);
          if ( v235 )
          {
            if ( v235 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v237, v236) == gpepCSRSS && v231 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v231 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v765
          && (*(_DWORD *)(v765 + 48) || *(int *)(v765 + 24) > 0) )
        {
          *(_DWORD *)(v765 + 44) = 1;
          *(GUID *)(v765 + 28) = v767;
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v693 = v766;
              v877 = &v693;
              v878 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v767, 0LL, 3u, &v876);
              v238 = dword_1C020FB50;
            }
            if ( v238 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v694 = v766;
              v880 = &v694;
              v881 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v767, 0LL, 3u, &v879);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v231;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          v242 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v239);
          if ( v242 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v241, v240, v243);
          if ( ExIsResourceAcquiredExclusiveLite(*v242) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v245, v244, v246);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v242);
          v250 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v250[2];
              v251 = *v250;
              v250[2] = 0LL;
              if ( !*(_DWORD *)(v251 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v248, v247, v249);
              v254 = (PERESOURCE *)GetDomainLockRef(12LL, v247, v249);
              if ( v254 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v253, v252, v255);
              ExReleaseResourceAndLeaveCriticalRegion(*v254);
              HMUnlockObject(*v250);
              tagDomLock::LockExclusive(v254);
              v250 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v7 = a4;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v242);
        }
        if ( !gProtocolType || !dword_1C021573C )
          goto LABEL_71;
        giPowerSessionActivityTimeOutMs = 1000 * v7[4];
      }
    }
    else
    {
      v200 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v200 )
        v200[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&v764.Data1 = 0LL;
      *(_QWORD *)v764.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v763 = 1;
        v201 = PsGetCurrentThreadWin32Thread(v199);
        v762 = v201;
        if ( v201 && (*(int *)(v201 + 24) > 0 || *(_DWORD *)(v762 + 48)) )
        {
          EtwActivityIdControl(3u, &v764);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v689 = v763;
              v865 = &v689;
              v866 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v764, 0LL, 3u, &v864);
            }
          }
        }
      }
      else
      {
        v762 = 0LL;
      }
      v202 = 0LL;
      while ( 1 )
      {
        v203 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v203 )
          v202 = *v203;
        v206 = (PVOID)PsGetCurrentProcess(v205, v204);
        if ( v206 )
        {
          if ( v206 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v208, v207) == gpepCSRSS && v202 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v202 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v762
        && (*(_DWORD *)(v762 + 48) || *(int *)(v762 + 24) > 0) )
      {
        *(_DWORD *)(v762 + 44) = 1;
        *(GUID *)(v762 + 28) = v764;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v690 = v763;
            v868 = &v690;
            v869 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v764, 0LL, 3u, &v867);
            v209 = dword_1C020FB50;
          }
          if ( v209 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v691 = v763;
            v871 = &v691;
            v872 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v764, 0LL, 3u, &v870);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v202;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v213 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v210);
        if ( v213 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v212, v211, v214);
        if ( ExIsResourceAcquiredExclusiveLite(*v213) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v216, v215, v217);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v213);
        v221 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v221[2];
            v222 = *v221;
            v221[2] = 0LL;
            if ( !*(_DWORD *)(v222 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v219, v218, v220);
            v225 = (PERESOURCE *)GetDomainLockRef(12LL, v218, v220);
            if ( v225 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v224, v223, v226);
            ExReleaseResourceAndLeaveCriticalRegion(*v225);
            HMUnlockObject(*v221);
            tagDomLock::LockExclusive(v225);
            v221 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v7 = a4;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v213);
      }
      if ( gProtocolType )
        goto LABEL_71;
      giPowerOffTimeOutMs = 1000 * v7[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_71;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8 != 8 || !v7 )
      return 3221225473LL;
    v42 = *((_BYTE *)v7 + 1);
    v43 = *(_BYTE *)v7;
    v44 = (int)v7[1];
    v670 = v42;
    v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v46 )
      v46[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&v761.Data1 = 0LL;
    *(_QWORD *)v761.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v760 = 1;
      v191 = PsGetCurrentThreadWin32Thread(v45);
      v759 = v191;
      if ( v191 && (*(int *)(v191 + 24) > 0 || *(_DWORD *)(v759 + 48)) )
      {
        EtwActivityIdControl(3u, &v761);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v686 = v760;
            v856 = &v686;
            v857 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v761, 0LL, 3u, &v855);
          }
        }
      }
    }
    else
    {
      v759 = 0LL;
    }
    v47 = 0LL;
    while ( 1 )
    {
      v48 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v48 )
        v47 = *v48;
      v51 = (PVOID)PsGetCurrentProcess(v50, v49);
      if ( v51 )
      {
        if ( v51 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v53, v52) == gpepCSRSS && v47 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v47 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v759
      && (*(_DWORD *)(v759 + 48) || *(int *)(v759 + 24) > 0) )
    {
      *(_DWORD *)(v759 + 44) = 1;
      *(GUID *)(v759 + 28) = v761;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v687 = v760;
          v859 = &v687;
          v860 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v761, 0LL, 3u, &v858);
          v192 = dword_1C020FB50;
        }
        if ( v192 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v688 = v760;
          v862 = &v688;
          v863 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v761, 0LL, 3u, &v861);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v47;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v60 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v56);
      if ( v60 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61);
      if ( ExIsResourceAcquiredExclusiveLite(*v60) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v63, v62, v64);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v60);
      v68 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v68[2];
          v193 = *v68;
          v68[2] = 0LL;
          if ( !*(_DWORD *)(v193 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67);
          v196 = (PERESOURCE *)GetDomainLockRef(12LL, v65, v67);
          if ( v196 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v195, v194, v197);
          ExReleaseResourceAndLeaveCriticalRegion(*v196);
          HMUnlockObject(*v68);
          tagDomLock::LockExclusive(v196);
          v68 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v42 = v670;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v60);
    }
    if ( !v43 || !gbBlockSendInputResets )
    {
      v57 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime(gpInputGlobals, v57, 4LL);
      CitpLastInputUpdate(0x20u, v57);
      if ( !v42 )
      {
        if ( dword_1C02157D0 )
        {
          LOBYTE(v54) = *(_BYTE *)gpbIgnoreSleepInput;
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v44);
          goto LABEL_71;
        }
        LODWORD(v671) = 4;
        *((_QWORD *)&v671 + 1) = v44;
LABEL_70:
        QueuePowerRequest(&v671, 0);
        goto LABEL_71;
      }
    }
    goto LABEL_71;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8 == 4 && v7 && a5 == 4 && a6 )
    {
      v12 = *v7;
      v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v14 )
        v14[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&v758.Data1 = 0LL;
      *(_QWORD *)v758.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v757 = 1;
        v188 = PsGetCurrentThreadWin32Thread(v13);
        v756 = v188;
        if ( v188 && (*(int *)(v188 + 24) > 0 || *(_DWORD *)(v756 + 48)) )
        {
          EtwActivityIdControl(3u, &v758);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v683 = v757;
              v847 = &v683;
              v848 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v758, 0LL, 3u, &v846);
            }
          }
        }
      }
      else
      {
        v756 = 0LL;
      }
      v15 = 0LL;
      while ( 1 )
      {
        v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v16 )
          v15 = *v16;
        v19 = (PVOID)PsGetCurrentProcess(v18, v17);
        if ( v19 )
        {
          if ( v19 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v15 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v756
        && (*(_DWORD *)(v756 + 48) || *(int *)(v756 + 24) > 0) )
      {
        *(_DWORD *)(v756 + 44) = 1;
        *(GUID *)(v756 + 28) = v758;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v684 = v757;
            v850 = &v684;
            v851 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v758, 0LL, 3u, &v849);
            v189 = dword_1C020FB50;
          }
          if ( v189 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v685 = v757;
            v853 = &v685;
            v854 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v758, 0LL, 3u, &v852);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v15;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v33 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23);
        if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
        if ( ExIsResourceAcquiredExclusiveLite(*v33) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v33);
        while ( 1 )
        {
          v41 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v190 = *v41;
          v41[2] = 0LL;
          if ( !*(_DWORD *)(v190 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
          CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v741);
          HMUnlockObject(*v41);
          tagDomLock::LockExclusive((PERESOURCE *)v741);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
      }
      v24 = dword_1C0215778;
      v25 = dword_1C0215778 + v12;
      dword_1C0215778 += v12;
      if ( v24 == 1 )
      {
        v26 = v25 == 0;
        v27 = v25 < 0;
        if ( v25 )
        {
LABEL_31:
          v669 = !v27 && !v26;
          ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v669, 1LL, 0LL, &gSessionId, 0, 0);
          UserSessionSwitchLeaveCrit(v29, v28);
          if ( !v24 && v25 == 1 && dword_1C0215780 == 2 )
          {
            LODWORD(v671) = 4;
            *((_QWORD *)&v671 + 1) = 0LL;
            QueuePowerRequest(&v671, 0);
          }
          if ( v25 >= 0 )
            v6 = v25;
          *a6 = v6;
          return v667;
        }
        CitDisplayRequestChange(0);
        EtwTraceDisplayReqChange(0LL);
        if ( !gbBlockSendInputResets )
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            9LL);
      }
      else if ( !v24 && v25 == 1 )
      {
        CitDisplayRequestChange(1u);
        EtwTraceDisplayReqChange(1LL);
      }
      v26 = v25 == 0;
      v27 = v25 < 0;
      goto LABEL_31;
    }
    return 3221225485LL;
  }
  v69 = v11 - 1;
  if ( !v69 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8 == 8 && v7 )
    {
      v70 = *v7;
      v71 = 0;
      v72 = 0;
      if ( !(_DWORD)v70 )
      {
        v71 = 1;
        goto LABEL_107;
      }
      v73 = (unsigned int)(v70 - 1);
      if ( !(_DWORD)v73 )
      {
        v72 = 1;
LABEL_108:
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          4LL);
LABEL_109:
        if ( v71 )
        {
          if ( gSystemIsAoAc )
            SetInputMode(1LL);
          if ( !v72 )
          {
            LODWORD(v671) = 5;
            goto LABEL_112;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, a2, a3);
        }
        else if ( !v72 )
        {
          return v667;
        }
        LODWORD(v671) = 4;
LABEL_112:
        *((_QWORD *)&v671 + 1) = (int)v7[1];
        QueuePowerRequest(&v671, 0);
        return v667;
      }
      if ( (_DWORD)v73 == 1 )
      {
        v75 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v73);
        if ( v75 )
          v75[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&v755.Data1 = 0LL;
        *(_QWORD *)v755.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v754 = 1;
          v174 = PsGetCurrentThreadWin32Thread(v74);
          v753 = v174;
          if ( v174 && (*(int *)(v174 + 24) > 0 || *(_DWORD *)(v753 + 48)) )
          {
            EtwActivityIdControl(3u, &v755);
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v680 = v754;
                v838 = &v680;
                v839 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v755, 0LL, 3u, &v837);
              }
            }
          }
        }
        else
        {
          v753 = 0LL;
        }
        v76 = 0LL;
        while ( 1 )
        {
          v77 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v77 )
            v76 = *v77;
          v80 = (PVOID)PsGetCurrentProcess(v79, v78);
          if ( v80 )
          {
            if ( v80 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v82, v81) == gpepCSRSS && v76 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v76 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v753
          && (*(_DWORD *)(v753 + 48) || *(int *)(v753 + 24) > 0) )
        {
          *(_DWORD *)(v753 + 44) = 1;
          *(GUID *)(v753 + 28) = v755;
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v681 = v754;
              v841 = &v681;
              v842 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v755, 0LL, 3u, &v840);
              v175 = dword_1C020FB50;
            }
            if ( v175 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v682 = v754;
              v844 = &v682;
              v845 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v755, 0LL, 3u, &v843);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v76;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          v178 = (PERESOURCE *)GetDomainLockRef(12LL, v83, v85);
          if ( v178 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v177, v176, v179);
          if ( ExIsResourceAcquiredExclusiveLite(*v178) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v181, v180, v182);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v178);
          while ( 1 )
          {
            v187 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v186 = *v187;
            v187[2] = 0LL;
            if ( !*(_DWORD *)(v186 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v184, v183, v185);
            CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v740);
            HMUnlockObject(*v187);
            tagDomLock::LockExclusive((PERESOURCE *)v740);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v178);
          v7 = a4;
        }
        if ( gPowerTransitionsState )
          v667 = 255;
        else
          v72 = 1;
        UserSessionSwitchLeaveCrit(v84, v83);
LABEL_107:
        if ( !v72 )
          goto LABEL_109;
        goto LABEL_108;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v73, a2, a3);
      return 0LL;
    }
    return 3221225473LL;
  }
  v116 = v69 - 1;
  if ( !v116 )
  {
    if ( v8 != 32 || !v7 )
      return 3221225485LL;
    v147 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v147 )
      v147[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&v752.Data1 = 0LL;
    *(_QWORD *)v752.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v751 = 1;
      v148 = PsGetCurrentThreadWin32Thread(v146);
      v750 = v148;
      if ( v148 && (*(int *)(v148 + 24) > 0 || *(_DWORD *)(v750 + 48)) )
      {
        EtwActivityIdControl(3u, &v752);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v677 = v751;
            v829 = &v677;
            v830 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v752, 0LL, 3u, &v828);
          }
        }
      }
    }
    else
    {
      v750 = 0LL;
    }
    v149 = 0LL;
    while ( 1 )
    {
      v150 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v150 )
        v149 = *v150;
      v153 = (PVOID)PsGetCurrentProcess(v152, v151);
      if ( v153 )
      {
        if ( v153 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v155, v154) == gpepCSRSS && v149 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v149 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v750
      && (*(_DWORD *)(v750 + 48) || *(int *)(v750 + 24) > 0) )
    {
      *(_DWORD *)(v750 + 44) = 1;
      *(GUID *)(v750 + 28) = v752;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v678 = v751;
          v832 = &v678;
          v833 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v752, 0LL, 3u, &v831);
          v156 = dword_1C020FB50;
        }
        if ( v156 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v679 = v751;
          v835 = &v679;
          v836 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v752, 0LL, 3u, &v834);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v149;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v161 = (PERESOURCE *)GetDomainLockRef(12LL, v157, v158);
      if ( v161 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v160, v159, v162);
      if ( ExIsResourceAcquiredExclusiveLite(*v161) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v164, v163, v165);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v161);
      while ( 1 )
      {
        v170 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v169 = *v170;
        v170[2] = 0LL;
        if ( !*(_DWORD *)(v169 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v167, v166, v168);
        CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v739);
        HMUnlockObject(*v170);
        tagDomLock::LockExclusive((PERESOURCE *)v739);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v161);
      v7 = a4;
    }
    dword_1C02157A4 = *v7;
    v171 = v7[1];
    dword_1C02157A8 = v7[1];
    dword_1C02157AC = v7[2];
    dword_1C02157B0 = v7[3];
    dword_1C02157B4 = v7[4];
    dword_1C02157B8 = v7[5];
    dword_1C02157BC = v7[6];
    dword_1C02157C0 = v7[7];
    if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v171 != -1 )
    {
      if ( qword_1C02152B0 )
      {
        LOBYTE(v171) = 1;
        v172 = qword_1C02152B0(v171, v7);
      }
      else
      {
        v172 = -1073741637;
      }
      v667 = v172;
      LOBYTE(v6) = v172 >= 0;
      gbPowerHighPrecisionBrightnessSupported = v6;
    }
    v173 = (unsigned int)dword_1C02157A4;
    dword_1C0215788 = dword_1C02157A4;
    dword_1C021578C = dword_1C02157A4;
    dword_1C0215790 = dword_1C02157B4;
    dword_1C0215794 = dword_1C02157B4;
    if ( dword_1C0215780 == 1 )
    {
      if ( dword_1C02157A0 == dword_1C02157A4 )
      {
LABEL_296:
        UserSessionSwitchLeaveCrit(v173, v157);
        return v667;
      }
      LODWORD(v671) = 11;
      *((_QWORD *)&v671 + 1) = 1LL;
      QueuePowerRequest(&v671, 0);
    }
    if ( dword_1C0215780 == 2 && dword_1C02157A0 != dword_1C02157B4 )
    {
      LODWORD(v671) = 11;
      *((_QWORD *)&v671 + 1) = 2LL;
      QueuePowerRequest(&v671, 0);
    }
    goto LABEL_296;
  }
  v117 = v116 - 1;
  if ( !v117 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v122 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v122 )
      v122[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v748 = 1;
      v123 = PsGetCurrentThreadWin32Thread(v121);
      v747 = v123;
      if ( v123 && (*(int *)(v123 + 24) > 0 || *(_DWORD *)(v747 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v674 = v748;
            v820 = &v674;
            v821 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v819);
          }
        }
      }
    }
    else
    {
      v747 = 0LL;
    }
    v124 = 0LL;
    while ( 1 )
    {
      v125 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v125 )
        v124 = *v125;
      v128 = (PVOID)PsGetCurrentProcess(v127, v126);
      if ( v128 )
      {
        if ( v128 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v130, v129) == gpepCSRSS && v124 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v124 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v747
      && (*(_DWORD *)(v747 + 48) || *(int *)(v747 + 24) > 0) )
    {
      *(_DWORD *)(v747 + 44) = 1;
      *(GUID *)(v747 + 28) = pActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v675 = v748;
          v823 = &v675;
          v824 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v822);
          v131 = dword_1C020FB50;
        }
        if ( v131 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v676 = v748;
          v826 = &v676;
          v827 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v825);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v124;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v135 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v132);
      if ( v135 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v134, v133, v136);
      if ( ExIsResourceAcquiredExclusiveLite(*v135) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v138, v137, v139);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v135);
      while ( 1 )
      {
        v144 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v143 = *v144;
        v144[2] = 0LL;
        if ( !*(_DWORD *)(v143 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v141, v140, v142);
        CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v743);
        HMUnlockObject(*v144);
        tagDomLock::LockExclusive((PERESOURCE *)v743);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v135);
    }
    if ( !gWakeInProgress )
      goto LABEL_71;
    v145 = gWakeInProgressReason;
    gWakeInProgressReason = MonitorRequestReasonUnknown;
    gWakeInProgress = 0;
    if ( gnPoSessionSwitchBlockCount < 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v132);
    LODWORD(v671) = 12;
    *((_QWORD *)&v671 + 1) = v145;
    goto LABEL_70;
  }
  v118 = v117 - 1;
  if ( !v118 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8 != 8 || !v7 )
      return 3221225473LL;
    UserSessionSwitchBlock_Start();
    *((_QWORD *)&v671 + 1) = (int)v7[1];
    LODWORD(v671) = 14;
    if ( *(_BYTE *)v7 )
      LODWORD(v671) = 13;
    v120 = 0;
    goto LABEL_190;
  }
  v119 = v118 - 1;
  if ( !v119 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8 != 4 || !v7 )
      return 3221225473LL;
    v120 = 1;
    *((_QWORD *)&v671 + 1) = (int)*v7;
    LODWORD(v671) = 15;
LABEL_190:
    QueuePowerRequest(&v671, v120);
    return 0LL;
  }
  if ( v119 != 1 )
    return 3221225473LL;
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v8 == 1 && v7 && !a5 && !a6 )
  {
    LOBYTE(v6) = *(_BYTE *)v7 != 0;
    CitDisplayRequestChange(v6);
    EtwTraceDisplayReqChange(v6);
    return v667;
  }
  return 3221225485LL;
}
