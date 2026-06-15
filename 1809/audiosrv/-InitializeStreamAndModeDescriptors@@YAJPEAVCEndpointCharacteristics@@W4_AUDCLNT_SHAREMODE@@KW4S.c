/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18003B2D0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000CAB0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800121CC (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18001E578 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18004DEFC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18004E2C8 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800AF7B0 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B36A8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800B36F4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0UIAudioProcessingObject@@@?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcessingObject@@U?$integral_constant@D$02@wistd@@@Z @ 0x1800E91E4 (--$-0UIAudioProcessingObject@@@-$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_pol.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180107658 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180108730 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AAA8 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B7B0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

// Hidden C++ exception states: #wind=64
__int64 __fastcall InitializeStreamAndModeDescriptors(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        struct _GUID *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        GUID *a14,
        __int64 a15,
        __int64 a16,
        char a17,
        char a18,
        char a19,
        __int64 a20,
        _QWORD *a21,
        _QWORD *a22)
{
  struct _GUID v22; // xmm6
  unsigned int v23; // r14d
  volatile signed __int32 *v24; // rbx
  CEndpointCharacteristics *v25; // r12
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // r13d
  unsigned __int64 v29; // rdi
  struct SystemEffectDescriptor *v30; // r12
  struct SystemEffectDescriptor *v31; // rdx
  struct _RTL_CRITICAL_SECTION *v32; // r13
  __int64 v33; // rsi
  int v34; // r15d
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 v37; // rax
  volatile signed __int32 **v38; // rcx
  __int64 v39; // rax
  volatile signed __int32 **v40; // r14
  volatile signed __int32 **v41; // rdi
  __int64 v42; // rsi
  volatile signed __int32 *v43; // rbx
  __int64 v44; // rsi
  unsigned int v45; // r14d
  unsigned int v46; // r14d
  struct SystemEffectDescriptor *v47; // r12
  int v48; // r15d
  __int64 v49; // r14
  __int64 v50; // r12
  __int64 v51; // rax
  volatile signed __int32 **v52; // rcx
  __int64 v53; // rax
  volatile signed __int32 **v54; // r14
  volatile signed __int32 **v55; // rdi
  __int64 v56; // rsi
  volatile signed __int32 *v57; // rbx
  struct ICompositeSystemEffect *v58; // rcx
  struct SystemEffectDescriptor *v59; // r15
  int v60; // r12d
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 v63; // rax
  volatile signed __int32 **v64; // rcx
  __int64 v65; // rax
  volatile signed __int32 **v66; // r14
  volatile signed __int32 **v67; // rdi
  __int64 v68; // rsi
  volatile signed __int32 *v69; // rbx
  struct SystemEffectDescriptor *v70; // r15
  __int64 v71; // rsi
  unsigned int v72; // r14d
  unsigned int v73; // r14d
  struct SystemEffectDescriptor *v74; // r12
  int v75; // r15d
  __int64 v76; // r14
  __int64 v77; // r12
  __int64 v78; // rax
  volatile signed __int32 **v79; // rcx
  __int64 v80; // rax
  volatile signed __int32 **v81; // r14
  BOOL v82; // ebx
  int v83; // eax
  int v84; // ebx
  int v85; // ecx
  int v86; // ebx
  __int64 v87; // r9
  int v88; // r8d
  int v89; // r11d
  __int64 v90; // r10
  __int64 v91; // rax
  __int64 v92; // r11
  struct ICompositeSystemEffect *v93; // rax
  int v94; // ecx
  int v95; // ebx
  __int64 v96; // r9
  int v97; // r8d
  int v98; // r11d
  __int64 v99; // r10
  __int64 v100; // rax
  __int64 v101; // rdi
  int v102; // eax
  _OWORD *v103; // rcx
  bool v104; // zf
  void *v105; // rbx
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  void *v109; // rax
  int v110; // eax
  unsigned int v111; // ebx
  void *v112; // rbx
  LPVOID *v113; // rdi
  void *v114; // rcx
  unsigned int v115; // r12d
  __int64 v116; // rbx
  _DWORD *v117; // rax
  _DWORD *v118; // rdi
  unsigned int *v119; // rsi
  unsigned int i; // r14d
  __int64 v121; // rax
  GUID *v122; // rcx
  struct _GUID *v123; // r8
  GUID *v124; // rax
  __int64 v125; // r14
  struct _GUID v126; // xmm6
  __int64 v127; // r13
  char *v128; // r12
  struct _RTL_CRITICAL_SECTION *v129; // r13
  volatile signed __int32 **v130; // rdi
  volatile signed __int32 *v131; // rbx
  int v132; // esi
  int v133; // r15d
  __int64 v134; // r12
  __int64 v135; // rax
  volatile signed __int32 **v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rsi
  struct SystemEffectDescriptor *v139; // r15
  char *v140; // rdi
  __int64 v141; // rsi
  unsigned int v142; // r14d
  char *v143; // r12
  struct _RTL_CRITICAL_SECTION *v144; // r13
  volatile signed __int32 **v145; // rdi
  volatile signed __int32 *v146; // rbx
  int v147; // esi
  int v148; // r15d
  __int64 v149; // r14
  __int64 v150; // r12
  __int64 v151; // rax
  volatile signed __int32 **v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rsi
  volatile signed __int32 **v155; // r14
  __int64 v156; // r12
  int v157; // r14d
  BOOL v158; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v159; // r11d
  int v160; // eax
  unsigned int v161; // ebx
  unsigned int v162; // ebx
  int v163; // r8d
  int v164; // r9d
  _QWORD *v165; // rcx
  __int64 v166; // rax
  BOOL v167; // ebx
  char *v168; // r12
  struct _RTL_CRITICAL_SECTION *v169; // r13
  unsigned int v170; // edx
  volatile signed __int32 **v171; // rdi
  volatile signed __int32 *v172; // rbx
  int v173; // esi
  int v174; // r15d
  __int64 v175; // r14
  __int64 v176; // r12
  __int64 v177; // rax
  volatile signed __int32 **v178; // rcx
  __int64 v179; // rax
  __int64 v180; // rsi
  volatile signed __int32 **v181; // r14
  char *v182; // rdi
  __int64 v183; // rsi
  unsigned int v184; // r14d
  unsigned int v185; // r14d
  char *v186; // r12
  struct _RTL_CRITICAL_SECTION *v187; // r13
  unsigned int v188; // edx
  volatile signed __int32 **v189; // rdi
  volatile signed __int32 *v190; // rbx
  int v191; // esi
  int v192; // r15d
  __int64 v193; // r14
  __int64 v194; // r12
  __int64 v195; // rax
  volatile signed __int32 **v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rsi
  volatile signed __int32 **v199; // r14
  __int64 *v200; // rax
  __int64 v201; // rsi
  int v202; // r8d
  __int64 v203; // r9
  __int64 v204; // rax
  __int64 v205; // rax
  unsigned int v206; // ebx
  unsigned int v207; // ebx
  __int64 v208; // rdi
  int v209; // edx
  int v210; // r8d
  _QWORD *v211; // rcx
  __int64 v212; // rax
  unsigned __int64 v213; // rdx
  void *v214; // rcx
  bool v215; // zf
  void *v216; // rbx
  unsigned __int64 v217; // rax
  unsigned __int64 v218; // rcx
  void *v219; // rax
  int v220; // eax
  int v221; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v222; // r15d
  int v223; // eax
  void *v224; // rbx
  LPVOID *v225; // rdi
  void *v226; // rcx
  int v227; // r12d
  __int64 v228; // rax
  int v229; // r12d
  BOOL v230; // ebx
  char *v231; // r12
  struct _RTL_CRITICAL_SECTION *v232; // r13
  unsigned int v233; // edx
  volatile signed __int32 *v234; // rbx
  __int64 v235; // rdi
  int v236; // r15d
  __int64 v237; // r14
  __int64 v238; // r12
  __int64 v239; // rax
  volatile signed __int32 *v240; // rcx
  __int64 v241; // rax
  volatile signed __int32 **v242; // rsi
  volatile signed __int32 *v243; // r14
  struct SystemEffectDescriptor *v244; // r15
  char *v245; // rdi
  unsigned int v246; // r14d
  unsigned int v247; // r14d
  char *v248; // r12
  struct _RTL_CRITICAL_SECTION *v249; // r13
  unsigned int v250; // edx
  volatile signed __int32 *v251; // rbx
  __int64 v252; // rdi
  int v253; // esi
  int v254; // r15d
  __int64 v255; // r14
  __int64 v256; // r12
  __int64 v257; // rax
  volatile signed __int32 *v258; // rcx
  __int64 v259; // rax
  volatile signed __int32 **v260; // rsi
  volatile signed __int32 *v261; // r14
  __int64 v262; // rax
  int v263; // r8d
  __int64 v264; // r9
  __int64 v265; // rax
  BOOL v266; // ebx
  int v267; // eax
  char *v268; // rdi
  unsigned int v269; // r14d
  unsigned int v270; // r14d
  unsigned int v271; // ebx
  __int64 *v272; // r9
  int k; // ebx
  int v274; // r10d
  __int64 v275; // r14
  int v276; // edi
  void *v277; // rax
  _OWORD *v278; // rax
  __int64 v279; // r14
  int v280; // esi
  __int64 v281; // rdi
  __int64 v282; // r12
  BOOL v283; // ebx
  char *v284; // r12
  struct _RTL_CRITICAL_SECTION *v285; // r13
  unsigned int v286; // edx
  volatile signed __int32 **v287; // rdi
  int v288; // ebx
  int v289; // esi
  int v290; // r15d
  __int64 v291; // r12
  __int64 v292; // rax
  volatile signed __int32 **v293; // rcx
  __int64 v294; // rax
  int v295; // esi
  volatile signed __int32 **v296; // r14
  volatile signed __int32 **v297; // rdi
  __int64 v298; // rsi
  volatile signed __int32 *v299; // rbx
  __int64 v300; // rdi
  struct _RTL_CRITICAL_SECTION *v301; // rbx
  char *v302; // rsi
  unsigned int v303; // r15d
  unsigned int v304; // r15d
  __int64 v305; // r15
  struct _RTL_CRITICAL_SECTION *v306; // r13
  unsigned int v307; // edx
  volatile signed __int32 **v308; // rdi
  int v309; // ebx
  int v310; // esi
  int v311; // r12d
  __int64 v312; // r13
  __int64 v313; // rax
  volatile signed __int32 **v314; // rcx
  __int64 v315; // rax
  int v316; // esi
  volatile signed __int32 **v317; // r14
  volatile signed __int32 **v318; // rdi
  __int64 v319; // rsi
  volatile signed __int32 *v320; // rbx
  __int64 *v321; // rax
  int v322; // r8d
  __int64 v323; // r9
  __int64 v324; // rax
  int v325; // r13d
  unsigned int v326; // esi
  __int64 v327; // rdi
  char *v328; // rax
  char *v329; // rbx
  unsigned int v330; // r8d
  unsigned int v331; // ecx
  LPVOID v332; // rax
  LPVOID v333; // rax
  _DWORD *v335; // rax
  _DWORD *v336; // rbx
  SystemEffectChainDescriptor **v337; // rax
  int v338; // eax
  __int64 v339; // rax
  __int64 v340; // r9
  __int64 v341; // rdx
  SystemEffectChainDescriptor **v342; // rax
  int v343; // eax
  volatile signed __int32 **v344; // r14
  __int64 v345; // r9
  __int64 v346; // rdx
  SystemEffectChainDescriptor **v347; // rax
  int v348; // eax
  __int64 v349; // r9
  __int64 v350; // rdx
  SystemEffectChainDescriptor **v351; // rax
  int v352; // eax
  __int64 v353; // rax
  __int64 v354; // r9
  __int64 v355; // rdx
  SystemEffectChainDescriptor **v356; // rax
  int v357; // eax
  volatile signed __int32 **v358; // r14
  __int64 v359; // r9
  __int64 v360; // rdx
  SystemEffectChainDescriptor **v361; // rax
  int v362; // eax
  __int64 **v363; // rax
  __int64 v364; // rax
  volatile signed __int32 *v365; // rbx
  __int64 **v366; // rax
  __int64 v367; // rax
  volatile signed __int32 *v368; // rbx
  int Lfx; // eax
  unsigned int v370; // ebx
  __int64 v371; // rdx
  char *v372; // rax
  char *v373; // rbx
  __int64 v374; // rdi
  _DWORD *v375; // rax
  _DWORD *v376; // rbx
  unsigned int v377; // r8d
  unsigned int v378; // eax
  int v379; // ebx
  int StreamEffect; // eax
  unsigned int v381; // ebx
  void *v382; // rbx
  LPVOID *v383; // rdi
  void *v384; // rcx
  unsigned int v385; // esi
  __int64 v386; // rdi
  _DWORD *v387; // rax
  _DWORD *v388; // rbx
  unsigned int v389; // r8d
  unsigned int v390; // ecx
  __int64 v391; // rdx
  _DWORD *v392; // rax
  _DWORD *v393; // rbx
  __int64 v394; // r9
  __int64 v395; // rdx
  SystemEffectChainDescriptor **v396; // rax
  int v397; // eax
  __int64 v398; // rax
  __int64 v399; // r9
  __int64 v400; // rdx
  SystemEffectChainDescriptor **v401; // rax
  int v402; // eax
  char *v403; // r14
  __int64 v404; // r9
  __int64 v405; // rdx
  SystemEffectChainDescriptor **v406; // rax
  int v407; // eax
  __int64 **v408; // rax
  __int64 v409; // rax
  volatile signed __int32 *v410; // rbx
  __int64 **v411; // rax
  __int64 v412; // r9
  __int64 v413; // rdx
  SystemEffectChainDescriptor **v414; // rax
  int v415; // eax
  __int64 v416; // rax
  __int64 v417; // r9
  __int64 v418; // rdx
  SystemEffectChainDescriptor **v419; // rax
  int v420; // eax
  char *v421; // r14
  __int64 v422; // r9
  __int64 v423; // rdx
  SystemEffectChainDescriptor **v424; // rax
  int v425; // eax
  __int64 **v426; // rax
  __int64 v427; // rax
  volatile signed __int32 *v428; // rbx
  __int64 **v429; // rax
  __int64 v430; // rdx
  unsigned int v431; // esi
  __int64 v432; // rdi
  char *v433; // rax
  char *v434; // rbx
  __int64 v435; // r8
  unsigned int v436; // ecx
  __int64 v437; // r9
  __int64 v438; // rdx
  SystemEffectChainDescriptor **v439; // rax
  int v440; // eax
  __int64 v441; // rax
  __int64 v442; // r9
  __int64 v443; // rdx
  SystemEffectChainDescriptor **v444; // rax
  int v445; // eax
  char *v446; // r14
  __int64 v447; // r9
  __int64 v448; // rdx
  SystemEffectChainDescriptor **v449; // rax
  int v450; // eax
  wil::details::in1diag3 *v451; // rcx
  __int64 v452; // rdx
  __int64 v453; // rax
  __int64 v454; // r9
  __int64 v455; // rdx
  SystemEffectChainDescriptor **v456; // rax
  int v457; // eax
  char *v458; // r14
  unsigned int j; // edi
  _QWORD *v460; // rax
  _QWORD *v461; // rax
  _QWORD *v462; // rax
  __int64 v463; // rax
  int v464; // r10d
  __int64 v465; // r9
  __int64 v466; // rdx
  SystemEffectChainDescriptor **v467; // rax
  int v468; // eax
  __int64 v469; // rax
  __int64 v470; // r9
  __int64 v471; // rdx
  SystemEffectChainDescriptor **v472; // rax
  int v473; // eax
  char *v474; // rdi
  __int64 v475; // r9
  __int64 v476; // rdx
  SystemEffectChainDescriptor **v477; // rax
  int v478; // eax
  struct IAudioSystemEffects2 **v479; // [rsp+28h] [rbp-E0h]
  int v480; // [rsp+28h] [rbp-E0h]
  int v481; // [rsp+28h] [rbp-E0h]
  int v482; // [rsp+28h] [rbp-E0h]
  int v483; // [rsp+28h] [rbp-E0h]
  struct SystemEffectDescriptor *v484; // [rsp+48h] [rbp-C0h]
  struct SystemEffectDescriptor *v485; // [rsp+48h] [rbp-C0h]
  struct SystemEffectDescriptor *v486; // [rsp+48h] [rbp-C0h]
  struct SystemEffectDescriptor *v488; // [rsp+58h] [rbp-B0h]
  struct SystemEffectDescriptor *v489; // [rsp+58h] [rbp-B0h]
  struct SystemEffectDescriptor *v490; // [rsp+58h] [rbp-B0h]
  unsigned int v492; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v493; // [rsp+68h] [rbp-A0h] BYREF
  int v494; // [rsp+6Ch] [rbp-9Ch]
  __int64 v495; // [rsp+70h] [rbp-98h]
  void *Block; // [rsp+78h] [rbp-90h] BYREF
  __int64 v497; // [rsp+80h] [rbp-88h]
  struct ICompositeSystemEffect *v498; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v499; // [rsp+90h] [rbp-78h]
  unsigned int v500; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v501; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 **v502; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v503; // [rsp+B0h] [rbp-58h]
  volatile signed __int32 **v504; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v505; // [rsp+C0h] [rbp-48h]
  __int64 v506; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v508; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v509; // [rsp+E0h] [rbp-28h] BYREF
  struct _GUID *v510; // [rsp+E8h] [rbp-20h]
  __int64 v511; // [rsp+F0h] [rbp-18h] BYREF
  char *v512; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v513; // [rsp+100h] [rbp-8h]
  volatile signed __int32 **v514; // [rsp+108h] [rbp+0h] BYREF
  int v515; // [rsp+110h] [rbp+8h]
  int v516; // [rsp+114h] [rbp+Ch]
  volatile signed __int32 **v517; // [rsp+118h] [rbp+10h] BYREF
  __int64 v518; // [rsp+120h] [rbp+18h]
  volatile signed __int32 **v519; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v520; // [rsp+130h] [rbp+28h]
  volatile signed __int32 **v521; // [rsp+138h] [rbp+30h] BYREF
  __int64 v522; // [rsp+140h] [rbp+38h]
  volatile signed __int32 **v523; // [rsp+148h] [rbp+40h] BYREF
  __int64 v524; // [rsp+150h] [rbp+48h]
  volatile signed __int32 **v525; // [rsp+158h] [rbp+50h] BYREF
  __int64 v526; // [rsp+160h] [rbp+58h]
  volatile signed __int32 **v527; // [rsp+168h] [rbp+60h] BYREF
  __int64 v528; // [rsp+170h] [rbp+68h]
  volatile signed __int32 **v529; // [rsp+178h] [rbp+70h] BYREF
  __int64 v530; // [rsp+180h] [rbp+78h]
  volatile signed __int32 *v531; // [rsp+188h] [rbp+80h] BYREF
  int v532; // [rsp+190h] [rbp+88h]
  int v533; // [rsp+194h] [rbp+8Ch]
  volatile signed __int32 *v534; // [rsp+198h] [rbp+90h] BYREF
  __int64 v535; // [rsp+1A0h] [rbp+98h]
  LPVOID v536; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD *v537; // [rsp+1B0h] [rbp+A8h]
  LPVOID v538; // [rsp+1B8h] [rbp+B0h]
  struct ICompositeSystemEffect *v539; // [rsp+1C0h] [rbp+B8h] BYREF
  struct ICompositeSystemEffect *v540; // [rsp+1C8h] [rbp+C0h] BYREF
  LPVOID v541; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v542; // [rsp+1D8h] [rbp+D0h] BYREF
  volatile signed __int32 **v543; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 v544; // [rsp+1E8h] [rbp+E0h]
  volatile signed __int32 **v545; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v546; // [rsp+1F8h] [rbp+F0h]
  char *v547; // [rsp+200h] [rbp+F8h] BYREF
  unsigned int v548; // [rsp+208h] [rbp+100h]
  int v549; // [rsp+20Ch] [rbp+104h]
  char *v550; // [rsp+210h] [rbp+108h] BYREF
  __int64 v551; // [rsp+218h] [rbp+110h]
  char *v552; // [rsp+220h] [rbp+118h] BYREF
  __int64 v553; // [rsp+228h] [rbp+120h]
  char *v554; // [rsp+230h] [rbp+128h] BYREF
  __int64 v555; // [rsp+238h] [rbp+130h]
  BOOL v556; // [rsp+240h] [rbp+138h] BYREF
  int v557; // [rsp+248h] [rbp+140h] BYREF
  int v558; // [rsp+250h] [rbp+148h] BYREF
  int v559; // [rsp+258h] [rbp+150h] BYREF
  int v560; // [rsp+260h] [rbp+158h] BYREF
  int v561; // [rsp+268h] [rbp+160h] BYREF
  __int64 v562; // [rsp+270h] [rbp+168h] BYREF
  int v563; // [rsp+278h] [rbp+170h] BYREF
  int v564; // [rsp+280h] [rbp+178h] BYREF
  struct _RTL_CRITICAL_SECTION *v565; // [rsp+288h] [rbp+180h] BYREF
  _QWORD *v566; // [rsp+290h] [rbp+188h]
  struct _RTL_CRITICAL_SECTION *v567; // [rsp+298h] [rbp+190h] BYREF
  struct _RTL_CRITICAL_SECTION *v568; // [rsp+2A0h] [rbp+198h] BYREF
  struct _RTL_CRITICAL_SECTION *v569; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct _RTL_CRITICAL_SECTION *v570; // [rsp+2B0h] [rbp+1A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v571; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v572; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v573; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v574; // [rsp+2D0h] [rbp+1C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v575; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v576; // [rsp+2E0h] [rbp+1D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v577; // [rsp+2E8h] [rbp+1E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v578; // [rsp+2F0h] [rbp+1E8h] BYREF
  struct _GUID v579; // [rsp+2F8h] [rbp+1F0h] BYREF
  PROPVARIANT v580; // [rsp+308h] [rbp+200h] BYREF
  __int64 v581; // [rsp+310h] [rbp+208h]
  __int64 v582; // [rsp+318h] [rbp+210h]
  PROPVARIANT v583; // [rsp+320h] [rbp+218h] BYREF
  __int64 v584; // [rsp+328h] [rbp+220h]
  __int64 v585; // [rsp+330h] [rbp+228h]
  PROPVARIANT pvar; // [rsp+338h] [rbp+230h] BYREF
  __int64 v587; // [rsp+340h] [rbp+238h]
  __int64 v588; // [rsp+348h] [rbp+240h]
  LPVOID *v589; // [rsp+350h] [rbp+248h]
  LPVOID v590; // [rsp+358h] [rbp+250h] BYREF
  char v591; // [rsp+360h] [rbp+258h]
  LPVOID *v592; // [rsp+368h] [rbp+260h]
  LPVOID v593; // [rsp+370h] [rbp+268h] BYREF
  char v594; // [rsp+378h] [rbp+270h]
  PROPVARIANT v595; // [rsp+380h] [rbp+278h] BYREF
  __int64 v596; // [rsp+388h] [rbp+280h]
  __int64 v597; // [rsp+390h] [rbp+288h]
  LPVOID *v598; // [rsp+398h] [rbp+290h]
  LPVOID v599; // [rsp+3A0h] [rbp+298h] BYREF
  char v600; // [rsp+3A8h] [rbp+2A0h]
  PROPVARIANT v601; // [rsp+3B0h] [rbp+2A8h] BYREF
  __int64 v602; // [rsp+3B8h] [rbp+2B0h]
  __int64 v603; // [rsp+3C0h] [rbp+2B8h]
  PROPVARIANT v604; // [rsp+3C8h] [rbp+2C0h] BYREF
  __int64 v605; // [rsp+3D0h] [rbp+2C8h]
  __int64 v606; // [rsp+3D8h] [rbp+2D0h]
  _OWORD *v607; // [rsp+3E0h] [rbp+2D8h] BYREF
  _OWORD *v608; // [rsp+3E8h] [rbp+2E0h] BYREF
  struct _GUID v609; // [rsp+3F8h] [rbp+2F0h]
  _DWORD *v610; // [rsp+408h] [rbp+300h]
  struct SystemEffectDescriptor *v611; // [rsp+410h] [rbp+308h]
  _QWORD *v612; // [rsp+418h] [rbp+310h]
  struct _GUID v613; // [rsp+428h] [rbp+320h] BYREF
  struct _GUID v614; // [rsp+438h] [rbp+330h] BYREF
  struct _GUID v615; // [rsp+448h] [rbp+340h] BYREF
  struct _GUID v616; // [rsp+458h] [rbp+350h] BYREF
  struct _GUID v617; // [rsp+468h] [rbp+360h]
  struct _GUID v618; // [rsp+478h] [rbp+370h]
  GUID v619; // [rsp+488h] [rbp+380h]
  __int128 v620; // [rsp+498h] [rbp+390h]
  char *v621; // [rsp+4A8h] [rbp+3A0h]
  char *v622; // [rsp+4B0h] [rbp+3A8h]
  struct _GUID v623; // [rsp+4B8h] [rbp+3B0h] BYREF
  SystemEffectChainDescriptor *v624; // [rsp+4C8h] [rbp+3C0h]
  volatile signed __int32 *v625; // [rsp+4D0h] [rbp+3C8h]
  SystemEffectChainDescriptor *v626; // [rsp+4D8h] [rbp+3D0h]
  volatile signed __int32 *v627; // [rsp+4E0h] [rbp+3D8h]
  struct _GUID v628; // [rsp+4E8h] [rbp+3E0h] BYREF
  char *v629; // [rsp+4F8h] [rbp+3F0h]
  struct _GUID v630; // [rsp+508h] [rbp+400h] BYREF
  SystemEffectChainDescriptor *v631; // [rsp+518h] [rbp+410h]
  volatile signed __int32 *v632; // [rsp+520h] [rbp+418h]
  SystemEffectChainDescriptor *v633; // [rsp+528h] [rbp+420h]
  volatile signed __int32 *v634; // [rsp+530h] [rbp+428h]
  char *v635; // [rsp+538h] [rbp+430h]
  char *v636; // [rsp+540h] [rbp+438h]
  char *v637; // [rsp+548h] [rbp+440h]
  char *v638; // [rsp+550h] [rbp+448h]
  struct _GUID v639; // [rsp+558h] [rbp+450h] BYREF
  char *v640; // [rsp+568h] [rbp+460h]
  __int64 v641; // [rsp+570h] [rbp+468h]
  char *v642; // [rsp+578h] [rbp+470h]
  char *v643; // [rsp+580h] [rbp+478h]
  struct _GUID v644; // [rsp+588h] [rbp+480h] BYREF
  CLSID pClsid; // [rsp+598h] [rbp+490h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5F0h] [rbp+4E8h]

  v641 = -2LL;
  v494 = a4;
  v23 = a3;
  v24 = (volatile signed __int32 *)a2;
  LODWORD(v495) = a2;
  v25 = (CEndpointCharacteristics *)a1;
  v510 = a7;
  v612 = a21;
  v26 = a22;
  v537 = a22;
  v499 = 0LL;
  v538 = 0LL;
  v566 = 0LL;
  v566 = *(_QWORD **)(a1 + 16);
  (*(void (__fastcall **)(_QWORD *))(*v566 + 8LL))(v566);
  v28 = -2147024882;
  if ( !a21 )
  {
    v123 = v510;
    goto LABEL_243;
  }
  if ( (v23 & 0x800000) != 0 )
  {
    if ( (_DWORD)v24 )
    {
      v28 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8000FFFFLL,
        (int)v479);
      goto LABEL_691;
    }
    v335 = CoTaskMemAlloc(0xE8uLL);
    v336 = v335;
    if ( !v335 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL,
        (int)v479);
      goto LABEL_691;
    }
    v499 = v335;
    memset_0(v335, 0, 0xE8uLL);
    *v336 = 0;
    v336[22] = v23;
    *((_QWORD *)v336 + 12) = 0LL;
    v336[34] = 0;
    v336[28] = 0;
    *(GUID *)&v336[4 * v336[34]++ + 54] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    v336[1] = 1;
    LODWORD(v29) = a5;
    goto LABEL_240;
  }
  v29 = (unsigned int)a5;
  if ( (_DWORD)v24 || (a5 & 0xFFFFFFFC) != 0 || a5 == eOffloadConnector )
  {
    v541 = 0LL;
    v500 = 0;
    if ( a5 != eOffloadConnector || (_DWORD)v24 )
    {
      v392 = CoTaskMemAlloc(0xE8uLL);
      v393 = v392;
      if ( !v392 )
      {
        v28 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          (int)v479);
LABEL_884:
        if ( v541 )
          CoTaskMemFree(v541);
        goto LABEL_691;
      }
      v499 = v392;
      memset_0(v392, 0, 0xE8uLL);
      *v393 = v494;
      v393[22] = v23;
      *((_QWORD *)v393 + 12) = 0LL;
      v393[34] = 0;
      v393[1] = 0;
    }
    else
    {
      v644 = *v510;
      v540 = 0LL;
      StreamEffect = CEndpointCharacteristics::GetStreamEffect(v25, &v644, 0, eOffloadConnector, &v540, 0LL, 0LL);
      v381 = StreamEffect;
      if ( StreamEffect < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)StreamEffect,
          (int)v479);
        v28 = v381;
LABEL_878:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v540);
        goto LABEL_884;
      }
      if ( v540 )
      {
        v592 = &v541;
        v593 = 0LL;
        v594 = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, LPVOID *))(*(_QWORD *)v540 + 32LL))(
          v540,
          &v500,
          &v593);
        if ( v594 )
        {
          v382 = v593;
          v383 = v592;
          v384 = *v592;
          if ( v593 != *v592 )
          {
            if ( v384 )
              CoTaskMemFree(v384);
            *v383 = v382;
          }
        }
      }
      v385 = v500;
      v386 = 16LL * v500;
      v387 = CoTaskMemAlloc(v386 + 216);
      v388 = v387;
      if ( !v387 )
      {
        v28 = -2147024882;
        v391 = 437LL;
        goto LABEL_877;
      }
      v499 = v387;
      memset_0(v387, 0, v386 + 216);
      *v388 = 0;
      v388[22] = v23;
      *((_QWORD *)v388 + 12) = 0LL;
      v388[34] = 0;
      v388[28] = 0;
      v389 = 0;
      if ( v500 )
      {
        v390 = 0;
        while ( v390 <= 0x1F )
        {
          v388[28] |= 1 << v390;
          *(_OWORD *)&v388[4 * v388[34]++ + 54] = *((_OWORD *)v541 + v389);
          v390 = v388[34];
          if ( ++v389 >= v500 )
            goto LABEL_872;
        }
        v28 = -2147418113;
        v391 = 448LL;
        goto LABEL_877;
      }
LABEL_872:
      v388[1] = 0;
      if ( v388[34] > v385 )
      {
        v28 = -2147418113;
        v391 = 456LL;
LABEL_877:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v391,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v28,
          (int)v479);
        goto LABEL_878;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v540);
      LODWORD(v29) = a5;
      v26 = v537;
    }
    if ( v541 )
      CoTaskMemFree(v541);
    goto LABEL_240;
  }
  v508 = 0LL;
  v493 = 0;
  if ( a5 == eLoopbackConnector )
    goto LABEL_221;
  v498 = 0LL;
  v30 = (CEndpointCharacteristics *)((char *)v25 + 96 * a5);
  v484 = v30;
  LODWORD(v31) = (_DWORD)v30 + 232;
  v488 = (struct SystemEffectDescriptor *)((char *)v30 + 232);
  if ( *((_BYTE *)v30 + 284) )
  {
    v32 = (struct _RTL_CRITICAL_SECTION *)((char *)v30 + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v30 + 288));
    v640 = (char *)v30 + 288;
    v29 = 0LL;
    v519 = 0LL;
    v520 = v24;
    v33 = 0LL;
    v34 = 0;
    v31 = (struct SystemEffectDescriptor *)((char *)v30 + 232);
    if ( *((int *)v30 + 68) > 0 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( v35 < 0 || v34 >= *((_DWORD *)v31 + 10) )
        {
LABEL_767:
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_768;
        }
        v36 = *((_QWORD *)v31 + 4);
        if ( (_DWORD)v24 == (_DWORD)v33 )
        {
          if ( (_DWORD)v33 )
          {
            v33 = (unsigned int)(2 * (_DWORD)v24);
            if ( ((unsigned int)v24 & 0x40000000) != 0 )
              goto LABEL_704;
          }
          else
          {
            v33 = 1LL;
          }
          if ( (unsigned __int64)(int)v33 > 0x7FFFFFF || (v37 = _o__recalloc(v29, (int)v33, 16LL), (v29 = v37) == 0) )
          {
LABEL_704:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v479);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v519);
            if ( v32 )
              LeaveCriticalSection(v32);
            v30 = v484;
            goto LABEL_39;
          }
          HIDWORD(v520) = v33;
          v519 = (volatile signed __int32 **)v37;
          v31 = v488;
        }
        v38 = (volatile signed __int32 **)(v29 + 16LL * (int)v24);
        if ( v38 )
        {
          *v38 = 0LL;
          v38[1] = 0LL;
          v39 = *(_QWORD *)(v36 + v35 + 8);
          if ( v39 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
            v33 = HIDWORD(v520);
            LODWORD(v24) = (_DWORD)v520;
            v29 = (unsigned __int64)v519;
          }
          *v38 = *(volatile signed __int32 **)(v36 + v35);
          v38[1] = *(volatile signed __int32 **)(v36 + v35 + 8);
        }
        v24 = (volatile signed __int32 *)(unsigned int)((_DWORD)v24 + 1);
        LODWORD(v520) = (_DWORD)v24;
        ++v34;
        v35 += 16LL;
        if ( v34 >= *((_DWORD *)v31 + 10) )
        {
          v30 = v484;
          break;
        }
      }
    }
    v33 = 0LL;
    if ( (int)v24 <= 0 )
    {
LABEL_29:
      if ( v29 )
      {
        if ( (int)v24 > 0 )
        {
          v41 = (volatile signed __int32 **)(v29 + 8);
          v42 = (unsigned int)v24;
          do
          {
            v43 = *v41;
            if ( *v41 )
            {
              if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
                if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
              }
            }
            v41 += 2;
            --v42;
          }
          while ( v42 );
          v29 = (unsigned __int64)v519;
        }
        free((void *)v29);
      }
      if ( !v32 )
        goto LABEL_39;
LABEL_38:
      LeaveCriticalSection(v32);
      goto LABEL_39;
    }
    v40 = (volatile signed __int32 **)v29;
    while ( 1 )
    {
      if ( (int)v33 < 0 )
        goto LABEL_767;
      if ( *((_BYTE *)*v40 + 20) )
      {
        v337 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v519,
                                                 (unsigned int)v33);
        v338 = SystemEffectChainDescriptor::Resolve(*v337, (struct SystemEffectDescriptor *)((char *)v30 + 232));
        if ( v338 < 0 )
          break;
      }
      v33 = (unsigned int)(v33 + 1);
      v40 += 2;
      if ( (int)v33 >= (int)v24 )
        goto LABEL_29;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v338,
      (int)v479);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v519);
    if ( v32 )
      goto LABEL_38;
  }
LABEL_39:
  v611 = (struct SystemEffectDescriptor *)((char *)v30 + 616);
  if ( !*((_BYTE *)v30 + 668) )
    goto LABEL_45;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v30 + 672));
  v638 = (char *)v30 + 672;
  v29 = 0LL;
  v543 = 0LL;
  v44 = 0LL;
  v544 = 0LL;
  v45 = 0;
  if ( *((int *)v30 + 164) > 0 )
  {
    while ( 1 )
    {
      v339 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v30 + 648, v45);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v543,
                            v339) )
        break;
      if ( (signed int)++v45 >= *((_DWORD *)v30 + 164) )
      {
        v44 = (unsigned int)v544;
        v29 = (unsigned __int64)v543;
        goto LABEL_41;
      }
    }
    v340 = 2147942414LL;
    v341 = 502LL;
  }
  else
  {
LABEL_41:
    v46 = 0;
    if ( (int)v44 <= 0 )
    {
LABEL_42:
      if ( v29 )
      {
        if ( (int)v44 > 0 )
        {
          v344 = (volatile signed __int32 **)v29;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v344);
            v344 += 2;
            --v44;
          }
          while ( v44 );
        }
        free((void *)v29);
      }
      if ( v30 != (struct SystemEffectDescriptor *)-672LL )
        goto LABEL_44;
      goto LABEL_45;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v543, v46)
                    + 20LL) )
      {
        v342 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v543,
                                                 v46);
        v343 = SystemEffectChainDescriptor::Resolve(*v342, (struct SystemEffectDescriptor *)((char *)v30 + 616));
        if ( v343 < 0 )
          break;
      }
      if ( (int)++v46 >= (int)v44 )
        goto LABEL_42;
    }
    v340 = (unsigned int)v343;
    v341 = 508LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v341,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v340,
    (int)v479);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v543);
  if ( v30 != (struct SystemEffectDescriptor *)-672LL )
LABEL_44:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v30 + 672));
LABEL_45:
  v47 = (struct SystemEffectDescriptor *)((char *)v30 + 1000);
  v485 = v47;
  if ( !*((_BYTE *)v47 + 52) )
    goto LABEL_76;
  v32 = (struct _RTL_CRITICAL_SECTION *)((char *)v47 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v47 + 56));
  v643 = (char *)v47 + 56;
  v29 = 0LL;
  v521 = 0LL;
  v24 = 0LL;
  v522 = 0LL;
  v33 = 0LL;
  v48 = 0;
  if ( *((int *)v47 + 10) > 0 )
  {
    v49 = 0LL;
    do
    {
      if ( v49 < 0 || v48 >= *((_DWORD *)v47 + 10) )
        goto LABEL_767;
      v50 = *((_QWORD *)v47 + 4);
      if ( (_DWORD)v24 == (_DWORD)v33 )
      {
        if ( (_DWORD)v33 )
        {
          v33 = (unsigned int)(2 * (_DWORD)v24);
          if ( ((unsigned int)v24 & 0x40000000) != 0 )
            goto LABEL_728;
        }
        else
        {
          v33 = 1LL;
        }
        if ( (unsigned __int64)(int)v33 > 0x7FFFFFF || (v51 = _o__recalloc(v29, (int)v33, 16LL), (v29 = v51) == 0) )
        {
LABEL_728:
          v345 = 2147942414LL;
          v346 = 502LL;
          goto LABEL_730;
        }
        HIDWORD(v522) = v33;
        v521 = (volatile signed __int32 **)v51;
      }
      v52 = (volatile signed __int32 **)(v29 + 16LL * (int)v24);
      if ( v52 )
      {
        *v52 = 0LL;
        v52[1] = 0LL;
        v53 = *(_QWORD *)(v50 + v49 + 8);
        if ( v53 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v53 + 8));
          v33 = HIDWORD(v522);
          LODWORD(v24) = v522;
          v29 = (unsigned __int64)v521;
        }
        *v52 = *(volatile signed __int32 **)(v50 + v49);
        v52[1] = *(volatile signed __int32 **)(v50 + v49 + 8);
      }
      v24 = (volatile signed __int32 *)(unsigned int)((_DWORD)v24 + 1);
      LODWORD(v522) = (_DWORD)v24;
      ++v48;
      v49 += 16LL;
      v47 = v485;
    }
    while ( v48 < *((_DWORD *)v485 + 10) );
  }
  v33 = 0LL;
  if ( (int)v24 <= 0 )
  {
LABEL_66:
    if ( v29 )
    {
      if ( (int)v24 > 0 )
      {
        v55 = (volatile signed __int32 **)(v29 + 8);
        v56 = (unsigned int)v24;
        do
        {
          v57 = *v55;
          if ( *v55 )
          {
            if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
              if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
            }
          }
          v55 += 2;
          --v56;
        }
        while ( v56 );
        v29 = (unsigned __int64)v521;
      }
      free((void *)v29);
    }
    if ( v32 )
LABEL_75:
      LeaveCriticalSection(v32);
  }
  else
  {
    v54 = (volatile signed __int32 **)v29;
    while ( 1 )
    {
      if ( (int)v33 < 0 )
        goto LABEL_767;
      if ( *((_BYTE *)*v54 + 20) )
      {
        v347 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v521,
                                                 (unsigned int)v33);
        v348 = SystemEffectChainDescriptor::Resolve(*v347, v47);
        if ( v348 < 0 )
          break;
      }
      v33 = (unsigned int)(v33 + 1);
      v54 += 2;
      if ( (int)v33 >= (int)v24 )
        goto LABEL_66;
    }
    v345 = (unsigned int)v348;
    v346 = 508LL;
LABEL_730:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v346,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v345,
      (int)v479);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v521);
    if ( v32 )
      goto LABEL_75;
  }
LABEL_76:
  v610 = (_DWORD *)(a1 + 4 * ((int)a5 + 12LL));
  v58 = v498;
  if ( !*v610 )
  {
    v498 = 0LL;
    if ( v58 )
      (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v58 + 16LL))(v58);
    Lfx = CEndpointCharacteristics::GetLfx((CEndpointCharacteristics *)a1, a5, &v498, 0LL, v479);
    v370 = Lfx;
    if ( Lfx < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)Lfx,
        (int)v479);
      v28 = v370;
      goto LABEL_824;
    }
    goto LABEL_212;
  }
  v22 = *v510;
  v498 = 0LL;
  if ( v58 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v58 + 16LL))(v58);
  v498 = 0LL;
  v59 = v488;
  if ( *((_BYTE *)v488 + 52) )
  {
    v32 = (struct _RTL_CRITICAL_SECTION *)((char *)v488 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
    v642 = (char *)v488 + 56;
    v29 = 0LL;
    v523 = 0LL;
    v24 = 0LL;
    v524 = 0LL;
    v33 = 0LL;
    v60 = 0;
    if ( *((int *)v488 + 10) > 0 )
    {
      v61 = 0LL;
      do
      {
        if ( v61 < 0 || v60 >= *((_DWORD *)v59 + 10) )
          goto LABEL_767;
        v62 = *((_QWORD *)v59 + 4);
        if ( (_DWORD)v24 == (_DWORD)v33 )
        {
          if ( (_DWORD)v33 )
          {
            v33 = (unsigned int)(2 * (_DWORD)v24);
            if ( ((unsigned int)v24 & 0x40000000) != 0 )
              goto LABEL_737;
          }
          else
          {
            v33 = 1LL;
          }
          if ( (unsigned __int64)(int)v33 > 0x7FFFFFF || (v63 = _o__recalloc(v29, (int)v33, 16LL), (v29 = v63) == 0) )
          {
LABEL_737:
            v349 = 2147942414LL;
            v350 = 502LL;
            goto LABEL_739;
          }
          HIDWORD(v524) = v33;
          v523 = (volatile signed __int32 **)v63;
        }
        v64 = (volatile signed __int32 **)(v29 + 16LL * (int)v24);
        if ( v64 )
        {
          *v64 = 0LL;
          v64[1] = 0LL;
          v65 = *(_QWORD *)(v62 + v61 + 8);
          if ( v65 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v65 + 8));
            v33 = HIDWORD(v524);
            LODWORD(v24) = v524;
            v29 = (unsigned __int64)v523;
          }
          *v64 = *(volatile signed __int32 **)(v62 + v61);
          v64[1] = *(volatile signed __int32 **)(v62 + v61 + 8);
        }
        v24 = (volatile signed __int32 *)(unsigned int)((_DWORD)v24 + 1);
        LODWORD(v524) = (_DWORD)v24;
        ++v60;
        v61 += 16LL;
        v59 = v488;
      }
      while ( v60 < *((_DWORD *)v488 + 10) );
    }
    v33 = 0LL;
    if ( (int)v24 <= 0 )
    {
LABEL_100:
      if ( v29 )
      {
        if ( (int)v24 > 0 )
        {
          v67 = (volatile signed __int32 **)(v29 + 8);
          v68 = (unsigned int)v24;
          do
          {
            v69 = *v67;
            if ( *v67 )
            {
              if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v69)(v69);
                if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
              }
            }
            v67 += 2;
            --v68;
          }
          while ( v68 );
          v29 = (unsigned __int64)v523;
        }
        free((void *)v29);
      }
      if ( v488 != (struct SystemEffectDescriptor *)-56LL )
LABEL_109:
        LeaveCriticalSection(v32);
    }
    else
    {
      v66 = (volatile signed __int32 **)v29;
      while ( 1 )
      {
        if ( (int)v33 < 0 )
          goto LABEL_767;
        if ( *((_BYTE *)*v66 + 20) )
        {
          v351 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v523,
                                                   (unsigned int)v33);
          v352 = SystemEffectChainDescriptor::Resolve(*v351, v59);
          if ( v352 < 0 )
            break;
        }
        v33 = (unsigned int)(v33 + 1);
        v66 += 2;
        if ( (int)v33 >= (int)v24 )
          goto LABEL_100;
      }
      v349 = (unsigned int)v352;
      v350 = 508LL;
LABEL_739:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v350,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v349,
        (int)v479);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v523);
      if ( v488 != (struct SystemEffectDescriptor *)-56LL )
        goto LABEL_109;
    }
  }
  v70 = v611;
  if ( !*((_BYTE *)v611 + 52) )
    goto LABEL_116;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v611 + 56));
  v621 = (char *)v70 + 56;
  v29 = 0LL;
  v545 = 0LL;
  v71 = 0LL;
  v546 = 0LL;
  v72 = 0;
  if ( *((int *)v70 + 10) > 0 )
  {
    while ( 1 )
    {
      v353 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v70 + 32, v72);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v545,
                            v353) )
        break;
      if ( (signed int)++v72 >= *((_DWORD *)v70 + 10) )
      {
        v71 = (unsigned int)v546;
        v29 = (unsigned __int64)v545;
        goto LABEL_112;
      }
    }
    v354 = 2147942414LL;
    v355 = 502LL;
  }
  else
  {
LABEL_112:
    v73 = 0;
    if ( (int)v71 <= 0 )
    {
LABEL_113:
      if ( v29 )
      {
        if ( (int)v71 > 0 )
        {
          v358 = (volatile signed __int32 **)v29;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v358);
            v358 += 2;
            --v71;
          }
          while ( v71 );
        }
        free((void *)v29);
      }
      if ( v70 != (struct SystemEffectDescriptor *)-56LL )
        goto LABEL_115;
      goto LABEL_116;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v545, v73)
                    + 20LL) )
      {
        v356 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v545,
                                                 v73);
        v357 = SystemEffectChainDescriptor::Resolve(*v356, v70);
        if ( v357 < 0 )
          break;
      }
      if ( (int)++v73 >= (int)v71 )
        goto LABEL_113;
    }
    v354 = (unsigned int)v357;
    v355 = 508LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v355,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v354,
    (int)v479);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v545);
  if ( v70 != (struct SystemEffectDescriptor *)-56LL )
LABEL_115:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v70 + 56));
LABEL_116:
  v74 = v485;
  if ( !*((_BYTE *)v485 + 52) )
    goto LABEL_147;
  v32 = (struct _RTL_CRITICAL_SECTION *)((char *)v485 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v485 + 56));
  v622 = (char *)v485 + 56;
  v29 = 0LL;
  v525 = 0LL;
  v24 = 0LL;
  v526 = 0LL;
  v33 = 0LL;
  v75 = 0;
  if ( *((int *)v485 + 10) > 0 )
  {
    v76 = 0LL;
    do
    {
      if ( v76 < 0 || v75 >= *((_DWORD *)v74 + 10) )
        goto LABEL_767;
      v77 = *((_QWORD *)v74 + 4);
      if ( (_DWORD)v24 == (_DWORD)v33 )
      {
        if ( (_DWORD)v33 )
        {
          v33 = (unsigned int)(2 * (_DWORD)v24);
          if ( ((unsigned int)v24 & 0x40000000) != 0 )
            goto LABEL_761;
        }
        else
        {
          v33 = 1LL;
        }
        if ( (unsigned __int64)(int)v33 > 0x7FFFFFF || (v78 = _o__recalloc(v29, (int)v33, 16LL), (v29 = v78) == 0) )
        {
LABEL_761:
          v359 = 2147942414LL;
          v360 = 502LL;
          goto LABEL_763;
        }
        HIDWORD(v526) = v33;
        v525 = (volatile signed __int32 **)v78;
      }
      v79 = (volatile signed __int32 **)(v29 + 16LL * (int)v24);
      if ( v79 )
      {
        *v79 = 0LL;
        v79[1] = 0LL;
        v80 = *(_QWORD *)(v77 + v76 + 8);
        if ( v80 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v80 + 8));
          v33 = HIDWORD(v526);
          LODWORD(v24) = v526;
          v29 = (unsigned __int64)v525;
        }
        *v79 = *(volatile signed __int32 **)(v77 + v76);
        v79[1] = *(volatile signed __int32 **)(v77 + v76 + 8);
      }
      v24 = (volatile signed __int32 *)(unsigned int)((_DWORD)v24 + 1);
      LODWORD(v526) = (_DWORD)v24;
      ++v75;
      v76 += 16LL;
      v74 = v485;
    }
    while ( v75 < *((_DWORD *)v485 + 10) );
  }
  v33 = 0LL;
  if ( (int)v24 <= 0 )
  {
LABEL_137:
    if ( v29 )
    {
      if ( (int)v24 > 0 )
      {
        v29 += 8LL;
        v33 = (unsigned int)v24;
        do
        {
          v24 = *(volatile signed __int32 **)v29;
          if ( *(_QWORD *)v29 && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_768:
            (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          }
          v29 += 16LL;
          --v33;
        }
        while ( v33 );
        v29 = (unsigned __int64)v525;
      }
      free((void *)v29);
    }
    if ( v32 )
LABEL_146:
      LeaveCriticalSection(v32);
  }
  else
  {
    v81 = (volatile signed __int32 **)v29;
    while ( 1 )
    {
      if ( (int)v33 < 0 )
        goto LABEL_767;
      if ( *((_BYTE *)*v81 + 20) )
      {
        v361 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v525,
                                                 (unsigned int)v33);
        v362 = SystemEffectChainDescriptor::Resolve(*v361, v74);
        if ( v362 < 0 )
          break;
      }
      v33 = (unsigned int)(v33 + 1);
      v81 += 2;
      if ( (int)v33 >= (int)v24 )
        goto LABEL_137;
    }
    v359 = (unsigned int)v362;
    v360 = 508LL;
LABEL_763:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v360,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v359,
      (int)v479);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v525);
    if ( v485 != (struct SystemEffectDescriptor *)-56LL )
      goto LABEL_146;
  }
LABEL_147:
  if ( !*v610 )
    goto LABEL_212;
  v82 = 1;
  if ( !*(_QWORD *)(a1 + 64) )
    goto LABEL_153;
  pvar = 0LL;
  v587 = 0LL;
  v588 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v82 = v587 == 0;
  }
  PropVariantClear(&pvar);
  if ( v82 || a5 == eKeywordDetectorConnector )
LABEL_153:
    v83 = 1;
  else
    v83 = 0;
  v623 = v22;
  if ( v83 )
  {
    v616 = v22;
    v579 = v22;
    if ( *((_BYTE *)v488 + 52) )
    {
      v84 = 0;
      if ( *((int *)v488 + 10) > 0 )
      {
        v29 = 0LL;
        while ( 1 )
        {
          if ( v84 < 0 || v84 >= *((_DWORD *)v488 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
            __debugbreak();
          }
          if ( *(_BYTE *)(*(_QWORD *)(v29 + *((_QWORD *)v488 + 4)) + 20LL) )
          {
            v363 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (char *)v488 + 32,
                                 (unsigned int)v84);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v363, &v579) != -1 )
              break;
          }
          ++v84;
          v29 += 16LL;
          if ( v84 >= *((_DWORD *)v488 + 10) )
            goto LABEL_162;
        }
        v29 = (unsigned __int64)v488 + 56;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
        v629 = (char *)v488 + 56;
        v364 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                 (char *)v488 + 32,
                 (unsigned int)v84);
        v365 = *(volatile signed __int32 **)(v364 + 8);
        if ( v365 )
        {
          _InterlockedIncrement(v365 + 2);
          v365 = *(volatile signed __int32 **)(v364 + 8);
        }
        v624 = *(SystemEffectChainDescriptor **)v364;
        v625 = v365;
        if ( (int)SystemEffectChainDescriptor::Resolve(v624, v488) < 0 )
        {
          if ( v365 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v365);
          if ( v488 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
          goto LABEL_782;
        }
        if ( v365 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v365);
        if ( v488 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
      }
    }
LABEL_162:
    v85 = 0;
    v86 = *((_DWORD *)v488 + 10);
    if ( v86 > 0 )
    {
      v87 = 0LL;
      while ( 1 )
      {
        if ( v87 < 0 || v85 >= v86 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
          goto LABEL_795;
        }
        v31 = *(struct SystemEffectDescriptor **)(v87 + *((_QWORD *)v488 + 4));
        v88 = 0;
        v89 = *((_DWORD *)v31 + 2);
        if ( v89 > 0 )
        {
          v90 = *(_QWORD *)v31;
          while ( 1 )
          {
            LODWORD(v31) = 2 * v88;
            v91 = *(_QWORD *)(v90 + 16LL * v88) - *(_QWORD *)&v579.Data1;
            if ( !v91 )
              v91 = *(_QWORD *)(v90 + 16LL * v88 + 8) - *(_QWORD *)v579.Data4;
            if ( !v91 )
              break;
            if ( ++v88 >= v89 )
              goto LABEL_791;
          }
          if ( v88 != -1 )
            break;
        }
LABEL_791:
        ++v85;
        v87 += 16LL;
        if ( v85 >= v86 )
          goto LABEL_782;
      }
      if ( v85 != -1 )
      {
        if ( v85 < 0 || v85 >= v86 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
          __debugbreak();
        }
        v92 = *(_QWORD *)(*((_QWORD *)v488 + 4) + 16LL * v85);
LABEL_176:
        if ( !v92 )
          goto LABEL_212;
        goto LABEL_177;
      }
    }
LABEL_782:
    if ( !*((_QWORD *)v488 + 2)
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         *((__int64 **)v488 + 2),
                         &v616) == -1 )
    {
      v92 = 0LL;
    }
    goto LABEL_176;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v488, &v623) == -1 )
    goto LABEL_212;
LABEL_177:
  v93 = 0LL;
  v539 = 0LL;
  v498 = 0LL;
  if ( !v488 )
    goto LABEL_211;
  pv = 0LL;
  v628 = v22;
  v613 = v22;
  v86 = 0;
  if ( *((int *)v488 + 10) <= 0 )
    goto LABEL_184;
  v29 = 0LL;
  while ( 1 )
  {
    if ( v86 < 0 || v86 >= *((_DWORD *)v488 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
      __debugbreak();
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v29 + *((_QWORD *)v488 + 4)) + 20LL) )
      goto LABEL_183;
LABEL_795:
    v366 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                         (char *)v488 + 32,
                         (unsigned int)v86);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v366, &v613) != -1 )
      break;
LABEL_183:
    ++v86;
    v29 += 16LL;
    if ( v86 >= *((_DWORD *)v488 + 10) )
      goto LABEL_184;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
  v635 = (char *)v488 + 56;
  v367 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v488 + 32, (unsigned int)v86);
  v368 = *(volatile signed __int32 **)(v367 + 8);
  if ( v368 )
  {
    _InterlockedIncrement(v368 + 2);
    v368 = *(volatile signed __int32 **)(v367 + 8);
  }
  v626 = *(SystemEffectChainDescriptor **)v367;
  v627 = v368;
  if ( (int)SystemEffectChainDescriptor::Resolve(v626, v488) < 0 )
  {
    if ( v368 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v368);
    if ( v488 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
    goto LABEL_803;
  }
  if ( v368 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v368);
  if ( v488 != (struct SystemEffectDescriptor *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v488 + 56));
LABEL_184:
  v94 = 0;
  v95 = *((_DWORD *)v488 + 10);
  if ( v95 <= 0 )
    goto LABEL_803;
  v96 = 0LL;
  while ( 1 )
  {
    if ( v96 < 0 || v94 >= v95 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
      __debugbreak();
    }
    v31 = *(struct SystemEffectDescriptor **)(v96 + *((_QWORD *)v488 + 4));
    v97 = 0;
    v98 = *((_DWORD *)v31 + 2);
    if ( v98 > 0 )
    {
      v99 = *(_QWORD *)v31;
      while ( 1 )
      {
        LODWORD(v31) = 2 * v97;
        v100 = *(_QWORD *)(v99 + 16LL * v97) - *(_QWORD *)&v613.Data1;
        if ( !v100 )
          v100 = *(_QWORD *)(v99 + 16LL * v97 + 8) - *(_QWORD *)v613.Data4;
        if ( !v100 )
          break;
        if ( ++v97 >= v98 )
          goto LABEL_812;
      }
      if ( v97 != -1 )
        break;
    }
LABEL_812:
    ++v94;
    v96 += 16LL;
    if ( v94 >= v95 )
      goto LABEL_803;
  }
  if ( v94 == -1 )
  {
LABEL_803:
    v101 = *((_QWORD *)v488 + 2);
    if ( !v101
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         *((__int64 **)v488 + 2),
                         &v628) == -1 )
    {
      v101 = 0LL;
    }
  }
  else
  {
    if ( v94 < 0 || v94 >= v95 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
      __debugbreak();
    }
    v101 = *(_QWORD *)(*((_QWORD *)v488 + 4) + 16LL * v94);
  }
  v102 = 0;
  v103 = 0LL;
  pv = 0LL;
  if ( v101 )
  {
    v102 = *(_DWORD *)(v101 + 48);
    v104 = v102 == 0;
    if ( v102 > 0 )
    {
      v105 = 0LL;
      v106 = *(int *)(v101 + 48);
      v107 = -1LL;
      if ( v106 != 1 )
        v107 = 0xFFFFFFFFFFFFFFFFuLL / v106;
      if ( v107 >= 0x10 )
      {
        v108 = 16 * v106;
        if ( v108 > 0x7FFFFFFF )
        {
          v105 = 0LL;
        }
        else
        {
          v109 = CoTaskMemAlloc((unsigned int)v108);
          v105 = v109;
          if ( v109 )
          {
            memcpy_0(v109, *(const void **)(v101 + 40), 16LL * *(int *)(v101 + 48));
            pv = v105;
            CoTaskMemFree(0LL);
            v102 = *(_DWORD *)(v101 + 48);
            v103 = v105;
            goto LABEL_206;
          }
        }
      }
      v28 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v479);
      CoTaskMemFree(v105);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x459,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL,
        v481);
LABEL_819:
      ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&pv);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v539);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x119,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v28,
        v482);
LABEL_824:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v498);
LABEL_855:
      if ( v508 )
        CoTaskMemFree(v508);
      goto LABEL_691;
    }
  }
  else
  {
LABEL_206:
    v104 = v102 == 0;
  }
  if ( !v104 )
  {
    v560 = 0;
    v608 = v103;
    v564 = v102;
    v561 = *(_DWORD *)(a1 + 156);
    v559 = 1;
    v110 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
             &v539,
             &v559,
             &v560,
             &v561,
             (unsigned int *)&v564,
             &v608);
    v111 = v110;
    if ( v110 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x463,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v110,
        (int)v479);
      v28 = v111;
      goto LABEL_819;
    }
    v103 = pv;
  }
  CoTaskMemFree(v103);
  pv = 0LL;
  v93 = v539;
LABEL_211:
  v539 = 0LL;
  v498 = v93;
LABEL_212:
  if ( v498 )
  {
    v589 = &v508;
    v590 = 0LL;
    v591 = 1;
    (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, LPVOID *))(*(_QWORD *)v498 + 32LL))(
      v498,
      &v493,
      &v590);
    if ( v591 )
    {
      v112 = v590;
      v113 = v589;
      v114 = *v589;
      if ( v590 != *v589 )
      {
        if ( v114 )
          CoTaskMemFree(v114);
        *v113 = v112;
      }
    }
  }
  if ( v498 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v498 + 16LL))(v498);
  v28 = -2147024882;
  LODWORD(v29) = a5;
  v23 = a3;
LABEL_221:
  if ( !v494 )
  {
    v115 = v493 + 4;
    v116 = 16LL * (v493 + 4);
    v117 = CoTaskMemAlloc(v116 + 216);
    v118 = v117;
    if ( v117 )
    {
      v499 = v117;
      memset_0(v117, 0, v116 + 216);
      *v118 = 0;
      v118[22] = v23;
      *((_QWORD *)v118 + 12) = 0LL;
      v119 = v118 + 34;
      v118[34] = 0;
      v118[28] = 0;
      if ( a18 )
      {
        if ( *v119 > 0x1F )
        {
          v28 = -2147418113;
          v371 = 312LL;
          goto LABEL_854;
        }
        v118[28] = 1 << *v119;
        *(GUID *)&v118[4 * (*v119)++ + 54] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
      }
      else
      {
        for ( i = 0; i < v493; ++i )
        {
          v121 = *((_QWORD *)v508 + 2 * i) - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
          if ( !v121 )
            v121 = *((_QWORD *)v508 + 2 * i + 1) - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
          if ( !v121 )
          {
            if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v508) )
            {
              if ( RpcImpersonateClient(0LL) >= 0 )
              {
                v379 = IsVirtualSurroundAllowedForProcess(a8);
                RpcRevertToSelf();
                if ( !v379 )
                  continue;
              }
            }
          }
          if ( *v119 > 0x1F )
          {
            v28 = -2147418113;
            v371 = 335LL;
            goto LABEL_854;
          }
          v118[28] |= 1 << *v119;
          *(_OWORD *)&v118[4 * (*v119)++ + 54] = *((_OWORD *)v508 + i);
        }
        v23 = a3;
      }
      *(GUID *)&v118[4 * (*v119)++ + 54] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      *(GUID *)&v118[4 * (*v119)++ + 54] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      *(GUID *)&v118[4 * (*v119)++ + 54] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
      if ( !a18 && a17 && CoGetPSClsid(&GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae, &pClsid) >= 0 )
        *(GUID *)&v118[4 * (*v119)++ + 54] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
      v118[1] = v23 >> 31;
LABEL_235:
      LODWORD(v29) = a5;
      goto LABEL_236;
    }
    v371 = 300LL;
LABEL_854:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v371,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v28,
      (int)v479);
    goto LABEL_855;
  }
  if ( v494 == 1 )
  {
    v115 = v493 + 2;
    v374 = 16LL * (v493 + 2);
    v375 = CoTaskMemAlloc(v374 + 216);
    v376 = v375;
    if ( !v375 )
    {
      v371 = 366LL;
      goto LABEL_854;
    }
    v499 = v375;
    memset_0(v375, 0, v374 + 216);
    *v376 = 1;
    v376[22] = v23;
    *((_QWORD *)v376 + 12) = 0LL;
    v376[28] = 0;
    v119 = v376 + 34;
    v376[34] = 0;
    *((_QWORD *)v376 + 26) = a20;
    if ( a19 )
      *((_QWORD *)v376 + 25) = a16;
    v377 = 0;
    if ( v493 )
    {
      v378 = *v119;
      do
      {
        if ( v378 > 0x1F )
        {
          v28 = -2147418113;
          v371 = 381LL;
          goto LABEL_854;
        }
        v376[28] |= 1 << v378;
        *(_OWORD *)&v376[4 * (*v119)++ + 54] = *((_OWORD *)v508 + v377);
        v378 = *v119;
        ++v377;
      }
      while ( v377 < v493 );
    }
    *(GUID *)&v376[4 * (*v119)++ + 54] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    *(GUID *)&v376[4 * (*v119)++ + 54] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
    v376[1] = v23 >> 31;
    goto LABEL_235;
  }
  if ( v494 != 2 )
  {
    v28 = -2147024809;
    v371 = 417LL;
    goto LABEL_854;
  }
  v115 = 3;
  v372 = (char *)CoTaskMemAlloc(0x108uLL);
  v373 = v372;
  if ( !v372 )
  {
    v371 = 400LL;
    goto LABEL_854;
  }
  v499 = v372;
  memset_0(v372, 0, 0x108uLL);
  *(_DWORD *)v373 = ((_DWORD)v29 != 2) + 1;
  *((_DWORD *)v373 + 22) = v23;
  *((_QWORD *)v373 + 12) = 0LL;
  v119 = (unsigned int *)(v373 + 136);
  *((_DWORD *)v373 + 34) = 3;
  *(GUID *)(v373 + 216) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
  *(GUID *)(v373 + 232) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
  *(GUID *)(v373 + 248) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
  *((_DWORD *)v373 + 28) = 0;
  *((_DWORD *)v373 + 1) = v23 >> 31;
LABEL_236:
  if ( *v119 > v115 )
  {
    v28 = -2147418113;
    v371 = 421LL;
    goto LABEL_854;
  }
  if ( v508 )
    CoTaskMemFree(v508);
  v26 = v537;
  v25 = (CEndpointCharacteristics *)a1;
LABEL_240:
  v122 = (GUID *)v499;
  v123 = v510;
  *(struct _GUID *)((char *)v499 + 116) = *v510;
  *(_DWORD *)v122->Data4 = v29;
  *(_QWORD *)&v122[5].Data1 = a9;
  *(_DWORD *)v122[4].Data4 = *(unsigned __int16 *)(a9 + 16) + 18;
  *(_QWORD *)v122[1].Data4 = a11;
  *(_QWORD *)&v122[2].Data1 = a12;
  *(_DWORD *)&v122->Data4[4] = a8;
  *(_QWORD *)&v122[1].Data1 = a13;
  v27 = (__int64)&GUID_00000000_0000_0000_0000_000000000000;
  v124 = a14;
  if ( !a14 )
    v124 = &GUID_00000000_0000_0000_0000_000000000000;
  v122[3] = *v124;
  v122[9] = *(GUID *)a15;
  v122[10] = *(GUID *)(a15 + 16);
  v122[11] = *(GUID *)(a15 + 32);
  *(_QWORD *)&v122[12].Data1 = *(_QWORD *)(a15 + 48);
  *(_QWORD *)&v122[4].Data1 = a16;
LABEL_243:
  v125 = 0LL;
  if ( !v26 )
  {
LABEL_686:
    if ( v612 )
    {
      v332 = v499;
      v499 = 0LL;
      *v612 = v332;
    }
    if ( v26 )
    {
      v333 = v538;
      v538 = 0LL;
      *v26 = v333;
    }
    v28 = 0;
    goto LABEL_691;
  }
  v511 = 0LL;
  v536 = 0LL;
  v492 = 0;
  v506 = 0LL;
  v126 = *v123;
  v511 = 0LL;
  v506 = 0LL;
  v127 = 96LL * (int)a5;
  v486 = (struct SystemEffectDescriptor *)v127;
  v128 = (char *)v25 + v127 + 232;
  if ( v128[52] )
  {
    v129 = (struct _RTL_CRITICAL_SECTION *)(v128 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v128 + 56));
    v568 = (struct _RTL_CRITICAL_SECTION *)(v128 + 56);
    v130 = 0LL;
    v514 = 0LL;
    v131 = 0LL;
    v515 = 0;
    v132 = 0;
    v516 = 0;
    v133 = 0;
    if ( *((int *)v128 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( v125 < 0 || v133 >= *((_DWORD *)v128 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v27);
          __debugbreak();
        }
        v134 = *((_QWORD *)v128 + 4);
        if ( (_DWORD)v131 == v132 )
        {
          if ( v132 )
          {
            v132 = 2 * (_DWORD)v131;
            if ( ((unsigned int)v131 & 0x40000000) != 0 )
              goto LABEL_888;
          }
          else
          {
            v132 = 1;
          }
          if ( (unsigned __int64)v132 > 0x7FFFFFF
            || (v135 = _o__recalloc(v130, v132, 16LL), (v130 = (volatile signed __int32 **)v135) == 0LL) )
          {
LABEL_888:
            v394 = 2147942414LL;
            v395 = 502LL;
            goto LABEL_890;
          }
          v516 = v132;
          v514 = (volatile signed __int32 **)v135;
        }
        v136 = &v130[2 * (int)v131];
        if ( v136 )
        {
          *v136 = 0LL;
          v136[1] = 0LL;
          v137 = *(_QWORD *)(v134 + v125 + 8);
          if ( v137 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v137 + 8));
            v132 = v516;
            LODWORD(v131) = v515;
            v130 = v514;
          }
          *v136 = *(volatile signed __int32 **)(v134 + v125);
          v136[1] = *(volatile signed __int32 **)(v134 + v125 + 8);
        }
        v131 = (volatile signed __int32 *)(unsigned int)((_DWORD)v131 + 1);
        v515 = (int)v131;
        ++v133;
        v125 += 16LL;
        v128 = (char *)v486 + a1 + 232;
        if ( v133 >= *((_DWORD *)v128 + 10) )
        {
          v125 = 0LL;
          break;
        }
      }
    }
    v138 = 0LL;
    if ( (int)v131 <= 0 )
    {
LABEL_266:
      if ( v130 )
      {
        if ( (int)v131 > 0 )
        {
          ++v130;
          v138 = (unsigned int)v131;
          do
          {
            v131 = *v130;
            if ( *v130 && _InterlockedExchangeAdd(v131 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_895:
              (**(void (__fastcall ***)(volatile signed __int32 *))v131)(v131);
              if ( _InterlockedExchangeAdd(v131 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v131 + 8LL))(v131);
            }
            v130 += 2;
            --v138;
          }
          while ( v138 );
          v130 = v514;
        }
        free(v130);
      }
      if ( v129 )
        LeaveCriticalSection(v129);
    }
    else
    {
      v125 = (__int64)v130;
      while ( 1 )
      {
        if ( (int)v138 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v27);
          goto LABEL_895;
        }
        if ( *(_BYTE *)(*(_QWORD *)v125 + 20LL) )
        {
          v396 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v514,
                                                   (unsigned int)v138);
          v397 = SystemEffectChainDescriptor::Resolve(*v396, (struct SystemEffectDescriptor *)v128);
          if ( v397 < 0 )
            break;
        }
        v138 = (unsigned int)(v138 + 1);
        v125 += 16LL;
        if ( (int)v138 >= (int)v131 )
        {
          v125 = 0LL;
          goto LABEL_266;
        }
      }
      v394 = (unsigned int)v397;
      v395 = 508LL;
LABEL_890:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v395,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v394,
        (int)v479);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v514);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v568);
      v125 = 0LL;
    }
    v127 = (__int64)v486;
  }
  v139 = (struct SystemEffectDescriptor *)(v127 + a1 + 616);
  v489 = v139;
  if ( *((_BYTE *)v139 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
    v569 = (struct _RTL_CRITICAL_SECTION *)((char *)v139 + 56);
    v140 = (char *)v125;
    v547 = (char *)v125;
    v141 = (unsigned int)v125;
    v548 = v125;
    v549 = v125;
    if ( *((int *)v139 + 10) > 0 )
    {
      while ( 1 )
      {
        v398 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                 (char *)v139 + 32,
                 (unsigned int)v125);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v547,
                              v398) )
          break;
        LODWORD(v125) = v125 + 1;
        if ( (int)v125 >= *((_DWORD *)v139 + 10) )
        {
          v141 = v548;
          v140 = v547;
          goto LABEL_279;
        }
      }
      v399 = 2147942414LL;
      v400 = 502LL;
    }
    else
    {
LABEL_279:
      v142 = 0;
      if ( (int)v141 <= 0 )
      {
LABEL_280:
        if ( v140 )
        {
          if ( (int)v141 > 0 )
          {
            v403 = v140;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v403);
              v403 += 16;
              --v141;
            }
            while ( v141 );
          }
          free(v140);
        }
        if ( v139 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
        goto LABEL_283;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v547, v142)
                      + 20LL) )
        {
          v401 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v547,
                                                   v142);
          v402 = SystemEffectChainDescriptor::Resolve(*v401, v139);
          if ( v402 < 0 )
            break;
        }
        if ( (int)++v142 >= (int)v141 )
          goto LABEL_280;
      }
      v399 = (unsigned int)v402;
      v400 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v400,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v399,
      (int)v479);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v547);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v569);
  }
LABEL_283:
  v143 = (char *)(v127 + a1 + 1000);
  if ( v143[52] )
  {
    v144 = (struct _RTL_CRITICAL_SECTION *)(v143 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v143 + 56));
    v570 = (struct _RTL_CRITICAL_SECTION *)(v143 + 56);
    v145 = 0LL;
    v517 = 0LL;
    v146 = 0LL;
    v518 = 0LL;
    v147 = 0;
    v148 = 0;
    if ( *((int *)v143 + 10) > 0 )
    {
      v149 = 0LL;
      do
      {
        if ( v149 < 0 || v148 >= *((_DWORD *)v143 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v27);
          __debugbreak();
        }
        v150 = *((_QWORD *)v143 + 4);
        if ( (_DWORD)v146 == v147 )
        {
          if ( v147 )
          {
            v147 = 2 * (_DWORD)v146;
            if ( ((unsigned int)v146 & 0x40000000) != 0 )
              goto LABEL_912;
          }
          else
          {
            v147 = 1;
          }
          if ( (unsigned __int64)v147 > 0x7FFFFFF
            || (v151 = _o__recalloc(v145, v147, 16LL), (v145 = (volatile signed __int32 **)v151) == 0LL) )
          {
LABEL_912:
            v404 = 2147942414LL;
            v405 = 502LL;
            goto LABEL_914;
          }
          HIDWORD(v518) = v147;
          v517 = (volatile signed __int32 **)v151;
        }
        v152 = &v145[2 * (int)v146];
        if ( v152 )
        {
          *v152 = 0LL;
          v152[1] = 0LL;
          v153 = *(_QWORD *)(v150 + v149 + 8);
          if ( v153 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v153 + 8));
            v147 = HIDWORD(v518);
            LODWORD(v146) = v518;
            v145 = v517;
          }
          *v152 = *(volatile signed __int32 **)(v150 + v149);
          v152[1] = *(volatile signed __int32 **)(v150 + v149 + 8);
        }
        v146 = (volatile signed __int32 *)(unsigned int)((_DWORD)v146 + 1);
        LODWORD(v518) = (_DWORD)v146;
        ++v148;
        v149 += 16LL;
        v143 = (char *)v486 + a1 + 1000;
      }
      while ( v148 < *((_DWORD *)v143 + 10) );
    }
    v154 = 0LL;
    if ( (int)v146 <= 0 )
    {
LABEL_304:
      if ( v145 )
      {
        if ( (int)v146 > 0 )
        {
          ++v145;
          v154 = (unsigned int)v146;
          do
          {
            v146 = *v145;
            if ( *v145 && _InterlockedExchangeAdd(v146 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_919:
              (**(void (__fastcall ***)(volatile signed __int32 *))v146)(v146);
              if ( _InterlockedExchangeAdd(v146 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v146 + 8LL))(v146);
            }
            v145 += 2;
            --v154;
          }
          while ( v154 );
          v145 = v517;
        }
        free(v145);
      }
      if ( v144 )
        LeaveCriticalSection(v144);
    }
    else
    {
      v155 = v145;
      while ( 1 )
      {
        if ( (int)v154 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v27);
          goto LABEL_919;
        }
        if ( *((_BYTE *)*v155 + 20) )
        {
          v406 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v517,
                                                   (unsigned int)v154);
          v407 = SystemEffectChainDescriptor::Resolve(*v406, (struct SystemEffectDescriptor *)v143);
          if ( v407 < 0 )
            break;
        }
        v154 = (unsigned int)(v154 + 1);
        v155 += 2;
        if ( (int)v154 >= (int)v146 )
          goto LABEL_304;
      }
      v404 = (unsigned int)v407;
      v405 = 508LL;
LABEL_914:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v405,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v404,
        (int)v479);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v517);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v570);
    }
    v127 = (__int64)v486;
    v139 = v489;
  }
  v156 = a1;
  v157 = 1;
  if ( !*(_DWORD *)(a1 + 4LL * (int)a5 + 48) )
    goto LABEL_925;
  v158 = 1;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v159 = a5;
LABEL_321:
    v160 = 1;
    goto LABEL_322;
  }
  v583 = 0LL;
  v584 = 0LL;
  v585 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v583) >= 0
    && (_WORD)v583 == 19 )
  {
    v158 = v584 == 0;
  }
  PropVariantClear(&v583);
  v159 = a5;
  if ( v158 || a5 == eKeywordDetectorConnector )
    goto LABEL_321;
  v160 = 0;
LABEL_322:
  v630 = v126;
  if ( !v160 )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v139, &v630) != -1 )
      goto LABEL_333;
    goto LABEL_925;
  }
  v609 = v126;
  v614 = v126;
  if ( *((_BYTE *)v139 + 52) )
  {
    v161 = 0;
    if ( *((int *)v139 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (char *)v139 + 32,
                                     v161)
                      + 20LL) )
        {
          v408 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (char *)v139 + 32,
                               v161);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v408, &v614) != -1 )
            break;
        }
        if ( (signed int)++v161 >= *((_DWORD *)v139 + 10) )
          goto LABEL_942;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
      v636 = (char *)v139 + 56;
      v409 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v139 + 32, v161);
      v410 = *(volatile signed __int32 **)(v409 + 8);
      if ( v410 )
      {
        _InterlockedIncrement(v410 + 2);
        v410 = *(volatile signed __int32 **)(v409 + 8);
      }
      v631 = *(SystemEffectChainDescriptor **)v409;
      v632 = v410;
      if ( (int)SystemEffectChainDescriptor::Resolve(v631, v139) >= 0 )
      {
        if ( v410 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v410);
        if ( v139 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
LABEL_942:
        v159 = a5;
        goto LABEL_325;
      }
      if ( v410 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v410);
      if ( v139 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
      goto LABEL_935;
    }
  }
LABEL_325:
  v162 = 0;
  if ( *((int *)v139 + 10) > 0 )
  {
    while ( 1 )
    {
      v411 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (char *)v139 + 32,
                           v162);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v411, &v614) != -1 )
        break;
      if ( (signed int)++v162 >= *((_DWORD *)v139 + 10) )
        goto LABEL_935;
    }
    if ( v162 != -1 )
    {
      v27 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v139 + 32, v162);
      v159 = a5;
      goto LABEL_332;
    }
LABEL_935:
    v159 = a5;
  }
  v27 = *((_QWORD *)v139 + 2);
  if ( !v27 )
    goto LABEL_949;
  v163 = 0;
  v164 = *(_DWORD *)(v27 + 8);
  if ( v164 <= 0 )
    goto LABEL_949;
  while ( 1 )
  {
    v165 = (_QWORD *)(*(_QWORD *)v27 + 16LL * v163);
    v166 = *v165 - *(_QWORD *)&v609.Data1;
    if ( *v165 == *(_QWORD *)&v609.Data1 )
      v166 = v165[1] - *(_QWORD *)v609.Data4;
    if ( !v166 )
      break;
    if ( ++v163 >= v164 )
      goto LABEL_949;
  }
  if ( v163 == -1 )
LABEL_949:
    v27 = 0LL;
LABEL_332:
  if ( !v27 )
  {
LABEL_925:
    v201 = 0LL;
    goto LABEL_441;
  }
LABEL_333:
  v617 = v126;
  if ( v159 )
    goto LABEL_339;
  v167 = 1;
  if ( !*(_QWORD *)(a1 + 64) )
    goto LABEL_339;
  v595 = 0LL;
  v596 = 0LL;
  v597 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v595) >= 0
    && (_WORD)v595 == 19 )
  {
    v167 = v596 == 0;
  }
  PropVariantClear(&v595);
  if ( v167 )
  {
LABEL_339:
    v168 = (char *)(v127 + a1 + 232);
    if ( v168[52] )
    {
      v169 = (struct _RTL_CRITICAL_SECTION *)(v168 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v168 + 56));
      v571 = (struct _RTL_CRITICAL_SECTION *)(v168 + 56);
      v171 = 0LL;
      v527 = 0LL;
      v172 = 0LL;
      v528 = 0LL;
      v173 = 0;
      v174 = 0;
      if ( *((int *)v168 + 10) > 0 )
      {
        v175 = 0LL;
        do
        {
          if ( v175 < 0 || v174 >= *((_DWORD *)v168 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v170);
            __debugbreak();
          }
          v176 = *((_QWORD *)v168 + 4);
          if ( (_DWORD)v172 == v173 )
          {
            if ( v173 )
            {
              v173 = 2 * (_DWORD)v172;
              if ( ((unsigned int)v172 & 0x40000000) != 0 )
                goto LABEL_952;
            }
            else
            {
              v173 = 1;
            }
            if ( (unsigned __int64)v173 > 0x7FFFFFF
              || (v177 = _o__recalloc(v171, v173, 16LL), (v171 = (volatile signed __int32 **)v177) == 0LL) )
            {
LABEL_952:
              v412 = 2147942414LL;
              v413 = 502LL;
              goto LABEL_954;
            }
            HIDWORD(v528) = v173;
            v527 = (volatile signed __int32 **)v177;
          }
          v178 = &v171[2 * (int)v172];
          if ( v178 )
          {
            *v178 = 0LL;
            v178[1] = 0LL;
            v179 = *(_QWORD *)(v176 + v175 + 8);
            if ( v179 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v179 + 8));
              v173 = HIDWORD(v528);
              LODWORD(v172) = v528;
              v171 = v527;
            }
            *v178 = *(volatile signed __int32 **)(v176 + v175);
            v178[1] = *(volatile signed __int32 **)(v176 + v175 + 8);
          }
          v172 = (volatile signed __int32 *)(unsigned int)((_DWORD)v172 + 1);
          LODWORD(v528) = (_DWORD)v172;
          ++v174;
          v175 += 16LL;
          v168 = (char *)v486 + a1 + 232;
        }
        while ( v174 < *((_DWORD *)v168 + 10) );
      }
      v180 = 0LL;
      if ( (int)v172 <= 0 )
      {
LABEL_360:
        if ( v171 )
        {
          if ( (int)v172 > 0 )
          {
            ++v171;
            v180 = (unsigned int)v172;
            do
            {
              v172 = *v171;
              if ( *v171 && _InterlockedExchangeAdd(v172 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_959:
                (**(void (__fastcall ***)(volatile signed __int32 *))v172)(v172);
                if ( _InterlockedExchangeAdd(v172 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v172 + 8LL))(v172);
              }
              v171 += 2;
              --v180;
            }
            while ( v180 );
            v171 = v527;
          }
          free(v171);
        }
        if ( v169 )
          LeaveCriticalSection(v169);
      }
      else
      {
        v181 = v171;
        while ( 1 )
        {
          if ( (int)v180 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, v170);
            goto LABEL_959;
          }
          if ( *((_BYTE *)*v181 + 20) )
          {
            v414 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v527,
                                                     (unsigned int)v180);
            v415 = SystemEffectChainDescriptor::Resolve(*v414, (struct SystemEffectDescriptor *)v168);
            if ( v415 < 0 )
              break;
          }
          v180 = (unsigned int)(v180 + 1);
          v181 += 2;
          if ( (int)v180 >= (int)v172 )
            goto LABEL_360;
        }
        v412 = (unsigned int)v415;
        v413 = 508LL;
LABEL_954:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v413,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v412,
          (int)v479);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v527);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v571);
      }
      v127 = (__int64)v486;
      v139 = v489;
    }
    if ( *((_BYTE *)v139 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
      v572 = (struct _RTL_CRITICAL_SECTION *)((char *)v139 + 56);
      v182 = 0LL;
      v550 = 0LL;
      v183 = 0LL;
      v551 = 0LL;
      v184 = 0;
      if ( *((int *)v139 + 10) > 0 )
      {
        while ( 1 )
        {
          v416 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v139 + 32, v184);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v550,
                                v416) )
            break;
          if ( (signed int)++v184 >= *((_DWORD *)v139 + 10) )
          {
            v183 = (unsigned int)v551;
            v182 = v550;
            goto LABEL_373;
          }
        }
        v417 = 2147942414LL;
        v418 = 502LL;
      }
      else
      {
LABEL_373:
        v185 = 0;
        if ( (int)v183 <= 0 )
        {
LABEL_374:
          if ( v182 )
          {
            if ( (int)v183 > 0 )
            {
              v421 = v182;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v421);
                v421 += 16;
                --v183;
              }
              while ( v183 );
            }
            free(v182);
          }
          if ( v139 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
          goto LABEL_377;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v550,
                                       v185)
                        + 20LL) )
          {
            v419 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v550,
                                                     v185);
            v420 = SystemEffectChainDescriptor::Resolve(*v419, v139);
            if ( v420 < 0 )
              break;
          }
          if ( (int)++v185 >= (int)v183 )
            goto LABEL_374;
        }
        v417 = (unsigned int)v420;
        v418 = 508LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v418,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v417,
        (int)v479);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v550);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v572);
    }
LABEL_377:
    v186 = (char *)(v127 + a1 + 1000);
    if ( v186[52] )
    {
      v187 = (struct _RTL_CRITICAL_SECTION *)(v186 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v186 + 56));
      v573 = (struct _RTL_CRITICAL_SECTION *)(v186 + 56);
      v189 = 0LL;
      v529 = 0LL;
      v190 = 0LL;
      v530 = 0LL;
      v191 = 0;
      v192 = 0;
      if ( *((int *)v186 + 10) > 0 )
      {
        v193 = 0LL;
        do
        {
          if ( v193 < 0 || v192 >= *((_DWORD *)v186 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v188);
            __debugbreak();
          }
          v194 = *((_QWORD *)v186 + 4);
          if ( (_DWORD)v190 == v191 )
          {
            if ( v191 )
            {
              v191 = 2 * (_DWORD)v190;
              if ( ((unsigned int)v190 & 0x40000000) != 0 )
                goto LABEL_976;
            }
            else
            {
              v191 = 1;
            }
            if ( (unsigned __int64)v191 > 0x7FFFFFF
              || (v195 = _o__recalloc(v189, v191, 16LL), (v189 = (volatile signed __int32 **)v195) == 0LL) )
            {
LABEL_976:
              v422 = 2147942414LL;
              v423 = 502LL;
              goto LABEL_978;
            }
            HIDWORD(v530) = v191;
            v529 = (volatile signed __int32 **)v195;
          }
          v196 = &v189[2 * (int)v190];
          if ( v196 )
          {
            *v196 = 0LL;
            v196[1] = 0LL;
            v197 = *(_QWORD *)(v194 + v193 + 8);
            if ( v197 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v197 + 8));
              v191 = HIDWORD(v530);
              LODWORD(v190) = v530;
              v189 = v529;
            }
            *v196 = *(volatile signed __int32 **)(v194 + v193);
            v196[1] = *(volatile signed __int32 **)(v194 + v193 + 8);
          }
          v190 = (volatile signed __int32 *)(unsigned int)((_DWORD)v190 + 1);
          LODWORD(v530) = (_DWORD)v190;
          ++v192;
          v193 += 16LL;
          v186 = (char *)v486 + a1 + 1000;
        }
        while ( v192 < *((_DWORD *)v186 + 10) );
      }
      v198 = 0LL;
      if ( (int)v190 <= 0 )
      {
LABEL_398:
        if ( v189 )
        {
          if ( (int)v190 > 0 )
          {
            ++v189;
            v198 = (unsigned int)v190;
            do
            {
              v190 = *v189;
              if ( *v189 && _InterlockedExchangeAdd(v190 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_983:
                (**(void (__fastcall ***)(volatile signed __int32 *))v190)(v190);
                if ( _InterlockedExchangeAdd(v190 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v190 + 8LL))(v190);
              }
              v189 += 2;
              --v198;
            }
            while ( v198 );
            v189 = v529;
          }
          free(v189);
        }
        if ( v187 )
          LeaveCriticalSection(v187);
      }
      else
      {
        v199 = v189;
        while ( 1 )
        {
          if ( (int)v198 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, v188);
            goto LABEL_983;
          }
          if ( *((_BYTE *)*v199 + 20) )
          {
            v424 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v529,
                                                     (unsigned int)v198);
            v425 = SystemEffectChainDescriptor::Resolve(*v424, (struct SystemEffectDescriptor *)v186);
            if ( v425 < 0 )
              break;
          }
          v198 = (unsigned int)(v198 + 1);
          v199 += 2;
          if ( (int)v198 >= (int)v190 )
            goto LABEL_398;
        }
        v422 = (unsigned int)v425;
        v423 = 508LL;
LABEL_978:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v423,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v422,
          (int)v479);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v529);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v573);
      }
      v127 = (__int64)v486;
      v139 = v489;
    }
    v156 = a1;
    v200 = (__int64 *)(a1 + 16LL * (int)a5 + 72);
    v157 = 1;
  }
  else
  {
    v200 = (__int64 *)(a1 + 136);
  }
  v201 = 0LL;
  v27 = 0LL;
  v202 = *((_DWORD *)v200 + 2);
  if ( v202 <= 0 )
    goto LABEL_416;
  v203 = *v200;
  while ( 1 )
  {
    v204 = *(_QWORD *)(v203 + 16LL * (int)v27) - *(_QWORD *)&v617.Data1;
    if ( !v204 )
      v204 = *(_QWORD *)(v203 + 16LL * (int)v27 + 8) - *(_QWORD *)v617.Data4;
    if ( !v204 )
      break;
    v27 = (unsigned int)(v27 + 1);
    if ( (int)v27 >= v202 )
      goto LABEL_416;
  }
  if ( (_DWORD)v27 == -1 )
LABEL_416:
    v157 = 0;
  v205 = 0LL;
  v509 = 0LL;
  v511 = 0LL;
  v506 = 0LL;
  if ( !v139 )
    goto LABEL_440;
  v501 = 0LL;
  v618 = v126;
  v615 = v126;
  v206 = 0;
  if ( *((int *)v139 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (char *)v139 + 32,
                                   v206)
                    + 20LL) )
      {
        v426 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (char *)v139 + 32,
                             v206);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v426, &v615) != -1 )
          break;
      }
      if ( (signed int)++v206 >= *((_DWORD *)v139 + 10) )
        goto LABEL_1003;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
    v637 = (char *)v139 + 56;
    v427 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v139 + 32, v206);
    v428 = *(volatile signed __int32 **)(v427 + 8);
    if ( v428 )
    {
      _InterlockedIncrement(v428 + 2);
      v428 = *(volatile signed __int32 **)(v427 + 8);
    }
    v633 = *(SystemEffectChainDescriptor **)v427;
    v634 = v428;
    if ( (int)SystemEffectChainDescriptor::Resolve(v633, v139) >= 0 )
    {
      if ( v428 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v428);
      if ( v139 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
LABEL_1003:
      v201 = 0LL;
      goto LABEL_419;
    }
    if ( v428 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v428);
    if ( v139 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v139 + 56));
    v201 = 0LL;
  }
  else
  {
LABEL_419:
    v207 = 0;
    if ( *((int *)v139 + 10) > 0 )
    {
      while ( 1 )
      {
        v429 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (char *)v139 + 32,
                             v207);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v429, &v615) != -1 )
          break;
        if ( (signed int)++v207 >= *((_DWORD *)v139 + 10) )
          goto LABEL_420;
      }
      if ( v207 != -1 )
      {
        v208 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            (char *)v139 + 32,
                            v207);
        goto LABEL_426;
      }
    }
  }
LABEL_420:
  v208 = *((_QWORD *)v139 + 2);
  if ( !v208 )
    goto LABEL_1010;
  v209 = 0;
  v210 = *(_DWORD *)(v208 + 8);
  if ( v210 <= 0 )
    goto LABEL_1010;
  while ( 1 )
  {
    v211 = (_QWORD *)(*(_QWORD *)v208 + 16LL * v209);
    v212 = *v211 - *(_QWORD *)&v618.Data1;
    if ( *v211 == *(_QWORD *)&v618.Data1 )
      v212 = v211[1] - *(_QWORD *)v618.Data4;
    if ( !v212 )
      break;
    if ( ++v209 >= v210 )
      goto LABEL_1010;
  }
  if ( v209 == -1 )
LABEL_1010:
    v208 = 0LL;
LABEL_426:
  LODWORD(v213) = 0;
  v214 = 0LL;
  v501 = 0LL;
  if ( v208 )
  {
    v213 = *(int *)(v208 + 48);
    v215 = (_DWORD)v213 == 0;
    if ( (int)v213 > 0 )
    {
      v216 = 0LL;
      v217 = -1LL;
      if ( v213 != 1 )
        v217 = 0xFFFFFFFFFFFFFFFFuLL / v213;
      if ( v217 >= 0x10 )
      {
        v218 = 16LL * *(int *)(v208 + 48);
        if ( v218 <= 0x7FFFFFFF )
        {
          v219 = CoTaskMemAlloc((unsigned int)v218);
          v216 = v219;
          if ( v219 )
          {
            memcpy_0(v219, *(const void **)(v208 + 40), 16LL * *(int *)(v208 + 48));
            v501 = v216;
            CoTaskMemFree(0LL);
            LODWORD(v213) = *(_DWORD *)(v208 + 48);
            v214 = v501;
            goto LABEL_434;
          }
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v479);
      CoTaskMemFree(v216);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x459,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL,
        v483);
      ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v501);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v509);
      v221 = -2147024882;
LABEL_1015:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v221,
        (int)v479);
      v28 = v221;
      goto LABEL_1148;
    }
  }
  else
  {
LABEL_434:
    v215 = (_DWORD)v213 == 0;
  }
  if ( v215 )
  {
LABEL_439:
    CoTaskMemFree(v214);
    v501 = 0LL;
    v205 = v509;
LABEL_440:
    v509 = 0LL;
    v511 = v205;
LABEL_441:
    v222 = a5;
    goto LABEL_442;
  }
  v556 = v157 == 1;
  v607 = v214;
  v558 = v213;
  v557 = *(_DWORD *)(v156 + 156);
  v563 = 2;
  v220 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
           &v509,
           &v563,
           &v556,
           &v557,
           (unsigned int *)&v558,
           &v607);
  v221 = v220;
  if ( v220 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x463,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v220,
      v480);
    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v501);
    v222 = a5;
  }
  else
  {
    v639 = v126;
    v222 = a5;
    LODWORD(v479) = a5;
    v223 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD))(*(_QWORD *)v509 + 24LL))(
             v509,
             *(_QWORD *)(v156 + 16),
             &v639,
             0LL);
    v221 = v223;
    if ( v223 >= 0 )
    {
      v214 = v501;
      goto LABEL_439;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x467,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v223,
      a5);
    CoTaskMemFree(v501);
    v501 = 0LL;
  }
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v509);
  if ( v221 < 0 )
    goto LABEL_1015;
LABEL_442:
  if ( v511 )
  {
    v598 = &v536;
    v599 = 0LL;
    v600 = 1;
    (*(void (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v511 + 32LL))(v511, &v492, &v599);
    if ( v600 )
    {
      v224 = v599;
      v225 = v598;
      v226 = *v598;
      if ( v599 != *v598 )
      {
        if ( v226 )
          CoTaskMemFree(v226);
        *v225 = v224;
      }
    }
  }
  if ( (a3 & 0x800000) != 0 )
  {
    if ( (_DWORD)v495 )
    {
      v28 = -2147418113;
      v430 = 503LL;
      goto LABEL_1147;
    }
    goto LABEL_679;
  }
  v27 = (unsigned int)v495;
  if ( (_DWORD)v495 || v222 && v222 != eKeywordDetectorConnector )
  {
    v227 = v494;
    goto LABEL_1020;
  }
  v227 = v494;
  if ( v494 == 2 )
    goto LABEL_1020;
  v228 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v228 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v228 )
  {
LABEL_1020:
    if ( v222 == eOffloadConnector && !(_DWORD)v495 )
    {
      v431 = 1;
      if ( v492 > 1 )
        v431 = v492;
      v432 = 16LL * v431;
      v433 = (char *)CoTaskMemAlloc(v432 + 60);
      v434 = v433;
      if ( !v433 )
      {
        v430 = 558LL;
        goto LABEL_1146;
      }
      v538 = v433;
      memset_0(v433, 0, v432 + 60);
      *(_DWORD *)v434 = v227;
      *((_DWORD *)v434 + 1) = 0;
      *((_DWORD *)v434 + 14) = 0;
      v435 = 0LL;
      if ( v492 )
      {
        v436 = 0;
        while ( v436 <= 0x1F )
        {
          *((_DWORD *)v434 + 8) |= 1 << v436;
          *(_OWORD *)&v434[16 * (*((_DWORD *)v434 + 14))++ + 60] = *((_OWORD *)v536 + (unsigned int)v435);
          v436 = *((_DWORD *)v434 + 14);
          v435 = (unsigned int)(v435 + 1);
          if ( (unsigned int)v435 >= v492 )
            goto LABEL_1029;
        }
        v28 = -2147418113;
        v430 = 567LL;
        goto LABEL_1147;
      }
LABEL_1029:
      *(struct _GUID *)(v434 + 36) = *v510;
      wil::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>(
        &v562,
        v506,
        v435);
      *((_DWORD *)v434 + 13) = v562 != 0;
      if ( *((_DWORD *)v434 + 14) > v431 )
      {
        v28 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x242,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8000FFFFLL,
          (int)v479);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v562);
        goto LABEL_1148;
      }
      *((_QWORD *)v434 + 2) = a10;
      *((_DWORD *)v434 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v562);
    }
LABEL_679:
    if ( v506 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v506 + 16LL))(v506, v27);
    if ( v536 )
      CoTaskMemFree(v536);
    if ( v511 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v511 + 16LL))(v511, v27);
    v26 = v537;
    goto LABEL_686;
  }
  Block = 0LL;
  v497 = 0LL;
  v229 = 0;
  v619 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( v222 )
    goto LABEL_461;
  v230 = 1;
  if ( !*(_QWORD *)(a1 + 64) )
    goto LABEL_461;
  v601 = 0LL;
  v602 = 0LL;
  v603 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v601) >= 0
    && (_WORD)v601 == 19 )
  {
    v230 = v602 == 0;
  }
  PropVariantClear(&v601);
  if ( v230 )
  {
LABEL_461:
    v231 = (char *)(a1 + v127 + 232);
    if ( v231[52] )
    {
      v232 = (struct _RTL_CRITICAL_SECTION *)(v231 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v231 + 56));
      v574 = (struct _RTL_CRITICAL_SECTION *)(v231 + 56);
      v234 = 0LL;
      v531 = 0LL;
      v235 = 0LL;
      v532 = 0;
      v533 = 0;
      v236 = 0;
      if ( *((int *)v231 + 10) > 0 )
      {
        v237 = 0LL;
        do
        {
          if ( v237 < 0 || v236 >= *((_DWORD *)v231 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v233);
            __debugbreak();
          }
          v238 = *((_QWORD *)v231 + 4);
          if ( (_DWORD)v235 == (_DWORD)v201 )
          {
            if ( (_DWORD)v201 )
            {
              LODWORD(v201) = 2 * v235;
              if ( (v235 & 0x40000000) != 0 )
                goto LABEL_1033;
            }
            else
            {
              LODWORD(v201) = 1;
            }
            if ( (unsigned __int64)(int)v201 > 0x7FFFFFF
              || (v239 = _o__recalloc(v234, (int)v201, 16LL), (v234 = (volatile signed __int32 *)v239) == 0LL) )
            {
LABEL_1033:
              v437 = 2147942414LL;
              v438 = 502LL;
              goto LABEL_1035;
            }
            v533 = v201;
            v531 = (volatile signed __int32 *)v239;
          }
          v240 = &v234[4 * (int)v235];
          if ( v240 )
          {
            *(_QWORD *)v240 = 0LL;
            *((_QWORD *)v240 + 1) = 0LL;
            v241 = *(_QWORD *)(v238 + v237 + 8);
            if ( v241 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v241 + 8));
              LODWORD(v201) = v533;
              LODWORD(v235) = v532;
              v234 = v531;
            }
            *(_QWORD *)v240 = *(_QWORD *)(v238 + v237);
            *((_QWORD *)v240 + 1) = *(_QWORD *)(v238 + v237 + 8);
          }
          v235 = (unsigned int)(v235 + 1);
          v532 = v235;
          ++v236;
          v237 += 16LL;
          v231 = (char *)v486 + a1 + 232;
        }
        while ( v236 < *((_DWORD *)v231 + 10) );
      }
      v242 = 0LL;
      if ( (int)v235 <= 0 )
      {
LABEL_482:
        if ( v234 )
        {
          if ( (int)v235 > 0 )
          {
            v242 = (volatile signed __int32 **)(v234 + 2);
            do
            {
              v234 = *v242;
              if ( *v242 && _InterlockedExchangeAdd(v234 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_1040:
                (**(void (__fastcall ***)(volatile signed __int32 *))v234)(v234);
                if ( _InterlockedExchangeAdd(v234 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v234 + 8LL))(v234);
              }
              v242 += 2;
              --v235;
            }
            while ( v235 );
            v234 = v531;
          }
          free((void *)v234);
        }
        if ( v232 )
          LeaveCriticalSection(v232);
      }
      else
      {
        v243 = v234;
        while ( 1 )
        {
          if ( (int)v242 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, v233);
            goto LABEL_1040;
          }
          if ( *(_BYTE *)(*(_QWORD *)v243 + 20LL) )
          {
            v439 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v531,
                                                     (unsigned int)v242);
            v440 = SystemEffectChainDescriptor::Resolve(*v439, (struct SystemEffectDescriptor *)v231);
            if ( v440 < 0 )
              break;
          }
          v242 = (volatile signed __int32 **)(unsigned int)((_DWORD)v242 + 1);
          v243 += 4;
          if ( (int)v242 >= (int)v235 )
            goto LABEL_482;
        }
        v437 = (unsigned int)v440;
        v438 = 508LL;
LABEL_1035:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v438,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v437,
          (int)v479);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v531);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v574);
      }
      LODWORD(v201) = 0;
      v127 = (__int64)v486;
    }
    v244 = v489;
    if ( *((_BYTE *)v489 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v489 + 56));
      v575 = (struct _RTL_CRITICAL_SECTION *)((char *)v489 + 56);
      v245 = 0LL;
      v552 = 0LL;
      v553 = 0LL;
      v246 = 0;
      if ( *((int *)v489 + 10) > 0 )
      {
        while ( 1 )
        {
          v441 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v489 + 32, v246);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v552,
                                v441) )
            break;
          if ( (signed int)++v246 >= *((_DWORD *)v489 + 10) )
          {
            LODWORD(v201) = v553;
            v245 = v552;
            goto LABEL_495;
          }
        }
        v442 = 2147942414LL;
        v443 = 502LL;
      }
      else
      {
LABEL_495:
        v247 = 0;
        if ( (int)v201 <= 0 )
        {
LABEL_496:
          if ( v245 )
          {
            if ( (int)v201 > 0 )
            {
              v446 = v245;
              v201 = (unsigned int)v201;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v446);
                v446 += 16;
                --v201;
              }
              while ( v201 );
            }
            free(v245);
          }
          if ( v489 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v489 + 56));
          goto LABEL_499;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v552,
                                       v247)
                        + 20LL) )
          {
            v444 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v552,
                                                     v247);
            v445 = SystemEffectChainDescriptor::Resolve(*v444, v489);
            if ( v445 < 0 )
              break;
          }
          if ( (int)++v247 >= (int)v201 )
            goto LABEL_496;
        }
        v442 = (unsigned int)v445;
        v443 = 508LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v443,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v442,
        (int)v479);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v552);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v575);
    }
LABEL_499:
    v248 = (char *)(v127 + a1 + 1000);
    if ( v248[52] )
    {
      v249 = (struct _RTL_CRITICAL_SECTION *)(v248 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v248 + 56));
      v567 = (struct _RTL_CRITICAL_SECTION *)(v248 + 56);
      v251 = 0LL;
      v534 = 0LL;
      v252 = 0LL;
      v535 = 0LL;
      v253 = 0;
      v254 = 0;
      if ( *((int *)v248 + 10) > 0 )
      {
        v255 = 0LL;
        do
        {
          if ( v255 < 0 || v254 >= *((_DWORD *)v248 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v250);
            __debugbreak();
          }
          v256 = *((_QWORD *)v248 + 4);
          if ( (_DWORD)v252 == v253 )
          {
            if ( v253 )
            {
              v253 = 2 * v252;
              if ( (v252 & 0x40000000) != 0 )
                goto LABEL_1057;
            }
            else
            {
              v253 = 1;
            }
            if ( (unsigned __int64)v253 > 0x7FFFFFF
              || (v257 = _o__recalloc(v251, v253, 16LL), (v251 = (volatile signed __int32 *)v257) == 0LL) )
            {
LABEL_1057:
              v447 = 2147942414LL;
              v448 = 502LL;
              goto LABEL_1059;
            }
            HIDWORD(v535) = v253;
            v534 = (volatile signed __int32 *)v257;
          }
          v258 = &v251[4 * (int)v252];
          if ( v258 )
          {
            *(_QWORD *)v258 = 0LL;
            *((_QWORD *)v258 + 1) = 0LL;
            v259 = *(_QWORD *)(v256 + v255 + 8);
            if ( v259 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v259 + 8));
              v253 = HIDWORD(v535);
              LODWORD(v252) = v535;
              v251 = v534;
            }
            *(_QWORD *)v258 = *(_QWORD *)(v256 + v255);
            *((_QWORD *)v258 + 1) = *(_QWORD *)(v256 + v255 + 8);
          }
          v252 = (unsigned int)(v252 + 1);
          LODWORD(v535) = v252;
          ++v254;
          v255 += 16LL;
          v248 = (char *)v486 + a1 + 1000;
        }
        while ( v254 < *((_DWORD *)v248 + 10) );
      }
      v260 = 0LL;
      if ( (int)v252 <= 0 )
      {
LABEL_520:
        if ( v251 )
        {
          if ( (int)v252 > 0 )
          {
            v260 = (volatile signed __int32 **)(v251 + 2);
            do
            {
              v251 = *v260;
              if ( *v260 && _InterlockedExchangeAdd(v251 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_1064:
                (**(void (__fastcall ***)(volatile signed __int32 *))v251)(v251);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v251);
              }
              v260 += 2;
              --v252;
            }
            while ( v252 );
            v251 = v534;
          }
          free((void *)v251);
        }
        if ( v249 )
          LeaveCriticalSection(v249);
      }
      else
      {
        v261 = v251;
        while ( 1 )
        {
          if ( (int)v260 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, v250);
            goto LABEL_1064;
          }
          if ( *(_BYTE *)(*(_QWORD *)v261 + 20LL) )
          {
            v449 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v534,
                                                     (unsigned int)v260);
            v450 = SystemEffectChainDescriptor::Resolve(*v449, (struct SystemEffectDescriptor *)v248);
            if ( v450 < 0 )
              break;
          }
          v260 = (volatile signed __int32 **)(unsigned int)((_DWORD)v260 + 1);
          v261 += 4;
          if ( (int)v260 >= (int)v252 )
            goto LABEL_520;
        }
        v447 = (unsigned int)v450;
        v448 = 508LL;
LABEL_1059:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v448,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v447,
          (int)v479);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v534);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v567);
      }
      v127 = (__int64)v486;
      v244 = v489;
    }
    v262 = a1 + 72 + 16LL * (int)a5;
    v229 = 0;
    v201 = 0LL;
  }
  else
  {
    v262 = a1 + 136;
    v244 = v489;
  }
  v27 = 0LL;
  v263 = *(_DWORD *)(v262 + 8);
  if ( v263 <= 0 )
    goto LABEL_1066;
  v264 = *(_QWORD *)v262;
  while ( 1 )
  {
    v265 = *(_QWORD *)(v264 + 16LL * (int)v27) - *(_QWORD *)&v619.Data1;
    if ( !v265 )
      v265 = *(_QWORD *)(v264 + 16LL * (int)v27 + 8) - *(_QWORD *)v619.Data4;
    if ( !v265 )
      break;
    v27 = (unsigned int)(v27 + 1);
    if ( (int)v27 >= v263 )
      goto LABEL_1066;
  }
  if ( (_DWORD)v27 == -1 )
  {
LABEL_1066:
    v229 = 0;
    goto LABEL_1067;
  }
  v266 = 1;
  if ( !*(_QWORD *)(a1 + 64) )
    goto LABEL_543;
  v604 = 0LL;
  v605 = 0LL;
  v606 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v604) >= 0
    && (_WORD)v604 == 19 )
  {
    v266 = v605 == 0;
  }
  PropVariantClear(&v604);
  if ( v266 || (v267 = 0, a5 == eKeywordDetectorConnector) )
LABEL_543:
    v267 = 1;
  if ( !v267 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, v244);
    if ( (_DWORD)v497 != *((_DWORD *)v244 + 2) )
    {
      v451 = retaddr;
      v452 = 570LL;
      goto LABEL_1072;
    }
    goto LABEL_569;
  }
  if ( !*((_BYTE *)v244 + 52) )
    goto LABEL_552;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v244 + 56));
  v576 = (struct _RTL_CRITICAL_SECTION *)((char *)v244 + 56);
  v268 = 0LL;
  v554 = 0LL;
  v555 = 0LL;
  v269 = 0;
  if ( *((int *)v244 + 10) > 0 )
  {
    while ( 1 )
    {
      v453 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v244 + 32, v269);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v554,
                            v453) )
        break;
      if ( (signed int)++v269 >= *((_DWORD *)v244 + 10) )
      {
        LODWORD(v201) = v555;
        v268 = v554;
        goto LABEL_547;
      }
    }
    v454 = 2147942414LL;
    v455 = 502LL;
    goto LABEL_1078;
  }
LABEL_547:
  v270 = 0;
  if ( (int)v201 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v554, v270)
                    + 20LL) )
      {
        v456 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v554,
                                                 v270);
        v457 = SystemEffectChainDescriptor::Resolve(*v456, v244);
        if ( v457 < 0 )
          break;
      }
      if ( (int)++v270 >= (int)v201 )
        goto LABEL_548;
    }
    v454 = (unsigned int)v457;
    v455 = 508LL;
LABEL_1078:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v455,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v454,
      (int)v479);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v554);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v576);
    goto LABEL_551;
  }
LABEL_548:
  if ( v268 )
  {
    if ( (int)v201 > 0 )
    {
      v458 = v268;
      v201 = (unsigned int)v201;
      do
      {
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v458);
        v458 += 16;
        --v201;
      }
      while ( v201 );
    }
    free(v268);
  }
  if ( v244 != (struct SystemEffectDescriptor *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v244 + 56));
LABEL_551:
  v201 = 0LL;
LABEL_552:
  v271 = 0;
  if ( *((int *)v244 + 10) > 0 )
  {
    do
    {
      for ( j = 0;
            (signed int)j < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     (char *)v244 + 32,
                                                     v271)
                                      + 8LL);
            ++j )
      {
        v460 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (char *)v244 + 32,
                           v271);
        v461 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v460, j);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&Block, v461) == -1 )
        {
          v462 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (char *)v244 + 32,
                             v271);
          v463 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v462, j);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, v463) )
          {
            v451 = retaddr;
            v452 = 584LL;
            goto LABEL_1072;
          }
        }
      }
      ++v271;
    }
    while ( (signed int)v271 < *((_DWORD *)v244 + 10) );
    v201 = 0LL;
  }
  v272 = (__int64 *)*((_QWORD *)v244 + 2);
  if ( v272 )
  {
    for ( k = 0; k < *((_DWORD *)v272 + 2); ++k )
    {
      if ( k < 0 || k >= *((_DWORD *)v272 + 2) )
      {
        ATL::_AtlRaiseException(0xC000008C, v27);
        __debugbreak();
      }
      v27 = *v272 + 16LL * k;
      v274 = 0;
      if ( (int)v497 <= 0 )
        goto LABEL_558;
      while ( !IsEqualGUID((const struct _GUID *)Block + v274, (const struct _GUID *)v27) )
      {
        v274 = v464 + 1;
        if ( v274 >= (int)v497 )
          goto LABEL_558;
      }
      if ( v464 == -1 )
      {
LABEL_558:
        if ( k >= *((_DWORD *)v272 + 2) )
        {
          ATL::_AtlRaiseException(0xC000008C, v27);
          __debugbreak();
        }
        v275 = *v272;
        if ( (_DWORD)v497 == HIDWORD(v497) )
        {
          if ( HIDWORD(v497) )
          {
            v276 = 2 * v497;
            if ( (v497 & 0x40000000) != 0 )
              goto LABEL_1101;
          }
          else
          {
            v276 = 1;
          }
          if ( (unsigned __int64)v276 > 0x7FFFFFF || (v277 = (void *)_o__recalloc(Block, v276, 16LL)) == 0LL )
          {
LABEL_1101:
            v451 = retaddr;
            v452 = 596LL;
LABEL_1072:
            wil::details::in1diag3::Return_Hr(
              v451,
              (void *)v452,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v479);
            break;
          }
          HIDWORD(v497) = v276;
          Block = v277;
        }
        v278 = (char *)Block + 16 * (int)v497;
        if ( v278 )
          *v278 = *(_OWORD *)(v275 + v201);
        LODWORD(v497) = v497 + 1;
      }
      v201 += 16LL;
      v272 = (__int64 *)*((_QWORD *)v244 + 2);
    }
  }
LABEL_569:
  v279 = 0LL;
  v280 = 0;
  LODWORD(v495) = 0;
  if ( (int)v497 <= 0 )
    goto LABEL_1067;
  v281 = 0LL;
  v490 = 0LL;
  v282 = a1;
  while ( 2 )
  {
    if ( v281 < 0 )
      goto LABEL_1138;
    v620 = *((_OWORD *)Block + v281);
    if ( a5 == eHostProcessConnector )
    {
      v283 = 1;
      if ( *(_QWORD *)(v282 + 64) )
      {
        v580 = 0LL;
        v581 = 0LL;
        v582 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v282 + 64) + 40LL))(
               *(_QWORD *)(v282 + 64),
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v580) >= 0
          && (_WORD)v580 == 19 )
        {
          v283 = v581 == 0;
        }
        PropVariantClear(&v580);
        if ( !v283 )
        {
          v321 = (__int64 *)(a1 + 136);
          v282 = a1;
          goto LABEL_656;
        }
      }
    }
    v284 = (char *)(v127 + a1 + 232);
    if ( v284[52] )
    {
      v285 = (struct _RTL_CRITICAL_SECTION *)(v284 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v284 + 56));
      v577 = (struct _RTL_CRITICAL_SECTION *)(v284 + 56);
      v287 = 0LL;
      v502 = 0LL;
      v288 = 0;
      v503 = 0LL;
      v289 = 0;
      v290 = 0;
      if ( *((int *)v284 + 10) > 0 )
      {
        while ( 1 )
        {
          if ( v279 < 0 || v290 >= *((_DWORD *)v284 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v286);
            __debugbreak();
          }
          v291 = *((_QWORD *)v284 + 4);
          if ( v288 == v289 )
          {
            if ( v289 )
            {
              v289 = 2 * v288;
              if ( (v288 & 0x40000000) != 0 )
                goto LABEL_1106;
            }
            else
            {
              v289 = 1;
            }
            if ( (unsigned __int64)v289 > 0x7FFFFFF
              || (v292 = _o__recalloc(v287, v289, 16LL), (v287 = (volatile signed __int32 **)v292) == 0LL) )
            {
LABEL_1106:
              v465 = 2147942414LL;
              v466 = 502LL;
              goto LABEL_1108;
            }
            HIDWORD(v503) = v289;
            v502 = (volatile signed __int32 **)v292;
          }
          v293 = &v287[2 * v288];
          if ( v293 )
          {
            *v293 = 0LL;
            v293[1] = 0LL;
            v294 = *(_QWORD *)(v291 + v279 + 8);
            if ( v294 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v294 + 8));
              v289 = HIDWORD(v503);
              v288 = v503;
              v287 = v502;
            }
            *v293 = *(volatile signed __int32 **)(v291 + v279);
            v293[1] = *(volatile signed __int32 **)(v291 + v279 + 8);
          }
          LODWORD(v503) = ++v288;
          ++v290;
          v279 += 16LL;
          v284 = (char *)v486 + a1 + 232;
          if ( v290 >= *((_DWORD *)v284 + 10) )
          {
            v279 = 0LL;
            break;
          }
        }
      }
      v295 = 0;
      if ( v288 <= 0 )
      {
LABEL_601:
        if ( v287 )
        {
          if ( v288 > 0 )
          {
            v297 = v287 + 1;
            v298 = (unsigned int)v288;
            do
            {
              v299 = *v297;
              if ( *v297 && _InterlockedExchangeAdd(v299 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v299)(v299);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v299);
              }
              v297 += 2;
              --v298;
            }
            while ( v298 );
            v287 = v502;
          }
          free(v287);
          v502 = 0LL;
        }
        v503 = 0LL;
        if ( v285 )
          LeaveCriticalSection(v285);
      }
      else
      {
        v296 = v287;
        while ( 1 )
        {
          if ( v295 < 0 || v295 >= v288 )
          {
            ATL::_AtlRaiseException(0xC000008C, v286);
LABEL_1136:
            ATL::_AtlRaiseException(0xC000008C, v307);
            __debugbreak();
          }
          if ( *((_BYTE *)*v296 + 20) )
          {
            v467 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v502,
                                                     (unsigned int)v295);
            v468 = SystemEffectChainDescriptor::Resolve(*v467, (struct SystemEffectDescriptor *)v284);
            if ( v468 < 0 )
              break;
          }
          ++v295;
          v296 += 2;
          if ( v295 >= v288 )
          {
            v279 = 0LL;
            goto LABEL_601;
          }
        }
        v465 = (unsigned int)v468;
        v466 = 508LL;
LABEL_1108:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v466,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v465,
          (int)v479);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v502);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v577);
        v279 = 0LL;
      }
      v127 = (__int64)v486;
    }
    v282 = a1;
    v300 = v127 + a1 + 616;
    if ( *(_BYTE *)(v300 + 52) )
    {
      v301 = (struct _RTL_CRITICAL_SECTION *)(v300 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v300 + 56));
      v578 = (struct _RTL_CRITICAL_SECTION *)(v300 + 56);
      v302 = 0LL;
      v512 = 0LL;
      v513 = 0LL;
      v303 = 0;
      if ( *(int *)(v300 + 40) > 0 )
      {
        while ( 1 )
        {
          v469 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v300 + 32, v303);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v512,
                                v469) )
            break;
          if ( (signed int)++v303 >= *(_DWORD *)(v300 + 40) )
          {
            LODWORD(v279) = v513;
            v302 = v512;
            goto LABEL_615;
          }
        }
        v470 = 2147942414LL;
        v471 = 502LL;
      }
      else
      {
LABEL_615:
        v304 = 0;
        if ( (int)v279 <= 0 )
        {
LABEL_616:
          if ( v302 )
          {
            if ( (int)v279 > 0 )
            {
              v474 = v302;
              v279 = (unsigned int)v279;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v474);
                v474 += 16;
                --v279;
              }
              while ( v279 );
            }
            free(v302);
            v279 = 0LL;
            v512 = 0LL;
          }
          else
          {
            v279 = 0LL;
          }
          v513 = 0LL;
          if ( v301 )
            LeaveCriticalSection(v301);
          goto LABEL_620;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v512,
                                       v304)
                        + 20LL) )
          {
            v472 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v512,
                                                     v304);
            v473 = SystemEffectChainDescriptor::Resolve(*v472, (struct SystemEffectDescriptor *)v300);
            if ( v473 < 0 )
              break;
          }
          if ( (int)++v304 >= (int)v279 )
            goto LABEL_616;
        }
        v470 = (unsigned int)v473;
        v471 = 508LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v471,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v470,
        (int)v479);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v512);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v578);
      v279 = 0LL;
    }
LABEL_620:
    v305 = v127 + a1 + 1000;
    if ( !*(_BYTE *)(v305 + 52) )
      goto LABEL_655;
    v306 = (struct _RTL_CRITICAL_SECTION *)(v305 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v305 + 56));
    v565 = (struct _RTL_CRITICAL_SECTION *)(v305 + 56);
    v308 = 0LL;
    v504 = 0LL;
    v309 = 0;
    v505 = 0LL;
    v310 = 0;
    v311 = 0;
    if ( *(int *)(v305 + 40) > 0 )
    {
      do
      {
        if ( v279 < 0 || v311 >= *(_DWORD *)(v305 + 40) )
          goto LABEL_1136;
        v312 = *(_QWORD *)(v305 + 32);
        if ( v309 == v310 )
        {
          if ( v310 )
          {
            v310 = 2 * v309;
            if ( (v309 & 0x40000000) != 0 )
              goto LABEL_1126;
          }
          else
          {
            v310 = 1;
          }
          if ( (unsigned __int64)v310 > 0x7FFFFFF
            || (v313 = _o__recalloc(v308, v310, 16LL), (v308 = (volatile signed __int32 **)v313) == 0LL) )
          {
LABEL_1126:
            v475 = 2147942414LL;
            v476 = 502LL;
            goto LABEL_1128;
          }
          HIDWORD(v505) = v310;
          v504 = (volatile signed __int32 **)v313;
        }
        v314 = &v308[2 * v309];
        if ( v314 )
        {
          *v314 = 0LL;
          v314[1] = 0LL;
          v315 = *(_QWORD *)(v312 + v279 + 8);
          if ( v315 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v315 + 8));
            v310 = HIDWORD(v505);
            v309 = v505;
            v308 = v504;
          }
          *v314 = *(volatile signed __int32 **)(v312 + v279);
          v314[1] = *(volatile signed __int32 **)(v312 + v279 + 8);
        }
        LODWORD(v505) = ++v309;
        ++v311;
        v279 += 16LL;
      }
      while ( v311 < *(_DWORD *)(v305 + 40) );
      v306 = (struct _RTL_CRITICAL_SECTION *)(v305 + 56);
      v279 = 0LL;
    }
    v316 = 0;
    if ( v309 <= 0 )
      goto LABEL_643;
    v317 = v308;
    while ( 1 )
    {
      if ( v316 < 0 || v316 >= v309 )
      {
        ATL::_AtlRaiseException(0xC000008C, v307);
LABEL_1138:
        ATL::_AtlRaiseException(0xC000008C, v27);
        goto LABEL_1139;
      }
      if ( *((_BYTE *)*v317 + 20) )
      {
        v477 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v504,
                                                 (unsigned int)v316);
        v478 = SystemEffectChainDescriptor::Resolve(*v477, (struct SystemEffectDescriptor *)v305);
        if ( v478 < 0 )
          break;
      }
      ++v316;
      v317 += 2;
      if ( v316 >= v309 )
      {
        v279 = 0LL;
LABEL_643:
        if ( v308 )
        {
          if ( v309 > 0 )
          {
            v318 = v308 + 1;
            v319 = (unsigned int)v309;
            do
            {
              v320 = *v318;
              if ( *v318 && _InterlockedExchangeAdd(v320 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v320)(v320);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v320);
              }
              v318 += 2;
              --v319;
            }
            while ( v319 );
            v308 = v504;
          }
          free(v308);
          v504 = 0LL;
        }
        v505 = 0LL;
        if ( v306 )
          LeaveCriticalSection(v306);
        goto LABEL_654;
      }
    }
    v475 = (unsigned int)v478;
    v476 = 508LL;
LABEL_1128:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v476,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v475,
      (int)v479);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v504);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v565);
    v279 = 0LL;
LABEL_654:
    v282 = a1;
    v127 = (__int64)v486;
LABEL_655:
    v321 = (__int64 *)(v282 + 16LL * (int)a5 + 72);
    v281 = (__int64)v490;
    v280 = v495;
LABEL_656:
    v27 = 0LL;
    v322 = *((_DWORD *)v321 + 2);
    if ( v322 <= 0 )
      goto LABEL_662;
    v323 = *v321;
    while ( 1 )
    {
      v324 = *(_QWORD *)(v323 + 16LL * (int)v27) - v620;
      if ( !v324 )
        v324 = *(_QWORD *)(v323 + 16LL * (int)v27 + 8) - *((_QWORD *)&v620 + 1);
      if ( !v324 )
        break;
      v27 = (unsigned int)(v27 + 1);
      if ( (int)v27 >= v322 )
        goto LABEL_662;
    }
    if ( (_DWORD)v27 == -1 )
    {
LABEL_662:
      v325 = 1;
      v229 = 1;
      goto LABEL_663;
    }
    LODWORD(v495) = ++v280;
    v490 = (struct SystemEffectDescriptor *)++v281;
    if ( v280 < (int)v497 )
      continue;
    break;
  }
  v229 = 0;
LABEL_1067:
  v325 = 1;
LABEL_663:
  if ( Block )
    free(Block);
  if ( !v229 )
    goto LABEL_679;
  v326 = 1;
  if ( v492 > 1 )
    v326 = v492;
  v327 = 16LL * v326;
  v328 = (char *)CoTaskMemAlloc(v327 + 60);
  v329 = v328;
  if ( !v328 )
  {
    v430 = 526LL;
LABEL_1146:
    v28 = -2147024882;
    goto LABEL_1147;
  }
  v538 = v328;
  memset_0(v328, 0, v327 + 60);
  *(_DWORD *)v329 = v494;
  *((_DWORD *)v329 + 1) = 0;
  *((_DWORD *)v329 + 14) = 0;
  v330 = 0;
  if ( !v492 )
  {
LABEL_673:
    *(struct _GUID *)(v329 + 36) = *v510;
    if ( v506 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v506)(
        v506,
        &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
        &v542);
      if ( v542 )
      {
LABEL_676:
        *((_DWORD *)v329 + 13) = v325;
        if ( *((_DWORD *)v329 + 14) > v326 )
        {
          v28 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x221,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x8000FFFFLL,
            (int)v479);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v542);
          goto LABEL_1148;
        }
        *((_QWORD *)v329 + 2) = a10;
        *((_DWORD *)v329 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
        if ( v542 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v542 + 16LL))(v542);
        goto LABEL_679;
      }
    }
    else
    {
      v542 = 0LL;
    }
    v325 = 0;
    goto LABEL_676;
  }
  v331 = 0;
  while ( v331 <= 0x1F )
  {
    *((_DWORD *)v329 + 8) |= 1 << v331;
    v27 = 2LL * v330;
    *(_OWORD *)&v329[16 * (*((_DWORD *)v329 + 14))++ + 60] = *((_OWORD *)v536 + v330);
    v331 = *((_DWORD *)v329 + 14);
    if ( ++v330 >= v492 )
      goto LABEL_673;
  }
LABEL_1139:
  v28 = -2147418113;
  v430 = 534LL;
LABEL_1147:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v430,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v28,
    (int)v479);
LABEL_1148:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v506);
  if ( v536 )
    CoTaskMemFree(v536);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v511);
LABEL_691:
  if ( v538 )
    CoTaskMemFree(v538);
  if ( v499 )
    CoTaskMemFree(v499);
  if ( v566 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v566 + 16LL))(v566, *v566);
  return v28;
}
