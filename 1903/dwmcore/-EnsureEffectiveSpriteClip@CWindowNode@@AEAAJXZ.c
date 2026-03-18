/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18005050C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004EEE0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005A560 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EA10 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1802196D0 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A3DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800CC0E0 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  struct CShape *v2; // rbx
  unsigned int v3; // esi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  CGeometry *v6; // rcx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  struct CShape *v21; // rbx
  struct CShape *v22; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-51h] BYREF
  char v24; // [rsp+48h] [rbp-49h]
  struct CShape *v25; // [rsp+50h] [rbp-41h] BYREF
  __int64 v26; // [rsp+58h] [rbp-39h] BYREF
  int v27; // [rsp+60h] [rbp-31h]
  int v28; // [rsp+64h] [rbp-2Dh]
  _QWORD v29[3]; // [rsp+68h] [rbp-29h] BYREF
  int v30; // [rsp+80h] [rbp-11h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+2Fh]

  v2 = 0LL;
  v3 = 0;
  v22 = 0LL;
  if ( !*((_BYTE *)this + 936) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 116);
    if ( v5 )
    {
      (**v5)(v5, 1LL);
      *((_QWORD *)this + 116) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 116) )
  {
    v6 = (CGeometry *)*((_QWORD *)this + 100);
    v29[0] = &CRegionShape::`vftable';
    v29[2] = &v30;
    v23 = 0LL;
    v24 = 0;
    v29[1] = 0LL;
    v30 = 0;
    v31 = 0LL;
    if ( v6 )
    {
      CGeometry::GetShapeData(v6, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v23);
    }
    else
    {
      v7 = 0;
      v8 = *((_DWORD *)this + 181) - *((_DWORD *)this + 179);
      v9 = *((_DWORD *)this + 180) - *((_DWORD *)this + 178);
      v26 = 0LL;
      if ( v9 >= 0 )
        v7 = v9;
      v27 = v7;
      v10 = 0;
      if ( v8 >= 0 )
        v10 = v8;
      v28 = v10;
      v11 = CRegionShape::BuildFromRects((__int64)v29, (__int64)&v26, 1);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD56u, 0LL);
LABEL_28:
        CRegionShape::~CRegionShape((CRegionShape *)v29);
        CShapePtr::Release((CShapePtr *)&v23);
LABEL_29:
        if ( v2 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v2)(v2, 1LL);
        return v3;
      }
      CShapePtr::Release((CShapePtr *)&v23);
      v24 = 0;
      v23 = v29;
    }
    v13 = CShapePtr::CopyShape((CShapePtr *)&v23, 0LL, &v22);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD5Cu, 0LL);
    }
    else
    {
      if ( !*((_BYTE *)this + 937) )
      {
        v21 = v22;
LABEL_20:
        *((_QWORD *)this + 116) = v21;
        *((_BYTE *)this + 936) = 1;
        CRegionShape::~CRegionShape((CRegionShape *)v29);
        CShapePtr::Release((CShapePtr *)&v23);
        return v3;
      }
      v15 = *((_QWORD *)this + 93);
      v26 = 0LL;
      LOBYTE(v27) = 0;
      v25 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v15 + 184LL))(v15, &v26, 0LL);
      v3 = v16;
      if ( v16 >= 0 )
      {
        v2 = v22;
        v19 = CShape::Combine(v22, v17, v26, 0LL, 1, &v25);
        v3 = v19;
        if ( v19 >= 0 )
        {
          if ( v2 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v2)(v2, 1LL);
          v21 = v25;
          CShapePtr::Release((CShapePtr *)&v26);
          goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xD6Au, 0LL);
        CShapePtr::Release((CShapePtr *)&v26);
        goto LABEL_28;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v16, 0xD65u, 0LL);
      CShapePtr::Release((CShapePtr *)&v26);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v29);
    CShapePtr::Release((CShapePtr *)&v23);
    v2 = v22;
    goto LABEL_29;
  }
  return v3;
}
