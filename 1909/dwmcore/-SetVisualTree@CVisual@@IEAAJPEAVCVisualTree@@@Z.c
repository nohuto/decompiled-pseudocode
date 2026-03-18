/*
 * XREFs of ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x1800ECEDC
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x180024408 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 * Callees:
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800257E4 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ECB94 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 */

__int64 __fastcall CVisual::SetVisualTree(CVisual *this, struct CVisualTree *a2)
{
  unsigned int v4; // edi
  signed int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // xmm1_8
  __m128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = 0;
  CVisual::SetVisualTreeNoRef(this, a2);
  if ( (*((_BYTE *)this + 88) & 1) == 0 )
  {
    if ( !*((_BYTE *)a2 + 34) )
    {
      *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)this + 140);
      v7 = *(_QWORD *)((char *)this + 156);
      goto LABEL_7;
    }
    v5 = CVisual::CalculateRootBounds(this, &v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = v10;
      *(__m128 *)((char *)a2 + 36) = v9;
LABEL_7:
      *(_QWORD *)((char *)a2 + 52) = v7;
      return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1085u, 0LL);
  }
  return v4;
}
