/*
 * XREFs of ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800B5A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRectanglesShape::IsEmpty(CRectanglesShape *this)
{
  int v1; // edx
  float *v2; // rax
  bool result; // al

  v1 = *((_DWORD *)this + 10);
  result = 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    v2 = (float *)*((_QWORD *)this + 2);
    if ( v2[2] > *v2 && v2[3] > v2[1] )
      return 0;
  }
  return result;
}
