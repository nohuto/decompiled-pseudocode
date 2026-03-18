/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x180064600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 66)
    || *((float *)this + 25) <= *((float *)this + 23)
    || *((float *)this + 26) <= *((float *)this + 24) )
  {
    return 1;
  }
  return result;
}
