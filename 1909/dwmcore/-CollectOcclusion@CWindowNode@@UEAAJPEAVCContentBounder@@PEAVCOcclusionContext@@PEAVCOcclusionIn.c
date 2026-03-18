/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18008F970
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E60 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180017ED4 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001D18C (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180069770 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dffffq @ 0x180170B78 (McTemplateU0dffffq.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C6C40 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x180217B8C (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180217DE8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v5; // rcx
  signed int RenderBounds; // ebx
  __int64 v9; // r13
  __int64 *v10; // rdi
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  bool v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r15
  LONG v18; // r13d
  int v19; // eax
  __int64 v20; // rcx
  float v21; // xmm0_4
  LONG v22; // ecx
  float v23; // xmm0_4
  LONG v24; // r8d
  float v25; // xmm0_4
  bool v26; // zf
  __int64 v27; // rcx
  int (__fastcall ***v28)(_QWORD, GUID *, struct tagRECT *); // r10
  int v29; // r8d
  int right; // r13d
  int bottom; // r15d
  int top; // eax
  float v33; // xmm8_4
  float v34; // xmm6_4
  float v35; // xmm7_4
  bool v36; // r15
  int v37; // eax
  CMILMatrix *v38; // rcx
  int v39; // eax
  __int128 v40; // xmm3
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  int v44; // eax
  unsigned int v45; // edx
  float v46; // xmm1_4
  unsigned int v47; // r8d
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rdx
  LONG v52; // ecx
  LONG v53; // eax
  signed int v54; // eax
  signed int v55; // eax
  __int64 left; // r8
  _DWORD *v57; // rdx
  char *v58; // r9
  signed int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 *DxClipShape; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  void **v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  struct IImageSource *v69; // rdx
  signed int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rbx
  void **v74; // rax
  __int64 v75; // r8
  __int64 v76; // r8
  _DWORD *v77; // r10
  char *v78; // r9
  __int64 v79; // rcx
  int v80; // edx
  int v81; // eax
  _OWORD *v82; // rcx
  bool v83; // cc
  float v84; // xmm6_4
  float v85; // xmm7_4
  float v86; // xmm4_4
  signed int v87; // eax
  void *v88; // [rsp+20h] [rbp-E0h]
  unsigned int v89; // [rsp+20h] [rbp-E0h]
  char v90; // [rsp+40h] [rbp-C0h] BYREF
  int v91[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+60h] [rbp-A0h]
  __int128 v93; // [rsp+70h] [rbp-90h]
  __int128 v94; // [rsp+80h] [rbp-80h]
  __int16 v95; // [rsp+90h] [rbp-70h]
  struct tagRECT v96; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT rcDst; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v98; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v99; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v100; // [rsp+E0h] [rbp-20h] BYREF
  float v101; // [rsp+E8h] [rbp-18h]
  float v102; // [rsp+ECh] [rbp-14h]
  __int128 v103; // [rsp+F0h] [rbp-10h] BYREF
  int v104; // [rsp+100h] [rbp+0h]

  v5 = *((_QWORD *)this + 32);
  RenderBounds = 0;
  if ( v5 )
  {
    v55 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v5 + 192LL))(
            v5,
            a3,
            (char *)this + 132);
    RenderBounds = v55;
    if ( v55 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v55, 0x101Cu, 0LL);
  }
  if ( RenderBounds < 0 )
  {
    v89 = 1725;
    goto LABEL_148;
  }
  LODWORD(v9) = *((_DWORD *)a3 + 108);
  RenderBounds = 0;
  v10 = (__int64 *)((char *)a3 + 408);
  v11 = *((_QWORD *)a3 + 51);
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      left = *((unsigned int *)a3 + 260);
      v9 = (unsigned int)(v9 - 1);
      v98.left = left;
      *((_DWORD *)a3 + 260) = left + 2;
      v57 = (_DWORD *)(v11 + 20 * v9);
      v100 = v57;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0dffffq(5 * v9, (_DWORD)v57, left, (_DWORD)a4, v57[1], v57[2], v57[3], v57[4]);
        v57 = v100;
        left = (unsigned int)v98.left;
      }
      if ( !v57[4] )
      {
        v58 = (char *)a3 + 828;
        if ( !*((_BYTE *)a3 + 824) )
          v58 = 0LL;
        v59 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)a3 + 50) + 32LL))(
                *((_QWORD *)a3 + 50),
                v57,
                left,
                v58);
        RenderBounds = v59;
        if ( v59 < 0 )
          break;
      }
      if ( !(_DWORD)v9 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x356u, 0LL);
  }
LABEL_4:
  v5 = *v10;
  *((_DWORD *)a3 + 108) = 0;
  if ( v5 != *((_QWORD *)a3 + 52) )
  {
    operator delete((void *)v5);
    *((_QWORD *)a3 + 51) = *((_QWORD *)a3 + 52);
    *((_DWORD *)a3 + 107) = *((_DWORD *)a3 + 106);
  }
  if ( RenderBounds < 0 )
  {
    v89 = 1726;
    goto LABEL_148;
  }
  v12 = *((_DWORD *)a3 + 260);
  *((_DWORD *)a4 + 7) = v12;
  *((_DWORD *)a4 + 8) = v12;
  v13 = *((_QWORD *)this + 111);
  if ( v13 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v13 + 64)) )
  {
    v62 = *((_QWORD *)this + 111);
    DxClipShape = (__int64 *)CWindowNode::GetDxClipShape(this, &rcDst, v61);
    v64 = v62 + 64;
    if ( !v62 )
      v64 = 0LL;
    RenderBounds = CWindowNode::GetRenderBounds((__int64)this, v64, *DxClipShape, &v96, (bool *)&v90, 0LL);
    CShapePtr::Release((CShapePtr *)&rcDst);
    if ( RenderBounds < 0 )
    {
      v89 = 1748;
      goto LABEL_148;
    }
    v66 = (void **)CWindowNode::GetDxClipShape(this, &v99, v65);
    v14 = v90;
    v67 = *((_QWORD *)this + 111);
    v88 = *v66;
    rcDst = v96;
    RenderBounds = CWindowNode::CollectOcclusionHelper(
                     (_DWORD)this,
                     v67,
                     (unsigned int)&rcDst,
                     (_DWORD)a3,
                     (__int64)v88,
                     v90);
    CShapePtr::Release((CShapePtr *)&v99);
    if ( RenderBounds < 0 )
    {
      v89 = 1754;
      goto LABEL_148;
    }
    if ( *((_BYTE *)a3 + 825) )
    {
      v68 = *((_QWORD *)this + 111);
      v69 = (struct IImageSource *)(v68 + 64);
      if ( !v68 )
        v69 = 0LL;
      *(_OWORD *)v91 = _xmm;
      v92 = _xmm;
      v93 = _xmm;
      v94 = _xmm;
      v95 = 32085;
      v70 = CWindowNode::ApplyTextureToLocalTransform(this, v69, (struct CMILMatrix *)v91);
      RenderBounds = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x6E4u, 0LL);
        return (unsigned int)RenderBounds;
      }
      v73 = *((_QWORD *)this + 111);
      v74 = (void **)CWindowNode::GetDxClipShape(this, &rcDst, v72);
      v75 = v73 + 56;
      if ( !v73 )
        v75 = 0LL;
      RenderBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                       (__int64)a3,
                       (__int64)this,
                       v75,
                       (__int64)v91,
                       *v74,
                       *((_DWORD *)this + 215));
      CShapePtr::Release((CShapePtr *)&rcDst);
      if ( RenderBounds < 0 )
      {
        v89 = 1770;
LABEL_148:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, v89, 0LL);
        return (unsigned int)RenderBounds;
      }
    }
  }
  else
  {
    v14 = v90;
  }
  v15 = *v10;
  RenderBounds = 0;
  LODWORD(v16) = *((_DWORD *)a3 + 108);
  v100 = (_DWORD *)*v10;
  if ( !(_DWORD)v16 )
    goto LABEL_10;
  while ( 1 )
  {
    v76 = *((unsigned int *)a3 + 260);
    v16 = (unsigned int)(v16 - 1);
    v98.left = v76;
    *((_DWORD *)a3 + 260) = v76 + 2;
    v77 = (_DWORD *)(v15 + 20 * v16);
    *(_QWORD *)&v99 = v77;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0dffffq(5 * v16, v15, v76, (_DWORD)a4, v77[1], v77[2], v77[3], v77[4]);
      v15 = (__int64)v100;
      v77 = (_DWORD *)v99;
      v76 = (unsigned int)v98.left;
    }
    if ( v77[4] )
      goto LABEL_113;
    v78 = (char *)a3 + 828;
    if ( !*((_BYTE *)a3 + 824) )
      v78 = 0LL;
    RenderBounds = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)a3 + 50) + 32LL))(
                     *((_QWORD *)a3 + 50),
                     v77,
                     v76,
                     v78);
    if ( RenderBounds < 0 )
      break;
    v15 = (__int64)v100;
LABEL_113:
    if ( !(_DWORD)v16 )
      goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, RenderBounds, 0x356u, 0LL);
LABEL_10:
  v5 = *v10;
  *((_DWORD *)a3 + 108) = 0;
  if ( v5 != *((_QWORD *)a3 + 52) )
  {
    operator delete((void *)v5);
    *((_QWORD *)a3 + 51) = *((_QWORD *)a3 + 52);
    *((_DWORD *)a3 + 107) = *((_DWORD *)a3 + 106);
  }
  if ( RenderBounds < 0 )
  {
    v89 = 1780;
    goto LABEL_148;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 260);
  if ( !*((_QWORD *)this + 93) || *((_BYTE *)this + 938) || (*((_BYTE *)this + 860) & 2) != 0 )
    return (unsigned int)RenderBounds;
  RenderBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
  if ( RenderBounds < 0 )
  {
    v89 = 1788;
    goto LABEL_148;
  }
  v17 = *((_QWORD *)this + 116);
  v5 = 0LL;
  RenderBounds = 0;
  v18 = 0;
  *(_QWORD *)&v96.left = 0LL;
  if ( *((_QWORD *)this + 93) )
  {
    if ( *((_BYTE *)this + 947) )
    {
      v96.right = *((_DWORD *)this + 239) - *((_DWORD *)this + 237);
      v19 = *((_DWORD *)this + 240) - *((_DWORD *)this + 238);
      goto LABEL_22;
    }
    if ( *((_DWORD *)this + 180) - *((_DWORD *)this + 178) < 0 )
      v96.right = 0;
    else
      v96.right = *((_DWORD *)this + 180) - *((_DWORD *)this + 178);
    v19 = *((_DWORD *)this + 181) - *((_DWORD *)this + 179);
    if ( v19 < 0 )
      v96.bottom = 0;
    else
LABEL_22:
      v96.bottom = v19;
  }
  else
  {
    *(_QWORD *)&v96.right = 0LL;
  }
  if ( v17 )
  {
    RenderBounds = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, &v99, 0LL);
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, RenderBounds, 0x616u, 0LL);
      v5 = 0LL;
    }
    else
    {
      v21 = *(float *)&v99 + 6291456.25;
      v22 = (int)(LODWORD(v21) << 10) >> 11;
      rcDst.left = v22;
      v23 = *((float *)&v99 + 1) + 6291456.25;
      v24 = (int)(LODWORD(v23) << 10) >> 11;
      rcDst.top = v24;
      v25 = *((float *)&v99 + 2) + 6291456.25;
      rcDst.right = (int)(LODWORD(v25) << 10) >> 11;
      *(float *)&v98.left = *((float *)&v99 + 3) + 6291456.25;
      v26 = *((_BYTE *)this + 947) == 0;
      rcDst.bottom = v98.left << 10 >> 11;
      if ( !v26 )
      {
        v80 = *((_DWORD *)this + 238);
        v81 = *((_DWORD *)this + 237);
        rcDst.left = v22 - v81;
        rcDst.top = v24 - v80;
        rcDst.bottom = (v98.left << 10 >> 11) - v80;
        rcDst.right = ((int)(LODWORD(v25) << 10) >> 11) - v81;
      }
      TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v96, &rcDst);
      v14 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v17 + 40LL))(v17, &v98) )
        v14 = v98.left == 1;
      v18 = v96.left;
      v5 = 0LL;
    }
  }
  else
  {
    v14 = 1;
  }
  if ( RenderBounds < 0 )
  {
    v89 = 1793;
    goto LABEL_148;
  }
  v27 = *((_QWORD *)this + 93);
  *(_QWORD *)&v99 = *((_QWORD *)this + 116);
  v28 = (int (__fastcall ***)(_QWORD, GUID *, struct tagRECT *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 152LL))(v27);
  v29 = v18 + *((_DWORD *)this + 211);
  right = v96.right - *((_DWORD *)this + 212);
  bottom = v96.bottom - *((_DWORD *)this + 214);
  v100 = v28;
  RenderBounds = 0;
  v96.left = v29;
  top = v96.top + *((_DWORD *)this + 213);
  v96.top = top;
  if ( right <= v29 )
  {
    right = v29;
    v96.right = v29;
  }
  else
  {
    v96.right = right;
  }
  if ( bottom <= top )
  {
    bottom = top;
    v96.bottom = top;
  }
  else
  {
    v96.bottom = bottom;
  }
  v5 = *((unsigned int *)this + 216);
  if ( (_DWORD)v5 || *((_DWORD *)this + 218) || *((_DWORD *)this + 217) || *((_DWORD *)this + 219) )
  {
    v52 = *((_DWORD *)this + 166) + v5;
    rcDst.right = *((_DWORD *)this + 168) - *((_DWORD *)this + 217);
    rcDst.top = *((_DWORD *)this + 167) + *((_DWORD *)this + 218);
    v53 = *((_DWORD *)this + 169) - *((_DWORD *)this + 219);
    rcDst.left = v52;
    rcDst.bottom = v53;
    IntersectRect(&rcDst, &rcDst, (const RECT *)((char *)this + 712));
    if ( !EqualRect(&rcDst, (const RECT *)((char *)this + 712)) )
    {
      OffsetRect(&rcDst, -*((_DWORD *)this + 178), -*((_DWORD *)this + 179));
      if ( *((_BYTE *)this + 947) )
        OffsetRect(&rcDst, -*((_DWORD *)this + 237), -*((_DWORD *)this + 238));
      v98 = rcDst;
      TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v96, &v98);
      bottom = v96.bottom;
      right = v96.right;
    }
    v28 = (int (__fastcall ***)(_QWORD, GUID *, struct tagRECT *))v100;
    v29 = v96.left;
    top = v96.top;
  }
  v33 = (float)v29;
  v34 = (float)top;
  *(float *)&v100 = (float)v29;
  *((float *)&v100 + 1) = (float)top;
  v35 = (float)bottom;
  v101 = (float)right;
  v102 = (float)bottom;
  if ( v14 )
  {
    if ( *((_DWORD *)a3 + 261) )
      goto LABEL_58;
    v36 = 0;
    *(_QWORD *)&v98.left = 0LL;
    if ( v28 )
    {
      if ( (*((_BYTE *)this + 860) & 1) != 0 )
        goto LABEL_43;
      if ( (**v28)(v28, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, &v98) >= 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v98.left + 88LL))(*(_QWORD *)&v98.left) )
      {
        v36 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v98.left + 104LL))(*(_QWORD *)&v98.left) != 0;
      }
      v5 = *(_QWORD *)&v98.left;
      if ( *(_QWORD *)&v98.left )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v98.left + 16LL))(*(_QWORD *)&v98.left);
    }
    if ( !v36 )
    {
LABEL_66:
      if ( RenderBounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, 0x738u, 0LL);
      goto LABEL_58;
    }
LABEL_43:
    RenderBounds = 0;
    if ( (float)right > v33 && v35 > v34 )
    {
      v37 = *((_DWORD *)a3 + 4);
      v104 = 0;
      v38 = v37
          ? (CMILMatrix *)(*((_QWORD *)a3 + 4) + 68LL * (unsigned int)(v37 - 1))
          : (CMILMatrix *)&CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<0>(v38, (__int64)&v100, (float *)&v96.left);
      v39 = *((_DWORD *)a3 + 32);
      if ( v39 )
      {
        v82 = (_OWORD *)(*((_QWORD *)a3 + 18) + 16LL * (unsigned int)(v39 - 1));
        v40 = *v82;
        v83 = *(float *)&v96.left <= COERCE_FLOAT(*v82);
        v99 = *v82;
        if ( !v83 )
          LODWORD(v40) = v96.left;
        v41 = *((float *)&v99 + 1);
        v84 = *((float *)&v99 + 1);
        if ( *(float *)&v96.top > *((float *)&v99 + 1) )
        {
          v41 = *(float *)&v96.top;
          v84 = *(float *)&v96.top;
        }
        v42 = *((float *)&v99 + 2);
        v85 = *((float *)&v99 + 2);
        if ( *((float *)&v99 + 2) > *(float *)&v96.right )
        {
          v42 = *(float *)&v96.right;
          v85 = *(float *)&v96.right;
        }
        v43 = *((float *)&v99 + 3);
        v86 = *((float *)&v99 + 3);
        if ( *((float *)&v99 + 3) > *(float *)&v96.bottom )
        {
          v43 = *(float *)&v96.bottom;
          v86 = *(float *)&v96.bottom;
        }
        if ( v85 <= *(float *)&v40 || v86 <= v84 )
        {
          v41 = 0.0;
          v43 = 0.0;
          v42 = 0.0;
          LODWORD(v40) = 0;
        }
      }
      else
      {
        LODWORD(v40) = v96.left;
        v41 = *(float *)&v96.top;
        v42 = *(float *)&v96.right;
        v43 = *(float *)&v96.bottom;
      }
      v44 = *((_DWORD *)a3 + 272);
      v45 = -1;
      *((_QWORD *)&v103 + 1) = __PAIR64__(LODWORD(v43), LODWORD(v42));
      *(_QWORD *)&v103 = __PAIR64__(LODWORD(v41), v40);
      v46 = (float)(v43 - v41) * (float)(v42 - *(float *)&v40);
      if ( v44 )
        v45 = *(_DWORD *)(*((_QWORD *)a3 + 138) + 4LL * (unsigned int)(v44 - 1));
      v47 = *((_DWORD *)a3 + 162);
      v5 = 0LL;
      if ( v47 )
      {
        while ( ((v45 >> v5) & 1) == 0 || v46 <= (float)(*((float *)a3 + (unsigned int)v5 + 195) * 0.25) )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v47 )
            goto LABEL_57;
        }
        v48 = *((unsigned int *)a3 + 108);
        v49 = v48 + 1;
        if ( (int)v48 + 1 < (unsigned int)v48 )
        {
          RenderBounds = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        }
        else
        {
          if ( v49 <= *((_DWORD *)a3 + 107) )
          {
            v5 = *v10;
            v50 = 5 * v48;
            *(_OWORD *)(v5 + 4 * v50) = v103;
            *(_DWORD *)(v5 + 4 * v50 + 16) = v104;
            *((_DWORD *)a3 + 108) = v49;
            goto LABEL_57;
          }
          v87 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 408, 20, 1, &v103);
          RenderBounds = v87;
          if ( v87 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v87, 0xC3u, 0LL);
        }
        if ( RenderBounds >= 0 )
          goto LABEL_58;
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, 0x6D5u, 0LL);
      }
    }
LABEL_57:
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, 0x4D6u, 0LL);
      goto LABEL_66;
    }
  }
  else if ( (_QWORD)v99 )
  {
    v54 = COcclusionContext::DrawClippedImage((__int64)a3, (__int64)v28, (float *)&v100, v99, *((_DWORD *)this + 215));
    RenderBounds = v54;
    if ( v54 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v54, 0x73Fu, 0LL);
  }
LABEL_58:
  if ( RenderBounds < 0 )
  {
    v89 = 1799;
    goto LABEL_148;
  }
  return (unsigned int)RenderBounds;
}
