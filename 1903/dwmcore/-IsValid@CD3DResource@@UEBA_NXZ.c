/*
 * XREFs of ?IsValid@CD3DResource@@UEBA_NXZ @ 0x1800D9CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 69);
}
