/*
 * XREFs of ?IsValid@CCompositionToken@@UEBA_NXZ @ 0x1C001BAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionToken::IsValid(CCompositionToken *this)
{
  return *((_BYTE *)this + 64);
}
