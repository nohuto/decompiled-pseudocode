/*
 * XREFs of CompDiv @ 0x1C02B2EE4
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 *     bSetXform @ 0x1C0222A4C (bSetXform.c)
 *     fxPtSize @ 0x1C0223028 (fxPtSize.c)
 *     vCheckForSingularXform @ 0x1C022354C (vCheckForSingularXform.c)
 *     vQuantizeXform @ 0x1C0224660 (vQuantizeXform.c)
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 *     mth_FixXYMul @ 0x1C02B3550 (mth_FixXYMul.c)
 *     mth_FoldPointSizeResolution @ 0x1C02B3638 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02B36E0 (mth_IntelMul.c)
 *     mth_ReduceMatrix @ 0x1C02B3AAC (mth_ReduceMatrix.c)
 *     scl_ComputeScaling @ 0x1C02B43E0 (scl_ComputeScaling.c)
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C02B4F58 (scl_RoundCurrentSideBearingPnt.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02B51A4 (scl_ScaleAdvanceWidth.c)
 *     scl_ScaleBack @ 0x1C02B52B8 (scl_ScaleBack.c)
 *     EvaluateSpline @ 0x1C02B5C4C (EvaluateSpline.c)
 *     fsc_CheckYReversalInSpline @ 0x1C02B6368 (fsc_CheckYReversalInSpline.c)
 *     Intersect26Dot6 @ 0x1C02BB730 (Intersect26Dot6.c)
 *     CalcHorizLineSubpix @ 0x1C02C3ED0 (CalcHorizLineSubpix.c)
 *     CalcVertLineSubpix @ 0x1C02C3F10 (CalcVertLineSubpix.c)
 *     PhaseShift @ 0x1C02C56C8 (PhaseShift.c)
 *     itrp_ChangeCvtSlow @ 0x1C02C6594 (itrp_ChangeCvtSlow.c)
 *     itrp_IP @ 0x1C02C89A0 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C02C9370 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C02C9AC0 (itrp_IUP.c)
 *     itrp_MovePoint @ 0x1C02CC904 (itrp_MovePoint.c)
 *     itrp_Normalize @ 0x1C02CCCD0 (itrp_Normalize.c)
 *     itrp_SH_Common @ 0x1C02CF5E8 (itrp_SH_Common.c)
 *     itrp_WCVT @ 0x1C02D0A40 (itrp_WCVT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompDiv(int a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // r10d
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned __int64 v8; // rcx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // [rsp+10h] [rbp+10h]

  v2 = a2;
  v3 = a1 ^ HIDWORD(a2);
  if ( !a1 )
    goto LABEL_2;
  v6 = HIDWORD(a2);
  v7 = abs32(a1);
  if ( a2 < 0 )
  {
    if ( (_DWORD)a2 )
      v6 = ~HIDWORD(a2);
    else
      v6 = -HIDWORD(a2);
    HIDWORD(v13) = v6;
    LODWORD(v13) = -(int)a2;
    v2 = v13;
  }
  if ( v7 <= v6
    || (v8 = v7, v9 = v7 >> 1, v10 = v2 / v8, v11 = v2 % v8, (unsigned int)(v2 % v8) >= v9) && (_DWORD)v10 == -1 )
  {
LABEL_2:
    result = 0x7FFFFFFFLL;
    if ( v3 < 0 )
      return 0x80000000LL;
  }
  else
  {
    v12 = v10 + 1;
    if ( (unsigned int)v11 < v9 )
      v12 = v10;
    if ( v3 < 0 )
    {
      if ( v12 >= 0 || v12 == 0x80000000 )
        return (unsigned int)-v12;
      else
        return 0x80000000LL;
    }
    else
    {
      result = 0x7FFFFFFFLL;
      if ( v12 >= 0 )
        return (unsigned int)v12;
    }
  }
  return result;
}
