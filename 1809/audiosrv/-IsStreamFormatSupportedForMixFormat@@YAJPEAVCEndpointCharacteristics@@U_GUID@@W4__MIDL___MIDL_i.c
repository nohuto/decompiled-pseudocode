/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180005440
 * Callers:
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&___ptr64_::Run @ 0x180015670 (wil--details--functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__-___ptr64_--Run.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800D1950 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000CAB0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800121CC (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18004E2C8 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800AF7B0 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B36A8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180107658 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180108730 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AAA8 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18010D3C8 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

// Hidden C++ exception states: #wind=48
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        __int32 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  struct _GUID v6; // xmm6
  __int64 v8; // r12
  __int64 cbSize; // rbx
  struct tWAVEFORMATEX *v11; // rax
  struct tWAVEFORMATEX *v12; // r15
  __int64 v13; // rbx
  struct tWAVEFORMATEX *v14; // rax
  unsigned __int64 v15; // rdi
  WORD wFormatTag; // ax
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _RTL_CRITICAL_SECTION *v20; // r13
  char *v21; // r14
  struct _RTL_CRITICAL_SECTION *v22; // r12
  unsigned __int64 v23; // rbx
  __int64 v24; // rsi
  int Lfx; // r15d
  struct IAudioMediaType *v26; // r14
  __int64 v27; // r12
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  volatile signed __int32 **v31; // rdi
  __int64 v32; // rsi
  volatile signed __int32 *v33; // rbx
  char *v34; // r15
  __int64 v35; // rsi
  unsigned int v36; // r14d
  char *v37; // r12
  __int64 v38; // r12
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  volatile signed __int32 **v42; // rdi
  __int64 v43; // rsi
  volatile signed __int32 *v44; // rbx
  struct CEndpointCharacteristics *v45; // r13
  int v46; // r12d
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rax
  volatile signed __int32 **v50; // rdi
  __int64 v51; // rsi
  volatile signed __int32 *v52; // rbx
  struct SystemEffectDescriptor *v53; // r13
  __int64 v54; // rsi
  unsigned int v55; // r14d
  int v56; // r12d
  __int64 v57; // rax
  volatile signed __int32 *v58; // rcx
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rcx
  int v62; // eax
  int v63; // ebx
  int v64; // ecx
  __int64 v65; // r9
  int v66; // r8d
  int v67; // r11d
  __int64 v68; // r10
  __int64 v69; // rax
  __int64 v70; // r11
  int v71; // eax
  int v72; // ecx
  __int64 v73; // r9
  int v74; // r8d
  int v75; // r11d
  __int64 v76; // r10
  __int64 v77; // rax
  __int64 v78; // rdi
  int v79; // eax
  void *v80; // rbx
  bool v81; // zf
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rcx
  void *v85; // rax
  int v86; // eax
  int v87; // eax
  struct tWAVEFORMATEX *v88; // r12
  struct IAudioMediaType *v89; // rbx
  struct IAudioMediaType *v90; // rdi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v92; // eax
  const struct tWAVEFORMATEX *v94; // rsi
  __int64 v95; // rdi
  struct tWAVEFORMATEX *v96; // rax
  int v97; // ecx
  int v98; // ecx
  SystemEffectChainDescriptor *v99; // rcx
  int v100; // eax
  __int64 v101; // rax
  SystemEffectChainDescriptor *v102; // rcx
  int v103; // eax
  unsigned __int64 v104; // r14
  SystemEffectChainDescriptor *v105; // rcx
  int v106; // eax
  SystemEffectChainDescriptor *v107; // rcx
  int v108; // eax
  __int64 v109; // rax
  SystemEffectChainDescriptor *v110; // rcx
  int v111; // eax
  unsigned __int64 v112; // r14
  SystemEffectChainDescriptor *v113; // rcx
  int v114; // eax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  volatile signed __int32 *v117; // rbx
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  volatile signed __int32 *v120; // rbx
  bool v121; // r14
  _QWORD *v122; // rdi
  struct tWAVEFORMATEX *v123; // rcx
  struct tWAVEFORMATEX *v124; // rsi
  struct IAudioSystemEffects2 **v125; // [rsp+28h] [rbp-E0h]
  int v126; // [rsp+28h] [rbp-E0h]
  bool v127; // [rsp+48h] [rbp-C0h]
  struct SystemEffectDescriptor *v128; // [rsp+50h] [rbp-B8h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+58h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+58h] [rbp-B0h]
  struct _RTL_CRITICAL_SECTION *v131; // [rsp+60h] [rbp-A8h]
  struct IAudioProcessingObject *v132; // [rsp+68h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v133; // [rsp+70h] [rbp-98h]
  volatile signed __int32 *v134; // [rsp+78h] [rbp-90h] BYREF
  __int64 v135; // [rsp+80h] [rbp-88h]
  _WORD *v136; // [rsp+88h] [rbp-80h] BYREF
  __int64 v137; // [rsp+90h] [rbp-78h]
  _WORD *v138; // [rsp+98h] [rbp-70h] BYREF
  __int64 v139; // [rsp+A0h] [rbp-68h]
  _WORD *v140; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v141; // [rsp+B0h] [rbp-58h]
  void *v142; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v143; // [rsp+C0h] [rbp-48h] BYREF
  struct IAudioMediaType *v144; // [rsp+C8h] [rbp-40h] BYREF
  _WORD *v145; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v146; // [rsp+D8h] [rbp-30h]
  _WORD *v147; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v148; // [rsp+E8h] [rbp-20h]
  void *v149; // [rsp+F0h] [rbp-18h]
  struct IAudioMediaType *v150; // [rsp+F8h] [rbp-10h] BYREF
  struct IAudioMediaType *v151; // [rsp+100h] [rbp-8h] BYREF
  LPVOID v152; // [rsp+108h] [rbp+0h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+8h]
  int v154; // [rsp+118h] [rbp+10h] BYREF
  int v155; // [rsp+120h] [rbp+18h] BYREF
  int v156; // [rsp+128h] [rbp+20h] BYREF
  int v157; // [rsp+130h] [rbp+28h] BYREF
  struct IAudioMediaType *v158; // [rsp+138h] [rbp+30h]
  struct tWAVEFORMATEX *v159; // [rsp+140h] [rbp+38h]
  struct _GUID v160; // [rsp+148h] [rbp+40h] BYREF
  LPVOID *v161; // [rsp+158h] [rbp+50h]
  struct tWAVEFORMATEX *v162; // [rsp+160h] [rbp+58h] BYREF
  char v163; // [rsp+168h] [rbp+60h]
  PROPVARIANT pvar; // [rsp+170h] [rbp+68h] BYREF
  __int64 v165; // [rsp+178h] [rbp+70h]
  __int64 v166; // [rsp+180h] [rbp+78h]
  void *v167; // [rsp+188h] [rbp+80h]
  struct SystemEffectDescriptor *v168; // [rsp+190h] [rbp+88h]
  struct _GUID v169; // [rsp+198h] [rbp+90h] BYREF
  __int128 v170; // [rsp+1A8h] [rbp+A0h]
  struct _GUID v171; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v172; // [rsp+1C8h] [rbp+C0h]
  char *v173; // [rsp+1D8h] [rbp+D0h]
  char *v174; // [rsp+1E0h] [rbp+D8h]
  char *v175; // [rsp+1E8h] [rbp+E0h]
  __int64 v176; // [rsp+1F0h] [rbp+E8h]
  char *v177; // [rsp+1F8h] [rbp+F0h]
  char *v178; // [rsp+200h] [rbp+F8h]
  char *v179; // [rsp+208h] [rbp+100h]
  char *v180; // [rsp+210h] [rbp+108h]
  struct _GUID v181; // [rsp+218h] [rbp+110h] BYREF
  struct _GUID v182; // [rsp+228h] [rbp+120h] BYREF
  struct _GUID v183; // [rsp+238h] [rbp+130h] BYREF
  struct _GUID v184; // [rsp+248h] [rbp+140h] BYREF
  HANDLE *p_OwningThread; // [rsp+258h] [rbp+150h]
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  v176 = -2LL;
  v8 = a3;
  v132 = 0LL;
  v127 = 1;
  v158 = 0LL;
  pv = 0LL;
  cbSize = Src->cbSize;
  v11 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  v133 = v11;
  if ( !v11 )
  {
    v26 = 0LL;
    v158 = 0LL;
    Lfx = -2147024882;
    v88 = 0LL;
    goto LABEL_245;
  }
  memcpy_0(v11, Src, cbSize + 18);
  v158 = (struct IAudioMediaType *)v12;
  v13 = a4->cbSize;
  v14 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v13 + 18);
  v15 = (unsigned __int64)v14;
  v159 = v14;
  if ( !v14 )
  {
    v26 = 0LL;
    pv = 0LL;
    Lfx = -2147024882;
    goto LABEL_259;
  }
  memcpy_0(v14, a4, v13 + 18);
  pv = (LPVOID)v15;
  if ( (v12->wBitsPerSample & 0xFFF8u) > 0x100 )
  {
    Lfx = -2004287480;
    v26 = 0LL;
    goto LABEL_259;
  }
  wFormatTag = v12->wFormatTag;
  LODWORD(v17) = 65534;
  if ( v12->wFormatTag == 0xFFFE )
    v127 = (v12[1].wFormatTag & 7) == 0;
  if ( wFormatTag == 1 )
  {
    v12->wFormatTag = 3;
LABEL_256:
    v12->wBitsPerSample = 32;
    v97 = (unsigned __int16)(4 * v12->nChannels);
    v12->nBlockAlign = v97;
    v12->nAvgBytesPerSec = v97 * v12->nSamplesPerSec;
    goto LABEL_11;
  }
  if ( wFormatTag == 0xFFFE )
  {
    v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v12[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v12[1].nSamplesPerSec + 2) )
      v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v12[1].wBitsPerSample;
    if ( !v18 && (v12[1].wFormatTag & 7) == 0 )
    {
      *(GUID *)((char *)&v12[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
      v12[1].wFormatTag = 32;
      goto LABEL_256;
    }
  }
LABEL_11:
  if ( *(_WORD *)v15 == 1 )
  {
    *(_WORD *)v15 = 3;
LABEL_265:
    *(_WORD *)(v15 + 14) = 32;
    v98 = (unsigned __int16)(4 * *(_WORD *)(v15 + 2));
    *(_WORD *)(v15 + 12) = v98;
    *(_DWORD *)(v15 + 8) = v98 * *(_DWORD *)(v15 + 4);
    goto LABEL_16;
  }
  if ( *(_WORD *)v15 == 0xFFFE )
  {
    v19 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)(v15 + 24);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)(v15 + 24) )
      v19 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)(v15 + 32);
    if ( !v19 && (*(_BYTE *)(v15 + 18) & 7) == 0 )
    {
      *(GUID *)(v15 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *(_WORD *)(v15 + 18) = 32;
      goto LABEL_265;
    }
  }
LABEL_16:
  v20 = (struct _RTL_CRITICAL_SECTION *)(96 * v8);
  v21 = (char *)a1 + 96 * v8 + 232;
  v128 = (struct SystemEffectDescriptor *)v21;
  if ( !v21[52] )
    goto LABEL_269;
  v22 = (struct _RTL_CRITICAL_SECTION *)(v21 + 56);
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(v21 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v21 + 56));
  v175 = v21 + 56;
  v15 = 0LL;
  v140 = 0LL;
  v23 = 0LL;
  v141 = 0LL;
  v24 = 0LL;
  Lfx = 0;
  if ( *((int *)v21 + 10) > 0 )
  {
    v26 = 0LL;
    v17 = v128;
    while ( 1 )
    {
      if ( (__int64)v26 < 0 || Lfx >= v17[10] )
      {
LABEL_339:
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_340;
      }
      v27 = *((_QWORD *)v17 + 4);
      if ( (_DWORD)v23 == (_DWORD)v24 )
      {
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(2 * v23);
          if ( (v23 & 0x40000000) != 0 )
            goto LABEL_267;
        }
        else
        {
          v24 = 1LL;
        }
        if ( (unsigned __int64)(int)v24 > 0x7FFFFFF || (v28 = _o__recalloc(v15, (int)v24, 16LL), (v15 = v28) == 0) )
        {
LABEL_267:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v125);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v140);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_269;
        }
        HIDWORD(v141) = v24;
        v140 = (_WORD *)v28;
        v17 = v128;
      }
      v29 = (_QWORD *)(v15 + 16LL * (int)v23);
      if ( v29 )
      {
        *v29 = 0LL;
        v29[1] = 0LL;
        v30 = *(__int64 *)((char *)&v26[1].lpVtbl + v27);
        if ( v30 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
          v24 = HIDWORD(v141);
          LODWORD(v23) = v141;
          v15 = (unsigned __int64)v140;
        }
        *v29 = *(struct IAudioMediaTypeVtbl **)((char *)&v26->lpVtbl + v27);
        v29[1] = *(struct IAudioMediaTypeVtbl **)((char *)&v26[1].lpVtbl + v27);
      }
      v23 = (unsigned int)(v23 + 1);
      LODWORD(v141) = v23;
      ++Lfx;
      v26 += 2;
      if ( Lfx >= v17[10] )
      {
        v22 = lpCriticalSection;
        break;
      }
    }
  }
  v26 = 0LL;
  v24 = 0LL;
  if ( (int)v23 <= 0 )
  {
LABEL_39:
    if ( v15 )
    {
      if ( (int)v23 > 0 )
      {
        v31 = (volatile signed __int32 **)(v15 + 8);
        v32 = (unsigned int)v23;
        do
        {
          v33 = *v31;
          if ( *v31 )
          {
            if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
              if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            }
          }
          v31 += 2;
          --v32;
        }
        while ( v32 );
        v15 = (unsigned __int64)v140;
        v22 = lpCriticalSection;
      }
      free((void *)v15);
      v140 = 0LL;
    }
    v141 = 0LL;
    if ( v22 )
      LeaveCriticalSection(v22);
  }
  else
  {
    v26 = (struct IAudioMediaType *)v15;
    Lfx = (int)v128;
    while ( 1 )
    {
      if ( (int)v24 < 0 )
        goto LABEL_339;
      if ( BYTE4(v26->lpVtbl->Release) )
      {
        v99 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v140,
                                                 (unsigned int)v24);
        v100 = SystemEffectChainDescriptor::Resolve(v99, v128);
        if ( v100 < 0 )
          break;
      }
      v24 = (unsigned int)(v24 + 1);
      v26 += 2;
      if ( (int)v24 >= (int)v23 )
      {
        v26 = 0LL;
        goto LABEL_39;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v100,
      (int)v125);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v140);
    if ( v22 )
      LeaveCriticalSection(v22);
LABEL_269:
    v26 = 0LL;
  }
  v34 = (char *)a1 + (_QWORD)v20 + 616;
  v168 = (struct SystemEffectDescriptor *)v34;
  if ( v34[52] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
    v180 = v34 + 56;
    v15 = 0LL;
    v145 = 0LL;
    v35 = 0LL;
    v146 = 0LL;
    if ( *((int *)v34 + 10) > 0 )
    {
      while ( 1 )
      {
        v101 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v34 + 32, (unsigned int)v26);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v145,
                              v101) )
          break;
        LODWORD(v26) = (_DWORD)v26 + 1;
        if ( (int)v26 >= *((_DWORD *)v34 + 10) )
        {
          v35 = (unsigned int)v146;
          v15 = (unsigned __int64)v145;
          goto LABEL_51;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v125);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v145);
      if ( v34 != (char *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
      v26 = 0LL;
    }
    else
    {
LABEL_51:
      v36 = 0;
      if ( (int)v35 > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v145,
                                       v36)
                        + 20LL) )
          {
            v102 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v145,
                                                      v36);
            v103 = SystemEffectChainDescriptor::Resolve(v102, (struct SystemEffectDescriptor *)v34);
            if ( v103 < 0 )
              break;
          }
          if ( (int)++v36 >= (int)v35 )
            goto LABEL_52;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v103,
          (int)v125);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v145);
        if ( v34 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
        v26 = 0LL;
      }
      else
      {
LABEL_52:
        if ( v15 )
        {
          if ( (int)v35 > 0 )
          {
            v104 = v15;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v104);
              v104 += 16LL;
              --v35;
            }
            while ( v35 );
          }
          free((void *)v15);
          v26 = 0LL;
          v145 = 0LL;
        }
        else
        {
          v26 = 0LL;
        }
        v146 = 0LL;
        if ( v34 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
      }
    }
  }
  v37 = (char *)a1 + (_QWORD)v20 + 1000;
  lpCriticalSectiona = (LPCRITICAL_SECTION)v37;
  if ( !v37[52] )
    goto LABEL_88;
  v20 = (struct _RTL_CRITICAL_SECTION *)(v37 + 56);
  v131 = (struct _RTL_CRITICAL_SECTION *)(v37 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v37 + 56));
  v177 = v37 + 56;
  v15 = 0LL;
  v138 = 0LL;
  v23 = 0LL;
  v139 = 0LL;
  v24 = 0LL;
  Lfx = 0;
  if ( *((int *)v37 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( (__int64)v26 < 0 || Lfx >= *((_DWORD *)v37 + 10) )
        goto LABEL_339;
      v38 = *((_QWORD *)v37 + 4);
      if ( (_DWORD)v23 == (_DWORD)v24 )
      {
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(2 * v23);
          if ( (v23 & 0x40000000) != 0 )
            goto LABEL_294;
        }
        else
        {
          v24 = 1LL;
        }
        if ( (unsigned __int64)(int)v24 > 0x7FFFFFF || (v39 = _o__recalloc(v15, (int)v24, 16LL), (v15 = v39) == 0) )
        {
LABEL_294:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v125);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v138);
          if ( v20 )
            LeaveCriticalSection(v20);
          v26 = 0LL;
          goto LABEL_88;
        }
        HIDWORD(v139) = v24;
        v138 = (_WORD *)v39;
      }
      v40 = (_QWORD *)(v15 + 16LL * (int)v23);
      if ( v40 )
      {
        *v40 = 0LL;
        v40[1] = 0LL;
        v41 = *(__int64 *)((char *)&v26[1].lpVtbl + v38);
        if ( v41 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
          v24 = HIDWORD(v139);
          LODWORD(v23) = v139;
          v15 = (unsigned __int64)v138;
        }
        *v40 = *(struct IAudioMediaTypeVtbl **)((char *)&v26->lpVtbl + v38);
        v40[1] = *(struct IAudioMediaTypeVtbl **)((char *)&v26[1].lpVtbl + v38);
      }
      v23 = (unsigned int)(v23 + 1);
      LODWORD(v139) = v23;
      ++Lfx;
      v26 += 2;
      v37 = (char *)lpCriticalSectiona;
      if ( Lfx >= SLODWORD(lpCriticalSectiona[1].DebugInfo) )
      {
        v26 = 0LL;
        break;
      }
    }
  }
  v24 = 0LL;
  if ( (int)v23 <= 0 )
  {
LABEL_78:
    if ( v15 )
    {
      if ( (int)v23 > 0 )
      {
        v42 = (volatile signed __int32 **)(v15 + 8);
        v43 = (unsigned int)v23;
        do
        {
          v44 = *v42;
          if ( *v42 )
          {
            if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
              if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            }
          }
          v42 += 2;
          --v43;
        }
        while ( v43 );
        v15 = (unsigned __int64)v138;
        v20 = v131;
      }
      free((void *)v15);
      v138 = 0LL;
    }
    v139 = 0LL;
    if ( v20 )
      LeaveCriticalSection(v20);
  }
  else
  {
    v26 = (struct IAudioMediaType *)v15;
    while ( 1 )
    {
      if ( (int)v24 < 0 )
        goto LABEL_339;
      if ( BYTE4(v26->lpVtbl->Release) )
      {
        v105 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v138,
                                                  (unsigned int)v24);
        v106 = SystemEffectChainDescriptor::Resolve(v105, (struct SystemEffectDescriptor *)v37);
        if ( v106 < 0 )
          break;
      }
      v24 = (unsigned int)(v24 + 1);
      v26 += 2;
      if ( (int)v24 >= (int)v23 )
      {
        v26 = 0LL;
        goto LABEL_78;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v106,
      (int)v125);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v138);
    if ( v20 )
      LeaveCriticalSection(v20);
    v26 = 0LL;
  }
LABEL_88:
  v45 = a1;
  if ( !*((_DWORD *)a1 + a3 + 12) )
  {
    Lfx = CEndpointCharacteristics::GetLfx(
            a1,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
            0LL,
            &v132,
            v125);
    goto LABEL_228;
  }
  v6 = *a2;
  Lfx = 0;
  v132 = 0LL;
  if ( *((_BYTE *)v128 + 52) )
  {
    v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v128 + 56);
    v131 = (struct _RTL_CRITICAL_SECTION *)((char *)v128 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
    v178 = (char *)v128 + 56;
    v15 = 0LL;
    v136 = 0LL;
    v23 = 0LL;
    v137 = 0LL;
    v24 = 0LL;
    v46 = 0;
    v17 = v128;
    if ( *((int *)v128 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v26 < 0 || v46 >= v17[10] )
          goto LABEL_339;
        v20 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v17 + 4);
        if ( (_DWORD)v23 == (_DWORD)v24 )
        {
          if ( (_DWORD)v24 )
          {
            v24 = (unsigned int)(2 * v23);
            if ( (v23 & 0x40000000) != 0 )
              goto LABEL_305;
          }
          else
          {
            v24 = 1LL;
          }
          if ( (unsigned __int64)(int)v24 > 0x7FFFFFF || (v47 = _o__recalloc(v15, (int)v24, 16LL), (v15 = v47) == 0) )
          {
LABEL_305:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v125);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v136);
            if ( v128 != (struct SystemEffectDescriptor *)-56LL )
              LeaveCriticalSection(v131);
            v26 = 0LL;
            goto LABEL_121;
          }
          HIDWORD(v137) = v24;
          v136 = (_WORD *)v47;
          v17 = v128;
        }
        v48 = (_QWORD *)(v15 + 16LL * (int)v23);
        if ( v48 )
        {
          *v48 = 0LL;
          v48[1] = 0LL;
          v49 = *(_QWORD *)((char *)&v20->LockCount + (_QWORD)v26);
          if ( v49 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
            v24 = HIDWORD(v137);
            LODWORD(v23) = v137;
            v15 = (unsigned __int64)v136;
          }
          *v48 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v20->DebugInfo + (_QWORD)v26);
          v48[1] = *(_QWORD *)((char *)&v20->LockCount + (_QWORD)v26);
        }
        v23 = (unsigned int)(v23 + 1);
        LODWORD(v137) = v23;
        ++v46;
        v26 += 2;
        if ( v46 >= v17[10] )
        {
          v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v128 + 56);
          v26 = 0LL;
          break;
        }
      }
    }
    v24 = 0LL;
    if ( (int)v23 <= 0 )
    {
LABEL_111:
      if ( v15 )
      {
        if ( (int)v23 > 0 )
        {
          v50 = (volatile signed __int32 **)(v15 + 8);
          v51 = (unsigned int)v23;
          do
          {
            v52 = *v50;
            if ( *v50 )
            {
              if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
                if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
              }
            }
            v50 += 2;
            --v51;
          }
          while ( v51 );
          v15 = (unsigned __int64)v136;
          v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v128 + 56);
        }
        free((void *)v15);
        v136 = 0LL;
      }
      v137 = 0LL;
      if ( v20 )
        LeaveCriticalSection(v20);
    }
    else
    {
      v26 = (struct IAudioMediaType *)v15;
      while ( 1 )
      {
        if ( (int)v24 < 0 )
          goto LABEL_339;
        if ( BYTE4(v26->lpVtbl->Release) )
        {
          v107 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v136,
                                                    (unsigned int)v24);
          v108 = SystemEffectChainDescriptor::Resolve(v107, v128);
          if ( v108 < 0 )
            break;
        }
        v24 = (unsigned int)(v24 + 1);
        v26 += 2;
        if ( (int)v24 >= (int)v23 )
        {
          v26 = 0LL;
          goto LABEL_111;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v108,
        (int)v125);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v136);
      if ( v20 )
        LeaveCriticalSection(v20);
      v26 = 0LL;
    }
  }
LABEL_121:
  v53 = v168;
  if ( *((_BYTE *)v168 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v168 + 56));
    v179 = (char *)v53 + 56;
    v15 = 0LL;
    v147 = 0LL;
    v54 = 0LL;
    v148 = 0LL;
    if ( *((int *)v53 + 10) > 0 )
    {
      while ( 1 )
      {
        v109 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                 (char *)v53 + 32,
                 (unsigned int)v26);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v147,
                              v109) )
          break;
        LODWORD(v26) = (_DWORD)v26 + 1;
        if ( (int)v26 >= *((_DWORD *)v53 + 10) )
        {
          v54 = (unsigned int)v148;
          v15 = (unsigned __int64)v147;
          goto LABEL_123;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v125);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v147);
      if ( v53 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v53 + 56));
      v26 = 0LL;
    }
    else
    {
LABEL_123:
      v55 = 0;
      if ( (int)v54 > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v147,
                                       v55)
                        + 20LL) )
          {
            v110 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v147,
                                                      v55);
            v111 = SystemEffectChainDescriptor::Resolve(v110, v53);
            if ( v111 < 0 )
              break;
          }
          if ( (int)++v55 >= (int)v54 )
            goto LABEL_124;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v111,
          (int)v125);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v147);
        if ( v53 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v53 + 56));
        v26 = 0LL;
      }
      else
      {
LABEL_124:
        if ( v15 )
        {
          if ( (int)v54 > 0 )
          {
            v112 = v15;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v112);
              v112 += 16LL;
              --v54;
            }
            while ( v54 );
          }
          free((void *)v15);
          v26 = 0LL;
          v147 = 0LL;
        }
        else
        {
          v26 = 0LL;
        }
        v148 = 0LL;
        if ( v53 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v53 + 56));
      }
    }
  }
  if ( !LOBYTE(lpCriticalSectiona[1].RecursionCount) )
    goto LABEL_160;
  v20 = (LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56);
  v131 = (LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56));
  p_OwningThread = &lpCriticalSectiona[1].OwningThread;
  v23 = 0LL;
  v134 = 0LL;
  v15 = 0LL;
  v135 = 0LL;
  v24 = 0LL;
  v56 = 0;
  v17 = lpCriticalSectiona;
  if ( SLODWORD(lpCriticalSectiona[1].DebugInfo) > 0 )
  {
    while ( 1 )
    {
      if ( (__int64)v26 < 0 || v56 >= v17[10] )
        goto LABEL_339;
      v20 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v17 + 4);
      if ( (_DWORD)v15 == (_DWORD)v24 )
      {
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(2 * v15);
          if ( (v15 & 0x40000000) != 0 )
            goto LABEL_332;
        }
        else
        {
          v24 = 1LL;
        }
        if ( (unsigned __int64)(int)v24 > 0x7FFFFFF || (v57 = _o__recalloc(v23, (int)v24, 16LL), (v23 = v57) == 0) )
        {
LABEL_332:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v125);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v134);
          if ( lpCriticalSectiona != (LPCRITICAL_SECTION)-56LL )
            LeaveCriticalSection(v131);
          v26 = 0LL;
          goto LABEL_160;
        }
        HIDWORD(v135) = v24;
        v134 = (volatile signed __int32 *)v57;
        v17 = lpCriticalSectiona;
      }
      v58 = (volatile signed __int32 *)(v23 + 16LL * (int)v15);
      if ( v58 )
      {
        *(_QWORD *)v58 = 0LL;
        *((_QWORD *)v58 + 1) = 0LL;
        v59 = *(_QWORD *)((char *)&v20->LockCount + (_QWORD)v26);
        if ( v59 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v59 + 8));
          v24 = HIDWORD(v135);
          LODWORD(v15) = v135;
          v23 = (unsigned __int64)v134;
        }
        *(_QWORD *)v58 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v20->DebugInfo + (_QWORD)v26);
        *((_QWORD *)v58 + 1) = *(_QWORD *)((char *)&v20->LockCount + (_QWORD)v26);
      }
      v15 = (unsigned int)(v15 + 1);
      LODWORD(v135) = v15;
      ++v56;
      v26 += 2;
      if ( v56 >= v17[10] )
      {
        v20 = (LPCRITICAL_SECTION)((char *)lpCriticalSectiona + 56);
        v26 = 0LL;
        break;
      }
    }
  }
  v24 = 0LL;
  if ( (int)v15 <= 0 )
  {
LABEL_150:
    if ( v23 )
    {
      if ( (int)v15 > 0 )
      {
        v24 = v23 + 8;
        LODWORD(v20) = -1;
        do
        {
          v23 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 && _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), (unsigned int)v20) == 1 )
          {
LABEL_340:
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)((volatile signed __int32 *)v23);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), (unsigned int)v20) == 1 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 8LL))(v23);
          }
          v24 += 16LL;
          --v15;
        }
        while ( v15 );
        v23 = (unsigned __int64)v134;
        v20 = v131;
      }
      free((void *)v23);
      v134 = (volatile signed __int32 *)v26;
    }
    v135 = 0LL;
    if ( v20 )
      LeaveCriticalSection(v20);
  }
  else
  {
    v26 = (struct IAudioMediaType *)v23;
    while ( 1 )
    {
      if ( (int)v24 < 0 )
        goto LABEL_339;
      if ( BYTE4(v26->lpVtbl->Release) )
      {
        v113 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v134,
                                                  (unsigned int)v24);
        v114 = SystemEffectChainDescriptor::Resolve(v113, (struct SystemEffectDescriptor *)lpCriticalSectiona);
        if ( v114 < 0 )
          break;
      }
      v24 = (unsigned int)(v24 + 1);
      v26 += 2;
      if ( (int)v24 >= (int)v15 )
      {
        v26 = 0LL;
        goto LABEL_150;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v114,
      (int)v125);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v134);
    if ( v20 )
      LeaveCriticalSection(v20);
    v26 = 0LL;
  }
LABEL_160:
  v45 = a1;
  if ( !*((_DWORD *)a1 + a3 + 12) )
    goto LABEL_228;
  v60 = 1;
  v61 = *((_QWORD *)a1 + 8);
  if ( !v61 )
    goto LABEL_166;
  pvar = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v61 + 40LL))(
         v61,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v60 = (int)v26;
    LOBYTE(v60) = (_DWORD)v165 == 0;
  }
  PropVariantClear(&pvar);
  if ( v60 || (v62 = (int)v26, a3 == 3) )
LABEL_166:
    v62 = 1;
  v181 = v6;
  v26 = (struct IAudioMediaType *)v128;
  if ( v62 )
  {
    v171 = v6;
    v160 = v6;
    if ( *((_BYTE *)v128 + 52) )
    {
      v63 = 0;
      if ( *((int *)v128 + 10) > 0 )
      {
        v15 = 0LL;
        while ( 1 )
        {
          if ( v63 < 0 || v63 >= *((_DWORD *)v128 + 10) )
            goto LABEL_365;
          if ( *(_BYTE *)(*(_QWORD *)(v15 + *((_QWORD *)v128 + 4)) + 20LL) )
          {
            v115 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (char *)v128 + 32,
                               (unsigned int)v63);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v115, &v160) != -1 )
              break;
          }
          ++v63;
          v15 += 16LL;
          if ( v63 >= *((_DWORD *)v128 + 10) )
            goto LABEL_175;
        }
        v15 = (unsigned __int64)v128 + 56;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
        v173 = (char *)v128 + 56;
        v116 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (char *)v128 + 32,
                           (unsigned int)v63);
        v170 = 0LL;
        v117 = (volatile signed __int32 *)v116[1];
        if ( v117 )
        {
          _InterlockedIncrement(v117 + 2);
          v117 = (volatile signed __int32 *)v116[1];
        }
        *(_QWORD *)&v170 = *v116;
        *((_QWORD *)&v170 + 1) = v117;
        if ( (int)SystemEffectChainDescriptor::Resolve((SystemEffectChainDescriptor *)v170, v128) < 0 )
        {
          if ( v117 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v117);
          if ( v128 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
          goto LABEL_354;
        }
        if ( v117 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v117);
        if ( v128 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
      }
    }
LABEL_175:
    v64 = 0;
    v63 = *((_DWORD *)v128 + 10);
    if ( v63 > 0 )
    {
      v65 = 0LL;
      while ( 1 )
      {
        if ( v65 < 0 || v64 >= v63 )
          goto LABEL_365;
        v17 = *(_DWORD **)(v65 + *((_QWORD *)v128 + 4));
        v66 = 0;
        v67 = v17[2];
        if ( v67 > 0 )
        {
          v68 = *(_QWORD *)v17;
          while ( 1 )
          {
            LODWORD(v17) = 2 * v66;
            v69 = *(_QWORD *)(v68 + 16LL * v66) - *(_QWORD *)&v160.Data1;
            if ( !v69 )
              v69 = *(_QWORD *)(v68 + 16LL * v66 + 8) - *(_QWORD *)v160.Data4;
            if ( !v69 )
              break;
            if ( ++v66 >= v67 )
              goto LABEL_363;
          }
          if ( v66 != -1 )
            break;
        }
LABEL_363:
        ++v64;
        v65 += 16LL;
        if ( v64 >= v63 )
          goto LABEL_354;
      }
      if ( v64 != -1 )
      {
        if ( v64 < 0 || v64 >= v63 )
        {
LABEL_365:
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_366;
        }
        v70 = *(_QWORD *)(*((_QWORD *)v128 + 4) + 16LL * v64);
LABEL_189:
        if ( v70 )
          goto LABEL_190;
LABEL_345:
        v26 = 0LL;
        goto LABEL_228;
      }
    }
LABEL_354:
    if ( !*((_QWORD *)v128 + 2)
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*((_QWORD *)v128 + 2), &v171) == -1 )
    {
      v70 = 0LL;
    }
    goto LABEL_189;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v128, &v181) == -1 )
    goto LABEL_345;
LABEL_190:
  v143 = 0LL;
  v132 = 0LL;
  if ( !v128 )
  {
LABEL_225:
    if ( v143 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v143 + 16LL))(v143);
    Lfx = (int)v26;
    goto LABEL_228;
  }
  v142 = 0LL;
  v182 = v6;
  v169 = v6;
  v63 = 0;
  v71 = *((_DWORD *)v128 + 10);
  if ( v71 <= 0 )
    goto LABEL_197;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v63 < 0 || v63 >= *((_DWORD *)v128 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v17);
      __debugbreak();
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v15 + *((_QWORD *)v128 + 4)) + 20LL) )
      goto LABEL_196;
LABEL_366:
    v118 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       (char *)v128 + 32,
                       (unsigned int)v63);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v118, &v169) != -1 )
      break;
LABEL_196:
    ++v63;
    v15 += 16LL;
    v71 = *((_DWORD *)v128 + 10);
    if ( v63 >= v71 )
      goto LABEL_197;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
  v174 = (char *)v128 + 56;
  v119 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                     (char *)v128 + 32,
                     (unsigned int)v63);
  v172 = 0LL;
  v120 = (volatile signed __int32 *)v119[1];
  if ( v120 )
  {
    _InterlockedIncrement(v120 + 2);
    v120 = (volatile signed __int32 *)v119[1];
  }
  *(_QWORD *)&v172 = *v119;
  *((_QWORD *)&v172 + 1) = v120;
  if ( (int)SystemEffectChainDescriptor::Resolve((SystemEffectChainDescriptor *)v172, v128) < 0 )
  {
    if ( v120 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v120);
    if ( v128 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
    goto LABEL_374;
  }
  if ( v120 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v120);
  if ( v128 != (struct SystemEffectDescriptor *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v128 + 56));
  v71 = *((_DWORD *)v128 + 10);
LABEL_197:
  v72 = 0;
  if ( v71 <= 0 )
    goto LABEL_374;
  v73 = 0LL;
  while ( 1 )
  {
    if ( v73 < 0 || v72 >= *((_DWORD *)v128 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v17);
      __debugbreak();
    }
    v17 = *(_DWORD **)(v73 + *((_QWORD *)v128 + 4));
    v74 = 0;
    v75 = v17[2];
    if ( v75 > 0 )
    {
      v76 = *(_QWORD *)v17;
      while ( 1 )
      {
        LODWORD(v17) = 2 * v74;
        v77 = *(_QWORD *)(v76 + 16LL * v74) - *(_QWORD *)&v169.Data1;
        if ( !v77 )
          v77 = *(_QWORD *)(v76 + 16LL * v74 + 8) - *(_QWORD *)v169.Data4;
        if ( !v77 )
          break;
        if ( ++v74 >= v75 )
          goto LABEL_384;
      }
      if ( v74 != -1 )
        break;
    }
LABEL_384:
    ++v72;
    v73 += 16LL;
    if ( v72 >= *((_DWORD *)v128 + 10) )
      goto LABEL_374;
  }
  if ( v72 == -1 )
  {
LABEL_374:
    v78 = *((_QWORD *)v128 + 2);
    if ( !v78
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*((_QWORD *)v128 + 2), &v182) == -1 )
    {
      v26 = 0LL;
      v78 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
  }
  else
  {
    if ( v72 < 0 || v72 >= *((_DWORD *)v128 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v17);
      __debugbreak();
    }
    v78 = *(_QWORD *)(*((_QWORD *)v128 + 4) + 16LL * v72);
    v26 = 0LL;
  }
  v79 = 0;
  v80 = 0LL;
  v142 = 0LL;
  if ( !v78 )
    goto LABEL_220;
  v79 = *(_DWORD *)(v78 + 48);
  v81 = v79 == 0;
  if ( v79 <= 0 )
    goto LABEL_221;
  v149 = 0LL;
  v82 = *(int *)(v78 + 48);
  if ( !*(_DWORD *)(v78 + 48) )
  {
    LODWORD(v84) = 0;
LABEL_218:
    v85 = CoTaskMemAlloc((unsigned int)v84);
    v80 = v85;
    v149 = v85;
    if ( !v85 )
      goto LABEL_391;
    memcpy_0(v85, *(const void **)(v78 + 40), 16LL * *(int *)(v78 + 48));
    v149 = 0LL;
    v142 = v80;
    CoTaskMemFree(0LL);
    v149 = 0LL;
    v79 = *(_DWORD *)(v78 + 48);
LABEL_220:
    v81 = v79 == 0;
LABEL_221:
    if ( !v81 )
    {
      v156 = 0;
      v167 = v80;
      v154 = v79;
      v155 = *((_DWORD *)a1 + 39);
      v157 = 1;
      v86 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
              &v143,
              &v157,
              &v156,
              &v155);
      Lfx = v86;
      if ( v86 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x463,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v86,
          (int)&v154);
        ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v142);
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v143);
        goto LABEL_228;
      }
      v183 = v6;
      v87 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD))(*(_QWORD *)v143 + 24LL))(
              v143,
              *((_QWORD *)a1 + 2),
              &v183,
              0LL);
      Lfx = v87;
      if ( v87 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x467,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v87,
          a3);
        CoTaskMemFree(v80);
        v142 = 0LL;
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v143);
        goto LABEL_228;
      }
    }
    CoTaskMemFree(v80);
    v142 = 0LL;
    goto LABEL_225;
  }
  v83 = -1LL;
  if ( v82 != 1 )
    v83 = 0xFFFFFFFFFFFFFFFFuLL / v82;
  if ( v83 >= 0x10 )
  {
    v84 = 16 * v82;
    if ( v84 <= 0x7FFFFFFF )
      goto LABEL_218;
    v80 = 0LL;
    v149 = 0LL;
  }
LABEL_391:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    (int)v125);
  CoTaskMemFree(v80);
  v149 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x459,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL,
    v126);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v142);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v143);
  Lfx = -2147024882;
LABEL_228:
  if ( Lfx < 0 )
    goto LABEL_259;
  if ( v132 )
  {
    v150 = v26;
    v151 = v26;
    v144 = v26;
    Lfx = CAudioMediaType::Create(v159, (unsigned int)v159->cbSize + 18, &v150, 0.0, (int)v26);
    if ( Lfx >= 0 )
    {
      v88 = v133;
      Lfx = CAudioMediaType::Create(v133, (unsigned int)v133->cbSize + 18, &v151, 0.0, (int)v26);
      if ( Lfx < 0 )
      {
        if ( v144 )
          ((void (__fastcall *)(struct IAudioMediaType *))v144->lpVtbl->Release)(v144);
        if ( v151 )
          ((void (__fastcall *)(struct IAudioMediaType *))v151->lpVtbl->Release)(v151);
        if ( v150 )
          ((void (__fastcall *)(struct IAudioMediaType *))v150->lpVtbl->Release)(v150);
      }
      else
      {
        v89 = v151;
        v90 = v150;
        lpVtbl = v132->lpVtbl;
        if ( *((_DWORD *)v45 + 39) )
          v92 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsOutputFormatSupported)(
                  v132,
                  v150,
                  v151,
                  &v144);
        else
          v92 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsInputFormatSupported)(
                  v132,
                  v150,
                  v151,
                  &v144);
        Lfx = v92;
        if ( v92 < 0 )
        {
          if ( v144 )
            ((void (__fastcall *)(struct IAudioMediaType *))v144->lpVtbl->Release)(v144);
          if ( v89 )
            ((void (__fastcall *)(struct IAudioMediaType *))v89->lpVtbl->Release)(v89);
          if ( v90 )
            ((void (__fastcall *)(struct IAudioMediaType *))v90->lpVtbl->Release)(v90);
        }
        else
        {
          if ( v92 == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
            Lfx = 1;
          if ( v144 )
            ((void (__fastcall *)(struct IAudioMediaType *))v144->lpVtbl->Release)(v144);
          if ( v89 )
            ((void (__fastcall *)(struct IAudioMediaType *))v89->lpVtbl->Release)(v89);
          if ( v90 )
            ((void (__fastcall *)(struct IAudioMediaType *))v90->lpVtbl->Release)(v90);
LABEL_243:
          if ( a6 && Lfx )
          {
            v152 = v26;
            if ( g_bIsSurfaceHub )
            {
              v161 = &v152;
              v162 = (struct tWAVEFORMATEX *)v26;
              v163 = 1;
              v184 = *a2;
              v121 = CEndpointCharacteristics::TryGetOverridingMixFormat(
                       v45,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       &v184,
                       &v162) >= 0;
              if ( v163 )
              {
                v122 = v161;
                v123 = (struct tWAVEFORMATEX *)*v161;
                v124 = v162;
                if ( v162 != *v161 )
                {
                  if ( v123 )
                    CoTaskMemFree(v123);
                  *v122 = v124;
                }
              }
              v94 = a4;
              if ( v121 && v152 )
                v94 = (const struct tWAVEFORMATEX *)v152;
              v26 = 0LL;
            }
            else
            {
              v94 = a4;
            }
            v95 = v94->cbSize;
            v96 = (struct tWAVEFORMATEX *)operator new[](v95 + 18, (const struct std::nothrow_t *)&std::nothrow);
            *a6 = v96;
            if ( v96 )
            {
              memcpy_0(v96, v94, v95 + 18);
              Lfx = 1;
            }
            else
            {
              Lfx = -2147024882;
            }
            if ( v152 )
              CoTaskMemFree(v152);
          }
        }
      }
      goto LABEL_245;
    }
    if ( v144 )
      ((void (__fastcall *)(struct IAudioMediaType *))v144->lpVtbl->Release)(v144);
    if ( v150 )
      ((void (__fastcall *)(struct IAudioMediaType *))v150->lpVtbl->Release)(v150);
LABEL_259:
    v88 = v133;
    goto LABEL_245;
  }
  v88 = v133;
  if ( (unsigned int)ValidateUncompressedWaveFormatEx(v133) )
  {
    Lfx = -2004287480;
  }
  else
  {
    if ( v88->nSamplesPerSec != v159->nSamplesPerSec
      || v88->nChannels != v159->nChannels
      || !v127
      || (unsigned int)ValidateWaveFormatEx(Src) )
    {
      Lfx = 1;
      goto LABEL_243;
    }
    Lfx = (int)v26;
  }
LABEL_245:
  CoTaskMemFree(pv);
  pv = v26;
  CoTaskMemFree(v88);
  v158 = v26;
  if ( v132 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v132->lpVtbl->Release)(v132);
  return (unsigned int)Lfx;
}
