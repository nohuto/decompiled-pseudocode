/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012D78 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019B9C (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001B8EC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x1800B0798 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B10A8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dffffq @ 0x180177070 (McTemplateU0dffffq.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180192200 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801B93D8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v5; // rcx
  int RenderBounds; // ebx
  __int64 v9; // r13
  __int64 *v10; // r14
  __int64 v11; // r12
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  LONG v17; // r13d
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // r12d
  int v21; // r15d
  int v22; // eax
  unsigned int v23; // ecx
  LONG left; // r9d
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // eax
  LONG v28; // ecx
  int v29; // r12d
  char v30; // r15
  struct tagRECT v31; // xmm0
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  int (__fastcall ***v36)(_QWORD, GUID *, unsigned int *); // r10
  int v37; // r13d
  LONG v38; // eax
  int v39; // r12d
  int v40; // ecx
  int v41; // eax
  float v42; // xmm8_4
  float v43; // xmm9_4
  bool v44; // r15
  int v45; // eax
  CMILMatrix *v46; // rcx
  int v47; // eax
  __int128 v48; // xmm3
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  int v52; // eax
  unsigned int v53; // edx
  float v54; // xmm1_4
  unsigned int v55; // r8d
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 v58; // rdx
  LONG v60; // ecx
  LONG v61; // eax
  LONG v62; // r9d
  LONG v63; // edx
  LONG v64; // r8d
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  __int64 v68; // r8
  _DWORD *v69; // rdx
  char *v70; // r9
  int v71; // eax
  unsigned int v72; // ecx
  __int64 v73; // rbx
  __int64 *DxClipShape; // rax
  __int64 v75; // rdx
  __int64 *v76; // rax
  __int64 v77; // rax
  struct IImageSource *v78; // rdx
  int v79; // eax
  unsigned int v80; // ecx
  __int64 v81; // rbx
  __int64 *v82; // rax
  __int64 v83; // r8
  __int64 v84; // r8
  _DWORD *v85; // rdx
  char *v86; // r9
  int v87; // eax
  unsigned int v88; // ecx
  _OWORD *v89; // rcx
  bool v90; // cc
  float v91; // xmm6_4
  float v92; // xmm7_4
  float v93; // xmm4_4
  int v94; // eax
  unsigned int v95; // [rsp+20h] [rbp-E0h]
  char v96[8]; // [rsp+40h] [rbp-C0h] BYREF
  LONG v97; // [rsp+48h] [rbp-B8h]
  unsigned int v98[4]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v99[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v100; // [rsp+A0h] [rbp-60h]
  __int128 v101; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT rcDst; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v103; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v104; // [rsp+E0h] [rbp-20h] BYREF
  int v105; // [rsp+F0h] [rbp-10h]

  v5 = *((_QWORD *)this + 32);
  RenderBounds = 0;
  if ( v5 )
  {
    v67 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v5 + 152LL))(
            v5,
            a3,
            (char *)this + 132);
    RenderBounds = v67;
    if ( v67 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v67, 0xFACu);
  }
  if ( RenderBounds < 0 )
  {
    v95 = 1795;
    goto LABEL_174;
  }
  LODWORD(v9) = *((_DWORD *)a3 + 106);
  v10 = (__int64 *)((char *)a3 + 400);
  v11 = *((_QWORD *)a3 + 50);
  RenderBounds = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v68 = *((unsigned int *)a3 + 258);
      v9 = (unsigned int)(v9 - 1);
      v98[0] = v68;
      *((_DWORD *)a3 + 258) = v68 + 2;
      v69 = (_DWORD *)(v11 + 20 * v9);
      *(_QWORD *)&v103 = v69;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0dffffq(5 * v9, (_DWORD)v69, v68, (_DWORD)a4, v69[1], v69[2], v69[3], v69[4]);
        v69 = (_DWORD *)v103;
        v68 = v98[0];
      }
      if ( !v69[4] )
      {
        v70 = (char *)a3 + 820;
        if ( !*((_BYTE *)a3 + 816) )
          v70 = 0LL;
        v71 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)a3 + 49) + 32LL))(
                *((_QWORD *)a3 + 49),
                v69,
                v68,
                v70);
        RenderBounds = v71;
        if ( v71 < 0 )
          break;
      }
      if ( !(_DWORD)v9 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x357u);
  }
LABEL_4:
  *((_DWORD *)a3 + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a3 + 400, 0x14u);
  if ( RenderBounds < 0 )
  {
    v95 = 1796;
    goto LABEL_174;
  }
  v13 = *((_DWORD *)a3 + 258);
  *((_DWORD *)a4 + 7) = v13;
  *((_DWORD *)a4 + 8) = v13;
  v14 = *((_QWORD *)this + 113);
  if ( v14 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v14 + 64)) )
  {
    v73 = *((_QWORD *)this + 113);
    DxClipShape = (__int64 *)CWindowNode::GetDxClipShape(this, &rcDst);
    v75 = v73 + 64;
    if ( !v73 )
      v75 = 0LL;
    RenderBounds = CWindowNode::GetRenderBounds((__int64)this, v75, *DxClipShape, &v101, v96, 0LL);
    CShapePtr::Release((CShapePtr *)&rcDst);
    if ( RenderBounds < 0 )
    {
      v95 = 1818;
      goto LABEL_174;
    }
    rcDst = (struct tagRECT)v101;
    v76 = (__int64 *)CWindowNode::GetDxClipShape(this, &v103);
    RenderBounds = CWindowNode::CollectOcclusionHelper(
                     (_DWORD)this,
                     *((_QWORD *)this + 113),
                     (unsigned int)&rcDst,
                     (_DWORD)a3,
                     *v76,
                     v96[0]);
    CShapePtr::Release((CShapePtr *)&v103);
    if ( RenderBounds < 0 )
    {
      v95 = 1824;
      goto LABEL_174;
    }
    if ( *((_BYTE *)a3 + 817) )
    {
      v77 = *((_QWORD *)this + 113);
      v78 = (struct IImageSource *)(v77 + 64);
      if ( !v77 )
        v78 = 0LL;
      v99[0] = _xmm;
      v99[1] = _xmm;
      v99[2] = _xmm;
      v99[3] = _xmm;
      v100 = 32085;
      v79 = CWindowNode::ApplyTextureToLocalTransform(this, v78, (struct CMILMatrix *)v99);
      RenderBounds = v79;
      if ( v79 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x72Au);
        return (unsigned int)RenderBounds;
      }
      v81 = *((_QWORD *)this + 113);
      v82 = (__int64 *)CWindowNode::GetDxClipShape(this, &rcDst);
      v83 = v81 + 56;
      if ( !v81 )
        v83 = 0LL;
      RenderBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                       (__int64)a3,
                       (__int64)this,
                       v83,
                       (__int64)v99,
                       *v82,
                       *((_DWORD *)this + 219));
      CShapePtr::Release((CShapePtr *)&rcDst);
      if ( RenderBounds < 0 )
      {
        v95 = 1840;
LABEL_174:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, v95);
        return (unsigned int)RenderBounds;
      }
    }
  }
  LODWORD(v15) = *((_DWORD *)a3 + 106);
  RenderBounds = 0;
  v16 = *v10;
  if ( (_DWORD)v15 )
  {
    while ( 1 )
    {
      v84 = *((unsigned int *)a3 + 258);
      v15 = (unsigned int)(v15 - 1);
      v98[0] = v84;
      *((_DWORD *)a3 + 258) = v84 + 2;
      v85 = (_DWORD *)(v16 + 20 * v15);
      *(_QWORD *)&v103 = v85;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0dffffq(5 * v15, (_DWORD)v85, v84, v12, v85[1], v85[2], v85[3], v85[4]);
        v85 = (_DWORD *)v103;
        v84 = v98[0];
      }
      if ( !v85[4] )
      {
        v86 = (char *)a3 + 820;
        if ( !*((_BYTE *)a3 + 816) )
          v86 = 0LL;
        v87 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)a3 + 49) + 32LL))(
                *((_QWORD *)a3 + 49),
                v85,
                v84,
                v86);
        RenderBounds = v87;
        if ( v87 < 0 )
          break;
      }
      if ( !(_DWORD)v15 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x357u);
  }
LABEL_7:
  v17 = 0;
  *((_DWORD *)a3 + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a3 + 400, 0x14u);
  if ( RenderBounds < 0 )
  {
    v95 = 1850;
    goto LABEL_174;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 258);
  if ( *((_QWORD *)this + 95) && !*((_BYTE *)this + 954) && (*((_BYTE *)this + 876) & 2) == 0 )
  {
    v18 = CWindowNode::EnsureEffectiveSpriteClip(this);
    RenderBounds = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x742u);
      return (unsigned int)RenderBounds;
    }
    v5 = *((_QWORD *)this + 118);
    RenderBounds = 0;
    *(_QWORD *)&v103 = v5;
    *(_QWORD *)&v101 = 0LL;
    if ( *((_QWORD *)this + 95) )
    {
      if ( *((_BYTE *)this + 965) )
      {
        v20 = *((_DWORD *)this + 244) - *((_DWORD *)this + 242);
        v21 = *((_DWORD *)this + 245) - *((_DWORD *)this + 243);
        DWORD2(v101) = v20;
LABEL_17:
        HIDWORD(v101) = v21;
        goto LABEL_18;
      }
      v20 = *((_DWORD *)this + 184) - *((_DWORD *)this + 182);
      if ( v20 < 0 )
      {
        v20 = 0;
        DWORD2(v101) = 0;
      }
      else
      {
        DWORD2(v101) = *((_DWORD *)this + 184) - *((_DWORD *)this + 182);
      }
      v21 = *((_DWORD *)this + 185) - *((_DWORD *)this + 183);
      if ( v21 >= 0 )
        goto LABEL_17;
      v21 = 0;
      HIDWORD(v101) = 0;
    }
    else
    {
      v21 = 0;
      *((_QWORD *)&v101 + 1) = 0LL;
      v20 = 0;
    }
LABEL_18:
    if ( v5 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, &v104, 0LL);
      RenderBounds = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x65Cu);
        v30 = v96[0];
        v29 = v101;
      }
      else
      {
        CMilRectLFromMilRectF(&rcDst, &v104);
        left = rcDst.left;
        top = rcDst.top;
        right = rcDst.right;
        if ( *((_BYTE *)this + 965) )
        {
          left = rcDst.left - *((_DWORD *)this + 242);
          right = rcDst.right - *((_DWORD *)this + 242);
          top = rcDst.top - *((_DWORD *)this + 243);
          bottom = rcDst.bottom - *((_DWORD *)this + 243);
        }
        else
        {
          bottom = rcDst.bottom;
        }
        if ( left > 0 )
        {
          v28 = left;
          LODWORD(v101) = left;
        }
        else
        {
          v28 = v101;
        }
        if ( top > 0 )
          v17 = top;
        DWORD1(v101) = v17;
        if ( right >= v20 )
          right = v20;
        else
          DWORD2(v101) = right;
        if ( bottom < v21 )
          HIDWORD(v101) = bottom;
        if ( right <= v28 )
          goto LABEL_105;
        if ( bottom >= v21 )
          bottom = v21;
        if ( bottom <= v17 )
        {
LABEL_105:
          v29 = 0;
          v101 = 0uLL;
        }
        else
        {
          v29 = v101;
        }
        v30 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v103 + 40LL))(v103, v98)
          && v98[0] == 1 )
        {
          goto LABEL_38;
        }
      }
LABEL_39:
      if ( RenderBounds < 0 )
      {
        v95 = 1863;
        goto LABEL_174;
      }
      v31 = (struct tagRECT)v101;
      v32 = (__int64 *)*((_QWORD *)this + 95);
      *(_QWORD *)&v101 = *((_QWORD *)this + 118);
      v33 = *v32;
      rcDst = v31;
      v34 = (*(__int64 (__fastcall **)(__int64 *))(v33 + 152))(v32);
      RenderBounds = 0;
      v35 = rcDst.right - *((_DWORD *)this + 216);
      v36 = (int (__fastcall ***)(_QWORD, GUID *, unsigned int *))v34;
      v37 = rcDst.top + *((_DWORD *)this + 217);
      *(_QWORD *)&v103 = v34;
      v38 = v29 + *((_DWORD *)this + 215);
      v97 = v35;
      v39 = rcDst.bottom - *((_DWORD *)this + 218);
      v98[0] = v38;
      if ( v35 <= v38 )
        v97 = v38;
      if ( v39 <= v37 )
        v39 = v37;
      v40 = *((_DWORD *)this + 220);
      if ( !v40 && !*((_DWORD *)this + 222) && !*((_DWORD *)this + 221) && !*((_DWORD *)this + 223) )
      {
        v41 = v97;
        LODWORD(v5) = v98[0];
        goto LABEL_49;
      }
      v60 = *((_DWORD *)this + 170) + v40;
      rcDst.right = *((_DWORD *)this + 172) - *((_DWORD *)this + 221);
      rcDst.top = *((_DWORD *)this + 222) + *((_DWORD *)this + 171);
      v61 = *((_DWORD *)this + 173) - *((_DWORD *)this + 223);
      rcDst.left = v60;
      rcDst.bottom = v61;
      IntersectRect(&rcDst, &rcDst, (const RECT *)((char *)this + 728));
      if ( EqualRect(&rcDst, (const RECT *)((char *)this + 728)) )
      {
        LODWORD(v5) = v98[0];
      }
      else
      {
        OffsetRect(&rcDst, -*((_DWORD *)this + 182), -*((_DWORD *)this + 183));
        if ( *((_BYTE *)this + 965) )
          OffsetRect(&rcDst, -*((_DWORD *)this + 242), -*((_DWORD *)this + 243));
        LODWORD(v5) = v98[0];
        if ( rcDst.left > (int)v98[0] )
          LODWORD(v5) = rcDst.left;
        v62 = v97;
        v63 = rcDst.right;
        if ( rcDst.top > v37 )
          v37 = rcDst.top;
        if ( rcDst.right < v97 )
          v97 = rcDst.right;
        v64 = v39;
        v65 = HIDWORD(*(_QWORD *)&rcDst.right);
        if ( rcDst.right >= v62 )
          v63 = v62;
        if ( rcDst.bottom < v39 )
          v39 = rcDst.bottom;
        if ( v63 <= (int)v5 )
          goto LABEL_106;
        if ( rcDst.bottom >= v64 )
          LODWORD(v65) = v64;
        if ( (int)v65 <= v37 )
        {
LABEL_106:
          v36 = (int (__fastcall ***)(_QWORD, GUID *, unsigned int *))v103;
          v39 = 0;
          v41 = 0;
          v37 = 0;
          LODWORD(v5) = 0;
LABEL_49:
          v42 = (float)(int)v5;
          *(float *)&v103 = (float)(int)v5;
          *((float *)&v103 + 1) = (float)v37;
          v43 = (float)v41;
          *((float *)&v103 + 2) = (float)v41;
          *((float *)&v103 + 3) = (float)v39;
          if ( !v30 )
          {
            if ( (_QWORD)v101 )
            {
              v66 = COcclusionContext::DrawClippedImage(
                      (__int64)a3,
                      (__int64)v36,
                      (float *)&v103,
                      v101,
                      *((_DWORD *)this + 219));
              RenderBounds = v66;
              if ( v66 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v66, 0x785u);
            }
LABEL_68:
            if ( RenderBounds < 0 )
            {
              v95 = 1869;
              goto LABEL_174;
            }
            return (unsigned int)RenderBounds;
          }
          if ( *((_DWORD *)a3 + 259) )
          {
            RenderBounds = 0;
            goto LABEL_68;
          }
          v44 = 0;
          *(_QWORD *)v98 = 0LL;
          if ( v36 )
          {
            if ( (*((_BYTE *)this + 876) & 1) != 0 )
              goto LABEL_53;
            if ( (**v36)(v36, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, v98) >= 0
              && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v98 + 88LL))(*(_QWORD *)v98) )
            {
              v44 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v98 + 104LL))(*(_QWORD *)v98) != 0;
            }
            LODWORD(v5) = v98[0];
            if ( *(_QWORD *)v98 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v98 + 16LL))(*(_QWORD *)v98);
          }
          RenderBounds = 0;
          if ( !v44 )
          {
LABEL_76:
            if ( RenderBounds < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, 0x77Eu);
            goto LABEL_68;
          }
LABEL_53:
          RenderBounds = 0;
          if ( v43 <= v42 || (float)v39 <= (float)v37 )
            goto LABEL_67;
          v45 = *((_DWORD *)a3 + 2);
          v105 = 0;
          v46 = v45
              ? (CMILMatrix *)(*((_QWORD *)a3 + 3) + 68LL * (unsigned int)(v45 - 1))
              : (CMILMatrix *)&CMILMatrix::Identity;
          CMILMatrix::Transform2DBoundsHelper<0>(v46);
          v47 = *((_DWORD *)a3 + 30);
          if ( v47 )
          {
            v89 = (_OWORD *)(*((_QWORD *)a3 + 17) + 16LL * (unsigned int)(v47 - 1));
            v48 = *v89;
            v90 = *(float *)&v101 <= COERCE_FLOAT(*v89);
            v103 = *v89;
            if ( !v90 )
              LODWORD(v48) = v101;
            v49 = *((float *)&v103 + 1);
            v91 = *((float *)&v103 + 1);
            if ( *((float *)&v101 + 1) > *((float *)&v103 + 1) )
            {
              v49 = *((float *)&v101 + 1);
              v91 = *((float *)&v101 + 1);
            }
            v50 = *((float *)&v103 + 2);
            v92 = *((float *)&v103 + 2);
            if ( *((float *)&v103 + 2) > *((float *)&v101 + 2) )
            {
              v50 = *((float *)&v101 + 2);
              v92 = *((float *)&v101 + 2);
            }
            v51 = *((float *)&v103 + 3);
            v93 = *((float *)&v103 + 3);
            if ( *((float *)&v103 + 3) > *((float *)&v101 + 3) )
            {
              v51 = *((float *)&v101 + 3);
              v93 = *((float *)&v101 + 3);
            }
            if ( v92 <= *(float *)&v48 || v93 <= v91 )
            {
              v49 = 0.0;
              v51 = 0.0;
              v50 = 0.0;
              LODWORD(v48) = 0;
            }
          }
          else
          {
            LODWORD(v48) = v101;
            v49 = *((float *)&v101 + 1);
            v50 = *((float *)&v101 + 2);
            v51 = *((float *)&v101 + 3);
          }
          v52 = *((_DWORD *)a3 + 270);
          v53 = -1;
          *((_QWORD *)&v104 + 1) = __PAIR64__(LODWORD(v51), LODWORD(v50));
          *(_QWORD *)&v104 = __PAIR64__(LODWORD(v49), v48);
          v54 = (float)(v51 - v49) * (float)(v50 - *(float *)&v48);
          if ( v52 )
            v53 = *(_DWORD *)(*((_QWORD *)a3 + 137) + 4LL * (unsigned int)(v52 - 1));
          v55 = *((_DWORD *)a3 + 160);
          LODWORD(v5) = 0;
          if ( !v55 )
            goto LABEL_67;
          while ( ((v53 >> v5) & 1) == 0 || v54 <= (float)(*((float *)a3 + (unsigned int)v5 + 193) * 0.25) )
          {
            LODWORD(v5) = v5 + 1;
            if ( (unsigned int)v5 >= v55 )
              goto LABEL_67;
          }
          v56 = *((unsigned int *)a3 + 106);
          v57 = v56 + 1;
          if ( (int)v56 + 1 < (unsigned int)v56 )
          {
            RenderBounds = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u);
          }
          else
          {
            if ( v57 <= *((_DWORD *)a3 + 105) )
            {
              v5 = *v10;
              v58 = 5 * v56;
              *(_OWORD *)(v5 + 4 * v58) = v104;
              *(_DWORD *)(v5 + 4 * v58 + 16) = v105;
              *((_DWORD *)a3 + 106) = v57;
LABEL_67:
              if ( RenderBounds >= 0 )
                goto LABEL_68;
              MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, 0x522u);
              goto LABEL_76;
            }
            v94 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 400, 20, 1, &v104);
            RenderBounds = v94;
            if ( v94 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v94, 0xC0u);
          }
          if ( RenderBounds >= 0 )
            goto LABEL_68;
          MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderBounds, 0x724u);
          goto LABEL_67;
        }
      }
      v41 = v97;
      v36 = (int (__fastcall ***)(_QWORD, GUID *, unsigned int *))v103;
      goto LABEL_49;
    }
    v29 = v101;
LABEL_38:
    v30 = 1;
    goto LABEL_39;
  }
  return (unsigned int)RenderBounds;
}
