/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800047C4
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2A90 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802182EC (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800049C0 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004AF7C (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E5C4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?Offset@CRegionShape@@QEAAJJJ@Z @ 0x1800EDCC8 (-Offset@CRegionShape@@QEAAJJJ@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180153430 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int ShapeData; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // r8d
  CRegionShape *v19; // rdi
  int v20; // eax
  unsigned int v21; // ecx
  CRegionShape *v23; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h] BYREF
  char v25; // [rsp+40h] [rbp-49h]
  __int64 v26; // [rsp+48h] [rbp-41h] BYREF
  int v27; // [rsp+50h] [rbp-39h]
  int v28; // [rsp+54h] [rbp-35h]
  _QWORD v29[3]; // [rsp+60h] [rbp-29h] BYREF
  int v30; // [rsp+78h] [rbp-11h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+2Fh]

  v2 = *((_QWORD *)this + 100);
  v23 = 0LL;
  v5 = 0;
  if ( v2 && *(_BYTE *)(v2 + 160) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v6 = 0;
    v7 = *((_DWORD *)this + 169) - *((_DWORD *)this + 167);
    v8 = *((_DWORD *)this + 168) - *((_DWORD *)this + 166);
    v24 = 0LL;
    if ( v8 >= 0 )
      v6 = v8;
    v25 = 0;
    v27 = v6;
    v26 = 0LL;
    v9 = 0;
    v29[1] = 0LL;
    if ( v7 >= 0 )
      v9 = v7;
    v30 = 0;
    v28 = v9;
    v31 = 0LL;
    v29[0] = &CRegionShape::`vftable';
    v29[2] = &v30;
    v10 = CRegionShape::BuildFromRects(v29, &v26, 1LL);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD97u, 0LL);
    }
    else
    {
      ShapeData = CGeometry::GetShapeData(
                    *((CGeometry **)this + 100),
                    (const struct D2D_SIZE_F *)((char *)this + 132),
                    (struct CShapePtr *)&v24);
      v5 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ShapeData, 0xD99u, 0LL);
      }
      else
      {
        v15 = CShape::Combine(v24, v13, v29, 0LL, 1, &v23);
        v5 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xD9Fu, 0LL);
        }
        else
        {
          v17 = *((_DWORD *)this + 166) - *((_DWORD *)this + 178);
          v18 = *((_DWORD *)this + 167) - *((_DWORD *)this + 179);
          v19 = v23;
          if ( (v17 || v18) && (v20 = CRegionShape::Offset(v23, v17, v18), v5 = v20, v20 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xDACu, 0LL);
          }
          else
          {
            CShapePtr::Release(a2);
            *(_QWORD *)a2 = v19;
            *((_BYTE *)a2 + 8) = 1;
            v23 = 0LL;
          }
        }
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)v29);
    CShapePtr::~CShapePtr((CShapePtr *)&v24);
  }
  SAFE_DELETE<CShape>(&v23);
  return v5;
}
