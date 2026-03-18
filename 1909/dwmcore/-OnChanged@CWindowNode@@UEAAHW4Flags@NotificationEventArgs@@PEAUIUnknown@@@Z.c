/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180004798 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012C80 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180017CA8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066FD0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18006A8D8 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18007BCD4 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800BDFC0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800D40E4 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801809C8 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1801C0B4C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801C1788 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1802179A0 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180217DE8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180218060 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021BAB0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, void (__fastcall ***a3)(void *, GUID *, __int64 *))
{
  char v5; // di
  unsigned int v6; // r14d
  CMILCOMBase *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
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
  __int64 v27; // r8
  CShape **DxClipShape; // rax
  char v29; // r8
  unsigned int v30; // edx
  __int64 v31; // r10
  int v32; // edx
  unsigned int v33; // r9d
  int v34; // eax
  int v35; // ecx
  float v36; // xmm6_4
  float v37; // xmm11_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  int v46; // edi
  int v47; // ebx
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  HRGN *v53; // r8
  unsigned int v54; // eax
  unsigned int i; // ebx
  float v56; // xmm1_4
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm5_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  HRGN v65; // [rsp+28h] [rbp-E0h]
  float v66; // [rsp+38h] [rbp-D0h] BYREF
  float v67; // [rsp+3Ch] [rbp-CCh]
  tagPOINT v68; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+48h] [rbp-C0h] BYREF
  void *v70; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+58h] [rbp-B0h] BYREF
  FastRegion::Internal::CRgnData **v72; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v73[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v74; // [rsp+A8h] [rbp-60h]
  _BYTE v75[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v76; // [rsp+F8h] [rbp-10h]
  float v77; // [rsp+108h] [rbp+0h] BYREF
  float v78; // [rsp+10Ch] [rbp+4h]
  float v79; // [rsp+110h] [rbp+8h]
  float v80; // [rsp+114h] [rbp+Ch]
  struct tagRECT rc; // [rsp+118h] [rbp+10h] BYREF
  __int64 v82; // [rsp+128h] [rbp+20h] BYREF
  __int64 v83; // [rsp+130h] [rbp+28h]
  unsigned int v84[4]; // [rsp+138h] [rbp+30h]
  _QWORD v85[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v86[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v87; // [rsp+170h] [rbp+68h]

  v66 = 0.0;
  v5 = 0;
  if ( a2 == 5 )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
    return 0LL;
  }
  v70 = 0LL;
  v6 = 4;
  v69 = 0LL;
  v71 = 0LL;
  if ( a2 != 1 )
  {
LABEL_3:
    v6 = 5;
    CWindowNode::ProcessReadyFlipExImages((CWindowNode *)a1);
    goto LABEL_4;
  }
  if ( !a3
    || (v8 = *(CMILCOMBase **)(a1 + 888)) == 0LL
    || (int)CMILCOMBase::InternalQueryInterface(v8, &GUID_00000000_0000_0000_c000_000000000046, &v70) < 0
    || v70 != a3 )
  {
    if ( !*(_DWORD *)(a1 + 920) )
      goto LABEL_4;
    goto LABEL_3;
  }
  (**a3)(a3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v71);
  if ( v71 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v71 + 216LL))(v71, a1) )
  {
    CVisual::DirtySecondaryRepresentations((CVisual *)a1);
    v9 = 0;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
    if ( *(_DWORD *)(v10 + 48) )
    {
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL * v9);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 240LL))(v11) )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL * v9);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12);
        }
        ++v9;
      }
      while ( v9 < *(_DWORD *)(v10 + 48) );
    }
    goto LABEL_5;
  }
  if ( ((int (__fastcall *)(void *, GUID *, __int64 *))**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v69) >= 0 )
  {
    v82 = 0LL;
    v83 = 0LL;
    *(_QWORD *)v84 = 0LL;
    v84[2] = 0;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(v86);
    v13 = 0;
    v14 = *(float *)&FLOAT_1_0;
    v15 = *(float *)&FLOAT_1_0;
    v16 = 0.0;
    v17 = 1;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 888) + 96LL);
    if ( v18 )
      v17 = *(_DWORD *)(v18 + 168);
    (*(void (__fastcall **)(__int64, FastRegion::Internal::CRgnData ***))(*(_QWORD *)v69 + 24LL))(v69, &v72);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v69 + 32LL))(v69, &v82);
    if ( v72 )
    {
      v87 = 0;
      CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
        v72,
        (__int64)v86);
    }
    v19 = *(_QWORD *)(a1 + 888);
    v74 = 0;
    SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(
                                        (struct ISwapChainContent *)((v19 + 56) & -(__int64)(v19 != 0)),
                                        (struct CMILMatrix *)v73);
    v21 = 0;
    v22 = *(_QWORD *)(a1 + 888) + 56LL;
    v76 = 0;
    v23 = SwapChainTransformForDirtyRects;
    CCompositionSurfaceBitmap::GetTransform(v22, (__int64)v75, v85);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v75, (__int64)v85, &v77);
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(a1 + 942) )
        v16 = (float)(*(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696)) - (float)(v79 - v77);
    }
    else if ( (float)(v79 - v77) > 0.0 && (float)(v80 - v78) > 0.0 )
    {
      v24 = 0;
      if ( *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696) >= 0 )
        v24 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696);
      v25 = _mm_cvtsi32_si128(v24);
      v26 = 0;
      if ( *(_DWORD *)(a1 + 708) - *(_DWORD *)(a1 + 700) >= 0 )
        v26 = *(_DWORD *)(a1 + 708) - *(_DWORD *)(a1 + 700);
      v14 = _mm_cvtepi32_ps(v25).m128_f32[0] / (float)(v79 - v77);
      v15 = (float)v26 / (float)(v80 - v78);
    }
    if ( (_DWORD)v82 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(a1 + 888) + 64LL)) )
      {
        DxClipShape = (CShape **)CWindowNode::GetDxClipShape(a1, &rc, v27);
        v5 = 1;
        if ( CShapePtr::IsAxisAlignedRectangle(DxClipShape) )
        {
          if ( !*(_BYTE *)(a1 + 946) )
          {
            v29 = 0;
            if ( g_DisplayManager )
            {
              v30 = 0;
              if ( *((_DWORD *)g_DisplayManager + 18) )
              {
                v31 = *((_QWORD *)g_DisplayManager + 6);
                while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v31 + 8LL * v30)) )
                {
                  v30 = v32 + 1;
                  if ( v30 >= v33 )
                    goto LABEL_48;
                }
                v29 = 1;
              }
            }
LABEL_48:
            if ( v29 )
              v21 = 1;
          }
        }
      }
    }
    if ( (v5 & 1) != 0 )
      CShapePtr::Release((CShapePtr *)&rc);
    if ( !v21 )
      goto LABEL_64;
    v34 = v84[1];
    v35 = v84[2];
    v36 = (float)(int)v84[1];
    v37 = (float)(int)v84[2];
    v66 = (float)(int)v84[1];
    v67 = (float)(int)v84[2];
    v38 = (float)SHIDWORD(v82);
    v39 = (float)(int)v83;
    v77 = (float)SHIDWORD(v82);
    v78 = (float)(int)v83;
    v40 = (float)SHIDWORD(v83);
    v41 = (float)(int)v84[0];
    v79 = (float)SHIDWORD(v83);
    v80 = (float)(int)v84[0];
    if ( v72 )
    {
      if ( !(unsigned __int8)CDwmMetaRegion::ExcludeRegionFromRect(&v77) )
      {
LABEL_63:
        v13 = 1;
LABEL_64:
        v54 = v87;
        if ( v87 && (*(_BYTE *)(a1 + 88) & 4) == 0 )
        {
          for ( i = 0; i <= v87; ++i )
          {
            v6 = v6 & 0xFFFFFFF3 | 8;
            if ( i >= v54 )
            {
              if ( !(_DWORD)v82 || !*(_QWORD *)&v84[1] )
                break;
              v77 = (float)SHIDWORD(v82);
              v57 = _mm_cvtsi32_si128(HIDWORD(v83));
              v78 = (float)(int)v83;
              v58 = _mm_cvtsi32_si128(v84[0]);
            }
            else
            {
              v56 = (float)*(int *)(v86[0] + 16LL * i + 4);
              v77 = (float)*(int *)(v86[0] + 16LL * i);
              v57 = _mm_cvtsi32_si128(*(_DWORD *)(v86[0] + 16LL * i + 8));
              v78 = v56;
              v58 = _mm_cvtsi32_si128(*(_DWORD *)(v86[0] + 16LL * i + 12));
            }
            LODWORD(v80) = _mm_cvtepi32_ps(v58).m128_u32[0];
            LODWORD(v79) = _mm_cvtepi32_ps(v57).m128_u32[0];
            CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v73, (__int64)&v77, (float *)&rc.left);
            v59 = *(float *)&rc.left;
            v60 = *(float *)&rc.top;
            v61 = *(float *)&rc.right;
            v62 = *(float *)&rc.bottom;
            if ( v17 == 1 )
            {
              if ( *(_BYTE *)(a1 + 942) )
              {
                v59 = *(float *)&rc.left + v16;
                v60 = *(float *)&rc.top + 0.0;
                v61 = *(float *)&rc.right + v16;
                v62 = *(float *)&rc.bottom + 0.0;
              }
            }
            else
            {
              v59 = *(float *)&rc.left * v14;
              v60 = *(float *)&rc.top * v15;
              v61 = *(float *)&rc.right * v14;
              v62 = *(float *)&rc.bottom * v15;
            }
            v63 = (float)(*(_DWORD *)(a1 + 700) - *(_DWORD *)(a1 + 668));
            v64 = (float)(*(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 664));
            v78 = v60 + v63;
            v77 = v59 + v64;
            v79 = v61 + v64;
            v80 = v62 + v63;
            CWindowNode::AddLocalDirtyRect((CWindowNode *)a1, (const struct MilRectF *)&v77, v13);
            v54 = v87;
          }
        }
        if ( v69 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v86);
        goto LABEL_4;
      }
      v35 = v84[2];
      v34 = v84[1];
      v41 = v80;
      v40 = v79;
      v39 = v78;
      v38 = v77;
    }
    v42 = v38 - (float)v34;
    v43 = v39 - (float)v35;
    v44 = v40 - (float)v34;
    v45 = v41 - (float)v35;
    v77 = v42;
    v78 = v43;
    v79 = v44;
    v80 = v45;
    if ( v23 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v73, (__int64)&v77, &v77);
      CMILMatrix::Transform((CMILMatrix *)v73, (const struct MilPoint2F *)&v66, (struct MilPoint2F *)&v66, 1u);
      v45 = v80;
      v44 = v79;
      v43 = v78;
      v42 = v77;
      v37 = v67;
      v36 = v66;
    }
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(a1 + 942) )
      {
        v42 = v42 + v16;
        v43 = v43 + 0.0;
        v44 = v44 + v16;
        v45 = v45 + 0.0;
        v36 = v36 + v16;
      }
    }
    else
    {
      v42 = v42 * v14;
      v43 = v43 * v15;
      v44 = v44 * v14;
      v45 = v45 * v15;
      v36 = v36 * v14;
      v37 = v37 * v15;
    }
    v46 = *(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 712);
    v47 = *(_DWORD *)(a1 + 700) - *(_DWORD *)(a1 + 716);
    v48 = v42 + 6291456.25;
    rc.left = (int)(LODWORD(v48) << 10) >> 11;
    v49 = v43 + 6291456.25;
    rc.top = (int)(LODWORD(v49) << 10) >> 11;
    v50 = v44 + 6291456.25;
    rc.right = (int)(LODWORD(v50) << 10) >> 11;
    v51 = v45 + 6291456.25;
    rc.bottom = (int)(LODWORD(v51) << 10) >> 11;
    v52 = v36 + 6291456.25;
    v68.x = (int)(LODWORD(v52) << 10) >> 11;
    v66 = v37 + 6291456.25;
    v68.y = (int)(LODWORD(v66) << 10) >> 11;
    OffsetRect(&rc, v46, v47);
    v68.x += v46;
    v68.y += v47;
    CWindowNode::NotifyMoveOptimization((CWindowNode *)a1, &rc, v53, &v68, v65);
    goto LABEL_63;
  }
LABEL_4:
  CVisual::PropagateFlags(a1, v6, 0);
LABEL_5:
  if ( v70 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v70 + 16LL))(v70);
  if ( v71 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
  return 0LL;
}
