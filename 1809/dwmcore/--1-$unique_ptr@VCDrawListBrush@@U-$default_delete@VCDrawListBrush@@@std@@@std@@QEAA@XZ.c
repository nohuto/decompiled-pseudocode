/*
 * XREFs of ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18005FD68
 * Callers:
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CShape>::operator()((__int64)a1, *a1);
  return result;
}
