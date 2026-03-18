/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800529BC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180071388 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180018C68 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18005B400 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18009B3D4 (PrimitiveStorage--Alloc_16_.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800C8FD0 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801830B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        __int64 a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  void *Src; // r15
  __int64 v6; // rdi
  __int64 v7; // rdi
  signed int v9; // r14d
  unsigned int v10; // edx
  unsigned int v11; // r12d
  char v12; // r14
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rax
  LPVOID v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD, __int64); // rdx
  bool v21; // zf
  void (__fastcall ***v22)(_QWORD); // r12
  int v23; // r15d
  _DWORD *Value; // rdi
  int v25; // ecx
  __int64 (__fastcall ***v26)(_QWORD, __int64); // rdi
  struct CPrimitiveColor *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rbx
  CDirtyRegion *v31; // r12
  unsigned __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  CDirtyRegion *v42; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  LPVOID v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  LPVOID v49; // rbx
  CDrawListEntryBuilder *v50; // rcx
  __int64 v51; // rcx
  signed int v52; // eax
  __int64 v53; // rcx
  struct CShape *v54; // rdi
  __int64 (__fastcall *v55)(struct CShape *, _QWORD, __int64 *); // rbx
  signed int v56; // eax
  __int64 v57; // rcx
  CThreadContext *v58; // rax
  __int64 v59; // rcx
  CThreadContext *v60; // rax
  __int64 v61; // r8
  __int64 v62; // xmm0_8
  __int64 v63; // r11
  __int64 v64; // r10
  bool v65; // sf
  __int128 v66; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v69)(_QWORD, __int64); // [rsp+78h] [rbp-88h]
  __int64 *v70; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall ***v71)(_QWORD, __int64); // [rsp+88h] [rbp-78h]
  __int64 v72; // [rsp+90h] [rbp-70h]
  __int128 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-38h]
  struct CShape *v77; // [rsp+D0h] [rbp-30h] BYREF
  int v78[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v79; // [rsp+E0h] [rbp-20h]
  unsigned int v80; // [rsp+E4h] [rbp-1Ch]
  int v81[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v82; // [rsp+F0h] [rbp-10h]
  unsigned int v83; // [rsp+F4h] [rbp-Ch]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  struct CPrimitiveColor *v86; // [rsp+108h] [rbp+8h]
  const struct _D3DCOLORVALUE *v87; // [rsp+110h] [rbp+10h]
  char *v88; // [rsp+118h] [rbp+18h]
  void (__fastcall ***v89)(_QWORD); // [rsp+120h] [rbp+20h]
  __int128 v90; // [rsp+130h] [rbp+30h]
  __int64 *v91; // [rsp+140h] [rbp+40h]
  CDirtyRegion **v92; // [rsp+148h] [rbp+48h]
  __int64 v93; // [rsp+150h] [rbp+50h]
  __int128 v94; // [rsp+160h] [rbp+60h] BYREF
  __int64 v95; // [rsp+170h] [rbp+70h]
  __int128 v96; // [rsp+180h] [rbp+80h]
  char v97[24]; // [rsp+190h] [rbp+90h] BYREF
  char v98[72]; // [rsp+1A8h] [rbp+A8h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+F8h]
  CDirtyRegion *v100; // [rsp+200h] [rbp+100h] BYREF
  char v101; // [rsp+208h] [rbp+108h]
  struct CPrimitiveColor *v102; // [rsp+210h] [rbp+110h]

  v102 = a3;
  v101 = a2;
  Src = (void *)*((_QWORD *)this + 273);
  v6 = *((_QWORD *)this + 274) - (_QWORD)Src;
  v69 = 0LL;
  v7 = v6 >> 1;
  v9 = 0;
  v100 = 0LL;
  v68 = 0LL;
  if ( !v7 )
    goto LABEL_42;
  v75 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
  if ( v7 < 0 )
  {
    gsl::details::throw_exception<gsl::narrowing_error>(this, a2, a3);
    __debugbreak();
  }
  *(_QWORD *)&v90 = v7;
  *((_QWORD *)&v90 + 1) = Src;
  if ( !Src )
  {
    ((void (__fastcall *)(CDrawListEntryBuilder *, __int64, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      (unsigned int)v7);
    __debugbreak();
  }
  v10 = *((_DWORD *)this + 544);
  v11 = *(_DWORD *)this;
  v12 = *((_BYTE *)this + 180) >> 7;
  *(_QWORD *)v78 = *((_QWORD *)this + 148);
  v13 = *((_QWORD *)this + 24);
  v79 = 8 * v11 + 16;
  v82 = v79;
  *(_QWORD *)v81 = v13;
  v14 = v10;
  v96 = v90;
  v80 = v10;
  v83 = v10;
  *(_QWORD *)((char *)&v66 + 4) = __PAIR64__(v11, v10);
  HIDWORD(v66) = v7;
  LODWORD(v67) = 0;
  LODWORD(v66) = v10;
  if ( (v10 & 1) != 0 )
  {
    v14 = (v10 & 0xFFFFFFFE) + 2;
    LODWORD(v66) = v14;
    if ( v10 )
      DWORD1(v66) = (v10 & 0xFFFFFFFE) + 2;
  }
  if ( v14 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
  {
    LODWORD(v66) = 0;
    HIDWORD(v66) = 0;
  }
  v76 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v66);
  v16 = v76;
  if ( v76 )
  {
    CDrawListPrimitive::Initialize(v76, 0, (__int64)v81, (__int64)v78, v11, Src, v7, (__int64)&v75, v12);
    v18 = (__int64 (__fastcall ***)(_QWORD, __int64))v16;
    v19 = 0LL;
    v76 = 0LL;
    v9 = 0;
  }
  else
  {
    v19 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x8007000E, 0x56u, 0LL);
    v18 = 0LL;
    v9 = -2147024882;
  }
  v20 = v69;
  v69 = v18;
  if ( v20 )
    std::default_delete<CShape>::operator()(v17, v20);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v9, 0x4CFu, 0LL);
    goto LABEL_49;
  }
  v21 = *((_BYTE *)this + 2298) == 0;
  v22 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  v89 = v22;
  v86 = v102;
  v84 = 0LL;
  v72 = 0LL;
  v85 = 0LL;
  v87 = a4;
  if ( v21 )
  {
    v70 = 0LL;
    v88 = 0LL;
  }
  else
  {
    v70 = (__int64 *)((char *)this + 2280);
    v88 = (char *)this + 2280;
  }
  v23 = *((_DWORD *)this + 6);
  LODWORD(v84) = v23;
  if ( v101 )
  {
    v23 |= 8u;
    LODWORD(v84) = v23;
  }
  if ( *((_BYTE *)this + 2297) )
  {
    v23 &= ~1u;
    *((_BYTE *)this + 2297) = 0;
    LODWORD(v84) = v23;
  }
  if ( !*((_BYTE *)this + 2296) )
  {
    v51 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)v51 || *(_QWORD *)(v51 + 16) )
    {
      if ( *(_BYTE *)(v51 + 32) )
      {
        v52 = CCpuClip::ResolveClip((CCpuClip *)v51, &v77);
        v9 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x4F3u, 0LL);
          goto LABEL_49;
        }
        v54 = v77;
        v55 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v77 + 24LL);
        v91 = &v68;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v68);
        v56 = v55(v54, 0LL, &v68);
        v19 = 0LL;
        v9 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x4F4u, 0LL);
          goto LABEL_49;
        }
        v72 = v68;
        v85 = v68;
      }
      else
      {
        v23 &= ~0x20u;
        LODWORD(v84) = v23;
      }
    }
  }
  v92 = &v100;
  if ( v100 )
    CDirtyRegion::Release(v100);
  v9 = 0;
  v71 = v69;
  v69 = 0LL;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v58 = (CThreadContext *)operator new(0x138uLL);
    if ( !v58 || (v60 = CThreadContext::CThreadContext(v58), (Value = v60) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, 0x8007000E, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v61);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v60);
  }
  v25 = Value[19];
  if ( v25 )
  {
    v19 = (LPVOID)*((_QWORD *)Value + 10);
    *((_QWORD *)Value + 10) = *(_QWORD *)v19;
    Value[19] = v25 - 1;
  }
  if ( v19 || (v19 = DefaultHeap::Alloc(0xA0uLL)) != 0LL )
  {
    v26 = v71;
    v27 = v102;
    *((_DWORD *)v19 + 4) = 0;
    v93 = 0LL;
    *((_QWORD *)v19 + 3) = v27;
    *((_OWORD *)v19 + 2) = _xmm;
    v71 = v26;
    *((_DWORD *)v19 + 2) = 0;
    *((_DWORD *)v19 + 32) = 0;
    v28 = v72;
    *((_DWORD *)v19 + 33) = v23;
    *((_QWORD *)v19 + 17) = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    if ( a4 )
      *((struct _D3DCOLORVALUE *)v19 + 2) = *(const struct _D3DCOLORVALUE *)&a4->r;
    if ( v70 )
    {
      v62 = *v70;
      *((_DWORD *)v19 + 33) |= 0x400u;
      *((_QWORD *)v19 + 6) = v62;
    }
    *(_QWORD *)v19 = &CHWDrawListEntry::`vftable';
    *((_QWORD *)v19 + 18) = v26;
    *((_QWORD *)v19 + 19) = v22;
    if ( v22 )
      (**v22)(v22);
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    v100 = (CDirtyRegion *)v19;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, 0x8007000E, 0xEu, 0LL);
    if ( v71 )
      std::default_delete<CShape>::operator()(v28, v71);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v9, 0x4F9u, 0LL);
    goto LABEL_49;
  }
  v29 = (__int64 *)*((_QWORD *)this + 6);
  v30 = *((_QWORD *)this + 5);
  v31 = v100;
  v32 = ((__int64)v29 - v30) >> 3;
  if ( !((__int64)(*((_QWORD *)this + 7) - (_QWORD)v29) >> 3) )
  {
    if ( v32 + 1 < v32 )
      std::_Xoverflow_error(0LL);
    v45 = detail::liberal_expansion_policy::expand(0LL, (*((_QWORD *)this + 7) - v30) >> 3, v32 + 1);
    v46 = operator new(saturated_mul(v45, 8uLL));
    v47 = *((_QWORD *)this + 6);
    v48 = *((_QWORD *)this + 5);
    *(_QWORD *)&v66 = v46;
    *((_QWORD *)&v66 + 1) = v32;
    v49 = v46;
    v67 = 0LL;
    v73 = v66;
    v74 = 0LL;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
      v97,
      v48,
      v47,
      &v73);
    v50 = (CDrawListEntryBuilder *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v49;
    if ( v50 == (CDrawListEntryBuilder *)((char *)this + 64) )
      v50 = 0LL;
    operator delete(v50);
    v30 = *((_QWORD *)this + 5);
    v29 = (__int64 *)(v30 + 8 * v32);
    *((_QWORD *)this + 6) = v29;
    *((_QWORD *)this + 7) = v30 + 8 * v45;
  }
  v67 = 0LL;
  v33 = ((__int64)v29 - v30) >> 3;
  v34 = 1LL;
  *((_QWORD *)&v66 + 1) = 1LL;
  v35 = v33 - v32;
  v74 = 0LL;
  v36 = v30 + 8 * v33;
  *(_QWORD *)&v66 = v36;
  if ( !v36 )
    goto LABEL_97;
  v74 = 1LL;
  v37 = (((__int64)v29 - v30) >> 3) - v32;
  if ( v35 > 1 )
    v37 = 1LL;
  v67 = 1LL;
  v36 = 8 * v37;
  v34 = (__int64)v29 - v36;
  if ( v29 != (__int64 *)((char *)v29 - v36) )
  {
    v63 = v66;
    v64 = v67;
    do
    {
      --v29;
      if ( !v63 )
        goto LABEL_97;
      if ( !v64 )
        goto LABEL_97;
      if ( (unsigned __int64)--v64 >= *((_QWORD *)&v66 + 1) )
        goto LABEL_97;
      v36 = *v29;
      *(_QWORD *)(v63 + 8 * v64) = *v29;
    }
    while ( v29 != (__int64 *)v34 );
  }
  if ( v35 > 1 )
  {
    v67 = 0LL;
    *(_QWORD *)&v66 = v30;
    *((_QWORD *)&v66 + 1) = v33;
    v74 = 0LL;
    v65 = v33 < 0;
    if ( v33 )
    {
      if ( !v30 )
        goto LABEL_97;
      v65 = v33 < 0;
    }
    if ( !v65 || !v33 )
    {
      v74 = v33;
      v94 = v66;
      v95 = v33;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        v98,
        v30 + 8 * v32,
        v30 + 8 * (v33 - 1),
        &v94);
      goto LABEL_41;
    }
LABEL_97:
    _o__invalid_parameter_noinfo_noreturn(v36, v35, v33, v34);
    JUMPOUT(0x18012C749LL);
  }
LABEL_41:
  *((_QWORD *)this + 6) += 8LL;
  *(_QWORD *)(v30 + 8 * v32) = v31;
  v100 = 0LL;
LABEL_42:
  v38 = (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 4;
  if ( v38 )
    *((_QWORD *)this + 25) -= 16 * v38;
  v39 = (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4;
  if ( v39 )
    *((_QWORD *)this + 149) -= 16 * v39;
  v40 = (__int64)(*((_QWORD *)this + 274) - *((_QWORD *)this + 273)) >> 1;
  if ( v40 )
    *((_QWORD *)this + 274) -= 2 * v40;
  *((_DWORD *)this + 544) = 0;
  *((_DWORD *)this + 568) = 0;
LABEL_49:
  v41 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = v100;
  if ( v100 )
  {
    v100 = 0LL;
    CDirtyRegion::Release(v42);
  }
  if ( v69 )
    std::default_delete<CShape>::operator()((__int64)v42, v69);
  return (unsigned int)v9;
}
