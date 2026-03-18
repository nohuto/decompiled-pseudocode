/*
 * XREFs of UserPowerInfoCallout @ 0x1C00648AC
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0038708 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     SqmPowerState @ 0x1C00644C0 (SqmPowerState.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0065000 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     EtwTraceDisplayReqChange @ 0x1C0065064 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C006508C (CitDisplayRequestChange.c)
 *     QueuePowerRequest @ 0x1C0065410 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     SetPendingInput @ 0x1C00B7BA0 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C00BE653 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C01021EC (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0104734 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0104910 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0104C1C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C011DC80 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C0176848 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v120; // rcx
  LARGE_INTEGER *v121; // rbx
  __int64 v122; // rax
  struct tagTHREADINFO *v123; // rbx
  struct tagTHREADINFO **v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  PVOID v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned int v130; // r9d
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // rcx
  PERESOURCE *v134; // rbx
  __int64 v135; // r8
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rax
  __int64 *v143; // rdi
  __int64 v144; // rbx
  __int64 v145; // rcx
  LARGE_INTEGER *v146; // rbx
  __int64 v147; // rax
  struct tagTHREADINFO *v148; // rbx
  struct tagTHREADINFO **v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  PVOID v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  unsigned int v155; // r9d
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rdx
  __int64 v159; // rcx
  PERESOURCE *v160; // rbx
  __int64 v161; // r8
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 *v169; // rdi
  __int64 v170; // rcx
  int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rax
  unsigned int v174; // r9d
  __int64 v175; // rdx
  __int64 v176; // rcx
  PERESOURCE *v177; // rbx
  __int64 v178; // r8
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // rax
  __int64 *v186; // rdi
  __int64 v187; // rax
  unsigned int v188; // r9d
  __int64 v189; // rax
  __int64 v190; // rax
  unsigned int v191; // r9d
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  PERESOURCE *v195; // rdi
  __int64 v196; // r8
  __int64 v197; // rcx
  __int64 v198; // rcx
  LARGE_INTEGER *v199; // rbx
  __int64 v200; // rax
  struct tagTHREADINFO *v201; // rbx
  struct tagTHREADINFO **v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rcx
  PVOID v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  unsigned int v208; // r9d
  __int64 v209; // r8
  __int64 v210; // rdx
  __int64 v211; // rcx
  PERESOURCE *v212; // rbx
  __int64 v213; // r8
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 *v220; // r14
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  PERESOURCE *v224; // rdi
  __int64 v225; // r8
  __int64 v226; // rcx
  __int64 v227; // rcx
  LARGE_INTEGER *v228; // rbx
  __int64 v229; // rax
  struct tagTHREADINFO *v230; // rbx
  struct tagTHREADINFO **v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  PVOID v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rcx
  unsigned int v237; // r9d
  __int64 v238; // r8
  __int64 v239; // rdx
  __int64 v240; // rcx
  PERESOURCE *v241; // rbx
  __int64 v242; // r8
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 *v249; // r14
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  PERESOURCE *v253; // rdi
  __int64 v254; // r8
  __int64 v255; // rcx
  __int64 v256; // rcx
  LARGE_INTEGER *v257; // rbx
  __int64 v258; // rax
  struct tagTHREADINFO *v259; // rbx
  struct tagTHREADINFO **v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rcx
  PVOID v263; // rax
  __int64 v264; // rdx
  __int64 v265; // rcx
  unsigned int v266; // r9d
  __int64 v267; // r8
  __int64 v268; // rdx
  __int64 v269; // rcx
  PERESOURCE *v270; // rbx
  __int64 v271; // r8
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // rdx
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 *v278; // r14
  __int64 v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  PERESOURCE *v282; // rdi
  __int64 v283; // r8
  __int64 v284; // rcx
  __int64 v285; // rcx
  LARGE_INTEGER *v286; // rbx
  __int64 v287; // rax
  struct tagTHREADINFO *v288; // rbx
  struct tagTHREADINFO **v289; // rax
  __int64 v290; // rdx
  __int64 v291; // rcx
  PVOID v292; // rax
  __int64 v293; // rdx
  __int64 v294; // rcx
  unsigned int v295; // r9d
  __int64 v296; // rdx
  __int64 v297; // r8
  __int64 v298; // rdx
  __int64 v299; // rcx
  PERESOURCE *v300; // rbx
  __int64 v301; // r8
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 *v308; // r14
  __int64 v309; // rax
  __int64 v310; // rdx
  __int64 v311; // rcx
  PERESOURCE *v312; // rdi
  __int64 v313; // r8
  __int64 v314; // rcx
  __int64 v315; // rcx
  LARGE_INTEGER *v316; // rbx
  __int64 v317; // rax
  struct tagTHREADINFO *v318; // rbx
  struct tagTHREADINFO **v319; // rax
  __int64 v320; // rdx
  __int64 v321; // rcx
  PVOID v322; // rax
  __int64 v323; // rdx
  __int64 v324; // rcx
  unsigned int v325; // r9d
  __int64 v326; // r8
  __int64 v327; // rdx
  __int64 v328; // rcx
  PERESOURCE *v329; // rbx
  __int64 v330; // r8
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 *v337; // r14
  __int64 v338; // rax
  __int64 v339; // rdx
  __int64 v340; // rcx
  PERESOURCE *v341; // rdi
  __int64 v342; // r8
  __int64 v343; // rcx
  __int64 v344; // rcx
  LARGE_INTEGER *v345; // rbx
  __int64 v346; // rax
  struct tagTHREADINFO *v347; // rbx
  struct tagTHREADINFO **v348; // rax
  __int64 v349; // rdx
  __int64 v350; // rcx
  PVOID v351; // rax
  __int64 v352; // rdx
  __int64 v353; // rcx
  unsigned int v354; // r9d
  __int64 v355; // r8
  __int64 v356; // rdx
  __int64 v357; // rcx
  PERESOURCE *v358; // rbx
  __int64 v359; // r8
  __int64 v360; // rdx
  __int64 v361; // rcx
  __int64 v362; // r8
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 *v366; // r14
  __int64 v367; // rax
  __int64 v368; // rdx
  __int64 v369; // rcx
  PERESOURCE *v370; // rdi
  __int64 v371; // r8
  __int64 v372; // rcx
  __int64 v373; // rcx
  LARGE_INTEGER *v374; // rbx
  __int64 v375; // rax
  struct tagTHREADINFO *v376; // rbx
  struct tagTHREADINFO **v377; // rax
  __int64 v378; // rdx
  __int64 v379; // rcx
  PVOID v380; // rax
  __int64 v381; // rdx
  __int64 v382; // rcx
  unsigned int v383; // r9d
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r8
  __int64 v387; // rdx
  __int64 v388; // rcx
  PERESOURCE *v389; // rbx
  __int64 v390; // r8
  __int64 v391; // rdx
  __int64 v392; // rcx
  __int64 v393; // r8
  __int64 v394; // rdx
  __int64 v395; // rcx
  __int64 v396; // r8
  __int64 *v397; // r14
  __int64 v398; // rax
  __int64 v399; // rdx
  __int64 v400; // rcx
  PERESOURCE *v401; // rdi
  __int64 v402; // r8
  __int64 v403; // rcx
  __int64 v404; // rcx
  __int64 v405; // rcx
  LARGE_INTEGER *v406; // rbx
  __int64 v407; // rax
  struct tagTHREADINFO *v408; // rbx
  struct tagTHREADINFO **v409; // rax
  __int64 v410; // rdx
  __int64 v411; // rcx
  PVOID v412; // rax
  __int64 v413; // rdx
  __int64 v414; // rcx
  unsigned int v415; // r9d
  __int64 v416; // r8
  __int64 v417; // rdx
  __int64 v418; // rcx
  PERESOURCE *v419; // rbx
  __int64 v420; // r8
  __int64 v421; // rdx
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // rdx
  __int64 v425; // rcx
  __int64 v426; // r8
  __int64 v427; // rax
  __int64 v428; // rdx
  __int64 v429; // rcx
  PERESOURCE *v430; // rdi
  __int64 v431; // r8
  __int64 *v432; // r14
  enum POWER_MONITOR_REQUEST_REASON v433; // ecx
  __int64 v434; // rcx
  __int64 v435; // rcx
  LARGE_INTEGER *v436; // rbx
  __int64 v437; // rax
  struct tagTHREADINFO *v438; // rbx
  struct tagTHREADINFO **v439; // rax
  __int64 v440; // rdx
  __int64 v441; // rcx
  PVOID v442; // rax
  __int64 v443; // rdx
  __int64 v444; // rcx
  unsigned int v445; // r9d
  __int64 v446; // r8
  __int64 v447; // rdx
  __int64 v448; // rcx
  PERESOURCE *v449; // rbx
  __int64 v450; // r8
  __int64 v451; // rdx
  __int64 v452; // rcx
  __int64 v453; // r8
  __int64 v454; // rdx
  __int64 v455; // rcx
  __int64 v456; // r8
  __int64 *v457; // r14
  __int64 v458; // rax
  __int64 v459; // rdx
  __int64 v460; // rcx
  PERESOURCE *v461; // rdi
  __int64 v462; // r8
  __int64 v463; // rcx
  __int64 v464; // rcx
  LARGE_INTEGER *v465; // rbx
  __int64 v466; // rax
  struct tagTHREADINFO *v467; // rbx
  struct tagTHREADINFO **v468; // rax
  __int64 v469; // rdx
  __int64 v470; // rcx
  PVOID v471; // rax
  __int64 v472; // rdx
  __int64 v473; // rcx
  unsigned int v474; // r9d
  __int64 v475; // r8
  __int64 v476; // rdx
  __int64 v477; // rcx
  PERESOURCE *v478; // rbx
  __int64 v479; // r8
  __int64 v480; // rdx
  __int64 v481; // rcx
  __int64 v482; // r8
  __int64 v483; // rdx
  __int64 v484; // rcx
  __int64 v485; // r8
  __int64 *v486; // r14
  __int64 v487; // rax
  __int64 v488; // rdx
  __int64 v489; // rcx
  PERESOURCE *v490; // rdi
  __int64 v491; // r8
  __int64 v492; // rcx
  __int64 v493; // rcx
  LARGE_INTEGER *v494; // rbx
  __int64 v495; // rax
  struct tagTHREADINFO *v496; // rbx
  struct tagTHREADINFO **v497; // rax
  __int64 v498; // rdx
  __int64 v499; // rcx
  PVOID v500; // rax
  __int64 v501; // rdx
  __int64 v502; // rcx
  unsigned int v503; // r9d
  __int64 v504; // r8
  __int64 v505; // rdx
  __int64 v506; // rcx
  PERESOURCE *v507; // rbx
  __int64 v508; // r8
  __int64 v509; // rdx
  __int64 v510; // rcx
  __int64 v511; // r8
  __int64 v512; // rdx
  __int64 v513; // rcx
  __int64 v514; // r8
  __int64 *v515; // r14
  __int64 v516; // rax
  __int64 v517; // rdx
  __int64 v518; // rcx
  PERESOURCE *v519; // rdi
  __int64 v520; // r8
  __int64 v521; // rcx
  __int64 v522; // rcx
  LARGE_INTEGER *v523; // rbx
  __int64 v524; // rax
  struct tagTHREADINFO *v525; // rbx
  struct tagTHREADINFO **v526; // rax
  __int64 v527; // rdx
  __int64 v528; // rcx
  PVOID v529; // rax
  __int64 v530; // rdx
  __int64 v531; // rcx
  unsigned int v532; // r9d
  __int64 v533; // r8
  __int64 v534; // rdx
  __int64 v535; // rcx
  PERESOURCE *v536; // rbx
  __int64 v537; // r8
  __int64 v538; // rdx
  __int64 v539; // rcx
  __int64 v540; // r8
  __int64 v541; // rdx
  __int64 v542; // rcx
  __int64 v543; // r8
  __int64 *v544; // r14
  __int64 v545; // rax
  __int64 v546; // rdx
  __int64 v547; // rcx
  PERESOURCE *v548; // rdi
  __int64 v549; // r8
  __int64 v550; // rcx
  __int64 v551; // rcx
  LARGE_INTEGER *v552; // rbx
  __int64 v553; // rax
  struct tagTHREADINFO *v554; // rbx
  struct tagTHREADINFO **v555; // rax
  __int64 v556; // rdx
  __int64 v557; // rcx
  PVOID v558; // rax
  __int64 v559; // rdx
  __int64 v560; // rcx
  unsigned int v561; // r9d
  __int64 v562; // r8
  __int64 v563; // rdx
  __int64 v564; // rcx
  PERESOURCE *v565; // rbx
  __int64 v566; // r8
  __int64 v567; // rdx
  __int64 v568; // rcx
  __int64 v569; // r8
  __int64 v570; // rdx
  __int64 v571; // rcx
  __int64 v572; // r8
  __int64 *v573; // r14
  __int64 v574; // rax
  __int64 v575; // rdx
  __int64 v576; // rcx
  PERESOURCE *v577; // rdi
  __int64 v578; // r8
  __int64 v579; // rcx
  __int64 v580; // rcx
  LARGE_INTEGER *v581; // rbx
  __int64 v582; // rax
  struct tagTHREADINFO *v583; // rbx
  struct tagTHREADINFO **v584; // rax
  __int64 v585; // rdx
  __int64 v586; // rcx
  PVOID v587; // rax
  __int64 v588; // rdx
  __int64 v589; // rcx
  unsigned int v590; // r9d
  __int64 v591; // r8
  __int64 v592; // rdx
  __int64 v593; // rcx
  PERESOURCE *v594; // rbx
  __int64 v595; // r8
  __int64 v596; // rdx
  __int64 v597; // rcx
  __int64 v598; // r8
  __int64 v599; // rdx
  __int64 v600; // rcx
  __int64 v601; // r8
  __int64 v602; // rax
  __int64 v603; // rdx
  __int64 v604; // rcx
  PERESOURCE *v605; // rdi
  __int64 v606; // r8
  __int64 *v607; // r14
  __int64 v608; // rcx
  __int64 v609; // rcx
  LARGE_INTEGER *v610; // rbx
  __int64 v611; // rax
  struct tagTHREADINFO *v612; // rbx
  struct tagTHREADINFO **v613; // rax
  __int64 v614; // rdx
  __int64 v615; // rcx
  PVOID v616; // rax
  __int64 v617; // rdx
  __int64 v618; // rcx
  unsigned int v619; // r9d
  __int64 v620; // rdx
  __int64 v621; // r8
  __int64 v622; // rdx
  __int64 v623; // rcx
  PERESOURCE *v624; // rbx
  __int64 v625; // r8
  __int64 v626; // rdx
  __int64 v627; // rcx
  __int64 v628; // r8
  __int64 v629; // rdx
  __int64 v630; // rcx
  __int64 v631; // r8
  __int64 *v632; // r14
  __int64 v633; // rax
  __int64 v634; // rdx
  __int64 v635; // rcx
  PERESOURCE *v636; // rdi
  __int64 v637; // r8
  __int64 v638; // rcx
  LARGE_INTEGER *v639; // rbx
  __int64 v640; // rax
  struct tagTHREADINFO *v641; // rbx
  struct tagTHREADINFO **v642; // rax
  __int64 v643; // rdx
  __int64 v644; // rcx
  PVOID v645; // rax
  __int64 v646; // rdx
  __int64 v647; // rcx
  unsigned int v648; // r9d
  __int64 v649; // r8
  __int64 v650; // rdx
  __int64 v651; // rcx
  PERESOURCE *v652; // rbx
  __int64 v653; // r8
  __int64 v654; // rdx
  __int64 v655; // rcx
  __int64 v656; // r8
  __int64 v657; // rdx
  __int64 v658; // rcx
  __int64 v659; // r8
  __int64 *v660; // r14
  __int64 v661; // rax
  __int64 v662; // rdx
  __int64 v663; // rcx
  PERESOURCE *v664; // rdi
  __int64 v665; // r8
  unsigned int v666; // [rsp+40h] [rbp-C0h]
  bool v668; // [rsp+50h] [rbp-B0h] BYREF
  char v669; // [rsp+51h] [rbp-AFh]
  __int64 v670; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v671; // [rsp+60h] [rbp-A0h]
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
  v666 = 0;
  v670 = 0LL;
  v671 = 0LL;
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
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v725 = v745;
            v811 = &v725;
            v812 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
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
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v737 = v745;
          v814 = &v737;
          v815 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v813);
          v96 = dword_1C020CB50;
        }
        if ( v96 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v672 = v745;
          v817 = &v672;
          v818 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v816);
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
    v197 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)v7;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)v7 )
      v197 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
    if ( v197 )
    {
      v226 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)v7 )
        v226 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
      if ( v226 )
      {
        v255 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)v7;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)v7 )
          v255 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
        if ( v255 )
        {
          v284 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)v7;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)v7 )
            v284 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
          if ( v284 )
          {
            v314 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
              v314 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
            if ( !v314 )
            {
              v316 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v316 )
                v316[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v776.Data1 = 0LL;
              *(_QWORD *)v776.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v775 = 1;
                v317 = PsGetCurrentThreadWin32Thread(v315);
                v774 = v317;
                if ( v317 && (*(int *)(v317 + 24) > 0 || *(_DWORD *)(v774 + 48)) )
                {
                  EtwActivityIdControl(3u, &v776);
                  if ( dword_1C020CB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                    {
                      v701 = v775;
                      v901 = &v701;
                      v902 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v776, 0LL, 3u, &v900);
                    }
                  }
                }
              }
              else
              {
                v774 = 0LL;
              }
              v318 = 0LL;
              while ( 1 )
              {
                v319 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v319 )
                  v318 = *v319;
                v322 = (PVOID)PsGetCurrentProcess(v321, v320);
                if ( v322 )
                {
                  if ( v322 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v324, v323) == gpepCSRSS
                  && v318 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v318 == gptiRit )
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
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v702 = v775;
                    v904 = &v702;
                    v905 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v776, 0LL, 3u, &v903);
                    v325 = dword_1C020CB50;
                  }
                  if ( v325 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v703 = v775;
                    v907 = &v703;
                    v908 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v776, 0LL, 3u, &v906);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v318;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v329 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v326);
                if ( v329 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v328, v327, v330);
                if ( ExIsResourceAcquiredExclusiveLite(*v329) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v332, v331, v333);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v329);
                v337 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v337[2];
                    v338 = *v337;
                    v337[2] = 0LL;
                    if ( !*(_DWORD *)(v338 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v335, v334, v336);
                    v341 = (PERESOURCE *)GetDomainLockRef(12LL, v334, v336);
                    if ( v341 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v340, v339, v342);
                    ExReleaseResourceAndLeaveCriticalRegion(*v341);
                    HMUnlockObject(*v337);
                    tagDomLock::LockExclusive(v341);
                    v337 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v329);
              }
              dword_1C0212790 = v7[4];
              goto LABEL_71;
            }
            v343 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
              v343 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
            if ( !v343 )
            {
              v345 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v345 )
                v345[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v779.Data1 = 0LL;
              *(_QWORD *)v779.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v778 = 1;
                v346 = PsGetCurrentThreadWin32Thread(v344);
                v777 = v346;
                if ( v346 && (*(int *)(v346 + 24) > 0 || *(_DWORD *)(v777 + 48)) )
                {
                  EtwActivityIdControl(3u, &v779);
                  if ( dword_1C020CB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                    {
                      v704 = v778;
                      v910 = &v704;
                      v911 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v779, 0LL, 3u, &v909);
                    }
                  }
                }
              }
              else
              {
                v777 = 0LL;
              }
              v347 = 0LL;
              while ( 1 )
              {
                v348 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v348 )
                  v347 = *v348;
                v351 = (PVOID)PsGetCurrentProcess(v350, v349);
                if ( v351 )
                {
                  if ( v351 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v353, v352) == gpepCSRSS
                  && v347 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v347 == gptiRit )
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
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v705 = v778;
                    v913 = &v705;
                    v914 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v779, 0LL, 3u, &v912);
                    v354 = dword_1C020CB50;
                  }
                  if ( v354 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v706 = v778;
                    v916 = &v706;
                    v917 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v779, 0LL, 3u, &v915);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v347;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v358 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v355);
                if ( v358 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v357, v356, v359);
                if ( ExIsResourceAcquiredExclusiveLite(*v358) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v361, v360, v362);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v358);
                v366 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v366[2];
                    v367 = *v366;
                    v366[2] = 0LL;
                    if ( !*(_DWORD *)(v367 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v364, v363, v365);
                    v370 = (PERESOURCE *)GetDomainLockRef(12LL, v363, v365);
                    if ( v370 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v369, v368, v371);
                    ExReleaseResourceAndLeaveCriticalRegion(*v370);
                    HMUnlockObject(*v366);
                    tagDomLock::LockExclusive(v370);
                    v366 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v358);
              }
              dword_1C0212788 = v7[4];
              goto LABEL_71;
            }
            v372 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)v7 )
              v372 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)v7 + 1);
            if ( !v372 )
            {
              v374 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v374 )
                v374[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v782.Data1 = 0LL;
              *(_QWORD *)v782.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v781 = 1;
                v375 = PsGetCurrentThreadWin32Thread(v373);
                v780 = v375;
                if ( v375 && (*(int *)(v375 + 24) > 0 || *(_DWORD *)(v780 + 48)) )
                {
                  EtwActivityIdControl(3u, &v782);
                  if ( dword_1C020CB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                    {
                      v707 = v781;
                      v919 = &v707;
                      v920 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v782, 0LL, 3u, &v918);
                    }
                  }
                }
              }
              else
              {
                v780 = 0LL;
              }
              v376 = 0LL;
              while ( 1 )
              {
                v377 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v377 )
                  v376 = *v377;
                v380 = (PVOID)PsGetCurrentProcess(v379, v378);
                if ( v380 )
                {
                  if ( v380 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v382, v381) == gpepCSRSS
                  && v376 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v376 == gptiRit )
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
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v708 = v781;
                    v922 = &v708;
                    v923 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v782, 0LL, 3u, &v921);
                    v383 = dword_1C020CB50;
                  }
                  if ( v383 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v709 = v781;
                    v925 = &v709;
                    v926 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v782, 0LL, 3u, &v924);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v376;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v389 = (PERESOURCE *)GetDomainLockRef(12LL, v384, v386);
                if ( v389 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v388, v387, v390);
                if ( ExIsResourceAcquiredExclusiveLite(*v389) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v392, v391, v393);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v389);
                v397 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v397[2];
                    v398 = *v397;
                    v397[2] = 0LL;
                    if ( !*(_DWORD *)(v398 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v395, v394, v396);
                    v401 = (PERESOURCE *)GetDomainLockRef(12LL, v394, v396);
                    if ( v401 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v400, v399, v402);
                    ExReleaseResourceAndLeaveCriticalRegion(*v401);
                    HMUnlockObject(*v397);
                    tagDomLock::LockExclusive(v401);
                    v397 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v389);
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v385, v384, v386);
              dword_1C0212798 = v7[4];
              goto LABEL_71;
            }
            v403 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)v7 )
              v403 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)v7 + 1);
            if ( !v403 )
              goto LABEL_1102;
            v403 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)v7 )
              v403 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)v7 + 1);
            if ( v403 )
            {
              v404 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)v7;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)v7 )
                v404 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)v7 + 1);
              if ( v404 )
              {
                v434 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)v7 )
                  v434 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)v7 + 1);
                if ( !v434 )
                {
                  v436 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v436 )
                    v436[1] = KeQueryPerformanceCounter(0LL);
                  *(_QWORD *)&v788.Data1 = 0LL;
                  *(_QWORD *)v788.Data4 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v787 = 1;
                    v437 = PsGetCurrentThreadWin32Thread(v435);
                    v786 = v437;
                    if ( v437 && (*(int *)(v437 + 24) > 0 || *(_DWORD *)(v786 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v788);
                      if ( dword_1C020CB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                        {
                          v713 = v787;
                          v937 = &v713;
                          v938 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v788, 0LL, 3u, &v936);
                        }
                      }
                    }
                  }
                  else
                  {
                    v786 = 0LL;
                  }
                  v438 = 0LL;
                  while ( 1 )
                  {
                    v439 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v439 )
                      v438 = *v439;
                    v442 = (PVOID)PsGetCurrentProcess(v441, v440);
                    if ( v442 )
                    {
                      if ( v442 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v444, v443) == gpepCSRSS
                      && v438 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v438 == gptiRit )
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
                    if ( dword_1C020CB50 > 6u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                      {
                        v714 = v787;
                        v940 = &v714;
                        v941 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v788, 0LL, 3u, &v939);
                        v445 = dword_1C020CB50;
                      }
                      if ( v445 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                      {
                        v715 = v787;
                        v943 = &v715;
                        v944 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v788, 0LL, 3u, &v942);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v438;
                  gbValidateHandleForIL = 1;
                  if ( IsValidGuiThreadContext() )
                  {
                    v449 = (PERESOURCE *)GetDomainLockRef(12LL, v156, v446);
                    if ( v449 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v448, v447, v450);
                    if ( ExIsResourceAcquiredExclusiveLite(*v449) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v452, v451, v453);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v449);
                    v457 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v457[2];
                        v458 = *v457;
                        v457[2] = 0LL;
                        if ( !*(_DWORD *)(v458 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v455, v454, v456);
                        v461 = (PERESOURCE *)GetDomainLockRef(12LL, v454, v456);
                        if ( v461 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v460, v459, v462);
                        ExReleaseResourceAndLeaveCriticalRegion(*v461);
                        HMUnlockObject(*v457);
                        tagDomLock::LockExclusive(v461);
                        v457 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v7 = a4;
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v449);
                  }
                  LOBYTE(v6) = v7[4] != 0;
                  dword_1C02127FC = v6;
                  goto LABEL_296;
                }
                v463 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)v7 )
                  v463 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)v7 + 1);
                if ( !v463 )
                {
                  v465 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v465 )
                    v465[1] = KeQueryPerformanceCounter(0LL);
                  *(_QWORD *)&v791.Data1 = 0LL;
                  *(_QWORD *)v791.Data4 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v790 = 1;
                    v466 = PsGetCurrentThreadWin32Thread(v464);
                    v789 = v466;
                    if ( v466 && (*(int *)(v466 + 24) > 0 || *(_DWORD *)(v789 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v791);
                      if ( dword_1C020CB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                        {
                          v716 = v790;
                          v946 = &v716;
                          v947 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v791, 0LL, 3u, &v945);
                        }
                      }
                    }
                  }
                  else
                  {
                    v789 = 0LL;
                  }
                  v467 = 0LL;
                  while ( 1 )
                  {
                    v468 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v468 )
                      v467 = *v468;
                    v471 = (PVOID)PsGetCurrentProcess(v470, v469);
                    if ( v471 )
                    {
                      if ( v471 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v473, v472) == gpepCSRSS
                      && v467 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v467 == gptiRit )
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
                    if ( dword_1C020CB50 > 6u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                      {
                        v717 = v790;
                        v949 = &v717;
                        v950 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v791, 0LL, 3u, &v948);
                        v474 = dword_1C020CB50;
                      }
                      if ( v474 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                      {
                        v718 = v790;
                        v952 = &v718;
                        v953 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v791, 0LL, 3u, &v951);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v467;
                  gbValidateHandleForIL = 1;
                  if ( IsValidGuiThreadContext() )
                  {
                    v478 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v475);
                    if ( v478 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v477, v476, v479);
                    if ( ExIsResourceAcquiredExclusiveLite(*v478) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v481, v480, v482);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v478);
                    v486 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v486[2];
                        v487 = *v486;
                        v486[2] = 0LL;
                        if ( !*(_DWORD *)(v487 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v484, v483, v485);
                        v490 = (PERESOURCE *)GetDomainLockRef(12LL, v483, v485);
                        if ( v490 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v489, v488, v491);
                        ExReleaseResourceAndLeaveCriticalRegion(*v490);
                        HMUnlockObject(*v486);
                        tagDomLock::LockExclusive(v490);
                        v486 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v7 = a4;
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v478);
                  }
                  if ( !v7[4] )
                  {
                    dword_1C02127CC = 0;
                    goto LABEL_71;
                  }
                  if ( gbTtmEnabled )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v475);
                  dword_1C02127CC = 1;
                  LODWORD(v670) = 5;
                  v671 = 13LL;
                  goto LABEL_70;
                }
                v492 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)v7 )
                  v492 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)v7 + 1);
                if ( v492 )
                {
                  v521 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)v7;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
                    v521 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
                  if ( v521 )
                  {
                    v550 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)v7;
                    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
                      v550 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
                    if ( v550 )
                    {
                      v579 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)v7;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)v7 )
                        v579 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)v7 + 1);
                      if ( v579 )
                      {
                        v608 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)v7;
                        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)v7 )
                          v608 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)v7 + 1);
                        if ( v608 )
                          return 3221225473LL;
                        v610 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                        if ( v610 )
                          v610[1] = KeQueryPerformanceCounter(0LL);
                        *(_QWORD *)&v806.Data1 = 0LL;
                        *(_QWORD *)v806.Data4 = 0LL;
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                        {
                          v805 = 1;
                          v611 = PsGetCurrentThreadWin32Thread(v609);
                          v804 = v611;
                          if ( v611 && (*(int *)(v611 + 24) > 0 || *(_DWORD *)(v804 + 48)) )
                          {
                            EtwActivityIdControl(3u, &v806);
                            if ( dword_1C020CB50 > 6u )
                            {
                              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                              {
                                v731 = v805;
                                v991 = &v731;
                                v992 = 4LL;
                                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v806, 0LL, 3u, &v990);
                              }
                            }
                          }
                        }
                        else
                        {
                          v804 = 0LL;
                        }
                        v612 = 0LL;
                        while ( 1 )
                        {
                          v613 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v613 )
                            v612 = *v613;
                          v616 = (PVOID)PsGetCurrentProcess(v615, v614);
                          if ( v616 )
                          {
                            if ( v616 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess(v618, v617) == gpepCSRSS
                            && v612 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v612 == gptiRit )
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
                          if ( dword_1C020CB50 > 6u )
                          {
                            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                            {
                              v732 = v805;
                              v994 = &v732;
                              v995 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v806, 0LL, 3u, &v993);
                              v619 = dword_1C020CB50;
                            }
                            if ( v619 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                            {
                              v733 = v805;
                              v997 = &v733;
                              v998 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v806, 0LL, 3u, &v996);
                            }
                          }
                        }
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v612;
                        gbValidateHandleForIL = 1;
                        if ( IsValidGuiThreadContext() )
                        {
                          v624 = (PERESOURCE *)GetDomainLockRef(12LL, v620, v621);
                          if ( v624 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v623, v622, v625);
                          if ( ExIsResourceAcquiredExclusiveLite(*v624) == 1 )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v627, v626, v628);
                          ExEnterCriticalRegionAndAcquireResourceExclusive(*v624);
                          v632 = (__int64 *)gpducstulHead;
                          if ( gpducstulHead )
                          {
                            do
                            {
                              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v632[2];
                              v633 = *v632;
                              v632[2] = 0LL;
                              if ( !*(_DWORD *)(v633 + 8) )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v630, v629, v631);
                              v636 = (PERESOURCE *)GetDomainLockRef(12LL, v629, v631);
                              if ( v636 == (PERESOURCE *)&gDomainDummyLock )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v635, v634, v637);
                              ExReleaseResourceAndLeaveCriticalRegion(*v636);
                              HMUnlockObject(*v632);
                              tagDomLock::LockExclusive(v636);
                              v632 = (__int64 *)gpducstulHead;
                            }
                            while ( gpducstulHead );
                            v7 = a4;
                          }
                          ExReleaseResourceAndLeaveCriticalRegion(*v624);
                        }
                        CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(&v742);
                        dword_1C0212800 = v7[4] != 0;
                        UserLogError((unsigned int)(-(unsigned __int8)dword_1C0212800 - 2147482947));
                        CBaseInput::OnInputSuppressedValueChanged(v7[4] != 0);
                        ExReleaseResourceAndLeaveCriticalRegion(*v742);
                      }
                      else
                      {
                        if ( !v7[4] )
                          return 0LL;
                        v581 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                        if ( v581 )
                          v581[1] = KeQueryPerformanceCounter(0LL);
                        *(_QWORD *)&v803.Data1 = 0LL;
                        *(_QWORD *)v803.Data4 = 0LL;
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                        {
                          v802 = 1;
                          v582 = PsGetCurrentThreadWin32Thread(v580);
                          v801 = v582;
                          if ( v582 && (*(int *)(v582 + 24) > 0 || *(_DWORD *)(v801 + 48)) )
                          {
                            EtwActivityIdControl(3u, &v803);
                            if ( dword_1C020CB50 > 6u )
                            {
                              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                              {
                                v728 = v802;
                                v982 = &v728;
                                v983 = 4LL;
                                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v803, 0LL, 3u, &v981);
                              }
                            }
                          }
                        }
                        else
                        {
                          v801 = 0LL;
                        }
                        v583 = 0LL;
                        while ( 1 )
                        {
                          v584 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v584 )
                            v583 = *v584;
                          v587 = (PVOID)PsGetCurrentProcess(v586, v585);
                          if ( v587 )
                          {
                            if ( v587 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess(v589, v588) == gpepCSRSS
                            && v583 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v583 == gptiRit )
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
                          if ( dword_1C020CB50 > 6u )
                          {
                            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                            {
                              v729 = v802;
                              v985 = &v729;
                              v986 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v803, 0LL, 3u, &v984);
                              v590 = dword_1C020CB50;
                            }
                            if ( v590 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                            {
                              v730 = v802;
                              v988 = &v730;
                              v989 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v803, 0LL, 3u, &v987);
                            }
                          }
                        }
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v583;
                        gbValidateHandleForIL = 1;
                        if ( IsValidGuiThreadContext() )
                        {
                          v594 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v591);
                          if ( v594 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v593, v592, v595);
                          if ( ExIsResourceAcquiredExclusiveLite(*v594) == 1 )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v597, v596, v598);
                          ExEnterCriticalRegionAndAcquireResourceExclusive(*v594);
                          while ( 1 )
                          {
                            v607 = (__int64 *)gpducstulHead;
                            if ( !gpducstulHead )
                              break;
                            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                            v602 = *v607;
                            v607[2] = 0LL;
                            if ( !*(_DWORD *)(v602 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v600, v599, v601);
                            v605 = (PERESOURCE *)GetDomainLockRef(12LL, v599, v601);
                            if ( v605 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v604, v603, v606);
                            ExReleaseResourceAndLeaveCriticalRegion(*v605);
                            HMUnlockObject(*v607);
                            tagDomLock::LockExclusive(v605);
                          }
                          ExReleaseResourceAndLeaveCriticalRegion(*v594);
                        }
                        gdwUpdateKeyboard |= 2u;
                      }
                    }
                    else
                    {
                      v552 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                      if ( v552 )
                        v552[1] = KeQueryPerformanceCounter(0LL);
                      *(_QWORD *)&v800.Data1 = 0LL;
                      *(_QWORD *)v800.Data4 = 0LL;
                      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                      {
                        v799 = 1;
                        v553 = PsGetCurrentThreadWin32Thread(v551);
                        v798 = v553;
                        if ( v553 && (*(int *)(v553 + 24) > 0 || *(_DWORD *)(v798 + 48)) )
                        {
                          EtwActivityIdControl(3u, &v800);
                          if ( dword_1C020CB50 > 6u )
                          {
                            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                            {
                              v734 = v799;
                              v973 = &v734;
                              v974 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v800, 0LL, 3u, &v972);
                            }
                          }
                        }
                      }
                      else
                      {
                        v798 = 0LL;
                      }
                      v554 = 0LL;
                      while ( 1 )
                      {
                        v555 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                        if ( v555 )
                          v554 = *v555;
                        v558 = (PVOID)PsGetCurrentProcess(v557, v556);
                        if ( v558 )
                        {
                          if ( v558 == g_pepDwm )
                            break;
                        }
                        if ( (PVOID)PsGetCurrentProcess(v560, v559) == gpepCSRSS
                          && v554 != (struct tagTHREADINFO *)gptiTSRequest
                          || gbDITInHitTest != 1
                          || v554 == gptiRit )
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
                        if ( dword_1C020CB50 > 6u )
                        {
                          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                          {
                            v726 = v799;
                            v976 = &v726;
                            v977 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v800, 0LL, 3u, &v975);
                            v561 = dword_1C020CB50;
                          }
                          if ( v561 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                          {
                            v727 = v799;
                            v979 = &v727;
                            v980 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v800, 0LL, 3u, &v978);
                          }
                        }
                      }
                      EtwTraceAcquiredExclusiveUserCrit();
                      gptiCurrent = v554;
                      gbValidateHandleForIL = 1;
                      if ( IsValidGuiThreadContext() )
                      {
                        v565 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v562);
                        if ( v565 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v564, v563, v566);
                        if ( ExIsResourceAcquiredExclusiveLite(*v565) == 1 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v568, v567, v569);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(*v565);
                        v573 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          do
                          {
                            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v573[2];
                            v574 = *v573;
                            v573[2] = 0LL;
                            if ( !*(_DWORD *)(v574 + 8) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v571, v570, v572);
                            v577 = (PERESOURCE *)GetDomainLockRef(12LL, v570, v572);
                            if ( v577 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v576, v575, v578);
                            ExReleaseResourceAndLeaveCriticalRegion(*v577);
                            HMUnlockObject(*v573);
                            tagDomLock::LockExclusive(v577);
                            v573 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                          v7 = a4;
                        }
                        ExReleaseResourceAndLeaveCriticalRegion(*v565);
                      }
                      dword_1C02127F8 = v7[4];
                    }
                  }
                  else
                  {
                    v523 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                    if ( v523 )
                      v523[1] = KeQueryPerformanceCounter(0LL);
                    *(_QWORD *)&v797.Data1 = 0LL;
                    *(_QWORD *)v797.Data4 = 0LL;
                    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                    {
                      v796 = 1;
                      v524 = PsGetCurrentThreadWin32Thread(v522);
                      v795 = v524;
                      if ( v524 && (*(int *)(v524 + 24) > 0 || *(_DWORD *)(v795 + 48)) )
                      {
                        EtwActivityIdControl(3u, &v797);
                        if ( dword_1C020CB50 > 6u )
                        {
                          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                          {
                            v722 = v796;
                            v964 = &v722;
                            v965 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v797, 0LL, 3u, &v963);
                          }
                        }
                      }
                    }
                    else
                    {
                      v795 = 0LL;
                    }
                    v525 = 0LL;
                    while ( 1 )
                    {
                      v526 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                      if ( v526 )
                        v525 = *v526;
                      v529 = (PVOID)PsGetCurrentProcess(v528, v527);
                      if ( v529 )
                      {
                        if ( v529 == g_pepDwm )
                          break;
                      }
                      if ( (PVOID)PsGetCurrentProcess(v531, v530) == gpepCSRSS
                        && v525 != (struct tagTHREADINFO *)gptiTSRequest
                        || gbDITInHitTest != 1
                        || v525 == gptiRit )
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
                      if ( dword_1C020CB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                        {
                          v723 = v796;
                          v967 = &v723;
                          v968 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v797, 0LL, 3u, &v966);
                          v532 = dword_1C020CB50;
                        }
                        if ( v532 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                        {
                          v724 = v796;
                          v970 = &v724;
                          v971 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v797, 0LL, 3u, &v969);
                        }
                      }
                    }
                    EtwTraceAcquiredExclusiveUserCrit();
                    gptiCurrent = v525;
                    gbValidateHandleForIL = 1;
                    if ( IsValidGuiThreadContext() )
                    {
                      v536 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v533);
                      if ( v536 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v535, v534, v537);
                      if ( ExIsResourceAcquiredExclusiveLite(*v536) == 1 )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v539, v538, v540);
                      ExEnterCriticalRegionAndAcquireResourceExclusive(*v536);
                      v544 = (__int64 *)gpducstulHead;
                      if ( gpducstulHead )
                      {
                        do
                        {
                          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v544[2];
                          v545 = *v544;
                          v544[2] = 0LL;
                          if ( !*(_DWORD *)(v545 + 8) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v542, v541, v543);
                          v548 = (PERESOURCE *)GetDomainLockRef(12LL, v541, v543);
                          if ( v548 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v547, v546, v549);
                          ExReleaseResourceAndLeaveCriticalRegion(*v548);
                          HMUnlockObject(*v544);
                          tagDomLock::LockExclusive(v548);
                          v544 = (__int64 *)gpducstulHead;
                        }
                        while ( gpducstulHead );
                        v7 = a4;
                      }
                      ExReleaseResourceAndLeaveCriticalRegion(*v536);
                    }
                    dword_1C021279C = v7[4];
                  }
                }
                else
                {
                  v494 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v494 )
                    v494[1] = KeQueryPerformanceCounter(0LL);
                  *(_QWORD *)&v794.Data1 = 0LL;
                  *(_QWORD *)v794.Data4 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v793 = 1;
                    v495 = PsGetCurrentThreadWin32Thread(v493);
                    v792 = v495;
                    if ( v495 && (*(int *)(v495 + 24) > 0 || *(_DWORD *)(v792 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v794);
                      if ( dword_1C020CB50 > 6u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                        {
                          v719 = v793;
                          v955 = &v719;
                          v956 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v794, 0LL, 3u, &v954);
                        }
                      }
                    }
                  }
                  else
                  {
                    v792 = 0LL;
                  }
                  v496 = 0LL;
                  while ( 1 )
                  {
                    v497 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v497 )
                      v496 = *v497;
                    v500 = (PVOID)PsGetCurrentProcess(v499, v498);
                    if ( v500 )
                    {
                      if ( v500 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v502, v501) == gpepCSRSS
                      && v496 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v496 == gptiRit )
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
                    if ( dword_1C020CB50 > 6u )
                    {
                      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                      {
                        v720 = v793;
                        v958 = &v720;
                        v959 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v794, 0LL, 3u, &v957);
                        v503 = dword_1C020CB50;
                      }
                      if ( v503 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                      {
                        v721 = v793;
                        v961 = &v721;
                        v962 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v794, 0LL, 3u, &v960);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v496;
                  gbValidateHandleForIL = 1;
                  if ( IsValidGuiThreadContext() )
                  {
                    v507 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v504);
                    if ( v507 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v506, v505, v508);
                    if ( ExIsResourceAcquiredExclusiveLite(*v507) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v510, v509, v511);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v507);
                    v515 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      do
                      {
                        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v515[2];
                        v516 = *v515;
                        v515[2] = 0LL;
                        if ( !*(_DWORD *)(v516 + 8) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v513, v512, v514);
                        v519 = (PERESOURCE *)GetDomainLockRef(12LL, v512, v514);
                        if ( v519 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v518, v517, v520);
                        ExReleaseResourceAndLeaveCriticalRegion(*v519);
                        HMUnlockObject(*v515);
                        tagDomLock::LockExclusive(v519);
                        v515 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                      v7 = a4;
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v507);
                  }
                  dword_1C02127F4 = v7[4];
                }
LABEL_71:
                UserSessionSwitchLeaveCrit(v55, v54);
                return 0LL;
              }
              v406 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v406 )
                v406[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v785.Data1 = 0LL;
              *(_QWORD *)v785.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v784 = 1;
                v407 = PsGetCurrentThreadWin32Thread(v405);
                v783 = v407;
                if ( v407 && (*(int *)(v407 + 24) > 0 || *(_DWORD *)(v783 + 48)) )
                {
                  EtwActivityIdControl(3u, &v785);
                  if ( dword_1C020CB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                    {
                      v710 = v784;
                      v928 = &v710;
                      v929 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v785, 0LL, 3u, &v927);
                    }
                  }
                }
              }
              else
              {
                v783 = 0LL;
              }
              v408 = 0LL;
              while ( 1 )
              {
                v409 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v409 )
                  v408 = *v409;
                v412 = (PVOID)PsGetCurrentProcess(v411, v410);
                if ( v412 )
                {
                  if ( v412 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v414, v413) == gpepCSRSS
                  && v408 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v408 == gptiRit )
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
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v711 = v784;
                    v931 = &v711;
                    v932 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v785, 0LL, 3u, &v930);
                    v415 = dword_1C020CB50;
                  }
                  if ( v415 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v712 = v784;
                    v934 = &v712;
                    v935 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v785, 0LL, 3u, &v933);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v408;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v419 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v416);
                if ( v419 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v418, v417, v420);
                if ( ExIsResourceAcquiredExclusiveLite(*v419) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v422, v421, v423);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v419);
                while ( 1 )
                {
                  v432 = (__int64 *)gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  v427 = *v432;
                  v432[2] = 0LL;
                  if ( !*(_DWORD *)(v427 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v425, v424, v426);
                  v430 = (PERESOURCE *)GetDomainLockRef(12LL, v424, v426);
                  if ( v430 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v429, v428, v431);
                  ExReleaseResourceAndLeaveCriticalRegion(*v430);
                  HMUnlockObject(*v432);
                  tagDomLock::LockExclusive(v430);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v419);
              }
              if ( gbTtmEnabled || gProtocolType || dword_1C02127D8 )
                goto LABEL_71;
              v433 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_1102:
              v639 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v403);
              if ( v639 )
                v639[1] = KeQueryPerformanceCounter(0LL);
              *(_QWORD *)&v809.Data1 = 0LL;
              *(_QWORD *)v809.Data4 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v808 = 1;
                v640 = PsGetCurrentThreadWin32Thread(v638);
                v807 = v640;
                if ( v640 && (*(int *)(v640 + 24) > 0 || *(_DWORD *)(v807 + 48)) )
                {
                  EtwActivityIdControl(3u, &v809);
                  if ( dword_1C020CB50 > 6u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                    {
                      v738 = v808;
                      v1000 = &v738;
                      v1001 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v809, 0LL, 3u, &v999);
                    }
                  }
                }
              }
              else
              {
                v807 = 0LL;
              }
              v641 = 0LL;
              while ( 1 )
              {
                v642 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v642 )
                  v641 = *v642;
                v645 = (PVOID)PsGetCurrentProcess(v644, v643);
                if ( v645 )
                {
                  if ( v645 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v647, v646) == gpepCSRSS
                  && v641 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v641 == gptiRit )
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
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v735 = v808;
                    v1003 = &v735;
                    v1004 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v809, 0LL, 3u, &v1002);
                    v648 = dword_1C020CB50;
                  }
                  if ( v648 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v736 = v808;
                    v1006 = &v736;
                    v1007 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v809, 0LL, 3u, &v1005);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v641;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                v652 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v649);
                if ( v652 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v651, v650, v653);
                if ( ExIsResourceAcquiredExclusiveLite(*v652) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v655, v654, v656);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v652);
                v660 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v660[2];
                    v661 = *v660;
                    v660[2] = 0LL;
                    if ( !*(_DWORD *)(v661 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v658, v657, v659);
                    v664 = (PERESOURCE *)GetDomainLockRef(12LL, v657, v659);
                    if ( v664 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v663, v662, v665);
                    ExReleaseResourceAndLeaveCriticalRegion(*v664);
                    HMUnlockObject(*v660);
                    tagDomLock::LockExclusive(v664);
                    v660 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v7 = a4;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v652);
              }
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C02127D8 = v7[4] == 0;
              v55 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)v7;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)v7 )
                v55 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)v7 + 1);
              if ( !v55 || gbTtmEnabled || gProtocolType )
                goto LABEL_71;
              v433 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v433);
            goto LABEL_71;
          }
          v286 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v286 )
            v286[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&v773.Data1 = 0LL;
          *(_QWORD *)v773.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v772 = 1;
            v287 = PsGetCurrentThreadWin32Thread(v285);
            v771 = v287;
            if ( v287 && (*(int *)(v287 + 24) > 0 || *(_DWORD *)(v771 + 48)) )
            {
              EtwActivityIdControl(3u, &v773);
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v698 = v772;
                  v892 = &v698;
                  v893 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v773, 0LL, 3u, &v891);
                }
              }
            }
          }
          else
          {
            v771 = 0LL;
          }
          v288 = 0LL;
          while ( 1 )
          {
            v289 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v289 )
              v288 = *v289;
            v292 = (PVOID)PsGetCurrentProcess(v291, v290);
            if ( v292 )
            {
              if ( v292 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v294, v293) == gpepCSRSS && v288 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v288 == gptiRit )
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
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v699 = v772;
                v895 = &v699;
                v896 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v773, 0LL, 3u, &v894);
                v295 = dword_1C020CB50;
              }
              if ( v295 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v700 = v772;
                v898 = &v700;
                v899 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v773, 0LL, 3u, &v897);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v288;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            v300 = (PERESOURCE *)GetDomainLockRef(12LL, v296, v297);
            if ( v300 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v299, v298, v301);
            if ( ExIsResourceAcquiredExclusiveLite(*v300) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v303, v302, v304);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v300);
            v308 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v308[2];
                v309 = *v308;
                v308[2] = 0LL;
                if ( !*(_DWORD *)(v309 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v306, v305, v307);
                v312 = (PERESOURCE *)GetDomainLockRef(12LL, v305, v307);
                if ( v312 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v311, v310, v313);
                ExReleaseResourceAndLeaveCriticalRegion(*v312);
                HMUnlockObject(*v308);
                tagDomLock::LockExclusive(v312);
                v308 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = a4;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v300);
          }
          giDimTimeOutMs = 1000 * v7[4];
        }
        else
        {
          v257 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v257 )
            v257[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&v770.Data1 = 0LL;
          *(_QWORD *)v770.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v769 = 1;
            v258 = PsGetCurrentThreadWin32Thread(v256);
            v768 = v258;
            if ( v258 && (*(int *)(v258 + 24) > 0 || *(_DWORD *)(v768 + 48)) )
            {
              EtwActivityIdControl(3u, &v770);
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v695 = v769;
                  v883 = &v695;
                  v884 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v770, 0LL, 3u, &v882);
                }
              }
            }
          }
          else
          {
            v768 = 0LL;
          }
          v259 = 0LL;
          while ( 1 )
          {
            v260 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v260 )
              v259 = *v260;
            v263 = (PVOID)PsGetCurrentProcess(v262, v261);
            if ( v263 )
            {
              if ( v263 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v265, v264) == gpepCSRSS && v259 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v259 == gptiRit )
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
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v696 = v769;
                v886 = &v696;
                v887 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v770, 0LL, 3u, &v885);
                v266 = dword_1C020CB50;
              }
              if ( v266 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v697 = v769;
                v889 = &v697;
                v890 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v770, 0LL, 3u, &v888);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v259;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            v270 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v267);
            if ( v270 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v269, v268, v271);
            if ( ExIsResourceAcquiredExclusiveLite(*v270) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v273, v272, v274);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v270);
            v278 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v278[2];
                v279 = *v278;
                v278[2] = 0LL;
                if ( !*(_DWORD *)(v279 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v276, v275, v277);
                v282 = (PERESOURCE *)GetDomainLockRef(12LL, v275, v277);
                if ( v282 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v281, v280, v283);
                ExReleaseResourceAndLeaveCriticalRegion(*v282);
                HMUnlockObject(*v278);
                tagDomLock::LockExclusive(v282);
                v278 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = a4;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v270);
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
        v228 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
        if ( v228 )
          v228[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&v767.Data1 = 0LL;
        *(_QWORD *)v767.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v766 = 1;
          v229 = PsGetCurrentThreadWin32Thread(v227);
          v765 = v229;
          if ( v229 && (*(int *)(v229 + 24) > 0 || *(_DWORD *)(v765 + 48)) )
          {
            EtwActivityIdControl(3u, &v767);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v692 = v766;
                v874 = &v692;
                v875 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v767, 0LL, 3u, &v873);
              }
            }
          }
        }
        else
        {
          v765 = 0LL;
        }
        v230 = 0LL;
        while ( 1 )
        {
          v231 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v231 )
            v230 = *v231;
          v234 = (PVOID)PsGetCurrentProcess(v233, v232);
          if ( v234 )
          {
            if ( v234 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v236, v235) == gpepCSRSS && v230 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v230 == gptiRit )
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
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v693 = v766;
              v877 = &v693;
              v878 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v767, 0LL, 3u, &v876);
              v237 = dword_1C020CB50;
            }
            if ( v237 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v694 = v766;
              v880 = &v694;
              v881 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v767, 0LL, 3u, &v879);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v230;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          v241 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v238);
          if ( v241 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v240, v239, v242);
          if ( ExIsResourceAcquiredExclusiveLite(*v241) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v244, v243, v245);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v241);
          v249 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v249[2];
              v250 = *v249;
              v249[2] = 0LL;
              if ( !*(_DWORD *)(v250 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v247, v246, v248);
              v253 = (PERESOURCE *)GetDomainLockRef(12LL, v246, v248);
              if ( v253 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v252, v251, v254);
              ExReleaseResourceAndLeaveCriticalRegion(*v253);
              HMUnlockObject(*v249);
              tagDomLock::LockExclusive(v253);
              v249 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v7 = a4;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v241);
        }
        if ( !gProtocolType || !dword_1C021273C )
          goto LABEL_71;
        giPowerSessionActivityTimeOutMs = 1000 * v7[4];
      }
    }
    else
    {
      v199 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v199 )
        v199[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&v764.Data1 = 0LL;
      *(_QWORD *)v764.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v763 = 1;
        v200 = PsGetCurrentThreadWin32Thread(v198);
        v762 = v200;
        if ( v200 && (*(int *)(v200 + 24) > 0 || *(_DWORD *)(v762 + 48)) )
        {
          EtwActivityIdControl(3u, &v764);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v689 = v763;
              v865 = &v689;
              v866 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v764, 0LL, 3u, &v864);
            }
          }
        }
      }
      else
      {
        v762 = 0LL;
      }
      v201 = 0LL;
      while ( 1 )
      {
        v202 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v202 )
          v201 = *v202;
        v205 = (PVOID)PsGetCurrentProcess(v204, v203);
        if ( v205 )
        {
          if ( v205 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v207, v206) == gpepCSRSS && v201 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v201 == gptiRit )
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
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v690 = v763;
            v868 = &v690;
            v869 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v764, 0LL, 3u, &v867);
            v208 = dword_1C020CB50;
          }
          if ( v208 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v691 = v763;
            v871 = &v691;
            v872 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v764, 0LL, 3u, &v870);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v201;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v212 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v209);
        if ( v212 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v211, v210, v213);
        if ( ExIsResourceAcquiredExclusiveLite(*v212) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v215, v214, v216);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v212);
        v220 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v220[2];
            v221 = *v220;
            v220[2] = 0LL;
            if ( !*(_DWORD *)(v221 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v218, v217, v219);
            v224 = (PERESOURCE *)GetDomainLockRef(12LL, v217, v219);
            if ( v224 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v223, v222, v225);
            ExReleaseResourceAndLeaveCriticalRegion(*v224);
            HMUnlockObject(*v220);
            tagDomLock::LockExclusive(v224);
            v220 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v7 = a4;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v212);
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
    v669 = v42;
    v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v46 )
      v46[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&v761.Data1 = 0LL;
    *(_QWORD *)v761.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v760 = 1;
      v190 = PsGetCurrentThreadWin32Thread(v45);
      v759 = v190;
      if ( v190 && (*(int *)(v190 + 24) > 0 || *(_DWORD *)(v759 + 48)) )
      {
        EtwActivityIdControl(3u, &v761);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v686 = v760;
            v856 = &v686;
            v857 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v761, 0LL, 3u, &v855);
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
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v687 = v760;
          v859 = &v687;
          v860 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v761, 0LL, 3u, &v858);
          v191 = dword_1C020CB50;
        }
        if ( v191 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v688 = v760;
          v862 = &v688;
          v863 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v761, 0LL, 3u, &v861);
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
          v192 = *v68;
          v68[2] = 0LL;
          if ( !*(_DWORD *)(v192 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67);
          v195 = (PERESOURCE *)GetDomainLockRef(12LL, v65, v67);
          if ( v195 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v194, v193, v196);
          ExReleaseResourceAndLeaveCriticalRegion(*v195);
          HMUnlockObject(*v68);
          tagDomLock::LockExclusive(v195);
          v68 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v42 = v669;
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
        if ( dword_1C02127D0 )
        {
          LOBYTE(v54) = *(_BYTE *)gpbIgnoreSleepInput;
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v44);
          goto LABEL_71;
        }
        LODWORD(v670) = 4;
        v671 = v44;
LABEL_70:
        QueuePowerRequest(&v670, 0LL);
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
        v187 = PsGetCurrentThreadWin32Thread(v13);
        v756 = v187;
        if ( v187 && (*(int *)(v187 + 24) > 0 || *(_DWORD *)(v756 + 48)) )
        {
          EtwActivityIdControl(3u, &v758);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v683 = v757;
              v847 = &v683;
              v848 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v758, 0LL, 3u, &v846);
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
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v684 = v757;
            v850 = &v684;
            v851 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v758, 0LL, 3u, &v849);
            v188 = dword_1C020CB50;
          }
          if ( v188 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v685 = v757;
            v853 = &v685;
            v854 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v758, 0LL, 3u, &v852);
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
          v189 = *v41;
          v41[2] = 0LL;
          if ( !*(_DWORD *)(v189 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
          CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v741);
          HMUnlockObject(*v41);
          tagDomLock::LockExclusive((PERESOURCE *)v741);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
      }
      v24 = dword_1C0212778;
      v25 = dword_1C0212778 + v12;
      dword_1C0212778 += v12;
      if ( v24 == 1 )
      {
        v26 = v25 == 0;
        v27 = v25 < 0;
        if ( v25 )
        {
LABEL_31:
          v668 = !v27 && !v26;
          ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v668, 1LL, 0LL, &gSessionId, 0, 0);
          UserSessionSwitchLeaveCrit(v29, v28);
          if ( !v24 && v25 == 1 && dword_1C0212780 == 2 )
          {
            LODWORD(v670) = 4;
            v671 = 0LL;
            QueuePowerRequest(&v670, 0LL);
          }
          if ( v25 >= 0 )
            v6 = v25;
          *a6 = v6;
          return v666;
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
            LODWORD(v670) = 5;
            goto LABEL_112;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, a2, a3);
        }
        else if ( !v72 )
        {
          return v666;
        }
        LODWORD(v670) = 4;
LABEL_112:
        v671 = (int)v7[1];
        QueuePowerRequest(&v670, 0LL);
        return v666;
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
          v173 = PsGetCurrentThreadWin32Thread(v74);
          v753 = v173;
          if ( v173 && (*(int *)(v173 + 24) > 0 || *(_DWORD *)(v753 + 48)) )
          {
            EtwActivityIdControl(3u, &v755);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v680 = v754;
                v838 = &v680;
                v839 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v755, 0LL, 3u, &v837);
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
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v681 = v754;
              v841 = &v681;
              v842 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v755, 0LL, 3u, &v840);
              v174 = dword_1C020CB50;
            }
            if ( v174 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v682 = v754;
              v844 = &v682;
              v845 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v755, 0LL, 3u, &v843);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v76;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          v177 = (PERESOURCE *)GetDomainLockRef(12LL, v83, v85);
          if ( v177 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v176, v175, v178);
          if ( ExIsResourceAcquiredExclusiveLite(*v177) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v180, v179, v181);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v177);
          while ( 1 )
          {
            v186 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v185 = *v186;
            v186[2] = 0LL;
            if ( !*(_DWORD *)(v185 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v183, v182, v184);
            CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v740);
            HMUnlockObject(*v186);
            tagDomLock::LockExclusive((PERESOURCE *)v740);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v177);
          v7 = a4;
        }
        if ( gPowerTransitionsState )
          v666 = 255;
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
    v146 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v146 )
      v146[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&v752.Data1 = 0LL;
    *(_QWORD *)v752.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v751 = 1;
      v147 = PsGetCurrentThreadWin32Thread(v145);
      v750 = v147;
      if ( v147 && (*(int *)(v147 + 24) > 0 || *(_DWORD *)(v750 + 48)) )
      {
        EtwActivityIdControl(3u, &v752);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v677 = v751;
            v829 = &v677;
            v830 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v752, 0LL, 3u, &v828);
          }
        }
      }
    }
    else
    {
      v750 = 0LL;
    }
    v148 = 0LL;
    while ( 1 )
    {
      v149 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v149 )
        v148 = *v149;
      v152 = (PVOID)PsGetCurrentProcess(v151, v150);
      if ( v152 )
      {
        if ( v152 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v154, v153) == gpepCSRSS && v148 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v148 == gptiRit )
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
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v678 = v751;
          v832 = &v678;
          v833 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v752, 0LL, 3u, &v831);
          v155 = dword_1C020CB50;
        }
        if ( v155 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v679 = v751;
          v835 = &v679;
          v836 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v752, 0LL, 3u, &v834);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v148;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v160 = (PERESOURCE *)GetDomainLockRef(12LL, v156, v157);
      if ( v160 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v159, v158, v161);
      if ( ExIsResourceAcquiredExclusiveLite(*v160) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v163, v162, v164);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v160);
      while ( 1 )
      {
        v169 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v168 = *v169;
        v169[2] = 0LL;
        if ( !*(_DWORD *)(v168 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v166, v165, v167);
        CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v739);
        HMUnlockObject(*v169);
        tagDomLock::LockExclusive((PERESOURCE *)v739);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v160);
      v7 = a4;
    }
    dword_1C02127A4 = *v7;
    v170 = v7[1];
    dword_1C02127A8 = v7[1];
    dword_1C02127AC = v7[2];
    dword_1C02127B0 = v7[3];
    dword_1C02127B4 = v7[4];
    dword_1C02127B8 = v7[5];
    dword_1C02127BC = v7[6];
    dword_1C02127C0 = v7[7];
    if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v170 != -1 )
    {
      if ( qword_1C02122B0 )
      {
        LOBYTE(v170) = 1;
        v171 = qword_1C02122B0(v170, v7);
      }
      else
      {
        v171 = -1073741637;
      }
      v666 = v171;
      LOBYTE(v6) = v171 >= 0;
      gbPowerHighPrecisionBrightnessSupported = v6;
    }
    v172 = (unsigned int)dword_1C02127A4;
    dword_1C0212788 = dword_1C02127A4;
    dword_1C021278C = dword_1C02127A4;
    dword_1C0212790 = dword_1C02127B4;
    dword_1C0212794 = dword_1C02127B4;
    if ( dword_1C0212780 == 1 )
    {
      if ( dword_1C02127A0 == dword_1C02127A4 )
      {
LABEL_296:
        UserSessionSwitchLeaveCrit(v172, v156);
        return v666;
      }
      LODWORD(v670) = 11;
      v671 = 1LL;
      QueuePowerRequest(&v670, 0LL);
    }
    if ( dword_1C0212780 == 2 && dword_1C02127A0 != dword_1C02127B4 )
    {
      LODWORD(v670) = 11;
      v671 = 2LL;
      QueuePowerRequest(&v670, 0LL);
    }
    goto LABEL_296;
  }
  v117 = v116 - 1;
  if ( !v117 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v121 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v121 )
      v121[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v748 = 1;
      v122 = PsGetCurrentThreadWin32Thread(v120);
      v747 = v122;
      if ( v122 && (*(int *)(v122 + 24) > 0 || *(_DWORD *)(v747 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v674 = v748;
            v820 = &v674;
            v821 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &v819);
          }
        }
      }
    }
    else
    {
      v747 = 0LL;
    }
    v123 = 0LL;
    while ( 1 )
    {
      v124 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v124 )
        v123 = *v124;
      v127 = (PVOID)PsGetCurrentProcess(v126, v125);
      if ( v127 )
      {
        if ( v127 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v129, v128) == gpepCSRSS && v123 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v123 == gptiRit )
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
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v675 = v748;
          v823 = &v675;
          v824 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &pActivityId, 0LL, 3u, &v822);
          v130 = dword_1C020CB50;
        }
        if ( v130 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v676 = v748;
          v826 = &v676;
          v827 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &pActivityId, 0LL, 3u, &v825);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v123;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v134 = (PERESOURCE *)GetDomainLockRef(12LL, v54, v131);
      if ( v134 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v133, v132, v135);
      if ( ExIsResourceAcquiredExclusiveLite(*v134) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v137, v136, v138);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v134);
      while ( 1 )
      {
        v143 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v142 = *v143;
        v143[2] = 0LL;
        if ( !*(_DWORD *)(v142 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v140, v139, v141);
        CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v743);
        HMUnlockObject(*v143);
        tagDomLock::LockExclusive((PERESOURCE *)v743);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v134);
    }
    if ( !gWakeInProgress )
      goto LABEL_71;
    v144 = gWakeInProgressReason;
    gWakeInProgressReason = MonitorRequestReasonUnknown;
    gWakeInProgress = 0;
    if ( gnPoSessionSwitchBlockCount < 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v131);
    LODWORD(v670) = 12;
    v671 = v144;
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
    v671 = (int)v7[1];
    LODWORD(v670) = 14;
    if ( *(_BYTE *)v7 )
      LODWORD(v670) = 13;
    a2 = 0LL;
    goto LABEL_190;
  }
  v119 = v118 - 1;
  if ( !v119 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8 != 4 || !v7 )
      return 3221225473LL;
    LOBYTE(a2) = 1;
    v671 = (int)*v7;
    LODWORD(v670) = 15;
LABEL_190:
    QueuePowerRequest(&v670, a2);
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
    return v666;
  }
  return 3221225485LL;
}
