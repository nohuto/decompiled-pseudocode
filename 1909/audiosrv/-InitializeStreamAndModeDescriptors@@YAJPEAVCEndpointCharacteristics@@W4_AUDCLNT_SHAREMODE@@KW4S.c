/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180018550
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F5EF4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EC0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000BBD4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000C334 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180035F20 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003EED0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042A5C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800554F4 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180062C8C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180064290 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800BDC14 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800BDC40 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C1A18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$?0UIAudioProcessingObject@@@?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcessingObject@@U?$integral_constant@D$02@wistd@@@Z @ 0x1800F3E14 (--$-0UIAudioProcessingObject@@@-$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_pol.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800F7A34 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180114DC4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115590 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180118050 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=64
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        unsigned int a4,
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
  unsigned int *v120; // rax
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  unsigned int v124; // edi
  __int64 v125; // rax
  unsigned int v126; // ecx
  void *v127; // rcx
  struct _GUID *v128; // r8
  GUID *v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // r14
  struct _GUID v134; // xmm6
  struct SystemEffectDescriptor *v135; // r12
  struct _RTL_CRITICAL_SECTION *v136; // r13
  unsigned int v137; // edx
  volatile signed __int32 *v138; // rbx
  __int64 v139; // rdi
  int v140; // esi
  int v141; // r15d
  __int64 v142; // r12
  __int64 v143; // rax
  volatile signed __int32 *v144; // rcx
  __int64 v145; // rax
  volatile signed __int32 **v146; // rsi
  struct SystemEffectDescriptor *v147; // r15
  CEndpointCharacteristics *v148; // r13
  struct SystemEffectDescriptor *v149; // r12
  char *v150; // rdi
  __int64 v151; // rsi
  int v152; // r14d
  char *v153; // rdx
  struct _RTL_CRITICAL_SECTION *v154; // r13
  volatile signed __int32 *v155; // rbx
  __int64 v156; // rdi
  int v157; // esi
  int v158; // r15d
  LPCRITICAL_SECTION v159; // rdx
  __int64 v160; // r14
  ULONG_PTR SpinCount; // r12
  __int64 v162; // rax
  volatile signed __int32 *v163; // rcx
  __int64 v164; // rax
  volatile signed __int32 **v165; // rsi
  volatile signed __int32 *v166; // r14
  CEndpointCharacteristics *v167; // r15
  BOOL v168; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v169; // r11d
  int v170; // eax
  int v171; // ebx
  int v172; // ebx
  __int64 v173; // rdx
  int v174; // r8d
  int v175; // r9d
  _QWORD *v176; // rcx
  __int64 v177; // rax
  BOOL v178; // ebx
  volatile signed __int32 *v179; // rbx
  __int64 v180; // rdi
  int v181; // esi
  int v182; // r15d
  struct SystemEffectDescriptor *v183; // rdx
  __int64 v184; // r14
  __int64 v185; // r12
  __int64 v186; // rax
  volatile signed __int32 *v187; // rcx
  __int64 v188; // rax
  volatile signed __int32 **v189; // rsi
  volatile signed __int32 *v190; // r14
  char *v191; // rdi
  __int64 v192; // rsi
  int v193; // r14d
  int v194; // r14d
  volatile signed __int32 *v195; // rbx
  __int64 v196; // rdi
  int v197; // esi
  int v198; // r15d
  LPCRITICAL_SECTION v199; // rdx
  __int64 v200; // r14
  ULONG_PTR v201; // r12
  __int64 v202; // rax
  volatile signed __int32 *v203; // rcx
  __int64 v204; // rax
  volatile signed __int32 **v205; // rsi
  volatile signed __int32 *v206; // r14
  char *v207; // rax
  int v208; // edx
  int v209; // r8d
  __int64 v210; // r9
  __int64 v211; // rax
  int v212; // r14d
  __int64 v213; // rax
  int v214; // ebx
  int v215; // ebx
  __int64 v216; // rdi
  int v217; // edx
  int v218; // r8d
  _QWORD *v219; // rcx
  __int64 v220; // rax
  int v221; // eax
  void *v222; // rcx
  bool v223; // zf
  void *v224; // rbx
  unsigned __int64 v225; // rcx
  unsigned __int64 v226; // rax
  unsigned __int64 v227; // rcx
  void *v228; // rax
  int v229; // eax
  int v230; // ebx
  unsigned __int32 v231; // edi
  int v232; // eax
  void *v233; // rcx
  unsigned int v234; // esi
  __int64 v235; // rax
  int v236; // r12d
  struct _RTL_CRITICAL_SECTION *v237; // r13
  BOOL v238; // ebx
  struct SystemEffectDescriptor *v239; // r12
  unsigned int v240; // edx
  volatile signed __int32 *v241; // rbx
  __int64 v242; // rdi
  int v243; // esi
  int v244; // r15d
  __int64 v245; // r12
  __int64 v246; // rax
  volatile signed __int32 *v247; // rcx
  __int64 v248; // rax
  volatile signed __int32 **v249; // rsi
  struct SystemEffectDescriptor *v250; // r15
  char *v251; // rdi
  __int64 v252; // rsi
  int v253; // r14d
  LPCRITICAL_SECTION v254; // r12
  unsigned int v255; // edx
  volatile signed __int32 *v256; // rbx
  __int64 v257; // rdi
  int v258; // esi
  int v259; // r15d
  __int64 v260; // r14
  ULONG_PTR v261; // r12
  __int64 v262; // rax
  volatile signed __int32 *v263; // rcx
  __int64 v264; // rax
  volatile signed __int32 **v265; // rsi
  volatile signed __int32 *v266; // r14
  CEndpointCharacteristics *v267; // r10
  char *v268; // rax
  const struct _GUID *v269; // rdx
  int v270; // r8d
  __int64 v271; // r9
  __int64 v272; // rax
  __int64 j; // rbx
  int v274; // eax
  char *v275; // rdi
  __int64 v276; // rsi
  int v277; // r14d
  __int64 *v278; // r9
  __int64 v279; // rsi
  int v280; // r10d
  __int64 v281; // r14
  int v282; // edi
  void *v283; // rax
  _OWORD *v284; // rax
  int v285; // esi
  __int64 *v286; // rdi
  CEndpointCharacteristics *v287; // r14
  struct SystemEffectDescriptor *v288; // r12
  unsigned int v289; // edx
  __int64 *v290; // rdi
  int v291; // esi
  int v292; // r15d
  __int64 v293; // r12
  __int64 v294; // rax
  __int64 *v295; // rcx
  __int64 v296; // rax
  int v297; // esi
  __int64 *v298; // r14
  __int64 *v299; // rdi
  __int64 v300; // rsi
  struct SystemEffectDescriptor *v301; // r12
  char *v302; // rdi
  char *v303; // rsi
  int v304; // r15d
  int v305; // r15d
  unsigned int v306; // edx
  int v307; // esi
  int v308; // r12d
  __int64 v309; // r15
  __int64 v310; // r13
  __int64 v311; // rax
  char *v312; // rcx
  __int64 v313; // rax
  int v314; // esi
  char *v315; // r15
  __int64 *v316; // rdi
  __int64 v317; // rsi
  char *v318; // rax
  int v319; // r8d
  __int64 v320; // r9
  __int64 v321; // rax
  char *v322; // rax
  __int64 v323; // r9
  unsigned int v324; // ecx
  void *v325; // rcx
  unsigned int *v326; // rax
  char *v327; // rax
  __int64 v329; // rdx
  unsigned int *v330; // rax
  SystemEffectChainDescriptor **v331; // rax
  int v332; // eax
  __int64 v333; // rax
  __int64 v334; // r9
  __int64 v335; // rdx
  SystemEffectChainDescriptor **v336; // rax
  int v337; // eax
  unsigned __int64 v338; // r15
  SystemEffectChainDescriptor **v339; // rax
  int v340; // eax
  SystemEffectChainDescriptor **v341; // rax
  int v342; // eax
  __int64 v343; // rax
  __int64 v344; // r9
  __int64 v345; // rdx
  SystemEffectChainDescriptor **v346; // rax
  int v347; // eax
  unsigned __int64 v348; // r15
  SystemEffectChainDescriptor **v349; // rax
  int v350; // eax
  __int64 **v351; // rax
  __int64 v352; // rax
  volatile signed __int32 *v353; // rbx
  __int64 **v354; // rax
  __int64 v355; // rax
  volatile signed __int32 *v356; // rbx
  struct ICompositeSystemEffect *v357; // rcx
  int Lfx; // eax
  unsigned int v359; // ebx
  unsigned int *v360; // rax
  __int64 v361; // rdx
  SIZE_T v362; // rbx
  unsigned int *v363; // rax
  unsigned int i; // r9d
  unsigned int v365; // ecx
  unsigned int v366; // ecx
  int v367; // ebx
  void *v368; // rcx
  int StreamEffect; // eax
  unsigned int v370; // ebx
  void *v371; // rcx
  unsigned int v372; // edi
  SIZE_T v373; // rbx
  unsigned int *v374; // rax
  __int64 v375; // rdx
  unsigned int v376; // r9d
  unsigned int v377; // ecx
  unsigned int *v378; // rax
  void *v379; // rcx
  void *v380; // rcx
  int ContainerProperty; // ebx
  __int64 v382; // rdx
  __int64 v383; // r9
  __int64 v384; // rdx
  SystemEffectChainDescriptor **v385; // rax
  int v386; // eax
  __int64 v387; // rax
  __int64 v388; // r9
  __int64 v389; // rdx
  SystemEffectChainDescriptor **v390; // rax
  int v391; // eax
  char *v392; // r14
  SystemEffectChainDescriptor **v393; // rax
  int v394; // eax
  __int64 **v395; // rax
  __int64 v396; // rax
  volatile signed __int32 *v397; // rbx
  __int64 **v398; // rax
  SystemEffectChainDescriptor **v399; // rax
  int v400; // eax
  __int64 v401; // rax
  __int64 v402; // r9
  __int64 v403; // rdx
  SystemEffectChainDescriptor **v404; // rax
  int v405; // eax
  char *v406; // r14
  SystemEffectChainDescriptor **v407; // rax
  int v408; // eax
  __int64 **v409; // rax
  __int64 v410; // rax
  volatile signed __int32 *v411; // rbx
  __int64 **v412; // rax
  __int64 v413; // rbx
  char *v414; // rax
  __int64 v415; // r9
  __int64 v416; // rdx
  SystemEffectChainDescriptor **v417; // rax
  int v418; // eax
  __int64 v419; // rax
  __int64 v420; // r9
  __int64 v421; // rdx
  SystemEffectChainDescriptor **v422; // rax
  int v423; // eax
  char *v424; // r14
  __int64 v425; // r9
  __int64 v426; // rdx
  SystemEffectChainDescriptor **v427; // rax
  int v428; // eax
  wil::details::in1diag3 *v429; // rcx
  __int64 v430; // rdx
  __int64 v431; // rax
  __int64 v432; // r9
  __int64 v433; // rdx
  SystemEffectChainDescriptor **v434; // rax
  int v435; // eax
  char *v436; // r14
  int k; // edi
  __int64 *v438; // rax
  _QWORD *v439; // rax
  __int64 *v440; // rax
  _OWORD *v441; // rax
  int v442; // r10d
  __int64 v443; // r9
  __int64 v444; // rdx
  SystemEffectChainDescriptor **v445; // rax
  int v446; // eax
  __int64 v447; // rax
  __int64 v448; // r9
  __int64 v449; // rdx
  SystemEffectChainDescriptor **v450; // rax
  int v451; // eax
  char *v452; // rdi
  __int64 v453; // r9
  __int64 v454; // rdx
  SystemEffectChainDescriptor **v455; // rax
  int v456; // eax
  LPVOID v457; // rcx
  __int64 *v458; // rcx
  __int64 v459; // r8
  __int64 v460; // r9
  unsigned int v461; // ecx
  void *v462; // rcx
  struct IAudioSystemEffects2 **v463; // [rsp+28h] [rbp-E0h]
  struct IAudioProcessingObject **v464; // [rsp+30h] [rbp-D8h]
  unsigned int *v465; // [rsp+48h] [rbp-C0h]
  char *v466; // [rsp+50h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+58h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSectionb; // [rsp+58h] [rbp-B0h]
  struct SystemEffectDescriptor *v470; // [rsp+60h] [rbp-A8h]
  struct SystemEffectDescriptor *v471; // [rsp+60h] [rbp-A8h]
  unsigned int v472; // [rsp+68h] [rbp-A0h] BYREF
  int v473; // [rsp+6Ch] [rbp-9Ch]
  __int64 v474; // [rsp+70h] [rbp-98h] BYREF
  struct SystemEffectDescriptor *v475; // [rsp+78h] [rbp-90h]
  unsigned int v476; // [rsp+80h] [rbp-88h]
  CEndpointCharacteristics *v477; // [rsp+88h] [rbp-80h]
  int v478; // [rsp+90h] [rbp-78h]
  void *Block; // [rsp+98h] [rbp-70h] BYREF
  __int64 v480; // [rsp+A0h] [rbp-68h]
  struct ICompositeSystemEffect *v481; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v482; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v483; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID *v484; // [rsp+C0h] [rbp-48h]
  LPVOID v485; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v487; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v488; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v489; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v490; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v491; // [rsp+F8h] [rbp-10h]
  __int64 *v492; // [rsp+100h] [rbp-8h] BYREF
  __int64 v493; // [rsp+108h] [rbp+0h]
  __int64 v494; // [rsp+110h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v495; // [rsp+118h] [rbp+10h]
  LPVOID v496; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v497; // [rsp+128h] [rbp+20h] BYREF
  int v498; // [rsp+130h] [rbp+28h]
  int v499; // [rsp+134h] [rbp+2Ch]
  volatile signed __int32 *v500; // [rsp+138h] [rbp+30h] BYREF
  __int64 v501; // [rsp+140h] [rbp+38h]
  volatile signed __int32 *v502; // [rsp+148h] [rbp+40h] BYREF
  int v503; // [rsp+150h] [rbp+48h]
  int v504; // [rsp+154h] [rbp+4Ch]
  volatile signed __int32 *v505; // [rsp+158h] [rbp+50h] BYREF
  int v506; // [rsp+160h] [rbp+58h]
  int v507; // [rsp+164h] [rbp+5Ch]
  volatile signed __int32 *v508; // [rsp+168h] [rbp+60h] BYREF
  __int64 v509; // [rsp+170h] [rbp+68h]
  volatile signed __int32 *v510; // [rsp+178h] [rbp+70h] BYREF
  int v511; // [rsp+180h] [rbp+78h]
  int v512; // [rsp+184h] [rbp+7Ch]
  volatile signed __int32 *v513; // [rsp+188h] [rbp+80h] BYREF
  __int64 v514; // [rsp+190h] [rbp+88h]
  volatile signed __int32 *v515; // [rsp+198h] [rbp+90h] BYREF
  __int64 v516; // [rsp+1A0h] [rbp+98h]
  volatile signed __int32 *v517; // [rsp+1A8h] [rbp+A0h] BYREF
  int v518; // [rsp+1B0h] [rbp+A8h]
  int v519; // [rsp+1B4h] [rbp+ACh]
  volatile signed __int32 *v520; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v521; // [rsp+1C0h] [rbp+B8h]
  char *v522; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v523; // [rsp+1D0h] [rbp+C8h]
  int v524; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD *v525; // [rsp+1E0h] [rbp+D8h]
  struct ICompositeSystemEffect *v526; // [rsp+1E8h] [rbp+E0h] BYREF
  struct ICompositeSystemEffect *v527; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v528; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD *v529; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v530; // [rsp+208h] [rbp+100h]
  _QWORD *v531; // [rsp+210h] [rbp+108h] BYREF
  unsigned int v532; // [rsp+218h] [rbp+110h]
  int v533; // [rsp+21Ch] [rbp+114h]
  struct SystemEffectDescriptor *v534; // [rsp+220h] [rbp+118h] BYREF
  unsigned int v535; // [rsp+228h] [rbp+120h]
  int v536; // [rsp+22Ch] [rbp+124h]
  char *v537; // [rsp+230h] [rbp+128h] BYREF
  __int64 v538; // [rsp+238h] [rbp+130h]
  struct SystemEffectDescriptor *v539; // [rsp+240h] [rbp+138h] BYREF
  unsigned int v540; // [rsp+248h] [rbp+140h]
  int v541; // [rsp+24Ch] [rbp+144h]
  char *v542; // [rsp+250h] [rbp+148h] BYREF
  unsigned int v543; // [rsp+258h] [rbp+150h]
  int v544; // [rsp+25Ch] [rbp+154h]
  int v545; // [rsp+260h] [rbp+158h] BYREF
  int v546; // [rsp+268h] [rbp+160h] BYREF
  int v547; // [rsp+270h] [rbp+168h] BYREF
  int v548; // [rsp+278h] [rbp+170h] BYREF
  __int64 v549; // [rsp+280h] [rbp+178h] BYREF
  int v550; // [rsp+288h] [rbp+180h] BYREF
  int v551; // [rsp+290h] [rbp+188h] BYREF
  int v552; // [rsp+298h] [rbp+190h] BYREF
  char *v553; // [rsp+2A0h] [rbp+198h] BYREF
  _QWORD *v554; // [rsp+2A8h] [rbp+1A0h]
  char *v555; // [rsp+2B0h] [rbp+1A8h] BYREF
  char *v556; // [rsp+2B8h] [rbp+1B0h] BYREF
  char *v557; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v558; // [rsp+2C8h] [rbp+1C0h] BYREF
  char *v559; // [rsp+2D0h] [rbp+1C8h] BYREF
  char *v560; // [rsp+2D8h] [rbp+1D0h] BYREF
  HANDLE *p_OwningThread; // [rsp+2E0h] [rbp+1D8h] BYREF
  char *v562; // [rsp+2E8h] [rbp+1E0h] BYREF
  char *v563; // [rsp+2F0h] [rbp+1E8h] BYREF
  HANDLE *v564; // [rsp+2F8h] [rbp+1F0h] BYREF
  char *v565; // [rsp+300h] [rbp+1F8h] BYREF
  char *v566; // [rsp+308h] [rbp+200h] BYREF
  struct _GUID v567; // [rsp+318h] [rbp+210h] BYREF
  PROPVARIANT v568; // [rsp+328h] [rbp+220h] BYREF
  __int64 v569; // [rsp+330h] [rbp+228h]
  __int64 v570; // [rsp+338h] [rbp+230h]
  PROPVARIANT v571; // [rsp+340h] [rbp+238h] BYREF
  __int64 v572; // [rsp+348h] [rbp+240h]
  __int64 v573; // [rsp+350h] [rbp+248h]
  PROPVARIANT pvar; // [rsp+358h] [rbp+250h] BYREF
  __int64 v575; // [rsp+360h] [rbp+258h]
  __int64 v576; // [rsp+368h] [rbp+260h]
  LPVOID *v577; // [rsp+370h] [rbp+268h]
  void *v578; // [rsp+378h] [rbp+270h] BYREF
  char v579; // [rsp+380h] [rbp+278h]
  LPVOID *v580; // [rsp+388h] [rbp+280h]
  void *v581; // [rsp+390h] [rbp+288h] BYREF
  char v582; // [rsp+398h] [rbp+290h]
  PROPVARIANT v583; // [rsp+3A0h] [rbp+298h] BYREF
  __int64 v584; // [rsp+3A8h] [rbp+2A0h]
  __int64 v585; // [rsp+3B0h] [rbp+2A8h]
  LPVOID *v586; // [rsp+3B8h] [rbp+2B0h]
  void *v587; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v588; // [rsp+3C8h] [rbp+2C0h]
  PROPVARIANT v589; // [rsp+3D0h] [rbp+2C8h] BYREF
  __int64 v590; // [rsp+3D8h] [rbp+2D0h]
  __int64 v591; // [rsp+3E0h] [rbp+2D8h]
  PROPVARIANT v592; // [rsp+3E8h] [rbp+2E0h] BYREF
  __int64 v593; // [rsp+3F0h] [rbp+2E8h]
  __int64 v594; // [rsp+3F8h] [rbp+2F0h]
  void *v595; // [rsp+400h] [rbp+2F8h] BYREF
  void *v596; // [rsp+408h] [rbp+300h] BYREF
  _DWORD *v597; // [rsp+410h] [rbp+308h]
  _QWORD *v598; // [rsp+418h] [rbp+310h]
  struct _GUID v599; // [rsp+428h] [rbp+320h] BYREF
  struct _GUID v600; // [rsp+438h] [rbp+330h]
  struct _GUID v601; // [rsp+448h] [rbp+340h] BYREF
  struct _GUID v602; // [rsp+458h] [rbp+350h]
  GUID v603; // [rsp+468h] [rbp+360h]
  struct _GUID v604; // [rsp+478h] [rbp+370h] BYREF
  struct _GUID v605; // [rsp+488h] [rbp+380h]
  struct _GUID v606; // [rsp+498h] [rbp+390h] BYREF
  __int128 v607; // [rsp+4A8h] [rbp+3A0h]
  char *v608; // [rsp+4B8h] [rbp+3B0h]
  char *v609; // [rsp+4C0h] [rbp+3B8h]
  struct _GUID v610; // [rsp+4C8h] [rbp+3C0h] BYREF
  SystemEffectChainDescriptor *v611; // [rsp+4D8h] [rbp+3D0h]
  volatile signed __int32 *v612; // [rsp+4E0h] [rbp+3D8h]
  SystemEffectChainDescriptor *v613; // [rsp+4E8h] [rbp+3E0h]
  volatile signed __int32 *v614; // [rsp+4F0h] [rbp+3E8h]
  struct _GUID v615; // [rsp+4F8h] [rbp+3F0h] BYREF
  struct _GUID v616; // [rsp+508h] [rbp+400h] BYREF
  IID rclsid; // [rsp+518h] [rbp+410h] BYREF
  char *v618; // [rsp+528h] [rbp+420h]
  struct _GUID v619; // [rsp+538h] [rbp+430h] BYREF
  SystemEffectChainDescriptor *v620; // [rsp+548h] [rbp+440h]
  volatile signed __int32 *v621; // [rsp+550h] [rbp+448h]
  SystemEffectChainDescriptor *v622; // [rsp+558h] [rbp+450h]
  volatile signed __int32 *v623; // [rsp+560h] [rbp+458h]
  char *v624; // [rsp+568h] [rbp+460h]
  char *v625; // [rsp+570h] [rbp+468h]
  char *v626; // [rsp+578h] [rbp+470h]
  char *v627; // [rsp+580h] [rbp+478h]
  struct _GUID v628; // [rsp+588h] [rbp+480h] BYREF
  struct _RTL_CRITICAL_SECTION *v629; // [rsp+598h] [rbp+490h]
  char *v630; // [rsp+5A0h] [rbp+498h]
  char *v631; // [rsp+5A8h] [rbp+4A0h]
  __int64 v632; // [rsp+5B0h] [rbp+4A8h]
  IID v633; // [rsp+5B8h] [rbp+4B0h] BYREF
  CLSID pClsid; // [rsp+5C8h] [rbp+4C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+620h] [rbp+518h]

  v632 = -2LL;
  v476 = a4;
  v25 = a3;
  v473 = a3;
  v478 = a2;
  v27 = a1;
  v477 = a1;
  v484 = a7;
  v28 = (IID *)a14;
  v475 = a14;
  v598 = a24;
  v29 = (unsigned __int64)a25;
  v525 = a25;
  v465 = 0LL;
  v466 = 0LL;
  v554 = 0LL;
  v554 = (_QWORD *)*((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(_QWORD *))(*v554 + 8LL))(v554);
  if ( !a24 )
  {
    v128 = v484;
    goto LABEL_258;
  }
  if ( (v25 & 0x800000) != 0 )
  {
    if ( a2 )
    {
      v86 = -2147418113;
      v329 = 259LL;
    }
    else
    {
      v330 = (unsigned int *)CoTaskMemAlloc(0x120uLL);
      v465 = v330;
      if ( v330 )
      {
        memset_0(v330, 0, 0x120uLL);
        *v465 = 0;
        v465[34] = v25;
        *((_QWORD *)v465 + 18) = 0LL;
        v465[46] = 0;
        v465[40] = 0;
        *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
        v465[1] = 1;
        goto LABEL_243;
      }
      v86 = -2147024882;
      v329 = 264LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v329,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v86);
    goto LABEL_704;
  }
  if ( !a2 && (a5 & 0xFFFFFFFC) == 0 && a5 != eOffloadConnector )
  {
    LODWORD(v30) = 0;
    v485 = 0LL;
    LODWORD(v474) = 0;
    if ( a5 == eLoopbackConnector )
      goto LABEL_226;
    v481 = 0LL;
    v495 = (CEndpointCharacteristics *)((char *)v27 + 96 * a5);
    v31 = (char *)v495 + 232;
    if ( !*((_BYTE *)v495 + 284) )
      goto LABEL_41;
    v32 = (struct _RTL_CRITICAL_SECTION *)((char *)v495 + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v495 + 288));
    v631 = (char *)v495 + 288;
    v33 = 0LL;
    v497 = 0LL;
    v29 = 0LL;
    v498 = 0;
    v499 = 0;
    v34 = 0;
    if ( *((int *)v495 + 68) > 0 )
    {
      v35 = 0LL;
      do
      {
        if ( v35 < 0 || v34 >= *((_DWORD *)v31 + 10) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18007F494LL);
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
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v497);
            v42 = (struct _RTL_CRITICAL_SECTION *)(v31 + 56);
            if ( v31 != (char *)-56LL )
LABEL_39:
              LeaveCriticalSection(v42);
LABEL_40:
            LODWORD(v30) = 0;
LABEL_41:
            v43 = v495;
            v44 = (char *)v495 + 616;
            v495 = (struct SystemEffectDescriptor *)v44;
            if ( !v44[52] )
              goto LABEL_47;
            EnterCriticalSection((LPCRITICAL_SECTION)(v44 + 56));
            v630 = v44 + 56;
            v29 = 0LL;
            v529 = 0LL;
            v530 = 0LL;
            v45 = 0;
            if ( *((int *)v44 + 10) <= 0 )
              goto LABEL_43;
            while ( 1 )
            {
              v333 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v44 + 32), v45);
              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                    &v529,
                                    v333) )
                break;
              if ( ++v45 >= *((_DWORD *)v44 + 10) )
              {
                LODWORD(v30) = v530;
                v29 = (unsigned __int64)v529;
LABEL_43:
                v46 = 0;
                if ( (int)v30 <= 0 )
                {
LABEL_44:
                  if ( v29 )
                  {
                    if ( (int)v30 > 0 )
                    {
                      v338 = v29;
                      v30 = (unsigned int)v30;
                      do
                      {
                        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v338);
                        v338 += 16LL;
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
                  v470 = (struct SystemEffectDescriptor *)((char *)v43 + 1000);
                  if ( !*((_BYTE *)v43 + 1052) )
                    goto LABEL_80;
                  v48 = (struct _RTL_CRITICAL_SECTION *)((char *)v43 + 1056);
                  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v47 + 56);
                  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v47 + 56));
                  v629 = v48;
                  v49 = 0LL;
                  v508 = 0LL;
                  v29 = 0LL;
                  v509 = 0LL;
                  v50 = 0;
                  v51 = 0;
                  v47 = v470;
                  if ( *((int *)v470 + 10) > 0 )
                  {
                    v52 = 0LL;
                    do
                    {
                      if ( v52 < 0 || v51 >= *((_DWORD *)v47 + 10) )
                      {
                        RaiseException(0xC000008C, 1u, 0, 0LL);
                        JUMPOUT(0x18007F669LL);
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
                          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v508);
                          v59 = lpCriticalSection;
                          if ( lpCriticalSection )
LABEL_79:
                            LeaveCriticalSection(v59);
LABEL_80:
                          v597 = (_DWORD *)((char *)v477 + 4 * a5 + 48);
                          if ( !*v597 )
                          {
                            v357 = v481;
                            v481 = 0LL;
                            if ( v357 )
                              (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v357 + 16LL))(v357);
                            Lfx = CEndpointCharacteristics::GetLfx(v477, a5, &v481, 0LL, v463);
                            v359 = Lfx;
                            if ( Lfx < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x12E,
                                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                (const char *)(unsigned int)Lfx);
                              v86 = v359;
                              goto LABEL_836;
                            }
                            goto LABEL_219;
                          }
                          v60 = *v484;
                          v61 = v481;
                          v62 = 0;
                          v481 = 0LL;
                          if ( v61 )
                            (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v61 + 16LL))(v61);
                          v481 = 0LL;
                          if ( !v31[52] )
                            goto LABEL_115;
                          v63 = (struct _RTL_CRITICAL_SECTION *)(v31 + 56);
                          EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                          v609 = v31 + 56;
                          v64 = 0LL;
                          v505 = 0LL;
                          v29 = 0LL;
                          v506 = 0;
                          v65 = 0;
                          v507 = 0;
                          if ( *((int *)v31 + 10) > 0 )
                          {
                            v66 = 0LL;
                            do
                            {
                              if ( v66 < 0 || v62 >= *((_DWORD *)v31 + 10) )
                              {
                                RaiseException(0xC000008C, 1u, 0, 0LL);
                                JUMPOUT(0x18007F765LL);
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
                                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v505);
                                  if ( v31 != (char *)-56LL )
                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                  v62 = 0;
                                  goto LABEL_115;
                                }
                                v507 = v65;
                                v505 = (volatile signed __int32 *)v68;
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
                                  v65 = v507;
                                  LODWORD(v29) = v506;
                                  v64 = v505;
                                }
                                *(_QWORD *)v69 = *(_QWORD *)(v67 + v66);
                                *((_QWORD *)v69 + 1) = *(_QWORD *)(v67 + v66 + 8);
                              }
                              v29 = (unsigned int)(v29 + 1);
                              v506 = v29;
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
                                v64 = v505;
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
                                v341 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         (__int64)&v505,
                                                                         (int)v71);
                                v342 = SystemEffectChainDescriptor::Resolve(*v341, (struct SystemEffectDescriptor *)v31);
                                if ( v342 < 0 )
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
                              (const char *)(unsigned int)v342);
                            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v505);
                          }
                          if ( v63 )
                            LeaveCriticalSection(v63);
LABEL_115:
                          if ( !*((_BYTE *)v495 + 52) )
                            goto LABEL_121;
                          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v495 + 56));
                          v618 = (char *)v495 + 56;
                          v29 = 0LL;
                          v531 = 0LL;
                          v73 = 0LL;
                          v532 = 0;
                          v533 = 0;
                          v74 = 0;
                          if ( *((int *)v495 + 10) <= 0 )
                            goto LABEL_117;
                          while ( 1 )
                          {
                            v343 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)v495 + 32,
                                     v74);
                            if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                                  &v531,
                                                  v343) )
                              break;
                            if ( ++v74 >= *((_DWORD *)v495 + 10) )
                            {
                              v73 = v532;
                              v29 = (unsigned __int64)v531;
LABEL_117:
                              v75 = 0;
                              if ( (int)v73 <= 0 )
                              {
LABEL_118:
                                if ( v29 )
                                {
                                  if ( (int)v73 > 0 )
                                  {
                                    v348 = v29;
                                    do
                                    {
                                      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v348);
                                      v348 += 16LL;
                                      --v73;
                                    }
                                    while ( v73 );
                                  }
                                  free((void *)v29);
                                }
                                if ( v495 != (struct SystemEffectDescriptor *)-56LL )
LABEL_120:
                                  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v495 + 56));
LABEL_121:
                                if ( *((_BYTE *)v470 + 52) )
                                {
                                  v76 = (struct _RTL_CRITICAL_SECTION *)((char *)v470 + 56);
                                  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v470 + 56));
                                  v608 = (char *)v470 + 56;
                                  v77 = 0LL;
                                  v502 = 0LL;
                                  v29 = 0LL;
                                  v503 = 0;
                                  v78 = 0;
                                  v504 = 0;
                                  v47 = v470;
                                  if ( *((int *)v470 + 10) > 0 )
                                  {
                                    v79 = 0LL;
                                    do
                                    {
                                      if ( v79 < 0 || v62 >= *((_DWORD *)v47 + 10) )
                                      {
                                        RaiseException(0xC000008C, 1u, 0, 0LL);
                                        JUMPOUT(0x18007F936LL);
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
                                          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v502);
                                          if ( v470 != (struct SystemEffectDescriptor *)-56LL )
                                            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v470 + 56));
LABEL_154:
                                          if ( !*v597 )
                                            goto LABEL_219;
                                          v87 = 1;
                                          if ( !*((_QWORD *)v477 + 8) )
                                            goto LABEL_160;
                                          pvar = 0LL;
                                          v575 = 0LL;
                                          v576 = 0LL;
                                          if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v477 + 8) + 40LL))(
                                                 *((_QWORD *)v477 + 8),
                                                 &PKEY_AudioEndpoint_Disable_SysFx,
                                                 &pvar) >= 0
                                            && (_WORD)pvar == 19 )
                                          {
                                            v87 = v575 == 0;
                                          }
                                          PropVariantClear(&pvar);
                                          if ( v87 || a5 == eKeywordDetectorConnector )
LABEL_160:
                                            v88 = 1;
                                          else
                                            v88 = 0;
                                          v610 = v60;
                                          if ( v88 )
                                          {
                                            v604 = v60;
                                            v567 = v60;
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
                                                    v351 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         (__int64)(v31 + 32),
                                                                         v89);
                                                    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                         *v351,
                                                                         &v567) != -1 )
                                                      break;
                                                  }
                                                  ++v89;
                                                  v29 += 16LL;
                                                  if ( v89 >= *((_DWORD *)v31 + 10) )
                                                    goto LABEL_169;
                                                }
                                                v29 = (unsigned __int64)(v31 + 56);
                                                EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                v624 = v31 + 56;
                                                v352 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         (__int64)(v31 + 32),
                                                         v89);
                                                v353 = *(volatile signed __int32 **)(v352 + 8);
                                                if ( v353 )
                                                {
                                                  _InterlockedIncrement(v353 + 2);
                                                  v353 = *(volatile signed __int32 **)(v352 + 8);
                                                }
                                                v611 = *(SystemEffectChainDescriptor **)v352;
                                                v612 = v353;
                                                if ( (int)SystemEffectChainDescriptor::Resolve(
                                                            v611,
                                                            (struct SystemEffectDescriptor *)v31) < 0 )
                                                {
                                                  if ( v353 )
                                                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v353);
                                                  if ( v31 != (char *)-56LL )
                                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                  goto LABEL_795;
                                                }
                                                if ( v353 )
                                                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v353);
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
                                                  v96 = *(_QWORD *)(v95 + 16LL * v93) - *(_QWORD *)&v567.Data1;
                                                  if ( !v96 )
                                                    v96 = *(_QWORD *)(v95 + 16LL * v93 + 8) - *(_QWORD *)v567.Data4;
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
                                                                   *((__int64 **)v31 + 2),
                                                                   &v604) == -1 )
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
                                                                    (__int64 *)v31,
                                                                    &v610) == -1 )
                                          {
                                            goto LABEL_219;
                                          }
                                          v98 = 0LL;
                                          v526 = 0LL;
                                          v481 = 0LL;
                                          if ( !v31 )
                                            goto LABEL_218;
                                          pv = 0LL;
                                          v615 = v60;
                                          v599 = v60;
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
                                              v354 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                   (__int64)(v31 + 32),
                                                                   v91);
                                              if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                                   *v354,
                                                                   &v599) != -1 )
                                              {
                                                EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                v625 = v31 + 56;
                                                v355 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         (__int64)(v31 + 32),
                                                         v91);
                                                v356 = *(volatile signed __int32 **)(v355 + 8);
                                                if ( v356 )
                                                {
                                                  _InterlockedIncrement(v356 + 2);
                                                  v356 = *(volatile signed __int32 **)(v355 + 8);
                                                }
                                                v613 = *(SystemEffectChainDescriptor **)v355;
                                                v614 = v356;
                                                if ( (int)SystemEffectChainDescriptor::Resolve(
                                                            v613,
                                                            (struct SystemEffectDescriptor *)v31) < 0 )
                                                {
                                                  if ( v356 )
                                                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v356);
                                                  if ( v31 != (char *)-56LL )
                                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 56));
                                                  goto LABEL_816;
                                                }
                                                if ( v356 )
                                                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v356);
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
                                                      v105 = *(_QWORD *)(v104 + 16LL * v102) - *(_QWORD *)&v599.Data1;
                                                      if ( !v105 )
                                                        v105 = *(_QWORD *)(v104 + 16LL * v102 + 8)
                                                             - *(_QWORD *)v599.Data4;
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
                                                                       *((__int64 **)v31 + 2),
                                                                       &v615) == -1 )
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
                                                    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v526);
LABEL_831:
                                                    wil::details::in1diag3::Return_Hr(
                                                      retaddr,
                                                      (void *)0x129,
                                                      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                                      (const char *)v86);
LABEL_836:
                                                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v481);
LABEL_868:
                                                    v368 = v485;
                                                    v485 = 0LL;
                                                    if ( v368 )
                                                      CoTaskMemFree(v368);
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
                                                  v546 = 0;
                                                  v596 = v108;
                                                  v550 = v107;
                                                  v545 = *((_DWORD *)v477 + 39);
                                                  v547 = 1;
                                                  v115 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                                           &v526,
                                                           &v547,
                                                           &v546,
                                                           &v545,
                                                           &v550,
                                                           &v596);
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
                                                    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v526);
                                                    v86 = v116;
                                                    goto LABEL_831;
                                                  }
                                                  v108 = pv;
                                                }
                                                CoTaskMemFree(v108);
                                                pv = 0LL;
                                                v98 = v526;
LABEL_218:
                                                v526 = 0LL;
                                                v481 = v98;
LABEL_219:
                                                if ( v481 )
                                                {
                                                  v577 = &v485;
                                                  v578 = 0LL;
                                                  v579 = 1;
                                                  (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, void **))(*(_QWORD *)v481 + 32LL))(
                                                    v481,
                                                    &v474,
                                                    &v578);
                                                  if ( v579 )
                                                  {
                                                    v117 = *v577;
                                                    *v577 = v578;
                                                    if ( v117 )
                                                      CoTaskMemFree(v117);
                                                  }
                                                }
                                                if ( v481 )
                                                  (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v481 + 16LL))(v481);
                                                v25 = v473;
                                                v28 = (IID *)v475;
LABEL_226:
                                                if ( v476 )
                                                {
                                                  if ( v476 == 1 )
                                                  {
                                                    v118 = v474 + 2;
                                                    v362 = 16 * ((unsigned int)(v474 + 2) + 17LL);
                                                    v363 = (unsigned int *)CoTaskMemAlloc(v362);
                                                    v465 = v363;
                                                    if ( v363 )
                                                    {
                                                      memset_0(v363, 0, v362);
                                                      *v465 = 1;
                                                      v465[34] = v25;
                                                      *((_QWORD *)v465 + 18) = 0LL;
                                                      v465[40] = 0;
                                                      v465[46] = 0;
                                                      *((_QWORD *)v465 + 32) = a22;
                                                      *((_QWORD *)v465 + 33) = a23;
                                                      if ( a21 )
                                                        *((_QWORD *)v465 + 31) = a18;
                                                      for ( i = 0; i < (unsigned int)v474; ++i )
                                                      {
                                                        v365 = v465[46];
                                                        if ( v365 > 0x1F )
                                                        {
                                                          v361 = 398LL;
                                                          goto LABEL_866;
                                                        }
                                                        v465[40] |= 1 << v365;
                                                        *(_OWORD *)&v465[4 * v465[46]++ + 68] = *((_OWORD *)v485 + i);
                                                      }
                                                      *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                                                      *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                                                      goto LABEL_239;
                                                    }
                                                    v86 = -2147024882;
                                                    v361 = 382LL;
                                                  }
                                                  else
                                                  {
                                                    if ( v476 != 2 )
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
                                                    v360 = (unsigned int *)CoTaskMemAlloc(0x140uLL);
                                                    v465 = v360;
                                                    if ( v360 )
                                                    {
                                                      memset_0(v360, 0, 0x140uLL);
                                                      *v465 = (a5 != eLoopbackConnector) + 1;
                                                      v465[34] = v25;
                                                      *((_QWORD *)v465 + 18) = 0LL;
                                                      v465[46] = 3;
                                                      *((GUID *)v465 + 17) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
                                                      *((GUID *)v465 + 18) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                                                      *((GUID *)v465 + 19) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                                                      v465[40] = 0;
                                                      goto LABEL_239;
                                                    }
                                                    v86 = -2147024882;
                                                    v361 = 417LL;
                                                  }
                                                }
                                                else
                                                {
                                                  v118 = v474 + 4;
                                                  v119 = 16 * ((unsigned int)(v474 + 4) + 17LL);
                                                  v120 = (unsigned int *)CoTaskMemAlloc(v119);
                                                  v465 = v120;
                                                  if ( v120 )
                                                  {
                                                    memset_0(v120, 0, v119);
                                                    v123 = 0LL;
                                                    *v465 = 0;
                                                    v465[34] = v25;
                                                    *((_QWORD *)v465 + 18) = 0LL;
                                                    v465[46] = 0;
                                                    v465[40] = 0;
                                                    if ( !a20 )
                                                    {
                                                      v124 = 0;
                                                      if ( !(_DWORD)v474 )
                                                        goto LABEL_237;
                                                      while ( 1 )
                                                      {
                                                        v125 = *((_QWORD *)v485 + 2 * v124)
                                                             - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
                                                        if ( !v125 )
                                                          v125 = *((_QWORD *)v485 + 2 * v124 + 1)
                                                               - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
                                                        if ( v125
                                                          || !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                                                                                 v485,
                                                                                 v123,
                                                                                 v121,
                                                                                 v122,
                                                                                 v463,
                                                                                 v464)
                                                          || RpcImpersonateClient(0LL) < 0
                                                          || (v367 = IsVirtualSurroundAllowedForProcess(a8),
                                                              RpcRevertToSelf(),
                                                              v367) )
                                                        {
                                                          v126 = v465[46];
                                                          if ( v126 > 0x1F )
                                                          {
                                                            v361 = 351LL;
                                                            goto LABEL_866;
                                                          }
                                                          v465[40] |= 1 << v126;
                                                          v123 = 2 * (v465[46] + 17LL);
                                                          *(_OWORD *)&v465[4 * v465[46]++ + 68] = *((_OWORD *)v485 + v124);
                                                        }
                                                        if ( ++v124 >= (unsigned int)v474 )
                                                        {
                                                          v25 = v473;
                                                          goto LABEL_237;
                                                        }
                                                      }
                                                    }
                                                    v366 = v465[46];
                                                    if ( v366 > 0x1F )
                                                    {
                                                      v361 = 328LL;
                                                      goto LABEL_866;
                                                    }
                                                    v465[40] |= 1 << v366;
                                                    *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
LABEL_237:
                                                    *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                                                    *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                                                    *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
                                                    if ( !a20
                                                      && a19
                                                      && CoGetPSClsid(
                                                           &GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae,
                                                           &pClsid) >= 0 )
                                                    {
                                                      *(GUID *)&v465[4 * v465[46]++ + 68] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
                                                    }
LABEL_239:
                                                    v465[1] = v25 >> 31;
                                                    if ( v465[46] <= v118 )
                                                    {
                                                      v127 = v485;
                                                      v485 = 0LL;
                                                      if ( v127 )
                                                        CoTaskMemFree(v127);
                                                      v29 = (unsigned __int64)v525;
                                                      v27 = v477;
                                                      goto LABEL_243;
                                                    }
                                                    v361 = 438LL;
LABEL_866:
                                                    v86 = -2147418113;
                                                  }
                                                  else
                                                  {
                                                    v86 = -2147024882;
                                                    v361 = 316LL;
                                                  }
                                                }
                                                wil::details::in1diag3::Return_Hr(
                                                  retaddr,
                                                  (void *)v361,
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
                                        v504 = v78;
                                        v502 = (volatile signed __int32 *)v81;
                                        v47 = v470;
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
                                          v78 = v504;
                                          LODWORD(v29) = v503;
                                          v77 = v502;
                                        }
                                        *(_QWORD *)v82 = *(_QWORD *)(v80 + v79);
                                        *((_QWORD *)v82 + 1) = *(_QWORD *)(v80 + v79 + 8);
                                      }
                                      v29 = (unsigned int)(v29 + 1);
                                      v503 = v29;
                                      ++v62;
                                      v79 += 16LL;
                                    }
                                    while ( v62 < *((_DWORD *)v47 + 10) );
                                    v76 = (struct _RTL_CRITICAL_SECTION *)((char *)v470 + 56);
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
                                        v77 = v502;
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
                                        v349 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                                 (__int64)&v502,
                                                                                 (int)v84);
                                        v350 = SystemEffectChainDescriptor::Resolve(*v349, v470);
                                        if ( v350 < 0 )
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
                                      (const char *)(unsigned int)v350);
                                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v502);
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
                                                             (__int64)&v531,
                                                             v75)
                                              + 20LL) )
                                {
                                  v346 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                           (__int64)&v531,
                                                                           v75);
                                  v347 = SystemEffectChainDescriptor::Resolve(*v346, v495);
                                  if ( v347 < 0 )
                                    break;
                                }
                                if ( ++v75 >= (int)v73 )
                                  goto LABEL_118;
                              }
                              v344 = (unsigned int)v347;
                              v345 = 508LL;
LABEL_764:
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)v345,
                                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                (const char *)v344);
                              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v531);
                              if ( v495 != (struct SystemEffectDescriptor *)-56LL )
                                goto LABEL_120;
                              goto LABEL_121;
                            }
                          }
                          v344 = 2147942414LL;
                          v345 = 502LL;
                          goto LABEL_764;
                        }
                        HIDWORD(v509) = v50;
                        v508 = (volatile signed __int32 *)v54;
                        v47 = v470;
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
                          v50 = HIDWORD(v509);
                          LODWORD(v29) = v509;
                          v49 = v508;
                        }
                        *(_QWORD *)v55 = *(_QWORD *)(v53 + v52);
                        *((_QWORD *)v55 + 1) = *(_QWORD *)(v53 + v52 + 8);
                      }
                      v29 = (unsigned int)(v29 + 1);
                      LODWORD(v509) = v29;
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
                        v49 = v508;
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
                        v339 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                 (__int64)&v508,
                                                                 (int)v57);
                        v340 = SystemEffectChainDescriptor::Resolve(*v339, v470);
                        if ( v340 < 0 )
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
                      (const char *)(unsigned int)v340);
                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v508);
                    if ( !v48 )
                      goto LABEL_80;
                  }
                  v59 = v48;
                  goto LABEL_79;
                }
                while ( 1 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                               (__int64)&v529,
                                               v46)
                                + 20LL) )
                  {
                    v336 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                             (__int64)&v529,
                                                             v46);
                    v337 = SystemEffectChainDescriptor::Resolve(*v336, (struct SystemEffectDescriptor *)v44);
                    if ( v337 < 0 )
                      break;
                  }
                  if ( ++v46 >= (int)v30 )
                    goto LABEL_44;
                }
                v334 = (unsigned int)v337;
                v335 = 508LL;
LABEL_731:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v335,
                  (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)v334);
                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v529);
                if ( v44 != (char *)-56LL )
                  goto LABEL_46;
                goto LABEL_47;
              }
            }
            v334 = 2147942414LL;
            v335 = 502LL;
            goto LABEL_731;
          }
          v499 = v30;
          v497 = (volatile signed __int32 *)v37;
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
            LODWORD(v30) = v499;
            LODWORD(v29) = v498;
            v33 = v497;
          }
          *(_QWORD *)v38 = *(_QWORD *)(v36 + v35);
          *((_QWORD *)v38 + 1) = *(_QWORD *)(v36 + v35 + 8);
        }
        v29 = (unsigned int)(v29 + 1);
        v498 = v29;
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
          v33 = v497;
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
          v331 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v497,
                                                   (int)v40);
          v332 = SystemEffectChainDescriptor::Resolve(*v331, (struct SystemEffectDescriptor *)v31);
          if ( v332 < 0 )
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
        (const char *)(unsigned int)v332);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v497);
      if ( !v32 )
        goto LABEL_40;
    }
    v42 = v32;
    goto LABEL_39;
  }
  v496 = 0LL;
  v482 = 0;
  if ( a5 != eOffloadConnector || a2 )
  {
    v378 = (unsigned int *)CoTaskMemAlloc(0x120uLL);
    v465 = v378;
    if ( !v378 )
    {
      v86 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
LABEL_892:
      v379 = v496;
      v496 = 0LL;
      if ( v379 )
        CoTaskMemFree(v379);
      goto LABEL_704;
    }
    memset_0(v378, 0, 0x120uLL);
    *v465 = v476;
    v465[34] = v25;
    *((_QWORD *)v465 + 18) = 0LL;
    v465[46] = 0;
    v465[1] = 0;
  }
  else
  {
    v616 = *v484;
    v527 = 0LL;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(v27, &v616, 0, eOffloadConnector, &v527, 0LL, 0LL);
    v370 = StreamEffect;
    if ( StreamEffect < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BF,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)StreamEffect);
      v86 = v370;
LABEL_887:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v527);
      goto LABEL_892;
    }
    if ( v527 )
    {
      v580 = &v496;
      v581 = 0LL;
      v582 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, void **))(*(_QWORD *)v527 + 32LL))(
        v527,
        &v482,
        &v581);
      if ( v582 )
      {
        v371 = *v580;
        *v580 = v581;
        if ( v371 )
          CoTaskMemFree(v371);
      }
    }
    v372 = v482;
    v373 = 16 * (v482 + 17LL);
    v374 = (unsigned int *)CoTaskMemAlloc(v373);
    v465 = v374;
    if ( !v374 )
    {
      v86 = -2147024882;
      v375 = 454LL;
LABEL_886:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v375,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v86);
      goto LABEL_887;
    }
    memset_0(v374, 0, v373);
    *v465 = 0;
    v465[34] = v25;
    *((_QWORD *)v465 + 18) = 0LL;
    v465[46] = 0;
    v465[40] = 0;
    v376 = 0;
    if ( v482 )
    {
      while ( 1 )
      {
        v377 = v465[46];
        if ( v377 > 0x1F )
          break;
        v465[40] |= 1 << v377;
        *(_OWORD *)&v465[4 * v465[46]++ + 68] = *((_OWORD *)v496 + v376);
        if ( ++v376 >= v482 )
          goto LABEL_883;
      }
      v375 = 465LL;
      goto LABEL_885;
    }
LABEL_883:
    v465[1] = 0;
    if ( v465[46] > v372 )
    {
      v375 = 473LL;
LABEL_885:
      v86 = -2147418113;
      goto LABEL_886;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v527);
    v29 = (unsigned __int64)v525;
  }
  v380 = v496;
  v496 = 0LL;
  if ( v380 )
    CoTaskMemFree(v380);
LABEL_243:
  v128 = v484;
  *(struct _GUID *)(v465 + 41) = *v484;
  v465[2] = a5;
  *((_QWORD *)v465 + 16) = a9;
  v465[30] = *(unsigned __int16 *)(a9 + 16) + 18;
  *((_QWORD *)v465 + 3) = a11;
  *((_QWORD *)v465 + 4) = a12;
  v465[3] = a8;
  *((_QWORD *)v465 + 2) = a13;
  v129 = a16;
  if ( !a16 )
    v129 = &GUID_00000000_0000_0000_0000_000000000000;
  *((GUID *)v465 + 3) = *v129;
  *((_OWORD *)v465 + 12) = *(_OWORD *)a17;
  *((_OWORD *)v465 + 13) = *(_OWORD *)(a17 + 16);
  *((_OWORD *)v465 + 14) = *(_OWORD *)(a17 + 32);
  *((_QWORD *)v465 + 30) = *(_QWORD *)(a17 + 48);
  *((_QWORD *)v465 + 14) = a18;
  *((GUID *)v465 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v28 )
  {
    v130 = *(_QWORD *)&v28->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v28->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v130 = *(_QWORD *)v28->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v130 )
    {
      rclsid = *v28;
      ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v465 + 4);
      if ( ContainerProperty < 0 )
      {
        v382 = 507LL;
LABEL_902:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v382,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)ContainerProperty);
        v86 = ContainerProperty;
        goto LABEL_704;
      }
      v128 = v484;
    }
  }
  *((GUID *)v465 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  if ( !v28 )
    goto LABEL_253;
  v131 = *(_QWORD *)&v28->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v28->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v131 = *(_QWORD *)v28->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v131 )
    goto LABEL_253;
  v633 = *v28;
  ContainerProperty = GetContainerProperty(&v633, &PKEY_Audio_CPEventManager, (struct _GUID *)v465 + 5);
  if ( ContainerProperty < 0 )
  {
    v382 = 514LL;
    goto LABEL_902;
  }
  v128 = v484;
LABEL_253:
  if ( a15 )
  {
    v132 = *a15 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *a15 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v132 = a15[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v132 )
      *((_OWORD *)v465 + 6) = *(_OWORD *)a15;
  }
LABEL_258:
  v133 = 0LL;
  if ( !v29 )
  {
LABEL_699:
    if ( v598 )
    {
      v326 = v465;
      v465 = (unsigned int *)v133;
      *v598 = v326;
    }
    if ( v29 )
    {
      v327 = v466;
      v466 = (char *)v133;
      *(_QWORD *)v29 = v327;
    }
    v86 = v133;
    goto LABEL_704;
  }
  v494 = 0LL;
  v489 = 0LL;
  v472 = 0;
  v488 = 0LL;
  v134 = *v128;
  v494 = 0LL;
  v488 = 0LL;
  v495 = (struct SystemEffectDescriptor *)(96LL * (int)a5);
  v135 = (struct SystemEffectDescriptor *)((char *)v495 + (_QWORD)v27 + 232);
  v471 = v135;
  if ( *((_BYTE *)v135 + 52) )
  {
    v136 = (struct _RTL_CRITICAL_SECTION *)((char *)v135 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v135 + 56));
    v556 = (char *)v135 + 56;
    v138 = 0LL;
    v510 = 0LL;
    v139 = 0LL;
    v511 = 0;
    v140 = 0;
    v512 = 0;
    v141 = 0;
    if ( *((int *)v135 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( v133 < 0 || v141 >= *((_DWORD *)v135 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v137);
          __debugbreak();
        }
        v142 = *((_QWORD *)v135 + 4);
        if ( (_DWORD)v139 == v140 )
        {
          if ( v140 )
          {
            v140 = 2 * v139;
            if ( (v139 & 0x40000000) != 0 )
              goto LABEL_907;
          }
          else
          {
            v140 = 1;
          }
          if ( (unsigned __int64)v140 > 0x7FFFFFF
            || (v143 = _o__recalloc(v138, v140, 16LL), (v138 = (volatile signed __int32 *)v143) == 0LL) )
          {
LABEL_907:
            v383 = 2147942414LL;
            v384 = 502LL;
            goto LABEL_909;
          }
          v512 = v140;
          v510 = (volatile signed __int32 *)v143;
        }
        v144 = &v138[4 * (int)v139];
        if ( v144 )
        {
          *(_QWORD *)v144 = 0LL;
          *((_QWORD *)v144 + 1) = 0LL;
          v145 = *(_QWORD *)(v142 + v133 + 8);
          if ( v145 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v145 + 8));
            v140 = v512;
            LODWORD(v139) = v511;
            v138 = v510;
          }
          *(_QWORD *)v144 = *(_QWORD *)(v142 + v133);
          *((_QWORD *)v144 + 1) = *(_QWORD *)(v142 + v133 + 8);
        }
        v139 = (unsigned int)(v139 + 1);
        v511 = v139;
        ++v141;
        v133 += 16LL;
        v135 = v471;
        if ( v141 >= *((_DWORD *)v471 + 10) )
        {
          v133 = 0LL;
          break;
        }
      }
    }
    v146 = 0LL;
    if ( (int)v139 <= 0 )
    {
LABEL_281:
      if ( v138 )
      {
        if ( (int)v139 > 0 )
        {
          v146 = (volatile signed __int32 **)(v138 + 2);
          do
          {
            v138 = *v146;
            if ( *v146 && _InterlockedExchangeAdd(v138 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_914:
              (**(void (__fastcall ***)(volatile signed __int32 *))v138)(v138);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v138);
            }
            v146 += 2;
            --v139;
          }
          while ( v139 );
          v138 = v510;
        }
        free((void *)v138);
      }
      if ( v136 )
        LeaveCriticalSection(v136);
    }
    else
    {
      v133 = (__int64)v138;
      while ( 1 )
      {
        if ( (int)v146 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v137);
          goto LABEL_914;
        }
        if ( *(_BYTE *)(*(_QWORD *)v133 + 20LL) )
        {
          v385 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v510,
                                                   (int)v146);
          v386 = SystemEffectChainDescriptor::Resolve(*v385, v135);
          if ( v386 < 0 )
            break;
        }
        v146 = (volatile signed __int32 **)(unsigned int)((_DWORD)v146 + 1);
        v133 += 16LL;
        if ( (int)v146 >= (int)v139 )
        {
          v133 = 0LL;
          goto LABEL_281;
        }
      }
      v383 = (unsigned int)v386;
      v384 = 508LL;
LABEL_909:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v384,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v383);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v510);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v556);
      v133 = 0LL;
    }
  }
  v147 = v495;
  v148 = v477;
  v149 = (CEndpointCharacteristics *)((char *)v477 + (_QWORD)v495 + 616);
  v475 = v149;
  if ( *((_BYTE *)v149 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
    v557 = (char *)v149 + 56;
    v150 = (char *)v133;
    v534 = (struct SystemEffectDescriptor *)v133;
    v151 = (unsigned int)v133;
    v535 = v133;
    v536 = v133;
    if ( *((int *)v149 + 10) > 0 )
    {
      while ( 1 )
      {
        v387 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v149 + 32, v133);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v534,
                              v387) )
          break;
        LODWORD(v133) = v133 + 1;
        if ( (int)v133 >= *((_DWORD *)v149 + 10) )
        {
          v151 = v535;
          v150 = (char *)v534;
          goto LABEL_293;
        }
      }
      v388 = 2147942414LL;
      v389 = 502LL;
    }
    else
    {
LABEL_293:
      v152 = 0;
      if ( (int)v151 <= 0 )
      {
LABEL_294:
        if ( v150 )
        {
          if ( (int)v151 > 0 )
          {
            v392 = v150;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v392);
              v392 += 16;
              --v151;
            }
            while ( v151 );
          }
          free(v150);
        }
        if ( v149 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
        goto LABEL_297;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v534,
                                     v152)
                      + 20LL) )
        {
          v390 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v534,
                                                   v152);
          v391 = SystemEffectChainDescriptor::Resolve(*v390, v149);
          if ( v391 < 0 )
            break;
        }
        if ( ++v152 >= (int)v151 )
          goto LABEL_294;
      }
      v388 = (unsigned int)v391;
      v389 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v389,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v388);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v534);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v557);
  }
LABEL_297:
  v153 = (char *)v148 + (_QWORD)v147 + 1000;
  lpCriticalSectiona = (LPCRITICAL_SECTION)v153;
  if ( !v153[52] )
    goto LABEL_329;
  v154 = (struct _RTL_CRITICAL_SECTION *)(v153 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v153 + 56));
  v558 = v154;
  v155 = 0LL;
  v500 = 0LL;
  v156 = 0LL;
  v501 = 0LL;
  v157 = 0;
  v158 = 0;
  v159 = lpCriticalSectiona;
  if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
  {
    v160 = 0LL;
    while ( 1 )
    {
      if ( v160 < 0 || v158 >= SLODWORD(v159[1].DebugInfo) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v159);
        __debugbreak();
      }
      SpinCount = v159->SpinCount;
      if ( (_DWORD)v156 == v157 )
      {
        if ( v157 )
        {
          v157 = 2 * v156;
          if ( (v156 & 0x40000000) != 0 )
            goto LABEL_930;
        }
        else
        {
          v157 = 1;
        }
        if ( (unsigned __int64)v157 > 0x7FFFFFF
          || (v162 = _o__recalloc(v155, v157, 16LL), (v155 = (volatile signed __int32 *)v162) == 0LL) )
        {
LABEL_930:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v500);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v558);
          v149 = v475;
          goto LABEL_329;
        }
        HIDWORD(v501) = v157;
        v500 = (volatile signed __int32 *)v162;
        v159 = lpCriticalSectiona;
      }
      v163 = &v155[4 * (int)v156];
      if ( v163 )
      {
        *(_QWORD *)v163 = 0LL;
        *((_QWORD *)v163 + 1) = 0LL;
        v164 = *(_QWORD *)(SpinCount + v160 + 8);
        if ( v164 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v164 + 8));
          v157 = HIDWORD(v501);
          LODWORD(v156) = v501;
          v155 = v500;
        }
        *(_QWORD *)v163 = *(_QWORD *)(SpinCount + v160);
        *((_QWORD *)v163 + 1) = *(_QWORD *)(SpinCount + v160 + 8);
      }
      v156 = (unsigned int)(v156 + 1);
      LODWORD(v501) = v156;
      ++v158;
      v160 += 16LL;
      if ( v158 >= SLODWORD(v159[1].DebugInfo) )
      {
        v149 = v475;
        break;
      }
    }
  }
  v165 = 0LL;
  if ( (int)v156 <= 0 )
  {
LABEL_319:
    if ( v155 )
    {
      if ( (int)v156 > 0 )
      {
        v165 = (volatile signed __int32 **)(v155 + 2);
        do
        {
          v155 = *v165;
          if ( *v165 && _InterlockedExchangeAdd(v155 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_935:
            (**(void (__fastcall ***)(volatile signed __int32 *))v155)(v155);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v155);
          }
          v165 += 2;
          --v156;
        }
        while ( v156 );
        v155 = v500;
      }
      free((void *)v155);
    }
    if ( v154 )
      LeaveCriticalSection(v154);
  }
  else
  {
    v166 = v155;
    while ( 1 )
    {
      if ( (int)v165 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v159);
        goto LABEL_935;
      }
      if ( *(_BYTE *)(*(_QWORD *)v166 + 20LL) )
      {
        v393 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v500,
                                                 (int)v165);
        v394 = SystemEffectChainDescriptor::Resolve(*v393, (struct SystemEffectDescriptor *)lpCriticalSectiona);
        if ( v394 < 0 )
          break;
      }
      v165 = (volatile signed __int32 **)(unsigned int)((_DWORD)v165 + 1);
      v166 += 4;
      if ( (int)v165 >= (int)v156 )
        goto LABEL_319;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v394);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v500);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v558);
  }
LABEL_329:
  v167 = v477;
  if ( !*((_DWORD *)v477 + a5 + 12) )
    goto LABEL_940;
  v168 = 1;
  if ( !*((_QWORD *)v477 + 8) )
  {
    v169 = a5;
LABEL_335:
    v170 = 1;
    goto LABEL_336;
  }
  v571 = 0LL;
  v572 = 0LL;
  v573 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v477 + 8) + 40LL))(
         *((_QWORD *)v477 + 8),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v571) >= 0
    && (_WORD)v571 == 19 )
  {
    v168 = v572 == 0;
  }
  PropVariantClear(&v571);
  v169 = a5;
  if ( v168 || a5 == eKeywordDetectorConnector )
    goto LABEL_335;
  v170 = 0;
LABEL_336:
  v619 = v134;
  if ( v170 )
  {
    v600 = v134;
    v601 = v134;
    if ( *((_BYTE *)v149 + 52) && (v171 = 0, *((int *)v149 + 10) > 0) )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)v149 + 32,
                                     v171)
                      + 20LL) )
        {
          v395 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)v149 + 32,
                               v171);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v395, &v601) != -1 )
            break;
        }
        if ( ++v171 >= *((_DWORD *)v149 + 10) )
          goto LABEL_957;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
      v626 = (char *)v149 + 56;
      v396 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v149 + 32, v171);
      v397 = *(volatile signed __int32 **)(v396 + 8);
      if ( v397 )
      {
        _InterlockedIncrement(v397 + 2);
        v397 = *(volatile signed __int32 **)(v396 + 8);
      }
      v620 = *(SystemEffectChainDescriptor **)v396;
      v621 = v397;
      if ( (int)SystemEffectChainDescriptor::Resolve(v620, v149) >= 0 )
      {
        if ( v397 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v397);
        if ( v149 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
LABEL_957:
        v169 = a5;
        goto LABEL_339;
      }
      if ( v397 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v397);
      if ( v149 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
    }
    else
    {
LABEL_339:
      v172 = 0;
      if ( *((int *)v149 + 10) <= 0 )
        goto LABEL_340;
      while ( 1 )
      {
        v398 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)v149 + 32,
                             v172);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v398, &v601) != -1 )
          break;
        if ( ++v172 >= *((_DWORD *)v149 + 10) )
          goto LABEL_950;
      }
      if ( v172 != -1 )
      {
        v173 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            (__int64)v149 + 32,
                            v172);
        v169 = a5;
        goto LABEL_346;
      }
    }
LABEL_950:
    v169 = a5;
LABEL_340:
    v173 = *((_QWORD *)v149 + 2);
    if ( !v173 )
      goto LABEL_964;
    v174 = 0;
    v175 = *(_DWORD *)(v173 + 8);
    if ( v175 <= 0 )
      goto LABEL_964;
    while ( 1 )
    {
      v176 = (_QWORD *)(*(_QWORD *)v173 + 16LL * v174);
      v177 = *v176 - *(_QWORD *)&v600.Data1;
      if ( *v176 == *(_QWORD *)&v600.Data1 )
        v177 = v176[1] - *(_QWORD *)v600.Data4;
      if ( !v177 )
        break;
      if ( ++v174 >= v175 )
        goto LABEL_964;
    }
    if ( v174 == -1 )
LABEL_964:
      v173 = 0LL;
LABEL_346:
    if ( v173 )
      goto LABEL_347;
LABEL_940:
    v133 = 0LL;
    goto LABEL_457;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v149, &v619) == -1 )
    goto LABEL_940;
LABEL_347:
  v605 = v134;
  if ( v169 == eHostProcessConnector )
  {
    v178 = 1;
    if ( *((_QWORD *)v167 + 8) )
    {
      v583 = 0LL;
      v584 = 0LL;
      v585 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v167 + 8) + 40LL))(
             *((_QWORD *)v167 + 8),
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v583) >= 0
        && (_WORD)v583 == 19 )
      {
        v178 = v584 == 0;
      }
      PropVariantClear(&v583);
      if ( !v178 )
      {
        v207 = (char *)v167 + 136;
        goto LABEL_424;
      }
    }
  }
  if ( !*((_BYTE *)v471 + 52) )
    goto LABEL_385;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
  v559 = (char *)v471 + 56;
  v179 = 0LL;
  v513 = 0LL;
  v180 = 0LL;
  v514 = 0LL;
  v181 = 0;
  v182 = 0;
  v183 = v471;
  if ( *((int *)v471 + 10) > 0 )
  {
    v184 = 0LL;
    while ( 1 )
    {
      if ( v184 < 0 || v182 >= *((_DWORD *)v183 + 10) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v183);
        __debugbreak();
      }
      v185 = *((_QWORD *)v183 + 4);
      if ( (_DWORD)v180 == v181 )
      {
        if ( v181 )
        {
          v181 = 2 * v180;
          if ( (v180 & 0x40000000) != 0 )
            goto LABEL_967;
        }
        else
        {
          v181 = 1;
        }
        if ( (unsigned __int64)v181 > 0x7FFFFFF
          || (v186 = _o__recalloc(v179, v181, 16LL), (v179 = (volatile signed __int32 *)v186) == 0LL) )
        {
LABEL_967:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v513);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v559);
          v149 = v475;
          goto LABEL_385;
        }
        HIDWORD(v514) = v181;
        v513 = (volatile signed __int32 *)v186;
        v183 = v471;
      }
      v187 = &v179[4 * (int)v180];
      if ( v187 )
      {
        *(_QWORD *)v187 = 0LL;
        *((_QWORD *)v187 + 1) = 0LL;
        v188 = *(_QWORD *)(v185 + v184 + 8);
        if ( v188 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v188 + 8));
          v181 = HIDWORD(v514);
          LODWORD(v180) = v514;
          v179 = v513;
        }
        *(_QWORD *)v187 = *(_QWORD *)(v185 + v184);
        *((_QWORD *)v187 + 1) = *(_QWORD *)(v185 + v184 + 8);
      }
      v180 = (unsigned int)(v180 + 1);
      LODWORD(v514) = v180;
      ++v182;
      v184 += 16LL;
      if ( v182 >= *((_DWORD *)v183 + 10) )
      {
        v149 = v475;
        break;
      }
    }
  }
  v189 = 0LL;
  if ( (int)v180 <= 0 )
  {
LABEL_375:
    if ( v179 )
    {
      if ( (int)v180 > 0 )
      {
        v189 = (volatile signed __int32 **)(v179 + 2);
        do
        {
          v179 = *v189;
          if ( *v189 && _InterlockedExchangeAdd(v179 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_972:
            (**(void (__fastcall ***)(volatile signed __int32 *))v179)(v179);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v179);
          }
          v189 += 2;
          --v180;
        }
        while ( v180 );
        v179 = v513;
      }
      free((void *)v179);
    }
    if ( v471 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
  }
  else
  {
    v190 = v179;
    while ( 1 )
    {
      if ( (int)v189 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v183);
        goto LABEL_972;
      }
      if ( *(_BYTE *)(*(_QWORD *)v190 + 20LL) )
      {
        v399 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v513,
                                                 (int)v189);
        v400 = SystemEffectChainDescriptor::Resolve(*v399, v471);
        if ( v400 < 0 )
          break;
      }
      v189 = (volatile signed __int32 **)(unsigned int)((_DWORD)v189 + 1);
      v190 += 4;
      if ( (int)v189 >= (int)v180 )
        goto LABEL_375;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v400);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v513);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v559);
  }
LABEL_385:
  if ( *((_BYTE *)v149 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
    v560 = (char *)v149 + 56;
    v191 = 0LL;
    v537 = 0LL;
    v192 = 0LL;
    v538 = 0LL;
    v193 = 0;
    if ( *((int *)v149 + 10) > 0 )
    {
      while ( 1 )
      {
        v401 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v149 + 32, v193);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v537,
                              v401) )
          break;
        if ( ++v193 >= *((_DWORD *)v149 + 10) )
        {
          v192 = (unsigned int)v538;
          v191 = v537;
          goto LABEL_387;
        }
      }
      v402 = 2147942414LL;
      v403 = 502LL;
    }
    else
    {
LABEL_387:
      v194 = 0;
      if ( (int)v192 <= 0 )
      {
LABEL_388:
        if ( v191 )
        {
          if ( (int)v192 > 0 )
          {
            v406 = v191;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v406);
              v406 += 16;
              --v192;
            }
            while ( v192 );
          }
          free(v191);
        }
        if ( v149 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
        goto LABEL_391;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v537,
                                     v194)
                      + 20LL) )
        {
          v404 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v537,
                                                   v194);
          v405 = SystemEffectChainDescriptor::Resolve(*v404, v149);
          if ( v405 < 0 )
            break;
        }
        if ( ++v194 >= (int)v192 )
          goto LABEL_388;
      }
      v402 = (unsigned int)v405;
      v403 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v403,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v402);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v537);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v560);
  }
LABEL_391:
  if ( !LOBYTE(lpCriticalSectiona[1].RecursionCount) )
    goto LABEL_423;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
  p_OwningThread = &lpCriticalSectiona[1].OwningThread;
  v195 = 0LL;
  v515 = 0LL;
  v196 = 0LL;
  v516 = 0LL;
  v197 = 0;
  v198 = 0;
  v199 = lpCriticalSectiona;
  if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
  {
    v200 = 0LL;
    while ( 1 )
    {
      if ( v200 < 0 || v198 >= SLODWORD(v199[1].DebugInfo) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v199);
        __debugbreak();
      }
      v201 = v199->SpinCount;
      if ( (_DWORD)v196 == v197 )
      {
        if ( v197 )
        {
          v197 = 2 * v196;
          if ( (v196 & 0x40000000) != 0 )
            goto LABEL_988;
        }
        else
        {
          v197 = 1;
        }
        if ( (unsigned __int64)v197 > 0x7FFFFFF
          || (v202 = _o__recalloc(v195, v197, 16LL), (v195 = (volatile signed __int32 *)v202) == 0LL) )
        {
LABEL_988:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v515);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&p_OwningThread);
          v149 = v475;
          goto LABEL_423;
        }
        HIDWORD(v516) = v197;
        v515 = (volatile signed __int32 *)v202;
        v199 = lpCriticalSectiona;
      }
      v203 = &v195[4 * (int)v196];
      if ( v203 )
      {
        *(_QWORD *)v203 = 0LL;
        *((_QWORD *)v203 + 1) = 0LL;
        v204 = *(_QWORD *)(v201 + v200 + 8);
        if ( v204 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v204 + 8));
          v197 = HIDWORD(v516);
          LODWORD(v196) = v516;
          v195 = v515;
        }
        *(_QWORD *)v203 = *(_QWORD *)(v201 + v200);
        *((_QWORD *)v203 + 1) = *(_QWORD *)(v201 + v200 + 8);
      }
      v196 = (unsigned int)(v196 + 1);
      LODWORD(v516) = v196;
      ++v198;
      v200 += 16LL;
      if ( v198 >= SLODWORD(v199[1].DebugInfo) )
      {
        v149 = v475;
        break;
      }
    }
  }
  v205 = 0LL;
  if ( (int)v196 <= 0 )
  {
LABEL_413:
    if ( v195 )
    {
      if ( (int)v196 > 0 )
      {
        v205 = (volatile signed __int32 **)(v195 + 2);
        do
        {
          v195 = *v205;
          if ( *v205 && _InterlockedExchangeAdd(v195 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_993:
            (**(void (__fastcall ***)(volatile signed __int32 *))v195)(v195);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v195);
          }
          v205 += 2;
          --v196;
        }
        while ( v196 );
        v195 = v515;
      }
      free((void *)v195);
    }
    if ( lpCriticalSectiona != (LPCRITICAL_SECTION)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
  }
  else
  {
    v206 = v195;
    while ( 1 )
    {
      if ( (int)v205 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v199);
        goto LABEL_993;
      }
      if ( *(_BYTE *)(*(_QWORD *)v206 + 20LL) )
      {
        v407 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v515,
                                                 (int)v205);
        v408 = SystemEffectChainDescriptor::Resolve(*v407, (struct SystemEffectDescriptor *)lpCriticalSectiona);
        if ( v408 < 0 )
          break;
      }
      v205 = (volatile signed __int32 **)(unsigned int)((_DWORD)v205 + 1);
      v206 += 4;
      if ( (int)v205 >= (int)v196 )
        goto LABEL_413;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v408);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v515);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&p_OwningThread);
  }
LABEL_423:
  v167 = v477;
  v207 = (char *)v477 + 16 * a5 + 72;
LABEL_424:
  v208 = 0;
  v209 = *((_DWORD *)v207 + 2);
  if ( v209 <= 0 )
    goto LABEL_430;
  v210 = *(_QWORD *)v207;
  while ( 1 )
  {
    v211 = *(_QWORD *)(v210 + 16LL * v208) - *(_QWORD *)&v605.Data1;
    if ( !v211 )
      v211 = *(_QWORD *)(v210 + 16LL * v208 + 8) - *(_QWORD *)v605.Data4;
    if ( !v211 )
      break;
    if ( ++v208 >= v209 )
      goto LABEL_430;
  }
  v212 = 1;
  if ( v208 == -1 )
LABEL_430:
    v212 = 0;
  v213 = 0LL;
  v487 = 0LL;
  v494 = 0LL;
  v488 = 0LL;
  if ( !v149 )
  {
    v133 = 0LL;
    goto LABEL_456;
  }
  v483 = 0LL;
  v602 = v134;
  v606 = v134;
  v214 = 0;
  if ( *((int *)v149 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v149 + 32,
                                   v214)
                    + 20LL) )
      {
        v409 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)v149 + 32,
                             v214);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v409, &v606) != -1 )
          break;
      }
      if ( ++v214 >= *((_DWORD *)v149 + 10) )
        goto LABEL_433;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
    v627 = (char *)v149 + 56;
    v410 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v149 + 32, v214);
    v411 = *(volatile signed __int32 **)(v410 + 8);
    if ( v411 )
    {
      _InterlockedIncrement(v411 + 2);
      v411 = *(volatile signed __int32 **)(v410 + 8);
    }
    v622 = *(SystemEffectChainDescriptor **)v410;
    v623 = v411;
    if ( (int)SystemEffectChainDescriptor::Resolve(v622, v149) < 0 )
    {
      if ( v411 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v411);
      if ( v149 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
      goto LABEL_434;
    }
    if ( v411 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v411);
    if ( v149 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v149 + 56));
  }
LABEL_433:
  v215 = 0;
  if ( *((int *)v149 + 10) > 0 )
  {
    while ( 1 )
    {
      v412 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)v149 + 32,
                           v215);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v412, &v606) != -1 )
        break;
      if ( ++v215 >= *((_DWORD *)v149 + 10) )
        goto LABEL_434;
    }
    if ( v215 != -1 )
    {
      v216 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                          (__int64)v149 + 32,
                          v215);
      goto LABEL_440;
    }
  }
LABEL_434:
  v216 = *((_QWORD *)v149 + 2);
  if ( !v216 )
    goto LABEL_1017;
  v217 = 0;
  v218 = *(_DWORD *)(v216 + 8);
  if ( v218 <= 0 )
    goto LABEL_1017;
  while ( 1 )
  {
    v219 = (_QWORD *)(*(_QWORD *)v216 + 16LL * v217);
    v220 = *v219 - *(_QWORD *)&v602.Data1;
    if ( *v219 == *(_QWORD *)&v602.Data1 )
      v220 = v219[1] - *(_QWORD *)v602.Data4;
    if ( !v220 )
      break;
    if ( ++v217 >= v218 )
      goto LABEL_1017;
  }
  if ( v217 == -1 )
LABEL_1017:
    v216 = 0LL;
LABEL_440:
  v221 = 0;
  v222 = 0LL;
  v483 = 0LL;
  if ( v216 )
  {
    v221 = *(_DWORD *)(v216 + 48);
    v223 = v221 == 0;
    if ( v221 <= 0 )
      goto LABEL_449;
    v224 = 0LL;
    v225 = *(int *)(v216 + 48);
    v226 = -1LL;
    if ( v225 != 1 )
      v226 = 0xFFFFFFFFFFFFFFFFuLL / v225;
    if ( v226 < 0x10
      || (v227 = 16 * v225, v227 > 0x7FFFFFFF)
      || (v228 = CoTaskMemAlloc((unsigned int)v227), (v224 = v228) == 0LL) )
    {
      v133 = 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      CoTaskMemFree(v224);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x467,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL);
      ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v483);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v487);
      v230 = -2147024882;
      goto LABEL_1023;
    }
    memcpy_0(v228, *(const void **)(v216 + 40), 16LL * *(int *)(v216 + 48));
    v483 = v224;
    CoTaskMemFree(0LL);
    v221 = *(_DWORD *)(v216 + 48);
    v222 = v483;
  }
  v223 = v221 == 0;
LABEL_449:
  if ( v223 )
  {
    v133 = 0LL;
    goto LABEL_455;
  }
  if ( v212 == 1 )
  {
    v524 = 1;
    v133 = 0LL;
  }
  else
  {
    v133 = 0LL;
    v524 = 0;
  }
  v595 = v222;
  v548 = v221;
  v552 = *((_DWORD *)v167 + 39);
  v551 = 2;
  v229 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
           &v487,
           &v551,
           &v524,
           &v552,
           &v548,
           &v595);
  v230 = v229;
  if ( v229 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x471,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v229);
    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v483);
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v487);
    v231 = a5;
    goto LABEL_1022;
  }
  v628 = v134;
  v231 = a5;
  v232 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, __int64 *, _QWORD))(*(_QWORD *)v487 + 24LL))(
           v487,
           *((_QWORD *)v167 + 2),
           &v628,
           0LL,
           a5,
           &v488,
           0LL);
  v230 = v232;
  if ( v232 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x475,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v232);
    CoTaskMemFree(v483);
    v483 = 0LL;
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v487);
LABEL_1022:
    if ( v230 >= 0 )
      goto LABEL_458;
LABEL_1023:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v230);
    v86 = v230;
    goto LABEL_1154;
  }
  v222 = v483;
LABEL_455:
  CoTaskMemFree(v222);
  v483 = 0LL;
  v213 = v487;
LABEL_456:
  v487 = 0LL;
  v494 = v213;
LABEL_457:
  v231 = a5;
LABEL_458:
  if ( v494 )
  {
    v586 = &v489;
    v587 = 0LL;
    v588 = 1;
    (*(void (__fastcall **)(__int64, unsigned int *, void **))(*(_QWORD *)v494 + 32LL))(v494, &v472, &v587);
    if ( v588 )
    {
      v233 = *v586;
      *v586 = v587;
      if ( v233 )
        CoTaskMemFree(v233);
    }
  }
  if ( (v473 & 0x800000) != 0 )
  {
    if ( v478 )
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
  if ( v478 || v231 && v231 != 3 )
  {
    v234 = v476;
    goto LABEL_1030;
  }
  v234 = v476;
  if ( v476 == 2 )
    goto LABEL_1030;
  v235 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v235 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v235 )
  {
LABEL_1030:
    if ( v231 == 1 && !v478 )
    {
      if ( v472 > 1 )
        v231 = v472;
      v413 = 16LL * v231;
      v414 = (char *)CoTaskMemAlloc(v413 + 60);
      v466 = v414;
      if ( !v414 )
      {
        v86 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x252,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_1154;
      }
      memset_0(v414, 0, v413 + 60);
      *(_DWORD *)v466 = v234;
      *((_DWORD *)v466 + 1) = 0;
      *((_DWORD *)v466 + 14) = 0;
      v460 = 0LL;
      if ( v472 )
      {
        while ( 1 )
        {
          v461 = *((_DWORD *)v466 + 14);
          if ( v461 > 0x1F )
            break;
          *((_DWORD *)v466 + 8) |= 1 << v461;
          v459 = 2LL * (unsigned int)v460;
          *(_OWORD *)&v466[16 * (*((_DWORD *)v466 + 14))++ + 60] = *((_OWORD *)v489 + (unsigned int)v460);
          v460 = (unsigned int)(v460 + 1);
          if ( (unsigned int)v460 >= v472 )
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
      *(struct _GUID *)(v466 + 36) = *v484;
      wil::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>(
        &v549,
        v488,
        v459,
        v460);
      *((_DWORD *)v466 + 13) = v549 != 0;
      if ( *((_DWORD *)v466 + 14) > v231 )
      {
        v86 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x266,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8000FFFFLL);
        v458 = &v549;
        goto LABEL_1153;
      }
      *((_QWORD *)v466 + 2) = a10;
      *((_DWORD *)v466 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v549);
    }
    goto LABEL_692;
  }
  Block = 0LL;
  v480 = 0LL;
  v236 = 0;
  v473 = 0;
  v603 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !v231 )
  {
    LODWORD(v237) = 1;
    v238 = 1;
    if ( *((_QWORD *)v167 + 8) )
    {
      v589 = 0LL;
      v590 = 0LL;
      v591 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v167 + 8) + 40LL))(
             *((_QWORD *)v167 + 8),
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v589) >= 0
        && (_WORD)v589 == 19 )
      {
        v238 = v590 == 0;
      }
      PropVariantClear(&v589);
      if ( !v238 )
      {
        v268 = (char *)v167 + 136;
        v250 = v475;
        v267 = v477;
        goto LABEL_546;
      }
    }
  }
  v239 = v471;
  if ( *((_BYTE *)v471 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
    v562 = (char *)v471 + 56;
    v241 = 0LL;
    v517 = 0LL;
    v242 = 0LL;
    v518 = 0;
    v243 = 0;
    v519 = 0;
    v244 = 0;
    if ( *((int *)v471 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( v133 < 0 || v244 >= *((_DWORD *)v239 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v240);
          __debugbreak();
        }
        v245 = *((_QWORD *)v239 + 4);
        if ( (_DWORD)v242 == v243 )
        {
          if ( v243 )
          {
            v243 = 2 * v242;
            if ( (v242 & 0x40000000) != 0 )
              goto LABEL_1038;
          }
          else
          {
            v243 = 1;
          }
          if ( (unsigned __int64)v243 > 0x7FFFFFF
            || (v246 = _o__recalloc(v241, v243, 16LL), (v241 = (volatile signed __int32 *)v246) == 0LL) )
          {
LABEL_1038:
            v415 = 2147942414LL;
            v416 = 502LL;
            goto LABEL_1040;
          }
          v519 = v243;
          v517 = (volatile signed __int32 *)v246;
        }
        v247 = &v241[4 * (int)v242];
        if ( v247 )
        {
          *(_QWORD *)v247 = 0LL;
          *((_QWORD *)v247 + 1) = 0LL;
          v248 = *(_QWORD *)(v245 + v133 + 8);
          if ( v248 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v248 + 8));
            v243 = v519;
            LODWORD(v242) = v518;
            v241 = v517;
          }
          *(_QWORD *)v247 = *(_QWORD *)(v245 + v133);
          *((_QWORD *)v247 + 1) = *(_QWORD *)(v245 + v133 + 8);
        }
        v242 = (unsigned int)(v242 + 1);
        v518 = v242;
        ++v244;
        v133 += 16LL;
        v239 = v471;
        if ( v244 >= *((_DWORD *)v471 + 10) )
        {
          v133 = 0LL;
          break;
        }
      }
    }
    v249 = 0LL;
    if ( (int)v242 <= 0 )
    {
LABEL_497:
      if ( v241 )
      {
        if ( (int)v242 > 0 )
        {
          v249 = (volatile signed __int32 **)(v241 + 2);
          do
          {
            v241 = *v249;
            if ( *v249 && _InterlockedExchangeAdd(v241 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_1045:
              (**(void (__fastcall ***)(volatile signed __int32 *))v241)(v241);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v241);
            }
            v249 += 2;
            --v242;
          }
          while ( v242 );
          v241 = v517;
        }
        free((void *)v241);
      }
      if ( v471 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
    }
    else
    {
      v133 = (__int64)v241;
      while ( 1 )
      {
        if ( (int)v249 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v240);
          goto LABEL_1045;
        }
        if ( *(_BYTE *)(*(_QWORD *)v133 + 20LL) )
        {
          v417 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v517,
                                                   (int)v249);
          v418 = SystemEffectChainDescriptor::Resolve(*v417, v239);
          if ( v418 < 0 )
            break;
        }
        v249 = (volatile signed __int32 **)(unsigned int)((_DWORD)v249 + 1);
        v133 += 16LL;
        if ( (int)v249 >= (int)v242 )
        {
          v133 = 0LL;
          goto LABEL_497;
        }
      }
      v415 = (unsigned int)v418;
      v416 = 508LL;
LABEL_1040:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v416,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v415);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v517);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v562);
      v133 = 0LL;
    }
  }
  v250 = v475;
  if ( *((_BYTE *)v475 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v475 + 56));
    v563 = (char *)v250 + 56;
    v251 = (char *)v133;
    v539 = (struct SystemEffectDescriptor *)v133;
    v252 = (unsigned int)v133;
    v540 = v133;
    v541 = v133;
    if ( *((int *)v250 + 10) > 0 )
    {
      while ( 1 )
      {
        v419 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v250 + 32, v133);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v539,
                              v419) )
          break;
        LODWORD(v133) = v133 + 1;
        if ( (int)v133 >= *((_DWORD *)v250 + 10) )
        {
          v252 = v540;
          v251 = (char *)v539;
          goto LABEL_509;
        }
      }
      v420 = 2147942414LL;
      v421 = 502LL;
    }
    else
    {
LABEL_509:
      v253 = 0;
      if ( (int)v252 <= 0 )
      {
LABEL_510:
        if ( v251 )
        {
          if ( (int)v252 > 0 )
          {
            v424 = v251;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v424);
              v424 += 16;
              --v252;
            }
            while ( v252 );
          }
          free(v251);
        }
        if ( v250 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v250 + 56));
        goto LABEL_513;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v539,
                                     v253)
                      + 20LL) )
        {
          v422 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v539,
                                                   v253);
          v423 = SystemEffectChainDescriptor::Resolve(*v422, v250);
          if ( v423 < 0 )
            break;
        }
        if ( ++v253 >= (int)v252 )
          goto LABEL_510;
      }
      v420 = (unsigned int)v423;
      v421 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v421,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v420);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v539);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v563);
  }
LABEL_513:
  v254 = lpCriticalSectiona;
  if ( LOBYTE(lpCriticalSectiona[1].RecursionCount) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
    v564 = &lpCriticalSectiona[1].OwningThread;
    v256 = 0LL;
    v520 = 0LL;
    v257 = 0LL;
    v521 = 0LL;
    v258 = 0;
    v259 = 0;
    if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
    {
      v260 = 0LL;
      do
      {
        if ( v260 < 0 || v259 >= SLODWORD(v254[1].DebugInfo) )
        {
          ATL::_AtlRaiseException(0xC000008C, v255);
          __debugbreak();
        }
        v261 = v254->SpinCount;
        if ( (_DWORD)v257 == v258 )
        {
          if ( v258 )
          {
            v258 = 2 * v257;
            if ( (v257 & 0x40000000) != 0 )
              goto LABEL_1061;
          }
          else
          {
            v258 = 1;
          }
          if ( (unsigned __int64)v258 > 0x7FFFFFF
            || (v262 = _o__recalloc(v256, v258, 16LL), (v256 = (volatile signed __int32 *)v262) == 0LL) )
          {
LABEL_1061:
            v425 = 2147942414LL;
            v426 = 502LL;
            goto LABEL_1063;
          }
          HIDWORD(v521) = v258;
          v520 = (volatile signed __int32 *)v262;
        }
        v263 = &v256[4 * (int)v257];
        if ( v263 )
        {
          *(_QWORD *)v263 = 0LL;
          *((_QWORD *)v263 + 1) = 0LL;
          v264 = *(_QWORD *)(v261 + v260 + 8);
          if ( v264 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v264 + 8));
            v258 = HIDWORD(v521);
            LODWORD(v257) = v521;
            v256 = v520;
          }
          *(_QWORD *)v263 = *(_QWORD *)(v261 + v260);
          *((_QWORD *)v263 + 1) = *(_QWORD *)(v261 + v260 + 8);
        }
        v257 = (unsigned int)(v257 + 1);
        LODWORD(v521) = v257;
        ++v259;
        v260 += 16LL;
        v254 = lpCriticalSectiona;
      }
      while ( v259 < SLODWORD(lpCriticalSectiona[1].DebugInfo) );
    }
    v265 = 0LL;
    if ( (int)v257 <= 0 )
    {
LABEL_534:
      if ( v256 )
      {
        if ( (int)v257 > 0 )
        {
          v265 = (volatile signed __int32 **)(v256 + 2);
          do
          {
            v256 = *v265;
            if ( *v265 && _InterlockedExchangeAdd(v256 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_1068:
              (**(void (__fastcall ***)(volatile signed __int32 *))v256)(v256);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v256);
            }
            v265 += 2;
            --v257;
          }
          while ( v257 );
          v256 = v520;
        }
        free((void *)v256);
      }
      if ( lpCriticalSectiona != (LPCRITICAL_SECTION)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
    }
    else
    {
      v266 = v256;
      while ( 1 )
      {
        if ( (int)v265 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v255);
          goto LABEL_1068;
        }
        if ( *(_BYTE *)(*(_QWORD *)v266 + 20LL) )
        {
          v427 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v520,
                                                   (int)v265);
          v428 = SystemEffectChainDescriptor::Resolve(*v427, (struct SystemEffectDescriptor *)v254);
          if ( v428 < 0 )
            break;
        }
        v265 = (volatile signed __int32 **)(unsigned int)((_DWORD)v265 + 1);
        v266 += 4;
        if ( (int)v265 >= (int)v257 )
          goto LABEL_534;
      }
      v425 = (unsigned int)v428;
      v426 = 508LL;
LABEL_1063:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v426,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v425);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v520);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v564);
    }
    v250 = v475;
  }
  v267 = v477;
  v268 = (char *)v477 + 16 * a5 + 72;
  v236 = v473;
  LODWORD(v237) = 1;
  v231 = a5;
  v133 = 0LL;
LABEL_546:
  LODWORD(v269) = 0;
  v270 = *((_DWORD *)v268 + 2);
  if ( v270 <= 0 )
    goto LABEL_1070;
  v271 = *(_QWORD *)v268;
  while ( 1 )
  {
    v272 = *(_QWORD *)(v271 + 16LL * (int)v269) - *(_QWORD *)&v603.Data1;
    if ( !v272 )
      v272 = *(_QWORD *)(v271 + 16LL * (int)v269 + 8) - *(_QWORD *)v603.Data4;
    if ( !v272 )
      break;
    LODWORD(v269) = (_DWORD)v269 + 1;
    if ( (int)v269 >= v270 )
      goto LABEL_1070;
  }
  if ( (_DWORD)v269 == -1 )
  {
LABEL_1070:
    v236 = 0;
    goto LABEL_676;
  }
  j = 1LL;
  if ( !*((_QWORD *)v267 + 8) )
    goto LABEL_557;
  v592 = 0LL;
  v593 = 0LL;
  v594 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v267 + 8) + 40LL))(
         *((_QWORD *)v267 + 8),
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v592) >= 0
    && (_WORD)v592 == 19 )
  {
    j = (_DWORD)v593 == 0;
  }
  PropVariantClear(&v592);
  if ( (_DWORD)j || (v274 = 0, v231 == 3) )
LABEL_557:
    v274 = 1;
  if ( !v274 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, v250);
    if ( (_DWORD)v480 == *((_DWORD *)v250 + 2) )
      goto LABEL_584;
    v429 = retaddr;
    v430 = 570LL;
    goto LABEL_1075;
  }
  if ( !*((_BYTE *)v250 + 52) )
    goto LABEL_566;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v250 + 56));
  v555 = (char *)v250 + 56;
  v275 = 0LL;
  v542 = 0LL;
  v276 = 0LL;
  v543 = 0;
  v544 = 0;
  if ( *((int *)v250 + 10) > 0 )
  {
    while ( 1 )
    {
      v431 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v250 + 32, v133);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v542,
                            v431) )
        break;
      LODWORD(v133) = v133 + 1;
      if ( (int)v133 >= *((_DWORD *)v250 + 10) )
      {
        v276 = v543;
        v275 = v542;
        goto LABEL_561;
      }
    }
    v432 = 2147942414LL;
    v433 = 502LL;
  }
  else
  {
LABEL_561:
    v277 = 0;
    if ( (int)v276 <= 0 )
    {
LABEL_562:
      if ( v275 )
      {
        if ( (int)v276 > 0 )
        {
          v436 = v275;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v436);
            v436 += 16;
            --v276;
          }
          while ( v276 );
        }
        free(v275);
      }
      if ( v250 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v250 + 56));
      goto LABEL_565;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)&v542,
                                   v277)
                    + 20LL) )
      {
        v434 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v542,
                                                 v277);
        v435 = SystemEffectChainDescriptor::Resolve(*v434, v250);
        if ( v435 < 0 )
          break;
      }
      if ( ++v277 >= (int)v276 )
        goto LABEL_562;
    }
    v432 = (unsigned int)v435;
    v433 = 508LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v433,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v432);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v542);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v555);
LABEL_565:
  v133 = 0LL;
LABEL_566:
  for ( j = 0LL; (int)j < *((_DWORD *)v250 + 10); j = (unsigned int)(j + 1) )
  {
    for ( k = 0;
          k < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)v250 + 32,
                                       j)
                        + 8LL);
          ++k )
    {
      v438 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v250 + 32, j);
      v439 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v438, k);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&Block, v439) == -1 )
      {
        v440 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            (__int64)v250 + 32,
                            j);
        v441 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v440, k);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&Block, v441) )
        {
          v429 = retaddr;
          v430 = 584LL;
LABEL_1075:
          wil::details::in1diag3::Return_Hr(
            v429,
            (void *)v430,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_584;
        }
      }
    }
  }
  v278 = (__int64 *)*((_QWORD *)v250 + 2);
  if ( v278 )
  {
    j = 0LL;
    if ( *((int *)v278 + 2) > 0 )
    {
      v279 = 0LL;
      do
      {
        if ( (int)j < 0 || (int)j >= *((_DWORD *)v278 + 2) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v269);
          __debugbreak();
        }
        v269 = (const struct _GUID *)(*v278 + 16LL * (int)j);
        v280 = 0;
        if ( (int)v480 <= 0 )
          goto LABEL_573;
        while ( !IsEqualGUID((const struct _GUID *)Block + v280, v269) )
        {
          v280 = v442 + 1;
          if ( v280 >= (int)v480 )
            goto LABEL_573;
        }
        if ( v442 == -1 )
        {
LABEL_573:
          if ( (int)j >= *((_DWORD *)v278 + 2) )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v269);
            __debugbreak();
          }
          v281 = *v278;
          if ( (_DWORD)v480 == HIDWORD(v480) )
          {
            if ( HIDWORD(v480) )
            {
              v282 = 2 * v480;
              if ( (v480 & 0x40000000) != 0 )
                goto LABEL_1104;
            }
            else
            {
              v282 = 1;
            }
            if ( (unsigned __int64)v282 > 0x7FFFFFF || (v283 = (void *)_o__recalloc(Block, v282, 16LL)) == 0LL )
            {
LABEL_1104:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x254,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL);
              v133 = 0LL;
              break;
            }
            HIDWORD(v480) = v282;
            Block = v283;
          }
          v284 = (char *)Block + 16 * (int)v480;
          if ( v284 )
            *v284 = *(_OWORD *)(v281 + v279);
          LODWORD(v480) = v480 + 1;
          v133 = 0LL;
        }
        j = (unsigned int)(j + 1);
        v279 += 16LL;
        v278 = (__int64 *)*((_QWORD *)v250 + 2);
      }
      while ( (int)j < *((_DWORD *)v278 + 2) );
    }
  }
LABEL_584:
  v285 = 0;
  v478 = 0;
  if ( (int)v480 <= 0 )
    goto LABEL_676;
  v286 = 0LL;
  lpCriticalSectionb = 0LL;
  do
  {
    if ( (__int64)v286 < 0 )
      goto LABEL_1143;
    v607 = *((_OWORD *)Block + (unsigned __int64)v286);
    if ( a5 == eHostProcessConnector )
    {
      j = 1LL;
      v287 = v477;
      if ( *((_QWORD *)v477 + 8) )
      {
        v568 = 0LL;
        v569 = 0LL;
        v570 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)v477 + 8) + 40LL))(
               *((_QWORD *)v477 + 8),
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v568) >= 0
          && (_WORD)v568 == 19 )
        {
          j = (_DWORD)v569 == 0;
        }
        PropVariantClear(&v568);
        if ( !(_DWORD)j )
        {
          v318 = (char *)v287 + 136;
          v133 = 0LL;
          goto LABEL_669;
        }
      }
      v133 = 0LL;
    }
    v288 = v471;
    if ( *((_BYTE *)v471 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
      v565 = (char *)v471 + 56;
      v290 = 0LL;
      v490 = 0LL;
      j = 0LL;
      v491 = 0LL;
      v291 = 0;
      v292 = 0;
      if ( *((int *)v471 + 10) > 0 )
      {
        while ( 1 )
        {
          if ( v133 < 0 || v292 >= *((_DWORD *)v288 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v289);
            __debugbreak();
          }
          v293 = *((_QWORD *)v288 + 4);
          if ( (_DWORD)j == v291 )
          {
            if ( v291 )
            {
              v291 = 2 * j;
              if ( (j & 0x40000000) != 0 )
                goto LABEL_1109;
            }
            else
            {
              v291 = 1;
            }
            if ( (unsigned __int64)v291 > 0x7FFFFFF
              || (v294 = _o__recalloc(v290, v291, 16LL), (v290 = (__int64 *)v294) == 0LL) )
            {
LABEL_1109:
              v443 = 2147942414LL;
              v444 = 502LL;
              goto LABEL_1111;
            }
            HIDWORD(v491) = v291;
            v490 = (__int64 *)v294;
          }
          v295 = &v290[2 * (int)j];
          if ( v295 )
          {
            *v295 = 0LL;
            v295[1] = 0LL;
            v296 = *(_QWORD *)(v293 + v133 + 8);
            if ( v296 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v296 + 8));
              v291 = HIDWORD(v491);
              LODWORD(j) = v491;
              v290 = v490;
            }
            *v295 = *(_QWORD *)(v293 + v133);
            v295[1] = *(_QWORD *)(v293 + v133 + 8);
          }
          j = (unsigned int)(j + 1);
          LODWORD(v491) = j;
          ++v292;
          v133 += 16LL;
          v288 = v471;
          if ( v292 >= *((_DWORD *)v471 + 10) )
          {
            LODWORD(v133) = 0;
            break;
          }
        }
      }
      v297 = 0;
      if ( (int)j <= 0 )
      {
LABEL_617:
        if ( v290 )
        {
          if ( (int)j > 0 )
          {
            v299 = v290 + 1;
            v300 = (unsigned int)j;
            do
            {
              j = *v299;
              if ( *v299 && _InterlockedExchangeAdd((volatile signed __int32 *)(j + 8), 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(__int64))j)(j);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)j);
              }
              v299 += 2;
              --v300;
            }
            while ( v300 );
            v290 = v490;
          }
          free(v290);
          v490 = 0LL;
        }
        v491 = 0LL;
        if ( v471 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v471 + 56));
      }
      else
      {
        v298 = v290;
        while ( 1 )
        {
          if ( v297 < 0 || v297 >= (int)j )
          {
            ATL::_AtlRaiseException(0xC000008C, v289);
LABEL_1141:
            ATL::_AtlRaiseException(0xC000008C, v306);
            __debugbreak();
          }
          if ( *(_BYTE *)(*v298 + 20) )
          {
            v445 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     (__int64)&v490,
                                                     v297);
            v446 = SystemEffectChainDescriptor::Resolve(*v445, v288);
            if ( v446 < 0 )
              break;
          }
          ++v297;
          v298 += 2;
          if ( v297 >= (int)j )
          {
            LODWORD(v133) = 0;
            goto LABEL_617;
          }
        }
        v443 = (unsigned int)v446;
        v444 = 508LL;
LABEL_1111:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v444,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v443);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v490);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v565);
        LODWORD(v133) = 0;
      }
    }
    v301 = v495;
    v302 = (char *)v477 + (_QWORD)v495 + 616;
    if ( !v302[52] )
      goto LABEL_634;
    j = (__int64)(v302 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v302 + 56));
    v566 = v302 + 56;
    v303 = 0LL;
    v522 = 0LL;
    v523 = 0LL;
    v304 = 0;
    if ( *((int *)v302 + 10) > 0 )
    {
      while ( 1 )
      {
        v447 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v302 + 32), v304);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v522,
                              v447) )
          break;
        if ( ++v304 >= *((_DWORD *)v302 + 10) )
        {
          LODWORD(v133) = v523;
          v303 = v522;
          goto LABEL_630;
        }
      }
      v448 = 2147942414LL;
      v449 = 502LL;
    }
    else
    {
LABEL_630:
      v305 = 0;
      if ( (int)v133 <= 0 )
      {
LABEL_631:
        if ( v303 )
        {
          if ( (int)v133 > 0 )
          {
            v452 = v303;
            v133 = (unsigned int)v133;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v452);
              v452 += 16;
              --v133;
            }
            while ( v133 );
          }
          free(v303);
          v522 = 0LL;
        }
        v523 = 0LL;
        if ( j )
          LeaveCriticalSection((LPCRITICAL_SECTION)j);
        goto LABEL_634;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v522,
                                     v305)
                      + 20LL) )
        {
          v450 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v522,
                                                   v305);
          v451 = SystemEffectChainDescriptor::Resolve(*v450, (struct SystemEffectDescriptor *)v302);
          if ( v451 < 0 )
            break;
        }
        if ( ++v305 >= (int)v133 )
          goto LABEL_631;
      }
      v448 = (unsigned int)v451;
      v449 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v449,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v448);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v522);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v566);
LABEL_634:
    v133 = (__int64)v477 + (_QWORD)v301 + 1000;
    if ( !*(_BYTE *)(v133 + 52) )
      goto LABEL_1132;
    v237 = (struct _RTL_CRITICAL_SECTION *)(v133 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v133 + 56));
    v553 = (char *)(v133 + 56);
    v286 = 0LL;
    v492 = 0LL;
    j = 0LL;
    v493 = 0LL;
    v307 = 0;
    v308 = 0;
    if ( *(int *)(v133 + 40) > 0 )
    {
      v309 = 0LL;
      do
      {
        if ( v309 < 0 || v308 >= *(_DWORD *)(v133 + 40) )
          goto LABEL_1141;
        v310 = *(_QWORD *)(v133 + 32);
        if ( (_DWORD)j == v307 )
        {
          if ( v307 )
          {
            v307 = 2 * j;
            if ( (j & 0x40000000) != 0 )
              goto LABEL_1129;
          }
          else
          {
            v307 = 1;
          }
          if ( (unsigned __int64)v307 > 0x7FFFFFF
            || (v311 = _o__recalloc(v286, v307, 16LL), (v286 = (__int64 *)v311) == 0LL) )
          {
LABEL_1129:
            v453 = 2147942414LL;
            v454 = 502LL;
            goto LABEL_1131;
          }
          HIDWORD(v493) = v307;
          v492 = (__int64 *)v311;
        }
        v312 = (char *)&v286[2 * (int)j];
        if ( v312 )
        {
          *(_QWORD *)v312 = 0LL;
          *((_QWORD *)v312 + 1) = 0LL;
          v313 = *(_QWORD *)(v310 + v309 + 8);
          if ( v313 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v313 + 8));
            v307 = HIDWORD(v493);
            LODWORD(j) = v493;
            v286 = v492;
          }
          *(_QWORD *)v312 = *(_QWORD *)(v310 + v309);
          *((_QWORD *)v312 + 1) = *(_QWORD *)(v310 + v309 + 8);
        }
        j = (unsigned int)(j + 1);
        LODWORD(v493) = j;
        ++v308;
        v309 += 16LL;
      }
      while ( v308 < *(_DWORD *)(v133 + 40) );
      v237 = (struct _RTL_CRITICAL_SECTION *)(v133 + 56);
    }
    v314 = 0;
    if ( (int)j <= 0 )
    {
LABEL_657:
      if ( v286 )
      {
        if ( (int)j > 0 )
        {
          v316 = v286 + 1;
          v317 = (unsigned int)j;
          do
          {
            j = *v316;
            if ( *v316 && _InterlockedExchangeAdd((volatile signed __int32 *)(j + 8), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(__int64))j)(j);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)j);
            }
            v316 += 2;
            --v317;
          }
          while ( v317 );
          v286 = v492;
        }
        free(v286);
        v133 = 0LL;
        v492 = 0LL;
      }
      else
      {
        v133 = 0LL;
      }
      v493 = 0LL;
      if ( v237 )
        LeaveCriticalSection(v237);
      goto LABEL_668;
    }
    v315 = (char *)v286;
    while ( 1 )
    {
      if ( v314 < 0 || v314 >= (int)j )
      {
        ATL::_AtlRaiseException(0xC000008C, v306);
LABEL_1143:
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v269);
        CoTaskMemFree(v457);
        v322 = 0LL;
        goto LABEL_682;
      }
      if ( *(_BYTE *)(*(_QWORD *)v315 + 20LL) )
      {
        v455 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)&v492,
                                                 v314);
        v456 = SystemEffectChainDescriptor::Resolve(*v455, (struct SystemEffectDescriptor *)v133);
        if ( v456 < 0 )
          break;
      }
      ++v314;
      v315 += 16;
      if ( v314 >= (int)j )
        goto LABEL_657;
    }
    v453 = (unsigned int)v456;
    v454 = 508LL;
LABEL_1131:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v454,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v453);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v492);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v553);
LABEL_1132:
    v133 = 0LL;
LABEL_668:
    v318 = (char *)v477 + 16 * a5 + 72;
    v286 = (__int64 *)lpCriticalSectionb;
    v285 = v478;
    LODWORD(v237) = 1;
LABEL_669:
    LODWORD(v269) = 0;
    v319 = *((_DWORD *)v318 + 2);
    if ( v319 <= 0 )
      goto LABEL_675;
    v320 = *(_QWORD *)v318;
    while ( 1 )
    {
      v321 = *(_QWORD *)(v320 + 16LL * (int)v269) - v607;
      if ( !v321 )
        v321 = *(_QWORD *)(v320 + 16LL * (int)v269 + 8) - *((_QWORD *)&v607 + 1);
      if ( !v321 )
        break;
      LODWORD(v269) = (_DWORD)v269 + 1;
      if ( (int)v269 >= v319 )
        goto LABEL_675;
    }
    if ( (_DWORD)v269 == -1 )
    {
LABEL_675:
      v236 = 1;
      goto LABEL_676;
    }
    v478 = ++v285;
    v286 = (__int64 *)((char *)v286 + 1);
    lpCriticalSectionb = (LPCRITICAL_SECTION)v286;
  }
  while ( v285 < (int)v480 );
  v236 = v473;
LABEL_676:
  if ( Block )
    free(Block);
  if ( !v236 )
  {
LABEL_692:
    if ( v488 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v488 + 16LL))(v488);
    v325 = v489;
    v489 = (LPVOID)v133;
    if ( v325 )
      CoTaskMemFree(v325);
    if ( v494 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v494 + 16LL))(v494);
    v29 = (unsigned __int64)v525;
    goto LABEL_699;
  }
  LODWORD(v286) = 1;
  if ( v472 > 1 )
    LODWORD(v286) = v472;
  j = 16LL * (unsigned int)v286;
  v322 = (char *)CoTaskMemAlloc(j + 60);
  v466 = v322;
LABEL_682:
  if ( !v322 )
  {
    v86 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_1154;
  }
  memset_0(v322, 0, j + 60);
  *(_DWORD *)v466 = v476;
  *((_DWORD *)v466 + 1) = v133;
  *((_DWORD *)v466 + 14) = v133;
  v323 = (unsigned int)v133;
  if ( !v472 )
  {
LABEL_686:
    *(struct _GUID *)(v466 + 36) = *v484;
    if ( v488 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *, __int64))v488)(
        v488,
        &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
        &v528,
        v323);
      if ( v528 )
      {
LABEL_689:
        *((_DWORD *)v466 + 13) = (_DWORD)v237;
        if ( *((_DWORD *)v466 + 14) > (unsigned int)v286 )
        {
          v86 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x245,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x8000FFFFLL);
          v458 = &v528;
LABEL_1153:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v458);
          goto LABEL_1154;
        }
        *((_QWORD *)v466 + 2) = a10;
        *((_DWORD *)v466 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
        if ( v528 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v528 + 16LL))(v528);
        goto LABEL_692;
      }
    }
    else
    {
      v528 = v133;
    }
    LODWORD(v237) = v133;
    goto LABEL_689;
  }
  while ( 1 )
  {
    v324 = *((_DWORD *)v466 + 14);
    if ( v324 > 0x1F )
      break;
    *((_DWORD *)v466 + 8) |= (_DWORD)v237 << v324;
    *(_OWORD *)&v466[16 * (*((_DWORD *)v466 + 14))++ + 60] = *((_OWORD *)v489 + (unsigned int)v323);
    v323 = (unsigned int)(v323 + 1);
    if ( (unsigned int)v323 >= v472 )
      goto LABEL_686;
  }
  v86 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23A,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8000FFFFLL);
LABEL_1154:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v488);
  v462 = v489;
  v489 = (LPVOID)v133;
  if ( v462 )
    CoTaskMemFree(v462);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v494);
LABEL_704:
  if ( v466 )
    CoTaskMemFree(v466);
  if ( v465 )
    CoTaskMemFree(v465);
  if ( v554 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v554 + 16LL))(v554, *v554);
  return v86;
}
