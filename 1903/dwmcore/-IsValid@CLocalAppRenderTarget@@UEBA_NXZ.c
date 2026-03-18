/*
 * XREFs of ?IsValid@CLocalAppRenderTarget@@UEBA_NXZ @ 0x1802505D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLocalAppRenderTarget::IsValid(CLocalAppRenderTarget *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
