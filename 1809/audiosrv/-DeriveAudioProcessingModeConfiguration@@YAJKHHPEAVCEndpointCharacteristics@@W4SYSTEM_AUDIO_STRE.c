/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800021B0 (AudioServerGetDevicePeriod.c)
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x18000BC00 (AudioServerGetMixFormat.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180020B40 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180029120 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BDE54 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DCEF0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800025DC (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800376D0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041630 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0SpatialAudioDevicePropertyReader@@QEAA@XZ @ 0x18004192C (--0SpatialAudioDevicePropertyReader@@QEAA@XZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18004E2C8 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005E570 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065370 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B36A8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BE48C (--1-$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180107658 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180108730 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180108CEC (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18010A5A8 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        int a1,
        int a2,
        int a3,
        struct CEndpointCharacteristics *a4,
        int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        int a8,
        int a9,
        struct _GUID *a10,
        struct _GUID *a11,
        struct _GUID *a12,
        struct _GUID *a13)
{
  struct CEndpointCharacteristics *v13; // r12
  int v14; // r15d
  struct _GUID *v15; // rsi
  struct _GUID *v16; // rdi
  struct _GUID *v17; // rbx
  struct _GUID v18; // xmm6
  struct _GUID v19; // xmm8
  struct _GUID v20; // xmm7
  int v21; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // esi
  BOOL v25; // edi
  __int64 v26; // rcx
  char *v27; // r11
  char *v28; // r13
  struct _RTL_CRITICAL_SECTION *v29; // r15
  unsigned int v30; // edx
  volatile signed __int32 **v31; // r14
  __int64 v32; // rdi
  int v33; // ebx
  int v34; // r12d
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rax
  volatile signed __int32 **v38; // rcx
  __int64 v39; // rax
  int v40; // ebx
  volatile signed __int32 **v41; // rsi
  SystemEffectChainDescriptor **v42; // rax
  int v43; // eax
  volatile signed __int32 **v44; // rsi
  volatile signed __int32 *v45; // rbx
  char *v46; // r14
  int v47; // esi
  unsigned int v48; // ebx
  __int64 v49; // rax
  unsigned int v50; // ebx
  SystemEffectChainDescriptor **v51; // rax
  int v52; // eax
  char *v53; // rbx
  __int64 v54; // rdi
  char *v55; // r13
  struct _RTL_CRITICAL_SECTION *v56; // r15
  unsigned int v57; // edx
  volatile signed __int32 **v58; // r14
  int v59; // ebx
  int v60; // edi
  int v61; // r12d
  __int64 v62; // rsi
  __int64 v63; // r15
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rax
  volatile signed __int32 **v69; // rcx
  __int64 v70; // rax
  int v71; // edi
  volatile signed __int32 **v72; // rsi
  SystemEffectChainDescriptor **v73; // rax
  int v74; // eax
  volatile signed __int32 **v75; // rdi
  __int64 v76; // rsi
  volatile signed __int32 *v77; // rbx
  int v78; // edx
  int v79; // ecx
  __int64 v80; // r9
  int v81; // ecx
  __int64 v82; // r9
  __int64 v83; // r9
  __int64 v84; // rdx
  BOOL v85; // ebx
  __int64 v86; // rcx
  int v87; // ecx
  __int64 v88; // rax
  char *v89; // r13
  bool v90; // zf
  unsigned int v91; // ebx
  __int64 **v92; // rax
  __int64 v93; // rax
  volatile signed __int32 *v94; // rbx
  __int64 v95; // rdx
  int v96; // ecx
  int v97; // r8d
  unsigned int v98; // ebx
  __int64 **v99; // rax
  GUID *v100; // rax
  unsigned int v101; // ecx
  int v102; // esi
  struct IPropertyStore *v103; // rbx
  SpatialAudioDevicePropertyReader *v104; // rax
  const GUID *v105; // r8
  const GUID *v106; // r9
  int v107; // ebx
  SpatialAudioDevicePropertyReader *v108; // rdi
  SpatialAudioDevicePropertyReader *v109; // rcx
  __int64 v110; // rcx
  char *v111; // r14
  unsigned int v112; // r15d
  __int64 v113; // r12
  __int64 v114; // rdi
  struct CEndpointCharacteristics *v115; // rsi
  int v116; // eax
  unsigned int v117; // ebx
  BOOL v118; // ebx
  __int64 v119; // rcx
  char *v120; // rax
  char *v121; // r15
  char *v122; // r12
  struct _RTL_CRITICAL_SECTION *v123; // r14
  unsigned int v124; // edx
  volatile signed __int32 **v125; // r13
  __int64 v126; // rsi
  int v127; // ebx
  int v128; // r15d
  __int64 v129; // r14
  __int64 v130; // rdi
  __int64 v131; // rax
  volatile signed __int32 **v132; // rcx
  __int64 v133; // rax
  int v134; // ebx
  volatile signed __int32 **v135; // rdi
  SystemEffectChainDescriptor **v136; // rax
  int v137; // eax
  volatile signed __int32 **v138; // rdi
  volatile signed __int32 *v139; // rbx
  char *v140; // rsi
  __int64 v141; // rdi
  unsigned int v142; // ebx
  __int64 v143; // rax
  unsigned int v144; // ebx
  SystemEffectChainDescriptor **v145; // rax
  int v146; // eax
  char *v147; // rbx
  char *v148; // r12
  struct _RTL_CRITICAL_SECTION *v149; // r14
  unsigned int v150; // edx
  volatile signed __int32 **v151; // r13
  __int64 v152; // rsi
  int v153; // ebx
  int v154; // r15d
  __int64 v155; // r14
  __int64 v156; // rdi
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // rax
  volatile signed __int32 **v162; // rcx
  __int64 v163; // rax
  int v164; // ebx
  volatile signed __int32 **v165; // rdi
  SystemEffectChainDescriptor **v166; // rax
  int v167; // eax
  volatile signed __int32 **v168; // rdi
  volatile signed __int32 *v169; // rbx
  int v170; // ecx
  int v171; // edx
  __int64 v172; // r9
  __int64 v173; // rdx
  __int128 v174; // xmm6
  BOOL v175; // ebx
  __int64 v176; // rcx
  bool v177; // zf
  unsigned int v178; // ebx
  __int64 **v179; // rax
  __int64 v180; // rax
  volatile signed __int32 *v181; // rbx
  __int64 v182; // rdx
  int v183; // ecx
  int v184; // r8d
  unsigned int v185; // ebx
  __int64 **v186; // rax
  struct _GUID *v187; // rax
  int cData; // [rsp+28h] [rbp-E0h]
  int cDataa; // [rsp+28h] [rbp-E0h]
  bool v190[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct CEndpointCharacteristics *v191; // [rsp+40h] [rbp-C8h]
  __int64 v192; // [rsp+48h] [rbp-C0h]
  char *v193; // [rsp+50h] [rbp-B8h]
  char *v194; // [rsp+58h] [rbp-B0h]
  volatile signed __int32 **v195; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v196; // [rsp+68h] [rbp-A0h]
  volatile signed __int32 **v197; // [rsp+70h] [rbp-98h] BYREF
  __int64 v198; // [rsp+78h] [rbp-90h]
  char *v199; // [rsp+80h] [rbp-88h]
  volatile signed __int32 **v200; // [rsp+88h] [rbp-80h] BYREF
  int v201; // [rsp+90h] [rbp-78h]
  int v202; // [rsp+94h] [rbp-74h]
  volatile signed __int32 **v203; // [rsp+98h] [rbp-70h] BYREF
  __int64 v204; // [rsp+A0h] [rbp-68h]
  char *v205; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v206; // [rsp+B0h] [rbp-58h]
  int v207; // [rsp+B8h] [rbp-50h] BYREF
  int v208; // [rsp+BCh] [rbp-4Ch] BYREF
  __int64 v209; // [rsp+C0h] [rbp-48h] BYREF
  SpatialAudioDevicePropertyReader *v210; // [rsp+C8h] [rbp-40h]
  struct _GUID *v211; // [rsp+D0h] [rbp-38h]
  struct _GUID *v212; // [rsp+D8h] [rbp-30h]
  struct _GUID *v213; // [rsp+E0h] [rbp-28h]
  char *v214; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v215; // [rsp+F0h] [rbp-18h]
  int v216; // [rsp+F8h] [rbp-10h] BYREF
  SpatialAudioDevicePropertyReader *v217; // [rsp+100h] [rbp-8h] BYREF
  struct _GUID v218; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v219; // [rsp+118h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v220; // [rsp+128h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v221; // [rsp+130h] [rbp+28h] BYREF
  SpatialAudioDevicePropertyReader *v222; // [rsp+138h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v223; // [rsp+140h] [rbp+38h] BYREF
  struct _RTL_CRITICAL_SECTION *v224; // [rsp+148h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v225; // [rsp+150h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v226; // [rsp+158h] [rbp+50h] BYREF
  struct _GUID v227; // [rsp+168h] [rbp+60h]
  PROPVARIANT v228; // [rsp+178h] [rbp+70h] BYREF
  __int64 v229; // [rsp+180h] [rbp+78h]
  __int64 v230; // [rsp+188h] [rbp+80h]
  PROPVARIANT pvar; // [rsp+190h] [rbp+88h] BYREF
  __int64 v232; // [rsp+198h] [rbp+90h]
  __int64 v233; // [rsp+1A0h] [rbp+98h]
  PROPVARIANT v234; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v235; // [rsp+1B0h] [rbp+A8h]
  __int64 v236; // [rsp+1B8h] [rbp+B0h]
  PROPVARIANT v237; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v238; // [rsp+1C8h] [rbp+C0h]
  __int64 v239; // [rsp+1D0h] [rbp+C8h]
  struct _GUID *v240; // [rsp+1D8h] [rbp+D0h]
  __int64 v241; // [rsp+1E0h] [rbp+D8h]
  __int64 v242; // [rsp+1E8h] [rbp+E0h]
  struct _GUID v243; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _GUID v244; // [rsp+208h] [rbp+100h]
  GUID v245; // [rsp+218h] [rbp+110h]
  __int128 v246; // [rsp+228h] [rbp+120h]
  __int128 v247; // [rsp+238h] [rbp+130h] BYREF
  SystemEffectChainDescriptor *v248; // [rsp+248h] [rbp+140h]
  volatile signed __int32 *v249; // [rsp+250h] [rbp+148h]
  struct _GUID v250; // [rsp+258h] [rbp+150h] BYREF
  __int128 v251; // [rsp+268h] [rbp+160h] BYREF
  SystemEffectChainDescriptor *v252; // [rsp+278h] [rbp+170h]
  volatile signed __int32 *v253; // [rsp+280h] [rbp+178h]
  struct _GUID v254; // [rsp+288h] [rbp+180h] BYREF
  char *v255; // [rsp+298h] [rbp+190h]
  __int64 v256; // [rsp+2A0h] [rbp+198h]
  char *v257; // [rsp+2A8h] [rbp+1A0h]
  struct _GUID v258; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _GUID v259; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _GUID v260; // [rsp+2D8h] [rbp+1D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E8h] [rbp+1E0h] BYREF
  const char *v262; // [rsp+308h] [rbp+200h]
  __int64 v263; // [rsp+310h] [rbp+208h]
  int *v264; // [rsp+318h] [rbp+210h]
  __int64 v265; // [rsp+320h] [rbp+218h]
  int *v266; // [rsp+328h] [rbp+220h]
  __int64 v267; // [rsp+330h] [rbp+228h]
  wil::details::in1diag3 *retaddr; // [rsp+3B0h] [rbp+2A8h]

  v256 = -2LL;
  v13 = a4;
  v191 = a4;
  v14 = a3;
  LODWORD(v192) = a3;
  *(_DWORD *)&v190[4] = a1;
  v240 = a10;
  v15 = a11;
  v213 = a11;
  v16 = a12;
  v212 = a12;
  v17 = a13;
  v211 = a13;
  v259 = GUID_00000000_0000_0000_0000_000000000000;
  v218 = GUID_00000000_0000_0000_0000_000000000000;
  v219 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a4, a7, &v259, &v218, &v219);
    v18 = v259;
    v19 = v218;
    v20 = v219;
    goto LABEL_375;
  }
  v21 = a5;
  if ( a5 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a4,
      eHostProcessConnector,
      &v259,
      &v218,
      &v219);
    v18 = v259;
    v19 = v218;
    v20 = v219;
    goto LABEL_375;
  }
  if ( !a2 )
  {
    v23 = eHostProcessConnector;
    v24 = a7;
    if ( a7 != eLoopbackConnector )
      v23 = a7;
    if ( v23 )
      goto LABEL_18;
    v25 = 1;
    v26 = *((_QWORD *)a4 + 8);
    if ( !v26 )
      goto LABEL_18;
    pvar = 0LL;
    v232 = 0LL;
    v233 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(
           v26,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v25 = v232 == 0;
    }
    PropVariantClear(&pvar);
    if ( v25 )
    {
LABEL_18:
      v194 = (char *)(int)v23;
      v199 = (char *)v13 + 96 * v23;
      v28 = v199 + 232;
      if ( v199[284] )
      {
        v29 = (struct _RTL_CRITICAL_SECTION *)(v199 + 288);
        EnterCriticalSection((LPCRITICAL_SECTION)(v199 + 288));
        v226 = (struct _RTL_CRITICAL_SECTION *)(v199 + 288);
        v30 = 0;
        v31 = 0LL;
        v200 = 0LL;
        v32 = 0LL;
        v201 = 0;
        v33 = 0;
        v202 = 0;
        v34 = 0;
        if ( *((int *)v199 + 68) > 0 )
        {
          v35 = 0LL;
          do
          {
            if ( v35 < 0 || v34 >= *((_DWORD *)v28 + 10) )
              goto LABEL_391;
            v36 = *((_QWORD *)v28 + 4);
            if ( (_DWORD)v32 == v33 )
            {
              if ( v33 )
              {
                v33 = 2 * v32;
                if ( (v32 & 0x40000000) != 0 )
                  goto LABEL_80;
              }
              else
              {
                v33 = 1;
              }
              if ( (unsigned __int64)v33 > 0x7FFFFFF
                || (v37 = _o__recalloc(v31, v33, 16LL), (v31 = (volatile signed __int32 **)v37) == 0LL) )
              {
LABEL_80:
                v64 = 2147942414LL;
                v65 = 502LL;
                goto LABEL_81;
              }
              v202 = v33;
              v200 = (volatile signed __int32 **)v37;
              v30 = 0;
            }
            v38 = &v31[2 * (int)v32];
            if ( v38 )
            {
              *v38 = 0LL;
              v38[1] = 0LL;
              v39 = *(_QWORD *)(v36 + v35 + 8);
              if ( v39 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
                v33 = v202;
                LODWORD(v32) = v201;
                v31 = v200;
              }
              *v38 = *(volatile signed __int32 **)(v36 + v35);
              v38[1] = *(volatile signed __int32 **)(v36 + v35 + 8);
            }
            v32 = (unsigned int)(v32 + 1);
            v201 = v32;
            ++v34;
            v35 += 16LL;
          }
          while ( v34 < *((_DWORD *)v28 + 10) );
          v29 = (struct _RTL_CRITICAL_SECTION *)(v28 + 56);
        }
        v40 = 0;
        if ( (int)v32 <= 0 )
        {
LABEL_43:
          if ( v31 )
          {
            if ( (int)v32 > 0 )
            {
              v44 = v31 + 1;
              do
              {
                v45 = *v44;
                if ( *v44 )
                {
                  if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
                    if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
                  }
                }
                v44 += 2;
                --v32;
              }
              while ( v32 );
              v31 = v200;
            }
            free(v31);
          }
          if ( v29 )
            LeaveCriticalSection(v29);
        }
        else
        {
          v41 = v31;
          while ( 1 )
          {
            if ( v40 < 0 || v40 >= (int)v32 )
            {
              ATL::_AtlRaiseException(0xC000008C, v30);
LABEL_393:
              ATL::_AtlRaiseException(0xC000008C, v57);
              __debugbreak();
            }
            if ( *((_BYTE *)*v41 + 20) )
            {
              v42 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v200,
                                                      (unsigned int)v40);
              v43 = SystemEffectChainDescriptor::Resolve(*v42, (struct SystemEffectDescriptor *)v28);
              if ( v43 < 0 )
                break;
            }
            ++v40;
            v41 += 2;
            if ( v40 >= (int)v32 )
              goto LABEL_43;
          }
          v64 = (unsigned int)v43;
          v65 = 508LL;
LABEL_81:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v65,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v64,
            cData);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v200);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v226);
        }
        v13 = v191;
      }
      if ( v199[668] )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v199 + 672));
        v225 = (struct _RTL_CRITICAL_SECTION *)(v199 + 672);
        v46 = 0LL;
        v214 = 0LL;
        v47 = 0;
        v215 = 0LL;
        v48 = 0;
        if ( *((int *)v199 + 164) <= 0 )
          goto LABEL_61;
        do
        {
          v49 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v199 + 648, v48);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v214,
                                v49) )
          {
            v66 = 2147942414LL;
            v67 = 502LL;
            goto LABEL_84;
          }
          ++v48;
        }
        while ( (signed int)v48 < *((_DWORD *)v199 + 164) );
        v47 = v215;
        v46 = v214;
LABEL_61:
        v50 = 0;
        if ( v47 <= 0 )
        {
LABEL_65:
          if ( v46 )
          {
            if ( v47 > 0 )
            {
              v53 = v46;
              v54 = (unsigned int)v47;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v53);
                v53 += 16;
                --v54;
              }
              while ( v54 );
            }
            free(v46);
          }
          if ( v199 != (char *)-672LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v199 + 672));
        }
        else
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         &v214,
                                         v50)
                          + 20LL) )
            {
              v51 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v214,
                                                      v50);
              v52 = SystemEffectChainDescriptor::Resolve(*v51, (struct SystemEffectDescriptor *)(v199 + 616));
              if ( v52 < 0 )
                break;
            }
            if ( (int)++v50 >= v47 )
              goto LABEL_65;
          }
          v66 = (unsigned int)v52;
          v67 = 508LL;
LABEL_84:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v67,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v66,
            cData);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v214);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v225);
        }
      }
      v55 = v199 + 1000;
      if ( v199[1052] )
      {
        v56 = (struct _RTL_CRITICAL_SECTION *)(v199 + 1056);
        EnterCriticalSection((LPCRITICAL_SECTION)(v199 + 1056));
        v221 = (struct _RTL_CRITICAL_SECTION *)(v199 + 1056);
        v57 = 0;
        v58 = 0LL;
        v203 = 0LL;
        v59 = 0;
        v204 = 0LL;
        v60 = 0;
        v61 = 0;
        if ( *((int *)v199 + 260) > 0 )
        {
          v62 = 0LL;
          do
          {
            if ( v62 < 0 || v61 >= *((_DWORD *)v55 + 10) )
              goto LABEL_393;
            v63 = *((_QWORD *)v55 + 4);
            if ( v59 == v60 )
            {
              if ( v60 )
              {
                v60 = 2 * v59;
                if ( (v59 & 0x40000000) != 0 )
                  goto LABEL_129;
              }
              else
              {
                v60 = 1;
              }
              if ( (unsigned __int64)v60 > 0x7FFFFFF
                || (v68 = _o__recalloc(v58, v60, 16LL), (v58 = (volatile signed __int32 **)v68) == 0LL) )
              {
LABEL_129:
                v83 = 2147942414LL;
                v84 = 502LL;
                goto LABEL_130;
              }
              HIDWORD(v204) = v60;
              v203 = (volatile signed __int32 **)v68;
              v57 = 0;
            }
            v69 = &v58[2 * v59];
            if ( v69 )
            {
              *v69 = 0LL;
              v69[1] = 0LL;
              v70 = *(_QWORD *)(v63 + v62 + 8);
              if ( v70 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v70 + 8));
                v60 = HIDWORD(v204);
                v59 = v204;
                v58 = v203;
              }
              *v69 = *(volatile signed __int32 **)(v63 + v62);
              v69[1] = *(volatile signed __int32 **)(v63 + v62 + 8);
            }
            LODWORD(v204) = ++v59;
            ++v61;
            v62 += 16LL;
          }
          while ( v61 < *((_DWORD *)v55 + 10) );
          v56 = (struct _RTL_CRITICAL_SECTION *)(v55 + 56);
        }
        v71 = 0;
        if ( v59 <= 0 )
        {
LABEL_103:
          if ( v58 )
          {
            if ( v59 > 0 )
            {
              v75 = v58 + 1;
              v76 = (unsigned int)v59;
              do
              {
                v77 = *v75;
                if ( *v75 )
                {
                  if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v77)(v77);
                    if ( _InterlockedExchangeAdd(v77 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
                  }
                }
                v75 += 2;
                --v76;
              }
              while ( v76 );
              v58 = v203;
            }
            free(v58);
          }
          if ( v56 )
            LeaveCriticalSection(v56);
        }
        else
        {
          v72 = v58;
          while ( 1 )
          {
            if ( v71 < 0 || v71 >= v59 )
            {
              ATL::_AtlRaiseException(0xC000008C, v57);
LABEL_395:
              ATL::_AtlRaiseException(0xC000008C, v124);
              __debugbreak();
            }
            if ( *((_BYTE *)*v72 + 20) )
            {
              v73 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v203,
                                                      (unsigned int)v71);
              v74 = SystemEffectChainDescriptor::Resolve(*v73, (struct SystemEffectDescriptor *)v55);
              if ( v74 < 0 )
                break;
            }
            ++v71;
            v72 += 2;
            if ( v71 >= v59 )
              goto LABEL_103;
          }
          v83 = (unsigned int)v74;
          v84 = 508LL;
LABEL_130:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v84,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v83,
            cData);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v203);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v221);
        }
        v13 = v191;
      }
      v27 = (char *)v13 + 16 * (_QWORD)v194 + 72;
      v21 = a5;
      v14 = v192;
      v24 = a7;
    }
    else
    {
      v27 = (char *)v13 + 136;
    }
    v78 = *((_DWORD *)v27 + 2);
    if ( v78 )
    {
      v79 = 0;
      if ( v78 <= 0 )
        goto LABEL_123;
      v80 = *(_QWORD *)v27;
      while ( *(_QWORD *)(v80 + 16LL * v79) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v80 + 16LL * v79 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v79 >= v78 )
          goto LABEL_123;
      }
      if ( v79 == -1 )
      {
LABEL_123:
        v81 = 0;
        if ( v78 <= 0 )
          goto LABEL_128;
        v82 = *(_QWORD *)v27;
        while ( *(_QWORD *)(v82 + 16LL * v81) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v82 + 16LL * v81 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v81 >= v78 )
            goto LABEL_128;
        }
        if ( v81 == -1 )
LABEL_128:
          v18 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v27, 0LL);
        else
          v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v18 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v227 = v18;
    v260 = v18;
    v85 = 1;
    v86 = *((_QWORD *)v13 + 8);
    if ( !v86 )
      goto LABEL_144;
    v234 = 0LL;
    v235 = 0LL;
    v236 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v86 + 40LL))(
           v86,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v234) >= 0
      && (_WORD)v234 == 19 )
    {
      v85 = v235 == 0;
    }
    PropVariantClear(&v234);
    if ( v85 || v24 == eKeywordDetectorConnector )
LABEL_144:
      v87 = 1;
    else
      v87 = 0;
    v258 = v18;
    v88 = 96LL * (int)a7;
    v194 = (char *)v13 + v88;
    v89 = (char *)v13 + v88 + 616;
    v193 = v89;
    if ( !v87 )
    {
      v90 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                            (__int64 *)((char *)v13 + v88 + 616),
                            &v258) == -1;
      goto LABEL_178;
    }
    v244 = v18;
    v243 = v18;
    if ( v89[52] )
    {
      v91 = 0;
      if ( *((int *)v89 + 10) > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       v89 + 32,
                                       v91)
                        + 20LL) )
          {
            v92 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v89 + 32, v91);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v92, &v243) != -1 )
              break;
          }
          if ( (signed int)++v91 >= *((_DWORD *)v89 + 10) )
            goto LABEL_169;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
        v257 = v89 + 56;
        v93 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v89 + 32, v91);
        v94 = *(volatile signed __int32 **)(v93 + 8);
        if ( v94 )
        {
          _InterlockedIncrement(v94 + 2);
          v94 = *(volatile signed __int32 **)(v93 + 8);
          v18 = v227;
        }
        v248 = *(SystemEffectChainDescriptor **)v93;
        v249 = v94;
        if ( (int)SystemEffectChainDescriptor::Resolve(v248, (struct SystemEffectDescriptor *)v89) < 0 )
        {
          if ( v94 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v94);
          if ( v89 != (char *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
          goto LABEL_160;
        }
        if ( v94 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v94);
        if ( v89 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
      }
    }
LABEL_169:
    v98 = 0;
    if ( *((int *)v89 + 10) > 0 )
    {
      while ( 1 )
      {
        v99 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v89 + 32, v98);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v99, &v243) != -1 )
          break;
        if ( (signed int)++v98 >= *((_DWORD *)v89 + 10) )
          goto LABEL_160;
      }
      if ( v98 != -1 )
      {
        v95 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v89 + 32, v98);
LABEL_177:
        v90 = v95 == 0;
LABEL_178:
        v259 = v18;
        v100 = &v260;
        if ( v90 )
          v100 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v19 = *v100;
        v218 = *v100;
        v20 = v18;
        v219 = v18;
        if ( v21 )
        {
          v101 = *(_DWORD *)&v190[4];
          if ( v21 == 1 && *(_DWORD *)&v190[4] == 18 && v14 )
          {
            v111 = (char *)&unk_18014E908;
            goto LABEL_215;
          }
        }
        else
        {
          v101 = *(_DWORD *)&v190[4];
          if ( dword_18017CDC0[*(unsigned int *)&v190[4]] )
          {
            v102 = 0;
            v208 = 0;
            v103 = (struct IPropertyStore *)*((_QWORD *)v13 + 5);
            v209 = 0LL;
            v210 = 0LL;
            v104 = (SpatialAudioDevicePropertyReader *)operator new(
                                                         0x208uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
            v217 = v104;
            if ( v104 )
            {
              v108 = SpatialAudioDevicePropertyReader::SpatialAudioDevicePropertyReader(v104);
              v222 = v108;
              v217 = 0LL;
              v107 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize(v108, 0LL, v103);
              if ( v107 >= 0 )
              {
                if ( v108 )
                  (*(void (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)v108 + 8LL))(v108);
                v210 = v108;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v222);
                v107 = 0;
              }
              else
              {
                Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v222);
                Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(&v217);
              }
              v207 = v107;
              if ( v107 >= 0 )
              {
                v107 = (**(__int64 (__fastcall ***)(SpatialAudioDevicePropertyReader *, GUID *, __int64 *))v210)(
                         v210,
                         &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d,
                         &v209);
                goto LABEL_193;
              }
            }
            else
            {
              Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(&v217);
              v107 = -2147024882;
              v207 = -2147024882;
            }
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v262 = "Create_SpatialAudioDevicePropertyReader";
              v263 = 40LL;
              v216 = 181;
              v264 = &v216;
              v265 = 4LL;
              v266 = &v207;
              v267 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v105, v106, 5u, &pData);
            }
LABEL_193:
            v109 = v210;
            if ( v210 )
            {
              v210 = 0LL;
              (*(void (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)v109 + 16LL))(v109);
            }
            if ( v107 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v209 + 184LL))(v209, &v208) >= 0 )
              v102 = v208;
            v110 = v209;
            if ( v209 )
            {
              v209 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
            }
            v101 = *(_DWORD *)&v190[4];
            if ( v102 )
            {
              v111 = (char *)&unk_18014E918;
              goto LABEL_215;
            }
          }
        }
        if ( v21 )
        {
          if ( v21 != 1 )
          {
LABEL_208:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x35D,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x80070057LL,
              cData);
            return 2147942487LL;
          }
        }
        else if ( v101 >= 0x15 )
        {
          goto LABEL_208;
        }
        if ( v21 == 1 && v101 >= 0x15 )
          goto LABEL_208;
        if ( v21 )
          v111 = (char *)*(&off_18014F260 + v101);
        else
          v111 = (char *)*(&off_18014F060 + v101);
LABEL_215:
        v199 = v111;
        v112 = 0;
        LODWORD(v192) = 0;
        if ( !*(_DWORD *)v111 )
          goto LABEL_374;
LABEL_216:
        v113 = v112;
        v242 = v112;
        v114 = 16LL * v112;
        v241 = v114;
        v250 = *(struct _GUID *)(*((_QWORD *)v111 + 1) + v114);
        v115 = v191;
        v116 = UseSupportedConnectorMode(v191, v101, a7, &v250, a9, v190);
        v117 = v116;
        if ( v116 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x369,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v116,
            cDataa);
          return v117;
        }
        if ( v190[0] )
        {
          v18 = *(struct _GUID *)(*((_QWORD *)v111 + 1) + 16LL * v112);
          v259 = v18;
          if ( a8
            || (v254 = v18,
                v90 = (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(v115, &v254, a7) == 0,
                v187 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
                !v90) )
          {
            v187 = &v259;
          }
          v19 = *v187;
          v20 = v18;
          goto LABEL_374;
        }
        v245 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( a7 == eHostProcessConnector )
        {
          v118 = 1;
          v119 = *((_QWORD *)v115 + 8);
          if ( v119 )
          {
            v237 = 0LL;
            v238 = 0LL;
            v239 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v119 + 40LL))(
                   v119,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v237) >= 0
              && (_WORD)v237 == 19 )
            {
              v118 = v238 == 0;
            }
            PropVariantClear(&v237);
            if ( !v118 )
            {
              v120 = (char *)v115 + 136;
              goto LABEL_324;
            }
          }
        }
        v121 = v194;
        v122 = v194 + 232;
        if ( v194[284] )
        {
          v123 = (struct _RTL_CRITICAL_SECTION *)(v194 + 288);
          EnterCriticalSection((LPCRITICAL_SECTION)(v194 + 288));
          v223 = (struct _RTL_CRITICAL_SECTION *)(v122 + 56);
          v124 = 0;
          v125 = 0LL;
          v197 = 0LL;
          v126 = 0LL;
          v198 = 0LL;
          v127 = 0;
          v128 = 0;
          if ( *((int *)v122 + 10) > 0 )
          {
            v129 = 0LL;
            while ( 1 )
            {
              if ( v129 < 0 || v128 >= *((_DWORD *)v122 + 10) )
                goto LABEL_395;
              v130 = *((_QWORD *)v122 + 4);
              if ( (_DWORD)v126 == v127 )
              {
                if ( v127 )
                {
                  v127 = 2 * v126;
                  if ( (v126 & 0x40000000) != 0 )
                    goto LABEL_287;
                }
                else
                {
                  v127 = 1;
                }
                if ( (unsigned __int64)v127 > 0x7FFFFFF
                  || (v131 = _o__recalloc(v125, v127, 16LL), (v125 = (volatile signed __int32 **)v131) == 0LL) )
                {
LABEL_287:
                  v157 = 2147942414LL;
                  v158 = 502LL;
                  goto LABEL_288;
                }
                HIDWORD(v198) = v127;
                v197 = (volatile signed __int32 **)v131;
                v124 = 0;
              }
              v132 = &v125[2 * (int)v126];
              if ( v132 )
              {
                *v132 = 0LL;
                v132[1] = 0LL;
                v133 = *(_QWORD *)(v130 + v129 + 8);
                if ( v133 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v133 + 8));
                  v127 = HIDWORD(v198);
                  LODWORD(v126) = v198;
                  v125 = v197;
                }
                *v132 = *(volatile signed __int32 **)(v130 + v129);
                v132[1] = *(volatile signed __int32 **)(v130 + v129 + 8);
              }
              v126 = (unsigned int)(v126 + 1);
              LODWORD(v198) = v126;
              ++v128;
              v129 += 16LL;
              if ( v128 >= *((_DWORD *)v122 + 10) )
              {
                v123 = (struct _RTL_CRITICAL_SECTION *)(v122 + 56);
                break;
              }
            }
          }
          v134 = 0;
          if ( (int)v126 <= 0 )
          {
LABEL_250:
            if ( v125 )
            {
              if ( (int)v126 > 0 )
              {
                v138 = v125 + 1;
                do
                {
                  v139 = *v138;
                  if ( *v138 )
                  {
                    if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (**(void (__fastcall ***)(volatile signed __int32 *))v139)(v139);
                      if ( _InterlockedExchangeAdd(v139 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v139 + 8LL))(v139);
                    }
                  }
                  v138 += 2;
                  --v126;
                }
                while ( v126 );
                v125 = v197;
              }
              free(v125);
              v197 = 0LL;
            }
            v198 = 0LL;
            if ( v123 )
              LeaveCriticalSection(v123);
          }
          else
          {
            v135 = v125;
            while ( 1 )
            {
              if ( v134 < 0 || v134 >= (int)v126 )
              {
                ATL::_AtlRaiseException(0xC000008C, v124);
LABEL_397:
                ATL::_AtlRaiseException(0xC000008C, v150);
                JUMPOUT(0x1800376BBLL);
              }
              if ( *((_BYTE *)*v135 + 20) )
              {
                v136 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         &v197,
                                                         (unsigned int)v134);
                v137 = SystemEffectChainDescriptor::Resolve(*v136, (struct SystemEffectDescriptor *)v122);
                if ( v137 < 0 )
                  break;
              }
              ++v134;
              v135 += 2;
              if ( v134 >= (int)v126 )
                goto LABEL_250;
            }
            v157 = (unsigned int)v137;
            v158 = 508LL;
LABEL_288:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v158,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v157,
              cDataa);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v197);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v223);
          }
          v121 = v194;
          v89 = v193;
        }
        if ( v89[52] )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
          v224 = (struct _RTL_CRITICAL_SECTION *)(v89 + 56);
          v140 = 0LL;
          v205 = 0LL;
          v141 = 0LL;
          v206 = 0LL;
          v142 = 0;
          if ( *((int *)v89 + 10) > 0 )
          {
            while ( 1 )
            {
              v143 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v89 + 32, v142);
              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                    &v205,
                                    v143) )
                break;
              if ( (signed int)++v142 >= *((_DWORD *)v89 + 10) )
              {
                v141 = (unsigned int)v206;
                v140 = v205;
                goto LABEL_268;
              }
            }
            v159 = 2147942414LL;
            v160 = 502LL;
            goto LABEL_291;
          }
LABEL_268:
          v144 = 0;
          if ( (int)v141 > 0 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           &v205,
                                           v144)
                            + 20LL) )
              {
                v145 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         &v205,
                                                         v144);
                v146 = SystemEffectChainDescriptor::Resolve(*v145, (struct SystemEffectDescriptor *)v89);
                if ( v146 < 0 )
                  break;
              }
              if ( (int)++v144 >= (int)v141 )
                goto LABEL_272;
            }
            v159 = (unsigned int)v146;
            v160 = 508LL;
LABEL_291:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v160,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v159,
              cDataa);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v205);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v224);
            goto LABEL_279;
          }
LABEL_272:
          if ( v140 )
          {
            if ( (int)v141 > 0 )
            {
              v147 = v140;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v147);
                v147 += 16;
                --v141;
              }
              while ( v141 );
            }
            free(v140);
            v205 = 0LL;
          }
          v206 = 0LL;
          if ( v89 != (char *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
        }
LABEL_279:
        v148 = v121 + 1000;
        if ( !v121[1052] )
          goto LABEL_323;
        v149 = (struct _RTL_CRITICAL_SECTION *)(v121 + 1056);
        EnterCriticalSection((LPCRITICAL_SECTION)(v121 + 1056));
        v220 = (struct _RTL_CRITICAL_SECTION *)(v121 + 1056);
        v150 = 0;
        v151 = 0LL;
        v195 = 0LL;
        v152 = 0LL;
        v196 = 0LL;
        v153 = 0;
        v154 = 0;
        if ( *((int *)v148 + 10) > 0 )
        {
          v155 = 0LL;
          do
          {
            if ( v155 < 0 || v154 >= *((_DWORD *)v148 + 10) )
              goto LABEL_397;
            v156 = *((_QWORD *)v148 + 4);
            if ( (_DWORD)v152 == v153 )
            {
              if ( v153 )
              {
                v153 = 2 * v152;
                if ( (v152 & 0x40000000) != 0 )
                  goto LABEL_328;
              }
              else
              {
                v153 = 1;
              }
              if ( (unsigned __int64)v153 > 0x7FFFFFF
                || (v161 = _o__recalloc(v151, v153, 16LL), (v151 = (volatile signed __int32 **)v161) == 0LL) )
              {
LABEL_328:
                v172 = 2147942414LL;
                v173 = 502LL;
                goto LABEL_329;
              }
              HIDWORD(v196) = v153;
              v195 = (volatile signed __int32 **)v161;
              v150 = 0;
            }
            v162 = &v151[2 * (int)v152];
            if ( v162 )
            {
              *v162 = 0LL;
              v162[1] = 0LL;
              v163 = *(_QWORD *)(v156 + v155 + 8);
              if ( v163 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v163 + 8));
                v153 = HIDWORD(v196);
                LODWORD(v152) = v196;
                v151 = v195;
              }
              *v162 = *(volatile signed __int32 **)(v156 + v155);
              v162[1] = *(volatile signed __int32 **)(v156 + v155 + 8);
            }
            v152 = (unsigned int)(v152 + 1);
            LODWORD(v196) = v152;
            ++v154;
            v155 += 16LL;
          }
          while ( v154 < *((_DWORD *)v148 + 10) );
          v149 = (struct _RTL_CRITICAL_SECTION *)(v148 + 56);
        }
        v164 = 0;
        if ( (int)v152 <= 0 )
        {
LABEL_310:
          if ( v151 )
          {
            if ( (int)v152 > 0 )
            {
              v168 = v151 + 1;
              do
              {
                v169 = *v168;
                if ( *v168 )
                {
                  if ( _InterlockedExchangeAdd(v169 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v169)(v169);
                    if ( _InterlockedExchangeAdd(v169 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v169 + 8LL))(v169);
                  }
                }
                v168 += 2;
                --v152;
              }
              while ( v152 );
              v151 = v195;
            }
            free(v151);
            v195 = 0LL;
          }
          v196 = 0LL;
          if ( v149 )
            LeaveCriticalSection(v149);
          goto LABEL_322;
        }
        v165 = v151;
        while ( v164 >= 0 && v164 < (int)v152 )
        {
          if ( *((_BYTE *)*v165 + 20) )
          {
            v166 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v195,
                                                     (unsigned int)v164);
            v167 = SystemEffectChainDescriptor::Resolve(*v166, (struct SystemEffectDescriptor *)v148);
            if ( v167 < 0 )
            {
              v172 = (unsigned int)v167;
              v173 = 508LL;
LABEL_329:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v173,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)v172,
                cDataa);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v195);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v220);
LABEL_322:
              v89 = v193;
LABEL_323:
              v115 = v191;
              v120 = (char *)v191 + 16 * a7 + 72;
              v114 = v241;
              v111 = v199;
              v112 = v192;
              v113 = v242;
LABEL_324:
              v170 = 0;
              v171 = *((_DWORD *)v120 + 2);
              if ( v171 <= 0 )
                goto LABEL_371;
              while ( *(_OWORD *)(*(_QWORD *)v120 + 16LL * v170) != *(_OWORD *)&v245 )
              {
                if ( ++v170 >= v171 )
                  goto LABEL_371;
              }
              if ( v170 == -1 )
                goto LABEL_371;
              v174 = *(_OWORD *)(*((_QWORD *)v111 + 1) + v114);
              v175 = 1;
              v176 = *((_QWORD *)v115 + 8);
              if ( v176 )
              {
                v228 = 0LL;
                v229 = 0LL;
                v230 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v176 + 40LL))(
                       v176,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v228) >= 0
                  && (_WORD)v228 == 19 )
                {
                  v175 = v229 == 0;
                }
                PropVariantClear(&v228);
                if ( !v175 && a7 != eKeywordDetectorConnector )
                {
                  v251 = v174;
                  v177 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                         (__int64 *)v89,
                                         &v251) == -1;
                  goto LABEL_370;
                }
              }
              v246 = v174;
              v247 = v174;
              if ( v89[52] )
              {
                v178 = 0;
                if ( *((int *)v89 + 10) > 0 )
                {
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 v89 + 32,
                                                 v178)
                                  + 20LL) )
                    {
                      v179 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           v89 + 32,
                                           v178);
                      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                           *v179,
                                           &v247) != -1 )
                        break;
                    }
                    if ( (signed int)++v178 >= *((_DWORD *)v89 + 10) )
                      goto LABEL_361;
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
                  v255 = v89 + 56;
                  v180 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v89 + 32, v178);
                  v181 = *(volatile signed __int32 **)(v180 + 8);
                  if ( v181 )
                  {
                    _InterlockedIncrement(v181 + 2);
                    v181 = *(volatile signed __int32 **)(v180 + 8);
                  }
                  v252 = *(SystemEffectChainDescriptor **)v180;
                  v253 = v181;
                  if ( (int)SystemEffectChainDescriptor::Resolve(v252, (struct SystemEffectDescriptor *)v89) < 0 )
                  {
                    if ( v181 )
                      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v181);
                    if ( v89 != (char *)-56LL )
                      LeaveCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
                    goto LABEL_352;
                  }
                  if ( v181 )
                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v181);
                  if ( v89 != (char *)-56LL )
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v89 + 56));
                }
              }
LABEL_361:
              v185 = 0;
              if ( *((int *)v89 + 10) <= 0 )
                goto LABEL_401;
              while ( 1 )
              {
                v186 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     v89 + 32,
                                     v185);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v186, &v247) != -1 )
                  break;
                if ( (signed int)++v185 >= *((_DWORD *)v89 + 10) )
                  goto LABEL_352;
              }
              if ( v185 == -1 )
              {
LABEL_401:
              {
LABEL_352:
                v182 = *((_QWORD *)v89 + 2);
                if ( !v182 )
                  goto LABEL_368;
                v183 = 0;
                v184 = *(_DWORD *)(v182 + 8);
                if ( v184 <= 0 )
                  goto LABEL_368;
                while ( *(_OWORD *)(*(_QWORD *)v182 + 16LL * v183) != v246 )
                {
                  if ( ++v183 >= v184 )
                    goto LABEL_368;
                }
                if ( v183 == -1 )
LABEL_368:
                  v182 = 0LL;
              }
              }
              else
              {
                v182 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                    v89 + 32,
                                    v185);
              }
              v177 = v182 == 0;
LABEL_370:
              if ( v177 )
              {
LABEL_371:
                LODWORD(v192) = ++v112;
                if ( v112 < *(_DWORD *)v111 )
                {
                  v101 = *(_DWORD *)&v190[4];
                  goto LABEL_216;
                }
                v18 = v259;
                v19 = v218;
                v20 = v219;
              }
              else
              {
                v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v19 = *(struct _GUID *)(*((_QWORD *)v111 + 1) + 16 * v113);
                v20 = v19;
              }
LABEL_374:
              v15 = v213;
              v16 = v212;
              v17 = v211;
LABEL_375:
              if ( v240 )
                *v240 = v18;
              if ( v15 )
                *v15 = v19;
              if ( v16 )
                *v16 = v20;
              if ( v17 )
                *v17 = v20;
              return 0LL;
            }
          }
          ++v164;
          v165 += 2;
          if ( v164 >= (int)v152 )
            goto LABEL_310;
        }
        ATL::_AtlRaiseException(0xC000008C, v150);
LABEL_391:
        ATL::_AtlRaiseException(0xC000008C, v30);
        __debugbreak();
      }
    }
LABEL_160:
    v95 = *((_QWORD *)v89 + 2);
    if ( !v95 )
      goto LABEL_176;
    v96 = 0;
    v97 = *(_DWORD *)(v95 + 8);
    if ( v97 <= 0 )
      goto LABEL_176;
    while ( *(_OWORD *)(*(_QWORD *)v95 + 16LL * v96) != *(_OWORD *)&v244 )
    {
      if ( ++v96 >= v97 )
        goto LABEL_176;
    }
    if ( v96 == -1 )
LABEL_176:
      v95 = 0LL;
    goto LABEL_177;
  }
  if ( CEndpointCharacteristics::AllowRawStreamCreation(a4, a7) )
  {
    v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    goto LABEL_375;
  }
  return 2290679847LL;
}
