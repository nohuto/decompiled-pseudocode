/*
 * XREFs of ?IsEmptyDrawing@CSpatialVisualContent@@UEBA_NXZ @ 0x1801DB2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CSpatialVisualContent::IsEmptyDrawing(CSpatialVisualContent *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 9) || !*((_QWORD *)this + 10) )
    return 1;
  return result;
}
