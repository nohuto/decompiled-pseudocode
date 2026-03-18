/*
 * XREFs of ?ContainsWheelTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C00801A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::ContainsWheelTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *(_QWORD *)a1;
  v2 = 0;
  if ( *(_WORD *)(v1 + 18) )
    return (*(_WORD *)(v1 + 16) & 0xC00) != 0;
  return v2;
}
