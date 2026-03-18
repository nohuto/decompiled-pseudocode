/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x180066070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 208) & 0xA) == 2 )
    return *((_QWORD *)this + 36) != 0LL;
  return v1;
}
