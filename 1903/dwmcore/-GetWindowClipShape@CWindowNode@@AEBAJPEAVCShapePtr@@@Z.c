/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180015F60
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EA10 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802199DC (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800160E8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A3DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
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
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  char v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  int v22; // [rsp+50h] [rbp-39h]
  int v23; // [rsp+54h] [rbp-35h]
  _QWORD v24[3]; // [rsp+60h] [rbp-29h] BYREF
  int v25; // [rsp+78h] [rbp-11h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+2Fh]

  v2 = *((_QWORD *)this + 100);
  v18 = 0LL;
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
    v19 = 0LL;
    if ( v8 >= 0 )
      v6 = v8;
    v20 = 0;
    v22 = v6;
    v21 = 0LL;
    v9 = 0;
    v24[1] = 0LL;
    if ( v7 >= 0 )
      v9 = v7;
    v25 = 0;
    v23 = v9;
    v26 = 0LL;
    v24[0] = &CRegionShape::`vftable';
    v24[2] = &v25;
    v10 = CRegionShape::BuildFromRects(v24, &v21);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD90u, 0LL);
    }
    else
    {
      ShapeData = CGeometry::GetShapeData(
                    *((CGeometry **)this + 100),
                    (const struct D2D_SIZE_F *)((char *)this + 132),
                    (struct CShapePtr *)&v19);
      v5 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ShapeData, 0xD92u, 0LL);
      }
      else
      {
        v15 = CShape::Combine(v19, v13, v24, 0LL, 1, &v18);
        v5 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xD98u, 0LL);
        }
        else
        {
          CShapePtr::Release(a2);
          *(_QWORD *)a2 = v18;
          *((_BYTE *)a2 + 8) = 1;
          v18 = 0LL;
        }
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)v24);
    CShapePtr::Release((CShapePtr *)&v19);
  }
  SAFE_DELETE<CShape>(&v18);
  return v5;
}
