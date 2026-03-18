/*
 * XREFs of ?IsReadyToDraw@CTextBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801B51E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CTextBrush::IsReadyToDraw(CTextBrush *this, struct CDrawingContext *a2, bool *a3)
{
  float v3; // xmm1_4
  float v4; // xmm1_4

  *a3 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    if ( *((_DWORD *)this + 20) )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 32)) & _xmm);
      if ( v3 >= 0.0000011920929 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 28)) & _xmm);
        if ( v4 >= 0.0000011920929 )
          return 1;
      }
    }
  }
  *a3 = 1;
  return 0;
}
