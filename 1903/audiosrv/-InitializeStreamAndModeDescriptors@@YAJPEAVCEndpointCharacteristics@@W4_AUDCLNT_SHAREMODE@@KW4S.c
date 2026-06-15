/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180015270
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F63A4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EA0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009480 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180037F34 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180038674 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003AC10 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18003E8BC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180056C84 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180061D3C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800BE0E4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800BE110 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C1EC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$?0UIAudioProcessingObject@@@?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcessingObject@@U?$integral_constant@D$02@wistd@@@Z @ 0x1800F42C4 (--$-0UIAudioProcessingObject@@@-$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_pol.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800F7EE4 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801152C4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115A90 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180118550 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=64
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
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
        struct SystemEffectDescriptor *a14,
        _QWORD *a15,
        GUID *a16,
        __int64 a17,
        __int64 a18,
        char a19,
        char a20,
        char a21,
        __int64 a22,
        __int64 a23,
        _QWORD *a24,
        _QWORD *a25)
{
  unsigned int v25; // esi
  CEndpointCharacteristics *v27; // r15
  IID *v28; // r12
  unsigned __int64 v29; // rdi
  __int64 v30; // r14
  char *v31; // rsi
  struct _RTL_CRITICAL_SECTION *v32; // r13
  volatile signed __int32 *v33; // rbx
  int v34; // r12d
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // rax
  volatile signed __int32 *v38; // rcx
  __int64 v39; // rax
  volatile signed __int32 **v40; // r14
  volatile signed __int32 *v41; // r15
  struct _RTL_CRITICAL_SECTION *v42; // rcx
  struct SystemEffectDescriptor *v43; // r13
  char *v44; // r12
  int v45; // r15d
  int v46; // r15d
  struct SystemEffectDescriptor *v47; // rdx
  struct _RTL_CRITICAL_SECTION *v48; // r13
  volatile signed __int32 *v49; // rbx
  int v50; // r14d
  int v51; // r12d
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 v54; // rax
  volatile signed __int32 *v55; // rcx
  __int64 v56; // rax
  volatile signed __int32 **v57; // r14
  volatile signed __int32 *v58; // r15
  struct _RTL_CRITICAL_SECTION *v59; // rcx
  struct _GUID v60; // xmm6
  struct ICompositeSystemEffect *v61; // rcx
  int v62; // r12d
  struct _RTL_CRITICAL_SECTION *v63; // r13
  volatile signed __int32 *v64; // rbx
  int v65; // r14d
  __int64 v66; // r15
  __int64 v67; // r13
  __int64 v68; // rax
  volatile signed __int32 *v69; // rcx
  __int64 v70; // rax
  volatile signed __int32 **v71; // r14
  volatile signed __int32 *v72; // r15
  __int64 v73; // r14
  int v74; // r15d
  int v75; // r15d
  struct _RTL_CRITICAL_SECTION *v76; // r13
  volatile signed __int32 *v77; // rbx
  int v78; // r14d
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // rax
  volatile signed __int32 *v82; // rcx
  __int64 v83; // rax
  volatile signed __int32 **v84; // r14
  volatile signed __int32 *v85; // r15
  unsigned int v86; // r12d
  BOOL v87; // ebx
  int v88; // eax
  int v89; // ebx
  int v90; // ecx
  int v91; // ebx
  __int64 v92; // r9
  int v93; // r8d
  int v94; // r11d
  __int64 v95; // r10
  __int64 v96; // rax
  __int64 v97; // r11
  struct ICompositeSystemEffect *v98; // rax
  int v99; // ecx
  int v100; // ebx
  __int64 v101; // r9
  int v102; // r8d
  int v103; // r11d
  __int64 v104; // r10
  __int64 v105; // rax
  __int64 v106; // rdi
  int v107; // eax
  void *v108; // rcx
  bool v109; // zf
  void *v110; // rbx
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  void *v114; // rax
  int v115; // eax
  unsigned int v116; // ebx
  void *v117; // rcx
  unsigned int v118; // r14d
  SIZE_T v119; // rbx
  char *v120; // rax
  unsigned int v121; // edi
  __int64 v122; // rax
  unsigned int v123; // ecx
  void *v124; // rcx
  struct _GUID *v125; // r8
  GUID *v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r14
  struct _GUID v131; // xmm6
  struct SystemEffectDescriptor *v132; // r12
  struct _RTL_CRITICAL_SECTION *v133; // r13
  unsigned int v134; // edx
  volatile signed __int32 *v135; // rbx
  __int64 v136; // rdi
  int v137; // esi
  int v138; // r15d
  __int64 v139; // r12
  __int64 v140; // rax
  volatile signed __int32 *v141; // rcx
  __int64 v142; // rax
  volatile signed __int32 **v143; // rsi
  struct SystemEffectDescriptor *v144; // r15
  CEndpointCharacteristics *v145; // r13
  struct SystemEffectDescriptor *v146; // r12
  char *v147; // rdi
  __int64 v148; // rsi
  int v149; // r14d
  char *v150; // rdx
  struct _RTL_CRITICAL_SECTION *v151; // r13
  volatile signed __int32 *v152; // rbx
  __int64 v153; // rdi
  int v154; // esi
  int v155; // r15d
  LPCRITICAL_SECTION v156; // rdx
  __int64 v157; // r14
  ULONG_PTR SpinCount; // r12
  __int64 v159; // rax
  volatile signed __int32 *v160; // rcx
  __int64 v161; // rax
  volatile signed __int32 **v162; // rsi
  volatile signed __int32 *v163; // r14
  CEndpointCharacteristics *v164; // r15
  BOOL v165; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v166; // r11d
  int v167; // eax
  int v168; // ebx
  int v169; // ebx
  __int64 v170; // rdx
  int v171; // r8d
  int v172; // r9d
  _QWORD *v173; // rcx
  __int64 v174; // rax
  BOOL v175; // ebx
  volatile signed __int32 *v176; // rbx
  __int64 v177; // rdi
  int v178; // esi
  int v179; // r15d
  struct SystemEffectDescriptor *v180; // rdx
  __int64 v181; // r14
  __int64 v182; // r12
  __int64 v183; // rax
  volatile signed __int32 *v184; // rcx
  __int64 v185; // rax
  volatile signed __int32 **v186; // rsi
  volatile signed __int32 *v187; // r14
  char *v188; // rdi
  __int64 v189; // rsi
  int v190; // r14d
  int v191; // r14d
  volatile signed __int32 *v192; // rbx
  __int64 v193; // rdi
  int v194; // esi
  int v195; // r15d
  LPCRITICAL_SECTION v196; // rdx
  __int64 v197; // r14
  ULONG_PTR v198; // r12
  __int64 v199; // rax
  volatile signed __int32 *v200; // rcx
  __int64 v201; // rax
  volatile signed __int32 **v202; // rsi
  volatile signed __int32 *v203; // r14
  char *v204; // rax
  int v205; // edx
  int v206; // r8d
  __int64 v207; // r9
  __int64 v208; // rax
  int v209; // r14d
  __int64 v210; // rax
  int v211; // ebx
  int v212; // ebx
  __int64 v213; // rdi
  int v214; // edx
  int v215; // r8d
  _QWORD *v216; // rcx
  __int64 v217; // rax
  int v218; // eax
  void *v219; // rcx
  bool v220; // zf
  void *v221; // rbx
  unsigned __int64 v222; // rcx
  unsigned __int64 v223; // rax
  unsigned __int64 v224; // rcx
  void *v225; // rax
  int v226; // eax
  int v227; // ebx
  unsigned __int32 v228; // edi
  int v229; // eax
  void *v230; // rcx
  int v231; // esi
  __int64 v232; // rax
  int v233; // r12d
  struct _RTL_CRITICAL_SECTION *v234; // r13
  BOOL v235; // ebx
  struct SystemEffectDescriptor *v236; // r12
  unsigned int v237; // edx
  volatile signed __int32 *v238; // rbx
  __int64 v239; // rdi
  int v240; // esi
  int v241; // r15d
  __int64 v242; // r12
  __int64 v243; // rax
  volatile signed __int32 *v244; // rcx
  __int64 v245; // rax
  volatile signed __int32 **v246; // rsi
  struct SystemEffectDescriptor *v247; // r15
  char *v248; // rdi
  __int64 v249; // rsi
  int v250; // r14d
  LPCRITICAL_SECTION v251; // r12
  unsigned int v252; // edx
  volatile signed __int32 *v253; // rbx
  __int64 v254; // rdi
  int v255; // esi
  int v256; // r15d
  __int64 v257; // r14
  ULONG_PTR v258; // r12
  __int64 v259; // rax
  volatile signed __int32 *v260; // rcx
  __int64 v261; // rax
  volatile signed __int32 **v262; // rsi
  volatile signed __int32 *v263; // r14
  CEndpointCharacteristics *v264; // r10
  char *v265; // rax
  const struct _GUID *v266; // rdx
  int v267; // r8d
  __int64 v268; // r9
  __int64 v269; // rax
  __int64 j; // rbx
  int v271; // eax
  char *v272; // rdi
  __int64 v273; // rsi
  int v274; // r14d
  __int64 *v275; // r9
  __int64 v276; // rsi
  int v277; // r10d
  __int64 v278; // r14
  int v279; // edi
  void *v280; // rax
  _OWORD *v281; // rax
  int v282; // esi
  __int64 *v283; // rdi
  CEndpointCharacteristics *v284; // r14
  struct SystemEffectDescriptor *v285; // r12
  unsigned int v286; // edx
  __int64 *v287; // rdi
  int v288; // esi
  int v289; // r15d
  __int64 v290; // r12
  __int64 v291; // rax
  __int64 *v292; // rcx
  __int64 v293; // rax
  int v294; // esi
  __int64 *v295; // r14
  __int64 *v296; // rdi
  __int64 v297; // rsi
  struct SystemEffectDescriptor *v298; // r12
  char *v299; // rdi
  char *v300; // rsi
  int v301; // r15d
  int v302; // r15d
  unsigned int v303; // edx
  int v304; // esi
  int v305; // r12d
  __int64 v306; // r15
  __int64 v307; // r13
  __int64 v308; // rax
  char *v309; // rcx
  __int64 v310; // rax
  int v311; // esi
  char *v312; // r15
  __int64 *v313; // rdi
  __int64 v314; // rsi
  char *v315; // rax
  int v316; // r8d
  __int64 v317; // r9
  __int64 v318; // rax
  char *v319; // rax
  __int64 v320; // r9
  unsigned int v321; // ecx
  void *v322; // rcx
  char *v323; // rax
  char *v324; // rax
  __int64 v326; // rdx
  char *v327; // rax
  SystemEffectChainDescriptor **v328; // rax
  int v329; // eax
  __int64 v330; // rax
  __int64 v331; // r9
  __int64 v332; // rdx
  SystemEffectChainDescriptor **v333; // rax
  int v334; // eax
  unsigned __int64 v335; // r15
  SystemEffectChainDescriptor **v336; // rax
  int v337; // eax
  SystemEffectChainDescriptor **v338; // rax
  int v339; // eax
  __int64 v340; // rax
  __int64 v341; // r9
  __int64 v342; // rdx
  SystemEffectChainDescriptor **v343; // rax
  int v344; // eax
  unsigned __int64 v345; // r15
  SystemEffectChainDescriptor **v346; // rax
  int v347; // eax
  _QWORD *v348; // rax
  __int64 v349; // rax
  volatile signed __int32 *v350; // rbx
  _QWORD *v351; // rax
  __int64 v352; // rax
  volatile signed __int32 *v353; // rbx
  struct ICompositeSystemEffect *v354; // rcx
  int Lfx; // eax
  unsigned int v356; // ebx
  char *v357; // rax
  __int64 v358; // rdx
  SIZE_T v359; // rbx
  char *v360; // rax
  unsigned int i; // r9d
  unsigned int v362; // ecx
  unsigned int v363; // ecx
  int v364; // ebx
  void *v365; // rcx
  int StreamEffect; // eax
  unsigned int v367; // ebx
  void *v368; // rcx
  unsigned int v369; // edi
  SIZE_T v370; // rbx
  char *v371; // rax
  __int64 v372; // rdx
  unsigned int v373; // r9d
  unsigned int v374; // ecx
  char *v375; // rax
  void *v376; // rcx
  void *v377; // rcx
  int ContainerProperty; // ebx
  __int64 v379; // rdx
  __int64 v380; // r9
  __int64 v381; // rdx
  SystemEffectChainDescriptor **v382; // rax
  int v383; // eax
  __int64 v384; // rax
  __int64 v385; // r9
  __int64 v386; // rdx
  SystemEffectChainDescriptor **v387; // rax
  int v388; // eax
  char *v389; // r14
  SystemEffectChainDescriptor **v390; // rax
  int v391; // eax
  _QWORD *v392; // rax
  __int64 v393; // rax
  volatile signed __int32 *v394; // rbx
  _QWORD *v395; // rax
  SystemEffectChainDescriptor **v396; // rax
  int v397; // eax
  __int64 v398; // rax
  __int64 v399; // r9
  __int64 v400; // rdx
  SystemEffectChainDescriptor **v401; // rax
  int v402; // eax
  char *v403; // r14
  SystemEffectChainDescriptor **v404; // rax
  int v405; // eax
  _QWORD *v406; // rax
  __int64 v407; // rax
  volatile signed __int32 *v408; // rbx
  _QWORD *v409; // rax
  __int64 v410; // rbx
  char *v411; // rax
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
  wil::details::in1diag3 *v426; // rcx
  __int64 v427; // rdx
  __int64 v428; // rax
  __int64 v429; // r9
  __int64 v430; // rdx
  SystemEffectChainDescriptor **v431; // rax
  int v432; // eax
  char *v433; // r14
  int k; // edi
  __int64 *v435; // rax
  __int64 v436; // rax
  __int64 *v437; // rax
  __int64 v438; // rax
  int v439; // r10d
  __int64 v440; // r9
  __int64 v441; // rdx
  SystemEffectChainDescriptor **v442; // rax
  int v443; // eax
  __int64 v444; // rax
  __int64 v445; // r9
  __int64 v446; // rdx
  SystemEffectChainDescriptor **v447; // rax
  int v448; // eax
  char *v449; // rdi
  __int64 v450; // r9
  __int64 v451; // rdx
  SystemEffectChainDescriptor **v452; // rax
  int v453; // eax
  LPVOID v454; // rcx
  __int64 *v455; // rcx
  __int64 v456; // r8
  __int64 v457; // r9
  unsigned int v458; // ecx
  void *v459; // rcx
  struct IAudioSystemEffects2 **v460; // [rsp+28h] [rbp-E0h]
  char *v461; // [rsp+48h] [rbp-C0h]
  char *v462; // [rsp+50h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+58h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSectionb; // [rsp+58h] [rbp-B0h]
  struct SystemEffectDescriptor *v466; // [rsp+60h] [rbp-A8h]
  struct SystemEffectDescriptor *v467; // [rsp+60h] [rbp-A8h]
  unsigned int v468; // [rsp+68h] [rbp-A0h] BYREF
  int v469; // [rsp+6Ch] [rbp-9Ch]
  __int64 v470; // [rsp+70h] [rbp-98h] BYREF
  struct SystemEffectDescriptor *v471; // [rsp+78h] [rbp-90h]
  int v472; // [rsp+80h] [rbp-88h]
  CEndpointCharacteristics *v473; // [rsp+88h] [rbp-80h]
  int v474; // [rsp+90h] [rbp-78h]
  void *Block; // [rsp+98h] [rbp-70h] BYREF
  __int64 v476; // [rsp+A0h] [rbp-68h]
  struct ICompositeSystemEffect *v477; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v478; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v479; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID *v480; // [rsp+C0h] [rbp-48h]
  LPVOID v481; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v483; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v484; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v485; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v486; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v487; // [rsp+F8h] [rbp-10h]
  __int64 *v488; // [rsp+100h] [rbp-8h] BYREF
  __int64 v489; // [rsp+108h] [rbp+0h]
  __int64 v490; // [rsp+110h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v491; // [rsp+118h] [rbp+10h]
  LPVOID v492; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v493; // [rsp+128h] [rbp+20h] BYREF
  int v494; // [rsp+130h] [rbp+28h]
  int v495; // [rsp+134h] [rbp+2Ch]
  volatile signed __int32 *v496; // [rsp+138h] [rbp+30h] BYREF
  __int64 v497; // [rsp+140h] [rbp+38h]
  volatile signed __int32 *v498; // [rsp+148h] [rbp+40h] BYREF
  int v499; // [rsp+150h] [rbp+48h]
  int v500; // [rsp+154h] [rbp+4Ch]
  volatile signed __int32 *v501; // [rsp+158h] [rbp+50h] BYREF
  int v502; // [rsp+160h] [rbp+58h]
  int v503; // [rsp+164h] [rbp+5Ch]
  volatile signed __int32 *v504; // [rsp+168h] [rbp+60h] BYREF
  __int64 v505; // [rsp+170h] [rbp+68h]
  volatile signed __int32 *v506; // [rsp+178h] [rbp+70h] BYREF
  int v507; // [rsp+180h] [rbp+78h]
  int v508; // [rsp+184h] [rbp+7Ch]
  volatile signed __int32 *v509; // [rsp+188h] [rbp+80h] BYREF
  __int64 v510; // [rsp+190h] [rbp+88h]
  volatile signed __int32 *v511; // [rsp+198h] [rbp+90h] BYREF
  __int64 v512; // [rsp+1A0h] [rbp+98h]
  volatile signed __int32 *v513; // [rsp+1A8h] [rbp+A0h] BYREF
  int v514; // [rsp+1B0h] [rbp+A8h]
  int v515; // [rsp+1B4h] [rbp+ACh]
  volatile signed __int32 *v516; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v517; // [rsp+1C0h] [rbp+B8h]
  char *v518; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v519; // [rsp+1D0h] [rbp+C8h]
  int v520; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD *v521; // [rsp+1E0h] [rbp+D8h]
  struct ICompositeSystemEffect *v522; // [rsp+1E8h] [rbp+E0h] BYREF
  struct ICompositeSystemEffect *v523; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v524; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD *v525; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v526; // [rsp+208h] [rbp+100h]
  _QWORD *v527; // [rsp+210h] [rbp+108h] BYREF
  unsigned int v528; // [rsp+218h] [rbp+110h]
  int v529; // [rsp+21Ch] [rbp+114h]
  struct SystemEffectDescriptor *v530; // [rsp+220h] [rbp+118h] BYREF
  unsigned int v531; // [rsp+228h] [rbp+120h]
  int v532; // [rsp+22Ch] [rbp+124h]
  char *v533; // [rsp+230h] [rbp+128h] BYREF
  __int64 v534; // [rsp+238h] [rbp+130h]
  struct SystemEffectDescriptor *v535; // [rsp+240h] [rbp+138h] BYREF
  unsigned int v536; // [rsp+248h] [rbp+140h]
  int v537; // [rsp+24Ch] [rbp+144h]
  char *v538; // [rsp+250h] [rbp+148h] BYREF
  unsigned int v539; // [rsp+258h] [rbp+150h]
  int v540; // [rsp+25Ch] [rbp+154h]
  int v541; // [rsp+260h] [rbp+158h] BYREF
  int v542; // [rsp+268h] [rbp+160h] BYREF
  int v543; // [rsp+270h] [rbp+168h] BYREF
  int v544; // [rsp+278h] [rbp+170h] BYREF
  __int64 v545; // [rsp+280h] [rbp+178h] BYREF
  int v546; // [rsp+288h] [rbp+180h] BYREF
  int v547; // [rsp+290h] [rbp+188h] BYREF
  int v548; // [rsp+298h] [rbp+190h] BYREF
  struct _RTL_CRITICAL_SECTION *v549; // [rsp+2A0h] [rbp+198h] BYREF
  _QWORD *v550; // [rsp+2A8h] [rbp+1A0h]
  struct _RTL_CRITICAL_SECTION *v551; // [rsp+2B0h] [rbp+1A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v552; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v553; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v554; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v555; // [rsp+2D0h] [rbp+1C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v556; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v557; // [rsp+2E0h] [rbp+1D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v558; // [rsp+2E8h] [rbp+1E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v559; // [rsp+2F0h] [rbp+1E8h] BYREF
  struct _RTL_CRITICAL_SECTION *v560; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RTL_CRITICAL_SECTION *v561; // [rsp+300h] [rbp+1F8h] BYREF
  struct _RTL_CRITICAL_SECTION *v562; // [rsp+308h] [rbp+200h] BYREF
  struct _GUID v563; // [rsp+318h] [rbp+210h] BYREF
  PROPVARIANT v564; // [rsp+328h] [rbp+220h] BYREF
  __int64 v565; // [rsp+330h] [rbp+228h]
  __int64 v566; // [rsp+338h] [rbp+230h]
  PROPVARIANT v567; // [rsp+340h] [rbp+238h] BYREF
  __int64 v568; // [rsp+348h] [rbp+240h]
  __int64 v569; // [rsp+350h] [rbp+248h]
  PROPVARIANT pvar; // [rsp+358h] [rbp+250h] BYREF
  __int64 v571; // [rsp+360h] [rbp+258h]
  __int64 v572; // [rsp+368h] [rbp+260h]
  LPVOID *v573; // [rsp+370h] [rbp+268h]
  void *v574; // [rsp+378h] [rbp+270h] BYREF
  char v575; // [rsp+380h] [rbp+278h]
  LPVOID *v576; // [rsp+388h] [rbp+280h]
  void *v577; // [rsp+390h] [rbp+288h] BYREF
  char v578; // [rsp+398h] [rbp+290h]
  PROPVARIANT v579; // [rsp+3A0h] [rbp+298h] BYREF
  __int64 v580; // [rsp+3A8h] [rbp+2A0h]
  __int64 v581; // [rsp+3B0h] [rbp+2A8h]
  LPVOID *v582; // [rsp+3B8h] [rbp+2B0h]
  void *v583; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v584; // [rsp+3C8h] [rbp+2C0h]
  PROPVARIANT v585; // [rsp+3D0h] [rbp+2C8h] BYREF
  __int64 v586; // [rsp+3D8h] [rbp+2D0h]
  __int64 v587; // [rsp+3E0h] [rbp+2D8h]
  PROPVARIANT v588; // [rsp+3E8h] [rbp+2E0h] BYREF
  __int64 v589; // [rsp+3F0h] [rbp+2E8h]
  __int64 v590; // [rsp+3F8h] [rbp+2F0h]
  void *v591; // [rsp+400h] [rbp+2F8h] BYREF
  void *v592; // [rsp+408h] [rbp+300h] BYREF
  _DWORD *v593; // [rsp+410h] [rbp+308h]
  _QWORD *v594; // [rsp+418h] [rbp+310h]
  struct _GUID v595; // [rsp+428h] [rbp+320h] BYREF
  struct _GUID v596; // [rsp+438h] [rbp+330h]
  struct _GUID v597; // [rsp+448h] [rbp+340h] BYREF
  struct _GUID v598; // [rsp+458h] [rbp+350h]
  GUID v599; // [rsp+468h] [rbp+360h]
  struct _GUID v600; // [rsp+478h] [rbp+370h] BYREF
  struct _GUID v601; // [rsp+488h] [rbp+380h]
  struct _GUID v602; // [rsp+498h] [rbp+390h] BYREF
  __int128 v603; // [rsp+4A8h] [rbp+3A0h]
  char *v604; // [rsp+4B8h] [rbp+3B0h]
  char *v605; // [rsp+4C0h] [rbp+3B8h]
  struct _GUID v606; // [rsp+4C8h] [rbp+3C0h] BYREF
  SystemEffectChainDescriptor *v607; // [rsp+4D8h] [rbp+3D0h]
  volatile signed __int32 *v608; // [rsp+4E0h] [rbp+3D8h]
  SystemEffectChainDescriptor *v609; // [rsp+4E8h] [rbp+3E0h]
  volatile signed __int32 *v610; // [rsp+4F0h] [rbp+3E8h]
  struct _GUID v611; // [rsp+4F8h] [rbp+3F0h] BYREF
  struct _GUID v612; // [rsp+508h] [rbp+400h] BYREF
  IID rclsid; // [rsp+518h] [rbp+410h] BYREF
  char *v614; // [rsp+528h] [rbp+420h]
  struct _GUID v615; // [rsp+538h] [rbp+430h] BYREF
  SystemEffectChainDescriptor *v616; // [rsp+548h] [rbp+440h]
  volatile signed __int32 *v617; // [rsp+550h] [rbp+448h]
  SystemEffectChainDescriptor *v618; // [rsp+558h] [rbp+450h]
  volatile signed __int32 *v619; // [rsp+560h] [rbp+458h]
  char *v620; // [rsp+568h] [rbp+460h]
  char *v621; // [rsp+570h] [rbp+468h]
  char *v622; // [rsp+578h] [rbp+470h]
  char *v623; // [rsp+580h] [rbp+478h]
  struct _GUID v624; // [rsp+588h] [rbp+480h] BYREF
  struct _RTL_CRITICAL_SECTION *v625; // [rsp+598h] [rbp+490h]
  char *v626; // [rsp+5A0h] [rbp+498h]
  char *v627; // [rsp+5A8h] [rbp+4A0h]
  __int64 v628; // [rsp+5B0h] [rbp+4A8h]
  IID v629; // [rsp+5B8h] [rbp+4B0h] BYREF
  CLSID pClsid; // [rsp+5C8h] [rbp+4C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+620h] [rbp+518h]

  v628 = -2LL;
  v472 = a4;
  v25 = a3;
  v469 = a3;
  v474 = a2;
  v27 = a1;
  v473 = a1;
  v480 = a7;
  v28 = (IID *)a14;
  v471 = a14;
  v594 = a24;
  v29 = (unsigned __int64)a25;
  v521 = a25;
  v461 = 0LL;
  v462 = 0LL;
  v550 = 0LL;
  v550 = (_QWORD *)*((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(_QWORD *))(*v550 + 8LL))(v550);
  if ( !a24 )
  {
    v125 = v480;
    goto LABEL_258;
  }
  if ( (v25 & 0x800000) != 0 )
  {
    if ( a2 )
    {
      v86 = -2147418113;
      v326 = 259LL;
    }
    else
    {
      v327 = (char *)CoTaskMemAlloc(0x120uLL);
      v461 = v327;
      if ( v327 )
      {
        memset_0(v327, 0, 0x120uLL);
        *(_DWORD *)v461 = 0;
        *((_DWORD *)v461 + 34) = v25;
        *((_QWORD *)v461 + 18) = 0LL;
        *((_DWORD *)v461 + 46) = 0;
        *((_DWORD *)v461 + 40) = 0;
        *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
        *((_DWORD *)v461 + 1) = 1;
        goto LABEL_243;
      }
      v86 = -2147024882;
      v326 = 264LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v326,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v86);
    goto LABEL_704;
  }
  if ( !a2 && (a5 & 0xFFFFFFFC) == 0 && a5 != eOffloadConnector )
  {
    LODWORD(v30) = 0;
    v481 = 0LL;
    LODWORD(v470) = 0;
    if ( a5 == eLoopbackConnector )
      goto LABEL_226;
    v477 = 0LL;
    v491 = (CEndpointCharacteristics *)((char *)v27 + 96 * a5);
    v31 = (char *)v491 + 232;
    if ( !*((_BYTE *)v491 + 284) )
      goto LABEL_41;
    v32 = (struct _RTL_CRITICAL_SECTION *)((char *)v491 + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v491 + 288));
    v627 = (char *)v491 + 288;
    v33 = 0LL;
    v493 = 0LL;
    v29 = 0LL;
    v494 = 0;
    v495 = 0;
    v34 = 0;
    if ( *((int *)v491 + 68) > 0 )
    {
      v35 = 0LL;
      do
      {
        if ( v35 < 0 || v34 >= *((_DWORD *)v31 + 10) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18008A266LL);
        }
        v36 = *((_QWORD *)v31 + 4);
        if ( (_DWORD)v29 == (_DWORD)v30 )
        {
          if ( (_DWORD)v30 )
          {
            LODWORD(v30) = 2 * v29;
            if ( (v29 & 0x40000000) != 0 )
              goto LABEL_718;
          }
          else
          {
            LODWORD(v30) = 1;
          }
          if ( (unsigned __int64)(int)v30 > 0x7FFFFFF
            || (v37 = _o__recalloc(v33, (int)v30, 16LL), (v33 = (volatile signed __int32 *)v37) == 0LL) )
          {
LABEL_718:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v493);
            v42 = (struct _RTL_CRITICAL_SECTION *)(v31 + 56);
            if ( v31 != (char *)-56LL )
LABEL_39:
              LeaveCriticalSection(v42);
LABEL_40:
            LODWORD(v30) = 0;
LABEL_41:
            v43 = v491;
            v44 = (char *)v491 + 616;
            v491 = (struct SystemEffectDescriptor *)v44;
            if ( !v44[52] )
              goto LABEL_47;
            EnterCriticalSection((LPCRITICAL_SECTION)(v44 + 56));
            v626 = v44 + 56;
            v29 = 0LL;
            v525 = 0LL;
            v526 = 0LL;
            v45 = 0;
            if ( *((int *)v44 + 10) <= 0 )
              goto LABEL_43;
            while ( 1 )
            {
              v330 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v44 + 32), v45);
              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                    &v525,
                                    v330) )
                break;
              if ( ++v45 >= *((_DWORD *)v44 + 10) )
              {
                LODWORD(v30) = v526;
                v29 = (unsigned __int64)v525;
LABEL_43:
                v46 = 0;
                if ( (int)v30 <= 0 )
                {
LABEL_44:
                  if ( v29 )
                  {
                    if ( (int)v30 > 0 )
                    {
                      v335 = v29;
                      v30 = (unsigned int)v30;
                      do
                      {
                        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v335);
                        v335 += 16LL;
                        --v30;
                      }
                      while ( v30 );
                    }
                    free((void *)v29);
                  }
                  if ( v44 != (char *)-56LL )
LABEL_46:
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v44 + 56));
LABEL_47:
                  v47 = (struct SystemEffectDescriptor *)((char *)v43 + 1000);
                  v466 = (struct SystemEffectDescriptor *)((char *)v43 + 1000);
                  if ( !*((_BYTE *)v43 + 1052) )
                    goto LABEL_80;
                  v48 = (struct _RTL_CRITICAL_SECTION *)((char *)v43 + 1056);
                  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v47 + 56);
                  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v47 + 56));
                  v625 = v48;
                  v49 = 0LL;
                  v504 = 0LL;
                  v29 = 0LL;
                  v505 = 0LL;
                  v50 = 0;
                  v51 = 0;
                  v47 = v466;
                  if ( *((int *)v466 + 10) > 0 )
                  {
                    v52 = 0LL;
                    do
                    {
                      if ( v52 < 0 || v51 >= *((_DWORD *)v47 + 10) )
                      {
                        RaiseException(0xC000008C, 1u, 0, 0LL);
                        JUMPOUT(0x18008A43BLL);
                      }
                      v53 = *((_QWORD *)v47 + 4);
                      if ( (_DWORD)v29 == v50 )
                      {
                        if ( v50 )
                        {
                          v50 = 2 * v29;
                          if ( (v29 & 0x40000000) != 0 )
                            goto LABEL_742;
                        }
                        else
                        {
                          v50 = 1;
                        }
                        if ( (unsigned __int64)v50 > 0x7FFFFFF
                          || (v54 = _o__recalloc(v49, v50, 16LL), (v49 = (volatile signed __int32 *)v54) == 0LL) )
                        {
LABEL_742:
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x1F6,
                            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                            (const char *)0x8007000ELL);
                          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v504);
                          v59 = lpCriticalSection;
                          if ( lpCriticalSection )
LABEL_79:
                            LeaveCriticalSection(v59);
LABEL_80:
                          v593 = (_DWORD *)((char *)v473 + 4 * a5 + 48);
                          if ( !*v593 )
                          {
                            v354 = v477;
                            v477 = 0LL;
                            if ( v354 )
                              (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v354 + 16LL))(v354);
                            Lfx = CEndpointCharacteristics::GetLfx(v473, a5, &v477, 0LL, v460);
                            v356 = Lfx;
                            if ( Lfx < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x12E,
                                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                (const char *)(unsigned int)Lfx);
                              v86 = v356;
                              goto LABEL_836;
                            }
                            goto LABEL_219;
                          }
                          v60 = *v480;
                          v61 = v477;
                          v62 = 0;
                          v477 = 0LL;
                          if ( v61 )
                            (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v61 + 16LL))(v61);
                          v477 = 0LL;
                          if ( !v31[52] )
                            goto LABEL_115;
                          v63 = (struct _RTL_CRITICAL_SECTION *)(v31 + 56);
                          EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                          v605 = v31 + 56;
                          v64 = 0LL;
                          v501 = 0LL;
                          v29 = 0LL;
                          v502 = 0;
                          v65 = 0;
                          v503 = 0;
                          if ( *((int *)v31 + 10) > 0 )
                          {
                            v66 = 0LL;
                            do
                            {
                              if ( v66 < 0 || v62 >= *((_DWORD *)v31 + 10) )
                              {
                                RaiseException(0xC000008C, 1u, 0, 0LL);
                                JUMPOUT(0x18008A537LL);
                              }
                              v67 = *((_QWORD *)v31 + 4);
                              if ( (_DWORD)v29 == v65 )
                              {
                                if ( v65 )
                                {
                                  v65 = 2 * v29;
                                  if ( (v29 & 0x40000000) != 0 )
                                    goto LABEL_751;
                                }
                                else
                                {
                                  v65 = 1;
                                }
                                if ( (unsigned __int64)v65 > 0x7FFFFFF
                                  || (v68 = _o__recalloc(v64, v65, 16LL), (v64 = (volatile signed __int32 *)v68) == 0LL) )
                                {
LABEL_751:
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x1F6,
                                    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                    (const char *)0x8007000ELL);
                                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v501);
                                  if ( v31 != (char *)-56LL )
                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                  v62 = 0;
                                  goto LABEL_115;
                                }
                                v503 = v65;
                                v501 = (volatile signed __int32 *)v68;
                              }
                              v69 = &v64[4 * (int)v29];
                              if ( v69 )
                              {
                                *(_QWORD *)v69 = 0LL;
                                *((_QWORD *)v69 + 1) = 0LL;
                                v70 = *(_QWORD *)(v67 + v66 + 8);
                                if ( v70 )
                                {
                                  _InterlockedIncrement((volatile signed __int32 *)(v70 + 8));
                                  v65 = v503;
                                  LODWORD(v29) = v502;
                                  v64 = v501;
                                }
                                *(_QWORD *)v69 = *(_QWORD *)(v67 + v66);
                                *((_QWORD *)v69 + 1) = *(_QWORD *)(v67 + v66 + 8);
                              }
                              v29 = (unsigned int)(v29 + 1);
                              v502 = v29;
                              ++v62;
                              v66 += 16LL;
                            }
                            while ( v62 < *((_DWORD *)v31 + 10) );
                            v63 = (struct _RTL_CRITICAL_SECTION *)(v31 + 56);
                          }
                          v62 = 0;
                          v71 = 0LL;
                          if ( (int)v29 <= 0 )
                          {
LABEL_105:
                            if ( v64 )
                            {
                              if ( (int)v29 > 0 )
                              {
                                v71 = (volatile signed __int32 **)(v64 + 2);
                                do
                                {
                                  v64 = *v71;
                                  if ( *v71 && _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
                                  {
LABEL_758:
                                    (**(void (__fastcall ***)(volatile signed __int32 *))v64)(v64);
                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v64);
                                  }
                                  v71 += 2;
                                  --v29;
                                }
                                while ( v29 );
                                v64 = v501;
                              }
                              free((void *)v64);
                            }
                          }
                          else
                          {
                            v72 = v64;
                            while ( 1 )
                            {
                              if ( (int)v71 < 0 )
                              {
                                RaiseException(0xC000008C, 1u, 0, 0LL);
                                goto LABEL_758;
                              }
                              if ( *(_BYTE *)(*(_QWORD *)v72 + 20LL) )
                              {
                                v338 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         (__int64)&v501,
                                                                         (int)v71);
                                v339 = SystemEffectChainDescriptor::Resolve(*v338, (struct SystemEffectDescriptor *)v31);
                                if ( v339 < 0 )
                                  break;
                              }
                              v71 = (volatile signed __int32 **)(unsigned int)((_DWORD)v71 + 1);
                              v72 += 4;
                              if ( (int)v71 >= (int)v29 )
                                goto LABEL_105;
                            }
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x1FC,
                              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                              (const char *)(unsigned int)v339);
                            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v501);
                          }
                          if ( v63 )
                            LeaveCriticalSection(v63);
LABEL_115:
                          if ( !*((_BYTE *)v491 + 52) )
                            goto LABEL_121;
                          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v491 + 56));
                          v614 = (char *)v491 + 56;
                          v29 = 0LL;
                          v527 = 0LL;
                          v73 = 0LL;
                          v528 = 0;
                          v529 = 0;
                          v74 = 0;
                          if ( *((int *)v491 + 10) <= 0 )
                            goto LABEL_117;
                          while ( 1 )
                          {
                            v340 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)v491 + 32,
                                     v74);
                            if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                                  &v527,
                                                  v340) )
                              break;
                            if ( ++v74 >= *((_DWORD *)v491 + 10) )
                            {
                              v73 = v528;
                              v29 = (unsigned __int64)v527;
LABEL_117:
                              v75 = 0;
                              if ( (int)v73 <= 0 )
                              {
LABEL_118:
                                if ( v29 )
                                {
                                  if ( (int)v73 > 0 )
                                  {
                                    v345 = v29;
                                    do
                                    {
                                      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v345);
                                      v345 += 16LL;
                                      --v73;
                                    }
                                    while ( v73 );
                                  }
                                  free((void *)v29);
                                }
                                if ( v491 != (struct SystemEffectDescriptor *)-56LL )
LABEL_120:
                                  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v491 + 56));
LABEL_121:
                                if ( *((_BYTE *)v466 + 52) )
                                {
                                  v76 = (struct _RTL_CRITICAL_SECTION *)((char *)v466 + 56);
                                  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v466 + 56));
                                  v604 = (char *)v466 + 56;
                                  v77 = 0LL;
                                  v498 = 0LL;
                                  v29 = 0LL;
                                  v499 = 0;
                                  v78 = 0;
                                  v500 = 0;
                                  v47 = v466;
                                  if ( *((int *)v466 + 10) > 0 )
                                  {
                                    v79 = 0LL;
                                    do
                                    {
                                      if ( v79 < 0 || v62 >= *((_DWORD *)v47 + 10) )
                                      {
                                        RaiseException(0xC000008C, 1u, 0, 0LL);
                                        JUMPOUT(0x18008A708LL);
                                      }
                                      v80 = *((_QWORD *)v47 + 4);
                                      if ( (_DWORD)v29 == v78 )
                                      {
                                        if ( v78 )
                                        {
                                          v78 = 2 * v29;
                                          if ( (v29 & 0x40000000) != 0 )
                                            goto LABEL_775;
                                        }
                                        else
                                        {
                                          v78 = 1;
                                        }
                                        if ( (unsigned __int64)v78 > 0x7FFFFFF
                                          || (v81 = _o__recalloc(v77, v78, 16LL),
                                              (v77 = (volatile signed __int32 *)v81) == 0LL) )
                                        {
LABEL_775:
                                          v86 = -2147024882;
                                          wil::details::in1diag3::Return_Hr(
                                            retaddr,
                                            (void *)0x1F6,
                                            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                            (const char *)0x8007000ELL);
                                          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v498);
                                          if ( v466 != (struct SystemEffectDescriptor *)-56LL )
                                            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v466 + 56));
LABEL_154:
                                          if ( !*v593 )
                                            goto LABEL_219;
                                          v87 = 1;
                                          if ( !*((_QWORD *)v473 + 8) )
                                            goto LABEL_160;
                                          pvar = 0LL;
                                          v571 = 0LL;
                                          v572 = 0LL;
                                          if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v473 + 8) + 40LL))(
                                                 *((_QWORD *)v473 + 8),
                                                 &PKEY_AudioEndpoint_Disable_SysFx,
                                                 &pvar) >= 0
                                            && (_WORD)pvar == 19 )
                                          {
                                            v87 = v571 == 0;
                                          }
                                          PropVariantClear(&pvar);
                                          if ( v87 || a5 == eKeywordDetectorConnector )
LABEL_160:
                                            v88 = 1;
                                          else
                                            v88 = 0;
                                          v606 = v60;
                                          if ( v88 )
                                          {
                                            v600 = v60;
                                            v563 = v60;
                                            if ( v31[52] )
                                            {
                                              v89 = 0;
                                              if ( *((int *)v31 + 10) > 0 )
                                              {
                                                v29 = 0LL;
                                                while ( 1 )
                                                {
                                                  if ( v89 < 0 || v89 >= *((_DWORD *)v31 + 10) )
                                                  {
                                                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                                                    __debugbreak();
                                                  }
                                                  if ( *(_BYTE *)(*(_QWORD *)(v29 + *((_QWORD *)v31 + 4)) + 20LL) )
                                                  {
                                                    v348 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                       (__int64)(v31 + 32),
                                                                       v89);
                                                    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                         *v348,
                                                                         &v563) != -1 )
                                                      break;
                                                  }
                                                  ++v89;
                                                  v29 += 16LL;
                                                  if ( v89 >= *((_DWORD *)v31 + 10) )
                                                    goto LABEL_169;
                                                }
                                                v29 = (unsigned __int64)(v31 + 56);
                                                EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                v620 = v31 + 56;
                                                v349 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         (__int64)(v31 + 32),
                                                         v89);
                                                v350 = *(volatile signed __int32 **)(v349 + 8);
                                                if ( v350 )
                                                {
                                                  _InterlockedIncrement(v350 + 2);
                                                  v350 = *(volatile signed __int32 **)(v349 + 8);
                                                }
                                                v607 = *(SystemEffectChainDescriptor **)v349;
                                                v608 = v350;
                                                if ( (int)SystemEffectChainDescriptor::Resolve(
                                                            v607,
                                                            (struct SystemEffectDescriptor *)v31) < 0 )
                                                {
                                                  if ( v350 )
                                                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v350);
                                                  if ( v31 != (char *)-56LL )
                                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                  goto LABEL_795;
                                                }
                                                if ( v350 )
                                                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v350);
                                                if ( v31 != (char *)-56LL )
                                                  LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                              }
                                            }
LABEL_169:
                                            v90 = 0;
                                            v91 = *((_DWORD *)v31 + 10);
                                            if ( v91 <= 0 )
                                              goto LABEL_795;
                                            v92 = 0LL;
                                            while ( 1 )
                                            {
                                              if ( v92 < 0 || v90 >= v91 )
                                              {
                                                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                                                goto LABEL_808;
                                              }
                                              v47 = *(struct SystemEffectDescriptor **)(v92 + *((_QWORD *)v31 + 4));
                                              v93 = 0;
                                              v94 = *((_DWORD *)v47 + 2);
                                              if ( v94 > 0 )
                                              {
                                                v95 = *(_QWORD *)v47;
                                                while ( 1 )
                                                {
                                                  LODWORD(v47) = 2 * v93;
                                                  v96 = *(_QWORD *)(v95 + 16LL * v93) - *(_QWORD *)&v563.Data1;
                                                  if ( !v96 )
                                                    v96 = *(_QWORD *)(v95 + 16LL * v93 + 8) - *(_QWORD *)v563.Data4;
                                                  if ( !v96 )
                                                    break;
                                                  if ( ++v93 >= v94 )
                                                    goto LABEL_804;
                                                }
                                                if ( v93 != -1 )
                                                  break;
                                              }
LABEL_804:
                                              ++v90;
                                              v92 += 16LL;
                                              if ( v90 >= v91 )
                                                goto LABEL_795;
                                            }
                                            if ( v90 == -1 )
                                            {
LABEL_795:
                                              if ( !*((_QWORD *)v31 + 2)
                                                || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                   *((_QWORD *)v31 + 2),
                                                                   &v600) == -1 )
                                              {
                                                v97 = 0LL;
                                              }
                                            }
                                            else
                                            {
                                              if ( v90 < 0 || v90 >= v91 )
                                              {
                                                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                                                __debugbreak();
                                              }
                                              v97 = *(_QWORD *)(*((_QWORD *)v31 + 4) + 16LL * v90);
                                            }
                                            if ( !v97 )
                                              goto LABEL_219;
                                          }
                                          else if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                    v31,
                                                                    &v606) == -1 )
                                          {
                                            goto LABEL_219;
                                          }
                                          v98 = 0LL;
                                          v522 = 0LL;
                                          v477 = 0LL;
                                          if ( !v31 )
                                            goto LABEL_218;
                                          pv = 0LL;
                                          v611 = v60;
                                          v595 = v60;
                                          v91 = 0;
                                          if ( *((int *)v31 + 10) <= 0 )
                                            goto LABEL_191;
                                          v29 = 0LL;
                                          while ( 1 )
                                          {
                                            if ( v91 < 0 || v91 >= *((_DWORD *)v31 + 10) )
                                            {
                                              ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                                              __debugbreak();
                                            }
                                            if ( *(_BYTE *)(*(_QWORD *)(v29 + *((_QWORD *)v31 + 4)) + 20LL) )
                                            {
LABEL_808:
                                              v351 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                 (__int64)(v31 + 32),
                                                                 v91);
                                              if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                   *v351,
                                                                   &v595) != -1 )
                                              {
                                                EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                v621 = v31 + 56;
                                                v352 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         (__int64)(v31 + 32),
                                                         v91);
                                                v353 = *(volatile signed __int32 **)(v352 + 8);
                                                if ( v353 )
                                                {
                                                  _InterlockedIncrement(v353 + 2);
                                                  v353 = *(volatile signed __int32 **)(v352 + 8);
                                                }
                                                v609 = *(SystemEffectChainDescriptor **)v352;
                                                v610 = v353;
                                                if ( (int)SystemEffectChainDescriptor::Resolve(
                                                            v609,
                                                            (struct SystemEffectDescriptor *)v31) < 0 )
                                                {
                                                  if ( v353 )
                                                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v353);
                                                  if ( v31 != (char *)-56LL )
                                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                  goto LABEL_816;
                                                }
                                                if ( v353 )
                                                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v353);
                                                if ( v31 != (char *)-56LL )
                                                  LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
LABEL_191:
                                                v99 = 0;
                                                v100 = *((_DWORD *)v31 + 10);
                                                if ( v100 <= 0 )
                                                  goto LABEL_816;
                                                v101 = 0LL;
                                                while ( 1 )
                                                {
                                                  if ( v101 < 0 || v99 >= v100 )
                                                  {
                                                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                                                    __debugbreak();
                                                  }
                                                  v47 = *(struct SystemEffectDescriptor **)(v101 + *((_QWORD *)v31 + 4));
                                                  v102 = 0;
                                                  v103 = *((_DWORD *)v47 + 2);
                                                  if ( v103 > 0 )
                                                  {
                                                    v104 = *(_QWORD *)v47;
                                                    while ( 1 )
                                                    {
                                                      LODWORD(v47) = 2 * v102;
                                                      v105 = *(_QWORD *)(v104 + 16LL * v102) - *(_QWORD *)&v595.Data1;
                                                      if ( !v105 )
                                                        v105 = *(_QWORD *)(v104 + 16LL * v102 + 8)
                                                             - *(_QWORD *)v595.Data4;
                                                      if ( !v105 )
                                                        break;
                                                      if ( ++v102 >= v103 )
                                                        goto LABEL_825;
                                                    }
                                                    if ( v102 != -1 )
                                                      break;
                                                  }
LABEL_825:
                                                  ++v99;
                                                  v101 += 16LL;
                                                  if ( v99 >= v100 )
                                                    goto LABEL_816;
                                                }
                                                if ( v99 == -1 )
                                                {
LABEL_816:
                                                  v106 = *((_QWORD *)v31 + 2);
                                                  if ( !v106
                                                    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                       *((_QWORD *)v31 + 2),
                                                                       &v611) == -1 )
                                                  {
                                                    v106 = 0LL;
                                                  }
                                                }
                                                else
                                                {
                                                  if ( v99 < 0 || v99 >= v100 )
                                                  {
                                                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                                                    __debugbreak();
                                                  }
                                                  v106 = *(_QWORD *)(*((_QWORD *)v31 + 4) + 16LL * v99);
                                                }
                                                v107 = 0;
                                                v108 = 0LL;
                                                pv = 0LL;
                                                if ( v106 )
                                                {
                                                  v107 = *(_DWORD *)(v106 + 48);
                                                  v109 = v107 == 0;
                                                  if ( v107 > 0 )
                                                  {
                                                    v110 = 0LL;
                                                    v111 = *(int *)(v106 + 48);
                                                    v112 = -1LL;
                                                    if ( v111 != 1 )
                                                      v112 = 0xFFFFFFFFFFFFFFFFuLL / v111;
                                                    if ( v112 >= 0x10 )
                                                    {
                                                      v113 = 16 * v111;
                                                      if ( v113 <= 0x7FFFFFFF )
                                                      {
                                                        v114 = CoTaskMemAlloc((unsigned int)v113);
                                                        v110 = v114;
                                                        if ( v114 )
                                                        {
                                                          memcpy_0(
                                                            v114,
                                                            *(const void **)(v106 + 40),
                                                            16LL * *(int *)(v106 + 48));
                                                          pv = v110;
                                                          CoTaskMemFree(0LL);
                                                          v107 = *(_DWORD *)(v106 + 48);
                                                          v108 = v110;
                                                          goto LABEL_213;
                                                        }
                                                      }
                                                    }
                                                    wil::details::in1diag3::Return_Hr(
                                                      retaddr,
                                                      (void *)0x272,
                                                      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                                      (const char *)0x8007000ELL);
                                                    CoTaskMemFree(v110);
                                                    wil::details::in1diag3::Return_Hr(
                                                      retaddr,
                                                      (void *)0x467,
                                                      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpoin"
                                                               "tcharacteristics.cpp",
                                                      (const char *)0x8007000ELL);
                                                    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&pv);
                                                    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v522);
LABEL_831:
                                                    wil::details::in1diag3::Return_Hr(
                                                      retaddr,
                                                      (void *)0x129,
                                                      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                                      (const char *)v86);
LABEL_836:
                                                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v477);
LABEL_868:
                                                    v365 = v481;
                                                    v481 = 0LL;
                                                    if ( v365 )
                                                      CoTaskMemFree(v365);
                                                    goto LABEL_704;
                                                  }
                                                }
                                                else
                                                {
LABEL_213:
                                                  v109 = v107 == 0;
                                                }
                                                if ( !v109 )
                                                {
                                                  v542 = 0;
                                                  v592 = v108;
                                                  v546 = v107;
                                                  v541 = *((_DWORD *)v473 + 39);
                                                  v543 = 1;
                                                  v115 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                                           &v522,
                                                           &v543,
                                                           &v542,
                                                           &v541,
                                                           &v546,
                                                           &v592);
                                                  v116 = v115;
                                                  if ( v115 < 0 )
                                                  {
                                                    wil::details::in1diag3::Return_Hr(
                                                      retaddr,
                                                      (void *)0x471,
                                                      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpoin"
                                                               "tcharacteristics.cpp",
                                                      (const char *)(unsigned int)v115);
                                                    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&pv);
                                                    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v522);
                                                    v86 = v116;
                                                    goto LABEL_831;
                                                  }
                                                  v108 = pv;
                                                }
                                                CoTaskMemFree(v108);
                                                pv = 0LL;
                                                v98 = v522;
LABEL_218:
                                                v522 = 0LL;
                                                v477 = v98;
LABEL_219:
                                                if ( v477 )
                                                {
                                                  v573 = &v481;
                                                  v574 = 0LL;
                                                  v575 = 1;
                                                  (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, void **))(*(_QWORD *)v477 + 32LL))(
                                                    v477,
                                                    &v470,
                                                    &v574);
                                                  if ( v575 )
                                                  {
                                                    v117 = *v573;
                                                    *v573 = v574;
                                                    if ( v117 )
                                                      CoTaskMemFree(v117);
                                                  }
                                                }
                                                if ( v477 )
                                                  (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v477 + 16LL))(v477);
                                                v25 = v469;
                                                v28 = (IID *)v471;
LABEL_226:
                                                if ( v472 )
                                                {
                                                  if ( v472 == 1 )
                                                  {
                                                    v118 = v470 + 2;
                                                    v359 = 16 * ((unsigned int)(v470 + 2) + 17LL);
                                                    v360 = (char *)CoTaskMemAlloc(v359);
                                                    v461 = v360;
                                                    if ( v360 )
                                                    {
                                                      memset_0(v360, 0, v359);
                                                      *(_DWORD *)v461 = 1;
                                                      *((_DWORD *)v461 + 34) = v25;
                                                      *((_QWORD *)v461 + 18) = 0LL;
                                                      *((_DWORD *)v461 + 40) = 0;
                                                      *((_DWORD *)v461 + 46) = 0;
                                                      *((_QWORD *)v461 + 32) = a22;
                                                      *((_QWORD *)v461 + 33) = a23;
                                                      if ( a21 )
                                                        *((_QWORD *)v461 + 31) = a18;
                                                      for ( i = 0; i < (unsigned int)v470; ++i )
                                                      {
                                                        v362 = *((_DWORD *)v461 + 46);
                                                        if ( v362 > 0x1F )
                                                        {
                                                          v358 = 398LL;
                                                          goto LABEL_866;
                                                        }
                                                        *((_DWORD *)v461 + 40) |= 1 << v362;
                                                        *(_OWORD *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = *((_OWORD *)v481 + i);
                                                      }
                                                      *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                                                      *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                                                      goto LABEL_239;
                                                    }
                                                    v86 = -2147024882;
                                                    v358 = 382LL;
                                                  }
                                                  else
                                                  {
                                                    if ( v472 != 2 )
                                                    {
                                                      v86 = -2147024809;
                                                      wil::details::in1diag3::Return_Hr(
                                                        retaddr,
                                                        (void *)0x1B2,
                                                        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                                        (const char *)0x80070057LL);
                                                      goto LABEL_868;
                                                    }
                                                    v118 = 3;
                                                    v357 = (char *)CoTaskMemAlloc(0x140uLL);
                                                    v461 = v357;
                                                    if ( v357 )
                                                    {
                                                      memset_0(v357, 0, 0x140uLL);
                                                      *(_DWORD *)v461 = (a5 != eLoopbackConnector) + 1;
                                                      *((_DWORD *)v461 + 34) = v25;
                                                      *((_QWORD *)v461 + 18) = 0LL;
                                                      *((_DWORD *)v461 + 46) = 3;
                                                      *((GUID *)v461 + 17) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
                                                      *((GUID *)v461 + 18) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                                                      *((GUID *)v461 + 19) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                                                      *((_DWORD *)v461 + 40) = 0;
                                                      goto LABEL_239;
                                                    }
                                                    v86 = -2147024882;
                                                    v358 = 417LL;
                                                  }
                                                }
                                                else
                                                {
                                                  v118 = v470 + 4;
                                                  v119 = 16 * ((unsigned int)(v470 + 4) + 17LL);
                                                  v120 = (char *)CoTaskMemAlloc(v119);
                                                  v461 = v120;
                                                  if ( v120 )
                                                  {
                                                    memset_0(v120, 0, v119);
                                                    *(_DWORD *)v461 = 0;
                                                    *((_DWORD *)v461 + 34) = v25;
                                                    *((_QWORD *)v461 + 18) = 0LL;
                                                    *((_DWORD *)v461 + 46) = 0;
                                                    *((_DWORD *)v461 + 40) = 0;
                                                    if ( !a20 )
                                                    {
                                                      v121 = 0;
                                                      if ( !(_DWORD)v470 )
                                                        goto LABEL_237;
                                                      while ( 1 )
                                                      {
                                                        v122 = *((_QWORD *)v481 + 2 * v121)
                                                             - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
                                                        if ( !v122 )
                                                          v122 = *((_QWORD *)v481 + 2 * v121 + 1)
                                                               - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
                                                        if ( v122
                                                          || !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
                                                          || RpcImpersonateClient(0LL) < 0
                                                          || (v364 = IsVirtualSurroundAllowedForProcess(a8),
                                                              RpcRevertToSelf(),
                                                              v364) )
                                                        {
                                                          v123 = *((_DWORD *)v461 + 46);
                                                          if ( v123 > 0x1F )
                                                          {
                                                            v358 = 351LL;
                                                            goto LABEL_866;
                                                          }
                                                          *((_DWORD *)v461 + 40) |= 1 << v123;
                                                          *(_OWORD *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = *((_OWORD *)v481 + v121);
                                                        }
                                                        if ( ++v121 >= (unsigned int)v470 )
                                                        {
                                                          v25 = v469;
                                                          goto LABEL_237;
                                                        }
                                                      }
                                                    }
                                                    v363 = *((_DWORD *)v461 + 46);
                                                    if ( v363 > 0x1F )
                                                    {
                                                      v358 = 328LL;
                                                      goto LABEL_866;
                                                    }
                                                    *((_DWORD *)v461 + 40) |= 1 << v363;
                                                    *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
LABEL_237:
                                                    *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                                                    *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                                                    *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
                                                    if ( !a20
                                                      && a19
                                                      && CoGetPSClsid(
                                                           &GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae,
                                                           &pClsid) >= 0 )
                                                    {
                                                      *(GUID *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
                                                    }
LABEL_239:
                                                    *((_DWORD *)v461 + 1) = v25 >> 31;
                                                    if ( *((_DWORD *)v461 + 46) <= v118 )
                                                    {
                                                      v124 = v481;
                                                      v481 = 0LL;
                                                      if ( v124 )
                                                        CoTaskMemFree(v124);
                                                      v29 = (unsigned __int64)v521;
                                                      v27 = v473;
                                                      goto LABEL_243;
                                                    }
                                                    v358 = 438LL;
LABEL_866:
                                                    v86 = -2147418113;
                                                  }
                                                  else
                                                  {
                                                    v86 = -2147024882;
                                                    v358 = 316LL;
                                                  }
                                                }
                                                wil::details::in1diag3::Return_Hr(
                                                  retaddr,
                                                  (void *)v358,
                                                  (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                                  (const char *)v86);
                                                goto LABEL_868;
                                              }
                                            }
                                            ++v91;
                                            v29 += 16LL;
                                            if ( v91 >= *((_DWORD *)v31 + 10) )
                                              goto LABEL_191;
                                          }
                                        }
                                        v500 = v78;
                                        v498 = (volatile signed __int32 *)v81;
                                        v47 = v466;
                                      }
                                      v82 = &v77[4 * (int)v29];
                                      if ( v82 )
                                      {
                                        *(_QWORD *)v82 = 0LL;
                                        *((_QWORD *)v82 + 1) = 0LL;
                                        v83 = *(_QWORD *)(v80 + v79 + 8);
                                        if ( v83 )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)(v83 + 8));
                                          v78 = v500;
                                          LODWORD(v29) = v499;
                                          v77 = v498;
                                        }
                                        *(_QWORD *)v82 = *(_QWORD *)(v80 + v79);
                                        *((_QWORD *)v82 + 1) = *(_QWORD *)(v80 + v79 + 8);
                                      }
                                      v29 = (unsigned int)(v29 + 1);
                                      v499 = v29;
                                      ++v62;
                                      v79 += 16LL;
                                    }
                                    while ( v62 < *((_DWORD *)v47 + 10) );
                                    v76 = (struct _RTL_CRITICAL_SECTION *)((char *)v466 + 56);
                                  }
                                  v84 = 0LL;
                                  if ( (int)v29 <= 0 )
                                  {
LABEL_143:
                                    if ( v77 )
                                    {
                                      if ( (int)v29 > 0 )
                                      {
                                        v84 = (volatile signed __int32 **)(v77 + 2);
                                        do
                                        {
                                          v77 = *v84;
                                          if ( *v84 && _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
                                          {
LABEL_782:
                                            (**(void (__fastcall ***)(volatile signed __int32 *))v77)(v77);
                                            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v77);
                                          }
                                          v84 += 2;
                                          --v29;
                                        }
                                        while ( v29 );
                                        v77 = v498;
                                      }
                                      free((void *)v77);
                                    }
                                    if ( v76 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    v85 = v77;
                                    while ( 1 )
                                    {
                                      if ( (int)v84 < 0 )
                                      {
                                        RaiseException(0xC000008C, 1u, 0, 0LL);
                                        goto LABEL_782;
                                      }
                                      if ( *(_BYTE *)(*(_QWORD *)v85 + 20LL) )
                                      {
                                        v346 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                                 (__int64)&v498,
                                                                                 (int)v84);
                                        v347 = SystemEffectChainDescriptor::Resolve(*v346, v466);
                                        if ( v347 < 0 )
                                          break;
                                      }
                                      v84 = (volatile signed __int32 **)(unsigned int)((_DWORD)v84 + 1);
                                      v85 += 4;
                                      if ( (int)v84 >= (int)v29 )
                                        goto LABEL_143;
                                    }
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x1FC,
                                      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                      (const char *)(unsigned int)v347);
                                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v498);
                                    if ( v76 )
LABEL_152:
                                      LeaveCriticalSection(v76);
                                  }
                                }
                                v86 = -2147024882;
                                goto LABEL_154;
                              }
                              while ( 1 )
                              {
                                if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                             (__int64)&v527,
                                                             v75)
                                              + 20LL) )
                                {
                                  v343 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                           (__int64)&v527,
                                                                           v75);
                                  v344 = SystemEffectChainDescriptor::Resolve(*v343, v491);
                                  if ( v344 < 0 )
                                    break;
                                }
                                if ( ++v75 >= (int)v73 )
                                  goto LABEL_118;
                              }
                              v341 = (unsigned int)v344;
                              v342 = 508LL;
LABEL_764:
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)v342,
                                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                (const char *)v341);
                              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v527);
                              if ( v491 != (struct SystemEffectDescriptor *)-56LL )
                                goto LABEL_120;
                              goto LABEL_121;
                            }
                          }
                          v341 = 2147942414LL;
                          v342 = 502LL;
                          goto LABEL_764;
                        }
                        HIDWORD(v505) = v50;
                        v504 = (volatile signed __int32 *)v54;
                        v47 = v466;
                      }
                      v55 = &v49[4 * (int)v29];
                      if ( v55 )
                      {
                        *(_QWORD *)v55 = 0LL;
                        *((_QWORD *)v55 + 1) = 0LL;
                        v56 = *(_QWORD *)(v53 + v52 + 8);
                        if ( v56 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v56 + 8));
                          v50 = HIDWORD(v505);
                          LODWORD(v29) = v505;
                          v49 = v504;
                        }
                        *(_QWORD *)v55 = *(_QWORD *)(v53 + v52);
                        *((_QWORD *)v55 + 1) = *(_QWORD *)(v53 + v52 + 8);
                      }
                      v29 = (unsigned int)(v29 + 1);
                      LODWORD(v505) = v29;
                      ++v51;
                      v52 += 16LL;
                    }
                    while ( v51 < *((_DWORD *)v47 + 10) );
                    v48 = lpCriticalSection;
                  }
                  v57 = 0LL;
                  if ( (int)v29 <= 0 )
                  {
LABEL_69:
                    if ( v49 )
                    {
                      if ( (int)v29 > 0 )
                      {
                        v57 = (volatile signed __int32 **)(v49 + 2);
                        do
                        {
                          v49 = *v57;
                          if ( *v57 && _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
                          {
LABEL_749:
                            (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
                            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v49);
                          }
                          v57 += 2;
                          --v29;
                        }
                        while ( v29 );
                        v49 = v504;
                      }
                      free((void *)v49);
                    }
                    if ( !v48 )
                      goto LABEL_80;
                  }
                  else
                  {
                    v58 = v49;
                    while ( 1 )
                    {
                      if ( (int)v57 < 0 )
                      {
                        RaiseException(0xC000008C, 1u, 0, 0LL);
                        goto LABEL_749;
                      }
                      if ( *(_BYTE *)(*(_QWORD *)v58 + 20LL) )
                      {
                        v336 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                 (__int64)&v504,
                                                                 (int)v57);
                        v337 = SystemEffectChainDescriptor::Resolve(*v336, v466);
                        if ( v337 < 0 )
                          break;
                      }
                      v57 = (volatile signed __int32 **)(unsigned int)((_DWORD)v57 + 1);
                      v58 += 4;
                      if ( (int)v57 >= (int)v29 )
                        goto LABEL_69;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1FC,
                      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                      (const char *)(unsigned int)v337);
                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v504);
                    if ( !v48 )
                      goto LABEL_80;
                  }
                  v59 = v48;
                  goto LABEL_79;
                }
                while ( 1 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                               (__int64)&v525,
                                               v46)
                                + 20LL) )
                  {
                    v333 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                             (__int64)&v525,
                                                             v46);
                    v334 = SystemEffectChainDescriptor::Resolve(*v333, (struct SystemEffectDescriptor *)v44);
                    if ( v334 < 0 )
                      break;
                  }
                  if ( ++v46 >= (int)v30 )
                    goto LABEL_44;
                }
                v331 = (unsigned int)v334;
                v332 = 508LL;
LABEL_731:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v332,
                  (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)v331);
                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v525);
                if ( v44 != (char *)-56LL )
                  goto LABEL_46;
                goto LABEL_47;
              }
            }
            v331 = 2147942414LL;
            v332 = 502LL;
            goto LABEL_731;
          }
          v495 = v30;
          v493 = (volatile signed __int32 *)v37;
        }
        v38 = &v33[4 * (int)v29];
        if ( v38 )
        {
          *(_QWORD *)v38 = 0LL;
          *((_QWORD *)v38 + 1) = 0LL;
          v39 = *(_QWORD *)(v36 + v35 + 8);
          if ( v39 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
            LODWORD(v30) = v495;
            LODWORD(v29) = v494;
            v33 = v493;
          }
          *(_QWORD *)v38 = *(_QWORD *)(v36 + v35);
          *((_QWORD *)v38 + 1) = *(_QWORD *)(v36 + v35 + 8);
        }
        v29 = (unsigned int)(v29 + 1);
        v494 = v29;
        ++v34;
        v35 += 16LL;
      }
      while ( v34 < *((_DWORD *)v31 + 10) );
      v32 = (struct _RTL_CRITICAL_SECTION *)(v31 + 56);
    }
    v40 = 0LL;
    if ( (int)v29 <= 0 )
    {
LABEL_29:
      if ( v33 )
      {
        if ( (int)v29 > 0 )
        {
          v40 = (volatile signed __int32 **)(v33 + 2);
          do
          {
            v33 = *v40;
            if ( *v40 && _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_725:
              (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v33);
            }
            v40 += 2;
            --v29;
          }
          while ( v29 );
          v33 = v493;
        }
        free((void *)v33);
      }
      if ( !v32 )
        goto LABEL_40;
    }
    else
    {
      v41 = v33;
      while ( 1 )
      {
        if ( (int)v40 < 0 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_725;
        }
        if ( *(_BYTE *)(*(_QWORD *)v41 + 20LL) )
        {
          v328 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v493,
                                                   (int)v40);
          v329 = SystemEffectChainDescriptor::Resolve(*v328, (struct SystemEffectDescriptor *)v31);
          if ( v329 < 0 )
            break;
        }
        v40 = (volatile signed __int32 **)(unsigned int)((_DWORD)v40 + 1);
        v41 += 4;
        if ( (int)v40 >= (int)v29 )
          goto LABEL_29;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v329);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v493);
      if ( !v32 )
        goto LABEL_40;
    }
    v42 = v32;
    goto LABEL_39;
  }
  v492 = 0LL;
  v478 = 0;
  if ( a5 != eOffloadConnector || a2 )
  {
    v375 = (char *)CoTaskMemAlloc(0x120uLL);
    v461 = v375;
    if ( !v375 )
    {
      v86 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
LABEL_892:
      v376 = v492;
      v492 = 0LL;
      if ( v376 )
        CoTaskMemFree(v376);
      goto LABEL_704;
    }
    memset_0(v375, 0, 0x120uLL);
    *(_DWORD *)v461 = v472;
    *((_DWORD *)v461 + 34) = v25;
    *((_QWORD *)v461 + 18) = 0LL;
    *((_DWORD *)v461 + 46) = 0;
    *((_DWORD *)v461 + 1) = 0;
  }
  else
  {
    v612 = *v480;
    v523 = 0LL;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(v27, &v612, 0, eOffloadConnector, &v523, 0LL, 0LL);
    v367 = StreamEffect;
    if ( StreamEffect < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BF,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)StreamEffect);
      v86 = v367;
LABEL_887:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v523);
      goto LABEL_892;
    }
    if ( v523 )
    {
      v576 = &v492;
      v577 = 0LL;
      v578 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, void **))(*(_QWORD *)v523 + 32LL))(
        v523,
        &v478,
        &v577);
      if ( v578 )
      {
        v368 = *v576;
        *v576 = v577;
        if ( v368 )
          CoTaskMemFree(v368);
      }
    }
    v369 = v478;
    v370 = 16 * (v478 + 17LL);
    v371 = (char *)CoTaskMemAlloc(v370);
    v461 = v371;
    if ( !v371 )
    {
      v86 = -2147024882;
      v372 = 454LL;
LABEL_886:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v372,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v86);
      goto LABEL_887;
    }
    memset_0(v371, 0, v370);
    *(_DWORD *)v461 = 0;
    *((_DWORD *)v461 + 34) = v25;
    *((_QWORD *)v461 + 18) = 0LL;
    *((_DWORD *)v461 + 46) = 0;
    *((_DWORD *)v461 + 40) = 0;
    v373 = 0;
    if ( v478 )
    {
      while ( 1 )
      {
        v374 = *((_DWORD *)v461 + 46);
        if ( v374 > 0x1F )
          break;
        *((_DWORD *)v461 + 40) |= 1 << v374;
        *(_OWORD *)&v461[16 * (*((_DWORD *)v461 + 46))++ + 272] = *((_OWORD *)v492 + v373);
        if ( ++v373 >= v478 )
          goto LABEL_883;
      }
      v372 = 465LL;
      goto LABEL_885;
    }
LABEL_883:
    *((_DWORD *)v461 + 1) = 0;
    if ( *((_DWORD *)v461 + 46) > v369 )
    {
      v372 = 473LL;
LABEL_885:
      v86 = -2147418113;
      goto LABEL_886;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v523);
    v29 = (unsigned __int64)v521;
  }
  v377 = v492;
  v492 = 0LL;
  if ( v377 )
    CoTaskMemFree(v377);
LABEL_243:
  v125 = v480;
  *(struct _GUID *)(v461 + 164) = *v480;
  *((_DWORD *)v461 + 2) = a5;
  *((_QWORD *)v461 + 16) = a9;
  *((_DWORD *)v461 + 30) = *(unsigned __int16 *)(a9 + 16) + 18;
  *((_QWORD *)v461 + 3) = a11;
  *((_QWORD *)v461 + 4) = a12;
  *((_DWORD *)v461 + 3) = a8;
  *((_QWORD *)v461 + 2) = a13;
  v126 = a16;
  if ( !a16 )
    v126 = &GUID_00000000_0000_0000_0000_000000000000;
  *((GUID *)v461 + 3) = *v126;
  *((_OWORD *)v461 + 12) = *(_OWORD *)a17;
  *((_OWORD *)v461 + 13) = *(_OWORD *)(a17 + 16);
  *((_OWORD *)v461 + 14) = *(_OWORD *)(a17 + 32);
  *((_QWORD *)v461 + 30) = *(_QWORD *)(a17 + 48);
  *((_QWORD *)v461 + 14) = a18;
  *((GUID *)v461 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v28 )
  {
    v127 = *(_QWORD *)&v28->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v28->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v127 = *(_QWORD *)v28->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v127 )
    {
      rclsid = *v28;
      ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v461 + 4);
      if ( ContainerProperty < 0 )
      {
        v379 = 507LL;
LABEL_902:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v379,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)ContainerProperty);
        v86 = ContainerProperty;
        goto LABEL_704;
      }
      v125 = v480;
    }
  }
  *((GUID *)v461 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  if ( !v28 )
    goto LABEL_253;
  v128 = *(_QWORD *)&v28->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v28->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v128 = *(_QWORD *)v28->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v128 )
    goto LABEL_253;
  v629 = *v28;
  ContainerProperty = GetContainerProperty(&v629, &PKEY_Audio_CPEventManager, (struct _GUID *)v461 + 5);
  if ( ContainerProperty < 0 )
  {
    v379 = 514LL;
    goto LABEL_902;
  }
  v125 = v480;
LABEL_253:
  if ( a15 )
  {
    v129 = *a15 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *a15 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v129 = a15[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v129 )
      *((_OWORD *)v461 + 6) = *(_OWORD *)a15;
  }
LABEL_258:
  v130 = 0LL;
  if ( !v29 )
  {
LABEL_699:
    if ( v594 )
    {
      v323 = v461;
      v461 = (char *)v130;
      *v594 = v323;
    }
    if ( v29 )
    {
      v324 = v462;
      v462 = (char *)v130;
      *(_QWORD *)v29 = v324;
    }
    v86 = v130;
    goto LABEL_704;
  }
  v490 = 0LL;
  v485 = 0LL;
  v468 = 0;
  v484 = 0LL;
  v131 = *v125;
  v490 = 0LL;
  v484 = 0LL;
  v491 = (struct SystemEffectDescriptor *)(96LL * (int)a5);
  v132 = (struct SystemEffectDescriptor *)((char *)v491 + (_QWORD)v27 + 232);
  v467 = v132;
  if ( *((_BYTE *)v132 + 52) )
  {
    v133 = (struct _RTL_CRITICAL_SECTION *)((char *)v132 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v132 + 56));
    v552 = (struct _RTL_CRITICAL_SECTION *)((char *)v132 + 56);
    v135 = 0LL;
    v506 = 0LL;
    v136 = 0LL;
    v507 = 0;
    v137 = 0;
    v508 = 0;
    v138 = 0;
    if ( *((int *)v132 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( v130 < 0 || v138 >= *((_DWORD *)v132 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v134);
          __debugbreak();
        }
        v139 = *((_QWORD *)v132 + 4);
        if ( (_DWORD)v136 == v137 )
        {
          if ( v137 )
          {
            v137 = 2 * v136;
            if ( (v136 & 0x40000000) != 0 )
              goto LABEL_907;
          }
          else
          {
            v137 = 1;
          }
          if ( (unsigned __int64)v137 > 0x7FFFFFF
            || (v140 = _o__recalloc(v135, v137, 16LL), (v135 = (volatile signed __int32 *)v140) == 0LL) )
          {
LABEL_907:
            v380 = 2147942414LL;
            v381 = 502LL;
            goto LABEL_909;
          }
          v508 = v137;
          v506 = (volatile signed __int32 *)v140;
        }
        v141 = &v135[4 * (int)v136];
        if ( v141 )
        {
          *(_QWORD *)v141 = 0LL;
          *((_QWORD *)v141 + 1) = 0LL;
          v142 = *(_QWORD *)(v139 + v130 + 8);
          if ( v142 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v142 + 8));
            v137 = v508;
            LODWORD(v136) = v507;
            v135 = v506;
          }
          *(_QWORD *)v141 = *(_QWORD *)(v139 + v130);
          *((_QWORD *)v141 + 1) = *(_QWORD *)(v139 + v130 + 8);
        }
        v136 = (unsigned int)(v136 + 1);
        v507 = v136;
        ++v138;
        v130 += 16LL;
        v132 = v467;
        if ( v138 >= *((_DWORD *)v467 + 10) )
        {
          v130 = 0LL;
          break;
        }
      }
    }
    v143 = 0LL;
    if ( (int)v136 <= 0 )
    {
LABEL_281:
      if ( v135 )
      {
        if ( (int)v136 > 0 )
        {
          v143 = (volatile signed __int32 **)(v135 + 2);
          do
          {
            v135 = *v143;
            if ( *v143 && _InterlockedExchangeAdd(v135 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_914:
              (**(void (__fastcall ***)(volatile signed __int32 *))v135)(v135);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v135);
            }
            v143 += 2;
            --v136;
          }
          while ( v136 );
          v135 = v506;
        }
        free((void *)v135);
      }
      if ( v133 )
        LeaveCriticalSection(v133);
    }
    else
    {
      v130 = (__int64)v135;
      while ( 1 )
      {
        if ( (int)v143 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v134);
          goto LABEL_914;
        }
        if ( *(_BYTE *)(*(_QWORD *)v130 + 20LL) )
        {
          v382 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v506,
                                                   (int)v143);
          v383 = SystemEffectChainDescriptor::Resolve(*v382, v132);
          if ( v383 < 0 )
            break;
        }
        v143 = (volatile signed __int32 **)(unsigned int)((_DWORD)v143 + 1);
        v130 += 16LL;
        if ( (int)v143 >= (int)v136 )
        {
          v130 = 0LL;
          goto LABEL_281;
        }
      }
      v380 = (unsigned int)v383;
      v381 = 508LL;
LABEL_909:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v381,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v380);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v506);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v552);
      v130 = 0LL;
    }
  }
  v144 = v491;
  v145 = v473;
  v146 = (CEndpointCharacteristics *)((char *)v473 + (_QWORD)v491 + 616);
  v471 = v146;
  if ( *((_BYTE *)v146 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
    v553 = (struct _RTL_CRITICAL_SECTION *)((char *)v146 + 56);
    v147 = (char *)v130;
    v530 = (struct SystemEffectDescriptor *)v130;
    v148 = (unsigned int)v130;
    v531 = v130;
    v532 = v130;
    if ( *((int *)v146 + 10) > 0 )
    {
      while ( 1 )
      {
        v384 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v146 + 32, v130);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v530,
                              v384) )
          break;
        LODWORD(v130) = v130 + 1;
        if ( (int)v130 >= *((_DWORD *)v146 + 10) )
        {
          v148 = v531;
          v147 = (char *)v530;
          goto LABEL_293;
        }
      }
      v385 = 2147942414LL;
      v386 = 502LL;
    }
    else
    {
LABEL_293:
      v149 = 0;
      if ( (int)v148 <= 0 )
      {
LABEL_294:
        if ( v147 )
        {
          if ( (int)v148 > 0 )
          {
            v389 = v147;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v389);
              v389 += 16;
              --v148;
            }
            while ( v148 );
          }
          free(v147);
        }
        if ( v146 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
        goto LABEL_297;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v530,
                                     v149)
                      + 20LL) )
        {
          v387 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v530,
                                                   v149);
          v388 = SystemEffectChainDescriptor::Resolve(*v387, v146);
          if ( v388 < 0 )
            break;
        }
        if ( ++v149 >= (int)v148 )
          goto LABEL_294;
      }
      v385 = (unsigned int)v388;
      v386 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v386,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v385);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v530);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v553);
  }
LABEL_297:
  v150 = (char *)v145 + (_QWORD)v144 + 1000;
  lpCriticalSectiona = (LPCRITICAL_SECTION)v150;
  if ( !v150[52] )
    goto LABEL_329;
  v151 = (struct _RTL_CRITICAL_SECTION *)(v150 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v150 + 56));
  v554 = v151;
  v152 = 0LL;
  v496 = 0LL;
  v153 = 0LL;
  v497 = 0LL;
  v154 = 0;
  v155 = 0;
  v156 = lpCriticalSectiona;
  if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
  {
    v157 = 0LL;
    while ( 1 )
    {
      if ( v157 < 0 || v155 >= SLODWORD(v156[1].DebugInfo) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v156);
        __debugbreak();
      }
      SpinCount = v156->SpinCount;
      if ( (_DWORD)v153 == v154 )
      {
        if ( v154 )
        {
          v154 = 2 * v153;
          if ( (v153 & 0x40000000) != 0 )
            goto LABEL_930;
        }
        else
        {
          v154 = 1;
        }
        if ( (unsigned __int64)v154 > 0x7FFFFFF
          || (v159 = _o__recalloc(v152, v154, 16LL), (v152 = (volatile signed __int32 *)v159) == 0LL) )
        {
LABEL_930:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v496);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v554);
          v146 = v471;
          goto LABEL_329;
        }
        HIDWORD(v497) = v154;
        v496 = (volatile signed __int32 *)v159;
        v156 = lpCriticalSectiona;
      }
      v160 = &v152[4 * (int)v153];
      if ( v160 )
      {
        *(_QWORD *)v160 = 0LL;
        *((_QWORD *)v160 + 1) = 0LL;
        v161 = *(_QWORD *)(SpinCount + v157 + 8);
        if ( v161 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v161 + 8));
          v154 = HIDWORD(v497);
          LODWORD(v153) = v497;
          v152 = v496;
        }
        *(_QWORD *)v160 = *(_QWORD *)(SpinCount + v157);
        *((_QWORD *)v160 + 1) = *(_QWORD *)(SpinCount + v157 + 8);
      }
      v153 = (unsigned int)(v153 + 1);
      LODWORD(v497) = v153;
      ++v155;
      v157 += 16LL;
      if ( v155 >= SLODWORD(v156[1].DebugInfo) )
      {
        v146 = v471;
        break;
      }
    }
  }
  v162 = 0LL;
  if ( (int)v153 <= 0 )
  {
LABEL_319:
    if ( v152 )
    {
      if ( (int)v153 > 0 )
      {
        v162 = (volatile signed __int32 **)(v152 + 2);
        do
        {
          v152 = *v162;
          if ( *v162 && _InterlockedExchangeAdd(v152 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_935:
            (**(void (__fastcall ***)(volatile signed __int32 *))v152)(v152);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v152);
          }
          v162 += 2;
          --v153;
        }
        while ( v153 );
        v152 = v496;
      }
      free((void *)v152);
    }
    if ( v151 )
      LeaveCriticalSection(v151);
  }
  else
  {
    v163 = v152;
    while ( 1 )
    {
      if ( (int)v162 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v156);
        goto LABEL_935;
      }
      if ( *(_BYTE *)(*(_QWORD *)v163 + 20LL) )
      {
        v390 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v496,
                                                 (int)v162);
        v391 = SystemEffectChainDescriptor::Resolve(*v390, (struct SystemEffectDescriptor *)lpCriticalSectiona);
        if ( v391 < 0 )
          break;
      }
      v162 = (volatile signed __int32 **)(unsigned int)((_DWORD)v162 + 1);
      v163 += 4;
      if ( (int)v162 >= (int)v153 )
        goto LABEL_319;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v391);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v496);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v554);
  }
LABEL_329:
  v164 = v473;
  if ( !*((_DWORD *)v473 + a5 + 12) )
    goto LABEL_940;
  v165 = 1;
  if ( !*((_QWORD *)v473 + 8) )
  {
    v166 = a5;
LABEL_335:
    v167 = 1;
    goto LABEL_336;
  }
  v567 = 0LL;
  v568 = 0LL;
  v569 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v473 + 8) + 40LL))(
         *((_QWORD *)v473 + 8),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v567) >= 0
    && (_WORD)v567 == 19 )
  {
    v165 = v568 == 0;
  }
  PropVariantClear(&v567);
  v166 = a5;
  if ( v165 || a5 == eKeywordDetectorConnector )
    goto LABEL_335;
  v167 = 0;
LABEL_336:
  v615 = v131;
  if ( v167 )
  {
    v596 = v131;
    v597 = v131;
    if ( *((_BYTE *)v146 + 52) && (v168 = 0, *((int *)v146 + 10) > 0) )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)v146 + 32,
                                     v168)
                      + 20LL) )
        {
          v392 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)v146 + 32,
                             v168);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v392, &v597) != -1 )
            break;
        }
        if ( ++v168 >= *((_DWORD *)v146 + 10) )
          goto LABEL_957;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
      v622 = (char *)v146 + 56;
      v393 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v146 + 32, v168);
      v394 = *(volatile signed __int32 **)(v393 + 8);
      if ( v394 )
      {
        _InterlockedIncrement(v394 + 2);
        v394 = *(volatile signed __int32 **)(v393 + 8);
      }
      v616 = *(SystemEffectChainDescriptor **)v393;
      v617 = v394;
      if ( (int)SystemEffectChainDescriptor::Resolve(v616, v146) >= 0 )
      {
        if ( v394 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v394);
        if ( v146 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
LABEL_957:
        v166 = a5;
        goto LABEL_339;
      }
      if ( v394 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v394);
      if ( v146 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
    }
    else
    {
LABEL_339:
      v169 = 0;
      if ( *((int *)v146 + 10) <= 0 )
        goto LABEL_340;
      while ( 1 )
      {
        v395 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)v146 + 32,
                           v169);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v395, &v597) != -1 )
          break;
        if ( ++v169 >= *((_DWORD *)v146 + 10) )
          goto LABEL_950;
      }
      if ( v169 != -1 )
      {
        v170 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            (__int64)v146 + 32,
                            v169);
        v166 = a5;
        goto LABEL_346;
      }
    }
LABEL_950:
    v166 = a5;
LABEL_340:
    v170 = *((_QWORD *)v146 + 2);
    if ( !v170 )
      goto LABEL_964;
    v171 = 0;
    v172 = *(_DWORD *)(v170 + 8);
    if ( v172 <= 0 )
      goto LABEL_964;
    while ( 1 )
    {
      v173 = (_QWORD *)(*(_QWORD *)v170 + 16LL * v171);
      v174 = *v173 - *(_QWORD *)&v596.Data1;
      if ( *v173 == *(_QWORD *)&v596.Data1 )
        v174 = v173[1] - *(_QWORD *)v596.Data4;
      if ( !v174 )
        break;
      if ( ++v171 >= v172 )
        goto LABEL_964;
    }
    if ( v171 == -1 )
LABEL_964:
      v170 = 0LL;
LABEL_346:
    if ( v170 )
      goto LABEL_347;
LABEL_940:
    v130 = 0LL;
    goto LABEL_457;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v146, &v615) == -1 )
    goto LABEL_940;
LABEL_347:
  v601 = v131;
  if ( v166 == eHostProcessConnector )
  {
    v175 = 1;
    if ( *((_QWORD *)v164 + 8) )
    {
      v579 = 0LL;
      v580 = 0LL;
      v581 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v164 + 8) + 40LL))(
             *((_QWORD *)v164 + 8),
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v579) >= 0
        && (_WORD)v579 == 19 )
      {
        v175 = v580 == 0;
      }
      PropVariantClear(&v579);
      if ( !v175 )
      {
        v204 = (char *)v164 + 136;
        goto LABEL_424;
      }
    }
  }
  if ( !*((_BYTE *)v467 + 52) )
    goto LABEL_385;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v467 + 56));
  v555 = (struct _RTL_CRITICAL_SECTION *)((char *)v467 + 56);
  v176 = 0LL;
  v509 = 0LL;
  v177 = 0LL;
  v510 = 0LL;
  v178 = 0;
  v179 = 0;
  v180 = v467;
  if ( *((int *)v467 + 10) > 0 )
  {
    v181 = 0LL;
    while ( 1 )
    {
      if ( v181 < 0 || v179 >= *((_DWORD *)v180 + 10) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v180);
        __debugbreak();
      }
      v182 = *((_QWORD *)v180 + 4);
      if ( (_DWORD)v177 == v178 )
      {
        if ( v178 )
        {
          v178 = 2 * v177;
          if ( (v177 & 0x40000000) != 0 )
            goto LABEL_967;
        }
        else
        {
          v178 = 1;
        }
        if ( (unsigned __int64)v178 > 0x7FFFFFF
          || (v183 = _o__recalloc(v176, v178, 16LL), (v176 = (volatile signed __int32 *)v183) == 0LL) )
        {
LABEL_967:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v509);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v555);
          v146 = v471;
          goto LABEL_385;
        }
        HIDWORD(v510) = v178;
        v509 = (volatile signed __int32 *)v183;
        v180 = v467;
      }
      v184 = &v176[4 * (int)v177];
      if ( v184 )
      {
        *(_QWORD *)v184 = 0LL;
        *((_QWORD *)v184 + 1) = 0LL;
        v185 = *(_QWORD *)(v182 + v181 + 8);
        if ( v185 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v185 + 8));
          v178 = HIDWORD(v510);
          LODWORD(v177) = v510;
          v176 = v509;
        }
        *(_QWORD *)v184 = *(_QWORD *)(v182 + v181);
        *((_QWORD *)v184 + 1) = *(_QWORD *)(v182 + v181 + 8);
      }
      v177 = (unsigned int)(v177 + 1);
      LODWORD(v510) = v177;
      ++v179;
      v181 += 16LL;
      if ( v179 >= *((_DWORD *)v180 + 10) )
      {
        v146 = v471;
        break;
      }
    }
  }
  v186 = 0LL;
  if ( (int)v177 <= 0 )
  {
LABEL_375:
    if ( v176 )
    {
      if ( (int)v177 > 0 )
      {
        v186 = (volatile signed __int32 **)(v176 + 2);
        do
        {
          v176 = *v186;
          if ( *v186 && _InterlockedExchangeAdd(v176 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_972:
            (**(void (__fastcall ***)(volatile signed __int32 *))v176)(v176);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v176);
          }
          v186 += 2;
          --v177;
        }
        while ( v177 );
        v176 = v509;
      }
      free((void *)v176);
    }
    if ( v467 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v467 + 56));
  }
  else
  {
    v187 = v176;
    while ( 1 )
    {
      if ( (int)v186 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v180);
        goto LABEL_972;
      }
      if ( *(_BYTE *)(*(_QWORD *)v187 + 20LL) )
      {
        v396 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v509,
                                                 (int)v186);
        v397 = SystemEffectChainDescriptor::Resolve(*v396, v467);
        if ( v397 < 0 )
          break;
      }
      v186 = (volatile signed __int32 **)(unsigned int)((_DWORD)v186 + 1);
      v187 += 4;
      if ( (int)v186 >= (int)v177 )
        goto LABEL_375;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v397);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v509);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v555);
  }
LABEL_385:
  if ( *((_BYTE *)v146 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
    v556 = (struct _RTL_CRITICAL_SECTION *)((char *)v146 + 56);
    v188 = 0LL;
    v533 = 0LL;
    v189 = 0LL;
    v534 = 0LL;
    v190 = 0;
    if ( *((int *)v146 + 10) > 0 )
    {
      while ( 1 )
      {
        v398 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v146 + 32, v190);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v533,
                              v398) )
          break;
        if ( ++v190 >= *((_DWORD *)v146 + 10) )
        {
          v189 = (unsigned int)v534;
          v188 = v533;
          goto LABEL_387;
        }
      }
      v399 = 2147942414LL;
      v400 = 502LL;
    }
    else
    {
LABEL_387:
      v191 = 0;
      if ( (int)v189 <= 0 )
      {
LABEL_388:
        if ( v188 )
        {
          if ( (int)v189 > 0 )
          {
            v403 = v188;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v403);
              v403 += 16;
              --v189;
            }
            while ( v189 );
          }
          free(v188);
        }
        if ( v146 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
        goto LABEL_391;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v533,
                                     v191)
                      + 20LL) )
        {
          v401 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v533,
                                                   v191);
          v402 = SystemEffectChainDescriptor::Resolve(*v401, v146);
          if ( v402 < 0 )
            break;
        }
        if ( ++v191 >= (int)v189 )
          goto LABEL_388;
      }
      v399 = (unsigned int)v402;
      v400 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v400,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v399);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v533);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v556);
  }
LABEL_391:
  if ( !LOBYTE(lpCriticalSectiona[1].RecursionCount) )
    goto LABEL_423;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
  v557 = (LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56);
  v192 = 0LL;
  v511 = 0LL;
  v193 = 0LL;
  v512 = 0LL;
  v194 = 0;
  v195 = 0;
  v196 = lpCriticalSectiona;
  if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
  {
    v197 = 0LL;
    while ( 1 )
    {
      if ( v197 < 0 || v195 >= SLODWORD(v196[1].DebugInfo) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v196);
        __debugbreak();
      }
      v198 = v196->SpinCount;
      if ( (_DWORD)v193 == v194 )
      {
        if ( v194 )
        {
          v194 = 2 * v193;
          if ( (v193 & 0x40000000) != 0 )
            goto LABEL_988;
        }
        else
        {
          v194 = 1;
        }
        if ( (unsigned __int64)v194 > 0x7FFFFFF
          || (v199 = _o__recalloc(v192, v194, 16LL), (v192 = (volatile signed __int32 *)v199) == 0LL) )
        {
LABEL_988:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v511);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v557);
          v146 = v471;
          goto LABEL_423;
        }
        HIDWORD(v512) = v194;
        v511 = (volatile signed __int32 *)v199;
        v196 = lpCriticalSectiona;
      }
      v200 = &v192[4 * (int)v193];
      if ( v200 )
      {
        *(_QWORD *)v200 = 0LL;
        *((_QWORD *)v200 + 1) = 0LL;
        v201 = *(_QWORD *)(v198 + v197 + 8);
        if ( v201 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v201 + 8));
          v194 = HIDWORD(v512);
          LODWORD(v193) = v512;
          v192 = v511;
        }
        *(_QWORD *)v200 = *(_QWORD *)(v198 + v197);
        *((_QWORD *)v200 + 1) = *(_QWORD *)(v198 + v197 + 8);
      }
      v193 = (unsigned int)(v193 + 1);
      LODWORD(v512) = v193;
      ++v195;
      v197 += 16LL;
      if ( v195 >= SLODWORD(v196[1].DebugInfo) )
      {
        v146 = v471;
        break;
      }
    }
  }
  v202 = 0LL;
  if ( (int)v193 <= 0 )
  {
LABEL_413:
    if ( v192 )
    {
      if ( (int)v193 > 0 )
      {
        v202 = (volatile signed __int32 **)(v192 + 2);
        do
        {
          v192 = *v202;
          if ( *v202 && _InterlockedExchangeAdd(v192 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_993:
            (**(void (__fastcall ***)(volatile signed __int32 *))v192)(v192);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v192);
          }
          v202 += 2;
          --v193;
        }
        while ( v193 );
        v192 = v511;
      }
      free((void *)v192);
    }
    if ( lpCriticalSectiona != (LPCRITICAL_SECTION)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
  }
  else
  {
    v203 = v192;
    while ( 1 )
    {
      if ( (int)v202 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v196);
        goto LABEL_993;
      }
      if ( *(_BYTE *)(*(_QWORD *)v203 + 20LL) )
      {
        v404 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v511,
                                                 (int)v202);
        v405 = SystemEffectChainDescriptor::Resolve(*v404, (struct SystemEffectDescriptor *)lpCriticalSectiona);
        if ( v405 < 0 )
          break;
      }
      v202 = (volatile signed __int32 **)(unsigned int)((_DWORD)v202 + 1);
      v203 += 4;
      if ( (int)v202 >= (int)v193 )
        goto LABEL_413;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v405);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v511);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v557);
  }
LABEL_423:
  v164 = v473;
  v204 = (char *)v473 + 16 * a5 + 72;
LABEL_424:
  v205 = 0;
  v206 = *((_DWORD *)v204 + 2);
  if ( v206 <= 0 )
    goto LABEL_430;
  v207 = *(_QWORD *)v204;
  while ( 1 )
  {
    v208 = *(_QWORD *)(v207 + 16LL * v205) - *(_QWORD *)&v601.Data1;
    if ( !v208 )
      v208 = *(_QWORD *)(v207 + 16LL * v205 + 8) - *(_QWORD *)v601.Data4;
    if ( !v208 )
      break;
    if ( ++v205 >= v206 )
      goto LABEL_430;
  }
  v209 = 1;
  if ( v205 == -1 )
LABEL_430:
    v209 = 0;
  v210 = 0LL;
  v483 = 0LL;
  v490 = 0LL;
  v484 = 0LL;
  if ( !v146 )
  {
    v130 = 0LL;
    goto LABEL_456;
  }
  v479 = 0LL;
  v598 = v131;
  v602 = v131;
  v211 = 0;
  if ( *((int *)v146 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v146 + 32,
                                   v211)
                    + 20LL) )
      {
        v406 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)v146 + 32,
                           v211);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v406, &v602) != -1 )
          break;
      }
      if ( ++v211 >= *((_DWORD *)v146 + 10) )
        goto LABEL_433;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
    v623 = (char *)v146 + 56;
    v407 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v146 + 32, v211);
    v408 = *(volatile signed __int32 **)(v407 + 8);
    if ( v408 )
    {
      _InterlockedIncrement(v408 + 2);
      v408 = *(volatile signed __int32 **)(v407 + 8);
    }
    v618 = *(SystemEffectChainDescriptor **)v407;
    v619 = v408;
    if ( (int)SystemEffectChainDescriptor::Resolve(v618, v146) < 0 )
    {
      if ( v408 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v408);
      if ( v146 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
      goto LABEL_434;
    }
    if ( v408 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v408);
    if ( v146 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v146 + 56));
  }
LABEL_433:
  v212 = 0;
  if ( *((int *)v146 + 10) > 0 )
  {
    while ( 1 )
    {
      v409 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                         (__int64)v146 + 32,
                         v212);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v409, &v602) != -1 )
        break;
      if ( ++v212 >= *((_DWORD *)v146 + 10) )
        goto LABEL_434;
    }
    if ( v212 != -1 )
    {
      v213 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                          (__int64)v146 + 32,
                          v212);
      goto LABEL_440;
    }
  }
LABEL_434:
  v213 = *((_QWORD *)v146 + 2);
  if ( !v213 )
    goto LABEL_1017;
  v214 = 0;
  v215 = *(_DWORD *)(v213 + 8);
  if ( v215 <= 0 )
    goto LABEL_1017;
  while ( 1 )
  {
    v216 = (_QWORD *)(*(_QWORD *)v213 + 16LL * v214);
    v217 = *v216 - *(_QWORD *)&v598.Data1;
    if ( *v216 == *(_QWORD *)&v598.Data1 )
      v217 = v216[1] - *(_QWORD *)v598.Data4;
    if ( !v217 )
      break;
    if ( ++v214 >= v215 )
      goto LABEL_1017;
  }
  if ( v214 == -1 )
LABEL_1017:
    v213 = 0LL;
LABEL_440:
  v218 = 0;
  v219 = 0LL;
  v479 = 0LL;
  if ( v213 )
  {
    v218 = *(_DWORD *)(v213 + 48);
    v220 = v218 == 0;
    if ( v218 <= 0 )
      goto LABEL_449;
    v221 = 0LL;
    v222 = *(int *)(v213 + 48);
    v223 = -1LL;
    if ( v222 != 1 )
      v223 = 0xFFFFFFFFFFFFFFFFuLL / v222;
    if ( v223 < 0x10
      || (v224 = 16 * v222, v224 > 0x7FFFFFFF)
      || (v225 = CoTaskMemAlloc((unsigned int)v224), (v221 = v225) == 0LL) )
    {
      v130 = 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      CoTaskMemFree(v221);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x467,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL);
      ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v479);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v483);
      v227 = -2147024882;
      goto LABEL_1023;
    }
    memcpy_0(v225, *(const void **)(v213 + 40), 16LL * *(int *)(v213 + 48));
    v479 = v221;
    CoTaskMemFree(0LL);
    v218 = *(_DWORD *)(v213 + 48);
    v219 = v479;
  }
  v220 = v218 == 0;
LABEL_449:
  if ( v220 )
  {
    v130 = 0LL;
    goto LABEL_455;
  }
  if ( v209 == 1 )
  {
    v520 = 1;
    v130 = 0LL;
  }
  else
  {
    v130 = 0LL;
    v520 = 0;
  }
  v591 = v219;
  v544 = v218;
  v548 = *((_DWORD *)v164 + 39);
  v547 = 2;
  v226 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
           &v483,
           &v547,
           &v520,
           &v548,
           &v544,
           &v591);
  v227 = v226;
  if ( v226 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x471,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v226);
    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v479);
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v483);
    v228 = a5;
    goto LABEL_1022;
  }
  v624 = v131;
  v228 = a5;
  v229 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, __int64 *, _QWORD))(*(_QWORD *)v483 + 24LL))(
           v483,
           *((_QWORD *)v164 + 2),
           &v624,
           0LL,
           a5,
           &v484,
           0LL);
  v227 = v229;
  if ( v229 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x475,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v229);
    CoTaskMemFree(v479);
    v479 = 0LL;
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v483);
LABEL_1022:
    if ( v227 >= 0 )
      goto LABEL_458;
LABEL_1023:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v227);
    v86 = v227;
    goto LABEL_1154;
  }
  v219 = v479;
LABEL_455:
  CoTaskMemFree(v219);
  v479 = 0LL;
  v210 = v483;
LABEL_456:
  v483 = 0LL;
  v490 = v210;
LABEL_457:
  v228 = a5;
LABEL_458:
  if ( v490 )
  {
    v582 = &v485;
    v583 = 0LL;
    v584 = 1;
    (*(void (__fastcall **)(__int64, unsigned int *, void **))(*(_QWORD *)v490 + 32LL))(v490, &v468, &v583);
    if ( v584 )
    {
      v230 = *v582;
      *v582 = v583;
      if ( v230 )
        CoTaskMemFree(v230);
    }
  }
  if ( (v469 & 0x800000) != 0 )
  {
    if ( v474 )
    {
      v86 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_1154;
    }
    goto LABEL_692;
  }
  if ( v474 || v228 && v228 != 3 )
  {
    v231 = v472;
    goto LABEL_1030;
  }
  v231 = v472;
  if ( v472 == 2 )
    goto LABEL_1030;
  v232 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v232 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v232 )
  {
LABEL_1030:
    if ( v228 == 1 && !v474 )
    {
      if ( v468 > 1 )
        v228 = v468;
      v410 = 16LL * v228;
      v411 = (char *)CoTaskMemAlloc(v410 + 60);
      v462 = v411;
      if ( !v411 )
      {
        v86 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x252,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_1154;
      }
      memset_0(v411, 0, v410 + 60);
      *(_DWORD *)v462 = v231;
      *((_DWORD *)v462 + 1) = 0;
      *((_DWORD *)v462 + 14) = 0;
      v457 = 0LL;
      if ( v468 )
      {
        while ( 1 )
        {
          v458 = *((_DWORD *)v462 + 14);
          if ( v458 > 0x1F )
            break;
          *((_DWORD *)v462 + 8) |= 1 << v458;
          v456 = 2LL * (unsigned int)v457;
          *(_OWORD *)&v462[16 * (*((_DWORD *)v462 + 14))++ + 60] = *((_OWORD *)v485 + (unsigned int)v457);
          v457 = (unsigned int)(v457 + 1);
          if ( (unsigned int)v457 >= v468 )
            goto LABEL_1151;
        }
        v86 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_1154;
      }
LABEL_1151:
      *(struct _GUID *)(v462 + 36) = *v480;
      wil::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>(
        &v545,
        v484,
        v456,
        v457);
      *((_DWORD *)v462 + 13) = v545 != 0;
      if ( *((_DWORD *)v462 + 14) > v228 )
      {
        v86 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x266,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8000FFFFLL);
        v455 = &v545;
        goto LABEL_1153;
      }
      *((_QWORD *)v462 + 2) = a10;
      *((_DWORD *)v462 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v545);
    }
    goto LABEL_692;
  }
  Block = 0LL;
  v476 = 0LL;
  v233 = 0;
  v469 = 0;
  v599 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !v228 )
  {
    LODWORD(v234) = 1;
    v235 = 1;
    if ( *((_QWORD *)v164 + 8) )
    {
      v585 = 0LL;
      v586 = 0LL;
      v587 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v164 + 8) + 40LL))(
             *((_QWORD *)v164 + 8),
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v585) >= 0
        && (_WORD)v585 == 19 )
      {
        v235 = v586 == 0;
      }
      PropVariantClear(&v585);
      if ( !v235 )
      {
        v265 = (char *)v164 + 136;
        v247 = v471;
        v264 = v473;
        goto LABEL_546;
      }
    }
  }
  v236 = v467;
  if ( *((_BYTE *)v467 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v467 + 56));
    v558 = (struct _RTL_CRITICAL_SECTION *)((char *)v467 + 56);
    v238 = 0LL;
    v513 = 0LL;
    v239 = 0LL;
    v514 = 0;
    v240 = 0;
    v515 = 0;
    v241 = 0;
    if ( *((int *)v467 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( v130 < 0 || v241 >= *((_DWORD *)v236 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v237);
          __debugbreak();
        }
        v242 = *((_QWORD *)v236 + 4);
        if ( (_DWORD)v239 == v240 )
        {
          if ( v240 )
          {
            v240 = 2 * v239;
            if ( (v239 & 0x40000000) != 0 )
              goto LABEL_1038;
          }
          else
          {
            v240 = 1;
          }
          if ( (unsigned __int64)v240 > 0x7FFFFFF
            || (v243 = _o__recalloc(v238, v240, 16LL), (v238 = (volatile signed __int32 *)v243) == 0LL) )
          {
LABEL_1038:
            v412 = 2147942414LL;
            v413 = 502LL;
            goto LABEL_1040;
          }
          v515 = v240;
          v513 = (volatile signed __int32 *)v243;
        }
        v244 = &v238[4 * (int)v239];
        if ( v244 )
        {
          *(_QWORD *)v244 = 0LL;
          *((_QWORD *)v244 + 1) = 0LL;
          v245 = *(_QWORD *)(v242 + v130 + 8);
          if ( v245 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v245 + 8));
            v240 = v515;
            LODWORD(v239) = v514;
            v238 = v513;
          }
          *(_QWORD *)v244 = *(_QWORD *)(v242 + v130);
          *((_QWORD *)v244 + 1) = *(_QWORD *)(v242 + v130 + 8);
        }
        v239 = (unsigned int)(v239 + 1);
        v514 = v239;
        ++v241;
        v130 += 16LL;
        v236 = v467;
        if ( v241 >= *((_DWORD *)v467 + 10) )
        {
          v130 = 0LL;
          break;
        }
      }
    }
    v246 = 0LL;
    if ( (int)v239 <= 0 )
    {
LABEL_497:
      if ( v238 )
      {
        if ( (int)v239 > 0 )
        {
          v246 = (volatile signed __int32 **)(v238 + 2);
          do
          {
            v238 = *v246;
            if ( *v246 && _InterlockedExchangeAdd(v238 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_1045:
              (**(void (__fastcall ***)(volatile signed __int32 *))v238)(v238);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v238);
            }
            v246 += 2;
            --v239;
          }
          while ( v239 );
          v238 = v513;
        }
        free((void *)v238);
      }
      if ( v467 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v467 + 56));
    }
    else
    {
      v130 = (__int64)v238;
      while ( 1 )
      {
        if ( (int)v246 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v237);
          goto LABEL_1045;
        }
        if ( *(_BYTE *)(*(_QWORD *)v130 + 20LL) )
        {
          v414 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v513,
                                                   (int)v246);
          v415 = SystemEffectChainDescriptor::Resolve(*v414, v236);
          if ( v415 < 0 )
            break;
        }
        v246 = (volatile signed __int32 **)(unsigned int)((_DWORD)v246 + 1);
        v130 += 16LL;
        if ( (int)v246 >= (int)v239 )
        {
          v130 = 0LL;
          goto LABEL_497;
        }
      }
      v412 = (unsigned int)v415;
      v413 = 508LL;
LABEL_1040:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v413,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v412);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v513);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v558);
      v130 = 0LL;
    }
  }
  v247 = v471;
  if ( *((_BYTE *)v471 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
    v559 = (struct _RTL_CRITICAL_SECTION *)((char *)v247 + 56);
    v248 = (char *)v130;
    v535 = (struct SystemEffectDescriptor *)v130;
    v249 = (unsigned int)v130;
    v536 = v130;
    v537 = v130;
    if ( *((int *)v247 + 10) > 0 )
    {
      while ( 1 )
      {
        v416 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v247 + 32, v130);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v535,
                              v416) )
          break;
        LODWORD(v130) = v130 + 1;
        if ( (int)v130 >= *((_DWORD *)v247 + 10) )
        {
          v249 = v536;
          v248 = (char *)v535;
          goto LABEL_509;
        }
      }
      v417 = 2147942414LL;
      v418 = 502LL;
    }
    else
    {
LABEL_509:
      v250 = 0;
      if ( (int)v249 <= 0 )
      {
LABEL_510:
        if ( v248 )
        {
          if ( (int)v249 > 0 )
          {
            v421 = v248;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v421);
              v421 += 16;
              --v249;
            }
            while ( v249 );
          }
          free(v248);
        }
        if ( v247 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v247 + 56));
        goto LABEL_513;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v535,
                                     v250)
                      + 20LL) )
        {
          v419 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v535,
                                                   v250);
          v420 = SystemEffectChainDescriptor::Resolve(*v419, v247);
          if ( v420 < 0 )
            break;
        }
        if ( ++v250 >= (int)v249 )
          goto LABEL_510;
      }
      v417 = (unsigned int)v420;
      v418 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v418,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v417);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v535);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v559);
  }
LABEL_513:
  v251 = lpCriticalSectiona;
  if ( LOBYTE(lpCriticalSectiona[1].RecursionCount) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
    v560 = (LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56);
    v253 = 0LL;
    v516 = 0LL;
    v254 = 0LL;
    v517 = 0LL;
    v255 = 0;
    v256 = 0;
    if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
    {
      v257 = 0LL;
      do
      {
        if ( v257 < 0 || v256 >= SLODWORD(v251[1].DebugInfo) )
        {
          ATL::_AtlRaiseException(0xC000008C, v252);
          __debugbreak();
        }
        v258 = v251->SpinCount;
        if ( (_DWORD)v254 == v255 )
        {
          if ( v255 )
          {
            v255 = 2 * v254;
            if ( (v254 & 0x40000000) != 0 )
              goto LABEL_1061;
          }
          else
          {
            v255 = 1;
          }
          if ( (unsigned __int64)v255 > 0x7FFFFFF
            || (v259 = _o__recalloc(v253, v255, 16LL), (v253 = (volatile signed __int32 *)v259) == 0LL) )
          {
LABEL_1061:
            v422 = 2147942414LL;
            v423 = 502LL;
            goto LABEL_1063;
          }
          HIDWORD(v517) = v255;
          v516 = (volatile signed __int32 *)v259;
        }
        v260 = &v253[4 * (int)v254];
        if ( v260 )
        {
          *(_QWORD *)v260 = 0LL;
          *((_QWORD *)v260 + 1) = 0LL;
          v261 = *(_QWORD *)(v258 + v257 + 8);
          if ( v261 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v261 + 8));
            v255 = HIDWORD(v517);
            LODWORD(v254) = v517;
            v253 = v516;
          }
          *(_QWORD *)v260 = *(_QWORD *)(v258 + v257);
          *((_QWORD *)v260 + 1) = *(_QWORD *)(v258 + v257 + 8);
        }
        v254 = (unsigned int)(v254 + 1);
        LODWORD(v517) = v254;
        ++v256;
        v257 += 16LL;
        v251 = lpCriticalSectiona;
      }
      while ( v256 < SLODWORD(lpCriticalSectiona[1].DebugInfo) );
    }
    v262 = 0LL;
    if ( (int)v254 <= 0 )
    {
LABEL_534:
      if ( v253 )
      {
        if ( (int)v254 > 0 )
        {
          v262 = (volatile signed __int32 **)(v253 + 2);
          do
          {
            v253 = *v262;
            if ( *v262 && _InterlockedExchangeAdd(v253 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_1068:
              (**(void (__fastcall ***)(volatile signed __int32 *))v253)(v253);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v253);
            }
            v262 += 2;
            --v254;
          }
          while ( v254 );
          v253 = v516;
        }
        free((void *)v253);
      }
      if ( lpCriticalSectiona != (LPCRITICAL_SECTION)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
    }
    else
    {
      v263 = v253;
      while ( 1 )
      {
        if ( (int)v262 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v252);
          goto LABEL_1068;
        }
        if ( *(_BYTE *)(*(_QWORD *)v263 + 20LL) )
        {
          v424 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v516,
                                                   (int)v262);
          v425 = SystemEffectChainDescriptor::Resolve(*v424, (struct SystemEffectDescriptor *)v251);
          if ( v425 < 0 )
            break;
        }
        v262 = (volatile signed __int32 **)(unsigned int)((_DWORD)v262 + 1);
        v263 += 4;
        if ( (int)v262 >= (int)v254 )
          goto LABEL_534;
      }
      v422 = (unsigned int)v425;
      v423 = 508LL;
LABEL_1063:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v423,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v422);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v516);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v560);
    }
    v247 = v471;
  }
  v264 = v473;
  v265 = (char *)v473 + 16 * a5 + 72;
  v233 = v469;
  LODWORD(v234) = 1;
  v228 = a5;
  v130 = 0LL;
LABEL_546:
  LODWORD(v266) = 0;
  v267 = *((_DWORD *)v265 + 2);
  if ( v267 <= 0 )
    goto LABEL_1070;
  v268 = *(_QWORD *)v265;
  while ( 1 )
  {
    v269 = *(_QWORD *)(v268 + 16LL * (int)v266) - *(_QWORD *)&v599.Data1;
    if ( !v269 )
      v269 = *(_QWORD *)(v268 + 16LL * (int)v266 + 8) - *(_QWORD *)v599.Data4;
    if ( !v269 )
      break;
    LODWORD(v266) = (_DWORD)v266 + 1;
    if ( (int)v266 >= v267 )
      goto LABEL_1070;
  }
  if ( (_DWORD)v266 == -1 )
  {
LABEL_1070:
    v233 = 0;
    goto LABEL_676;
  }
  j = 1LL;
  if ( !*((_QWORD *)v264 + 8) )
    goto LABEL_557;
  v588 = 0LL;
  v589 = 0LL;
  v590 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v264 + 8) + 40LL))(
         *((_QWORD *)v264 + 8),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v588) >= 0
    && (_WORD)v588 == 19 )
  {
    j = (_DWORD)v589 == 0;
  }
  PropVariantClear(&v588);
  if ( (_DWORD)j || (v271 = 0, v228 == 3) )
LABEL_557:
    v271 = 1;
  if ( !v271 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, v247);
    if ( (_DWORD)v476 == *((_DWORD *)v247 + 2) )
      goto LABEL_584;
    v426 = retaddr;
    v427 = 570LL;
    goto LABEL_1075;
  }
  if ( !*((_BYTE *)v247 + 52) )
    goto LABEL_566;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v247 + 56));
  v551 = (struct _RTL_CRITICAL_SECTION *)((char *)v247 + 56);
  v272 = 0LL;
  v538 = 0LL;
  v273 = 0LL;
  v539 = 0;
  v540 = 0;
  if ( *((int *)v247 + 10) > 0 )
  {
    while ( 1 )
    {
      v428 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v247 + 32, v130);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v538,
                            v428) )
        break;
      LODWORD(v130) = v130 + 1;
      if ( (int)v130 >= *((_DWORD *)v247 + 10) )
      {
        v273 = v539;
        v272 = v538;
        goto LABEL_561;
      }
    }
    v429 = 2147942414LL;
    v430 = 502LL;
  }
  else
  {
LABEL_561:
    v274 = 0;
    if ( (int)v273 <= 0 )
    {
LABEL_562:
      if ( v272 )
      {
        if ( (int)v273 > 0 )
        {
          v433 = v272;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v433);
            v433 += 16;
            --v273;
          }
          while ( v273 );
        }
        free(v272);
      }
      if ( v247 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v247 + 56));
      goto LABEL_565;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)&v538,
                                   v274)
                    + 20LL) )
      {
        v431 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v538,
                                                 v274);
        v432 = SystemEffectChainDescriptor::Resolve(*v431, v247);
        if ( v432 < 0 )
          break;
      }
      if ( ++v274 >= (int)v273 )
        goto LABEL_562;
    }
    v429 = (unsigned int)v432;
    v430 = 508LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v430,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v429);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v538);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v551);
LABEL_565:
  v130 = 0LL;
LABEL_566:
  for ( j = 0LL; (int)j < *((_DWORD *)v247 + 10); j = (unsigned int)(j + 1) )
  {
    for ( k = 0;
          k < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)v247 + 32,
                                       j)
                        + 8LL);
          ++k )
    {
      v435 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v247 + 32, j);
      v436 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v435, k);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&Block, v436) == -1 )
      {
        v437 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            (__int64)v247 + 32,
                            j);
        v438 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v437, k);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, v438) )
        {
          v426 = retaddr;
          v427 = 584LL;
LABEL_1075:
          wil::details::in1diag3::Return_Hr(
            v426,
            (void *)v427,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_584;
        }
      }
    }
  }
  v275 = (__int64 *)*((_QWORD *)v247 + 2);
  if ( v275 )
  {
    j = 0LL;
    if ( *((int *)v275 + 2) > 0 )
    {
      v276 = 0LL;
      do
      {
        if ( (int)j < 0 || (int)j >= *((_DWORD *)v275 + 2) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v266);
          __debugbreak();
        }
        v266 = (const struct _GUID *)(*v275 + 16LL * (int)j);
        v277 = 0;
        if ( (int)v476 <= 0 )
          goto LABEL_573;
        while ( !(unsigned int)IsEqualGUID((const struct _GUID *)Block + v277, v266) )
        {
          v277 = v439 + 1;
          if ( v277 >= (int)v476 )
            goto LABEL_573;
        }
        if ( v439 == -1 )
        {
LABEL_573:
          if ( (int)j >= *((_DWORD *)v275 + 2) )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v266);
            __debugbreak();
          }
          v278 = *v275;
          if ( (_DWORD)v476 == HIDWORD(v476) )
          {
            if ( HIDWORD(v476) )
            {
              v279 = 2 * v476;
              if ( (v476 & 0x40000000) != 0 )
                goto LABEL_1104;
            }
            else
            {
              v279 = 1;
            }
            if ( (unsigned __int64)v279 > 0x7FFFFFF || (v280 = (void *)_o__recalloc(Block, v279, 16LL)) == 0LL )
            {
LABEL_1104:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x254,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL);
              v130 = 0LL;
              break;
            }
            HIDWORD(v476) = v279;
            Block = v280;
          }
          v281 = (char *)Block + 16 * (int)v476;
          if ( v281 )
            *v281 = *(_OWORD *)(v278 + v276);
          LODWORD(v476) = v476 + 1;
          v130 = 0LL;
        }
        j = (unsigned int)(j + 1);
        v276 += 16LL;
        v275 = (__int64 *)*((_QWORD *)v247 + 2);
      }
      while ( (int)j < *((_DWORD *)v275 + 2) );
    }
  }
LABEL_584:
  v282 = 0;
  v474 = 0;
  if ( (int)v476 <= 0 )
    goto LABEL_676;
  v283 = 0LL;
  lpCriticalSectionb = 0LL;
  do
  {
    if ( (__int64)v283 < 0 )
      goto LABEL_1143;
    v603 = *((_OWORD *)Block + (unsigned __int64)v283);
    if ( a5 == eHostProcessConnector )
    {
      j = 1LL;
      v284 = v473;
      if ( *((_QWORD *)v473 + 8) )
      {
        v564 = 0LL;
        v565 = 0LL;
        v566 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v473 + 8) + 40LL))(
               *((_QWORD *)v473 + 8),
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v564) >= 0
          && (_WORD)v564 == 19 )
        {
          j = (_DWORD)v565 == 0;
        }
        PropVariantClear(&v564);
        if ( !(_DWORD)j )
        {
          v315 = (char *)v284 + 136;
          v130 = 0LL;
          goto LABEL_669;
        }
      }
      v130 = 0LL;
    }
    v285 = v467;
    if ( *((_BYTE *)v467 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v467 + 56));
      v561 = (struct _RTL_CRITICAL_SECTION *)((char *)v467 + 56);
      v287 = 0LL;
      v486 = 0LL;
      j = 0LL;
      v487 = 0LL;
      v288 = 0;
      v289 = 0;
      if ( *((int *)v467 + 10) > 0 )
      {
        while ( 1 )
        {
          if ( v130 < 0 || v289 >= *((_DWORD *)v285 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v286);
            __debugbreak();
          }
          v290 = *((_QWORD *)v285 + 4);
          if ( (_DWORD)j == v288 )
          {
            if ( v288 )
            {
              v288 = 2 * j;
              if ( (j & 0x40000000) != 0 )
                goto LABEL_1109;
            }
            else
            {
              v288 = 1;
            }
            if ( (unsigned __int64)v288 > 0x7FFFFFF
              || (v291 = _o__recalloc(v287, v288, 16LL), (v287 = (__int64 *)v291) == 0LL) )
            {
LABEL_1109:
              v440 = 2147942414LL;
              v441 = 502LL;
              goto LABEL_1111;
            }
            HIDWORD(v487) = v288;
            v486 = (__int64 *)v291;
          }
          v292 = &v287[2 * (int)j];
          if ( v292 )
          {
            *v292 = 0LL;
            v292[1] = 0LL;
            v293 = *(_QWORD *)(v290 + v130 + 8);
            if ( v293 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v293 + 8));
              v288 = HIDWORD(v487);
              LODWORD(j) = v487;
              v287 = v486;
            }
            *v292 = *(_QWORD *)(v290 + v130);
            v292[1] = *(_QWORD *)(v290 + v130 + 8);
          }
          j = (unsigned int)(j + 1);
          LODWORD(v487) = j;
          ++v289;
          v130 += 16LL;
          v285 = v467;
          if ( v289 >= *((_DWORD *)v467 + 10) )
          {
            LODWORD(v130) = 0;
            break;
          }
        }
      }
      v294 = 0;
      if ( (int)j <= 0 )
      {
LABEL_617:
        if ( v287 )
        {
          if ( (int)j > 0 )
          {
            v296 = v287 + 1;
            v297 = (unsigned int)j;
            do
            {
              j = *v296;
              if ( *v296 && _InterlockedExchangeAdd((volatile signed __int32 *)(j + 8), 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(__int64))j)(j);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)j);
              }
              v296 += 2;
              --v297;
            }
            while ( v297 );
            v287 = v486;
          }
          free(v287);
          v486 = 0LL;
        }
        v487 = 0LL;
        if ( v467 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v467 + 56));
      }
      else
      {
        v295 = v287;
        while ( 1 )
        {
          if ( v294 < 0 || v294 >= (int)j )
          {
            ATL::_AtlRaiseException(0xC000008C, v286);
LABEL_1141:
            ATL::_AtlRaiseException(0xC000008C, v303);
            __debugbreak();
          }
          if ( *(_BYTE *)(*v295 + 20) )
          {
            v442 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     (__int64)&v486,
                                                     v294);
            v443 = SystemEffectChainDescriptor::Resolve(*v442, v285);
            if ( v443 < 0 )
              break;
          }
          ++v294;
          v295 += 2;
          if ( v294 >= (int)j )
          {
            LODWORD(v130) = 0;
            goto LABEL_617;
          }
        }
        v440 = (unsigned int)v443;
        v441 = 508LL;
LABEL_1111:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v441,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v440);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v486);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v561);
        LODWORD(v130) = 0;
      }
    }
    v298 = v491;
    v299 = (char *)v473 + (_QWORD)v491 + 616;
    if ( !v299[52] )
      goto LABEL_634;
    j = (__int64)(v299 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v299 + 56));
    v562 = (struct _RTL_CRITICAL_SECTION *)(v299 + 56);
    v300 = 0LL;
    v518 = 0LL;
    v519 = 0LL;
    v301 = 0;
    if ( *((int *)v299 + 10) > 0 )
    {
      while ( 1 )
      {
        v444 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v299 + 32), v301);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v518,
                              v444) )
          break;
        if ( ++v301 >= *((_DWORD *)v299 + 10) )
        {
          LODWORD(v130) = v519;
          v300 = v518;
          goto LABEL_630;
        }
      }
      v445 = 2147942414LL;
      v446 = 502LL;
    }
    else
    {
LABEL_630:
      v302 = 0;
      if ( (int)v130 <= 0 )
      {
LABEL_631:
        if ( v300 )
        {
          if ( (int)v130 > 0 )
          {
            v449 = v300;
            v130 = (unsigned int)v130;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v449);
              v449 += 16;
              --v130;
            }
            while ( v130 );
          }
          free(v300);
          v518 = 0LL;
        }
        v519 = 0LL;
        if ( j )
          LeaveCriticalSection((LPCRITICAL_SECTION)j);
        goto LABEL_634;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v518,
                                     v302)
                      + 20LL) )
        {
          v447 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v518,
                                                   v302);
          v448 = SystemEffectChainDescriptor::Resolve(*v447, (struct SystemEffectDescriptor *)v299);
          if ( v448 < 0 )
            break;
        }
        if ( ++v302 >= (int)v130 )
          goto LABEL_631;
      }
      v445 = (unsigned int)v448;
      v446 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v446,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v445);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v518);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v562);
LABEL_634:
    v130 = (__int64)v473 + (_QWORD)v298 + 1000;
    if ( !*(_BYTE *)(v130 + 52) )
      goto LABEL_1132;
    v234 = (struct _RTL_CRITICAL_SECTION *)(v130 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v130 + 56));
    v549 = (struct _RTL_CRITICAL_SECTION *)(v130 + 56);
    v283 = 0LL;
    v488 = 0LL;
    j = 0LL;
    v489 = 0LL;
    v304 = 0;
    v305 = 0;
    if ( *(int *)(v130 + 40) > 0 )
    {
      v306 = 0LL;
      do
      {
        if ( v306 < 0 || v305 >= *(_DWORD *)(v130 + 40) )
          goto LABEL_1141;
        v307 = *(_QWORD *)(v130 + 32);
        if ( (_DWORD)j == v304 )
        {
          if ( v304 )
          {
            v304 = 2 * j;
            if ( (j & 0x40000000) != 0 )
              goto LABEL_1129;
          }
          else
          {
            v304 = 1;
          }
          if ( (unsigned __int64)v304 > 0x7FFFFFF
            || (v308 = _o__recalloc(v283, v304, 16LL), (v283 = (__int64 *)v308) == 0LL) )
          {
LABEL_1129:
            v450 = 2147942414LL;
            v451 = 502LL;
            goto LABEL_1131;
          }
          HIDWORD(v489) = v304;
          v488 = (__int64 *)v308;
        }
        v309 = (char *)&v283[2 * (int)j];
        if ( v309 )
        {
          *(_QWORD *)v309 = 0LL;
          *((_QWORD *)v309 + 1) = 0LL;
          v310 = *(_QWORD *)(v307 + v306 + 8);
          if ( v310 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v310 + 8));
            v304 = HIDWORD(v489);
            LODWORD(j) = v489;
            v283 = v488;
          }
          *(_QWORD *)v309 = *(_QWORD *)(v307 + v306);
          *((_QWORD *)v309 + 1) = *(_QWORD *)(v307 + v306 + 8);
        }
        j = (unsigned int)(j + 1);
        LODWORD(v489) = j;
        ++v305;
        v306 += 16LL;
      }
      while ( v305 < *(_DWORD *)(v130 + 40) );
      v234 = (struct _RTL_CRITICAL_SECTION *)(v130 + 56);
    }
    v311 = 0;
    if ( (int)j <= 0 )
    {
LABEL_657:
      if ( v283 )
      {
        if ( (int)j > 0 )
        {
          v313 = v283 + 1;
          v314 = (unsigned int)j;
          do
          {
            j = *v313;
            if ( *v313 && _InterlockedExchangeAdd((volatile signed __int32 *)(j + 8), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(__int64))j)(j);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)j);
            }
            v313 += 2;
            --v314;
          }
          while ( v314 );
          v283 = v488;
        }
        free(v283);
        v130 = 0LL;
        v488 = 0LL;
      }
      else
      {
        v130 = 0LL;
      }
      v489 = 0LL;
      if ( v234 )
        LeaveCriticalSection(v234);
      goto LABEL_668;
    }
    v312 = (char *)v283;
    while ( 1 )
    {
      if ( v311 < 0 || v311 >= (int)j )
      {
        ATL::_AtlRaiseException(0xC000008C, v303);
LABEL_1143:
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v266);
        CoTaskMemFree(v454);
        v319 = 0LL;
        goto LABEL_682;
      }
      if ( *(_BYTE *)(*(_QWORD *)v312 + 20LL) )
      {
        v452 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v488,
                                                 v311);
        v453 = SystemEffectChainDescriptor::Resolve(*v452, (struct SystemEffectDescriptor *)v130);
        if ( v453 < 0 )
          break;
      }
      ++v311;
      v312 += 16;
      if ( v311 >= (int)j )
        goto LABEL_657;
    }
    v450 = (unsigned int)v453;
    v451 = 508LL;
LABEL_1131:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v451,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v450);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v488);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v549);
LABEL_1132:
    v130 = 0LL;
LABEL_668:
    v315 = (char *)v473 + 16 * a5 + 72;
    v283 = (__int64 *)lpCriticalSectionb;
    v282 = v474;
    LODWORD(v234) = 1;
LABEL_669:
    LODWORD(v266) = 0;
    v316 = *((_DWORD *)v315 + 2);
    if ( v316 <= 0 )
      goto LABEL_675;
    v317 = *(_QWORD *)v315;
    while ( 1 )
    {
      v318 = *(_QWORD *)(v317 + 16LL * (int)v266) - v603;
      if ( !v318 )
        v318 = *(_QWORD *)(v317 + 16LL * (int)v266 + 8) - *((_QWORD *)&v603 + 1);
      if ( !v318 )
        break;
      LODWORD(v266) = (_DWORD)v266 + 1;
      if ( (int)v266 >= v316 )
        goto LABEL_675;
    }
    if ( (_DWORD)v266 == -1 )
    {
LABEL_675:
      v233 = 1;
      goto LABEL_676;
    }
    v474 = ++v282;
    v283 = (__int64 *)((char *)v283 + 1);
    lpCriticalSectionb = (LPCRITICAL_SECTION)v283;
  }
  while ( v282 < (int)v476 );
  v233 = v469;
LABEL_676:
  if ( Block )
    free(Block);
  if ( !v233 )
  {
LABEL_692:
    if ( v484 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v484 + 16LL))(v484);
    v322 = v485;
    v485 = (LPVOID)v130;
    if ( v322 )
      CoTaskMemFree(v322);
    if ( v490 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v490 + 16LL))(v490);
    v29 = (unsigned __int64)v521;
    goto LABEL_699;
  }
  LODWORD(v283) = 1;
  if ( v468 > 1 )
    LODWORD(v283) = v468;
  j = 16LL * (unsigned int)v283;
  v319 = (char *)CoTaskMemAlloc(j + 60);
  v462 = v319;
LABEL_682:
  if ( !v319 )
  {
    v86 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_1154;
  }
  memset_0(v319, 0, j + 60);
  *(_DWORD *)v462 = v472;
  *((_DWORD *)v462 + 1) = v130;
  *((_DWORD *)v462 + 14) = v130;
  v320 = (unsigned int)v130;
  if ( !v468 )
  {
LABEL_686:
    *(struct _GUID *)(v462 + 36) = *v480;
    if ( v484 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *, __int64))v484)(
        v484,
        &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
        &v524,
        v320);
      if ( v524 )
      {
LABEL_689:
        *((_DWORD *)v462 + 13) = (_DWORD)v234;
        if ( *((_DWORD *)v462 + 14) > (unsigned int)v283 )
        {
          v86 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x245,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x8000FFFFLL);
          v455 = &v524;
LABEL_1153:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v455);
          goto LABEL_1154;
        }
        *((_QWORD *)v462 + 2) = a10;
        *((_DWORD *)v462 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
        if ( v524 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v524 + 16LL))(v524);
        goto LABEL_692;
      }
    }
    else
    {
      v524 = v130;
    }
    LODWORD(v234) = v130;
    goto LABEL_689;
  }
  while ( 1 )
  {
    v321 = *((_DWORD *)v462 + 14);
    if ( v321 > 0x1F )
      break;
    *((_DWORD *)v462 + 8) |= (_DWORD)v234 << v321;
    *(_OWORD *)&v462[16 * (*((_DWORD *)v462 + 14))++ + 60] = *((_OWORD *)v485 + (unsigned int)v320);
    v320 = (unsigned int)(v320 + 1);
    if ( (unsigned int)v320 >= v468 )
      goto LABEL_686;
  }
  v86 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23A,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8000FFFFLL);
LABEL_1154:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v484);
  v459 = v485;
  v485 = (LPVOID)v130;
  if ( v459 )
    CoTaskMemFree(v459);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v490);
LABEL_704:
  if ( v462 )
    CoTaskMemFree(v462);
  if ( v461 )
    CoTaskMemFree(v461);
  if ( v550 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v550 + 16LL))(v550, *v550);
  return v86;
}
