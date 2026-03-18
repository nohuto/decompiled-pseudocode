/*
 * XREFs of ?IsReadyToDraw@CTextBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801FB420
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
  if ( *((_QWORD *)this + 10) )
  {
    if ( *((_DWORD *)this + 22) )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 34)) & _xmm);
      if ( v3 >= 0.0000011920929 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 30)) & _xmm);
        if ( v4 >= 0.0000011920929 )
          return 1;
      }
    }
  }
  *a3 = 1;
  return 0;
}
