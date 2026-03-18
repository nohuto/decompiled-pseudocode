/*
 * XREFs of ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B7C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180016040 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 */

__int64 __fastcall CRectanglesShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // r11
  __int64 result; // rax
  CMILMatrix *v6; // rcx

  v3 = *(_DWORD *)(a1 + 40);
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !a3 || CMILMatrix::IsIdentity<0>(a3) )
      {
        result = 0LL;
        *(_OWORD *)a2 = *(_OWORD *)*(_QWORD *)(v4 + 16);
      }
      else
      {
        CMILMatrix::Transform2DBoundsHelper<0>(v6, *(_QWORD *)(v4 + 16), (float *)a2);
        return 0LL;
      }
    }
    else
    {
      return CShape::GetTightBounds(a1, a2, a3);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    result = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  return result;
}
