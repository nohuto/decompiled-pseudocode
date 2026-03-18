/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013230 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180016DAC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x1800171C0 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18001A914 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029E60 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18005E640 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x180075EB8 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801803BC (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1801B5D8C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801B6734 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1801B922C (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801B9A44 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, void (__fastcall ***a3)(void *, GUID *, __int64 *))
{
  char v5; // di
  unsigned int v6; // r14d
  CMILCOMBase *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  bool v13; // r12
  float v14; // xmm7_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rax
  char SwapChainTransformForDirtyRects; // al
  char v21; // bl
  __int64 v22; // rcx
  char v23; // r13
  unsigned int v24; // eax
  __m128i v25; // xmm7
  int v26; // eax
  CShapePtr *DxClipShape; // rax
  char v28; // r8
  unsigned int v29; // edx
  __int64 v30; // r10
  int v31; // edx
  unsigned int v32; // r9d
  int v33; // eax
  int v34; // ecx
  float v35; // xmm6_4
  float v36; // xmm11_4
  float v37; // xmm2_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  int v45; // edi
  int v46; // ebx
  float v47; // xmm0_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  HRGN *v52; // r8
  unsigned int v53; // eax
  unsigned int i; // ebx
  float v55; // xmm1_4
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  HRGN v64; // [rsp+28h] [rbp-E0h]
  float v65; // [rsp+38h] [rbp-D0h] BYREF
  float v66; // [rsp+3Ch] [rbp-CCh]
  struct tagPOINT v67; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+48h] [rbp-C0h] BYREF
  void *v69; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+58h] [rbp-B0h] BYREF
  FastRegion::CRegion *v71; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v72[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v73; // [rsp+A8h] [rbp-60h]
  _BYTE v74[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v75; // [rsp+F8h] [rbp-10h]
  float v76; // [rsp+108h] [rbp+0h] BYREF
  float v77; // [rsp+10Ch] [rbp+4h]
  float v78; // [rsp+110h] [rbp+8h]
  float v79; // [rsp+114h] [rbp+Ch]
  struct tagRECT rc; // [rsp+118h] [rbp+10h] BYREF
  __int64 v81; // [rsp+128h] [rbp+20h] BYREF
  __int64 v82; // [rsp+130h] [rbp+28h]
  unsigned int v83[4]; // [rsp+138h] [rbp+30h]
  __int64 v84; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v85[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v86; // [rsp+170h] [rbp+68h]

  v65 = 0.0;
  v69 = 0LL;
  v5 = 0;
  v68 = 0LL;
  v70 = 0LL;
  v6 = 4;
  if ( a2 != 1 )
  {
LABEL_2:
    v6 = 5;
    CWindowNode::ProcessReadyFlipExImages((CWindowNode *)a1);
LABEL_3:
    CVisual::PropagateFlags(a1, v6);
    goto LABEL_4;
  }
  if ( !a3
    || (v8 = *(CMILCOMBase **)(a1 + 904)) == 0LL
    || (int)CMILCOMBase::InternalQueryInterface(v8, &GUID_00000000_0000_0000_c000_000000000046, &v69) < 0
    || v69 != a3 )
  {
    if ( !*(_DWORD *)(a1 + 936) )
      goto LABEL_3;
    goto LABEL_2;
  }
  (**a3)(a3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v70);
  if ( !v70
    || !CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
          *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 64LL),
          (const struct CVisual *)a1,
          (struct ISwapChainContent *)((*(_QWORD *)(a1 + 904) + 56LL) & -(__int64)(*(_QWORD *)(a1 + 904) != 0LL))) )
  {
    if ( ((int (__fastcall *)(void *, GUID *, __int64 *))**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v68) < 0 )
      goto LABEL_3;
    v81 = 0LL;
    v82 = 0LL;
    *(_QWORD *)v83 = 0LL;
    v83[2] = 0;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(v85);
    v13 = 0;
    v14 = FLOAT_1_0;
    v15 = FLOAT_1_0;
    v16 = 0.0;
    v17 = 1;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 96LL);
    if ( v18 )
      v17 = *(_DWORD *)(v18 + 168);
    (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v68 + 24LL))(v68, &v71);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v68 + 32LL))(v68, &v81);
    if ( v71 )
    {
      v86 = 0;
      CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(v71, (__int64)v85);
    }
    v19 = *(_QWORD *)(a1 + 904);
    v73 = 0;
    SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(
                                        (struct ISwapChainContent *)((v19 + 56) & -(__int64)(v19 != 0)),
                                        (struct CMILMatrix *)v72);
    v21 = 0;
    v22 = *(_QWORD *)(a1 + 904) + 56LL;
    v75 = 0;
    v23 = SwapChainTransformForDirtyRects;
    CCompositionSurfaceBitmap::GetTransform(v22, (__int64)v74, &v84);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v74);
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(a1 + 960) )
        v16 = (float)(*(_DWORD *)(a1 + 720) - *(_DWORD *)(a1 + 712)) - (float)(v78 - v76);
    }
    else if ( (float)(v78 - v76) > 0.0 && (float)(v79 - v77) > 0.0 )
    {
      v24 = 0;
      if ( *(_DWORD *)(a1 + 720) - *(_DWORD *)(a1 + 712) >= 0 )
        v24 = *(_DWORD *)(a1 + 720) - *(_DWORD *)(a1 + 712);
      v25 = _mm_cvtsi32_si128(v24);
      v26 = 0;
      if ( *(_DWORD *)(a1 + 724) - *(_DWORD *)(a1 + 716) >= 0 )
        v26 = *(_DWORD *)(a1 + 724) - *(_DWORD *)(a1 + 716);
      v14 = _mm_cvtepi32_ps(v25).m128_f32[0] / (float)(v78 - v76);
      v15 = (float)v26 / (float)(v79 - v77);
    }
    if ( (_DWORD)v81 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(a1 + 904) + 64LL)) )
      {
        v5 = 1;
        DxClipShape = (CShapePtr *)CWindowNode::GetDxClipShape(a1, &rc);
        if ( CShapePtr::IsAxisAlignedRectangle(DxClipShape) && !*(_BYTE *)(a1 + 964) )
        {
          v28 = 0;
          if ( qword_180308258 )
          {
            v29 = 0;
            if ( *((_DWORD *)qword_180308258 + 18) )
            {
              v30 = *((_QWORD *)qword_180308258 + 6);
              while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v30 + 8LL * v29)) )
              {
                v29 = v31 + 1;
                if ( v29 >= v32 )
                  goto LABEL_47;
              }
              v28 = 1;
            }
          }
LABEL_47:
          if ( v28 )
            v21 = 1;
        }
      }
    }
    if ( (v5 & 1) != 0 )
      CShapePtr::Release((CShapePtr *)&rc);
    if ( !v21 )
    {
LABEL_63:
      v53 = v86;
      if ( v86 && (*(_BYTE *)(a1 + 88) & 4) == 0 )
      {
        for ( i = 0; i <= v86; ++i )
        {
          v6 = v6 & 0xFFFFFFF3 | 8;
          if ( i >= v53 )
          {
            if ( !(_DWORD)v81 || !*(_QWORD *)&v83[1] )
              break;
            v76 = (float)SHIDWORD(v81);
            v56 = _mm_cvtsi32_si128(HIDWORD(v82));
            v77 = (float)(int)v82;
            v57 = _mm_cvtsi32_si128(v83[0]);
          }
          else
          {
            v55 = (float)*(int *)(v85[0] + 16LL * i + 4);
            v76 = (float)*(int *)(v85[0] + 16LL * i);
            v56 = _mm_cvtsi32_si128(*(_DWORD *)(v85[0] + 16LL * i + 8));
            v77 = v55;
            v57 = _mm_cvtsi32_si128(*(_DWORD *)(v85[0] + 16LL * i + 12));
          }
          LODWORD(v79) = _mm_cvtepi32_ps(v57).m128_u32[0];
          LODWORD(v78) = _mm_cvtepi32_ps(v56).m128_u32[0];
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v72);
          v58 = *(float *)&rc.left;
          v59 = *(float *)&rc.top;
          v60 = *(float *)&rc.right;
          v61 = *(float *)&rc.bottom;
          if ( v17 == 1 )
          {
            if ( *(_BYTE *)(a1 + 960) )
            {
              v58 = *(float *)&rc.left + v16;
              v59 = *(float *)&rc.top + 0.0;
              v60 = *(float *)&rc.right + v16;
              v61 = *(float *)&rc.bottom + 0.0;
            }
          }
          else
          {
            v58 = *(float *)&rc.left * v14;
            v59 = *(float *)&rc.top * v15;
            v60 = *(float *)&rc.right * v14;
            v61 = *(float *)&rc.bottom * v15;
          }
          v62 = (float)(*(_DWORD *)(a1 + 716) - *(_DWORD *)(a1 + 684));
          v63 = (float)(*(_DWORD *)(a1 + 712) - *(_DWORD *)(a1 + 680));
          v77 = v59 + v62;
          v76 = v58 + v63;
          v78 = v60 + v63;
          v79 = v61 + v62;
          CWindowNode::AddLocalDirtyRect((CWindowNode *)a1, (const struct MilRectF *)&v76, v13);
          v53 = v86;
        }
      }
      if ( v68 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
      DynArrayImpl<1>::~DynArrayImpl<1>(v85);
      goto LABEL_3;
    }
    v33 = v83[1];
    v34 = v83[2];
    v35 = (float)(int)v83[1];
    v36 = (float)(int)v83[2];
    v65 = (float)(int)v83[1];
    v66 = (float)(int)v83[2];
    v37 = (float)SHIDWORD(v81);
    v38 = (float)(int)v82;
    v76 = (float)SHIDWORD(v81);
    v77 = (float)(int)v82;
    v39 = (float)SHIDWORD(v82);
    v40 = (float)(int)v83[0];
    v78 = (float)SHIDWORD(v82);
    v79 = (float)(int)v83[0];
    if ( v71 )
    {
      if ( !(unsigned __int8)CDwmMetaRegion::ExcludeRegionFromRect(&v76) )
      {
LABEL_62:
        v13 = 1;
        goto LABEL_63;
      }
      v34 = v83[2];
      v33 = v83[1];
      v40 = v79;
      v39 = v78;
      v38 = v77;
      v37 = v76;
    }
    v41 = v37 - (float)v33;
    v42 = v38 - (float)v34;
    v43 = v39 - (float)v33;
    v44 = v40 - (float)v34;
    v76 = v41;
    v77 = v42;
    v78 = v43;
    v79 = v44;
    if ( v23 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v72);
      CMILMatrix::Transform((CMILMatrix *)v72, (const struct MilPoint2F *)&v65, (struct MilPoint2F *)&v65, 1);
      v44 = v79;
      v43 = v78;
      v42 = v77;
      v41 = v76;
      v36 = v66;
      v35 = v65;
    }
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(a1 + 960) )
      {
        v41 = v41 + v16;
        v42 = v42 + 0.0;
        v43 = v43 + v16;
        v44 = v44 + 0.0;
        v35 = v35 + v16;
      }
    }
    else
    {
      v41 = v41 * v14;
      v42 = v42 * v15;
      v43 = v43 * v14;
      v44 = v44 * v15;
      v35 = v35 * v14;
      v36 = v36 * v15;
    }
    v45 = *(_DWORD *)(a1 + 712) - *(_DWORD *)(a1 + 728);
    v46 = *(_DWORD *)(a1 + 716) - *(_DWORD *)(a1 + 732);
    v47 = v41 + 6291456.25;
    rc.left = (int)(LODWORD(v47) << 10) >> 11;
    v48 = v42 + 6291456.25;
    rc.top = (int)(LODWORD(v48) << 10) >> 11;
    v49 = v43 + 6291456.25;
    rc.right = (int)(LODWORD(v49) << 10) >> 11;
    v50 = v44 + 6291456.25;
    rc.bottom = (int)(LODWORD(v50) << 10) >> 11;
    v51 = v35 + 6291456.25;
    v67.x = (int)(LODWORD(v51) << 10) >> 11;
    v65 = v36 + 6291456.25;
    v67.y = (int)(LODWORD(v65) << 10) >> 11;
    OffsetRect(&rc, v45, v46);
    v67.x += v45;
    v67.y += v46;
    CWindowNode::NotifyMoveOptimization((CWindowNode *)a1, &rc, v52, &v67, v64);
    goto LABEL_62;
  }
  CVisual::DirtySecondaryRepresentations((CVisual *)a1);
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
  if ( *(_DWORD *)(v10 + 48) )
  {
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL * v9);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, 76LL) )
      {
        v12 = *(_QWORD **)(*(_QWORD *)(v10 + 24) + 8LL * v9);
        if ( *(_QWORD *)(v12[21] + 152LL) != v12[21] )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 184LL))(v12);
      }
      ++v9;
    }
    while ( v9 < *(_DWORD *)(v10 + 48) );
  }
LABEL_4:
  if ( v69 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v69 + 16LL))(v69);
  if ( v70 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
  return 0LL;
}
