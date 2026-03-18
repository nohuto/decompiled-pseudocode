/*
 * XREFs of ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C92E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800088FC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800437D8 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801C30F8 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

char __fastcall CCachedVisualImage::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  float v7; // xmm1_4
  float v9; // [rsp+40h] [rbp+8h] BYREF
  float v10; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF

  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)(a1 - 136), (unsigned int *)&v9, (unsigned int *)&v10);
  if ( a3 )
  {
    v6 = LODWORD(v9);
    *(_QWORD *)a3 = 0LL;
    v7 = (float)SLODWORD(v10);
    *(float *)(a3 + 8) = (float)v6;
    *(float *)(a3 + 12) = v7;
  }
  *(_OWORD *)a2 = _xmm;
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( *(_BYTE *)(a1 + 241) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 56), &v10, &v9, &v11) )
    CMILMatrix::SetTranslation((CMILMatrix *)a2, v10, v9, 0.0);
  return 1;
}
