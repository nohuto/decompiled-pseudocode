/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B0E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B9D60 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x180014294 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?Offset@CRegionShape@@QEAAJJJ@Z @ 0x1800EFBAC (-Offset@CRegionShape@@QEAAJJJ@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180142CE0 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int ShapeData; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edx
  int v19; // r8d
  CRegionShape *v20; // rdi
  int v21; // eax
  unsigned int v22; // ecx
  CRegionShape *v24; // [rsp+30h] [rbp-59h] BYREF
  __int64 v25; // [rsp+38h] [rbp-51h] BYREF
  char v26; // [rsp+40h] [rbp-49h]
  __int64 v27; // [rsp+48h] [rbp-41h] BYREF
  int v28; // [rsp+50h] [rbp-39h]
  int v29; // [rsp+54h] [rbp-35h]
  _QWORD v30[3]; // [rsp+60h] [rbp-29h] BYREF
  int v31; // [rsp+78h] [rbp-11h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+2Fh]

  v2 = *((_QWORD *)this + 102);
  v3 = 0;
  v24 = 0LL;
  if ( v2 && *(_BYTE *)(v2 + 152) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v6 = 0;
    v7 = *((_DWORD *)this + 173) - *((_DWORD *)this + 171);
    v8 = *((_DWORD *)this + 172);
    v25 = 0LL;
    v9 = v8 - *((_DWORD *)this + 170);
    v26 = 0;
    if ( v9 >= 0 )
      v6 = v9;
    v27 = 0LL;
    v28 = v6;
    v10 = 0;
    if ( v7 >= 0 )
      v10 = v7;
    v30[1] = 0LL;
    v31 = 0;
    v32 = 0LL;
    v29 = v10;
    v30[0] = &CRegionShape::`vftable';
    v30[2] = &v31;
    v11 = CRegionShape::BuildFromRects(v30, &v27);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE98u);
    }
    else
    {
      ShapeData = CGeometry::GetShapeData(
                    *((CGeometry **)this + 102),
                    (const struct D2D_SIZE_F *)((char *)this + 132),
                    (struct CShapePtr *)&v25);
      v3 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, ShapeData, 0xE9Au);
      }
      else
      {
        v16 = CShape::Combine(v25, v14, v30, 0LL, 1, &v24);
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xEA0u);
        }
        else
        {
          v18 = *((_DWORD *)this + 170) - *((_DWORD *)this + 182);
          v19 = *((_DWORD *)this + 171) - *((_DWORD *)this + 183);
          v20 = v24;
          if ( (v18 || v19) && (v21 = CRegionShape::Offset(v24, v18, v19), v3 = v21, v21 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xEADu);
          }
          else
          {
            CShapePtr::Release(a2);
            v24 = 0LL;
            *(_QWORD *)a2 = v20;
            *((_BYTE *)a2 + 8) = 1;
          }
        }
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)v30);
    CShapePtr::~CShapePtr((CShapePtr *)&v25);
  }
  SAFE_DELETE<CShape>(&v24);
  return v3;
}
