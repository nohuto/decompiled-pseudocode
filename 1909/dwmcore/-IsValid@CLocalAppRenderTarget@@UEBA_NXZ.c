/*
 * XREFs of ?IsValid@CLocalAppRenderTarget@@UEBA_NXZ @ 0x18024EE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLocalAppRenderTarget::IsValid(CLocalAppRenderTarget *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
