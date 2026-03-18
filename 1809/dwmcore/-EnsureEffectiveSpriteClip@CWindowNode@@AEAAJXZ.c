/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B0E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF030 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801B99C4 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18006D534 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180079DD4 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180142CE0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  unsigned int v2; // ebx
  struct CShape *v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int WindowClipShape; // eax
  unsigned int v6; // ecx
  CShape *v7; // rbx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  struct CShape *v25; // rsi
  struct CShape *v27; // [rsp+38h] [rbp-59h] BYREF
  CShape *v28; // [rsp+40h] [rbp-51h] BYREF
  char v29; // [rsp+48h] [rbp-49h]
  struct CShape *v30; // [rsp+50h] [rbp-41h] BYREF
  CShape *v31; // [rsp+58h] [rbp-39h] BYREF
  int v32; // [rsp+60h] [rbp-31h]
  int v33; // [rsp+64h] [rbp-2Dh]
  _QWORD v34[3]; // [rsp+68h] [rbp-29h] BYREF
  int v35; // [rsp+80h] [rbp-11h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+2Fh]

  v2 = 0;
  v3 = 0LL;
  v27 = 0LL;
  if ( !*((_BYTE *)this + 952) )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 118);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *((_QWORD *)this + 118) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 118) )
  {
    v28 = 0LL;
    v34[0] = &CRegionShape::`vftable';
    v34[2] = &v35;
    v29 = 0;
    v34[1] = 0LL;
    v35 = 0;
    v36 = 0LL;
    if ( *((_QWORD *)this + 102) )
    {
      WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v28);
      v2 = WindowClipShape;
      if ( WindowClipShape < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, WindowClipShape, 0xE44u);
LABEL_8:
        CRegionShape::~CRegionShape((CRegionShape *)v34);
        CShapePtr::~CShapePtr((CShapePtr *)&v28);
        return v2;
      }
      v7 = v28;
    }
    else
    {
      v8 = 0;
      v9 = *((_DWORD *)this + 185) - *((_DWORD *)this + 183);
      v10 = *((_DWORD *)this + 184) - *((_DWORD *)this + 182);
      v31 = 0LL;
      if ( v10 >= 0 )
        v8 = v10;
      v32 = v8;
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
      v33 = v11;
      v12 = CRegionShape::BuildFromRects((__int64)v34, (__int64)&v31, 1);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE4Eu);
LABEL_35:
        CRegionShape::~CRegionShape((CRegionShape *)v34);
        CShapePtr::~CShapePtr((CShapePtr *)&v28);
LABEL_36:
        if ( v3 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
        return v2;
      }
      CShapePtr::Release((CShapePtr *)&v28);
      v7 = (CShape *)v34;
      v29 = 0;
      v28 = (CShape *)v34;
    }
    if ( CWindowNode::IsDxShapeExclusionNeeded(this) )
    {
      CWindowNode::GetDxClipShape(this, &v31);
      v15 = CShape::Combine(v7, v14, v31, 0LL, 2, &v27);
      v2 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE5Du);
LABEL_20:
        CShapePtr::~CShapePtr((CShapePtr *)&v31);
LABEL_21:
        CRegionShape::~CRegionShape((CRegionShape *)v34);
        CShapePtr::~CShapePtr((CShapePtr *)&v28);
        v3 = v27;
        goto LABEL_36;
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v31);
    }
    else
    {
      v17 = CShapePtr::CopyShape(&v28, 0LL, &v27);
      v2 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE62u);
        goto LABEL_21;
      }
    }
    if ( !*((_BYTE *)this + 953) )
    {
      v25 = v27;
LABEL_32:
      *((_QWORD *)this + 118) = v25;
      *((_BYTE *)this + 952) = 1;
      goto LABEL_8;
    }
    v19 = *((_QWORD *)this + 95);
    v31 = 0LL;
    LOBYTE(v32) = 0;
    v30 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, CShape **, _QWORD))(*(_QWORD *)v19 + 184LL))(v19, &v31, 0LL);
    v2 = v20;
    if ( v20 >= 0 )
    {
      v3 = v27;
      v23 = CShape::Combine(v27, v21, v31, 0LL, 1, &v30);
      v2 = v23;
      if ( v23 >= 0 )
      {
        if ( v3 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
        v25 = v30;
        CShapePtr::~CShapePtr((CShapePtr *)&v31);
        goto LABEL_32;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xE71u);
      CShapePtr::~CShapePtr((CShapePtr *)&v31);
      goto LABEL_35;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v20, 0xE6Cu);
    goto LABEL_20;
  }
  return v2;
}
