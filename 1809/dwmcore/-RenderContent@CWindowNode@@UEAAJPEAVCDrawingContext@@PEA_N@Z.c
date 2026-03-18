/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012940 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x180018BA0 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF440 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800C2D88 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180151CC8 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180166408 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801920D0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B9D60 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801B9E74 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 *     ?at@?$vector@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEBAAEBV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1801BA1CC (-at@-$vector@V-$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  bool v3; // r13
  int v6; // edi
  char v7; // r14
  struct CWindowOcclusionInfo *Flink; // r14
  struct _LIST_ENTRY *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int v16; // r12d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  CCompositionSurfaceBitmap *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  char v26; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v29; // r10
  struct _LIST_ENTRY *i; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  void (__fastcall ***v33)(_QWORD, __int64); // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  _DWORD *v42; // r12
  int v43; // r8d
  const struct CVisual *v44; // rdx
  unsigned int v45; // r9d
  unsigned int v46; // edi
  int v47; // r9d
  int v48; // eax
  bool v49; // cc
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  int v56; // ecx
  int v57; // eax
  unsigned int v58; // ecx
  unsigned __int64 v59; // rax
  const struct ConfirmPresentHistoryToken *v60; // rax
  int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rax
  CWindowNode *v64; // rcx
  const struct CShape *v65; // r8
  unsigned int v66; // eax
  __m128i v67; // xmm0
  int v68; // eax
  unsigned __int32 v69; // xmm0_4
  int v70; // eax
  unsigned int v71; // ecx
  __int64 v72; // rax
  int Bounds; // eax
  unsigned int v74; // ecx
  __int64 v75; // rbx
  struct _D3DCOLORVALUE *v76; // r12
  int v77; // edi
  const struct CShape **DxClipShape; // rax
  unsigned int v79; // ecx
  char v80; // [rsp+68h] [rbp-A0h]
  bool v81; // [rsp+6Ah] [rbp-9Eh]
  bool v82; // [rsp+6Bh] [rbp-9Dh]
  bool v83; // [rsp+6Ch] [rbp-9Ch]
  int v84; // [rsp+70h] [rbp-98h]
  __int64 v85; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v86; // [rsp+80h] [rbp-88h]
  _MARGINS v87; // [rsp+88h] [rbp-80h] BYREF
  int v88; // [rsp+98h] [rbp-70h]
  int v89; // [rsp+9Ch] [rbp-6Ch]
  int v90; // [rsp+A0h] [rbp-68h]
  int v91; // [rsp+A4h] [rbp-64h]
  unsigned int v92; // [rsp+A8h] [rbp-60h]
  int v93; // [rsp+ACh] [rbp-5Ch]
  const struct CShape *v94; // [rsp+B0h] [rbp-58h] BYREF
  char v95; // [rsp+B8h] [rbp-50h]
  int *v96; // [rsp+C0h] [rbp-48h]
  struct IImageSource *v97; // [rsp+C8h] [rbp-40h]
  bool *v98; // [rsp+D0h] [rbp-38h]
  _BYTE v99[16]; // [rsp+D8h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v100; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v101; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v102[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v103[4]; // [rsp+118h] [rbp+10h] BYREF
  int v104; // [rsp+138h] [rbp+30h]
  __int64 v105; // [rsp+13Ch] [rbp+34h]
  _BYTE v106[16]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v107; // [rsp+158h] [rbp+50h]
  __int128 v108; // [rsp+168h] [rbp+60h] BYREF
  char v109[16]; // [rsp+178h] [rbp+70h] BYREF

  v98 = a3;
  v3 = 0;
  v83 = 0;
  v6 = 1;
  if ( *((_QWORD *)this + 113) && *((_BYTE *)this + 958) )
  {
    CWindowNode::GetDxClipShape(this, &v101);
    if ( (_QWORD)v101 )
    {
      v3 = CShapePtr::IsEmpty((CShapePtr *)&v101) == 0;
      v83 = v3;
    }
    CShapePtr::Release((CShapePtr *)&v101);
  }
  v7 = 0;
  v80 = 0;
  if ( *((_BYTE *)this + 957) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1256LL) )
    {
      v31 = CWindowNode::RenderBlackContent(this, a2);
      v12 = v31;
      if ( v31 >= 0 )
      {
        v26 = 1;
        goto LABEL_31;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x83Au);
LABEL_51:
      v26 = 0;
      goto LABEL_31;
    }
    *((_BYTE *)a2 + 6354) = 1;
  }
  Flink = 0LL;
  if ( *(_BYTE *)(*((_QWORD *)a2 + 757) + 32LL) )
  {
    v9 = (struct _LIST_ENTRY *)((char *)this + 328);
LABEL_5:
    if ( v9 )
    {
      Flink = (struct CWindowOcclusionInfo *)v9[2].Flink;
      if ( !Flink )
      {
        Flink = (struct CWindowOcclusionInfo *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v9[1].Blink->Flink[20].Blink)(v9[1].Blink);
        v9[2].Flink = (struct _LIST_ENTRY *)Flink;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v9 = i - 14;
        if ( i[2].Flink == v29 )
          goto LABEL_5;
      }
    }
  }
  if ( !*((_QWORD *)this + 95) || *((_BYTE *)this + 954) )
    goto LABEL_26;
  v10 = CWindowNode::EnsureEffectiveSpriteClip(this);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x858u);
    v7 = 0;
    goto LABEL_51;
  }
  v13 = *((_QWORD *)a2 + 49);
  v14 = 0LL;
  v86 = v13;
  EnterCriticalSection(&CriticalSection);
  LOBYTE(v15) = BYTE4(qword_180308B10);
  v16 = BYTE4(qword_180308B10) != 0 ? 0x8898008D : 0;
  if ( BYTE4(qword_180308B10) )
  {
    v6 = 1;
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_18024C878, 1u, v16, 0x470u);
    goto LABEL_15;
  }
  v17 = 0;
  if ( !(_DWORD)qword_180308B10 )
  {
LABEL_54:
    v6 = 1;
LABEL_55:
    v16 = -2003304307;
    goto LABEL_15;
  }
  while ( __PAIR64__(HIDWORD(v86), v13) != *(_QWORD *)(qword_180308AC0 + 24LL * v17 + 8) )
  {
    if ( ++v17 >= (unsigned int)qword_180308B10 )
      goto LABEL_54;
  }
  v14 = *(_QWORD *)(qword_180308AC0 + 24LL * v17);
  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)(v14 + 504), 1u);
  if ( *(int *)(v14 + 848) < 0 )
  {
    CD3DSurface::Release((CD3DSurface *)(v14 + 496));
    v14 = 0LL;
    goto LABEL_55;
  }
LABEL_15:
  LeaveCriticalSection(&CriticalSection);
  if ( v16 < 0 )
  {
    v85 = 0LL;
    if ( v14 )
      CD3DSurface::Release((CD3DSurface *)(v14 + 496));
  }
  else
  {
    v18 = *(_DWORD *)(v14 + 756);
    v19 = *(_DWORD *)(v14 + 752);
    if ( v19 >= 0x4000 )
      v19 = 0x4000;
    LODWORD(v85) = v19;
    if ( v18 >= 0x4000 )
      v18 = 0x4000;
    HIDWORD(v85) = v18;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 504), 0xFFFFFFFF) == 1 )
    {
      v33 = *(void (__fastcall ****)(_QWORD, __int64))(v14 + 512);
      if ( v33 )
        (**v33)(*(_QWORD *)(v14 + 512), v14 + 496);
      else
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 496) + 16LL))(v14 + 496, 1LL);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 95) + 232LL))(
         *((_QWORD *)this + 95),
         &v85) )
  {
    v34 = *((_QWORD *)this + 95);
    *((_BYTE *)this + 965) = 1;
    v35 = 0LL;
    v86 = 0LL;
    v36 = v34 + 44;
    if ( !v34 )
      v36 = 100LL;
    v37 = v34 + 416;
    v96 = (int *)v36;
    v38 = v34 + 384;
    if ( !v34 )
      v38 = 440LL;
    v93 = *(_DWORD *)v38;
    v39 = v34 + 388;
    if ( !v34 )
      v39 = 444LL;
    v84 = *(_DWORD *)v39;
    if ( !v34 )
      v37 = 472LL;
    if ( (__int64)(*(_QWORD *)(v37 + 8) - *(_QWORD *)v37) >> 3 )
    {
      do
      {
        v40 = (_QWORD *)std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::at(
                          v37,
                          v35);
        v97 = (struct IImageSource *)((*v40 + 16LL) & -(__int64)(*v40 != 0LL));
        v41 = std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::at(v37, v35);
        v42 = *(_DWORD **)v41;
        v44 = (const struct CVisual *)*(unsigned int *)(*(_QWORD *)v41 + 52LL);
        v45 = *(_DWORD *)(*(_QWORD *)v41 + 60LL);
        v46 = *(_DWORD *)(*(_QWORD *)v41 + 56LL);
        v90 = *(_DWORD *)(*(_QWORD *)v41 + 48LL);
        v43 = v90;
        *(_QWORD *)&v101 = __PAIR64__((unsigned int)v44, v90);
        v91 = (int)v44;
        *((_QWORD *)&v101 + 1) = __PAIR64__(v45, v46);
        v92 = v45;
        if ( v90 > 0 || (int)v44 > 0 )
        {
          v47 = v90;
          v48 = (int)v44;
          if ( v90 >= *v96 )
            v47 = *v96;
          v49 = (int)v44 < v96[2];
          v89 = v47;
          if ( !v49 )
            v48 = v96[2];
          v50 = v48;
          v88 = v48;
          if ( (int)v44 <= 0 )
            v50 = 0;
          v51 = (_DWORD)v44 - v50;
          v52 = v47;
          if ( v90 <= 0 )
            v52 = 0;
          v12 = CDrawingContext::PushOffsetInternal(a2, v44, (float)(v90 - v52), (float)v51, 0.0);
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v12, 0x874u);
            goto LABEL_29;
          }
          v43 = v42[12];
          v45 = v42[15];
          LODWORD(v101) = v90 - v89;
          v80 = 1;
          DWORD1(v101) = v91 - v88;
          v54 = v46 - v89;
          LODWORD(v44) = v42[13];
          v46 = v42[14];
          DWORD2(v101) = v54;
          HIDWORD(v101) = v92 - v88;
        }
        v55 = v46;
        if ( v43 )
          v87.cxLeftWidth = 0;
        else
          v87.cxLeftWidth = *((_DWORD *)this + 215);
        if ( (_DWORD)v44 )
        {
          v87.cyTopHeight = 0;
          v55 = v46;
        }
        else
        {
          v87.cyTopHeight = *((_DWORD *)this + 217);
        }
        if ( v55 == v93 )
          v87.cxRightWidth = *((_DWORD *)this + 216);
        else
          v87.cxRightWidth = 0;
        if ( v45 == v84 )
          v87.cyBottomHeight = *((_DWORD *)this + 218);
        else
          v87.cyBottomHeight = 0;
        *(_OWORD *)((char *)this + 968) = v101;
        if ( Flink )
          v56 = *((_DWORD *)Flink + 6);
        else
          v56 = 0;
        v57 = CWindowNode::RenderImage(
                this,
                a2,
                Flink,
                v97,
                *((const struct CShape **)this + 118),
                &v87,
                v56,
                v83,
                0,
                0,
                0LL);
        v12 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x88Fu);
          goto LABEL_105;
        }
        v6 = 1;
        if ( v80 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          v80 = 0;
        }
        v35 = v86 + 1;
        v59 = (__int64)(*(_QWORD *)(v37 + 8) - *(_QWORD *)v37) >> 3;
        v86 = v35;
      }
      while ( v35 < v59 );
    }
    v3 = v83;
    *((_BYTE *)this + 965) = 0;
  }
  else
  {
    if ( Flink )
      v20 = *((_DWORD *)Flink + 6);
    else
      v20 = 0;
    v21 = CWindowNode::RenderImage(
            this,
            a2,
            Flink,
            *((struct IImageSource **)this + 95),
            *((const struct CShape **)this + 118),
            (struct _MARGINS *)((char *)this + 860),
            v20,
            v3,
            0,
            0,
            0LL);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x8A3u);
      v7 = 0;
      v26 = 0;
      goto LABEL_31;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 95) + 192LL))(*((_QWORD *)this + 95)) )
  {
    v60 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 95) + 200LL))(*((_QWORD *)this + 95));
    v61 = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(*((_QWORD *)this + 2) + 360LL), v60);
    v12 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x8A8u);
LABEL_111:
      v26 = 0;
      goto LABEL_30;
    }
  }
LABEL_26:
  v23 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 113);
  if ( !v23 )
  {
LABEL_27:
    v24 = CVisual::RenderContent(this, a2, 0LL);
    v12 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x8DFu);
    goto LABEL_29;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1256LL) )
  {
    v63 = *((_QWORD *)v23 + 12);
    if ( v63 )
    {
      if ( (*(_BYTE *)(v63 + 268) & 2) != 0 )
      {
        CWindowNode::GetDxClipShape(this, &v94);
        v65 = v94;
        v103[0] = &CRectanglesShape::`vftable';
        v103[2] = v106;
        v103[3] = v106;
        v103[1] = 0LL;
        v104 = 1;
        v105 = 1LL;
        v107 = 0LL;
        if ( !v94 )
        {
          v102[0] = 0;
          v102[1] = 0;
          v66 = 0;
          if ( *((_DWORD *)this + 184) - *((_DWORD *)this + 182) >= 0 )
            v66 = *((_DWORD *)this + 184) - *((_DWORD *)this + 182);
          v67 = _mm_cvtsi32_si128(v66);
          v68 = 0;
          v69 = _mm_cvtepi32_ps(v67).m128_u32[0];
          if ( *((_DWORD *)this + 185) - *((_DWORD *)this + 183) >= 0 )
            v68 = *((_DWORD *)this + 185) - *((_DWORD *)this + 183);
          v102[2] = v69;
          *(float *)&v102[3] = (float)v68;
          CRectanglesShape::SetSingleRect((CRectanglesShape *)v103, (const struct MilRectF *)v102);
          CShapePtr::Release((CShapePtr *)&v94);
          v65 = (const struct CShape *)v103;
          v95 = 0;
          v94 = (const struct CShape *)v103;
        }
        v70 = CWindowNode::RenderBlackShape(v64, a2, v65);
        v12 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x8DBu);
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v103);
          CShapePtr::Release((CShapePtr *)&v94);
          goto LABEL_111;
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v103);
        CShapePtr::Release((CShapePtr *)&v94);
        goto LABEL_27;
      }
    }
  }
  v72 = *((_QWORD *)v23 + 12);
  if ( v72 )
    v6 = *(_DWORD *)(v72 + 168);
  v81 = v6 == 1;
  Bounds = CCompositionSurfaceBitmap::GetBounds(v23, 0LL, 0LL, (__int64)v109);
  v12 = Bounds;
  if ( Bounds >= 0 )
  {
    v75 = *((_QWORD *)this + 113);
    if ( v6 == 1 )
      v108 = *(_OWORD *)&CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)(v75 + 56), &v100)->r;
    v76 = (struct _D3DCOLORVALUE *)&v108;
    if ( v6 != 1 )
      v76 = 0LL;
    v82 = v6 != 1;
    if ( Flink )
      v77 = *((_DWORD *)Flink + 8);
    else
      v77 = 0;
    DxClipShape = (const struct CShape **)CWindowNode::GetDxClipShape(this, v99);
    v12 = CWindowNode::RenderImage(
            this,
            a2,
            Flink,
            (struct IImageSource *)((v75 + 64) & -(__int64)(v75 != 0)),
            *DxClipShape,
            0LL,
            v77,
            v3,
            v82,
            v81,
            v76);
    CShapePtr::Release((CShapePtr *)v99);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v12, 0x8C5u);
LABEL_105:
      v26 = 0;
      goto LABEL_30;
    }
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, Bounds, 0x8B5u);
LABEL_29:
  v26 = 0;
LABEL_30:
  v7 = v80;
LABEL_31:
  if ( v98 && v26 )
    *v98 = 1;
  *((_BYTE *)this + 965) = 0;
  if ( v7 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return (unsigned int)v12;
}
