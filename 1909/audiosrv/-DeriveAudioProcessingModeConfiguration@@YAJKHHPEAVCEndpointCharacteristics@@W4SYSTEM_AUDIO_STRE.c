/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180008530 (AudioServerGetDevicePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180011CE0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026450 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180031620 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     AudioServerGetMixFormat @ 0x180037550 (AudioServerGetMixFormat.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800CC124 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E7360 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800E8170 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F5EF4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180007B80 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180008490 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18000C540 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D790 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180014940 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180035F20 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042A5C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800554F4 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180064290 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C1A18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180114DC4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115590 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180115B58 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        int a1,
        int a2,
        int a3,
        CEndpointCharacteristics *a4,
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
  CEndpointCharacteristics *v13; // r12
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
  __int64 v27; // r11
  char *v28; // r13
  struct _RTL_CRITICAL_SECTION *v29; // r15
  unsigned int v30; // edx
  volatile signed __int32 **v31; // r14
  int v32; // ebx
  int v33; // edi
  int v34; // r12d
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rax
  volatile signed __int32 **v38; // rcx
  __int64 v39; // rax
  int v40; // edi
  volatile signed __int32 **v41; // rsi
  SystemEffectChainDescriptor **v42; // rax
  int v43; // eax
  volatile signed __int32 **v44; // rdi
  __int64 v45; // rsi
  volatile signed __int32 *v46; // rbx
  char *v47; // r14
  int v48; // esi
  int v49; // ebx
  __int64 v50; // rax
  int v51; // ebx
  SystemEffectChainDescriptor **v52; // rax
  int v53; // eax
  char *v54; // rbx
  __int64 v55; // rdi
  char *v56; // r13
  struct _RTL_CRITICAL_SECTION *v57; // r15
  unsigned int v58; // edx
  volatile signed __int32 **v59; // r14
  int v60; // ebx
  int v61; // edi
  int v62; // r12d
  __int64 v63; // rsi
  __int64 v64; // r15
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rax
  volatile signed __int32 **v70; // rcx
  __int64 v71; // rax
  int v72; // edi
  volatile signed __int32 **v73; // rsi
  SystemEffectChainDescriptor **v74; // rax
  int v75; // eax
  volatile signed __int32 **v76; // rdi
  __int64 v77; // rsi
  volatile signed __int32 *v78; // rbx
  int v79; // edx
  int v80; // ecx
  __int64 v81; // r9
  int v82; // ecx
  __int64 v83; // r9
  __int64 v84; // r9
  __int64 v85; // rdx
  BOOL v86; // ebx
  __int64 v87; // rcx
  int v88; // ecx
  __int64 v89; // rax
  char *v90; // r13
  bool v91; // zf
  int v92; // ebx
  __int64 **v93; // rax
  __int64 v94; // rax
  volatile signed __int32 *v95; // rbx
  __int64 v96; // rdx
  int v97; // ecx
  int v98; // r8d
  int v99; // ebx
  __int64 **v100; // rax
  GUID *v101; // rax
  unsigned int v102; // ecx
  int VirtualSurroundEffectMode; // eax
  char *v104; // r14
  unsigned int v105; // r15d
  __int64 v106; // r12
  __int64 v107; // rdi
  CEndpointCharacteristics *v108; // rsi
  int v109; // eax
  unsigned int v110; // ebx
  BOOL v111; // ebx
  __int64 v112; // rcx
  char *v113; // rax
  char *v114; // r15
  char *v115; // r12
  struct _RTL_CRITICAL_SECTION *v116; // r14
  unsigned int v117; // edx
  volatile signed __int32 **v118; // r13
  __int64 v119; // rsi
  int v120; // ebx
  int v121; // r15d
  __int64 v122; // r14
  __int64 v123; // rdi
  __int64 v124; // rax
  volatile signed __int32 **v125; // rcx
  __int64 v126; // rax
  int v127; // ebx
  volatile signed __int32 **v128; // rdi
  SystemEffectChainDescriptor **v129; // rax
  int v130; // eax
  volatile signed __int32 **v131; // rdi
  volatile signed __int32 *v132; // rbx
  char *v133; // rsi
  __int64 v134; // rdi
  int v135; // ebx
  __int64 v136; // rax
  int v137; // ebx
  SystemEffectChainDescriptor **v138; // rax
  int v139; // eax
  char *v140; // rbx
  char *v141; // r12
  struct _RTL_CRITICAL_SECTION *v142; // r14
  unsigned int v143; // edx
  volatile signed __int32 **v144; // r13
  __int64 v145; // rsi
  int v146; // ebx
  int v147; // r15d
  __int64 v148; // r14
  __int64 v149; // rdi
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r9
  __int64 v153; // rdx
  __int64 v154; // rax
  volatile signed __int32 **v155; // rcx
  __int64 v156; // rax
  int v157; // ebx
  volatile signed __int32 **v158; // rdi
  SystemEffectChainDescriptor **v159; // rax
  int v160; // eax
  volatile signed __int32 **v161; // rdi
  volatile signed __int32 *v162; // rbx
  int v163; // ecx
  int v164; // edx
  __int64 v165; // r9
  __int64 v166; // rdx
  __int128 v167; // xmm6
  BOOL v168; // ebx
  __int64 v169; // rcx
  bool v170; // zf
  int v171; // ebx
  __int64 **v172; // rax
  __int64 v173; // rax
  volatile signed __int32 *v174; // rbx
  __int64 v175; // rdx
  int v176; // ecx
  int v177; // r8d
  int v178; // ebx
  __int64 **v179; // rax
  int IsAPOModeSupported; // eax
  struct _GUID *v181; // rsi
  bool v182[8]; // [rsp+38h] [rbp-D0h] BYREF
  CEndpointCharacteristics *v183; // [rsp+40h] [rbp-C8h]
  __int64 v184; // [rsp+48h] [rbp-C0h]
  char *v185; // [rsp+50h] [rbp-B8h]
  char *v186; // [rsp+58h] [rbp-B0h]
  char *v187; // [rsp+60h] [rbp-A8h]
  volatile signed __int32 **v188; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v189; // [rsp+70h] [rbp-98h]
  volatile signed __int32 **v190; // [rsp+78h] [rbp-90h] BYREF
  __int64 v191; // [rsp+80h] [rbp-88h]
  volatile signed __int32 **v192; // [rsp+88h] [rbp-80h] BYREF
  __int64 v193; // [rsp+90h] [rbp-78h]
  char *v194; // [rsp+98h] [rbp-70h] BYREF
  __int64 v195; // [rsp+A0h] [rbp-68h]
  volatile signed __int32 **v196; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v197; // [rsp+B0h] [rbp-58h]
  struct _GUID *v198; // [rsp+B8h] [rbp-50h]
  struct _GUID *v199; // [rsp+C0h] [rbp-48h]
  struct _GUID *v200; // [rsp+C8h] [rbp-40h]
  char *v201; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v202; // [rsp+D8h] [rbp-30h]
  struct _GUID v203; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v204; // [rsp+F8h] [rbp-10h] BYREF
  char *v205; // [rsp+108h] [rbp+0h] BYREF
  char *v206; // [rsp+110h] [rbp+8h] BYREF
  char *v207; // [rsp+118h] [rbp+10h] BYREF
  char *v208; // [rsp+120h] [rbp+18h] BYREF
  char *v209; // [rsp+128h] [rbp+20h] BYREF
  char *v210; // [rsp+130h] [rbp+28h] BYREF
  struct _GUID v211; // [rsp+138h] [rbp+30h]
  PROPVARIANT v212; // [rsp+148h] [rbp+40h] BYREF
  __int64 v213; // [rsp+150h] [rbp+48h]
  __int64 v214; // [rsp+158h] [rbp+50h]
  PROPVARIANT pvar; // [rsp+160h] [rbp+58h] BYREF
  __int64 v216; // [rsp+168h] [rbp+60h]
  __int64 v217; // [rsp+170h] [rbp+68h]
  PROPVARIANT v218; // [rsp+178h] [rbp+70h] BYREF
  __int64 v219; // [rsp+180h] [rbp+78h]
  __int64 v220; // [rsp+188h] [rbp+80h]
  PROPVARIANT v221; // [rsp+190h] [rbp+88h] BYREF
  __int64 v222; // [rsp+198h] [rbp+90h]
  __int64 v223; // [rsp+1A0h] [rbp+98h]
  __int64 v224; // [rsp+1A8h] [rbp+A0h]
  __int64 v225; // [rsp+1B0h] [rbp+A8h]
  struct _GUID *v226; // [rsp+1B8h] [rbp+B0h]
  struct _GUID v227; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _GUID v228; // [rsp+1D8h] [rbp+D0h]
  __int128 v229; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v230; // [rsp+1F8h] [rbp+F0h]
  GUID v231; // [rsp+208h] [rbp+100h]
  char *v232; // [rsp+218h] [rbp+110h]
  __int64 v233; // [rsp+220h] [rbp+118h]
  char *v234; // [rsp+228h] [rbp+120h]
  struct _GUID v235; // [rsp+238h] [rbp+130h] BYREF
  SystemEffectChainDescriptor *v236; // [rsp+248h] [rbp+140h]
  volatile signed __int32 *v237; // [rsp+250h] [rbp+148h]
  struct _GUID v238; // [rsp+258h] [rbp+150h] BYREF
  SystemEffectChainDescriptor *v239; // [rsp+268h] [rbp+160h]
  volatile signed __int32 *v240; // [rsp+270h] [rbp+168h]
  struct _GUID v241; // [rsp+278h] [rbp+170h] BYREF
  __int128 v242; // [rsp+288h] [rbp+180h] BYREF
  struct _GUID v243; // [rsp+298h] [rbp+190h] BYREF
  struct _GUID v244; // [rsp+2A8h] [rbp+1A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v233 = -2LL;
  v13 = a4;
  v183 = a4;
  v14 = a3;
  LODWORD(v184) = a3;
  *(_DWORD *)&v182[4] = a1;
  v226 = a10;
  v15 = a11;
  v200 = a11;
  v16 = a12;
  v199 = a12;
  v17 = a13;
  v198 = a13;
  v243 = GUID_00000000_0000_0000_0000_000000000000;
  v204 = GUID_00000000_0000_0000_0000_000000000000;
  v203 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a4, a7, &v243, &v204, &v203);
    v18 = v243;
    v19 = v204;
    v20 = v203;
    goto LABEL_356;
  }
  v21 = a5;
  if ( a5 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a4,
      eHostProcessConnector,
      &v243,
      &v204,
      &v203);
    v18 = v243;
    v19 = v204;
    v20 = v203;
    goto LABEL_356;
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
    v216 = 0LL;
    v217 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(
           v26,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v25 = v216 == 0;
    }
    PropVariantClear(&pvar);
    if ( v25 )
    {
LABEL_18:
      v186 = (char *)(int)v23;
      v187 = (char *)v13 + 96 * v23;
      v28 = v187 + 232;
      if ( v187[284] )
      {
        v29 = (struct _RTL_CRITICAL_SECTION *)(v187 + 288);
        EnterCriticalSection((LPCRITICAL_SECTION)(v187 + 288));
        v205 = v187 + 288;
        v30 = 0;
        v31 = 0LL;
        v192 = 0LL;
        v32 = 0;
        v193 = 0LL;
        v33 = 0;
        v34 = 0;
        if ( *((int *)v187 + 68) > 0 )
        {
          v35 = 0LL;
          do
          {
            if ( v35 < 0 || v34 >= *((_DWORD *)v28 + 10) )
              goto LABEL_372;
            v36 = *((_QWORD *)v28 + 4);
            if ( v32 == v33 )
            {
              if ( v33 )
              {
                v33 = 2 * v32;
                if ( (v32 & 0x40000000) != 0 )
                  goto LABEL_79;
              }
              else
              {
                v33 = 1;
              }
              if ( (unsigned __int64)v33 > 0x7FFFFFF
                || (v37 = _o__recalloc(v31, v33, 16LL), (v31 = (volatile signed __int32 **)v37) == 0LL) )
              {
LABEL_79:
                v65 = 2147942414LL;
                v66 = 502LL;
                goto LABEL_80;
              }
              HIDWORD(v193) = v33;
              v192 = (volatile signed __int32 **)v37;
              v30 = 0;
            }
            v38 = &v31[2 * v32];
            if ( v38 )
            {
              *v38 = 0LL;
              v38[1] = 0LL;
              v39 = *(_QWORD *)(v36 + v35 + 8);
              if ( v39 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
                v33 = HIDWORD(v193);
                v32 = v193;
                v31 = v192;
              }
              *v38 = *(volatile signed __int32 **)(v36 + v35);
              v38[1] = *(volatile signed __int32 **)(v36 + v35 + 8);
            }
            LODWORD(v193) = ++v32;
            ++v34;
            v35 += 16LL;
          }
          while ( v34 < *((_DWORD *)v28 + 10) );
          v29 = (struct _RTL_CRITICAL_SECTION *)(v28 + 56);
        }
        v40 = 0;
        if ( v32 <= 0 )
        {
LABEL_43:
          if ( v31 )
          {
            if ( v32 > 0 )
            {
              v44 = v31 + 1;
              v45 = (unsigned int)v32;
              do
              {
                v46 = *v44;
                if ( *v44 && _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v46);
                }
                v44 += 2;
                --v45;
              }
              while ( v45 );
              v31 = v192;
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
            if ( v40 < 0 || v40 >= v32 )
            {
              ATL::_AtlRaiseException(0xC000008C, v30);
LABEL_374:
              ATL::_AtlRaiseException(0xC000008C, v58);
              __debugbreak();
            }
            if ( *((_BYTE *)*v41 + 20) )
            {
              v42 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      (__int64)&v192,
                                                      v40);
              v43 = SystemEffectChainDescriptor::Resolve(*v42, (struct SystemEffectDescriptor *)v28);
              if ( v43 < 0 )
                break;
            }
            ++v40;
            v41 += 2;
            if ( v40 >= v32 )
              goto LABEL_43;
          }
          v65 = (unsigned int)v43;
          v66 = 508LL;
LABEL_80:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v66,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v65);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v192);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v205);
        }
        v13 = v183;
      }
      if ( v187[668] )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v187 + 672));
        v206 = v187 + 672;
        v47 = 0LL;
        v201 = 0LL;
        v48 = 0;
        v202 = 0LL;
        v49 = 0;
        if ( *((int *)v187 + 164) <= 0 )
          goto LABEL_60;
        do
        {
          v50 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v187 + 648), v49);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v201,
                                v50) )
          {
            v67 = 2147942414LL;
            v68 = 502LL;
            goto LABEL_83;
          }
          ++v49;
        }
        while ( v49 < *((_DWORD *)v187 + 164) );
        v48 = v202;
        v47 = v201;
LABEL_60:
        v51 = 0;
        if ( v48 <= 0 )
        {
LABEL_64:
          if ( v47 )
          {
            if ( v48 > 0 )
            {
              v54 = v47;
              v55 = (unsigned int)v48;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v54);
                v54 += 16;
                --v55;
              }
              while ( v55 );
            }
            free(v47);
          }
          if ( v187 != (char *)-672LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v187 + 672));
        }
        else
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         (__int64)&v201,
                                         v51)
                          + 20LL) )
            {
              v52 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      (__int64)&v201,
                                                      v51);
              v53 = SystemEffectChainDescriptor::Resolve(*v52, (struct SystemEffectDescriptor *)(v187 + 616));
              if ( v53 < 0 )
                break;
            }
            if ( ++v51 >= v48 )
              goto LABEL_64;
          }
          v67 = (unsigned int)v53;
          v68 = 508LL;
LABEL_83:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v68,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v67);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v201);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v206);
        }
      }
      v56 = v187 + 1000;
      if ( v187[1052] )
      {
        v57 = (struct _RTL_CRITICAL_SECTION *)(v187 + 1056);
        EnterCriticalSection((LPCRITICAL_SECTION)(v187 + 1056));
        v207 = v187 + 1056;
        v58 = 0;
        v59 = 0LL;
        v196 = 0LL;
        v60 = 0;
        v197 = 0LL;
        v61 = 0;
        v62 = 0;
        if ( *((int *)v187 + 260) > 0 )
        {
          v63 = 0LL;
          do
          {
            if ( v63 < 0 || v62 >= *((_DWORD *)v56 + 10) )
              goto LABEL_374;
            v64 = *((_QWORD *)v56 + 4);
            if ( v60 == v61 )
            {
              if ( v61 )
              {
                v61 = 2 * v60;
                if ( (v60 & 0x40000000) != 0 )
                  goto LABEL_127;
              }
              else
              {
                v61 = 1;
              }
              if ( (unsigned __int64)v61 > 0x7FFFFFF
                || (v69 = _o__recalloc(v59, v61, 16LL), (v59 = (volatile signed __int32 **)v69) == 0LL) )
              {
LABEL_127:
                v84 = 2147942414LL;
                v85 = 502LL;
                goto LABEL_128;
              }
              HIDWORD(v197) = v61;
              v196 = (volatile signed __int32 **)v69;
              v58 = 0;
            }
            v70 = &v59[2 * v60];
            if ( v70 )
            {
              *v70 = 0LL;
              v70[1] = 0LL;
              v71 = *(_QWORD *)(v64 + v63 + 8);
              if ( v71 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v71 + 8));
                v61 = HIDWORD(v197);
                v60 = v197;
                v59 = v196;
              }
              *v70 = *(volatile signed __int32 **)(v64 + v63);
              v70[1] = *(volatile signed __int32 **)(v64 + v63 + 8);
            }
            LODWORD(v197) = ++v60;
            ++v62;
            v63 += 16LL;
          }
          while ( v62 < *((_DWORD *)v56 + 10) );
          v57 = (struct _RTL_CRITICAL_SECTION *)(v56 + 56);
        }
        v72 = 0;
        if ( v60 <= 0 )
        {
LABEL_102:
          if ( v59 )
          {
            if ( v60 > 0 )
            {
              v76 = v59 + 1;
              v77 = (unsigned int)v60;
              do
              {
                v78 = *v76;
                if ( *v76 && _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v78)(v78);
                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v78);
                }
                v76 += 2;
                --v77;
              }
              while ( v77 );
              v59 = v196;
            }
            free(v59);
          }
          if ( v57 )
            LeaveCriticalSection(v57);
        }
        else
        {
          v73 = v59;
          while ( 1 )
          {
            if ( v72 < 0 || v72 >= v60 )
            {
              ATL::_AtlRaiseException(0xC000008C, v58);
LABEL_376:
              ATL::_AtlRaiseException(0xC000008C, v117);
              __debugbreak();
            }
            if ( *((_BYTE *)*v73 + 20) )
            {
              v74 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      (__int64)&v196,
                                                      v72);
              v75 = SystemEffectChainDescriptor::Resolve(*v74, (struct SystemEffectDescriptor *)v56);
              if ( v75 < 0 )
                break;
            }
            ++v72;
            v73 += 2;
            if ( v72 >= v60 )
              goto LABEL_102;
          }
          v84 = (unsigned int)v75;
          v85 = 508LL;
LABEL_128:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v85,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v84);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v196);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v207);
        }
        v13 = v183;
      }
      v27 = (__int64)v13 + 16 * (_QWORD)v186 + 72;
      v21 = a5;
      v14 = v184;
      v24 = a7;
    }
    else
    {
      v27 = (__int64)v13 + 136;
    }
    v79 = *(_DWORD *)(v27 + 8);
    if ( v79 )
    {
      v80 = 0;
      if ( v79 <= 0 )
        goto LABEL_121;
      v81 = *(_QWORD *)v27;
      while ( *(_QWORD *)(v81 + 16LL * v80) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v81 + 16LL * v80 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v80 >= v79 )
          goto LABEL_121;
      }
      if ( v80 == -1 )
      {
LABEL_121:
        v82 = 0;
        if ( v79 <= 0 )
          goto LABEL_126;
        v83 = *(_QWORD *)v27;
        while ( *(_QWORD *)(v83 + 16LL * v82) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v83 + 16LL * v82 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v82 >= v79 )
            goto LABEL_126;
        }
        if ( v82 == -1 )
LABEL_126:
          v18 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v27, 0);
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
    v211 = v18;
    v244 = v18;
    v86 = 1;
    v87 = *((_QWORD *)v13 + 8);
    if ( !v87 )
      goto LABEL_142;
    v218 = 0LL;
    v219 = 0LL;
    v220 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v87 + 40LL))(
           v87,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v218) >= 0
      && (_WORD)v218 == 19 )
    {
      v86 = v219 == 0;
    }
    PropVariantClear(&v218);
    if ( v86 || v24 == eKeywordDetectorConnector )
LABEL_142:
      v88 = 1;
    else
      v88 = 0;
    v235 = v18;
    v89 = 96LL * (int)a7;
    v186 = (char *)v13 + v89;
    v90 = (char *)v13 + v89 + 616;
    v185 = v90;
    if ( !v88 )
    {
      v91 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                            (__int64 *)((char *)v13 + v89 + 616),
                            &v235) == -1;
      goto LABEL_176;
    }
    v228 = v18;
    v227 = v18;
    if ( v90[52] )
    {
      v92 = 0;
      if ( *((int *)v90 + 10) > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)(v90 + 32),
                                       v92)
                        + 20LL) )
          {
            v93 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                (__int64)(v90 + 32),
                                v92);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v93, &v227) != -1 )
              break;
          }
          if ( ++v92 >= *((_DWORD *)v90 + 10) )
            goto LABEL_167;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
        v232 = v90 + 56;
        v94 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v90 + 32), v92);
        v95 = *(volatile signed __int32 **)(v94 + 8);
        if ( v95 )
        {
          _InterlockedIncrement(v95 + 2);
          v95 = *(volatile signed __int32 **)(v94 + 8);
          v18 = v211;
        }
        v236 = *(SystemEffectChainDescriptor **)v94;
        v237 = v95;
        if ( (int)SystemEffectChainDescriptor::Resolve(v236, (struct SystemEffectDescriptor *)v90) < 0 )
        {
          if ( v95 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v95);
          if ( v90 != (char *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
          goto LABEL_158;
        }
        if ( v95 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v95);
        if ( v90 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
      }
    }
LABEL_167:
    v99 = 0;
    if ( *((int *)v90 + 10) > 0 )
    {
      while ( 1 )
      {
        v100 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)(v90 + 32),
                             v99);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v100, &v227) != -1 )
          break;
        if ( ++v99 >= *((_DWORD *)v90 + 10) )
          goto LABEL_158;
      }
      if ( v99 != -1 )
      {
        v96 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)(v90 + 32),
                           v99);
LABEL_175:
        v91 = v96 == 0;
LABEL_176:
        v243 = v18;
        v101 = &v244;
        if ( v91 )
          v101 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v19 = *v101;
        v204 = *v101;
        v20 = v18;
        v203 = v18;
        if ( v21 )
        {
          v102 = *(_DWORD *)&v182[4];
          if ( v21 == 1 )
          {
            if ( *(_DWORD *)&v182[4] == 18 )
            {
              if ( v14 )
              {
                v104 = (char *)&unk_180152B80;
                goto LABEL_198;
              }
            }
            else if ( *(_DWORD *)&v182[4] == 3 && v14 )
            {
              v104 = (char *)&unk_180152B70;
              goto LABEL_198;
            }
          }
        }
        else
        {
          v102 = *(_DWORD *)&v182[4];
          if ( dword_180180D40[*(unsigned int *)&v182[4]] )
          {
            VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(v13);
            v102 = *(_DWORD *)&v182[4];
            if ( VirtualSurroundEffectMode )
            {
              v104 = (char *)&unk_180152B90;
              goto LABEL_198;
            }
          }
        }
        if ( v21 )
        {
          if ( v21 != 1 )
          {
LABEL_191:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x34E,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x80070057LL);
            return 2147942487LL;
          }
        }
        else if ( v102 >= 0x15 )
        {
          goto LABEL_191;
        }
        if ( v21 == 1 && v102 >= 0x15 )
          goto LABEL_191;
        if ( v21 )
          v104 = (char *)*(&off_1801534D0 + v102);
        else
          v104 = (char *)*(&off_1801532D0 + v102);
LABEL_198:
        v187 = v104;
        v105 = 0;
        LODWORD(v184) = 0;
        if ( !*(_DWORD *)v104 )
          goto LABEL_355;
LABEL_199:
        v106 = v105;
        v225 = v105;
        v107 = 16LL * v105;
        v224 = v107;
        v238 = *(struct _GUID *)(v107 + *((_QWORD *)v104 + 1));
        v108 = v183;
        v109 = UseSupportedConnectorMode(v183, v102, a7, &v238, a9, v182);
        v110 = v109;
        if ( v109 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x35A,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v109);
          return v110;
        }
        if ( v182[0] )
        {
          v18 = *(struct _GUID *)(*((_QWORD *)v104 + 1) + 16LL * v105);
          v243 = v18;
          if ( a8
            || (v241 = v18,
                IsAPOModeSupported = CEndpointCharacteristics::IsAPOModeSupported(v108, &v241, a7),
                v181 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
                IsAPOModeSupported) )
          {
            v181 = &v243;
          }
          v19 = *v181;
          v20 = v18;
          goto LABEL_355;
        }
        v231 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( a7 == eHostProcessConnector )
        {
          v111 = 1;
          v112 = *((_QWORD *)v108 + 8);
          if ( v112 )
          {
            v221 = 0LL;
            v222 = 0LL;
            v223 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v112 + 40LL))(
                   v112,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v221) >= 0
              && (_WORD)v221 == 19 )
            {
              v111 = v222 == 0;
            }
            PropVariantClear(&v221);
            if ( !v111 )
            {
              v113 = (char *)v108 + 136;
              goto LABEL_305;
            }
          }
        }
        v114 = v186;
        v115 = v186 + 232;
        if ( v186[284] )
        {
          v116 = (struct _RTL_CRITICAL_SECTION *)(v186 + 288);
          EnterCriticalSection((LPCRITICAL_SECTION)(v186 + 288));
          v208 = v115 + 56;
          v117 = 0;
          v118 = 0LL;
          v188 = 0LL;
          v119 = 0LL;
          v189 = 0LL;
          v120 = 0;
          v121 = 0;
          if ( *((int *)v115 + 10) > 0 )
          {
            v122 = 0LL;
            while ( 1 )
            {
              if ( v122 < 0 || v121 >= *((_DWORD *)v115 + 10) )
                goto LABEL_376;
              v123 = *((_QWORD *)v115 + 4);
              if ( (_DWORD)v119 == v120 )
              {
                if ( v120 )
                {
                  v120 = 2 * v119;
                  if ( (v119 & 0x40000000) != 0 )
                    goto LABEL_269;
                }
                else
                {
                  v120 = 1;
                }
                if ( (unsigned __int64)v120 > 0x7FFFFFF
                  || (v124 = _o__recalloc(v118, v120, 16LL), (v118 = (volatile signed __int32 **)v124) == 0LL) )
                {
LABEL_269:
                  v150 = 2147942414LL;
                  v151 = 502LL;
                  goto LABEL_270;
                }
                HIDWORD(v189) = v120;
                v188 = (volatile signed __int32 **)v124;
                v117 = 0;
              }
              v125 = &v118[2 * (int)v119];
              if ( v125 )
              {
                *v125 = 0LL;
                v125[1] = 0LL;
                v126 = *(_QWORD *)(v123 + v122 + 8);
                if ( v126 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v126 + 8));
                  v120 = HIDWORD(v189);
                  LODWORD(v119) = v189;
                  v118 = v188;
                }
                *v125 = *(volatile signed __int32 **)(v123 + v122);
                v125[1] = *(volatile signed __int32 **)(v123 + v122 + 8);
              }
              v119 = (unsigned int)(v119 + 1);
              LODWORD(v189) = v119;
              ++v121;
              v122 += 16LL;
              if ( v121 >= *((_DWORD *)v115 + 10) )
              {
                v116 = (struct _RTL_CRITICAL_SECTION *)(v115 + 56);
                break;
              }
            }
          }
          v127 = 0;
          if ( (int)v119 <= 0 )
          {
LABEL_233:
            if ( v118 )
            {
              if ( (int)v119 > 0 )
              {
                v131 = v118 + 1;
                do
                {
                  v132 = *v131;
                  if ( *v131 && _InterlockedExchangeAdd(v132 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v132)(v132);
                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v132);
                  }
                  v131 += 2;
                  --v119;
                }
                while ( v119 );
                v118 = v188;
              }
              free(v118);
              v188 = 0LL;
            }
            v189 = 0LL;
            if ( v116 )
              LeaveCriticalSection(v116);
          }
          else
          {
            v128 = v118;
            while ( 1 )
            {
              if ( v127 < 0 || v127 >= (int)v119 )
              {
                ATL::_AtlRaiseException(0xC000008C, v117);
LABEL_378:
                ATL::_AtlRaiseException(0xC000008C, v143);
                JUMPOUT(0x18001492BLL);
              }
              if ( *((_BYTE *)*v128 + 20) )
              {
                v129 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         (__int64)&v188,
                                                         v127);
                v130 = SystemEffectChainDescriptor::Resolve(*v129, (struct SystemEffectDescriptor *)v115);
                if ( v130 < 0 )
                  break;
              }
              ++v127;
              v128 += 2;
              if ( v127 >= (int)v119 )
                goto LABEL_233;
            }
            v150 = (unsigned int)v130;
            v151 = 508LL;
LABEL_270:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v151,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v150);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v188);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v208);
          }
          v114 = v186;
          v90 = v185;
        }
        if ( v90[52] )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
          v209 = v90 + 56;
          v133 = 0LL;
          v194 = 0LL;
          v134 = 0LL;
          v195 = 0LL;
          v135 = 0;
          if ( *((int *)v90 + 10) > 0 )
          {
            while ( 1 )
            {
              v136 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v90 + 32), v135);
              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                    &v194,
                                    v136) )
                break;
              if ( ++v135 >= *((_DWORD *)v90 + 10) )
              {
                v134 = (unsigned int)v195;
                v133 = v194;
                goto LABEL_250;
              }
            }
            v152 = 2147942414LL;
            v153 = 502LL;
            goto LABEL_273;
          }
LABEL_250:
          v137 = 0;
          if ( (int)v134 > 0 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           (__int64)&v194,
                                           v137)
                            + 20LL) )
              {
                v138 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         (__int64)&v194,
                                                         v137);
                v139 = SystemEffectChainDescriptor::Resolve(*v138, (struct SystemEffectDescriptor *)v90);
                if ( v139 < 0 )
                  break;
              }
              if ( ++v137 >= (int)v134 )
                goto LABEL_254;
            }
            v152 = (unsigned int)v139;
            v153 = 508LL;
LABEL_273:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v153,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v152);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v194);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v209);
            goto LABEL_261;
          }
LABEL_254:
          if ( v133 )
          {
            if ( (int)v134 > 0 )
            {
              v140 = v133;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v140);
                v140 += 16;
                --v134;
              }
              while ( v134 );
            }
            free(v133);
            v194 = 0LL;
          }
          v195 = 0LL;
          if ( v90 != (char *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
        }
LABEL_261:
        v141 = v114 + 1000;
        if ( !v114[1052] )
          goto LABEL_304;
        v142 = (struct _RTL_CRITICAL_SECTION *)(v114 + 1056);
        EnterCriticalSection((LPCRITICAL_SECTION)(v114 + 1056));
        v210 = v114 + 1056;
        v143 = 0;
        v144 = 0LL;
        v190 = 0LL;
        v145 = 0LL;
        v191 = 0LL;
        v146 = 0;
        v147 = 0;
        if ( *((int *)v141 + 10) > 0 )
        {
          v148 = 0LL;
          do
          {
            if ( v148 < 0 || v147 >= *((_DWORD *)v141 + 10) )
              goto LABEL_378;
            v149 = *((_QWORD *)v141 + 4);
            if ( (_DWORD)v145 == v146 )
            {
              if ( v146 )
              {
                v146 = 2 * v145;
                if ( (v145 & 0x40000000) != 0 )
                  goto LABEL_309;
              }
              else
              {
                v146 = 1;
              }
              if ( (unsigned __int64)v146 > 0x7FFFFFF
                || (v154 = _o__recalloc(v144, v146, 16LL), (v144 = (volatile signed __int32 **)v154) == 0LL) )
              {
LABEL_309:
                v165 = 2147942414LL;
                v166 = 502LL;
                goto LABEL_310;
              }
              HIDWORD(v191) = v146;
              v190 = (volatile signed __int32 **)v154;
              v143 = 0;
            }
            v155 = &v144[2 * (int)v145];
            if ( v155 )
            {
              *v155 = 0LL;
              v155[1] = 0LL;
              v156 = *(_QWORD *)(v149 + v148 + 8);
              if ( v156 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v156 + 8));
                v146 = HIDWORD(v191);
                LODWORD(v145) = v191;
                v144 = v190;
              }
              *v155 = *(volatile signed __int32 **)(v149 + v148);
              v155[1] = *(volatile signed __int32 **)(v149 + v148 + 8);
            }
            v145 = (unsigned int)(v145 + 1);
            LODWORD(v191) = v145;
            ++v147;
            v148 += 16LL;
          }
          while ( v147 < *((_DWORD *)v141 + 10) );
          v142 = (struct _RTL_CRITICAL_SECTION *)(v141 + 56);
        }
        v157 = 0;
        if ( (int)v145 <= 0 )
        {
LABEL_292:
          if ( v144 )
          {
            if ( (int)v145 > 0 )
            {
              v161 = v144 + 1;
              do
              {
                v162 = *v161;
                if ( *v161 && _InterlockedExchangeAdd(v162 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v162)(v162);
                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v162);
                }
                v161 += 2;
                --v145;
              }
              while ( v145 );
              v144 = v190;
            }
            free(v144);
            v190 = 0LL;
          }
          v191 = 0LL;
          if ( v142 )
            LeaveCriticalSection(v142);
          goto LABEL_303;
        }
        v158 = v144;
        while ( v157 >= 0 && v157 < (int)v145 )
        {
          if ( *((_BYTE *)*v158 + 20) )
          {
            v159 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     (__int64)&v190,
                                                     v157);
            v160 = SystemEffectChainDescriptor::Resolve(*v159, (struct SystemEffectDescriptor *)v141);
            if ( v160 < 0 )
            {
              v165 = (unsigned int)v160;
              v166 = 508LL;
LABEL_310:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v166,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)v165);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v190);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v210);
LABEL_303:
              v90 = v185;
LABEL_304:
              v108 = v183;
              v113 = (char *)v183 + 16 * a7 + 72;
              v107 = v224;
              v104 = v187;
              v105 = v184;
              v106 = v225;
LABEL_305:
              v163 = 0;
              v164 = *((_DWORD *)v113 + 2);
              if ( v164 <= 0 )
                goto LABEL_352;
              while ( *(_OWORD *)(*(_QWORD *)v113 + 16LL * v163) != *(_OWORD *)&v231 )
              {
                if ( ++v163 >= v164 )
                  goto LABEL_352;
              }
              if ( v163 == -1 )
                goto LABEL_352;
              v167 = *(_OWORD *)(v107 + *((_QWORD *)v104 + 1));
              v168 = 1;
              v169 = *((_QWORD *)v108 + 8);
              if ( v169 )
              {
                v212 = 0LL;
                v213 = 0LL;
                v214 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v169 + 40LL))(
                       v169,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v212) >= 0
                  && (_WORD)v212 == 19 )
                {
                  v168 = v213 == 0;
                }
                PropVariantClear(&v212);
                if ( !v168 && a7 != eKeywordDetectorConnector )
                {
                  v242 = v167;
                  v170 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                         (__int64 *)v90,
                                         &v242) == -1;
                  goto LABEL_351;
                }
              }
              v230 = v167;
              v229 = v167;
              if ( v90[52] )
              {
                v171 = 0;
                if ( *((int *)v90 + 10) > 0 )
                {
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (__int64)(v90 + 32),
                                                 v171)
                                  + 20LL) )
                    {
                      v172 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           (__int64)(v90 + 32),
                                           v171);
                      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                           *v172,
                                           &v229) != -1 )
                        break;
                    }
                    if ( ++v171 >= *((_DWORD *)v90 + 10) )
                      goto LABEL_342;
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
                  v234 = v90 + 56;
                  v173 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)(v90 + 32),
                           v171);
                  v174 = *(volatile signed __int32 **)(v173 + 8);
                  if ( v174 )
                  {
                    _InterlockedIncrement(v174 + 2);
                    v174 = *(volatile signed __int32 **)(v173 + 8);
                  }
                  v239 = *(SystemEffectChainDescriptor **)v173;
                  v240 = v174;
                  if ( (int)SystemEffectChainDescriptor::Resolve(v239, (struct SystemEffectDescriptor *)v90) < 0 )
                  {
                    if ( v174 )
                      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v174);
                    if ( v90 != (char *)-56LL )
                      LeaveCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
                    goto LABEL_333;
                  }
                  if ( v174 )
                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v174);
                  if ( v90 != (char *)-56LL )
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v90 + 56));
                }
              }
LABEL_342:
              v178 = 0;
              if ( *((int *)v90 + 10) <= 0 )
                goto LABEL_382;
              while ( 1 )
              {
                v179 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)(v90 + 32),
                                     v178);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v179, &v229) != -1 )
                  break;
                if ( ++v178 >= *((_DWORD *)v90 + 10) )
                  goto LABEL_333;
              }
              if ( v178 == -1 )
              {
LABEL_382:
              {
LABEL_333:
                v175 = *((_QWORD *)v90 + 2);
                if ( !v175 )
                  goto LABEL_349;
                v176 = 0;
                v177 = *(_DWORD *)(v175 + 8);
                if ( v177 <= 0 )
                  goto LABEL_349;
                while ( *(_OWORD *)(*(_QWORD *)v175 + 16LL * v176) != v230 )
                {
                  if ( ++v176 >= v177 )
                    goto LABEL_349;
                }
                if ( v176 == -1 )
LABEL_349:
                  v175 = 0LL;
              }
              }
              else
              {
                v175 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                    (__int64)(v90 + 32),
                                    v178);
              }
              v170 = v175 == 0;
LABEL_351:
              if ( v170 )
              {
LABEL_352:
                LODWORD(v184) = ++v105;
                if ( v105 < *(_DWORD *)v104 )
                {
                  v102 = *(_DWORD *)&v182[4];
                  goto LABEL_199;
                }
                v18 = v243;
                v19 = v204;
                v20 = v203;
              }
              else
              {
                v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v19 = *(struct _GUID *)(*((_QWORD *)v104 + 1) + 16 * v106);
                v20 = v19;
              }
LABEL_355:
              v15 = v200;
              v16 = v199;
              v17 = v198;
LABEL_356:
              if ( v226 )
                *v226 = v18;
              if ( v15 )
                *v15 = v19;
              if ( v16 )
                *v16 = v20;
              if ( v17 )
                *v17 = v20;
              return 0LL;
            }
          }
          ++v157;
          v158 += 2;
          if ( v157 >= (int)v145 )
            goto LABEL_292;
        }
        ATL::_AtlRaiseException(0xC000008C, v143);
LABEL_372:
        ATL::_AtlRaiseException(0xC000008C, v30);
        __debugbreak();
      }
    }
LABEL_158:
    v96 = *((_QWORD *)v90 + 2);
    if ( !v96 )
      goto LABEL_174;
    v97 = 0;
    v98 = *(_DWORD *)(v96 + 8);
    if ( v98 <= 0 )
      goto LABEL_174;
    while ( *(_OWORD *)(*(_QWORD *)v96 + 16LL * v97) != *(_OWORD *)&v228 )
    {
      if ( ++v97 >= v98 )
        goto LABEL_174;
    }
    if ( v97 == -1 )
LABEL_174:
      v96 = 0LL;
    goto LABEL_175;
  }
  if ( CEndpointCharacteristics::AllowRawStreamCreation(a4, a7) )
  {
    v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    goto LABEL_356;
  }
  return 2290679847LL;
}
