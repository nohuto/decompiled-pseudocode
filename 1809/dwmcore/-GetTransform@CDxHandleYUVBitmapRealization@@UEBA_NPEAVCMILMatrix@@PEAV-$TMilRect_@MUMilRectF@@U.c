/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1802288B4 (-CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v8 = 0;
  *(_OWORD *)a2 = _xmm;
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 144), (struct CMILMatrix *)v7) )
    CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v7);
  if ( a3 )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(float *)(a3 + 8) = (float)*(int *)(a1 + 100);
    *(float *)(a3 + 12) = (float)*(int *)(a1 + 104);
  }
  return CMILMatrix::IsIdentity<0>(a2) == 0;
}
