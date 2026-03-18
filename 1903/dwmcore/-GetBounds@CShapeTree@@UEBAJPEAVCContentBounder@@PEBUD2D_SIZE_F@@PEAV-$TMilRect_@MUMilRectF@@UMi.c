/*
 * XREFs of ?GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EF70
 * Callers:
 *     ?DrawForBounds@CShapeTree@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020E558 (-DrawForBounds@CShapeTree@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18020F0C0 (-HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180252B60 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 */

__int64 __fastcall CShapeTree::GetBounds(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  float *v5; // rdi
  unsigned int v7; // r14d
  signed int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  _BYTE v15[4]; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+34h] [rbp-4Ch]
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+4Ch] [rbp-34h]
  __int64 v20; // [rsp+54h] [rbp-2Ch]
  void *lpMem; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v5 = a3;
  v7 = 0;
  if ( !a3 )
  {
LABEL_22:
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)a4 = 0LL;
    return v7;
  }
  if ( *(_BYTE *)(a1 + 80) )
  {
    v23 = *(_QWORD *)a3;
    v20 = 0LL;
    lpMem = 0LL;
    v22 = 0;
    v19 = 1LL;
    v16 = 0;
    v17 = 0LL;
    v18 = 0LL;
    v8 = CShapeTreeIterator::Walk<CShapeBoundingContext>(v15, a1, v15);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x34u, 0LL);
      operator delete(lpMem);
      return v7;
    }
    operator delete(lpMem);
  }
  if ( a4 )
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 81) )
  {
    v10 = *v5;
    v11 = v5[1];
    if ( *(float *)a4 < 0.0 )
      *(_DWORD *)a4 = 0;
    if ( *(float *)(a4 + 4) < 0.0 )
      *(_DWORD *)(a4 + 4) = 0;
    v12 = *(float *)(a4 + 8);
    if ( v12 > v10 )
    {
      *(float *)(a4 + 8) = v10;
      v12 = v10;
    }
    v13 = *(float *)(a4 + 12);
    if ( v13 > v11 )
    {
      *(float *)(a4 + 12) = v11;
      v13 = v11;
      v12 = *(float *)(a4 + 8);
    }
    if ( v12 <= *(float *)a4 || v13 <= *(float *)(a4 + 4) )
    {
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_QWORD *)a4 = 0LL;
    }
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    goto LABEL_22;
  return v7;
}
