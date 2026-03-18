/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800142B8
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18022AADC (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        FastRegion::CRegion *this,
        float *a2)
{
  unsigned int v2; // edi
  int v3; // r11d
  int v4; // esi
  int v5; // r9d
  int v6; // r10d
  int v7; // r14d
  _DWORD *v9; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v10[18]; // [rsp+50h] [rbp-71h] BYREF

  v2 = 0;
  v9 = v10;
  v10[0] = 0;
  v3 = (int)*a2;
  v4 = (int)a2[2];
  v5 = (int)a2[1];
  v6 = (int)a2[3];
  if ( v3 >= v4 || v5 >= v6 )
  {
    v10[0] = 0;
  }
  else
  {
    v10[0] = 2;
    v10[1] = v3;
    v10[2] = v4;
    v10[3] = v5;
    v10[4] = 16;
    v10[7] = v3;
    v10[8] = v4;
    v10[5] = v6;
    v10[6] = 16;
  }
  v7 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v9);
  if ( v7 < 0 )
    v2 = v7;
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v9);
  return v2;
}
