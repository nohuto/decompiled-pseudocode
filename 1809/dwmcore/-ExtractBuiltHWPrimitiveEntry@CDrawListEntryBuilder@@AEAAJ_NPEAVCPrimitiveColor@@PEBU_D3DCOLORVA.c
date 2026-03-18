/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B5920
 * Callers:
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800289AC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B765C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180015B7C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18003AE80 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180066480 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800671D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800AA678 (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE898 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEA04 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVCOverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@V?$move_iterator@PEAPEAVCOverlayContext@@@0@0V12@@Z @ 0x180152628 (--$move_backward@V-$move_iterator@PEAPEAVCOverlayContext@@@std@@V-$checked_array_iterator@PEAPEA.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  _QWORD *v4; // rbx
  void *v5; // r12
  int v7; // r13d
  __int64 v8; // r14
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rdi
  CMILRefCountBase *v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // r12d
  char v13; // r13
  __int64 v14; // rax
  _DWORD *Value; // rbx
  CThreadContext *v16; // rax
  unsigned int v17; // ecx
  CThreadContext *v18; // rax
  int v19; // edx
  char *v20; // rcx
  char *v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int128 v28; // xmm1
  struct CObjectCache *ObjectCache; // rax
  int v30; // edx
  PrimitiveStorage::CInlineStorageBase *v31; // rax
  __int128 v32; // xmm0
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // r9
  _DWORD *v36; // r14
  CThreadContext *v37; // rax
  unsigned int v38; // ecx
  CThreadContext *v39; // rax
  int v40; // edx
  char *v41; // rcx
  LPVOID v42; // r14
  unsigned int v43; // ecx
  __int64 v44; // rcx
  void (__fastcall ***v45)(_QWORD); // rcx
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  struct CPrimitiveColor *v50; // rax
  void *v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rbx
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // r14
  LPVOID v57; // rax
  _QWORD *v58; // r8
  _QWORD *v59; // rdx
  LPVOID v60; // rbx
  CDrawListEntryBuilder *v61; // rcx
  __int64 v62; // r8
  unsigned __int64 v63; // r11
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 *v66; // r10
  unsigned __int64 v67; // r14
  bool v68; // sf
  __int64 v69; // rcx
  void *v72; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h]
  __int128 v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  __int128 v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  struct CPrimitiveColor *v78; // [rsp+B0h] [rbp-50h]
  const struct _D3DCOLORVALUE *v79; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  void *v82; // [rsp+D8h] [rbp-28h]
  struct CPrimitiveColor *v83; // [rsp+E0h] [rbp-20h]
  const struct _D3DCOLORVALUE *v84; // [rsp+E8h] [rbp-18h]
  void (__fastcall ***v85)(_QWORD); // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h] BYREF
  struct CShape *v87; // [rsp+100h] [rbp+0h] BYREF
  void (__fastcall ***v88)(_QWORD); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall ***v89)(_QWORD, __int64); // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  __int64 v91; // [rsp+120h] [rbp+20h]
  int v92[2]; // [rsp+138h] [rbp+38h] BYREF
  int v93; // [rsp+140h] [rbp+40h]
  unsigned int v94; // [rsp+144h] [rbp+44h]
  int v95[2]; // [rsp+148h] [rbp+48h] BYREF
  int v96; // [rsp+150h] [rbp+50h]
  unsigned int v97; // [rsp+154h] [rbp+54h]
  __int128 v98; // [rsp+158h] [rbp+58h] BYREF
  __int128 v99; // [rsp+168h] [rbp+68h]
  __int128 v100; // [rsp+180h] [rbp+80h]
  __int128 v101; // [rsp+190h] [rbp+90h]
  __int128 v102; // [rsp+1A0h] [rbp+A0h]
  __int64 v103; // [rsp+1B0h] [rbp+B0h]
  char *v104; // [rsp+1B8h] [rbp+B8h]
  __int128 v105; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v106; // [rsp+1D0h] [rbp+D0h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+208h] [rbp+108h]
  __int128 v109; // [rsp+210h] [rbp+110h] BYREF
  __int64 v110; // [rsp+220h] [rbp+120h]
  char v111[24]; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v112; // [rsp+248h] [rbp+148h] BYREF
  int v113; // [rsp+250h] [rbp+150h]
  void *retaddr; // [rsp+288h] [rbp+188h]

  v79 = a4;
  v4 = (_QWORD *)((char *)this + 2184);
  v78 = a3;
  v5 = (void *)*((_QWORD *)this + 273);
  v7 = 0;
  v8 = (__int64)(*((_QWORD *)this + 274) - (_QWORD)v5) >> 1;
  v9 = 0LL;
  v10 = 0LL;
  v90 = 0LL;
  v72 = 0LL;
  Src = v5;
  if ( !v8 )
    goto LABEL_93;
  v86 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
  if ( v8 < 0 )
  {
    gsl::details::terminate(this);
    __debugbreak();
  }
  *(_QWORD *)&v100 = v8;
  *((_QWORD *)&v100 + 1) = v5;
  if ( !v5 )
  {
    gsl::details::terminate(this);
    __debugbreak();
  }
  v11 = *((_DWORD *)this + 544);
  v12 = *(_DWORD *)this;
  v13 = *((_BYTE *)this + 180) >> 7;
  *(_QWORD *)v92 = *((_QWORD *)this + 148);
  v14 = *((_QWORD *)this + 24);
  v93 = 8 * v12 + 16;
  v96 = v93;
  v74 = v100;
  v94 = v11;
  *(_QWORD *)v95 = v14;
  v97 = v11;
  v112 = __PAIR64__(v12, v11);
  v113 = v8;
  if ( (v11 & 1) != 0 )
  {
    v11 = (v11 & 0xFFFFFFFE) + 2;
    LODWORD(v112) = v11;
  }
  if ( v11 > 0x10000 || (unsigned int)v8 > 0x1FFFE )
  {
    v9 = 0LL;
    LODWORD(v112) = 0;
    v113 = 0;
    goto LABEL_36;
  }
  if ( !(_DWORD)v8 )
  {
    v9 = 0LL;
LABEL_36:
    v21 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
    if ( v21 )
    {
      v80 = __PAIR64__(v12, 0);
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      v101 = 0uLL;
      v102 = 0uLL;
      *((_QWORD *)v21 + 1) = __PAIR64__(v12, 0);
      v32 = v101;
      *((_DWORD *)v21 + 4) = 0;
      *(_QWORD *)v21 = &PrimitiveStorage::CEmptyStorage::`vftable';
      *(_OWORD *)(v21 + 24) = v32;
      *(_OWORD *)(v21 + 40) = 0uLL;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( v12 == 2 )
  {
    if ( v11 <= 4 && (unsigned int)v8 <= 6 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v16 = (CThreadContext *)operator new(0x128uLL);
        if ( !v16 || (v18 = CThreadContext::CThreadContext(v16), (Value = v18) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v18);
      }
      v19 = Value[23];
      v20 = (char *)(Value + 22);
      v21 = 0LL;
      if ( v19 )
      {
        v21 = (char *)*((_QWORD *)v20 + 1);
        *((_QWORD *)v20 + 1) = *(_QWORD *)v21;
        *((_DWORD *)v20 + 1) = v19 - 1;
      }
      if ( v21 || (v21 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x1A8uLL)) != 0LL )
      {
        ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
        *((_QWORD *)v21 + 1) = v112;
        *((_DWORD *)v21 + 4) = v8;
        *(_QWORD *)&v98 = &v21[(((((_BYTE)v21 + 104) & 0xF) + 15) & 0x10)
                             - (unsigned __int64)(((_BYTE)v21 + 104) & 0xF)
                             + 104];
        v24 = ((((32 * (_BYTE)v11 + (_BYTE)v98) & 0xF) + 15) & 0x10)
            - (unsigned __int64)((32 * (_BYTE)v11 + (_BYTE)v98) & 0xF)
            + 32 * v11
            + (_QWORD)v98;
        *((_QWORD *)&v98 + 1) = v24;
        *(_OWORD *)(v21 + 24) = v98;
        v25 = (((((_BYTE)v24 + 32 * (_BYTE)v11) & 0xF) + 15) & 0x10)
            - (unsigned __int64)(((_BYTE)v24 + 32 * (_BYTE)v11) & 0xF);
        *(_QWORD *)&v99 = v24 + 32 * v11 + v25;
        v26 = v99 + 8LL * v11;
        v27 = ((_BYTE)v24 + 32 * (_BYTE)v11 + (_BYTE)v25 + 8 * (_BYTE)v11) & 0xF;
        v22 = (((_BYTE)v27 + 15) & 0x10) - v27;
        v9 = 0LL;
        *((_QWORD *)&v99 + 1) = v22 + v26;
        v28 = v99;
        *(_QWORD *)v21 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
        *(_OWORD *)(v21 + 40) = v28;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    if ( v11 <= 8 && (unsigned int)v8 <= 0x1E )
    {
      ObjectCache = CThreadContext::GetObjectCache((struct CDrawListPrimitive8 *)(8 * v12 + 16));
      v9 = 0LL;
      v21 = 0LL;
      v30 = *((_DWORD *)ObjectCache + 1);
      if ( v30 )
      {
        v21 = (char *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v21;
        *((_DWORD *)ObjectCache + 1) = v30 - 1;
      }
      if ( v21 || (v21 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x2F8uLL)) != 0LL )
      {
        PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(
          (PrimitiveStorage::CInlineStorageBase *)v21,
          (const struct CDrawListPrimitive::GeometryCounts *)&v112);
        *(_QWORD *)v21 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
        goto LABEL_22;
      }
      goto LABEL_21;
    }
  }
  v31 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(
                                                  WPF::g_processHeap,
                                                  0,
                                                  v11 * (16 * v12 + 40) + 2 * (_DWORD)v8 + 15 + 104LL);
  v21 = (char *)v31;
  if ( v31 )
  {
    PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(
      v31,
      (const struct CDrawListPrimitive::GeometryCounts *)&v112);
    v9 = 0LL;
    *(_QWORD *)v21 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
    goto LABEL_22;
  }
LABEL_20:
  v9 = 0LL;
LABEL_21:
  v21 = 0LL;
LABEL_22:
  if ( !v21 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x4Eu);
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024882, 0x49Bu);
    goto LABEL_100;
  }
  CDrawListPrimitive::Initialize((__int64)v21, 0, (__int64)v95, (__int64)v92, v12, Src, v8, (__int64)&v86, v13);
  v33 = *((_DWORD *)this + 6);
  v88 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  v85 = v88;
  v83 = v78;
  v91 = 0LL;
  v9 = (__int64 (__fastcall ***)(_QWORD, __int64))v21;
  v84 = v79;
  Src = 0LL;
  v82 = 0LL;
  v81 = v33;
  if ( a2 )
  {
    v33 |= 8u;
    LODWORD(v81) = v33;
  }
  if ( *((_BYTE *)this + 2289) )
  {
    v33 &= ~1u;
    *((_BYTE *)this + 2289) = 0;
    LODWORD(v81) = v33;
  }
  if ( !*((_BYTE *)this + 2288) )
  {
    v34 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)v34 || *(_QWORD *)(v34 + 16) )
    {
      if ( *(_BYTE *)(v34 + 32) )
      {
        v46 = CCpuClip::ResolveClip((CCpuClip *)v34, &v87);
        v7 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x4BEu);
          goto LABEL_100;
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
        v48 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, void **))(*(_QWORD *)v87 + 24LL))(v87, 0LL, &v72);
        v7 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x4BFu);
          goto LABEL_100;
        }
        Src = v72;
        v82 = v72;
      }
      else
      {
        v33 &= ~0x20u;
        LODWORD(v81) = v33;
      }
    }
  }
  v9 = 0LL;
  v89 = 0LL;
  v7 = 0;
  v36 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v36 )
  {
    v37 = (CThreadContext *)operator new(0x128uLL);
    if ( !v37 || (v39 = CThreadContext::CThreadContext(v37), (v36 = v39) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v39);
  }
  v40 = v36[15];
  v41 = (char *)(v36 + 14);
  v42 = 0LL;
  if ( v40 )
  {
    v42 = (LPVOID)*((_QWORD *)v41 + 1);
    *((_QWORD *)v41 + 1) = *(_QWORD *)v42;
    *((_DWORD *)v41 + 1) = v40 - 1;
  }
  if ( v42 || (v42 = HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
  {
    v50 = v78;
    *((_DWORD *)v42 + 4) = 0;
    v103 = 0LL;
    *((_QWORD *)v42 + 3) = v50;
    *((_OWORD *)v42 + 2) = _xmm;
    v104 = v21;
    *((_DWORD *)v42 + 2) = 0;
    *((_DWORD *)v42 + 30) = 0;
    v51 = Src;
    *((_DWORD *)v42 + 31) = v33;
    *((_QWORD *)v42 + 16) = v51;
    if ( v51 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v51 + 8LL))(v51);
    if ( v79 )
      *((struct _D3DCOLORVALUE *)v42 + 2) = *(const struct _D3DCOLORVALUE *)&v79->r;
    v45 = v88;
    *(_QWORD *)v42 = &CHWDrawListEntry::`vftable';
    *((_QWORD *)v42 + 17) = v21;
    *((_QWORD *)v42 + 18) = v45;
    if ( v45 )
      (**v45)(v45);
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
    _InterlockedIncrement((volatile signed __int32 *)v42 + 2);
    v9 = v89;
    v10 = (CMILRefCountBase *)v42;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024882, 0x10u);
    std::default_delete<CShape>::operator()(v44, (__int64 (__fastcall ***)(_QWORD, __int64))v21);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v45, 0LL, 0, v7, 0x4C4u);
    goto LABEL_100;
  }
  v52 = (__int64 *)*((_QWORD *)this + 6);
  v53 = *((_QWORD *)this + 7);
  v54 = *((_QWORD *)this + 5);
  v55 = ((__int64)v52 - v54) >> 3;
  if ( !((v53 - (__int64)v52) >> 3) )
  {
    if ( v55 + 1 < v55 )
      std::_Xoverflow_error(0LL);
    v56 = detail::liberal_expansion_policy::expand(0LL, (v53 - v54) >> 3, v55 + 1);
    v57 = operator new(saturated_mul(v56, 8uLL));
    v58 = (_QWORD *)*((_QWORD *)this + 6);
    v59 = (_QWORD *)*((_QWORD *)this + 5);
    *(_QWORD *)&v74 = v57;
    v60 = v57;
    *((_QWORD *)&v74 + 1) = v55;
    v75 = 0LL;
    v105 = v74;
    v106 = 0LL;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
      (__int64)v111,
      v59,
      v58,
      &v105);
    v61 = (CDrawListEntryBuilder *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v60;
    if ( v61 == (CDrawListEntryBuilder *)((char *)this + 64) )
      v61 = 0LL;
    WPF::ProcessHeapImpl::Free(v61);
    v54 = *((_QWORD *)this + 5);
    v52 = (__int64 *)(v54 + 8 * v55);
    *((_QWORD *)this + 6) = v52;
    *((_QWORD *)this + 7) = v54 + 8 * v56;
  }
  v75 = 0LL;
  v62 = ((__int64)v52 - v54) >> 3;
  *((_QWORD *)&v74 + 1) = 1LL;
  v63 = v62 - v55;
  v107 = 0LL;
  v64 = v54 + 8 * v62;
  *(_QWORD *)&v74 = v64;
  v80 = v64;
  if ( !v64 )
    goto LABEL_91;
  v107 = 1LL;
  v65 = (((__int64)v52 - v54) >> 3) - v55;
  if ( v63 > 1 )
    v65 = 1LL;
  v76 = v74;
  v77 = 1LL;
  v64 = 8 * v65;
  v66 = (__int64 *)((char *)v52 - v64);
  if ( v52 != (__int64 *)((char *)v52 - v64) )
  {
    v67 = *((_QWORD *)&v76 + 1);
    v35 = v76;
    v53 = v77;
    do
    {
      --v52;
      if ( !v35 )
        goto LABEL_91;
      if ( !v53 )
        goto LABEL_91;
      if ( --v53 >= v67 )
        goto LABEL_91;
      v64 = *v52;
      *(_QWORD *)(v35 + 8 * v53) = *v52;
    }
    while ( v52 != v66 );
  }
  if ( v63 > 1 )
  {
    v77 = 0LL;
    *(_QWORD *)&v76 = v54;
    *((_QWORD *)&v76 + 1) = v62;
    v108 = 0LL;
    v68 = v62 < 0;
    if ( v62 )
    {
      if ( !v54 )
        goto LABEL_91;
      v68 = v62 < 0;
    }
    if ( v68 && v62 )
    {
LABEL_91:
      _o__invalid_parameter_noinfo_noreturn(v64, v53, v62, v35);
      __debugbreak();
    }
    v108 = v62;
    v109 = v76;
    v110 = v62;
    std::move_backward<std::move_iterator<COverlayContext * *>,stdext::checked_array_iterator<COverlayContext * *>>(
      &v98,
      v54 + 8 * v55,
      v54 + 8 * (v62 - 1),
      &v109);
  }
  *((_QWORD *)this + 6) += 8LL;
  *(_QWORD *)(v54 + 8 * v55) = v10;
  v10 = 0LL;
  v4 = (_QWORD *)((char *)this + 2184);
LABEL_93:
  if ( (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 4 )
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 192,
      0LL);
  if ( (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4 )
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 1184,
      0LL);
  if ( (__int64)(v4[1] - *v4) >> 1 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      v4,
      0LL);
  *((_DWORD *)this + 544) = 0;
  *((_DWORD *)this + 568) = 0;
LABEL_100:
  v69 = (__int64)v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
  if ( v10 )
    CMILRefCountBase::Release(v10);
  if ( v9 )
    std::default_delete<CShape>::operator()(v69, v9);
  return (unsigned int)v7;
}
