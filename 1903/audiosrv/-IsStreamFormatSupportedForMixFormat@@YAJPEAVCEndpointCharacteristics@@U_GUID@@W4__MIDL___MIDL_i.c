/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180018970
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000EA00 (AudioServerIsFormatSupported.c)
 *     wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&_::Run @ 0x180044780 (wil--details--functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__-_--Run.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800DE858 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007820 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800180D0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800183D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003AC10 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18003E8BC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800471E0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180056C84 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800BE0E4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800BE110 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C1EC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801152C4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115A90 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180118550 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=48
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  __int64 v7; // r12
  __int64 cbSize; // rbx
  struct tWAVEFORMATEX *v10; // rax
  struct tWAVEFORMATEX *v11; // r15
  __int64 v12; // rbx
  struct tWAVEFORMATEX *v13; // rax
  __int64 v14; // rdi
  WORD wFormatTag; // ax
  struct SystemEffectDescriptor *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  char *v20; // r14
  struct _RTL_CRITICAL_SECTION *v21; // r12
  volatile signed __int32 *v22; // rbx
  int v23; // esi
  int v24; // r15d
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rsi
  char *v33; // r15
  int v34; // r14d
  int v35; // r14d
  struct SystemEffectDescriptor *v36; // r12
  struct _RTL_CRITICAL_SECTION *v37; // r13
  volatile signed __int32 *v38; // rbx
  int v39; // r15d
  __int64 v40; // r14
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v47; // r14d
  CEndpointCharacteristics *v48; // r12
  int Lfx; // r15d
  struct _RTL_CRITICAL_SECTION *v50; // r13
  volatile signed __int32 *v51; // rbx
  int v52; // r12d
  __int64 v53; // r14
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r14
  struct SystemEffectDescriptor *v60; // r13
  int v61; // r14d
  int v62; // r14d
  struct SystemEffectDescriptor *v63; // r12
  struct _RTL_CRITICAL_SECTION *v64; // r13
  volatile signed __int32 *v65; // rbx
  int v66; // r12d
  __int64 v67; // r14
  __int64 v68; // r13
  __int64 v69; // rax
  volatile signed __int32 *v70; // rcx
  __int64 v71; // rax
  volatile signed __int32 **v72; // rsi
  volatile signed __int32 *v73; // r14
  struct SystemEffectDescriptor *v74; // r12
  BOOL v75; // ebx
  __int64 v76; // rcx
  int v77; // eax
  struct _GUID *v78; // r13
  struct _GUID v79; // xmm0
  BOOL v80; // eax
  int v81; // ebx
  int v82; // ecx
  int v83; // ebx
  __int64 v84; // r9
  int v85; // r8d
  int v86; // r11d
  __int64 v87; // r10
  __int64 v88; // rax
  __int64 v89; // r11
  int v90; // eax
  int v91; // ecx
  __int64 v92; // r9
  int v93; // r8d
  int v94; // r11d
  __int64 v95; // r10
  __int64 v96; // rax
  int v97; // eax
  void *v98; // rbx
  bool v99; // zf
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rcx
  void *v103; // rax
  int v104; // eax
  int v105; // eax
  struct tWAVEFORMATEX *v106; // rsi
  int v107; // eax
  struct IAudioMediaType *v108; // rbx
  struct IAudioMediaType *v109; // rdi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v111; // eax
  bool v112; // di
  void *v113; // rcx
  const struct tWAVEFORMATEX *v114; // r14
  __int64 v115; // rdi
  struct tWAVEFORMATEX *v116; // rax
  void *v117; // rcx
  int v119; // ecx
  int v120; // ecx
  SystemEffectChainDescriptor *v121; // rcx
  int v122; // eax
  __int64 v123; // rax
  SystemEffectChainDescriptor *v124; // rcx
  int v125; // eax
  __int64 v126; // r14
  SystemEffectChainDescriptor *v127; // rcx
  int v128; // eax
  SystemEffectChainDescriptor *v129; // rcx
  int v130; // eax
  __int64 v131; // rax
  SystemEffectChainDescriptor *v132; // rcx
  int v133; // eax
  __int64 v134; // r14
  SystemEffectChainDescriptor *v135; // rcx
  int v136; // eax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  volatile signed __int32 *v139; // rbx
  _QWORD *v140; // rax
  _QWORD *v141; // rax
  volatile signed __int32 *v142; // rbx
  struct IAudioSystemEffects2 **v143; // [rsp+20h] [rbp-E0h]
  bool v144; // [rsp+40h] [rbp-C0h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+48h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+48h] [rbp-B8h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSectionb; // [rsp+48h] [rbp-B8h]
  struct SystemEffectDescriptor *v148; // [rsp+50h] [rbp-B0h]
  struct IAudioProcessingObject *v149; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v150; // [rsp+60h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v151; // [rsp+68h] [rbp-98h]
  __int64 v152; // [rsp+70h] [rbp-90h] BYREF
  __int64 v153; // [rsp+78h] [rbp-88h]
  __int64 v154; // [rsp+80h] [rbp-80h] BYREF
  __int64 v155; // [rsp+88h] [rbp-78h]
  __int64 v156; // [rsp+90h] [rbp-70h] BYREF
  __int64 v157; // [rsp+98h] [rbp-68h]
  volatile signed __int32 *v158; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v159; // [rsp+A8h] [rbp-58h]
  void *v160; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v161; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v162; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v163; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-30h]
  __int64 v165; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v166; // [rsp+E0h] [rbp-20h]
  struct SystemEffectDescriptor *v167; // [rsp+E8h] [rbp-18h]
  void *v168; // [rsp+F0h] [rbp-10h]
  struct IAudioMediaType *v169; // [rsp+F8h] [rbp-8h] BYREF
  struct IAudioMediaType *v170; // [rsp+100h] [rbp+0h] BYREF
  LPVOID pv; // [rsp+108h] [rbp+8h]
  int v172; // [rsp+110h] [rbp+10h] BYREF
  int v173; // [rsp+118h] [rbp+18h] BYREF
  int v174; // [rsp+120h] [rbp+20h] BYREF
  int v175; // [rsp+128h] [rbp+28h] BYREF
  int v176; // [rsp+130h] [rbp+30h]
  struct tWAVEFORMATEX *v177; // [rsp+138h] [rbp+38h]
  struct tWAVEFORMATEX *v178; // [rsp+140h] [rbp+40h]
  LPVOID *v179; // [rsp+148h] [rbp+48h]
  struct tWAVEFORMATEX *v180; // [rsp+150h] [rbp+50h] BYREF
  char v181; // [rsp+158h] [rbp+58h]
  PROPVARIANT pvar; // [rsp+160h] [rbp+60h] BYREF
  __int64 v183; // [rsp+168h] [rbp+68h]
  __int64 v184; // [rsp+170h] [rbp+70h]
  void *v185; // [rsp+178h] [rbp+78h] BYREF
  struct SystemEffectDescriptor *v186; // [rsp+180h] [rbp+80h]
  struct _GUID v187; // [rsp+190h] [rbp+90h] BYREF
  struct _GUID v188; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v189; // [rsp+1B0h] [rbp+B0h]
  __int128 v190; // [rsp+1C0h] [rbp+C0h]
  char *v191; // [rsp+1D0h] [rbp+D0h]
  char *v192; // [rsp+1D8h] [rbp+D8h]
  char *v193; // [rsp+1E0h] [rbp+E0h]
  __int64 v194; // [rsp+1E8h] [rbp+E8h]
  char *v195; // [rsp+1F0h] [rbp+F0h]
  char *v196; // [rsp+1F8h] [rbp+F8h]
  char *v197; // [rsp+200h] [rbp+100h]
  char *v198; // [rsp+208h] [rbp+108h]
  struct _GUID v199; // [rsp+210h] [rbp+110h] BYREF
  struct _GUID v200; // [rsp+220h] [rbp+120h] BYREF
  struct _GUID v201; // [rsp+230h] [rbp+130h] BYREF
  struct _GUID v202; // [rsp+240h] [rbp+140h] BYREF
  char *v203; // [rsp+250h] [rbp+150h]
  struct _GUID v204; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v194 = -2LL;
  v7 = a3;
  v176 = 0;
  v149 = 0LL;
  v144 = 1;
  v177 = 0LL;
  pv = 0LL;
  cbSize = Src->cbSize;
  v10 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v11 = v10;
  v151 = v10;
  if ( !v10 )
  {
    v177 = 0LL;
    Lfx = -2147024882;
    v106 = 0LL;
    goto LABEL_256;
  }
  memcpy_0(v10, Src, cbSize + 18);
  v177 = v11;
  v12 = a4->cbSize;
  v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v12 + 18);
  v14 = (__int64)v13;
  v178 = v13;
  if ( !v13 )
  {
    pv = 0LL;
    Lfx = -2147024882;
    goto LABEL_266;
  }
  memcpy_0(v13, a4, v12 + 18);
  pv = (LPVOID)v14;
  if ( (v11->wBitsPerSample & 0xFFF8u) > 0x100 )
  {
    Lfx = -2004287480;
    goto LABEL_266;
  }
  wFormatTag = v11->wFormatTag;
  LODWORD(v16) = 65534;
  if ( v11->wFormatTag == 0xFFFE )
    v144 = (v11[1].wFormatTag & 7) == 0;
  if ( wFormatTag == 1 )
  {
    v11->wFormatTag = 3;
LABEL_262:
    v11->wBitsPerSample = 32;
    v119 = (unsigned __int16)(4 * v11->nChannels);
    v11->nBlockAlign = v119;
    v11->nAvgBytesPerSec = v119 * v11->nSamplesPerSec;
    goto LABEL_11;
  }
  if ( wFormatTag == 0xFFFE )
  {
    v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2) )
      v17 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v11[1].wBitsPerSample;
    if ( !v17 && (v11[1].wFormatTag & 7) == 0 )
    {
      *(GUID *)((char *)&v11[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
      v11[1].wFormatTag = 32;
      goto LABEL_262;
    }
  }
LABEL_11:
  if ( *(_WORD *)v14 == 1 )
  {
    *(_WORD *)v14 = 3;
LABEL_270:
    *(_WORD *)(v14 + 14) = 32;
    v120 = (unsigned __int16)(4 * *(_WORD *)(v14 + 2));
    *(_WORD *)(v14 + 12) = v120;
    *(_DWORD *)(v14 + 8) = v120 * *(_DWORD *)(v14 + 4);
    goto LABEL_16;
  }
  if ( *(_WORD *)v14 == 0xFFFE )
  {
    v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)(v14 + 24);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)(v14 + 24) )
      v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)(v14 + 32);
    if ( !v18 && (*(_BYTE *)(v14 + 18) & 7) == 0 )
    {
      *(GUID *)(v14 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *(_WORD *)(v14 + 18) = 32;
      goto LABEL_270;
    }
  }
LABEL_16:
  v19 = 96 * v7;
  v20 = (char *)a1 + 96 * v7 + 232;
  v148 = (struct SystemEffectDescriptor *)v20;
  if ( !v20[52] )
    goto LABEL_274;
  v21 = (struct _RTL_CRITICAL_SECTION *)(v20 + 56);
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(v20 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
  v198 = v20 + 56;
  v14 = 0LL;
  v156 = 0LL;
  v22 = 0LL;
  v157 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( *((int *)v20 + 10) > 0 )
  {
    v25 = 0LL;
    v16 = v148;
    while ( 1 )
    {
      if ( v25 < 0 || v24 >= *((_DWORD *)v16 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18008CF0CLL);
      }
      v26 = *((_QWORD *)v16 + 4);
      if ( (_DWORD)v22 == v23 )
      {
        if ( v23 )
        {
          v23 = 2 * (_DWORD)v22;
          if ( ((unsigned int)v22 & 0x40000000) != 0 )
            goto LABEL_272;
        }
        else
        {
          v23 = 1;
        }
        if ( (unsigned __int64)v23 > 0x7FFFFFF || (v27 = _o__recalloc(v14, v23, 16LL), (v14 = v27) == 0) )
        {
LABEL_272:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v156);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_274;
        }
        HIDWORD(v157) = v23;
        v156 = v27;
        v16 = v148;
      }
      v28 = (_QWORD *)(v14 + 16LL * (int)v22);
      if ( v28 )
      {
        *v28 = 0LL;
        v28[1] = 0LL;
        v29 = *(_QWORD *)(v25 + v26 + 8);
        if ( v29 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
          v23 = HIDWORD(v157);
          LODWORD(v22) = v157;
          v14 = v156;
        }
        *v28 = *(_QWORD *)(v25 + v26);
        v28[1] = *(_QWORD *)(v25 + v26 + 8);
      }
      v22 = (volatile signed __int32 *)(unsigned int)((_DWORD)v22 + 1);
      LODWORD(v157) = (_DWORD)v22;
      ++v24;
      v25 += 16LL;
      if ( v24 >= *((_DWORD *)v16 + 10) )
      {
        v21 = lpCriticalSection;
        break;
      }
    }
  }
  v30 = 0LL;
  if ( (int)v22 <= 0 )
  {
LABEL_38:
    if ( v14 )
    {
      if ( (int)v22 > 0 )
      {
        v14 += 8LL;
        v30 = (unsigned int)v22;
        do
        {
          v22 = *(volatile signed __int32 **)v14;
          if ( *(_QWORD *)v14 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_281:
            (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v22);
          }
          v14 += 16LL;
          --v30;
        }
        while ( v30 );
        v14 = v156;
      }
      free((void *)v14);
      LODWORD(v32) = 0;
      v156 = 0LL;
    }
    else
    {
      LODWORD(v32) = 0;
    }
    v157 = 0LL;
    if ( v21 )
      LeaveCriticalSection(v21);
  }
  else
  {
    v31 = v14;
    while ( 1 )
    {
      if ( (int)v30 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_281;
      }
      if ( *(_BYTE *)(*(_QWORD *)v31 + 20LL) )
      {
        v121 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  (__int64)&v156,
                                                  v30);
        v122 = SystemEffectChainDescriptor::Resolve(v121, v148);
        if ( v122 < 0 )
          break;
      }
      v30 = (unsigned int)(v30 + 1);
      v31 += 16LL;
      if ( (int)v30 >= (int)v22 )
        goto LABEL_38;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v122);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v156);
    if ( v21 )
      LeaveCriticalSection(v21);
LABEL_274:
    LODWORD(v32) = 0;
  }
  v33 = (char *)a1 + v19 + 616;
  v186 = (struct SystemEffectDescriptor *)v33;
  if ( v33[52] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
    v195 = v33 + 56;
    v14 = 0LL;
    v163 = 0LL;
    v164 = 0LL;
    v34 = 0;
    if ( *((int *)v33 + 10) > 0 )
    {
      v14 = (__int64)(v33 + 32);
      while ( 1 )
      {
        v123 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)(v33 + 32), v34);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v163,
                              v123) )
          break;
        if ( ++v34 >= *((_DWORD *)v33 + 10) )
        {
          LODWORD(v32) = v164;
          v14 = v163;
          goto LABEL_50;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v163);
      if ( v33 != (char *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
      LODWORD(v32) = 0;
    }
    else
    {
LABEL_50:
      v35 = 0;
      if ( (int)v32 > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)&v163,
                                       v35)
                        + 20LL) )
          {
            v124 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      (__int64)&v163,
                                                      v35);
            v125 = SystemEffectChainDescriptor::Resolve(v124, (struct SystemEffectDescriptor *)v33);
            if ( v125 < 0 )
              break;
          }
          if ( ++v35 >= (int)v32 )
            goto LABEL_51;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FC,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v125);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v163);
        if ( v33 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
        LODWORD(v32) = 0;
      }
      else
      {
LABEL_51:
        if ( v14 )
        {
          if ( (int)v32 > 0 )
          {
            v126 = v14;
            v32 = (unsigned int)v32;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v126);
              v126 += 16LL;
              --v32;
            }
            while ( v32 );
          }
          free((void *)v14);
          LODWORD(v32) = 0;
          v163 = 0LL;
        }
        else
        {
          LODWORD(v32) = 0;
        }
        v164 = 0LL;
        if ( v33 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
      }
    }
  }
  v36 = (struct CEndpointCharacteristics *)((char *)a1 + v19 + 1000);
  v167 = v36;
  if ( !*((_BYTE *)v36 + 52) )
    goto LABEL_86;
  v37 = (struct _RTL_CRITICAL_SECTION *)((char *)v36 + 56);
  lpCriticalSectiona = (LPCRITICAL_SECTION)((char *)v36 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v36 + 56));
  v196 = (char *)v36 + 56;
  v14 = 0LL;
  v154 = 0LL;
  v38 = 0LL;
  v155 = 0LL;
  LODWORD(v16) = 0;
  v39 = 0;
  if ( *((int *)v36 + 10) > 0 )
  {
    v40 = 0LL;
    do
    {
      if ( v40 < 0 || v39 >= *((_DWORD *)v36 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18008D11BLL);
      }
      v41 = *((_QWORD *)v36 + 4);
      if ( (_DWORD)v38 == (_DWORD)v32 )
      {
        if ( (_DWORD)v32 )
        {
          LODWORD(v32) = 2 * (_DWORD)v38;
          if ( ((unsigned int)v38 & 0x40000000) != 0 )
            goto LABEL_302;
        }
        else
        {
          LODWORD(v32) = 1;
        }
        if ( (unsigned __int64)(int)v32 > 0x7FFFFFF || (v42 = _o__recalloc(v14, (int)v32, 16LL), (v14 = v42) == 0) )
        {
LABEL_302:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v154);
          if ( v37 )
            LeaveCriticalSection(v37);
          LODWORD(v32) = 0;
          goto LABEL_86;
        }
        HIDWORD(v155) = v32;
        v154 = v42;
        LODWORD(v16) = 0;
      }
      v43 = (_QWORD *)(v14 + 16LL * (int)v38);
      if ( v43 )
      {
        *v43 = 0LL;
        v43[1] = 0LL;
        v44 = *(_QWORD *)(v40 + v41 + 8);
        if ( v44 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
          LODWORD(v32) = HIDWORD(v155);
          LODWORD(v38) = v155;
          v14 = v154;
        }
        *v43 = *(_QWORD *)(v40 + v41);
        v43[1] = *(_QWORD *)(v40 + v41 + 8);
      }
      v38 = (volatile signed __int32 *)(unsigned int)((_DWORD)v38 + 1);
      LODWORD(v155) = (_DWORD)v38;
      ++v39;
      v40 += 16LL;
      v36 = v167;
    }
    while ( v39 < *((_DWORD *)v167 + 10) );
  }
  v45 = 0LL;
  if ( (int)v38 <= 0 )
  {
LABEL_76:
    if ( v14 )
    {
      if ( (int)v38 > 0 )
      {
        v14 += 8LL;
        v45 = (unsigned int)v38;
        do
        {
          v38 = *(volatile signed __int32 **)v14;
          if ( *(_QWORD *)v14 && _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_311:
            (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v38);
          }
          v14 += 16LL;
          --v45;
        }
        while ( v45 );
        v14 = v154;
        v37 = lpCriticalSectiona;
      }
      free((void *)v14);
      LODWORD(v32) = 0;
      v154 = 0LL;
    }
    else
    {
      LODWORD(v32) = 0;
    }
    v155 = 0LL;
    if ( v37 )
      LeaveCriticalSection(v37);
  }
  else
  {
    v46 = v14;
    while ( 1 )
    {
      if ( (int)v45 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_311;
      }
      if ( *(_BYTE *)(*(_QWORD *)v46 + 20LL) )
      {
        v127 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  (__int64)&v154,
                                                  v45);
        v128 = SystemEffectChainDescriptor::Resolve(v127, v36);
        if ( v128 < 0 )
          break;
      }
      v45 = (unsigned int)(v45 + 1);
      v46 += 16LL;
      if ( (int)v45 >= (int)v38 )
        goto LABEL_76;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v128);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v154);
    if ( v37 )
      LeaveCriticalSection(v37);
    LODWORD(v32) = 0;
  }
LABEL_86:
  v47 = a3;
  v48 = a1;
  if ( !*((_DWORD *)a1 + a3 + 12) )
  {
    Lfx = CEndpointCharacteristics::GetLfx(a1, a3, 0LL, &v149, v143);
    goto LABEL_314;
  }
  Lfx = 0;
  v149 = 0LL;
  if ( !*((_BYTE *)v148 + 52) )
    goto LABEL_119;
  v50 = (struct _RTL_CRITICAL_SECTION *)((char *)v148 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
  v197 = (char *)v148 + 56;
  v14 = 0LL;
  v152 = 0LL;
  v51 = 0LL;
  v153 = 0LL;
  v52 = 0;
  v16 = v148;
  if ( *((int *)v148 + 10) > 0 )
  {
    v53 = 0LL;
    while ( 1 )
    {
      if ( v53 < 0 || v52 >= *((_DWORD *)v16 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18008D235LL);
      }
      v54 = *((_QWORD *)v16 + 4);
      if ( (_DWORD)v51 == (_DWORD)v32 )
      {
        if ( (_DWORD)v32 )
        {
          LODWORD(v32) = 2 * (_DWORD)v51;
          if ( ((unsigned int)v51 & 0x40000000) != 0 )
            goto LABEL_316;
        }
        else
        {
          LODWORD(v32) = 1;
        }
        if ( (unsigned __int64)(int)v32 > 0x7FFFFFF || (v55 = _o__recalloc(v14, (int)v32, 16LL), (v14 = v55) == 0) )
        {
LABEL_316:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v152);
          if ( v148 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
          LODWORD(v32) = 0;
          goto LABEL_119;
        }
        HIDWORD(v153) = v32;
        v152 = v55;
        v16 = v148;
      }
      v56 = (_QWORD *)(v14 + 16LL * (int)v51);
      if ( v56 )
      {
        *v56 = 0LL;
        v56[1] = 0LL;
        v57 = *(_QWORD *)(v53 + v54 + 8);
        if ( v57 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v57 + 8));
          LODWORD(v32) = HIDWORD(v153);
          LODWORD(v51) = v153;
          v14 = v152;
        }
        *v56 = *(_QWORD *)(v53 + v54);
        v56[1] = *(_QWORD *)(v53 + v54 + 8);
      }
      v51 = (volatile signed __int32 *)(unsigned int)((_DWORD)v51 + 1);
      LODWORD(v153) = (_DWORD)v51;
      ++v52;
      v53 += 16LL;
      if ( v52 >= *((_DWORD *)v16 + 10) )
      {
        v50 = (struct _RTL_CRITICAL_SECTION *)((char *)v148 + 56);
        break;
      }
    }
  }
  v58 = 0LL;
  if ( (int)v51 <= 0 )
  {
LABEL_109:
    if ( v14 )
    {
      if ( (int)v51 > 0 )
      {
        v14 += 8LL;
        v58 = (unsigned int)v51;
        do
        {
          v51 = *(volatile signed __int32 **)v14;
          if ( *(_QWORD *)v14 && _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_325:
            (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v51);
          }
          v14 += 16LL;
          --v58;
        }
        while ( v58 );
        v14 = v152;
        v50 = (struct _RTL_CRITICAL_SECTION *)((char *)v148 + 56);
      }
      free((void *)v14);
      LODWORD(v32) = 0;
      v152 = 0LL;
    }
    else
    {
      LODWORD(v32) = 0;
    }
    v153 = 0LL;
    if ( v50 )
      LeaveCriticalSection(v50);
  }
  else
  {
    v59 = v14;
    while ( 1 )
    {
      if ( (int)v58 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_325;
      }
      if ( *(_BYTE *)(*(_QWORD *)v59 + 20LL) )
      {
        v129 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  (__int64)&v152,
                                                  v58);
        v130 = SystemEffectChainDescriptor::Resolve(v129, v148);
        if ( v130 < 0 )
          break;
      }
      v58 = (unsigned int)(v58 + 1);
      v59 += 16LL;
      if ( (int)v58 >= (int)v51 )
        goto LABEL_109;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v130);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v152);
    if ( v50 )
      LeaveCriticalSection(v50);
    LODWORD(v32) = 0;
  }
LABEL_119:
  v60 = v186;
  if ( *((_BYTE *)v186 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v186 + 56));
    v203 = (char *)v60 + 56;
    v14 = 0LL;
    v165 = 0LL;
    v166 = 0LL;
    v61 = 0;
    if ( *((int *)v60 + 10) > 0 )
    {
      v14 = (__int64)v60 + 32;
      while ( 1 )
      {
        v131 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v60 + 32, v61);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v165,
                              v131) )
          break;
        if ( ++v61 >= *((_DWORD *)v60 + 10) )
        {
          LODWORD(v32) = v166;
          v14 = v165;
          goto LABEL_121;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v165);
      if ( v60 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v60 + 56));
      LODWORD(v32) = 0;
    }
    else
    {
LABEL_121:
      v62 = 0;
      if ( (int)v32 > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)&v165,
                                       v62)
                        + 20LL) )
          {
            v132 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      (__int64)&v165,
                                                      v62);
            v133 = SystemEffectChainDescriptor::Resolve(v132, v60);
            if ( v133 < 0 )
              break;
          }
          if ( ++v62 >= (int)v32 )
            goto LABEL_122;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FC,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v133);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v165);
        if ( v60 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v60 + 56));
        LODWORD(v32) = 0;
      }
      else
      {
LABEL_122:
        if ( v14 )
        {
          if ( (int)v32 > 0 )
          {
            v134 = v14;
            v32 = (unsigned int)v32;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v134);
              v134 += 16LL;
              --v32;
            }
            while ( v32 );
          }
          free((void *)v14);
          LODWORD(v32) = 0;
          v165 = 0LL;
        }
        else
        {
          LODWORD(v32) = 0;
        }
        v166 = 0LL;
        if ( v60 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v60 + 56));
      }
    }
  }
  v63 = v167;
  if ( !*((_BYTE *)v167 + 52) )
    goto LABEL_158;
  v64 = (struct _RTL_CRITICAL_SECTION *)((char *)v167 + 56);
  lpCriticalSectionb = (struct _RTL_CRITICAL_SECTION *)((char *)v167 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v167 + 56));
  v191 = (char *)v63 + 56;
  v65 = 0LL;
  v158 = 0LL;
  v14 = 0LL;
  v159 = 0LL;
  v66 = 0;
  v16 = v167;
  if ( *((int *)v167 + 10) > 0 )
  {
    v67 = 0LL;
    while ( 1 )
    {
      if ( v67 < 0 || v66 >= *((_DWORD *)v16 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18008D44DLL);
      }
      v68 = *((_QWORD *)v16 + 4);
      if ( (_DWORD)v14 == (_DWORD)v32 )
      {
        if ( (_DWORD)v32 )
        {
          LODWORD(v32) = 2 * v14;
          if ( (v14 & 0x40000000) != 0 )
            goto LABEL_346;
        }
        else
        {
          LODWORD(v32) = 1;
        }
        if ( (unsigned __int64)(int)v32 > 0x7FFFFFF
          || (v69 = _o__recalloc(v65, (int)v32, 16LL), (v65 = (volatile signed __int32 *)v69) == 0LL) )
        {
LABEL_346:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v158);
          if ( lpCriticalSectionb )
            LeaveCriticalSection(lpCriticalSectionb);
          goto LABEL_158;
        }
        HIDWORD(v159) = v32;
        v158 = (volatile signed __int32 *)v69;
        v16 = v167;
      }
      v70 = &v65[4 * (int)v14];
      if ( v70 )
      {
        *(_QWORD *)v70 = 0LL;
        *((_QWORD *)v70 + 1) = 0LL;
        v71 = *(_QWORD *)(v67 + v68 + 8);
        if ( v71 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v71 + 8));
          LODWORD(v32) = HIDWORD(v159);
          LODWORD(v14) = v159;
          v65 = v158;
        }
        *(_QWORD *)v70 = *(_QWORD *)(v67 + v68);
        *((_QWORD *)v70 + 1) = *(_QWORD *)(v67 + v68 + 8);
      }
      v14 = (unsigned int)(v14 + 1);
      LODWORD(v159) = v14;
      ++v66;
      v67 += 16LL;
      if ( v66 >= *((_DWORD *)v16 + 10) )
      {
        v64 = lpCriticalSectionb;
        break;
      }
    }
  }
  v72 = 0LL;
  if ( (int)v14 <= 0 )
  {
LABEL_148:
    if ( v65 )
    {
      if ( (int)v14 > 0 )
      {
        v72 = (volatile signed __int32 **)(v65 + 2);
        do
        {
          v65 = *v72;
          if ( *v72 && _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
          {
LABEL_355:
            (**(void (__fastcall ***)(volatile signed __int32 *))v65)(v65);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v65);
          }
          v72 += 2;
          --v14;
        }
        while ( v14 );
        v65 = v158;
        v64 = lpCriticalSectionb;
      }
      free((void *)v65);
      v158 = 0LL;
    }
    v159 = 0LL;
    if ( v64 )
      LeaveCriticalSection(v64);
  }
  else
  {
    v73 = v65;
    v74 = v167;
    while ( 1 )
    {
      if ( (int)v72 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_355;
      }
      if ( *(_BYTE *)(*(_QWORD *)v73 + 20LL) )
      {
        v135 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  (__int64)&v158,
                                                  (int)v72);
        v136 = SystemEffectChainDescriptor::Resolve(v135, v74);
        if ( v136 < 0 )
          break;
      }
      v72 = (volatile signed __int32 **)(unsigned int)((_DWORD)v72 + 1);
      v73 += 4;
      if ( (int)v72 >= (int)v14 )
        goto LABEL_148;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v136);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v158);
    if ( v64 )
      LeaveCriticalSection(v64);
  }
LABEL_158:
  v47 = a3;
  v48 = a1;
  if ( !*((_DWORD *)a1 + a3 + 12) )
  {
LABEL_314:
    v78 = a2;
    goto LABEL_227;
  }
  v75 = 1;
  v76 = *((_QWORD *)a1 + 8);
  if ( !v76 )
    goto LABEL_164;
  pvar = 0LL;
  v183 = 0LL;
  v184 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v76 + 40LL))(
         v76,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v75 = v183 == 0;
  }
  PropVariantClear(&pvar);
  if ( v75 || (v77 = 0, a3 == eKeywordDetectorConnector) )
LABEL_164:
    v77 = 1;
  v78 = a2;
  v79 = *a2;
  v204 = *a2;
  if ( v77 )
  {
    v80 = *((_BYTE *)v148 + 52) == 0;
    v199 = v79;
    v187 = v79;
    if ( !v80 )
    {
      v81 = 0;
      if ( *((int *)v148 + 10) > 0 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( v81 < 0 || v81 >= *((_DWORD *)v148 + 10) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x18008D61ALL);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v14 + *((_QWORD *)v148 + 4)) + 20LL) )
          {
            v137 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)v148 + 32,
                               v81);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v137, &v187) != -1 )
              break;
          }
          ++v81;
          v14 += 16LL;
          if ( v81 >= *((_DWORD *)v148 + 10) )
            goto LABEL_173;
        }
        v14 = (__int64)v148 + 56;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
        v192 = (char *)v148 + 56;
        v138 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)v148 + 32,
                           v81);
        v189 = 0LL;
        v139 = (volatile signed __int32 *)v138[1];
        if ( v139 )
        {
          _InterlockedIncrement(v139 + 2);
          v139 = (volatile signed __int32 *)v138[1];
        }
        *(_QWORD *)&v189 = *v138;
        *((_QWORD *)&v189 + 1) = v139;
        if ( (int)SystemEffectChainDescriptor::Resolve((SystemEffectChainDescriptor *)v189, v148) < 0 )
        {
          if ( v139 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v139);
          if ( v148 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
          goto LABEL_369;
        }
        if ( v139 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v139);
        if ( v148 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
      }
    }
LABEL_173:
    v82 = 0;
    v83 = *((_DWORD *)v148 + 10);
    if ( v83 > 0 )
    {
      v84 = 0LL;
      while ( 1 )
      {
        if ( v84 < 0 || v82 >= v83 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_383;
        }
        v16 = *(struct SystemEffectDescriptor **)(v84 + *((_QWORD *)v148 + 4));
        v85 = 0;
        v86 = *((_DWORD *)v16 + 2);
        if ( v86 > 0 )
        {
          v87 = *(_QWORD *)v16;
          while ( 1 )
          {
            LODWORD(v16) = 2 * v85;
            v88 = *(_QWORD *)(v87 + 16LL * v85) - *(_QWORD *)&v187.Data1;
            if ( !v88 )
              v88 = *(_QWORD *)(v87 + 16LL * v85 + 8) - *(_QWORD *)v187.Data4;
            if ( !v88 )
              break;
            if ( ++v85 >= v86 )
              goto LABEL_379;
          }
          if ( v85 != -1 )
            break;
        }
LABEL_379:
        ++v82;
        v84 += 16LL;
        if ( v82 >= v83 )
          goto LABEL_369;
      }
      if ( v82 != -1 )
      {
        if ( v82 < 0 || v82 >= v83 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18008D64CLL);
        }
        v89 = *(_QWORD *)(*((_QWORD *)v148 + 4) + 16LL * v82);
LABEL_187:
        if ( !v89 )
          goto LABEL_226;
        goto LABEL_188;
      }
    }
LABEL_369:
    if ( !*((_QWORD *)v148 + 2)
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*((_QWORD *)v148 + 2), &v199) == -1 )
    {
      v89 = 0LL;
    }
    goto LABEL_187;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v148, &v204) == -1 )
    goto LABEL_226;
LABEL_188:
  v161 = 0LL;
  v149 = 0LL;
  if ( !v148 )
    goto LABEL_223;
  v160 = 0LL;
  v200 = *a2;
  v188 = v200;
  v83 = 0;
  v90 = *((_DWORD *)v148 + 10);
  if ( v90 <= 0 )
    goto LABEL_195;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v83 < 0 || v83 >= *((_DWORD *)v148 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      __debugbreak();
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v14 + *((_QWORD *)v148 + 4)) + 20LL) )
      goto LABEL_194;
LABEL_383:
    v140 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v148 + 32, v83);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v140, &v188) != -1 )
      break;
LABEL_194:
    ++v83;
    v14 += 16LL;
    v90 = *((_DWORD *)v148 + 10);
    if ( v83 >= v90 )
      goto LABEL_195;
  }
  v14 = (__int64)v148 + 56;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
  v193 = (char *)v148 + 56;
  v141 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v148 + 32, v83);
  v190 = 0LL;
  v142 = (volatile signed __int32 *)v141[1];
  if ( v142 )
  {
    _InterlockedIncrement(v142 + 2);
    v142 = (volatile signed __int32 *)v141[1];
  }
  *(_QWORD *)&v190 = *v141;
  *((_QWORD *)&v190 + 1) = v142;
  if ( (int)SystemEffectChainDescriptor::Resolve((SystemEffectChainDescriptor *)v190, v148) < 0 )
  {
    if ( v142 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v142);
    if ( v148 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
LABEL_391:
    v14 = *((_QWORD *)v148 + 2);
    if ( !v14
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*((_QWORD *)v148 + 2), &v200) == -1 )
    {
      v14 = 0LL;
    }
    goto LABEL_209;
  }
  if ( v142 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v142);
  if ( v148 != (struct SystemEffectDescriptor *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v148 + 56));
  v90 = *((_DWORD *)v148 + 10);
LABEL_195:
  v91 = 0;
  if ( v90 <= 0 )
    goto LABEL_391;
  v92 = 0LL;
  while ( 1 )
  {
    if ( v92 < 0 || v91 >= *((_DWORD *)v148 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      goto LABEL_405;
    }
    v16 = *(struct SystemEffectDescriptor **)(v92 + *((_QWORD *)v148 + 4));
    v93 = 0;
    v94 = *((_DWORD *)v16 + 2);
    if ( v94 > 0 )
    {
      v95 = *(_QWORD *)v16;
      while ( 1 )
      {
        LODWORD(v16) = 2 * v93;
        v96 = *(_QWORD *)(v95 + 16LL * v93) - *(_QWORD *)&v188.Data1;
        if ( !v96 )
          v96 = *(_QWORD *)(v95 + 16LL * v93 + 8) - *(_QWORD *)v188.Data4;
        if ( !v96 )
          break;
        if ( ++v93 >= v94 )
          goto LABEL_401;
      }
      if ( v93 != -1 )
        break;
    }
LABEL_401:
    ++v91;
    v92 += 16LL;
    if ( v91 >= *((_DWORD *)v148 + 10) )
      goto LABEL_391;
  }
  if ( v91 == -1 )
    goto LABEL_391;
  if ( v91 < 0 || v91 >= *((_DWORD *)v148 + 10) )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
    __debugbreak();
  }
  v14 = *(_QWORD *)(*((_QWORD *)v148 + 4) + 16LL * v91);
LABEL_209:
  v97 = 0;
  v98 = 0LL;
  v160 = 0LL;
  if ( !v14 )
    goto LABEL_218;
  v97 = *(_DWORD *)(v14 + 48);
  v99 = v97 == 0;
  if ( v97 <= 0 )
    goto LABEL_219;
  v168 = 0LL;
  v100 = *(int *)(v14 + 48);
  if ( !*(_DWORD *)(v14 + 48) )
  {
LABEL_405:
    LODWORD(v102) = 0;
LABEL_216:
    v103 = CoTaskMemAlloc((unsigned int)v102);
    v98 = v103;
    v168 = v103;
    if ( !v103 )
      goto LABEL_407;
    memcpy_0(v103, *(const void **)(v14 + 40), 16LL * *(int *)(v14 + 48));
    v168 = 0LL;
    v160 = v98;
    CoTaskMemFree(0LL);
    v168 = 0LL;
    v97 = *(_DWORD *)(v14 + 48);
LABEL_218:
    v99 = v97 == 0;
LABEL_219:
    if ( !v99 )
    {
      v174 = 0;
      v185 = v98;
      v172 = v97;
      v173 = *((_DWORD *)a1 + 39);
      v175 = 1;
      v104 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
               &v161,
               &v175,
               &v174,
               &v173,
               &v172,
               &v185);
      Lfx = v104;
      if ( v104 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x471,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v104);
        ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v160);
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v161);
        goto LABEL_226;
      }
      v201 = *a2;
      v47 = a3;
      v105 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, _QWORD))(*(_QWORD *)v161 + 24LL))(
               v161,
               *((_QWORD *)a1 + 2),
               &v201,
               0LL,
               a3,
               &v149,
               0LL);
      Lfx = v105;
      if ( v105 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x475,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v105);
        CoTaskMemFree(v98);
        v160 = 0LL;
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v161);
        goto LABEL_227;
      }
    }
    CoTaskMemFree(v98);
    v160 = 0LL;
LABEL_223:
    if ( v161 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v161 + 16LL))(v161);
    Lfx = 0;
    goto LABEL_226;
  }
  v101 = -1LL;
  if ( v100 != 1 )
    v101 = 0xFFFFFFFFFFFFFFFFuLL / v100;
  if ( v101 >= 0x10 )
  {
    v102 = 16 * v100;
    if ( v102 <= 0x7FFFFFFF )
      goto LABEL_216;
    v98 = 0LL;
    v168 = 0LL;
  }
LABEL_407:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  CoTaskMemFree(v98);
  v168 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x467,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v160);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v161);
  Lfx = -2147024882;
LABEL_226:
  v47 = a3;
LABEL_227:
  if ( Lfx < 0 )
    goto LABEL_266;
  if ( v149 )
  {
    v169 = 0LL;
    v170 = 0LL;
    v162 = 0LL;
    Lfx = CAudioMediaType::Create(v178, (unsigned int)v178->cbSize + 18, &v169, 0.0, 0);
    if ( Lfx >= 0 )
    {
      v106 = v151;
      Lfx = CAudioMediaType::Create(v151, (unsigned int)v151->cbSize + 18, &v170, 0.0, 0);
      if ( Lfx < 0 )
      {
        if ( v162 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v162 + 16LL))(v162);
        if ( v170 )
          ((void (__fastcall *)(struct IAudioMediaType *))v170->lpVtbl->Release)(v170);
        if ( v169 )
          ((void (__fastcall *)(struct IAudioMediaType *))v169->lpVtbl->Release)(v169);
      }
      else
      {
        v107 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v48 + 56LL))(v48);
        v108 = v170;
        v109 = v169;
        v99 = v107 == 0;
        lpVtbl = v149->lpVtbl;
        if ( v99 )
          v111 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))lpVtbl->IsInputFormatSupported)(
                   v149,
                   v169,
                   v170,
                   &v162);
        else
          v111 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))lpVtbl->IsOutputFormatSupported)(
                   v149,
                   v169,
                   v170,
                   &v162);
        Lfx = v111;
        if ( v111 < 0 )
        {
          if ( v162 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v162 + 16LL))(v162);
          if ( v108 )
            ((void (__fastcall *)(struct IAudioMediaType *))v108->lpVtbl->Release)(v108);
          if ( v109 )
            ((void (__fastcall *)(struct IAudioMediaType *))v109->lpVtbl->Release)(v109);
        }
        else
        {
          if ( v111 == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
            Lfx = 1;
          if ( v162 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v162 + 16LL))(v162);
          if ( v108 )
            ((void (__fastcall *)(struct IAudioMediaType *))v108->lpVtbl->Release)(v108);
          if ( v109 )
            ((void (__fastcall *)(struct IAudioMediaType *))v109->lpVtbl->Release)(v109);
LABEL_242:
          if ( a6 && Lfx )
          {
            v150 = 0LL;
            v179 = &v150;
            v180 = 0LL;
            v181 = 1;
            v176 = 1;
            v202 = *v78;
            v112 = CEndpointCharacteristics::TryGetOverridingMixFormat(v48, v47, &v202, &v180) >= 0 && v150;
            if ( v181 )
            {
              v113 = *v179;
              *v179 = v180;
              if ( v113 )
                CoTaskMemFree(v113);
            }
            if ( v112 )
              v114 = (const struct tWAVEFORMATEX *)v150;
            else
              v114 = a4;
            v115 = v114->cbSize;
            v116 = (struct tWAVEFORMATEX *)operator new[](v115 + 18, (const struct std::nothrow_t *)&std::nothrow);
            *a6 = v116;
            if ( v116 )
            {
              memcpy_0(v116, v114, v115 + 18);
              Lfx = 1;
            }
            else
            {
              Lfx = -2147024882;
            }
            v117 = v150;
            v150 = 0LL;
            if ( v117 )
              CoTaskMemFree(v117);
          }
        }
      }
      goto LABEL_256;
    }
    if ( v162 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v162 + 16LL))(v162);
    if ( v169 )
      ((void (__fastcall *)(struct IAudioMediaType *))v169->lpVtbl->Release)(v169);
LABEL_266:
    v106 = v151;
    goto LABEL_256;
  }
  v106 = v151;
  if ( (unsigned int)ValidateUncompressedWaveFormatEx(v151) )
  {
    Lfx = -2004287480;
  }
  else
  {
    if ( v106->nSamplesPerSec != v178->nSamplesPerSec
      || v106->nChannels != v178->nChannels
      || !v144
      || (unsigned int)ValidateWaveFormatEx(Src) )
    {
      Lfx = 1;
      goto LABEL_242;
    }
    Lfx = 0;
  }
LABEL_256:
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v106);
  v177 = 0LL;
  if ( v149 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v149->lpVtbl->Release)(v149);
  return (unsigned int)Lfx;
}
