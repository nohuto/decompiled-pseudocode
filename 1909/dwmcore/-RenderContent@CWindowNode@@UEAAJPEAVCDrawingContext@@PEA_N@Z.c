/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800125A0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800427F8 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800686F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18016F358 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180179E68 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801C6B10 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180217DE8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802182EC (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x18021840C (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 *     ?at@?$vector@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEBAAEBV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180218798 (-at@-$vector@V-$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  struct CWindowOcclusionInfo *Flink; // r14
  struct _LIST_ENTRY *v7; // rbx
  int Bounds; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  CCompositionSurfaceBitmap *v18; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v21; // r10
  struct _LIST_ENTRY *i; // rcx
  void (__fastcall ***v23)(_QWORD, __int64); // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // r12
  int v33; // r8d
  const struct CVisual *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // edi
  int v37; // r9d
  int v38; // eax
  bool v39; // cc
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  int v44; // eax
  char v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // rbx
  const struct ConfirmPresentHistoryToken *v48; // rax
  __int64 v49; // rax
  CWindowNode *v50; // rcx
  const struct CShape *v51; // r8
  unsigned int v52; // eax
  __m128i v53; // xmm0
  int v54; // eax
  unsigned __int32 v55; // xmm0_4
  int v56; // eax
  unsigned int v57; // ecx
  __int64 v58; // rax
  int v59; // edi
  __int64 v60; // rbx
  struct _D3DCOLORVALUE *v61; // r12
  bool v62; // r13
  int v63; // edi
  const struct CShape **DxClipShape; // rax
  unsigned int v65; // ecx
  unsigned int v66; // [rsp+28h] [rbp-E0h]
  char v67; // [rsp+58h] [rbp-B0h]
  bool v68; // [rsp+59h] [rbp-AFh]
  int v69; // [rsp+60h] [rbp-A8h]
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v71; // [rsp+70h] [rbp-98h]
  _MARGINS v72; // [rsp+78h] [rbp-90h] BYREF
  int v73; // [rsp+88h] [rbp-80h]
  int v74; // [rsp+8Ch] [rbp-7Ch]
  int v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+94h] [rbp-74h]
  unsigned int v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+9Ch] [rbp-6Ch]
  const struct CShape *v79; // [rsp+A0h] [rbp-68h] BYREF
  char v80; // [rsp+A8h] [rbp-60h]
  int *v81; // [rsp+B0h] [rbp-58h]
  struct IImageSource *v82; // [rsp+B8h] [rbp-50h]
  bool *v83; // [rsp+C0h] [rbp-48h]
  _BYTE v84[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v85; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v86; // [rsp+E8h] [rbp-20h]
  _DWORD v87[4]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v88[4]; // [rsp+108h] [rbp+0h] BYREF
  int v89; // [rsp+128h] [rbp+20h]
  __int64 v90; // [rsp+12Ch] [rbp+24h]
  _BYTE v91[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v92; // [rsp+148h] [rbp+40h]
  __int128 v93; // [rsp+158h] [rbp+50h] BYREF
  char v94[16]; // [rsp+168h] [rbp+60h] BYREF

  v83 = a3;
  v67 = 0;
  if ( (*((_BYTE *)this + 95) & 8) == 0 )
  {
LABEL_2:
    Flink = 0LL;
    if ( *(_BYTE *)(*((_QWORD *)a2 + 757) + 32LL) )
    {
      v7 = (struct _LIST_ENTRY *)((char *)this + 328);
LABEL_4:
      if ( v7 )
      {
        Flink = (struct CWindowOcclusionInfo *)v7[2].Flink;
        if ( !Flink )
        {
          Flink = (struct CWindowOcclusionInfo *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v7[1].Blink->Flink[23].Flink)(v7[1].Blink);
          v7[2].Flink = (struct _LIST_ENTRY *)Flink;
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
          v7 = i - 14;
          if ( i[2].Flink == v21 )
            goto LABEL_4;
        }
      }
    }
    if ( !*((_QWORD *)this + 93) || *((_BYTE *)this + 938) )
      goto LABEL_27;
    Bounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    v10 = Bounds;
    if ( Bounds < 0 )
    {
      v66 = 2056;
      goto LABEL_126;
    }
    v11 = *((_QWORD *)a2 + 49);
    v12 = 0LL;
    v71 = v11;
    EnterCriticalSection(&stru_18033D458);
    v13 = 0;
    if ( BYTE4(qword_18033D510) )
      v13 = -2003304307;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x8898008D, &dword_180280CA0, 1u, v13, 0x467u, 0LL);
    }
    else
    {
      v14 = 0;
      if ( (_DWORD)qword_18033D510 )
      {
        while ( __PAIR64__(HIDWORD(v71), v11) != *(_QWORD *)(qword_18033D4C0 + 24LL * v14 + 8) )
        {
          if ( ++v14 >= (unsigned int)qword_18033D510 )
            goto LABEL_45;
        }
        v12 = *(_QWORD *)(qword_18033D4C0 + 24LL * v14);
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 504));
        if ( *(int *)(v12 + 880) >= 0 )
          goto LABEL_16;
        CMILPoolResource::Release((CMILPoolResource *)(v12 + 496));
        v12 = 0LL;
      }
LABEL_45:
      v13 = -2003304307;
    }
LABEL_16:
    LeaveCriticalSection(&stru_18033D458);
    if ( v13 < 0 )
    {
      v70 = 0LL;
      if ( v12 )
        CMILPoolResource::Release((CMILPoolResource *)(v12 + 496));
    }
    else
    {
      v15 = *(_DWORD *)(v12 + 756);
      v16 = *(_DWORD *)(v12 + 752);
      if ( v16 >= 0x4000 )
        v16 = 0x4000;
      LODWORD(v70) = v16;
      if ( v15 >= 0x4000 )
        v15 = 0x4000;
      HIDWORD(v70) = v15;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 504), 0xFFFFFFFF) == 1 )
      {
        v23 = *(void (__fastcall ****)(_QWORD, __int64))(v12 + 512);
        if ( v23 )
          (**v23)(*(_QWORD *)(v12 + 512), v12 + 496);
        else
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 496) + 16LL))(v12 + 496, 1LL);
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 93) + 232LL))(
           *((_QWORD *)this + 93),
           &v70) )
    {
      v24 = *((_QWORD *)this + 93);
      v25 = 0LL;
      *((_BYTE *)this + 947) = 1;
      v71 = 0LL;
      v26 = v24 + 44;
      if ( !v24 )
        v26 = 100LL;
      v27 = v24 + 408;
      v81 = (int *)v26;
      v28 = v24 + 384;
      if ( !v24 )
        v28 = 440LL;
      v78 = *(_DWORD *)v28;
      v29 = v24 + 388;
      if ( !v24 )
        v29 = 444LL;
      v69 = *(_DWORD *)v29;
      if ( !v24 )
        v27 = 464LL;
      if ( (__int64)(*(_QWORD *)(v27 + 8) - *(_QWORD *)v27) >> 3 )
      {
        do
        {
          v30 = (_QWORD *)std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::at(
                            v27,
                            v25);
          v82 = (struct IImageSource *)((*v30 + 16LL) & -(__int64)(*v30 != 0LL));
          v31 = std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::at(
                  v27,
                  v25);
          v32 = *(_DWORD **)v31;
          v34 = (const struct CVisual *)*(unsigned int *)(*(_QWORD *)v31 + 52LL);
          v35 = *(_DWORD *)(*(_QWORD *)v31 + 60LL);
          v36 = *(_DWORD *)(*(_QWORD *)v31 + 56LL);
          v75 = *(_DWORD *)(*(_QWORD *)v31 + 48LL);
          v33 = v75;
          *(_QWORD *)&v86 = __PAIR64__((unsigned int)v34, v75);
          v76 = (int)v34;
          *((_QWORD *)&v86 + 1) = __PAIR64__(v35, v36);
          v77 = v35;
          if ( v75 > 0 || (int)v34 > 0 )
          {
            v37 = v75;
            v38 = (int)v34;
            if ( v75 >= *v81 )
              v37 = *v81;
            v39 = (int)v34 < v81[2];
            v74 = v37;
            if ( !v39 )
              v38 = v81[2];
            v40 = v38;
            v73 = v38;
            if ( (int)v34 <= 0 )
              v40 = 0;
            v41 = (_DWORD)v34 - v40;
            v42 = v37;
            if ( v75 <= 0 )
              v42 = 0;
            Bounds = CDrawingContext::PushOffsetInternal(a2, v34, (float)(v75 - v42), (float)v41, 0.0);
            v10 = Bounds;
            if ( Bounds < 0 )
            {
              v66 = 2084;
              goto LABEL_126;
            }
            v33 = v32[12];
            LODWORD(v86) = v75 - v74;
            v67 = 1;
            DWORD1(v86) = v76 - v73;
            v43 = v36 - v74;
            LODWORD(v34) = v32[13];
            v36 = v32[14];
            DWORD2(v86) = v43;
            v35 = v32[15];
            HIDWORD(v86) = v77 - v73;
          }
          if ( v33 )
            v72.cxLeftWidth = 0;
          else
            v72.cxLeftWidth = *((_DWORD *)this + 211);
          if ( (_DWORD)v34 )
            v72.cyTopHeight = 0;
          else
            v72.cyTopHeight = *((_DWORD *)this + 213);
          if ( v36 == v78 )
            v72.cxRightWidth = *((_DWORD *)this + 212);
          else
            v72.cxRightWidth = 0;
          if ( v35 == v69 )
            v72.cyBottomHeight = *((_DWORD *)this + 214);
          else
            v72.cyBottomHeight = 0;
          *(_OWORD *)((char *)this + 948) = v86;
          if ( Flink )
            v44 = *((_DWORD *)Flink + 6);
          else
            v44 = 0;
          Bounds = CWindowNode::RenderImage(
                     this,
                     a2,
                     Flink,
                     v82,
                     *((const struct CShape **)this + 116),
                     &v72,
                     v44,
                     0,
                     0,
                     0LL);
          v10 = Bounds;
          if ( Bounds < 0 )
          {
            v66 = 2110;
            goto LABEL_126;
          }
          if ( v67 )
          {
            CDrawingContext::PopTransformInternal(a2, 1);
            v67 = v45;
          }
          v25 = v71 + 1;
          v46 = (__int64)(*(_QWORD *)(v27 + 8) - *(_QWORD *)v27) >> 3;
          v71 = v25;
        }
        while ( v25 < v46 );
      }
      *((_BYTE *)this + 947) = 0;
    }
    else
    {
      if ( Flink )
        v17 = *((_DWORD *)Flink + 6);
      else
        v17 = 0;
      Bounds = CWindowNode::RenderImage(
                 this,
                 a2,
                 Flink,
                 *((struct IImageSource **)this + 93),
                 *((const struct CShape **)this + 116),
                 (struct _MARGINS *)((char *)this + 844),
                 v17,
                 0,
                 0,
                 0LL);
      v10 = Bounds;
      if ( Bounds < 0 )
      {
        v66 = 2129;
        goto LABEL_126;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 93) + 192LL))(*((_QWORD *)this + 93)) )
    {
      v47 = *((_QWORD *)this + 2);
      v48 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 93)
                                                                                         + 200LL))(*((_QWORD *)this + 93));
      Bounds = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(v47 + 376), v48);
      v10 = Bounds;
      if ( Bounds < 0 )
      {
        v66 = 2134;
LABEL_126:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Bounds, v66, 0LL);
        goto LABEL_29;
      }
    }
LABEL_27:
    v18 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 111);
    if ( v18 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL)
        && (v49 = *((_QWORD *)v18 + 12)) != 0
        && (*(_BYTE *)(v49 + 268) & 2) != 0 )
      {
        CWindowNode::GetDxClipShape(this, &v79, a3);
        v51 = v79;
        v88[0] = &CRectanglesShape::`vftable';
        v88[2] = v91;
        v88[3] = v91;
        v88[1] = 0LL;
        v89 = 1;
        v90 = 1LL;
        v92 = 0LL;
        if ( !v79 )
        {
          v87[0] = 0;
          v87[1] = 0;
          v52 = 0;
          if ( *((_DWORD *)this + 180) - *((_DWORD *)this + 178) >= 0 )
            v52 = *((_DWORD *)this + 180) - *((_DWORD *)this + 178);
          v53 = _mm_cvtsi32_si128(v52);
          v54 = 0;
          v55 = _mm_cvtepi32_ps(v53).m128_u32[0];
          if ( *((_DWORD *)this + 181) - *((_DWORD *)this + 179) >= 0 )
            v54 = *((_DWORD *)this + 181) - *((_DWORD *)this + 179);
          v87[2] = v55;
          *(float *)&v87[3] = (float)v54;
          CRectanglesShape::SetSingleRect((CRectanglesShape *)v88, (const struct MilRectF *)v87);
          CShapePtr::Release((CShapePtr *)&v79);
          v51 = (const struct CShape *)v88;
          v80 = 0;
          v79 = (const struct CShape *)v88;
        }
        v56 = CWindowNode::RenderBlackShape(v50, a2, v51);
        v10 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x888u, 0LL);
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v88);
          CShapePtr::Release((CShapePtr *)&v79);
          goto LABEL_29;
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v88);
        CShapePtr::Release((CShapePtr *)&v79);
      }
      else
      {
        v58 = *((_QWORD *)v18 + 12);
        v59 = 1;
        if ( v58 )
          v59 = *(_DWORD *)(v58 + 168);
        v68 = v59 == 1;
        Bounds = CCompositionSurfaceBitmap::GetBounds(v18, 0LL, 0LL, (__int64)v94);
        v10 = Bounds;
        if ( Bounds < 0 )
        {
          v66 = 2147;
          goto LABEL_126;
        }
        v60 = *((_QWORD *)this + 111);
        if ( v59 == 1 )
          v93 = *(_OWORD *)&CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)(v60 + 56), &v85)->r;
        v61 = (struct _D3DCOLORVALUE *)&v93;
        if ( v59 != 1 )
          v61 = 0LL;
        v62 = v59 != 1;
        if ( Flink )
          v63 = *((_DWORD *)Flink + 8);
        else
          v63 = 0;
        DxClipShape = (const struct CShape **)CWindowNode::GetDxClipShape(this, v84, 0LL);
        v10 = CWindowNode::RenderImage(
                this,
                a2,
                Flink,
                (struct IImageSource *)((v60 + 64) & -(__int64)(v60 != 0)),
                *DxClipShape,
                0LL,
                v63,
                v62,
                v68,
                v61);
        CShapePtr::Release((CShapePtr *)v84);
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v10, 0x872u, 0LL);
          goto LABEL_29;
        }
      }
    }
    Bounds = CVisual::RenderContent(this, a2, v83);
    v10 = Bounds;
    if ( Bounds >= 0 )
      goto LABEL_29;
    v66 = 2188;
    goto LABEL_126;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) )
  {
    *((_BYTE *)a2 + 6354) = 1;
    goto LABEL_2;
  }
  Bounds = CWindowNode::RenderBlackContent(this, a2);
  v10 = Bounds;
  if ( Bounds < 0 )
  {
    v66 = 2029;
    goto LABEL_126;
  }
  *a3 = 1;
LABEL_29:
  *((_BYTE *)this + 947) = 0;
  if ( v67 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return (unsigned int)v10;
}
