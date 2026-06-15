/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180034510 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ECA9C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800052C0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000F900 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032140 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800348C0 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180034EA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18004DEFC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18004E2C8 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B36A8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800CFCB8 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D0E70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800D1464 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800D1950 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800D9544 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DA350 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180107658 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180108730 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=44
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *this,
        char a2,
        struct _GUID *a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct tWAVEFORMATEX *a8,
        struct tWAVEFORMATEX **a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12)
{
  __int64 v12; // rsi
  struct CEndpointCharacteristics *v13; // r13
  struct _GUID *v14; // rbx
  struct tWAVEFORMATEX *v15; // r14
  int ProposedConnectorFormatForProcessingMode; // r15d
  struct IMMDevice *v17; // rbx
  bool v18; // sf
  const struct tWAVEFORMATEX *v19; // r9
  struct _GUID v20; // xmm6
  __int64 *v21; // r9
  int v22; // ebx
  BOOL v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r11
  int v26; // edx
  int v27; // ecx
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // r9
  GUID v31; // xmm0
  BOOL v32; // ebx
  __int64 v33; // rcx
  char *v34; // rax
  __int64 v35; // r13
  struct _RTL_CRITICAL_SECTION *v36; // r15
  unsigned int v37; // edx
  __int64 v38; // rdi
  int v39; // ebx
  int v40; // r12d
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rax
  WORD *v44; // rcx
  __int64 v45; // rax
  int v46; // ebx
  struct tWAVEFORMATEX *v47; // rsi
  SystemEffectChainDescriptor *v48; // rcx
  int v49; // eax
  volatile signed __int32 **p_nAvgBytesPerSec; // rsi
  volatile signed __int32 *v51; // rbx
  __int64 v52; // r12
  char *v53; // rdi
  struct _RTL_CRITICAL_SECTION *v54; // r15
  int v55; // esi
  unsigned int v56; // ebx
  __int64 v57; // rax
  unsigned int v58; // ebx
  SystemEffectChainDescriptor *v59; // rcx
  int v60; // eax
  struct tWAVEFORMATEX *v61; // rbx
  __int64 v62; // rdi
  char *v63; // r13
  struct _RTL_CRITICAL_SECTION *v64; // r15
  unsigned int v65; // edx
  __int64 v66; // rdi
  int v67; // ebx
  int v68; // r12d
  __int64 v69; // rsi
  __int64 v70; // r15
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rax
  WORD *v76; // rcx
  __int64 v77; // rax
  int v78; // ebx
  struct tWAVEFORMATEX *v79; // rsi
  SystemEffectChainDescriptor *v80; // rcx
  int v81; // eax
  volatile signed __int32 **v82; // rsi
  volatile signed __int32 *v83; // rbx
  __int64 v84; // r9
  __int64 v85; // rdx
  int v86; // ecx
  signed int v87; // edx
  int v88; // ebx
  int v89; // ebx
  __int64 v90; // rcx
  int v91; // ecx
  __int64 v92; // r12
  __int64 v93; // rax
  char *v94; // r15
  char *v95; // rsi
  __int64 v96; // rdi
  unsigned int v97; // ebx
  __int64 v98; // rax
  unsigned int v99; // ebx
  SystemEffectChainDescriptor *v100; // rcx
  int v101; // eax
  char *v102; // rbx
  unsigned int v103; // edi
  unsigned int v104; // ebx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  int v109; // edi
  __int64 *v110; // rax
  _QWORD *v111; // r8
  _QWORD *v112; // rcx
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rsi
  int v116; // ebx
  void *v117; // rax
  _OWORD *v118; // rax
  int v119; // edi
  __int64 v120; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v121; // r14d
  BOOL v122; // ebx
  __int64 v123; // rcx
  char *v124; // rax
  char *v125; // r12
  struct _RTL_CRITICAL_SECTION *v126; // r14
  unsigned int v127; // edx
  volatile signed __int32 **v128; // r13
  __int64 v129; // rsi
  int v130; // ebx
  int v131; // r15d
  __int64 v132; // rdi
  __int64 v133; // r14
  __int64 v134; // rax
  volatile signed __int32 **v135; // rcx
  __int64 v136; // rax
  int v137; // ebx
  volatile signed __int32 **v138; // rdi
  SystemEffectChainDescriptor **v139; // rax
  int v140; // eax
  volatile signed __int32 **v141; // rdi
  volatile signed __int32 *v142; // rbx
  __int64 v143; // r12
  char *v144; // rsi
  char *v145; // r14
  __int64 v146; // rdi
  unsigned int v147; // ebx
  __int64 v148; // rax
  unsigned int v149; // ebx
  SystemEffectChainDescriptor **v150; // rax
  int v151; // eax
  char *v152; // rbx
  char *v153; // r12
  struct _RTL_CRITICAL_SECTION *v154; // r14
  unsigned int v155; // edx
  volatile signed __int32 **v156; // r13
  __int64 v157; // rdi
  int v158; // ebx
  int v159; // r15d
  __int64 v160; // rsi
  __int64 v161; // r14
  __int64 v162; // r9
  __int64 v163; // rdx
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // rax
  volatile signed __int32 **v167; // rcx
  __int64 v168; // rax
  int v169; // ebx
  volatile signed __int32 **v170; // rsi
  SystemEffectChainDescriptor **v171; // rax
  int v172; // eax
  volatile signed __int32 **v173; // rsi
  volatile signed __int32 *v174; // rbx
  int v175; // ecx
  __int64 v176; // r9
  __int64 v177; // rdx
  int DevicePipeFormat; // eax
  struct tWAVEFORMATEX *v179; // rbx
  int (*v180)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  void *v181; // rbx
  __int64 v182; // rdi
  struct tWAVEFORMATEX *v183; // rax
  struct tWAVEFORMATEX *v184; // rsi
  struct IAudioMediaType *v185; // rsi
  struct IAudioMediaType *v186; // rbx
  struct IAudioMediaType *v187; // rdi
  struct _GUID *v188; // rdx
  struct IAudioMediaType *v189; // r14
  const struct tWAVEFORMATEX *v190; // rax
  const struct tWAVEFORMATEX *v191; // rax
  const struct tWAVEFORMATEX *v192; // rax
  struct tWAVEFORMATEX *v193; // rax
  struct tWAVEFORMATEX *v194; // rax
  struct tWAVEFORMATEX *v195; // rax
  struct tWAVEFORMATEX *v196; // rax
  struct tWAVEFORMATEX **v198; // [rsp+28h] [rbp-E0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v199; // [rsp+48h] [rbp-C0h]
  void *Block; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v201; // [rsp+58h] [rbp-B0h]
  void *Src; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v203; // [rsp+68h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v204; // [rsp+70h] [rbp-98h] BYREF
  struct CEndpointCharacteristics *v205; // [rsp+78h] [rbp-90h]
  struct tWAVEFORMATEX *v206; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 **v207; // [rsp+88h] [rbp-80h] BYREF
  __int64 v208; // [rsp+90h] [rbp-78h]
  volatile signed __int32 **v209; // [rsp+98h] [rbp-70h] BYREF
  __int64 v210; // [rsp+A0h] [rbp-68h]
  struct tWAVEFORMATEX *v211; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v212; // [rsp+B0h] [rbp-58h]
  struct tWAVEFORMATEX *v213; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v214; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *v215; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v216; // [rsp+D0h] [rbp-38h]
  char *v217; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v218; // [rsp+E0h] [rbp-28h]
  char *v219; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v220; // [rsp+F0h] [rbp-18h]
  int v221; // [rsp+F8h] [rbp-10h]
  int v222; // [rsp+FCh] [rbp-Ch]
  struct IAudioMediaType *v223; // [rsp+100h] [rbp-8h] BYREF
  LPVOID pv; // [rsp+108h] [rbp+0h] BYREF
  struct IAudioMediaType *v225; // [rsp+110h] [rbp+8h] BYREF
  __int64 v226; // [rsp+118h] [rbp+10h]
  struct _GUID *v227; // [rsp+120h] [rbp+18h]
  LPVOID v228; // [rsp+128h] [rbp+20h] BYREF
  struct IAudioMediaType *v229; // [rsp+130h] [rbp+28h] BYREF
  char *v230; // [rsp+138h] [rbp+30h] BYREF
  char *v231; // [rsp+140h] [rbp+38h] BYREF
  char *v232; // [rsp+148h] [rbp+40h] BYREF
  char *v233; // [rsp+150h] [rbp+48h] BYREF
  char *v234; // [rsp+158h] [rbp+50h] BYREF
  struct IAudioMediaType *v235; // [rsp+160h] [rbp+58h] BYREF
  struct tWAVEFORMATEX *v236; // [rsp+168h] [rbp+60h]
  __int64 v237; // [rsp+170h] [rbp+68h] BYREF
  char *v238; // [rsp+178h] [rbp+70h] BYREF
  __m256i v239; // [rsp+180h] [rbp+78h] BYREF
  PROPVARIANT pvar; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v241; // [rsp+1A8h] [rbp+A0h]
  __int64 v242; // [rsp+1B0h] [rbp+A8h]
  PROPVARIANT v243; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v244; // [rsp+1C0h] [rbp+B8h]
  __int64 v245; // [rsp+1C8h] [rbp+C0h]
  PROPVARIANT v246; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v247; // [rsp+1D8h] [rbp+D0h]
  __int64 v248; // [rsp+1E0h] [rbp+D8h]
  struct tWAVEFORMATEX **v249; // [rsp+1E8h] [rbp+E0h]
  struct tWAVEFORMATEX **v250; // [rsp+1F0h] [rbp+E8h]
  __int64 v251; // [rsp+1F8h] [rbp+F0h]
  struct tWAVEFORMATEX **v252; // [rsp+200h] [rbp+F8h]
  struct IMMDevice *v253; // [rsp+208h] [rbp+100h]
  __m128i v254; // [rsp+218h] [rbp+110h]
  struct tWAVEFORMATEX **v255; // [rsp+228h] [rbp+120h]
  GUID v256; // [rsp+238h] [rbp+130h]
  __int128 v257; // [rsp+248h] [rbp+140h]
  __int64 v258; // [rsp+258h] [rbp+150h]
  __int64 v259; // [rsp+260h] [rbp+158h]
  struct _GUID v260; // [rsp+268h] [rbp+160h] BYREF
  struct _GUID v261; // [rsp+278h] [rbp+170h] BYREF
  struct _GUID v262; // [rsp+288h] [rbp+180h] BYREF
  struct _GUID v263; // [rsp+298h] [rbp+190h] BYREF
  struct _GUID v264; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct _GUID v265; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _GUID v266; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _GUID v267; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _GUID v268; // [rsp+2E8h] [rbp+1E0h] BYREF
  struct _GUID v269; // [rsp+2F8h] [rbp+1F0h] BYREF
  __m256i v270[3]; // [rsp+308h] [rbp+200h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v258 = -2LL;
  v12 = (int)a3;
  v199 = (int)a3;
  v13 = this;
  v205 = this;
  v14 = a7;
  v227 = a7;
  v255 = a9;
  v249 = a10;
  v252 = a11;
  v250 = a12;
  v15 = 0LL;
  v204 = 0LL;
  v203 = 0LL;
  v206 = 0LL;
  Src = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(a8, &v203);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_400;
    v253 = 0LL;
    v17 = (struct IMMDevice *)*((_QWORD *)v13 + 2);
    v253 = v17;
    ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->AddRef)(v17);
    if ( IsSPDIFFormat(a8) && (unsigned int)IsSPDIFEndpoint(v17) )
      ProposedConnectorFormatForProcessingMode = GetAcceptableSPDIFTypeForDevice(v17, a8, &v204, 0) != 0
                                               ? 0x88890008
                                               : 0;
    else
      ProposedConnectorFormatForProcessingMode = CloneWaveFormat(a8, &v204);
    if ( v17 )
      ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
    v18 = ProposedConnectorFormatForProcessingMode < 0;
LABEL_14:
    if ( v18 )
      goto LABEL_400;
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v203, (struct tWAVEFORMATEX **)&Src);
    goto LABEL_398;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v260 = *a6;
    ProposedConnectorFormatForProcessingMode = DeriveOffloadConnectorFormatFromStreamFormat(
                                                 this,
                                                 a8,
                                                 a3,
                                                 &v260,
                                                 (struct _GUID *)v198,
                                                 &v204);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_400;
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v204, &v206);
    ConvertPCMWfxToIEEEFloat(v206);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_400;
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v19, &v203);
    v18 = ProposedConnectorFormatForProcessingMode < 0;
    goto LABEL_14;
  }
  if ( a2 )
  {
    v266 = *a7;
    v267 = *a6;
    v268 = *a5;
    ProposedConnectorFormatForProcessingMode = DeriveConnectorFormatFromStreamFormat(
                                                 this,
                                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                                                 a8,
                                                 &v268,
                                                 &v267,
                                                 &v266,
                                                 1,
                                                 &v204);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_400;
    v235 = 0LL;
    v185 = 0LL;
    v229 = 0LL;
    v186 = 0LL;
    v223 = 0LL;
    v187 = 0LL;
    v225 = 0LL;
    ProposedConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                                 v204,
                                                 (unsigned int)v204->cbSize + 18,
                                                 &v235,
                                                 0.0,
                                                 0);
    v189 = v235;
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_389;
    ProposedConnectorFormatForProcessingMode = DeriveDevicePipeFormatFromConnectorFormat(v13, v188, v199, v235, &v229);
    v185 = v229;
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_389;
    v269 = *a6;
    ProposedConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(v13, &v269, v199, v229, &v225, &v223);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
    {
      v187 = v225;
    }
    else
    {
      v190 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v185->lpVtbl->GetAudioFormat)(v185);
      ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v190, (struct tWAVEFORMATEX **)&Src);
      v187 = v225;
      if ( ProposedConnectorFormatForProcessingMode >= 0 )
      {
        v191 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v225->lpVtbl->GetAudioFormat)(v225);
        ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v191, &v206);
        v186 = v223;
        if ( ProposedConnectorFormatForProcessingMode >= 0 )
        {
          if ( v223 )
          {
            v192 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v223->lpVtbl->GetAudioFormat)(v223);
            ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v192, &v203);
          }
          else
          {
            ProposedConnectorFormatForProcessingMode = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, &v203);
          }
        }
        goto LABEL_389;
      }
    }
    v186 = v223;
LABEL_389:
    if ( v187 )
      ((void (__fastcall *)(struct IAudioMediaType *))v187->lpVtbl->Release)(v187);
    if ( v186 )
      ((void (__fastcall *)(struct IAudioMediaType *))v186->lpVtbl->Release)(v186);
    if ( v185 )
      ((void (__fastcall *)(struct IAudioMediaType *))v185->lpVtbl->Release)(v185);
    if ( v189 )
      ((void (__fastcall *)(struct IAudioMediaType *))v189->lpVtbl->Release)(v189);
    v15 = 0LL;
    goto LABEL_398;
  }
  v20 = *a7;
  v254 = *(__m128i *)a7;
  v259 = 0LL;
  pv = 0LL;
  v228 = 0LL;
  v204 = 0LL;
  Src = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                               *((_QWORD *)this + 2),
                                               &v228);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_359;
  v261 = v20;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               v13,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                               &v261,
                                               (struct tWAVEFORMATEX **)&pv);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    v22 = 0;
    if ( (_DWORD)v12 != 2 )
      v22 = v12;
    if ( v22 )
      goto LABEL_28;
    v23 = 1;
    v24 = *((_QWORD *)v13 + 8);
    if ( !v24 )
      goto LABEL_28;
    pvar = 0LL;
    v241 = 0LL;
    v242 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
           v24,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v23 = v241 == 0;
    }
    PropVariantClear(&pvar);
    if ( v23 )
LABEL_28:
      v25 = (__int64)v13 + 16 * v22 + 72;
    else
      v25 = (__int64)v13 + 136;
    v26 = *(_DWORD *)(v25 + 8);
    if ( v26 )
    {
      v27 = 0;
      if ( v26 <= 0 )
        goto LABEL_35;
      v28 = *(_QWORD *)v25;
      while ( *(_QWORD *)(v28 + 16LL * v27) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v28 + 16LL * v27 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v27 >= v26 )
          goto LABEL_35;
      }
      if ( v27 == -1 )
      {
LABEL_35:
        v29 = 0;
        if ( v26 <= 0 )
          goto LABEL_40;
        v30 = *(_QWORD *)v25;
        while ( *(_QWORD *)(v30 + 16LL * v29) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v30 + 16LL * v29 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v29 >= v26 )
            goto LABEL_40;
        }
        if ( v29 == -1 )
LABEL_40:
          v31 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25, 0LL);
        else
          v31 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v31 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v239.m256i_i64[0] = (__int64)v13;
    v239.m256i_i32[2] = v12;
    *(GUID *)((char *)&v239.m256i_u64[1] + 4) = v31;
    v270[0] = v239;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
                                                 v13,
                                                 (__int64)v270,
                                                 (__int64)&pv);
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_356;
  if ( v254.m128i_i64[0] != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
    || _mm_srli_si128(v254, 8).m128i_u64[0] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
  {
    goto LABEL_353;
  }
  Block = 0LL;
  v201 = 0LL;
  v222 = 0;
  v256 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (_DWORD)v12 )
    goto LABEL_57;
  v32 = 1;
  v33 = *((_QWORD *)v13 + 8);
  if ( !v33 )
    goto LABEL_57;
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v33 + 40LL))(
         v33,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v243) >= 0
    && (_WORD)v243 == 19 )
  {
    v32 = v244 == 0;
  }
  PropVariantClear(&v243);
  if ( v32 )
  {
LABEL_57:
    v226 = 96 * v12;
    v35 = (__int64)v205 + 96 * v12 + 232;
    if ( *(_BYTE *)(v35 + 52) )
    {
      v36 = (struct _RTL_CRITICAL_SECTION *)(v35 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v35 + 56));
      v237 = v35 + 56;
      v213 = 0LL;
      v37 = 0;
      v38 = 0LL;
      v214 = 0LL;
      v39 = 0;
      v40 = 0;
      if ( *(int *)(v35 + 40) > 0 )
      {
        v41 = 0LL;
        while ( 1 )
        {
          if ( v41 < 0 || v40 >= *(_DWORD *)(v35 + 40) )
          {
LABEL_402:
            ATL::_AtlRaiseException(0xC000008C, v37);
            __debugbreak();
          }
          v42 = *(_QWORD *)(v35 + 32);
          if ( (_DWORD)v38 == v39 )
          {
            if ( v39 )
            {
              v39 = 2 * v38;
              if ( (v38 & 0x40000000) != 0 )
                goto LABEL_118;
            }
            else
            {
              v39 = 1;
            }
            if ( (unsigned __int64)v39 > 0x7FFFFFF
              || (v43 = _o__recalloc(v15, v39, 16LL), (v15 = (struct tWAVEFORMATEX *)v43) == 0LL) )
            {
LABEL_118:
              v71 = 2147942414LL;
              v72 = 502LL;
              goto LABEL_119;
            }
            HIDWORD(v214) = v39;
            v213 = (struct tWAVEFORMATEX *)v43;
            v37 = 0;
          }
          v44 = &v15->wFormatTag + 8 * (int)v38;
          if ( v44 )
          {
            *(_QWORD *)v44 = 0LL;
            *((_QWORD *)v44 + 1) = 0LL;
            v45 = *(_QWORD *)(v41 + v42 + 8);
            if ( v45 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
              v39 = HIDWORD(v214);
              LODWORD(v38) = v214;
              v15 = v213;
            }
            *(_QWORD *)v44 = *(_QWORD *)(v41 + v42);
            *((_QWORD *)v44 + 1) = *(_QWORD *)(v41 + v42 + 8);
          }
          v38 = (unsigned int)(v38 + 1);
          LODWORD(v214) = v38;
          ++v40;
          v41 += 16LL;
          if ( v40 >= *(_DWORD *)(v35 + 40) )
          {
            v36 = (struct _RTL_CRITICAL_SECTION *)(v35 + 56);
            break;
          }
        }
      }
      v46 = 0;
      if ( (int)v38 <= 0 )
      {
LABEL_82:
        if ( v15 )
        {
          if ( (int)v38 > 0 )
          {
            p_nAvgBytesPerSec = (volatile signed __int32 **)&v15->nAvgBytesPerSec;
            do
            {
              v51 = *p_nAvgBytesPerSec;
              if ( *p_nAvgBytesPerSec )
              {
                if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
                  if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
                }
              }
              p_nAvgBytesPerSec += 2;
              --v38;
            }
            while ( v38 );
            v15 = v213;
          }
          free(v15);
          v15 = 0LL;
          v213 = 0LL;
        }
        v214 = 0LL;
        if ( v36 )
          LeaveCriticalSection(v36);
      }
      else
      {
        v47 = v15;
        while ( 1 )
        {
          if ( v46 < 0 || v46 >= (int)v38 )
          {
            ATL::_AtlRaiseException(0xC000008C, v37);
LABEL_404:
            ATL::_AtlRaiseException(0xC000008C, v65);
            __debugbreak();
          }
          if ( *(_BYTE *)(*(_QWORD *)&v47->wFormatTag + 20LL) )
          {
            v48 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v213,
                                                     (unsigned int)v46);
            v49 = SystemEffectChainDescriptor::Resolve(v48, (struct SystemEffectDescriptor *)v35);
            if ( v49 < 0 )
              break;
          }
          ++v46;
          v47 = (struct tWAVEFORMATEX *)((char *)v47 + 16);
          if ( v46 >= (int)v38 )
            goto LABEL_82;
        }
        v71 = (unsigned int)v49;
        v72 = 508LL;
LABEL_119:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v72,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v71,
          (int)v198);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v213);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v237);
        v15 = 0LL;
      }
    }
    v52 = v226;
    v53 = (char *)v205 + v226 + 616;
    if ( v53[52] )
    {
      v54 = (struct _RTL_CRITICAL_SECTION *)(v53 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v53 + 56));
      v238 = v53 + 56;
      v215 = v15;
      v55 = 0;
      v216 = 0LL;
      v56 = 0;
      if ( *((int *)v53 + 10) > 0 )
      {
        while ( 1 )
        {
          v57 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v53 + 32, v56);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v215,
                                v57) )
            break;
          if ( (signed int)++v56 >= *((_DWORD *)v53 + 10) )
          {
            v55 = v216;
            v15 = v215;
            goto LABEL_99;
          }
        }
        v73 = 2147942414LL;
        v74 = 502LL;
        goto LABEL_122;
      }
LABEL_99:
      v58 = 0;
      if ( v55 > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v215,
                                       v58)
                        + 20LL) )
          {
            v59 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v215,
                                                     v58);
            v60 = SystemEffectChainDescriptor::Resolve(v59, (struct SystemEffectDescriptor *)v53);
            if ( v60 < 0 )
              break;
          }
          if ( (int)++v58 >= v55 )
            goto LABEL_103;
        }
        v73 = (unsigned int)v60;
        v74 = 508LL;
LABEL_122:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v74,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v73,
          (int)v198);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v215);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v238);
        goto LABEL_110;
      }
LABEL_103:
      if ( v15 )
      {
        if ( v55 > 0 )
        {
          v61 = v15;
          v62 = (unsigned int)v55;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v61);
            v61 = (struct tWAVEFORMATEX *)((char *)v61 + 16);
            --v62;
          }
          while ( v62 );
        }
        free(v15);
        v215 = 0LL;
      }
      v216 = 0LL;
      if ( v54 )
        LeaveCriticalSection(v54);
    }
LABEL_110:
    v63 = (char *)v205 + v52 + 1000;
    if ( v63[52] )
    {
      v64 = (struct _RTL_CRITICAL_SECTION *)(v63 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v63 + 56));
      v230 = v63 + 56;
      v65 = 0;
      v15 = 0LL;
      v211 = 0LL;
      v66 = 0LL;
      v212 = 0LL;
      v67 = 0;
      v68 = 0;
      if ( *((int *)v63 + 10) > 0 )
      {
        v69 = 0LL;
        while ( 1 )
        {
          if ( v69 < 0 || v68 >= *((_DWORD *)v63 + 10) )
            goto LABEL_404;
          v70 = *((_QWORD *)v63 + 4);
          if ( (_DWORD)v66 == v67 )
          {
            if ( v67 )
            {
              v67 = 2 * v66;
              if ( (v66 & 0x40000000) != 0 )
                goto LABEL_154;
            }
            else
            {
              v67 = 1;
            }
            if ( (unsigned __int64)v67 > 0x7FFFFFF
              || (v75 = _o__recalloc(v15, v67, 16LL), (v15 = (struct tWAVEFORMATEX *)v75) == 0LL) )
            {
LABEL_154:
              v84 = 2147942414LL;
              v85 = 502LL;
              goto LABEL_155;
            }
            HIDWORD(v212) = v67;
            v211 = (struct tWAVEFORMATEX *)v75;
            v65 = 0;
          }
          v76 = &v15->wFormatTag + 8 * (int)v66;
          if ( v76 )
          {
            *(_QWORD *)v76 = 0LL;
            *((_QWORD *)v76 + 1) = 0LL;
            v77 = *(_QWORD *)(v69 + v70 + 8);
            if ( v77 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v77 + 8));
              v67 = HIDWORD(v212);
              LODWORD(v66) = v212;
              v15 = v211;
            }
            *(_QWORD *)v76 = *(_QWORD *)(v69 + v70);
            *((_QWORD *)v76 + 1) = *(_QWORD *)(v69 + v70 + 8);
          }
          v66 = (unsigned int)(v66 + 1);
          LODWORD(v212) = v66;
          ++v68;
          v69 += 16LL;
          if ( v68 >= *((_DWORD *)v63 + 10) )
          {
            v64 = (struct _RTL_CRITICAL_SECTION *)(v63 + 56);
            break;
          }
        }
      }
      v78 = 0;
      if ( (int)v66 <= 0 )
      {
LABEL_141:
        if ( v15 )
        {
          if ( (int)v66 > 0 )
          {
            v82 = (volatile signed __int32 **)&v15->nAvgBytesPerSec;
            do
            {
              v83 = *v82;
              if ( *v82 )
              {
                if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v83)(v83);
                  if ( _InterlockedExchangeAdd(v83 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
                }
              }
              v82 += 2;
              --v66;
            }
            while ( v66 );
            v15 = v211;
          }
          free(v15);
          v15 = 0LL;
          v211 = 0LL;
        }
        v212 = 0LL;
        if ( v64 )
          LeaveCriticalSection(v64);
        goto LABEL_157;
      }
      v79 = v15;
      while ( 1 )
      {
        if ( v78 < 0 || v78 >= (int)v66 )
        {
          ATL::_AtlRaiseException(0xC000008C, v65);
LABEL_406:
          ATL::_AtlRaiseException(0xC000008C, v87);
          __debugbreak();
        }
        if ( *(_BYTE *)(*(_QWORD *)&v79->wFormatTag + 20LL) )
        {
          v80 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v211,
                                                   (unsigned int)v78);
          v81 = SystemEffectChainDescriptor::Resolve(v80, (struct SystemEffectDescriptor *)v63);
          if ( v81 < 0 )
            break;
        }
        ++v78;
        v79 = (struct tWAVEFORMATEX *)((char *)v79 + 16);
        if ( v78 >= (int)v66 )
          goto LABEL_141;
      }
      v84 = (unsigned int)v81;
      v85 = 508LL;
LABEL_155:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v85,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v84,
        (int)v198);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v211);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v230);
    }
    v15 = 0LL;
LABEL_157:
    LODWORD(v12) = v199;
    v13 = v205;
    v34 = (char *)v205 + 16 * v199 + 72;
    goto LABEL_158;
  }
  v34 = (char *)v13 + 136;
LABEL_158:
  v86 = (int)v15;
  v87 = *((_DWORD *)v34 + 2);
  if ( v87 <= 0 )
    goto LABEL_162;
  v21 = *(__int64 **)v34;
  while ( *(_OWORD *)&v21[2 * v86] != *(_OWORD *)&v256 )
  {
    if ( ++v86 >= v87 )
      goto LABEL_162;
  }
  if ( v86 == -1 )
  {
LABEL_162:
    v88 = (int)v15;
    goto LABEL_349;
  }
  v89 = 1;
  v90 = *((_QWORD *)v13 + 8);
  if ( !v90 )
    goto LABEL_171;
  v246 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v90 + 40LL))(
         v90,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v246) >= 0
    && (_WORD)v246 == 19 )
  {
    v89 = (int)v15;
    LOBYTE(v89) = (_DWORD)v247 == 0;
  }
  PropVariantClear(&v246);
  if ( v89 || (v91 = (int)v15, (_DWORD)v12 == 3) )
LABEL_171:
    v91 = 1;
  v92 = (int)v12;
  v93 = 96LL * (int)v12;
  v94 = (char *)v13 + v93 + 616;
  if ( !v91 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, (char *)v13 + v93 + 616);
    if ( (_DWORD)v201 != *((_DWORD *)v94 + 2) )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v198);
    goto LABEL_226;
  }
  if ( v94[52] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v94 + 56));
    v231 = v94 + 56;
    v95 = 0LL;
    v217 = 0LL;
    v96 = 0LL;
    v218 = 0LL;
    v97 = 0;
    if ( *((int *)v94 + 10) <= 0 )
    {
LABEL_180:
      v99 = 0;
      if ( (int)v96 <= 0 )
      {
LABEL_184:
        if ( v95 )
        {
          if ( (int)v96 > 0 )
          {
            v102 = v95;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v102);
              v102 += 16;
              --v96;
            }
            while ( v96 );
          }
          free(v95);
          v217 = 0LL;
        }
        v218 = 0LL;
        if ( v94 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v94 + 56));
        goto LABEL_191;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v217, v99)
                      + 20LL) )
        {
          v100 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v217,
                                                    v99);
          v101 = SystemEffectChainDescriptor::Resolve(v100, (struct SystemEffectDescriptor *)v94);
          if ( v101 < 0 )
            break;
        }
        if ( (int)++v99 >= (int)v96 )
          goto LABEL_184;
      }
      v113 = (unsigned int)v101;
      v114 = 508LL;
    }
    else
    {
      while ( 1 )
      {
        v98 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v94 + 32, v97);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v217,
                              v98) )
          break;
        if ( (signed int)++v97 >= *((_DWORD *)v94 + 10) )
        {
          v96 = (unsigned int)v218;
          v95 = v217;
          goto LABEL_180;
        }
      }
      v113 = 2147942414LL;
      v114 = 502LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v114,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v113,
      (int)v198);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v217);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v231);
LABEL_191:
    v15 = 0LL;
  }
  v103 = (unsigned int)v15;
  if ( *((int *)v94 + 10) > 0 )
  {
    do
    {
      v104 = (unsigned int)v15;
      if ( *(int *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v94 + 32, v103)
                  + 8LL) > 0 )
      {
        do
        {
          v105 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v94 + 32, v103);
          v106 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v105, v104);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&Block, v106) == -1 )
          {
            v107 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v94 + 32, v103);
            v108 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v107, v104);
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, v108) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x248,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                (int)v198);
              goto LABEL_226;
            }
          }
          ++v104;
        }
        while ( (signed int)v104 < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                            v94 + 32,
                                                            v103)
                                             + 8LL) );
      }
      ++v103;
    }
    while ( (signed int)v103 < *((_DWORD *)v94 + 10) );
  }
  v21 = (__int64 *)*((_QWORD *)v94 + 2);
  if ( v21 )
  {
    v109 = (int)v15;
    if ( *((int *)v21 + 2) > 0 )
    {
      v110 = (__int64 *)*((_QWORD *)v94 + 2);
      while ( 1 )
      {
        if ( v109 < 0 || v109 >= *((_DWORD *)v110 + 2) )
        {
          ATL::_AtlRaiseException(0xC000008C, v87);
LABEL_408:
          ATL::_AtlRaiseException(0xC000008C, v127);
          __debugbreak();
        }
        v111 = (_QWORD *)(*v110 + 16LL * v109);
        v87 = 0;
        if ( (int)v201 <= 0 )
          goto LABEL_213;
        while ( 1 )
        {
          v112 = (char *)Block + 16 * v87;
          if ( *v112 == *v111 && v112[1] == v111[1] )
            break;
          if ( ++v87 >= (int)v201 )
            goto LABEL_213;
        }
        if ( v87 == -1 )
        {
LABEL_213:
          if ( v109 >= *((_DWORD *)v21 + 2) )
            goto LABEL_406;
          v115 = *v21;
          if ( (_DWORD)v201 == HIDWORD(v201) )
          {
            if ( HIDWORD(v201) )
            {
              v116 = 2 * v201;
              if ( (v201 & 0x40000000) != 0 )
                goto LABEL_237;
            }
            else
            {
              v116 = 1;
            }
            if ( (unsigned __int64)v116 > 0x7FFFFFF || (v117 = (void *)_o__recalloc(Block, v116, 16LL)) == 0LL )
            {
LABEL_237:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x254,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                (int)v198);
LABEL_225:
              v15 = 0LL;
              break;
            }
            HIDWORD(v201) = v116;
            Block = v117;
          }
          v118 = (char *)Block + 16 * (int)v201;
          if ( v118 )
            *v118 = *(_OWORD *)((char *)&v15->wFormatTag + v115);
          LODWORD(v201) = v201 + 1;
        }
        ++v109;
        v15 = (struct tWAVEFORMATEX *)((char *)v15 + 16);
        v21 = (__int64 *)*((_QWORD *)v94 + 2);
        v110 = v21;
        if ( v109 >= *((_DWORD *)v21 + 2) )
          goto LABEL_225;
      }
    }
  }
LABEL_226:
  v119 = (int)v15;
  v221 = (int)v15;
  if ( (int)v201 > 0 )
  {
    v120 = (__int64)v15;
    v226 = (__int64)v15;
    v121 = v199;
    while ( 1 )
    {
      if ( v120 < 0 || v119 >= (int)v201 )
      {
        ATL::_AtlRaiseException(0xC000008C, v87);
        goto LABEL_402;
      }
      v257 = *((_OWORD *)Block + v120);
      if ( v121 )
        break;
      v122 = 1;
      v123 = *((_QWORD *)v13 + 8);
      if ( !v123 )
        break;
      memset(&v239, 0, 24);
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, __m256i *))(*(_QWORD *)v123 + 40LL))(
             v123,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v239) >= 0
        && v239.m256i_i16[0] == 19 )
      {
        v122 = v239.m256i_i32[2] == 0;
      }
      PropVariantClear((PROPVARIANT *)&v239);
      if ( v122 )
        break;
      v124 = (char *)v13 + 136;
LABEL_337:
      v175 = 0;
      v87 = *((_DWORD *)v124 + 2);
      if ( v87 <= 0 )
        goto LABEL_341;
      v21 = *(__int64 **)v124;
      while ( *(_OWORD *)&v21[2 * v175] != v257 )
      {
        if ( ++v175 >= v87 )
          goto LABEL_341;
      }
      if ( v175 == -1 )
      {
LABEL_341:
        v88 = 1;
        v15 = 0LL;
        goto LABEL_349;
      }
      v221 = ++v119;
      v226 = ++v120;
      if ( v119 >= (int)v201 )
      {
        v15 = 0LL;
        goto LABEL_348;
      }
    }
    v251 = 96 * v92;
    v125 = (char *)v13 + 96 * v92 + 232;
    if ( v125[52] )
    {
      v126 = (struct _RTL_CRITICAL_SECTION *)(v125 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v125 + 56));
      v232 = v125 + 56;
      v127 = 0;
      v128 = 0LL;
      v209 = 0LL;
      v129 = 0LL;
      v210 = 0LL;
      v130 = 0;
      v131 = 0;
      if ( *((int *)v125 + 10) > 0 )
      {
        v132 = 0LL;
        while ( 1 )
        {
          if ( v132 < 0 || v131 >= *((_DWORD *)v125 + 10) )
            goto LABEL_408;
          v133 = *((_QWORD *)v125 + 4);
          if ( (_DWORD)v129 == v130 )
          {
            if ( v130 )
            {
              v130 = 2 * v129;
              if ( (v129 & 0x40000000) != 0 )
                goto LABEL_300;
            }
            else
            {
              v130 = 1;
            }
            if ( (unsigned __int64)v130 > 0x7FFFFFF
              || (v134 = _o__recalloc(v128, v130, 16LL), (v128 = (volatile signed __int32 **)v134) == 0LL) )
            {
LABEL_300:
              v162 = 2147942414LL;
              v163 = 502LL;
              goto LABEL_301;
            }
            HIDWORD(v210) = v130;
            v209 = (volatile signed __int32 **)v134;
            v127 = 0;
          }
          v135 = &v128[2 * (int)v129];
          if ( v135 )
          {
            *v135 = 0LL;
            v135[1] = 0LL;
            v136 = *(_QWORD *)(v132 + v133 + 8);
            if ( v136 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v136 + 8));
              v130 = HIDWORD(v210);
              LODWORD(v129) = v210;
              v128 = v209;
            }
            *v135 = *(volatile signed __int32 **)(v132 + v133);
            v135[1] = *(volatile signed __int32 **)(v132 + v133 + 8);
          }
          v129 = (unsigned int)(v129 + 1);
          LODWORD(v210) = v129;
          ++v131;
          v132 += 16LL;
          if ( v131 >= *((_DWORD *)v125 + 10) )
          {
            v126 = (struct _RTL_CRITICAL_SECTION *)(v125 + 56);
            break;
          }
        }
      }
      v137 = 0;
      if ( (int)v129 <= 0 )
      {
LABEL_263:
        if ( v128 )
        {
          if ( (int)v129 > 0 )
          {
            v141 = v128 + 1;
            do
            {
              v142 = *v141;
              if ( *v141 )
              {
                if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v142)(v142);
                  if ( _InterlockedExchangeAdd(v142 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v142 + 8LL))(v142);
                }
              }
              v141 += 2;
              --v129;
            }
            while ( v129 );
            v128 = v209;
          }
          free(v128);
          v209 = 0LL;
        }
        v210 = 0LL;
        if ( v126 )
          LeaveCriticalSection(v126);
      }
      else
      {
        v138 = v128;
        while ( 1 )
        {
          if ( v137 < 0 || v137 >= (int)v129 )
          {
            ATL::_AtlRaiseException(0xC000008C, v127);
LABEL_410:
            ATL::_AtlRaiseException(0xC000008C, v155);
            __debugbreak();
          }
          if ( *((_BYTE *)*v138 + 20) )
          {
            v139 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v209,
                                                     (unsigned int)v137);
            v140 = SystemEffectChainDescriptor::Resolve(*v139, (struct SystemEffectDescriptor *)v125);
            if ( v140 < 0 )
              break;
          }
          ++v137;
          v138 += 2;
          if ( v137 >= (int)v129 )
            goto LABEL_263;
        }
        v162 = (unsigned int)v140;
        v163 = 508LL;
LABEL_301:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v163,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v162,
          (int)v198);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v209);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v232);
      }
      v13 = v205;
    }
    v143 = v251;
    v144 = (char *)v13 + v251 + 616;
    if ( v144[52] )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v144 + 56));
      v233 = v144 + 56;
      v145 = 0LL;
      v219 = 0LL;
      v146 = 0LL;
      v220 = 0LL;
      v147 = 0;
      if ( *((int *)v144 + 10) <= 0 )
      {
LABEL_281:
        v149 = 0;
        if ( (int)v146 <= 0 )
        {
LABEL_285:
          if ( v145 )
          {
            if ( (int)v146 > 0 )
            {
              v152 = v145;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v152);
                v152 += 16;
                --v146;
              }
              while ( v146 );
            }
            free(v145);
            v219 = 0LL;
          }
          v220 = 0LL;
          if ( v144 != (char *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v144 + 56));
          goto LABEL_292;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v219,
                                       v149)
                        + 20LL) )
          {
            v150 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v219,
                                                     v149);
            v151 = SystemEffectChainDescriptor::Resolve(*v150, (struct SystemEffectDescriptor *)v144);
            if ( v151 < 0 )
              break;
          }
          if ( (int)++v149 >= (int)v146 )
            goto LABEL_285;
        }
        v164 = (unsigned int)v151;
        v165 = 508LL;
      }
      else
      {
        while ( 1 )
        {
          v148 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v144 + 32, v147);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v219,
                                v148) )
            break;
          if ( (signed int)++v147 >= *((_DWORD *)v144 + 10) )
          {
            v146 = (unsigned int)v220;
            v145 = v219;
            goto LABEL_281;
          }
        }
        v164 = 2147942414LL;
        v165 = 502LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v165,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v164,
        (int)v198);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v219);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v233);
    }
LABEL_292:
    v153 = (char *)v13 + v143 + 1000;
    if ( v153[52] )
    {
      v154 = (struct _RTL_CRITICAL_SECTION *)(v153 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v153 + 56));
      v234 = v153 + 56;
      v155 = 0;
      v156 = 0LL;
      v207 = 0LL;
      v157 = 0LL;
      v208 = 0LL;
      v158 = 0;
      v159 = 0;
      if ( *((int *)v153 + 10) > 0 )
      {
        v160 = 0LL;
        while ( 1 )
        {
          if ( v160 < 0 || v159 >= *((_DWORD *)v153 + 10) )
            goto LABEL_410;
          v161 = *((_QWORD *)v153 + 4);
          if ( (_DWORD)v157 == v158 )
          {
            if ( v158 )
            {
              v158 = 2 * v157;
              if ( (v157 & 0x40000000) != 0 )
                goto LABEL_342;
            }
            else
            {
              v158 = 1;
            }
            if ( (unsigned __int64)v158 > 0x7FFFFFF
              || (v166 = _o__recalloc(v156, v158, 16LL), (v156 = (volatile signed __int32 **)v166) == 0LL) )
            {
LABEL_342:
              v176 = 2147942414LL;
              v177 = 502LL;
              goto LABEL_343;
            }
            HIDWORD(v208) = v158;
            v207 = (volatile signed __int32 **)v166;
            v155 = 0;
          }
          v167 = &v156[2 * (int)v157];
          if ( v167 )
          {
            *v167 = 0LL;
            v167[1] = 0LL;
            v168 = *(_QWORD *)(v160 + v161 + 8);
            if ( v168 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v168 + 8));
              v158 = HIDWORD(v208);
              LODWORD(v157) = v208;
              v156 = v207;
            }
            *v167 = *(volatile signed __int32 **)(v160 + v161);
            v167[1] = *(volatile signed __int32 **)(v160 + v161 + 8);
          }
          v157 = (unsigned int)(v157 + 1);
          LODWORD(v208) = v157;
          ++v159;
          v160 += 16LL;
          if ( v159 >= *((_DWORD *)v153 + 10) )
          {
            v154 = (struct _RTL_CRITICAL_SECTION *)(v153 + 56);
            break;
          }
        }
      }
      v169 = 0;
      if ( (int)v157 <= 0 )
      {
LABEL_323:
        if ( v156 )
        {
          if ( (int)v157 > 0 )
          {
            v173 = v156 + 1;
            do
            {
              v174 = *v173;
              if ( *v173 )
              {
                if ( _InterlockedExchangeAdd(v174 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v174)(v174);
                  if ( _InterlockedExchangeAdd(v174 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v174 + 8LL))(v174);
                }
              }
              v173 += 2;
              --v157;
            }
            while ( v157 );
            v156 = v207;
          }
          free(v156);
          v207 = 0LL;
        }
        v208 = 0LL;
        if ( v154 )
          LeaveCriticalSection(v154);
      }
      else
      {
        v170 = v156;
        while ( 1 )
        {
          if ( v169 < 0 || v169 >= (int)v157 )
          {
            ATL::_AtlRaiseException(0xC000008C, v155);
            JUMPOUT(0x1800233B7LL);
          }
          if ( *((_BYTE *)*v170 + 20) )
          {
            v171 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v207,
                                                     (unsigned int)v169);
            v172 = SystemEffectChainDescriptor::Resolve(*v171, (struct SystemEffectDescriptor *)v153);
            if ( v172 < 0 )
              break;
          }
          ++v169;
          v170 += 2;
          if ( v169 >= (int)v157 )
            goto LABEL_323;
        }
        v176 = (unsigned int)v172;
        v177 = 508LL;
LABEL_343:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v177,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v176,
          (int)v198);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v207);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v234);
      }
      v13 = v205;
    }
    v92 = v199;
    v124 = (char *)v13 + 16 * v199 + 72;
    v119 = v221;
    v120 = v226;
    v121 = v199;
    goto LABEL_337;
  }
LABEL_348:
  v88 = v222;
LABEL_349:
  if ( Block )
  {
    free(Block);
    Block = v15;
  }
  v201 = 0LL;
  LODWORD(v12) = v199;
  if ( v88 )
  {
    v262 = (struct _GUID)v254;
    DevicePipeFormat = CEndpointCharacteristics::GetDevicePipeFormat(
                         v13,
                         v199,
                         &v262,
                         (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v21,
                         (struct tWAVEFORMATEX **)&Src);
    goto LABEL_354;
  }
LABEL_353:
  v263 = (struct _GUID)v254;
  DevicePipeFormat = CEndpointCharacteristics::GetMixFormat(
                       v13,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                       &v263,
                       (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v21,
                       (struct tWAVEFORMATEX **)&Src);
LABEL_354:
  ProposedConnectorFormatForProcessingMode = DevicePipeFormat;
  if ( DevicePipeFormat < 0 )
  {
LABEL_356:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_358;
  }
  v204 = (struct tWAVEFORMATEX *)pv;
LABEL_358:
  v14 = v227;
LABEL_359:
  if ( v228 )
  {
    CoTaskMemFree(v228);
    v228 = v15;
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        57LL,
        &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
        (unsigned int)ProposedConnectorFormatForProcessingMode);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 7774, ProposedConnectorFormatForProcessingMode);
  }
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    if ( *(_QWORD *)&v14->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
      && *(_QWORD *)v14->Data4 == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
    {
      v236 = v15;
      v179 = (struct tWAVEFORMATEX *)*((_QWORD *)v13 + 2);
      v236 = v179;
      (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v179->wFormatTag + 8LL))(v179);
      v264 = *a5;
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMixFormat(
                                                   v13,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                                   &v264,
                                                   v180,
                                                   &v206);
      if ( v179 )
      {
        v236 = v15;
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v179->wFormatTag + 16LL))(v179);
      }
    }
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      v265 = *a5;
      if ( (int)CEndpointCharacteristics::GetStreamGroupFormat(
                  v13,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                  &v265,
                  &v203) < 0
        || !v203 )
      {
        v181 = Src;
        v182 = *((unsigned __int16 *)Src + 8);
        v183 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v182 + 18);
        v184 = v183;
        if ( v183 )
        {
          memcpy_0(v183, v181, v182 + 18);
          ProposedConnectorFormatForProcessingMode = (int)v15;
          v203 = v184;
        }
        else
        {
          ProposedConnectorFormatForProcessingMode = -2147024882;
          v203 = 0LL;
        }
      }
LABEL_398:
      if ( ProposedConnectorFormatForProcessingMode >= 0 )
      {
        v193 = v204;
        v204 = v15;
        *v250 = v193;
        v194 = v203;
        v203 = v15;
        *v249 = v194;
        v195 = v206;
        v206 = v15;
        *v255 = v195;
        v196 = (struct tWAVEFORMATEX *)Src;
        Src = v15;
        *v252 = v196;
      }
    }
  }
LABEL_400:
  CoTaskMemFree(Src);
  Src = v15;
  CoTaskMemFree(v206);
  v206 = v15;
  CoTaskMemFree(v203);
  v203 = v15;
  CoTaskMemFree(v204);
  v204 = v15;
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
