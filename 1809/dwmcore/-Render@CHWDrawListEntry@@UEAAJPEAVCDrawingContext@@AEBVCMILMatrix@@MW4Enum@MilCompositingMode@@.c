/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180009CEC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18000A4D8 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000A6C4 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ??$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCStateSettingDrawListEntry@@@@PEAPEAVCStateSettingDrawListEntry@@@Z @ 0x180010860 (--$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableRef.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x180022B64 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024D34 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180025230 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180025284 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180025ACC (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180025C0C (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800C7474 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18018762C (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x180189D1C (-BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r14
  struct CHwLightCollectionBuffer *v6; // r15
  int v7; // esi
  float v8; // xmm5_4
  bool v9; // r12
  struct ClipPlaneInfoRef *v10; // r13
  struct CBaseDrawListEntry *v13; // r8
  __m128 *v14; // rax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  struct CBaseDrawListEntry *v18; // rsi
  __int64 v19; // rax
  CMILRefCountBase *v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rsi
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  void (__fastcall ***v27)(_QWORD); // rbx
  struct CBaseDrawListEntry *v28; // r13
  struct CBaseDrawListEntry *v29; // rcx
  __int64 v30; // rax
  int v31; // r12d
  int v32; // edi
  char v33; // r8
  float v34; // xmm8_4
  float v35; // xmm6_4
  float v36; // xmm9_4
  float v37; // xmm7_4
  int v38; // r15d
  int *v39; // rdx
  __int64 v40; // r14
  bool v41; // zf
  __int64 v42; // r8
  int *v43; // r10
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  float *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  void (__fastcall ***v50)(_QWORD); // rdi
  void (__fastcall ***v51)(_QWORD); // rcx
  void (__fastcall ***v52)(_QWORD); // rax
  __int64 v53; // r14
  __int64 v54; // rdi
  __int64 v55; // rcx
  void (__fastcall ***v56)(_QWORD); // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v60; // ecx
  bool v61; // al
  void (__fastcall ***v62)(_QWORD); // rdi
  void (__fastcall ***v63)(_QWORD); // rax
  __int64 v64; // rcx
  __int128 v65; // xmm0
  void (__fastcall ***v66)(_QWORD); // rcx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rcx
  void (__fastcall ***v70)(_QWORD); // rax
  int v71; // esi
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rdi
  int v76; // eax
  unsigned int v77; // ecx
  int v78; // ebx
  __int64 v79; // rdi
  __int64 v80; // rax
  CBatchOptimizer *v81; // rcx
  __int64 v82; // rdx
  unsigned int v83; // ecx
  float v84; // xmm1_4
  struct CD3DDeviceLevel1 *v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rax
  struct ClipPlaneInfoRef *v90; // rcx
  __int128 v91; // xmm0
  __int64 v92; // r15
  __int64 v93; // r12
  int *v94; // rdi
  __int64 v95; // rdx
  void (__fastcall ***v96)(_QWORD); // rcx
  __int64 v97; // r15
  int v98; // edx
  __int64 k; // rcx
  __int64 v100; // rcx
  int v101; // eax
  unsigned int v102; // ecx
  volatile signed __int32 *v103; // rbx
  __int64 v104; // r12
  __int64 v105; // rax
  CBatchOptimizer *v106; // rcx
  unsigned int v107; // ecx
  int v108; // edi
  __int64 v109; // r14
  __int64 j; // rbx
  __int64 v111; // rsi
  CD2DTarget *v112; // rsi
  __int64 i; // rbx
  CD2DTarget *v114; // r14
  __int64 v115; // rdi
  __int64 v116; // rcx
  int v117; // eax
  unsigned int v118; // ecx
  struct CStateSettingDrawListEntry *v119; // rbx
  __int64 v120; // r12
  __int64 v121; // rax
  CBatchOptimizer *v122; // rcx
  int v123; // esi
  __int64 v124; // rcx
  unsigned int v125; // ecx
  struct CDrawListEntryBatch::CSharedDirect3DResources *v126; // r14
  CDrawListEntryBatch *v127; // rax
  unsigned int v128; // ecx
  CDrawListEntryBatch *v129; // rax
  CDrawListEntryBatch *v130; // rbx
  unsigned int v131; // eax
  unsigned int v132; // edx
  int v133; // eax
  unsigned int v134; // ecx
  __m128 v135; // xmm2
  float v136; // xmm3_4
  D3DVALUE v137; // xmm1_4
  float v138; // xmm0_4
  D3DVALUE v139; // xmm3_4
  D3DVALUE v140; // xmm0_4
  CDrawListPrimitive *v141; // rcx
  struct ClipPlaneInfoRef *v142; // rax
  int v143; // eax
  unsigned int v144; // ecx
  float v145; // xmm1_4
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // eax
  unsigned int v152; // ecx
  unsigned int v153; // [rsp+20h] [rbp-E0h]
  char v154; // [rsp+30h] [rbp-D0h]
  char v155[7]; // [rsp+31h] [rbp-CFh] BYREF
  struct CHwLightCollectionBuffer *v156; // [rsp+38h] [rbp-C8h] BYREF
  struct CBaseDrawListEntry *v157; // [rsp+40h] [rbp-C0h]
  CMILRefCountBase *v158; // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v159)(_QWORD); // [rsp+50h] [rbp-B0h] BYREF
  CMILRefCountBase *v160; // [rsp+58h] [rbp-A8h] BYREF
  CDrawListEntryBatch *v161; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DCOLORVALUE v162; // [rsp+68h] [rbp-98h] BYREF
  struct CBaseDrawListEntry *v163; // [rsp+78h] [rbp-88h] BYREF
  __int128 v164; // [rsp+80h] [rbp-80h]
  _OWORD v165[2]; // [rsp+90h] [rbp-70h] BYREF
  char v166[16]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = *(_QWORD *)(a2 + 384);
  v6 = 0LL;
  v7 = a5;
  v8 = a4;
  v9 = 0;
  v157 = (struct CBaseDrawListEntry *)a1;
  v10 = 0LL;
  v156 = 0LL;
  v13 = (struct CBaseDrawListEntry *)a1;
  if ( a4 == 1.0 )
    v9 = a5 == 0;
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 && v9 )
    v7 = 1;
  v14 = *(__m128 **)(a1 + 24);
  if ( v14 )
  {
    v135 = v14[7];
    v136 = _mm_shuffle_ps(v135, v135, 255).m128_f32[0];
    v137 = (float)(_mm_shuffle_ps(v135, v135, 85).m128_f32[0] * v136) * *(float *)(a1 + 36);
    v162.r = (float)(v136 * v135.m128_f32[0]) * *(float *)(a1 + 32);
    v138 = v136;
    v139 = v136 * *(float *)(a1 + 44);
    v162.g = v137;
    v162.a = v139;
    v140 = (float)(v138 * _mm_shuffle_ps(v135, v135, 170).m128_f32[0]) * *(float *)(a1 + 40);
    v141 = *(CDrawListPrimitive **)(a1 + 136);
    v162.b = v140;
    CDrawListPrimitive::UpdatePremultipliedColor(v141, &v162);
    v13 = v157;
  }
  if ( !v7 )
    goto LABEL_7;
  v71 = v7 - 1;
  if ( v71 )
  {
    v123 = v71 - 1;
    if ( v123 )
    {
      if ( v123 != 2 )
      {
LABEL_7:
        v15 = 0;
        goto LABEL_8;
      }
      v15 = 22;
    }
    else
    {
      v15 = 21;
    }
  }
  else
  {
    v15 = 5;
  }
LABEL_8:
  if ( !*((_DWORD *)v13 + 4) )
  {
    *(_OWORD *)((char *)v13 + 56) = *(_OWORD *)a3;
    *(_OWORD *)((char *)v13 + 72) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)((char *)v13 + 88) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)((char *)v13 + 104) = *(_OWORD *)(a3 + 48);
    v16 = *(_DWORD *)(a3 + 64);
    *((float *)v13 + 13) = v8;
    *((_DWORD *)v13 + 30) = v16;
    *((_DWORD *)v13 + 12) = v15;
  }
  if ( (*((_BYTE *)v13 + 124) & 0x10) != 0 )
  {
    v124 = *((_QWORD *)v13 + 18);
    v165[0] = *(_OWORD *)(*((_QWORD *)v13 + 17) + 56LL);
    v108 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v124 + 56LL))(v124, a2, v165);
    if ( v108 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v108, 0x7Eu);
      return (unsigned int)v108;
    }
    v13 = v157;
  }
  v17 = *((_DWORD *)v13 + 31);
  if ( (v17 & 0x200) != 0 )
  {
    v72 = *(_DWORD *)(a2 + 248);
    v73 = 0LL;
    v74 = *((_QWORD *)v13 + 18);
    if ( v72 >= 1 )
    {
      switch ( v72 )
      {
        case 1:
          v73 = 1LL;
          break;
        case 2:
        case 3:
          v73 = 2LL;
          break;
        case 4:
        case 6:
          v73 = 3LL;
          break;
        case 5:
          v73 = 4LL;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 64LL))(v74, v73);
    v18 = v157;
    v17 = *((_DWORD *)v157 + 31);
  }
  else
  {
    v18 = v157;
  }
  if ( (v17 & 4) != 0 )
    *(_BYTE *)(a2 + 6355) = 1;
  if ( !*(_DWORD *)(a2 + 768) && *(_DWORD *)(a2 + 696) )
  {
    v108 = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
             (CLightStack *)(a2 + 672),
             (struct CDrawingContext *)a2,
             (const struct CMILMatrix *)(a2 + 6064),
             &v156);
    if ( v108 >= 0 )
    {
      v6 = v156;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v108, 0x90u);
    return (unsigned int)v108;
  }
LABEL_17:
  v19 = *(_QWORD *)(a2 + 3512);
  if ( v19 )
  {
    v142 = *(struct ClipPlaneInfoRef **)(v19 + 256);
    if ( v142 )
      v10 = v142;
  }
  if ( (*((_BYTE *)v18 + 124) & 8) != 0 && v9 )
  {
    v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
    if ( !*(_BYTE *)(v75 + 492) )
    {
      v112 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v75 + 232) + 384LL))(*(_QWORD *)(v75 + 232));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v75 + 392); v112 = v114 )
      {
        v114 = *(CD2DTarget **)(*(_QWORD *)(v75 + 368) + 8 * i);
        if ( v112 )
          *((_BYTE *)v112 + 48) = 0;
        CD2DTarget::ApplyState(v114, (struct CD2DContext *)v75);
        i = (unsigned int)(i + 1);
      }
      v18 = v157;
      *(_BYTE *)(v75 + 492) = 1;
    }
    *(_BYTE *)(v75 + 493) = 1;
    v76 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v75, v6, v10);
    v78 = v76;
    if ( v76 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x2F6u);
      goto LABEL_218;
    }
    v79 = *(_QWORD *)(v75 + 176);
    ++dword_180308078;
    v80 = *(_QWORD *)(v79 + 24);
    v81 = *(CBatchOptimizer **)(v80 + 184);
    if ( v81 )
    {
      CBatchOptimizer::AddRenderingDrawListEntry(v81, v18);
      v78 = 0;
    }
    else
    {
      v143 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v80 + 8), v18);
      v78 = v143;
      if ( v143 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v143, 0x73u);
LABEL_113:
        if ( v78 >= 0 )
          return (unsigned int)v78;
        MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v78, 0x2F9u);
LABEL_218:
        if ( v78 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v146, 0LL, 0, v78, 0x9Au);
        return (unsigned int)v78;
      }
    }
    LOBYTE(v82) = 1;
    if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>((char *)v18 + 56, v82)
      && (v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v18 + 15) - 0.0)) & _xmm), v84 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v18 + 18) - 0.0)) & _xmm) < 0.000081380211
      || (v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v18 + 14) - 0.0)) & _xmm), v145 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v18 + 19) - 0.0)) & _xmm) < 0.000081380211 )
    {
      v163 = v18;
      std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(v79 + 88, &v163);
      v78 = 0;
    }
    goto LABEL_113;
  }
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
  if ( !*(_BYTE *)(v21 + 492) )
  {
    v109 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 232) + 384LL))(*(_QWORD *)(v21 + 232));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v21 + 392); v109 = v111 )
    {
      v111 = *(_QWORD *)(*(_QWORD *)(v21 + 368) + 8 * j);
      if ( v109 )
        *(_BYTE *)(v109 + 48) = 0;
      if ( !*(_BYTE *)(v111 + 48) )
      {
        *(_QWORD *)(v111 + 16) = v21;
        CD2DContext::D2DSetTargetInternal((CD2DContext *)v21, (struct CD2DTarget *)v111);
        *(_BYTE *)(v111 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v111);
      }
      j = (unsigned int)(j + 1);
    }
    *(_BYTE *)(v21 + 492) = 1;
  }
  v22 = *(_QWORD **)(v21 + 176);
  *(_BYTE *)(v21 + 493) = 1;
  if ( !v22 )
  {
    v23 = 0;
    v85 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 160LL))(v21);
    if ( *(_DWORD *)(v21 + 152) )
    {
LABEL_116:
      v86 = *(_QWORD *)(v21 + 176);
      *(_QWORD *)(v21 + 176) = 0LL;
      if ( v86 )
        CMILRefCountBase::Release((CMILRefCountBase *)(v86 + 8));
      v87 = (unsigned int)(*(_DWORD *)(v21 + 152) - 1);
      *(_QWORD *)(v21 + 176) = *(_QWORD *)(*(_QWORD *)(v21 + 128) + 8 * v87);
      v88 = *(_DWORD *)(v21 + 160);
      *(_DWORD *)(v21 + 152) = v87;
      if ( v88 >= (unsigned int)v87 )
        v88 = v87;
      *(_DWORD *)(v21 + 160) = v88;
      v89 = *(_QWORD *)(v21 + 176);
      ++*(_DWORD *)(v21 + 192);
      LODWORD(v20) = *(_DWORD *)(v21 + 32);
      *(_DWORD *)(v89 + 48) = (_DWORD)v20;
      *(_DWORD *)(v89 + 52) = (_DWORD)v20;
      v22 = *(_QWORD **)(v21 + 176);
LABEL_121:
      if ( v23 < 0 )
      {
        v153 = 696;
        goto LABEL_241;
      }
      v23 = 0;
      if ( v6 == (struct CHwLightCollectionBuffer *)v22[5] )
      {
LABEL_123:
        if ( v23 >= 0 )
        {
          v90 = (struct ClipPlaneInfoRef *)v22[4];
          if ( v90 != v10 )
          {
            if ( v10 )
            {
              (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v10)(v10);
              v90 = (struct ClipPlaneInfoRef *)v22[4];
            }
            v22[4] = v10;
            if ( v90 )
              (*(void (__fastcall **)(struct ClipPlaneInfoRef *))(*(_QWORD *)v90 + 8LL))(v90);
          }
          goto LABEL_125;
        }
        v153 = 697;
LABEL_241:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v23, v153);
        goto LABEL_125;
      }
      ++dword_18030807C;
      v116 = v22[3] + 48LL;
      v160 = 0LL;
      v117 = CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(v116, &v160);
      v23 = v117;
      if ( v117 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0xC3u);
        v20 = v160;
        if ( !v160 )
          goto LABEL_123;
      }
      else
      {
        v119 = v160;
        v120 = *((_QWORD *)v160 + 3);
        *((_QWORD *)v160 + 3) = v6;
        if ( v6 )
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
        if ( v120 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v120 + 8LL))(v120);
        v121 = v22[3];
        v122 = *(CBatchOptimizer **)(v121 + 184);
        if ( v122 )
        {
          CBatchOptimizer::AddStateSettingDrawListEntry(v122, v119);
        }
        else
        {
          v148 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v121 + 8), v119);
          v23 = v148;
          if ( v148 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v148, 0xCDu);
            if ( !v119 )
              goto LABEL_123;
            v20 = v119;
            goto LABEL_180;
          }
        }
        v22[5] = v6;
        if ( !v119 )
          goto LABEL_123;
        v20 = v119;
      }
LABEL_180:
      CMILRefCountBase::Release(v20);
      goto LABEL_123;
    }
    v126 = *(struct CDrawListEntryBatch::CSharedDirect3DResources **)(v21 + 168);
    v127 = (CDrawListEntryBatch *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    if ( !v127 || (v129 = CDrawListEntryBatch::CDrawListEntryBatch(v127, v85, v126), (v130 = v129) == 0LL) )
    {
      v23 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0, -2147024882, 0x51u);
      MilInstrumentationCheckHR_MaybeFailFast(v147, 0LL, 0, -2147024882, 0xF7u);
      goto LABEL_121;
    }
    _InterlockedIncrement((volatile signed __int32 *)v129 + 4);
    v161 = v129;
    v131 = *(_DWORD *)(v21 + 152);
    v132 = v131 + 1;
    if ( v131 + 1 < v131 )
    {
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v132 <= *(_DWORD *)(v21 + 148) )
      {
        v23 = 0;
        *(_QWORD *)(*(_QWORD *)(v21 + 128) + 8LL * v131) = v161;
        *(_DWORD *)(v21 + 152) = v132;
LABEL_195:
        v6 = v156;
        goto LABEL_116;
      }
      v133 = DynArrayImpl<0>::AddMultipleAndSet(v21 + 128, 8, 1, &v161);
      v23 = v133;
      if ( v133 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v133, 0xC0u);
    }
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v23, 0xF8u);
      CMILRefCountBase::Release((CDrawListEntryBatch *)((char *)v130 + 8));
      v6 = v156;
      goto LABEL_121;
    }
    goto LABEL_195;
  }
  if ( (struct ClipPlaneInfoRef *)v22[4] == v10 )
  {
    v23 = 0;
    if ( v6 == (struct CHwLightCollectionBuffer *)v22[5] )
    {
LABEL_23:
      if ( v23 >= 0 )
        goto LABEL_24;
      v153 = 713;
      goto LABEL_241;
    }
    ++dword_18030807C;
    v100 = v22[3] + 48LL;
    v158 = 0LL;
    v101 = CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(v100, &v158);
    v23 = v101;
    if ( v101 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v102, 0LL, 0, v101, 0xC3u);
      v20 = v158;
      if ( !v158 )
        goto LABEL_23;
    }
    else
    {
      v103 = (volatile signed __int32 *)v158;
      v104 = *((_QWORD *)v158 + 3);
      *((_QWORD *)v158 + 3) = v6;
      if ( v6 )
        (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
      if ( v104 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 8LL))(v104);
      v105 = v22[3];
      v106 = *(CBatchOptimizer **)(v105 + 184);
      if ( v106 )
      {
        CBatchOptimizer::AddStateSettingDrawListEntry(v106, (struct CStateSettingDrawListEntry *)v103);
LABEL_145:
        v22[5] = v6;
        if ( v103 && _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(CMILRefCountBase *, __int64))(*(_QWORD *)v158 + 16LL))(v158, 1LL);
        goto LABEL_23;
      }
      v150 = CDrawListBatchManager::BatchDrawListEntry(
               (CDrawListBatchManager *)(v105 + 8),
               (struct CBaseDrawListEntry *)v103);
      v23 = v150;
      if ( v150 >= 0 )
        goto LABEL_145;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v150, 0xCDu);
      if ( !v103 )
        goto LABEL_23;
      v20 = (CMILRefCountBase *)v103;
    }
    CMILRefCountBase::Release(v20);
    goto LABEL_23;
  }
  CD2DContext::FlushDrawList((CD2DContext *)v21);
  v149 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v21, v6, v10);
  v23 = v149;
  if ( v149 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v90, 0LL, 0, v149, 0x2C5u);
LABEL_125:
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v90, 0LL, 0, v23, 0x2DEu);
LABEL_244:
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v152, 0LL, 0, v23, 0x9Eu);
    return (unsigned int)v23;
  }
LABEL_24:
  v24 = *(_QWORD *)(v21 + 176);
  ++dword_180308078;
  v25 = *(_QWORD *)(v24 + 24);
  v26 = *(_QWORD *)(v25 + 184);
  if ( !v26 )
  {
    v151 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v25 + 8), v157);
    v23 = v151;
    if ( v151 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v152, 0LL, 0, v151, 0x2E1u);
    goto LABEL_244;
  }
  v27 = 0LL;
  if ( !*(_DWORD *)(v26 + 32) )
  {
    v91 = *(_OWORD *)(v26 + 16);
    *(_DWORD *)(v26 + 32) = 1;
    *(_OWORD *)(520LL * *(int *)(v26 + 48) + v26 + 80) = v91;
  }
  v28 = v157;
  v29 = v157;
  v30 = *(_QWORD *)v157;
  ++*((_DWORD *)v157 + 4);
  (*(void (__fastcall **)(struct CBaseDrawListEntry *, __int64))(v30 + 32))(v29, v26);
  v165[1] = *(_OWORD *)(*(__int64 (__fastcall **)(struct CBaseDrawListEntry *, char *))(*(_QWORD *)v28 + 56LL))(
                         v28,
                         v166);
  CMILMatrix::Transform2DBoundsHelper<0>((struct CBaseDrawListEntry *)((char *)v28 + 56));
  v31 = *(_DWORD *)(v26 + 32);
  v32 = 0;
  v33 = 1;
  v154 = 1;
  if ( !v31 )
    goto LABEL_75;
  v34 = *((float *)&v164 + 3);
  v35 = *((float *)&v164 + 2);
  v36 = *((float *)&v164 + 1);
  v37 = *(float *)&v164;
  while ( 1 )
  {
    v38 = v32;
    LODWORD(v156) = v32;
    v39 = (int *)(v26 + 4 * (v32 + 12LL));
    if ( *(_DWORD *)(520LL * *v39 + v26 + 104) )
    {
      do
      {
        v68 = v39[1];
        ++v39;
        ++v38;
      }
      while ( *(_DWORD *)(520 * v68 + v26 + 104) );
      LODWORD(v156) = v38;
    }
    v40 = v26 + 520LL * *(int *)(v26 + 4LL * v38 + 48);
    if ( *(_QWORD *)(v40 + 80) != *(_QWORD *)(v26 + 16) )
      goto LABEL_73;
    if ( *(_QWORD *)(v40 + 112) || (v67 = *(_DWORD *)(v40 + 100), v67 == 1) )
      v41 = *(_DWORD *)(v40 + 88) == *(_DWORD *)(v26 + 24);
    else
      v41 = v67 == 0;
    if ( !v41 )
      goto LABEL_73;
    if ( v33 )
    {
      v32 = v31 - 1;
      v42 = v31 - 1;
      if ( v42 != v38 )
      {
        v43 = (int *)(v26 + 48 + 4LL * v32);
        while ( 1 )
        {
          v44 = 0LL;
          v45 = v26 + 520LL * *v43;
          v46 = *(int *)(v45 + 100);
          if ( *(_DWORD *)(v45 + 100) )
            break;
LABEL_42:
          --v32;
          --v42;
          --v43;
          if ( v42 == v38 )
            goto LABEL_43;
        }
        v47 = (float *)(v45 + 284);
        while ( v35 < *(v47 - 1) || v47[1] < v37 || v34 < *v47 || v47[2] < v36 )
        {
          ++v44;
          v47 += 4;
          if ( v44 == v46 )
            goto LABEL_42;
        }
        v60 = *(_DWORD *)(v26 + 32);
        v33 = 0;
        v154 = 0;
        if ( v32 == v60 - 1 )
        {
          if ( *(_BYTE *)(v26 + 4240) )
          {
            if ( v60 == 8 && *(_DWORD *)(520LL * *(int *)(v26 + 4LL * v32 + 48) + v26 + 100) == 1 )
            {
              v61 = CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v26);
              v33 = 0;
              if ( v61 )
              {
                v31 = *(_DWORD *)(v26 + 32);
                v32 = v31 - 1;
              }
            }
          }
        }
        goto LABEL_74;
      }
    }
LABEL_43:
    v48 = (*(__int64 (__fastcall **)(struct CBaseDrawListEntry *))(*(_QWORD *)v28 + 40LL))(v28);
    v49 = *(_QWORD *)(v40 + 112);
    v50 = (void (__fastcall ***)(_QWORD))v48;
    if ( v49
      || *(_DWORD *)(v40 + 100) == 1
      && (v69 = *(_QWORD *)(v40 + 8LL * (unsigned int)(*(_DWORD *)(v40 + 96) - 1) + 120),
          (v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 40LL))(v69)) != 0) )
    {
      (*(void (__fastcall **)(__int64, void (__fastcall ****)(_QWORD), void (__fastcall ***)(_QWORD), char *))(*(_QWORD *)v49 + 80LL))(
        v49,
        &v159,
        v50,
        v155);
      if ( !v155[0] )
      {
        v66 = v159;
        v159 = 0LL;
        if ( v66 )
          (*v66)[1](v66);
      }
      v50 = v159;
      v159 = 0LL;
    }
    else if ( v50 )
    {
      (**v50)(v50);
    }
    v51 = v27;
    v52 = v50;
    v27 = v50;
    if ( v51 )
    {
      (*v51)[1](v51);
      v52 = v50;
    }
    if ( v52 )
      break;
    v33 = v154;
LABEL_73:
    v32 = v38 + 1;
LABEL_74:
    if ( v32 == v31 )
      goto LABEL_75;
  }
  if ( !*(_DWORD *)(v40 + 100) )
    *(_DWORD *)(v40 + 88) = *(_DWORD *)(v26 + 24);
  if ( v38 == v31 )
  {
LABEL_75:
    v62 = v27;
    v63 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct CBaseDrawListEntry *))(*(_QWORD *)v28 + 40LL))(v28);
    v27 = v63;
    if ( v63 )
      (**v63)(v63);
    if ( v62 )
      (*v62)[1](v62);
    if ( *(_DWORD *)(v26 + 32) == 8
      && (!*(_BYTE *)(v26 + 4240) || !CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v26)) )
    {
      CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v26);
      CBatchOptimizer::RecycleLayer((CBatchOptimizer *)v26, 0);
    }
    v64 = *(int *)(v26 + 32);
    v65 = *(_OWORD *)(v26 + 16);
    *(_DWORD *)(v26 + 32) = v64 + 1;
    *(_OWORD *)(520LL * *(int *)(v26 + 4 * v64 + 48) + v26 + 80) = v65;
    v38 = *(_DWORD *)(v26 + 32) - 1;
    LODWORD(v156) = v38;
  }
  (**(void (__fastcall ***)(struct CBaseDrawListEntry *))v28)(v28);
  v53 = v38;
  v54 = 520LL * *(int *)(v26 + 4LL * v38 + 48);
  if ( !v27 )
    goto LABEL_56;
  if ( *(_DWORD *)(v54 + v26 + 100) )
  {
    v55 = *(_QWORD *)(v54 + v26 + 112);
    v56 = v27;
    v27 = 0LL;
    *(_QWORD *)(v54 + v26 + 112) = v56;
    if ( v55 )
      goto LABEL_55;
    goto LABEL_56;
  }
  if ( *(_QWORD *)(v54 + v26 + 112) )
    goto LABEL_56;
  if ( (((__int64 (__fastcall *)(_QWORD))(*v27)[9])(v27) & 0x10000) == 0 )
  {
    if ( v38 )
    {
      if ( !*(_DWORD *)(520LL * *(int *)(v26 + 4LL * v38 + 44) + v26 + 104) )
        *(_BYTE *)(v26 + 4240) = 1;
      goto LABEL_56;
    }
    goto LABEL_58;
  }
  v55 = *(_QWORD *)(v54 + v26 + 112);
  v70 = v27;
  v27 = 0LL;
  *(_QWORD *)(v54 + v26 + 112) = v70;
  if ( v55 )
LABEL_55:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
LABEL_56:
  if ( !v38 || *(_DWORD *)(v54 + v26 + 100) != 20 )
  {
LABEL_58:
    if ( *(_DWORD *)(v54 + v26 + 96) != 20 )
      goto LABEL_59;
  }
  v92 = 520LL * *(int *)(v26 + 4LL * v38 + 48);
  if ( *(_DWORD *)(v92 + v26 + 100) )
    *(_DWORD *)(v92 + v26 + 104) = 1;
  v93 = v92 + v26;
  if ( (_DWORD)v156 )
  {
    CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v26);
    v94 = (int *)(v26 + 48);
    v95 = 520LL * *(int *)(v26 + 48);
    *(_OWORD *)(v95 + v26 + 80) = *(_OWORD *)(v92 + v26 + 80);
    v96 = *(void (__fastcall ****)(_QWORD))(v93 + 112);
    v97 = *(_QWORD *)(v95 + v26 + 112);
    *(_QWORD *)(v95 + v26 + 112) = v96;
    if ( v96 )
      (**v96)(v96);
    if ( v97 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 8LL))(v97);
    v98 = *v94;
    if ( v53 )
    {
      for ( k = 0LL; k != v53; ++k )
      {
        *v94 = v94[1];
        ++v94;
      }
    }
    v38 = (int)v156;
    *(_DWORD *)(v26 + 4 * v53 + 48) = v98;
  }
  else
  {
    v115 = *(_QWORD *)(v93 + 112);
    CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v26);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v93 + 112, v115);
    v38 = (int)v156;
  }
LABEL_59:
  v57 = v26 + 520LL * *(int *)(v26 + 4 * v53 + 48);
  v58 = *(unsigned int *)(v57 + 96);
  *(_DWORD *)(v57 + 96) = v58 + 1;
  *(_QWORD *)(v57 + 8 * v58 + 120) = v28;
  if ( v38 )
    *(_OWORD *)(v57 + 16LL * *(unsigned int *)(v57 + 100) + 280) = v164;
  ++*(_DWORD *)(v57 + 100);
  if ( v27 )
    (*v27)[1](v27);
  return 0LL;
}
