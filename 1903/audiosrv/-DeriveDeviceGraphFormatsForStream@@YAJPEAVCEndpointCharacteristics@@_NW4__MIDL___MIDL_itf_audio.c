/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x180048810 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F63A4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800F85FC (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800015C0 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800058E8 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006254 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180006544 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007820 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009480 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E1B0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180017BB0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800180D0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800183D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18001BBA8 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180037F34 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18003E8BC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180056C84 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180061D3C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB7A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C1EC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800DE858 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800E4C20 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800E5A04 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     wil::details::lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___::_lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___ @ 0x1800EB8B0 (wil--details--lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___--_lambda_call__lambda_0f4e.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801152C4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115A90 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=47
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
  __int64 v12; // r14
  struct CEndpointCharacteristics *v13; // r13
  struct _GUID *v14; // rbx
  struct tWAVEFORMATEX **v15; // rsi
  volatile signed __int32 **v16; // r15
  struct IMMDevice *v17; // rbx
  bool v18; // sf
  const struct tWAVEFORMATEX *v19; // r9
  int v20; // r12d
  int v21; // ebx
  BOOL v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r11
  int v25; // edx
  int v26; // ecx
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // r9
  GUID v30; // xmm0
  BOOL v31; // ebx
  __int64 v32; // rcx
  char *v33; // rax
  __int64 v34; // r13
  struct _RTL_CRITICAL_SECTION *v35; // r14
  unsigned int v36; // edx
  __int64 v37; // rdi
  int v38; // ebx
  int v39; // r12d
  __int64 v40; // rsi
  __int64 v41; // r14
  __int64 v42; // rax
  volatile signed __int32 **v43; // rcx
  __int64 v44; // rax
  int v45; // ebx
  volatile signed __int32 **v46; // rsi
  SystemEffectChainDescriptor *v47; // rcx
  int v48; // eax
  volatile signed __int32 **v49; // rsi
  volatile signed __int32 *v50; // rbx
  __int64 v51; // r12
  char *v52; // rsi
  char *v53; // r14
  __int64 v54; // rdi
  int v55; // ebx
  __int64 v56; // rax
  int v57; // ebx
  SystemEffectChainDescriptor *v58; // rcx
  int v59; // eax
  char *v60; // rbx
  char *v61; // r13
  struct _RTL_CRITICAL_SECTION *v62; // r15
  unsigned int v63; // edx
  volatile signed __int32 **v64; // r14
  __int64 v65; // rdi
  int v66; // ebx
  int v67; // r12d
  __int64 v68; // rsi
  __int64 v69; // r15
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rax
  volatile signed __int32 **v75; // rcx
  __int64 v76; // rax
  int v77; // ebx
  volatile signed __int32 **v78; // rsi
  SystemEffectChainDescriptor *v79; // rcx
  int v80; // eax
  volatile signed __int32 **v81; // rsi
  volatile signed __int32 *v82; // rbx
  int v83; // ecx
  signed int v84; // edx
  int v85; // ebx
  unsigned int v86; // ecx
  LPCGUID v87; // r8
  bool v88; // sf
  __int64 v89; // r9
  __int64 v90; // rdx
  BOOL v91; // ebx
  __int64 v92; // rcx
  int v93; // ecx
  __int64 v94; // r12
  __int64 v95; // rax
  char *v96; // r15
  wil::details::in1diag3 *v97; // rcx
  __int64 v98; // rdx
  int v99; // esi
  __int64 v100; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v101; // r14d
  BOOL v102; // ebx
  __int64 v103; // rcx
  char *v104; // rax
  char *v105; // rsi
  __int64 v106; // rdi
  int v107; // ebx
  __int64 v108; // rax
  int v109; // ebx
  SystemEffectChainDescriptor *v110; // rcx
  int v111; // eax
  char *v112; // rbx
  int i; // edi
  int j; // ebx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 *v119; // r9
  int v120; // esi
  __int64 *v121; // rax
  __int64 v122; // r14
  _QWORD *v123; // r8
  _QWORD *v124; // rcx
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // rdi
  int v128; // ebx
  void *v129; // rax
  _OWORD *v130; // rax
  char *v131; // r12
  struct _RTL_CRITICAL_SECTION *v132; // r14
  unsigned int v133; // edx
  volatile signed __int32 **v134; // r13
  __int64 v135; // rsi
  int v136; // ebx
  __int64 v137; // rdi
  __int64 v138; // r14
  __int64 v139; // rax
  volatile signed __int32 **v140; // rcx
  __int64 v141; // rax
  int v142; // ebx
  volatile signed __int32 **v143; // rdi
  SystemEffectChainDescriptor **v144; // rax
  int v145; // eax
  volatile signed __int32 **v146; // rdi
  volatile signed __int32 *v147; // rbx
  __int64 v148; // r12
  char *v149; // rsi
  char *v150; // r14
  __int64 v151; // rdi
  int v152; // ebx
  __int64 v153; // rax
  int v154; // ebx
  SystemEffectChainDescriptor **v155; // rax
  int v156; // eax
  char *v157; // rbx
  char *v158; // r12
  struct _RTL_CRITICAL_SECTION *v159; // r14
  unsigned int v160; // edx
  volatile signed __int32 **v161; // r13
  __int64 v162; // rsi
  int v163; // ebx
  int v164; // r15d
  __int64 v165; // rdi
  __int64 v166; // r14
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // rax
  volatile signed __int32 **v172; // rcx
  __int64 v173; // rax
  int v174; // ebx
  volatile signed __int32 **v175; // rdi
  SystemEffectChainDescriptor **v176; // rax
  int v177; // eax
  volatile signed __int32 **v178; // rdi
  volatile signed __int32 *v179; // rbx
  int v180; // ecx
  int v181; // eax
  BYTE *v182; // rbx
  BYTE *v183; // rdi
  __int64 v184; // rbx
  struct tWAVEFORMATEX *v185; // rax
  struct tWAVEFORMATEX *v186; // rsi
  __int64 v187; // rbx
  unsigned int v188; // ecx
  struct tWAVEFORMATEX *v189; // rbx
  __int64 cbSize; // rdi
  struct tWAVEFORMATEX *v191; // rax
  struct tWAVEFORMATEX *v192; // rsi
  int v193; // eax
  int v194; // ebx
  __int64 v195; // rdx
  BYTE *v196; // rbx
  struct IAudioMediaType *v197; // rsi
  struct IAudioMediaType *v198; // rbx
  struct IAudioMediaType *v199; // rdi
  struct _GUID *v200; // rdx
  struct IAudioMediaType *v201; // r14
  const struct tWAVEFORMATEX *v202; // rax
  const struct tWAVEFORMATEX *v203; // rax
  const struct tWAVEFORMATEX *v204; // rax
  struct tWAVEFORMATEX *v205; // rax
  struct tWAVEFORMATEX *v206; // rax
  struct tWAVEFORMATEX *v207; // rax
  struct tWAVEFORMATEX *v208; // rax
  struct _GUID *cData; // [rsp+20h] [rbp-E0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v211; // [rsp+40h] [rbp-C0h]
  struct tWAVEFORMATEX *v212; // [rsp+48h] [rbp-B8h] BYREF
  struct tWAVEFORMATEX *v213; // [rsp+50h] [rbp-B0h] BYREF
  void *Block; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v215; // [rsp+60h] [rbp-A0h]
  struct tWAVEFORMATEX *v216; // [rsp+68h] [rbp-98h] BYREF
  struct CEndpointCharacteristics *v217; // [rsp+70h] [rbp-90h]
  struct tWAVEFORMATEX *v218; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 **v219; // [rsp+80h] [rbp-80h] BYREF
  __int64 v220; // [rsp+88h] [rbp-78h]
  volatile signed __int32 **v221; // [rsp+90h] [rbp-70h] BYREF
  __int64 v222; // [rsp+98h] [rbp-68h]
  volatile signed __int32 **v223; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v224; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 **v225; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v226; // [rsp+B8h] [rbp-48h]
  char *v227; // [rsp+C0h] [rbp-40h] BYREF
  char *v228; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v229; // [rsp+D0h] [rbp-30h]
  char *v230; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v231; // [rsp+E0h] [rbp-20h]
  char *v232; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v233; // [rsp+F0h] [rbp-10h]
  int v234; // [rsp+F8h] [rbp-8h]
  int v235; // [rsp+FCh] [rbp-4h]
  struct _GUID *v236; // [rsp+100h] [rbp+0h]
  struct IAudioMediaType *v237; // [rsp+108h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+10h] BYREF
  struct IAudioMediaType *v239; // [rsp+118h] [rbp+18h] BYREF
  __int64 v240; // [rsp+120h] [rbp+20h]
  struct tagPROPVARIANT v241; // [rsp+128h] [rbp+28h] BYREF
  GUID pRelatedActivityId; // [rsp+140h] [rbp+40h] BYREF
  LPVOID v243; // [rsp+150h] [rbp+50h] BYREF
  struct IAudioMediaType *v244; // [rsp+158h] [rbp+58h] BYREF
  struct tWAVEFORMATEX **v245; // [rsp+160h] [rbp+60h]
  struct tagPROPVARIANT *v246; // [rsp+168h] [rbp+68h] BYREF
  char v247; // [rsp+170h] [rbp+70h]
  struct _RTL_CRITICAL_SECTION *v248; // [rsp+178h] [rbp+78h] BYREF
  struct _RTL_CRITICAL_SECTION *v249; // [rsp+180h] [rbp+80h] BYREF
  struct _RTL_CRITICAL_SECTION *v250; // [rsp+188h] [rbp+88h] BYREF
  struct _RTL_CRITICAL_SECTION *v251; // [rsp+190h] [rbp+90h] BYREF
  struct IAudioMediaType *v252; // [rsp+198h] [rbp+98h] BYREF
  __int64 v253; // [rsp+1A0h] [rbp+A0h]
  struct _RTL_CRITICAL_SECTION *v254; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v255; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v256; // [rsp+1B8h] [rbp+B8h] BYREF
  struct tagPROPVARIANT v257; // [rsp+1C0h] [rbp+C0h] BYREF
  __m256i v258; // [rsp+1D8h] [rbp+D8h] BYREF
  PROPVARIANT pvar; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v260; // [rsp+200h] [rbp+100h]
  __int64 v261; // [rsp+208h] [rbp+108h]
  PROPVARIANT v262; // [rsp+210h] [rbp+110h] BYREF
  __int64 v263; // [rsp+218h] [rbp+118h]
  __int64 v264; // [rsp+220h] [rbp+120h]
  PROPVARIANT v265; // [rsp+228h] [rbp+128h] BYREF
  __int64 v266; // [rsp+230h] [rbp+130h]
  __int64 v267; // [rsp+238h] [rbp+138h]
  __int64 v268; // [rsp+240h] [rbp+140h]
  struct IMMDevice *v269; // [rsp+248h] [rbp+148h]
  struct tWAVEFORMATEX **v270; // [rsp+250h] [rbp+150h]
  struct tWAVEFORMATEX **v271; // [rsp+258h] [rbp+158h]
  struct tWAVEFORMATEX **v272; // [rsp+260h] [rbp+160h]
  char *v273; // [rsp+268h] [rbp+168h]
  struct _GUID v274; // [rsp+270h] [rbp+170h]
  GUID v275; // [rsp+280h] [rbp+180h]
  __int128 v276; // [rsp+290h] [rbp+190h]
  struct _GUID v277; // [rsp+2A0h] [rbp+1A0h]
  struct _GUID v278; // [rsp+2B0h] [rbp+1B0h]
  __int64 v279; // [rsp+2C0h] [rbp+1C0h]
  __int64 v280; // [rsp+2C8h] [rbp+1C8h]
  struct _GUID v281; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _GUID v282; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _GUID v283; // [rsp+2F0h] [rbp+1F0h] BYREF
  struct _GUID v284; // [rsp+300h] [rbp+200h] BYREF
  struct _GUID v285; // [rsp+310h] [rbp+210h] BYREF
  struct _GUID v286; // [rsp+320h] [rbp+220h] BYREF
  struct _GUID v287; // [rsp+330h] [rbp+230h] BYREF
  struct _GUID v288; // [rsp+340h] [rbp+240h] BYREF
  __m256i v289; // [rsp+350h] [rbp+250h] BYREF
  __int128 v290; // [rsp+370h] [rbp+270h] BYREF
  unsigned int v291; // [rsp+380h] [rbp+280h]
  __int128 v292; // [rsp+388h] [rbp+288h] BYREF
  unsigned int v293; // [rsp+398h] [rbp+298h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3C0h] [rbp+2C0h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+3D0h] [rbp+2D0h]
  __int64 v297; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int8 *Data4; // [rsp+3E0h] [rbp+2E0h]
  __int64 v299; // [rsp+3E8h] [rbp+2E8h]
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  v279 = -2LL;
  v12 = (int)a3;
  v211 = (int)a3;
  v13 = this;
  v217 = this;
  v14 = a7;
  v236 = a7;
  v15 = a9;
  v245 = a9;
  v271 = a10;
  v270 = a11;
  v272 = a12;
  v216 = 0LL;
  v213 = 0LL;
  v218 = 0LL;
  v212 = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    LODWORD(v16) = CloneWaveFormat(a8, &v213);
    if ( (int)v16 < 0 )
      goto LABEL_445;
    v269 = 0LL;
    v17 = (struct IMMDevice *)*((_QWORD *)v13 + 2);
    v269 = v17;
    ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->AddRef)(v17);
    if ( IsSPDIFFormat(a8) && (unsigned int)IsSPDIFEndpoint(v17) )
      LODWORD(v16) = GetAcceptableSPDIFTypeForDevice(v17, a8, &v216, 0) != 0 ? 0x88890008 : 0;
    else
      LODWORD(v16) = CloneWaveFormat(a8, &v216);
    if ( v17 )
      ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
    v18 = (int)v16 < 0;
LABEL_14:
    if ( !v18 )
    {
      LODWORD(v16) = CloneWaveFormat(v213, &v212);
      goto LABEL_443;
    }
    goto LABEL_445;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v281 = *a6;
    LODWORD(v16) = DeriveOffloadConnectorFormatFromStreamFormat(this, a8, a3, &v281, cData, &v216);
    if ( (int)v16 < 0 )
      goto LABEL_445;
    LODWORD(v16) = CloneWaveFormat(v216, &v218);
    ConvertPCMWfxToIEEEFloat(v218);
    if ( (int)v16 < 0 )
      goto LABEL_445;
    LODWORD(v16) = CloneWaveFormat(v19, &v213);
    v18 = (int)v16 < 0;
    goto LABEL_14;
  }
  if ( a2 )
  {
    v285 = *a7;
    v286 = *a6;
    v287 = *a5;
    LODWORD(v16) = DeriveConnectorFormatFromStreamFormat(
                     this,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     a8,
                     &v287,
                     &v286,
                     &v285,
                     1,
                     &v216);
    if ( (int)v16 < 0 )
      goto LABEL_445;
    v252 = 0LL;
    v197 = 0LL;
    v244 = 0LL;
    v198 = 0LL;
    v237 = 0LL;
    v199 = 0LL;
    v239 = 0LL;
    LODWORD(v16) = CAudioMediaType::Create(v216, (unsigned int)v216->cbSize + 18, &v252, 0.0, 0);
    v201 = v252;
    if ( (int)v16 >= 0 )
    {
      LODWORD(v16) = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(v13, v200, v211, v252, &v244);
      v197 = v244;
      if ( (int)v16 >= 0 )
      {
        v288 = *a6;
        LODWORD(v16) = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                         v13,
                         &v288,
                         v211,
                         v244,
                         &v239,
                         &v237);
        if ( (int)v16 < 0 )
        {
          v199 = v239;
        }
        else
        {
          v202 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v197->lpVtbl->GetAudioFormat)(v197);
          LODWORD(v16) = CloneWaveFormat(v202, &v212);
          v199 = v239;
          if ( (int)v16 >= 0 )
          {
            v203 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v239->lpVtbl->GetAudioFormat)(v239);
            LODWORD(v16) = CloneWaveFormat(v203, &v218);
            v198 = v237;
            if ( (int)v16 >= 0 )
            {
              if ( v237 )
              {
                v204 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v237->lpVtbl->GetAudioFormat)(v237);
                LODWORD(v16) = CloneWaveFormat(v204, &v213);
              }
              else
              {
                LODWORD(v16) = CloneWaveFormat(v212, &v213);
              }
            }
            goto LABEL_434;
          }
        }
        v198 = v237;
      }
    }
LABEL_434:
    if ( v199 )
      ((void (__fastcall *)(struct IAudioMediaType *))v199->lpVtbl->Release)(v199);
    if ( v198 )
      ((void (__fastcall *)(struct IAudioMediaType *))v198->lpVtbl->Release)(v198);
    if ( v197 )
      ((void (__fastcall *)(struct IAudioMediaType *))v197->lpVtbl->Release)(v197);
    if ( v201 )
      ((void (__fastcall *)(struct IAudioMediaType *))v201->lpVtbl->Release)(v201);
    goto LABEL_442;
  }
  v274 = *a7;
  v280 = 0LL;
  pv = 0LL;
  v243 = 0LL;
  v216 = 0LL;
  v212 = 0LL;
  LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                   *((_QWORD *)this + 2),
                   &v243);
  v20 = 602;
  if ( (int)v16 < 0 )
    goto LABEL_383;
  v282 = *a7;
  LODWORD(v16) = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                   v13,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                   &v282,
                   (struct tWAVEFORMATEX **)&pv);
  if ( (int)v16 < 0 )
  {
    v21 = 0;
    if ( (_DWORD)v12 != 2 )
      v21 = v12;
    if ( v21 )
      goto LABEL_28;
    v22 = 1;
    v23 = *((_QWORD *)v13 + 8);
    if ( !v23 )
      goto LABEL_28;
    pvar = 0LL;
    v260 = 0LL;
    v261 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
           v23,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v22 = v260 == 0;
    }
    PropVariantClear(&pvar);
    if ( v22 )
LABEL_28:
      v24 = (__int64)v13 + 16 * v21 + 72;
    else
      v24 = (__int64)v13 + 136;
    v25 = *(_DWORD *)(v24 + 8);
    if ( v25 )
    {
      v26 = 0;
      if ( v25 <= 0 )
        goto LABEL_35;
      v27 = *(_QWORD *)v24;
      while ( *(_QWORD *)(v27 + 16LL * v26) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v27 + 16LL * v26 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v26 >= v25 )
          goto LABEL_35;
      }
      if ( v26 == -1 )
      {
LABEL_35:
        v28 = 0;
        if ( v25 <= 0 )
          goto LABEL_40;
        v29 = *(_QWORD *)v24;
        while ( *(_QWORD *)(v29 + 16LL * v28) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v29 + 16LL * v28 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v28 >= v25 )
            goto LABEL_40;
        }
        if ( v28 == -1 )
LABEL_40:
          v30 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v24, 0);
        else
          v30 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v30 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v30 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v258.m256i_i64[0] = (__int64)v13;
    v258.m256i_i32[2] = v12;
    *(GUID *)((char *)&v258.m256i_u64[1] + 4) = v30;
    v289 = v258;
    LODWORD(v16) = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
                     (LPCWSTR *)v13,
                     0,
                     0,
                     v12,
                     v289.m256i_i64,
                     &pv);
    v14 = v236;
  }
  if ( (int)v16 < 0 )
    goto LABEL_380;
  if ( *(_OWORD *)&v274 != *(_OWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf )
  {
LABEL_377:
    v283 = *v14;
    LODWORD(v16) = CEndpointCharacteristics::GetMixFormat(
                     v13,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                     &v283,
                     &v212);
    v88 = (int)v16 < 0;
    goto LABEL_378;
  }
  v16 = 0LL;
  Block = 0LL;
  v215 = 0LL;
  v235 = 0;
  v275 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !(_DWORD)v12 )
  {
    v31 = 1;
    v32 = *((_QWORD *)v13 + 8);
    if ( v32 )
    {
      v262 = 0LL;
      v263 = 0LL;
      v264 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(
             v32,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v262) >= 0
        && (_WORD)v262 == 19 )
      {
        v31 = v263 == 0;
      }
      PropVariantClear(&v262);
      if ( !v31 )
      {
        v33 = (char *)v13 + 136;
        goto LABEL_151;
      }
    }
  }
  v240 = 96 * v12;
  v34 = (__int64)v217 + 96 * v12 + 232;
  if ( *(_BYTE *)(v34 + 52) )
  {
    v35 = (struct _RTL_CRITICAL_SECTION *)(v34 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
    v254 = (struct _RTL_CRITICAL_SECTION *)(v34 + 56);
    v225 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v226 = 0LL;
    v38 = 0;
    v39 = 0;
    if ( *(int *)(v34 + 40) > 0 )
    {
      v40 = 0LL;
      while ( 1 )
      {
        if ( v40 < 0 || v39 >= *(_DWORD *)(v34 + 40) )
          goto LABEL_447;
        v41 = *(_QWORD *)(v34 + 32);
        if ( (_DWORD)v37 == v38 )
        {
          if ( v38 )
          {
            v38 = 2 * v37;
            if ( (v37 & 0x40000000) != 0 )
              goto LABEL_116;
          }
          else
          {
            v38 = 1;
          }
          if ( (unsigned __int64)v38 > 0x7FFFFFF
            || (v42 = _o__recalloc(v16, v38, 16LL), (v16 = (volatile signed __int32 **)v42) == 0LL) )
          {
LABEL_116:
            v70 = 2147942414LL;
            v71 = 502LL;
            goto LABEL_117;
          }
          HIDWORD(v226) = v38;
          v225 = (volatile signed __int32 **)v42;
          v36 = 0;
        }
        v43 = &v16[2 * (int)v37];
        if ( v43 )
        {
          *v43 = 0LL;
          v43[1] = 0LL;
          v44 = *(_QWORD *)(v40 + v41 + 8);
          if ( v44 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
            v38 = HIDWORD(v226);
            LODWORD(v37) = v226;
            v16 = v225;
          }
          *v43 = *(volatile signed __int32 **)(v40 + v41);
          v43[1] = *(volatile signed __int32 **)(v40 + v41 + 8);
        }
        v37 = (unsigned int)(v37 + 1);
        LODWORD(v226) = v37;
        ++v39;
        v40 += 16LL;
        if ( v39 >= *(_DWORD *)(v34 + 40) )
        {
          v35 = (struct _RTL_CRITICAL_SECTION *)(v34 + 56);
          break;
        }
      }
    }
    v45 = 0;
    if ( (int)v37 <= 0 )
    {
LABEL_81:
      if ( v16 )
      {
        if ( (int)v37 > 0 )
        {
          v49 = v16 + 1;
          do
          {
            v50 = *v49;
            if ( *v49 && _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v50);
            }
            v49 += 2;
            --v37;
          }
          while ( v37 );
          v16 = v225;
        }
        free(v16);
        v225 = 0LL;
      }
      v226 = 0LL;
      if ( v35 )
        LeaveCriticalSection(v35);
    }
    else
    {
      v46 = v16;
      while ( 1 )
      {
        if ( v45 < 0 || v45 >= (int)v37 )
        {
          ATL::_AtlRaiseException(0xC000008C, v36);
LABEL_449:
          ATL::_AtlRaiseException(0xC000008C, v63);
          __debugbreak();
        }
        if ( *((_BYTE *)*v46 + 20) )
        {
          v47 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v225,
                                                   v45);
          v48 = SystemEffectChainDescriptor::Resolve(v47, (struct SystemEffectDescriptor *)v34);
          if ( v48 < 0 )
            break;
        }
        ++v45;
        v46 += 2;
        if ( v45 >= (int)v37 )
          goto LABEL_81;
      }
      v70 = (unsigned int)v48;
      v71 = 508LL;
LABEL_117:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v71,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v70);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v225);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v254);
    }
  }
  v51 = v240;
  v52 = (char *)v217 + v240 + 616;
  if ( v52[52] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v52 + 56));
    v255 = (struct _RTL_CRITICAL_SECTION *)(v52 + 56);
    v53 = 0LL;
    v230 = 0LL;
    v54 = 0LL;
    v231 = 0LL;
    v55 = 0;
    if ( *((int *)v52 + 10) <= 0 )
    {
LABEL_97:
      v57 = 0;
      if ( (int)v54 <= 0 )
      {
LABEL_101:
        if ( v53 )
        {
          if ( (int)v54 > 0 )
          {
            v60 = v53;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v60);
              v60 += 16;
              --v54;
            }
            while ( v54 );
          }
          free(v53);
          v230 = 0LL;
        }
        v231 = 0LL;
        if ( v52 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v52 + 56));
        goto LABEL_108;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v230,
                                     v57)
                      + 20LL) )
        {
          v58 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v230,
                                                   v57);
          v59 = SystemEffectChainDescriptor::Resolve(v58, (struct SystemEffectDescriptor *)v52);
          if ( v59 < 0 )
            break;
        }
        if ( ++v57 >= (int)v54 )
          goto LABEL_101;
      }
      v72 = (unsigned int)v59;
      v73 = 508LL;
    }
    else
    {
      while ( 1 )
      {
        v56 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v52 + 32), v55);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v230,
                              v56) )
          break;
        if ( ++v55 >= *((_DWORD *)v52 + 10) )
        {
          v54 = (unsigned int)v231;
          v53 = v230;
          goto LABEL_97;
        }
      }
      v72 = 2147942414LL;
      v73 = 502LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v73,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v72);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v230);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v255);
  }
LABEL_108:
  v61 = (char *)v217 + v51 + 1000;
  if ( v61[52] )
  {
    v62 = (struct _RTL_CRITICAL_SECTION *)(v61 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v61 + 56));
    v256 = (struct _RTL_CRITICAL_SECTION *)(v61 + 56);
    v63 = 0;
    v64 = 0LL;
    v223 = 0LL;
    v65 = 0LL;
    v224 = 0LL;
    v66 = 0;
    v67 = 0;
    if ( *((int *)v61 + 10) > 0 )
    {
      v68 = 0LL;
      while ( 1 )
      {
        if ( v68 < 0 || v67 >= *((_DWORD *)v61 + 10) )
          goto LABEL_449;
        v69 = *((_QWORD *)v61 + 4);
        if ( (_DWORD)v65 == v66 )
        {
          if ( v66 )
          {
            v66 = 2 * v65;
            if ( (v65 & 0x40000000) != 0 )
              goto LABEL_169;
          }
          else
          {
            v66 = 1;
          }
          if ( (unsigned __int64)v66 > 0x7FFFFFF
            || (v74 = _o__recalloc(v64, v66, 16LL), (v64 = (volatile signed __int32 **)v74) == 0LL) )
          {
LABEL_169:
            v89 = 2147942414LL;
            v90 = 502LL;
            goto LABEL_170;
          }
          HIDWORD(v224) = v66;
          v223 = (volatile signed __int32 **)v74;
          v63 = 0;
        }
        v75 = &v64[2 * (int)v65];
        if ( v75 )
        {
          *v75 = 0LL;
          v75[1] = 0LL;
          v76 = *(_QWORD *)(v68 + v69 + 8);
          if ( v76 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
            v66 = HIDWORD(v224);
            LODWORD(v65) = v224;
            v64 = v223;
          }
          *v75 = *(volatile signed __int32 **)(v68 + v69);
          v75[1] = *(volatile signed __int32 **)(v68 + v69 + 8);
        }
        v65 = (unsigned int)(v65 + 1);
        LODWORD(v224) = v65;
        ++v67;
        v68 += 16LL;
        if ( v67 >= *((_DWORD *)v61 + 10) )
        {
          v62 = (struct _RTL_CRITICAL_SECTION *)(v61 + 56);
          break;
        }
      }
    }
    v77 = 0;
    if ( (int)v65 <= 0 )
    {
LABEL_139:
      if ( v64 )
      {
        if ( (int)v65 > 0 )
        {
          v81 = v64 + 1;
          do
          {
            v82 = *v81;
            if ( *v81 && _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v82)(v82);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v82);
            }
            v81 += 2;
            --v65;
          }
          while ( v65 );
          v64 = v223;
        }
        free(v64);
        v223 = 0LL;
      }
      v224 = 0LL;
      if ( v62 )
        LeaveCriticalSection(v62);
    }
    else
    {
      v78 = v64;
      while ( 1 )
      {
        if ( v77 < 0 || v77 >= (int)v65 )
        {
          ATL::_AtlRaiseException(0xC000008C, v63);
LABEL_451:
          ATL::_AtlRaiseException(0xC000008C, v84);
          __debugbreak();
        }
        if ( *((_BYTE *)*v78 + 20) )
        {
          v79 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v223,
                                                   v77);
          v80 = SystemEffectChainDescriptor::Resolve(v79, (struct SystemEffectDescriptor *)v61);
          if ( v80 < 0 )
            break;
        }
        ++v77;
        v78 += 2;
        if ( v77 >= (int)v65 )
          goto LABEL_139;
      }
      v89 = (unsigned int)v80;
      v90 = 508LL;
LABEL_170:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v90,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v89);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v223);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v256);
    }
  }
  LODWORD(v12) = v211;
  v13 = v217;
  v33 = (char *)v217 + 16 * v211 + 72;
  LODWORD(v16) = 0;
LABEL_151:
  v83 = 0;
  v84 = *((_DWORD *)v33 + 2);
  if ( v84 <= 0 )
    goto LABEL_154;
  while ( *(_OWORD *)(*(_QWORD *)v33 + 16LL * v83) != *(_OWORD *)&v275 )
  {
    if ( ++v83 >= v84 )
      goto LABEL_154;
  }
  if ( v83 == -1 )
  {
LABEL_154:
    v85 = 0;
    goto LABEL_155;
  }
  v91 = 1;
  v92 = *((_QWORD *)v13 + 8);
  if ( !v92 )
    goto LABEL_179;
  v265 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v92 + 40LL))(
         v92,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v265) >= 0
    && (_WORD)v265 == 19 )
  {
    v91 = v266 == 0;
  }
  PropVariantClear(&v265);
  if ( v91 || (v93 = 0, (_DWORD)v12 == 3) )
LABEL_179:
    v93 = 1;
  v94 = (int)v12;
  v95 = 96LL * (int)v12;
  v96 = (char *)v13 + v95 + 616;
  if ( !v93 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, (char *)v13 + v95 + 616);
    if ( (_DWORD)v215 != *((_DWORD *)v96 + 2) )
    {
      v97 = retaddr;
      v98 = 570LL;
      goto LABEL_183;
    }
    goto LABEL_184;
  }
  if ( v96[52] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v96 + 56));
    v248 = (struct _RTL_CRITICAL_SECTION *)(v96 + 56);
    v105 = 0LL;
    v228 = 0LL;
    v106 = 0LL;
    v229 = 0LL;
    v107 = 0;
    if ( *((int *)v96 + 10) > 0 )
    {
      while ( 1 )
      {
        v108 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v96 + 32), v107);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v228,
                              v108) )
          break;
        if ( ++v107 >= *((_DWORD *)v96 + 10) )
        {
          v106 = (unsigned int)v229;
          v105 = v228;
          goto LABEL_200;
        }
      }
      v125 = 2147942414LL;
      v126 = 502LL;
      goto LABEL_228;
    }
LABEL_200:
    v109 = 0;
    if ( (int)v106 > 0 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v228,
                                     v109)
                      + 20LL) )
        {
          v110 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    (__int64)&v228,
                                                    v109);
          v111 = SystemEffectChainDescriptor::Resolve(v110, (struct SystemEffectDescriptor *)v96);
          if ( v111 < 0 )
            break;
        }
        if ( ++v109 >= (int)v106 )
          goto LABEL_204;
      }
      v125 = (unsigned int)v111;
      v126 = 508LL;
LABEL_228:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v126,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v125);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v228);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v248);
      goto LABEL_211;
    }
LABEL_204:
    if ( v105 )
    {
      if ( (int)v106 > 0 )
      {
        v112 = v105;
        do
        {
          std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v112);
          v112 += 16;
          --v106;
        }
        while ( v106 );
      }
      free(v105);
      v228 = 0LL;
    }
    v229 = 0LL;
    if ( v96 != (char *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v96 + 56));
  }
LABEL_211:
  for ( i = 0; i < *((_DWORD *)v96 + 10); ++i )
  {
    for ( j = 0;
          j < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)(v96 + 32),
                                       i)
                        + 8LL);
          ++j )
    {
      v115 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v96 + 32), i);
      v116 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v115, j);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&Block, v116) == -1 )
      {
        v117 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            (__int64)(v96 + 32),
                            i);
        v118 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v117, j);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, v118) )
        {
          v97 = retaddr;
          v98 = 584LL;
          goto LABEL_183;
        }
      }
    }
  }
  v119 = (__int64 *)*((_QWORD *)v96 + 2);
  if ( v119 )
  {
    v120 = 0;
    if ( *((int *)v119 + 2) > 0 )
    {
      v121 = (__int64 *)*((_QWORD *)v96 + 2);
      v122 = 0LL;
      do
      {
        if ( v120 < 0 || v120 >= *((_DWORD *)v121 + 2) )
        {
          ATL::_AtlRaiseException(0xC000008C, v84);
LABEL_453:
          ATL::_AtlRaiseException(0xC000008C, v133);
          __debugbreak();
        }
        v123 = (_QWORD *)(*v121 + 16LL * v120);
        v84 = 0;
        if ( (int)v215 <= 0 )
          goto LABEL_232;
        while ( 1 )
        {
          v124 = (char *)Block + 16 * v84;
          if ( *v124 == *v123 && v124[1] == v123[1] )
            break;
          if ( ++v84 >= (int)v215 )
            goto LABEL_232;
        }
        if ( v84 == -1 )
        {
LABEL_232:
          if ( v120 >= *((_DWORD *)v119 + 2) )
            goto LABEL_451;
          v127 = *v119;
          if ( (_DWORD)v215 == HIDWORD(v215) )
          {
            if ( HIDWORD(v215) )
            {
              v128 = 2 * v215;
              if ( (v215 & 0x40000000) != 0 )
                goto LABEL_245;
            }
            else
            {
              v128 = 1;
            }
            if ( (unsigned __int64)v128 > 0x7FFFFFF || (v129 = (void *)_o__recalloc(Block, v128, 16LL)) == 0LL )
            {
LABEL_245:
              v97 = retaddr;
              v98 = 596LL;
LABEL_183:
              wil::details::in1diag3::Return_Hr(
                v97,
                (void *)v98,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL);
              break;
            }
            HIDWORD(v215) = v128;
            Block = v129;
          }
          v130 = (char *)Block + 16 * (int)v215;
          if ( v130 )
            *v130 = *(_OWORD *)(v122 + v127);
          LODWORD(v215) = v215 + 1;
        }
        ++v120;
        v122 += 16LL;
        v119 = (__int64 *)*((_QWORD *)v96 + 2);
        v121 = v119;
      }
      while ( v120 < *((_DWORD *)v119 + 2) );
    }
  }
LABEL_184:
  LODWORD(v16) = 0;
  v99 = 0;
  v234 = 0;
  if ( (int)v215 <= 0 )
    goto LABEL_154;
  v100 = 0LL;
  v240 = 0LL;
  v101 = v211;
  do
  {
    if ( v100 < 0 || v99 >= (int)v215 )
    {
      ATL::_AtlRaiseException(0xC000008C, v84);
LABEL_447:
      ATL::_AtlRaiseException(0xC000008C, v36);
      __debugbreak();
    }
    v276 = *((_OWORD *)Block + v100);
    if ( v101 == eHostProcessConnector )
    {
      v102 = 1;
      v103 = *((_QWORD *)v13 + 8);
      if ( v103 )
      {
        memset(&v258, 0, 24);
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, __m256i *))(*(_QWORD *)v103 + 40LL))(
               v103,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v258) >= 0
          && v258.m256i_i16[0] == 19 )
        {
          v102 = v258.m256i_i32[2] == 0;
        }
        PropVariantClear((PROPVARIANT *)&v258);
        if ( !v102 )
        {
          v104 = (char *)v13 + 136;
          goto LABEL_345;
        }
      }
    }
    v268 = 96 * v94;
    v131 = (char *)v13 + 96 * v94 + 232;
    if ( v131[52] )
    {
      v132 = (struct _RTL_CRITICAL_SECTION *)(v131 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v131 + 56));
      v249 = (struct _RTL_CRITICAL_SECTION *)(v131 + 56);
      v134 = 0LL;
      v221 = 0LL;
      v135 = 0LL;
      v222 = 0LL;
      v136 = 0;
      if ( *((int *)v131 + 10) > 0 )
      {
        v137 = 0LL;
        while ( 1 )
        {
          if ( v137 < 0 || (int)v16 >= *((_DWORD *)v131 + 10) )
            goto LABEL_453;
          v138 = *((_QWORD *)v131 + 4);
          if ( (_DWORD)v135 == v136 )
          {
            if ( v136 )
            {
              v136 = 2 * v135;
              if ( (v135 & 0x40000000) != 0 )
                goto LABEL_307;
            }
            else
            {
              v136 = 1;
            }
            if ( (unsigned __int64)v136 > 0x7FFFFFF
              || (v139 = _o__recalloc(v134, v136, 16LL), (v134 = (volatile signed __int32 **)v139) == 0LL) )
            {
LABEL_307:
              v167 = 2147942414LL;
              v168 = 502LL;
              goto LABEL_308;
            }
            HIDWORD(v222) = v136;
            v221 = (volatile signed __int32 **)v139;
          }
          v140 = &v134[2 * (int)v135];
          if ( v140 )
          {
            *v140 = 0LL;
            v140[1] = 0LL;
            v141 = *(_QWORD *)(v137 + v138 + 8);
            if ( v141 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v141 + 8));
              v136 = HIDWORD(v222);
              LODWORD(v135) = v222;
              v134 = v221;
            }
            *v140 = *(volatile signed __int32 **)(v137 + v138);
            v140[1] = *(volatile signed __int32 **)(v137 + v138 + 8);
          }
          v135 = (unsigned int)(v135 + 1);
          LODWORD(v222) = v135;
          LODWORD(v16) = (_DWORD)v16 + 1;
          v137 += 16LL;
          if ( (int)v16 >= *((_DWORD *)v131 + 10) )
          {
            v132 = (struct _RTL_CRITICAL_SECTION *)(v131 + 56);
            break;
          }
        }
      }
      v142 = 0;
      if ( (int)v135 <= 0 )
      {
LABEL_271:
        if ( v134 )
        {
          if ( (int)v135 > 0 )
          {
            v146 = v134 + 1;
            do
            {
              v147 = *v146;
              if ( *v146 && _InterlockedExchangeAdd(v147 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v147)(v147);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v147);
              }
              v146 += 2;
              --v135;
            }
            while ( v135 );
            v134 = v221;
          }
          free(v134);
          v221 = 0LL;
        }
        v222 = 0LL;
        if ( v132 )
          LeaveCriticalSection(v132);
      }
      else
      {
        v143 = v134;
        while ( 1 )
        {
          if ( v142 < 0 || v142 >= (int)v135 )
          {
            ATL::_AtlRaiseException(0xC000008C, v133);
LABEL_455:
            ATL::_AtlRaiseException(0xC000008C, v160);
            __debugbreak();
          }
          if ( *((_BYTE *)*v143 + 20) )
          {
            v144 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     (__int64)&v221,
                                                     v142);
            v145 = SystemEffectChainDescriptor::Resolve(*v144, (struct SystemEffectDescriptor *)v131);
            if ( v145 < 0 )
              break;
          }
          ++v142;
          v143 += 2;
          if ( v142 >= (int)v135 )
            goto LABEL_271;
        }
        v167 = (unsigned int)v145;
        v168 = 508LL;
LABEL_308:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v168,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v167);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v221);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v249);
      }
      v13 = v217;
    }
    v148 = v268;
    v149 = (char *)v13 + v268 + 616;
    if ( !v149[52] )
      goto LABEL_299;
    EnterCriticalSection((LPCRITICAL_SECTION)(v149 + 56));
    v250 = (struct _RTL_CRITICAL_SECTION *)(v149 + 56);
    v150 = 0LL;
    v232 = 0LL;
    v151 = 0LL;
    v233 = 0LL;
    v152 = 0;
    if ( *((int *)v149 + 10) <= 0 )
    {
LABEL_288:
      v154 = 0;
      if ( (int)v151 <= 0 )
      {
LABEL_292:
        if ( v150 )
        {
          if ( (int)v151 > 0 )
          {
            v157 = v150;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v157);
              v157 += 16;
              --v151;
            }
            while ( v151 );
          }
          free(v150);
          v232 = 0LL;
        }
        v233 = 0LL;
        if ( v149 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v149 + 56));
        goto LABEL_299;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v232,
                                     v154)
                      + 20LL) )
        {
          v155 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   (__int64)&v232,
                                                   v154);
          v156 = SystemEffectChainDescriptor::Resolve(*v155, (struct SystemEffectDescriptor *)v149);
          if ( v156 < 0 )
            break;
        }
        if ( ++v154 >= (int)v151 )
          goto LABEL_292;
      }
      v169 = (unsigned int)v156;
      v170 = 508LL;
    }
    else
    {
      while ( 1 )
      {
        v153 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v149 + 32), v152);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v232,
                              v153) )
          break;
        if ( ++v152 >= *((_DWORD *)v149 + 10) )
        {
          v151 = (unsigned int)v233;
          v150 = v232;
          goto LABEL_288;
        }
      }
      v169 = 2147942414LL;
      v170 = 502LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v170,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v169);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v232);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v250);
LABEL_299:
    v158 = (char *)v13 + v148 + 1000;
    if ( !v158[52] )
      goto LABEL_343;
    v159 = (struct _RTL_CRITICAL_SECTION *)(v158 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v158 + 56));
    v251 = (struct _RTL_CRITICAL_SECTION *)(v158 + 56);
    v161 = 0LL;
    v219 = 0LL;
    v162 = 0LL;
    v220 = 0LL;
    v163 = 0;
    v164 = 0;
    if ( *((int *)v158 + 10) <= 0 )
    {
LABEL_323:
      LODWORD(v16) = 0;
      v174 = 0;
      if ( (int)v162 <= 0 )
      {
LABEL_330:
        if ( v161 )
        {
          if ( (int)v162 > 0 )
          {
            v178 = v161 + 1;
            do
            {
              v179 = *v178;
              if ( *v178 && _InterlockedExchangeAdd(v179 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v179)(v179);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v179);
              }
              v178 += 2;
              --v162;
            }
            while ( v162 );
            v161 = v219;
          }
          free(v161);
          v219 = 0LL;
        }
        v220 = 0LL;
        if ( v159 )
          LeaveCriticalSection(v159);
        v13 = v217;
      }
      else
      {
        v175 = v161;
        while ( 1 )
        {
          if ( v174 < 0 || v174 >= (int)v162 )
          {
            ATL::_AtlRaiseException(0xC000008C, v160);
            JUMPOUT(0x1800349E4LL);
          }
          if ( *((_BYTE *)*v175 + 20) )
          {
            v176 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     (__int64)&v219,
                                                     v174);
            v177 = SystemEffectChainDescriptor::Resolve(*v176, (struct SystemEffectDescriptor *)v158);
            if ( v177 < 0 )
              break;
          }
          ++v174;
          v175 += 2;
          if ( v174 >= (int)v162 )
            goto LABEL_330;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FC,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v177);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v219);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v251);
        v13 = v217;
      }
      goto LABEL_344;
    }
    v165 = 0LL;
    while ( 1 )
    {
      if ( v165 < 0 || v164 >= *((_DWORD *)v158 + 10) )
        goto LABEL_455;
      v166 = *((_QWORD *)v158 + 4);
      if ( (_DWORD)v162 != v163 )
        goto LABEL_317;
      if ( v163 )
      {
        v163 = 2 * v162;
        if ( (v162 & 0x40000000) != 0 )
          break;
      }
      else
      {
        v163 = 1;
      }
      if ( (unsigned __int64)v163 > 0x7FFFFFF )
        break;
      v171 = _o__recalloc(v161, v163, 16LL);
      v161 = (volatile signed __int32 **)v171;
      if ( !v171 )
        break;
      HIDWORD(v220) = v163;
      v219 = (volatile signed __int32 **)v171;
LABEL_317:
      v172 = &v161[2 * (int)v162];
      if ( v172 )
      {
        *v172 = 0LL;
        v172[1] = 0LL;
        v173 = *(_QWORD *)(v165 + v166 + 8);
        if ( v173 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v173 + 8));
          v163 = HIDWORD(v220);
          LODWORD(v162) = v220;
          v161 = v219;
        }
        *v172 = *(volatile signed __int32 **)(v165 + v166);
        v172[1] = *(volatile signed __int32 **)(v165 + v166 + 8);
      }
      v162 = (unsigned int)(v162 + 1);
      LODWORD(v220) = v162;
      ++v164;
      v165 += 16LL;
      if ( v164 >= *((_DWORD *)v158 + 10) )
      {
        v159 = (struct _RTL_CRITICAL_SECTION *)(v158 + 56);
        goto LABEL_323;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v219);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v251);
    v13 = v217;
LABEL_343:
    LODWORD(v16) = 0;
LABEL_344:
    v94 = v211;
    v104 = (char *)v13 + 16 * v211 + 72;
    v100 = v240;
    v99 = v234;
    v101 = v211;
LABEL_345:
    v180 = 0;
    v84 = *((_DWORD *)v104 + 2);
    if ( v84 <= 0 )
      goto LABEL_348;
    while ( *(_OWORD *)(*(_QWORD *)v104 + 16LL * v180) != v276 )
    {
      if ( ++v180 >= v84 )
        goto LABEL_348;
    }
    if ( v180 == -1 )
    {
LABEL_348:
      v85 = 1;
      goto LABEL_155;
    }
    v234 = ++v99;
    v240 = ++v100;
  }
  while ( v99 < (int)v215 );
  v85 = v235;
LABEL_155:
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  v215 = 0LL;
  if ( !v85 )
  {
    LODWORD(v12) = v211;
    v14 = v236;
    goto LABEL_377;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v13 + 8544));
  v273 = (char *)v13 + 8544;
  memset(&v241, 0, sizeof(v241));
  v212 = 0LL;
  v277 = *v236;
  v86 = 0;
  while ( *(_OWORD *)&qword_1801B75F0[2 * v86] != *(_OWORD *)&v277 )
  {
    if ( ++v86 >= 9 )
    {
      LODWORD(v16) = -2147023728;
      goto LABEL_162;
    }
  }
  v290 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  v181 = 602;
  if ( v211 != eKeywordDetectorConnector )
    v181 = 2;
  v291 = v86 + v181;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)v13 + 5) + 40LL))(
         *((_QWORD *)v13 + 5),
         &v290,
         &v241,
         qword_1801B75F0) >= 0
    && v241.vt == 65
    && v241.lVal >= 0x12u
    && (v182 = v241.bstrblobVal.pData, v241.ulVal == *((unsigned __int16 *)v241.bstrblobVal.pData + 8) + 18LL) )
  {
LABEL_364:
    v183 = v182;
    if ( !v182
      || (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v182) < 0
      || ((*(_WORD *)v182 - 1) & 0xFFFD) != 0
      && (*(_WORD *)v182 != 0xFFFE
       || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *((_QWORD *)v182 + 3)
        || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *((_QWORD *)v182 + 4))
       && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *((_QWORD *)v182 + 3)
        || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *((_QWORD *)v182 + 4))) )
    {
      goto LABEL_375;
    }
    v184 = *((unsigned __int16 *)v182 + 8);
    v185 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v184 + 18);
    v186 = v185;
    if ( v185 )
    {
      memcpy_0(v185, v183, v184 + 18);
      v212 = v186;
    }
    else
    {
      v212 = 0LL;
      LODWORD(v16) = -2147024882;
    }
  }
  else
  {
    PropVariantClear((PROPVARIANT *)&v241);
    LODWORD(v16) = CEndpointCharacteristics::RefreshDeviceFormat((LPCWSTR *)v13, v211);
    if ( (int)v16 >= 0 )
    {
      if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)v13 + 5) + 40LL))(
             *((_QWORD *)v13 + 5),
             &v290,
             &v241) >= 0
        && v241.vt == 65
        && IsValidWfxBlob(&v241) )
      {
        v182 = v241.bstrblobVal.pData;
        LODWORD(v16) = 0;
        goto LABEL_364;
      }
LABEL_375:
      LODWORD(v16) = -2004287480;
    }
  }
LABEL_162:
  PropVariantClear((PROPVARIANT *)&v241);
  *(_DWORD *)pRelatedActivityId.Data4 = (_DWORD)v16;
  pRelatedActivityId.Data1 = 6820;
  if ( (int)v16 < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDevicePipeFormat");
    p_pRelatedActivityId = &pRelatedActivityId;
    v297 = 4LL;
    Data4 = pRelatedActivityId.Data4;
    v299 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A3E3, v87, &pRelatedActivityId, 5u, &pData);
  }
  if ( v13 != (struct CEndpointCharacteristics *)-8544LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v13 + 8544));
    v273 = 0LL;
  }
  LODWORD(v12) = v211;
  v14 = v236;
  v88 = (int)v16 < 0;
LABEL_378:
  if ( !v88 )
  {
    v216 = (struct tWAVEFORMATEX *)pv;
    goto LABEL_382;
  }
LABEL_380:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_382:
  v20 = 602;
LABEL_383:
  if ( v243 )
  {
    CoTaskMemFree(v243);
    v243 = 0LL;
  }
  if ( (int)v16 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        55LL,
        &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
        (unsigned int)v16);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 5815, (int)v16);
  }
  if ( (int)v16 >= 0 )
  {
    if ( *(_QWORD *)&v14->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
      && *(_QWORD *)v14->Data4 == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
    {
      v253 = 0LL;
      v187 = *((_QWORD *)v13 + 2);
      v253 = v187;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v187 + 8LL))(v187);
      v284 = *a5;
      LODWORD(v16) = CEndpointCharacteristics::GetMixFormat(
                       v13,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                       &v284,
                       &v218);
      if ( v187 )
      {
        v253 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v187 + 16LL))(v187);
      }
    }
    if ( (int)v16 >= 0 )
    {
      v213 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v13 + 8544));
      v227 = (char *)v13 + 8544;
      v278 = *a5;
      v188 = 0;
      while ( *(_OWORD *)&qword_1801B75F0[2 * v188] != *(_OWORD *)&v278 )
      {
        if ( ++v188 >= 9 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AB6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x80070490LL);
LABEL_401:
          Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v227);
          goto LABEL_402;
        }
      }
      v292 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      if ( (_DWORD)v12 != 3 )
        v20 = 2;
      v293 = v188 + v20;
      memset(&v257, 0, sizeof(v257));
      v246 = &v257;
      v247 = 1;
      v193 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)v13 + 5)
                                                                                              + 40LL))(
               *((_QWORD *)v13 + 5),
               &v292,
               &v257,
               qword_1801B75F0);
      v194 = v193;
      if ( v193 < 0 )
      {
        v195 = 6845LL;
        goto LABEL_415;
      }
      if ( v257.vt != 65 || !IsValidWfxBlob(&v257) )
      {
LABEL_412:
        wil::details::lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___::_lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___(&v246);
        goto LABEL_401;
      }
      v196 = v257.bstrblobVal.pData;
      if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v257.bstrblobVal.pData) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AC1,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
        goto LABEL_412;
      }
      v193 = CloneWaveFormat((const struct tWAVEFORMATEX *)v196, &v213);
      v194 = v193;
      if ( v193 >= 0 )
      {
        if ( !v213 )
          goto LABEL_412;
        v247 = 0;
        PropVariantClear((PROPVARIANT *)&v257);
        if ( v13 != (struct CEndpointCharacteristics *)-8544LL )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v13 + 8544));
          v227 = 0LL;
        }
LABEL_420:
        if ( v213 )
          goto LABEL_442;
      }
      else
      {
        v195 = 6851LL;
LABEL_415:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v195,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v193);
        wil::details::lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___::_lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___(&v246);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v227);
        if ( v194 >= 0 )
          goto LABEL_420;
      }
LABEL_402:
      v189 = v212;
      cbSize = v212->cbSize;
      v191 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
      v192 = v191;
      if ( v191 )
      {
        memcpy_0(v191, v189, cbSize + 18);
        LODWORD(v16) = 0;
        v213 = v192;
      }
      else
      {
        LODWORD(v16) = -2147024882;
        v213 = 0LL;
      }
LABEL_442:
      v15 = v245;
LABEL_443:
      if ( (int)v16 >= 0 )
      {
        v205 = v216;
        v216 = 0LL;
        *v272 = v205;
        v206 = v213;
        v213 = 0LL;
        *v271 = v206;
        v207 = v218;
        v218 = 0LL;
        *v15 = v207;
        v208 = v212;
        v212 = 0LL;
        *v270 = v208;
      }
    }
  }
LABEL_445:
  CoTaskMemFree(v212);
  v212 = 0LL;
  CoTaskMemFree(v218);
  v218 = 0LL;
  CoTaskMemFree(v213);
  v213 = 0LL;
  CoTaskMemFree(v216);
  v216 = 0LL;
  return (unsigned int)v16;
}
