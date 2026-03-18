/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x180066040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 208) & 0xA) == 2 )
    return *((_QWORD *)this + 42) != 0LL;
  return v1;
}
