/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18000790C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18000CAFC (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ??$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCStateSettingDrawListEntry@@@@PEAPEAVCStateSettingDrawListEntry@@@Z @ 0x180013B70 (--$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableRef.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18001473C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180014800 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18002C0D0 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180054454 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180057BA8 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800582A8 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180061E30 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180065F38 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800663D8 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180066488 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x18006654C (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryB.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800666A0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008B5C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCHWDrawListEntry@@@Z @ 0x1800B8F14 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x1801AB9B0 (-BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801BAB88 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 *a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r14
  struct CHwLightCollectionBuffer *v6; // r12
  int v7; // edi
  float v9; // xmm5_4
  bool v10; // r13
  int v13; // ecx
  __m128 *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  struct ClipPlaneInfoRef *v19; // rbx
  CDirtyRegion *v20; // rcx
  __int64 v21; // rsi
  CDirtyRegion *v22; // rdi
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  CDirtyRegion *v27; // rbx
  __int64 v28; // rax
  int v29; // r12d
  int v30; // edi
  char v31; // r8
  float a; // xmm7_4
  float b; // xmm6_4
  int v34; // r13d
  int *v35; // rdx
  __int64 v36; // r14
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  CDirtyRegion *v41; // rdi
  CDirtyRegion *v42; // r12
  CDirtyRegion *v43; // rcx
  __int64 v44; // rdi
  CDirtyRegion *v45; // r12
  __int64 v46; // rcx
  CDirtyRegion *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v51; // eax
  int *v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // r10
  float *v56; // rax
  int v57; // edi
  CDirtyRegion *v58; // rax
  CDirtyRegion *v59; // rdi
  __int64 v60; // rcx
  __int128 v61; // xmm0
  CDirtyRegion *v62; // rcx
  int v63; // ecx
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 i; // rdi
  __int64 v67; // rsi
  struct ClipPlaneInfoRef *v68; // r8
  int v69; // eax
  unsigned int v70; // ecx
  int CurrentLightBufferForContextNoRef; // edi
  __int64 v72; // rbx
  __int64 v73; // rax
  CBatchOptimizer *v74; // rcx
  __int64 v75; // rdx
  unsigned int v76; // ecx
  float v77; // xmm1_4
  __int64 v78; // rdx
  int v79; // eax
  struct CD3DDeviceLevel1 *v80; // rax
  int v81; // eax
  unsigned int v82; // ecx
  CDirtyRegion *v83; // rdi
  int v84; // eax
  unsigned int v85; // ecx
  struct ClipPlaneInfoRef *v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  int v89; // eax
  unsigned int v90; // ecx
  struct CStateSettingDrawListEntry *v91; // rbx
  __int64 v92; // r13
  __int64 v93; // rax
  CBatchOptimizer *v94; // rcx
  unsigned int v95; // ecx
  CD2DTarget *v96; // r13
  __int64 j; // rdi
  CD2DTarget *v98; // r14
  __int64 v99; // rax
  int v100; // edi
  __int64 v101; // rcx
  __int64 (__fastcall *v102)(__int64, __int64, struct _D3DCOLORVALUE *); // rax
  unsigned int v103; // ecx
  __m128 v104; // xmm2
  CDrawListPrimitive *v105; // rcx
  float v106; // xmm3_4
  float v107; // xmm1_4
  D3DVALUE v108; // xmm0_4
  float v109; // xmm1_4
  D3DVALUE v110; // xmm3_4
  D3DVALUE v111; // xmm1_4
  struct ClipPlaneInfoRef *v112; // rax
  int v113; // eax
  unsigned int v114; // ecx
  float v115; // xmm1_4
  unsigned int v116; // ecx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  unsigned int v120; // ecx
  char v121; // [rsp+30h] [rbp-51h]
  char v122[7]; // [rsp+31h] [rbp-50h] BYREF
  struct ClipPlaneInfoRef *v123; // [rsp+38h] [rbp-49h]
  CDirtyRegion *v124[2]; // [rsp+40h] [rbp-41h] BYREF
  struct _D3DCOLORVALUE v125; // [rsp+50h] [rbp-31h] BYREF
  char v126[16]; // [rsp+60h] [rbp-21h] BYREF

  v5 = *(_QWORD *)(a2 + 384);
  v6 = 0LL;
  v7 = a5;
  v124[0] = 0LL;
  v9 = a4;
  v123 = 0LL;
  v10 = 0;
  if ( a4 == 1.0 )
    v10 = a5 == 0;
  v13 = *((_DWORD *)a1 + 33);
  if ( (v13 & 1) != 0 && v10 )
    v7 = 1;
  v14 = (__m128 *)a1[3];
  if ( v14 )
  {
    v104 = v14[7];
    v105 = (CDrawListPrimitive *)a1[18];
    v106 = _mm_shuffle_ps(v104, v104, 255).m128_f32[0];
    v107 = _mm_shuffle_ps(v104, v104, 85).m128_f32[0];
    v108 = (float)(v106 * v104.m128_f32[0]) * *((float *)a1 + 8);
    v104.m128_f32[0] = (float)(_mm_shuffle_ps(v104, v104, 170).m128_f32[0] * v106) * *((float *)a1 + 10);
    v109 = v107 * v106;
    v110 = v106 * *((float *)a1 + 11);
    v111 = v109 * *((float *)a1 + 9);
    LODWORD(v125.b) = v104.m128_i32[0];
    v125.r = v108;
    v125.g = v111;
    v125.a = v110;
    CDrawListPrimitive::UpdatePremultipliedColor(v105, &v125);
    v13 = *((_DWORD *)a1 + 33);
  }
  if ( !v7 )
    goto LABEL_7;
  v57 = v7 - 1;
  if ( v57 )
  {
    v100 = v57 - 1;
    if ( v100 )
    {
      if ( v100 != 2 )
      {
LABEL_7:
        v15 = 0LL;
        goto LABEL_8;
      }
      v15 = 22LL;
    }
    else
    {
      v15 = 21LL;
    }
  }
  else
  {
    v15 = 5LL;
  }
LABEL_8:
  if ( !*((_DWORD *)a1 + 4) )
  {
    *((_OWORD *)a1 + 4) = *(_OWORD *)a3;
    *((_OWORD *)a1 + 5) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a1 + 6) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a1 + 7) = *(_OWORD *)(a3 + 48);
    v16 = *(_DWORD *)(a3 + 64);
    *((float *)a1 + 15) = v9;
    *((_DWORD *)a1 + 32) = v16;
    *((_DWORD *)a1 + 14) = v15;
  }
  if ( (v13 & 0x10) != 0 )
  {
    v101 = a1[19];
    v102 = *(__int64 (__fastcall **)(__int64, __int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v101 + 56LL);
    *(struct _D3DCOLORVALUE *)&v125.r = *(struct _D3DCOLORVALUE *)(a1[18] + 72);
    CurrentLightBufferForContextNoRef = v102(v101, a2, &v125);
    if ( CurrentLightBufferForContextNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v103, 0LL, 0, CurrentLightBufferForContextNoRef, 0x7Cu, 0LL);
      return (unsigned int)CurrentLightBufferForContextNoRef;
    }
  }
  v17 = *((_DWORD *)a1 + 33);
  if ( (v17 & 0x200) != 0 )
  {
    v78 = 0LL;
    v79 = *(_DWORD *)(a2 + 248);
    if ( v79 >= 1 )
    {
      switch ( v79 )
      {
        case 1:
          v78 = 1LL;
          break;
        case 2:
        case 3:
          v78 = 2LL;
          break;
        case 4:
        case 6:
          v78 = 3LL;
          break;
        case 5:
          v78 = 4LL;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[19] + 64LL))(a1[19], v78);
    v17 = *((_DWORD *)a1 + 33);
  }
  if ( (v17 & 4) != 0 )
    *(_BYTE *)(a2 + 6355) = 1;
  if ( !*(_DWORD *)(a2 + 768) && *(_DWORD *)(a2 + 696) )
  {
    CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                          (CLightStack *)(a2 + 672),
                                          (struct CDrawingContext *)a2,
                                          (const struct CMILMatrix *)(a2 + 6064),
                                          v124);
    if ( CurrentLightBufferForContextNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, CurrentLightBufferForContextNoRef, 0x8Eu, 0LL);
      return (unsigned int)CurrentLightBufferForContextNoRef;
    }
    v6 = v124[0];
  }
  v18 = *(_QWORD *)(a2 + 3512);
  v19 = v123;
  if ( v18 )
  {
    v112 = *(struct ClipPlaneInfoRef **)(v18 + 256);
    if ( v112 )
      v19 = v112;
    v123 = v19;
  }
  if ( (*((_BYTE *)a1 + 132) & 8) != 0 && v10 )
  {
    v64 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 160LL))(v5, v15);
    if ( !*(_BYTE *)(v64 + 492) )
    {
      v65 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v64 + 232) + 384LL))(*(_QWORD *)(v64 + 232));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v64 + 392); v65 = v67 )
      {
        v67 = *(_QWORD *)(*(_QWORD *)(v64 + 368) + 8 * i);
        if ( v65 )
          *(_BYTE *)(v65 + 48) = 0;
        if ( !*(_BYTE *)(v67 + 48) )
        {
          *(_QWORD *)(v67 + 16) = v64;
          CD2DContext::D2DSetTargetInternal((CD2DContext *)v64, (struct CD2DTarget *)v67);
          *(_BYTE *)(v67 + 48) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v67);
        }
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(v64 + 492) = 1;
    }
    v68 = v123;
    *(_BYTE *)(v64 + 493) = 1;
    v69 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v64, v6, v68);
    CurrentLightBufferForContextNoRef = v69;
    if ( v69 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x2F6u, 0LL);
      goto LABEL_182;
    }
    v72 = *(_QWORD *)(v64 + 176);
    ++dword_180339848;
    v73 = *(_QWORD *)(v72 + 24);
    v74 = *(CBatchOptimizer **)(v73 + 184);
    if ( v74 )
    {
      CBatchOptimizer::AddRenderingDrawListEntry(v74, (struct CDrawListEntry *)a1);
      CurrentLightBufferForContextNoRef = 0;
    }
    else
    {
      v113 = CDrawListBatchManager::BatchDrawListEntry(
               (CDrawListBatchManager *)(v73 + 8),
               (struct CBaseDrawListEntry *)a1);
      CurrentLightBufferForContextNoRef = v113;
      if ( v113 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0x75u, 0LL);
LABEL_119:
        if ( CurrentLightBufferForContextNoRef >= 0 )
          return (unsigned int)CurrentLightBufferForContextNoRef;
        MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, CurrentLightBufferForContextNoRef, 0x2F9u, 0LL);
LABEL_182:
        if ( CurrentLightBufferForContextNoRef < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, CurrentLightBufferForContextNoRef, 0x98u, 0LL);
        return (unsigned int)CurrentLightBufferForContextNoRef;
      }
    }
    LOBYTE(v75) = 1;
    if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1 + 8, v75)
      && (v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a1 + 17) - 0.0)) & _xmm), v77 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a1 + 20) - 0.0)) & _xmm) < 0.000081380211
      || (v115 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a1 + 16) - 0.0)) & _xmm), v115 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a1 + 21) - 0.0)) & _xmm) < 0.000081380211 )
    {
      v124[0] = (CDirtyRegion *)a1;
      std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(v72 + 88, v124);
      CurrentLightBufferForContextNoRef = 0;
    }
    goto LABEL_119;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 160LL))(v5, v15);
  if ( !*(_BYTE *)(v21 + 492) )
  {
    v96 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 232) + 384LL))(*(_QWORD *)(v21 + 232));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v21 + 392); v96 = v98 )
    {
      v98 = *(CD2DTarget **)(*(_QWORD *)(v21 + 368) + 8 * j);
      if ( v96 )
        *((_BYTE *)v96 + 48) = 0;
      CD2DTarget::ApplyState(v98, (struct CD2DContext *)v21);
      j = (unsigned int)(j + 1);
    }
    *(_BYTE *)(v21 + 492) = 1;
  }
  v22 = *(CDirtyRegion **)(v21 + 176);
  *(_BYTE *)(v21 + 493) = 1;
  v124[0] = v22;
  if ( !v22 )
  {
    v80 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 160LL))(v21);
    v81 = CDrawListBatchManager::OpenDrawListEntryBatch((CDrawListBatchManager *)(v21 + 8), v80, v124);
    v23 = v81;
    if ( v81 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0x2B8u, 0LL);
    }
    else
    {
      v83 = v124[0];
      v84 = CDrawListEntryBatch::SetLightingCollection(v124[0], v6);
      v23 = v84;
      if ( v84 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0x2B9u, 0LL);
      }
      else
      {
        v86 = (struct ClipPlaneInfoRef *)*((_QWORD *)v83 + 4);
        if ( v86 != v19 )
        {
          if ( v19 )
          {
            (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v19)(v19);
            v86 = (struct ClipPlaneInfoRef *)*((_QWORD *)v83 + 4);
          }
          *((_QWORD *)v83 + 4) = v19;
          if ( v86 )
            (*(void (__fastcall **)(struct ClipPlaneInfoRef *))(*(_QWORD *)v86 + 8LL))(v86);
        }
      }
    }
    goto LABEL_129;
  }
  if ( *((struct ClipPlaneInfoRef **)v22 + 4) != v19 )
  {
    CD2DContext::FlushDrawList((CD2DContext *)v21);
    v117 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v21, v6, v19);
    v23 = v117;
    if ( v117 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v86, 0LL, 0, v117, 0x2C5u, 0LL);
    goto LABEL_129;
  }
  v23 = 0;
  if ( v6 != *((struct CHwLightCollectionBuffer **)v22 + 5) )
  {
    ++dword_18033984C;
    v88 = *((_QWORD *)v22 + 3) + 48LL;
    v124[0] = 0LL;
    v89 = CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(v88, v124);
    v23 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v89, 0xC5u, 0LL);
      v20 = v124[0];
      if ( !v124[0] )
        goto LABEL_22;
    }
    else
    {
      v91 = v124[0];
      v92 = *((_QWORD *)v124[0] + 3);
      *((_QWORD *)v124[0] + 3) = v6;
      if ( v6 )
        (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v6)(v6);
      if ( v92 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 8LL))(v92);
      v93 = *((_QWORD *)v22 + 3);
      v94 = *(CBatchOptimizer **)(v93 + 184);
      if ( v94 )
      {
        CBatchOptimizer::AddStateSettingDrawListEntry(v94, v91);
      }
      else
      {
        v118 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v93 + 8), v91);
        v23 = v118;
        if ( v118 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v118, 0xCFu, 0LL);
          if ( !v91 )
            goto LABEL_22;
          v20 = v91;
          goto LABEL_142;
        }
      }
      *((_QWORD *)v22 + 5) = v6;
      if ( !v91 )
        goto LABEL_22;
      v20 = v91;
    }
LABEL_142:
    CDirtyRegion::Release(v20);
  }
LABEL_22:
  if ( v23 >= 0 )
    goto LABEL_23;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v23, 0x2C9u, 0LL);
LABEL_129:
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v86, 0LL, 0, v23, 0x2DEu, 0LL);
LABEL_200:
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v23, 0x9Cu, 0LL);
    return (unsigned int)v23;
  }
LABEL_23:
  v24 = *(_QWORD *)(v21 + 176);
  ++dword_180339848;
  v25 = *(_QWORD *)(v24 + 24);
  v26 = *(_QWORD *)(v25 + 184);
  if ( !v26 )
  {
    v119 = CDrawListBatchManager::BatchDrawListEntry(
             (CDrawListBatchManager *)(v25 + 8),
             (struct CBaseDrawListEntry *)a1);
    v23 = v119;
    if ( v119 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v119, 0x2E1u, 0LL);
    goto LABEL_200;
  }
  v27 = 0LL;
  if ( !*(_DWORD *)(v26 + 32) )
    CBatchOptimizer::AppendLayer(*(CBatchOptimizer **)(v25 + 184));
  v28 = *a1;
  ++*((_DWORD *)a1 + 4);
  (*(void (__fastcall **)(__int64 *, __int64))(v28 + 32))(a1, v26);
  *(_OWORD *)v124 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*a1 + 56))(a1, v126);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 8));
  v29 = *(_DWORD *)(v26 + 32);
  v30 = 0;
  LODWORD(v123) = v29;
  v31 = 1;
  v121 = 1;
  if ( !v29 )
    goto LABEL_85;
  a = v125.a;
  b = v125.b;
  while ( 1 )
  {
    v34 = v30;
    v35 = (int *)(v26 + 4 * (v30 + 12LL));
    if ( *(_DWORD *)(520LL * *v35 + v26 + 104) )
    {
      do
      {
        v99 = v35[1];
        ++v35;
        ++v34;
      }
      while ( *(_DWORD *)(520 * v99 + v26 + 104) );
    }
    v36 = v26 + 520LL * *(int *)(v26 + 4LL * v34 + 48);
    if ( *(_QWORD *)(v36 + 80) != *(_QWORD *)(v26 + 16) )
      goto LABEL_52;
    if ( *(_QWORD *)(v36 + 112) || (v51 = *(_DWORD *)(v36 + 100), v51 == 1) )
    {
      if ( *(_DWORD *)(v36 + 88) != *(_DWORD *)(v26 + 24) )
        goto LABEL_52;
      v37 = *(_BYTE *)(v36 + 92);
      if ( v37 != *(_BYTE *)(v26 + 28) || v37 == 2 )
        goto LABEL_52;
    }
    else if ( v51 )
    {
      goto LABEL_52;
    }
    if ( !v31 )
      break;
    v30 = v29 - 1;
    v38 = v29 - 1;
    if ( v38 == v34 )
      break;
    v52 = (int *)(v26 + 48 + 4LL * v30);
    while ( 1 )
    {
      v53 = 0LL;
      v54 = v26 + 520LL * *v52;
      v55 = *(int *)(v54 + 100);
      if ( *(_DWORD *)(v54 + 100) )
        break;
LABEL_76:
      --v30;
      --v38;
      --v52;
      if ( v38 == v34 )
        goto LABEL_36;
    }
    v56 = (float *)(v54 + 284);
    while ( b < *(v56 - 1) || v56[1] < v125.r || a < *v56 || v56[2] < v125.g )
    {
      ++v53;
      v56 += 4;
      if ( v53 == v55 )
        goto LABEL_76;
    }
    v63 = *(_DWORD *)(v26 + 32);
    v121 = 0;
    if ( v30 == v63 - 1
      && *(_BYTE *)(v26 + 4240)
      && v63 == 8
      && *(_DWORD *)(520LL * *(int *)(v26 + 4LL * v30 + 48) + v26 + 100) == 1
      && CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v26) )
    {
      v29 = *(_DWORD *)(v26 + 32);
      LODWORD(v123) = v29;
      v30 = v29 - 1;
    }
LABEL_53:
    if ( v30 == v29 )
      goto LABEL_85;
    v31 = v121;
  }
LABEL_36:
  v39 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
  v40 = *(_QWORD *)(v36 + 112);
  v41 = (CDirtyRegion *)v39;
  if ( v40
    || *(_DWORD *)(v36 + 100) == 1
    && (v87 = *(_QWORD *)(v36 + 8LL * (unsigned int)(*(_DWORD *)(v36 + 96) - 1) + 120),
        (v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 40LL))(v87)) != 0) )
  {
    (*(void (__fastcall **)(__int64, CDirtyRegion **, CDirtyRegion *, char *))(*(_QWORD *)v40 + 80LL))(
      v40,
      v124,
      v41,
      v122);
    if ( !v122[0] )
    {
      v62 = v124[0];
      v124[0] = 0LL;
      if ( v62 )
        (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v62 + 8LL))(v62);
    }
    v41 = v124[0];
    v42 = v124[0];
    v124[0] = 0LL;
  }
  else
  {
    v42 = v41;
    if ( v41 )
      (**(void (__fastcall ***)(CDirtyRegion *))v41)(v41);
  }
  v43 = v27;
  v27 = v41;
  if ( v43 )
    (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v43 + 8LL))(v43);
  if ( !v42 )
  {
    v29 = (int)v123;
LABEL_52:
    v30 = v34 + 1;
    goto LABEL_53;
  }
  if ( !*(_DWORD *)(v36 + 100) )
  {
    *(_DWORD *)(v36 + 88) = *(_DWORD *)(v26 + 24);
    *(_BYTE *)(v36 + 92) = *(_BYTE *)(v26 + 28);
  }
  if ( v34 == (_DWORD)v123 )
  {
LABEL_85:
    v58 = (CDirtyRegion *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
    v59 = v27;
    v27 = v58;
    if ( v58 )
      (**(void (__fastcall ***)(CDirtyRegion *))v58)(v58);
    if ( v59 )
      (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v59 + 8LL))(v59);
    if ( *(_DWORD *)(v26 + 32) == 8
      && (!*(_BYTE *)(v26 + 4240) || !CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v26)) )
    {
      CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v26);
      CBatchOptimizer::RecycleLayer((CBatchOptimizer *)v26, 0);
    }
    v60 = *(int *)(v26 + 32);
    v61 = *(_OWORD *)(v26 + 16);
    *(_DWORD *)(v26 + 32) = v60 + 1;
    *(_OWORD *)(520LL * *(int *)(v26 + 4 * v60 + 48) + v26 + 80) = v61;
    v34 = *(_DWORD *)(v26 + 32) - 1;
  }
  (*(void (__fastcall **)(__int64 *))*a1)(a1);
  v44 = 520LL * *(int *)(v26 + 4LL * v34 + 48);
  if ( !v27 )
    goto LABEL_57;
  if ( *(_DWORD *)(v44 + v26 + 100) )
  {
    v46 = *(_QWORD *)(v44 + v26 + 112);
    v47 = v27;
    v27 = 0LL;
    *(_QWORD *)(v44 + v26 + 112) = v47;
    if ( v46 )
      goto LABEL_56;
    goto LABEL_57;
  }
  if ( *(_QWORD *)(v44 + v26 + 112) )
    goto LABEL_57;
  v45 = v27;
  if ( ((*(__int64 (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v27 + 72LL))(v27) & 0x10000) == 0 )
  {
    if ( v34 )
    {
      if ( !*(_DWORD *)(520LL * *(int *)(v26 + 4LL * v34 + 44) + v26 + 104) )
        *(_BYTE *)(v26 + 4240) = 1;
      goto LABEL_57;
    }
    goto LABEL_59;
  }
  v46 = *(_QWORD *)(v44 + v26 + 112);
  v27 = 0LL;
  *(_QWORD *)(v44 + v26 + 112) = v45;
  if ( !v46 )
    goto LABEL_57;
LABEL_56:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
LABEL_57:
  if ( !v34 || *(_DWORD *)(v44 + v26 + 100) != 20 )
  {
LABEL_59:
    if ( *(_DWORD *)(v44 + v26 + 96) != 20 )
      goto LABEL_60;
  }
  CBatchOptimizer::ContinueLayer((CBatchOptimizer *)v26, v34);
LABEL_60:
  v48 = v26 + 520LL * *(int *)(v26 + 4LL * v34 + 48);
  v49 = *(unsigned int *)(v48 + 96);
  *(_DWORD *)(v48 + 96) = v49 + 1;
  *(_QWORD *)(v48 + 8 * v49 + 120) = a1;
  if ( v34 )
    *(struct _D3DCOLORVALUE *)(v48 + 16LL * *(unsigned int *)(v48 + 100) + 280) = *(struct _D3DCOLORVALUE *)&v125.r;
  ++*(_DWORD *)(v48 + 100);
  if ( v27 )
    (*(void (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v27 + 8LL))(v27);
  return 0LL;
}
