/*
 * XREFs of ?IsValid@CRemoteAppRenderTarget@@UEBA_NXZ @ 0x1801A4290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteAppRenderTarget::IsValid(CRemoteAppRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 27) )
    return *((_QWORD *)this + 13) != 0LL;
  return result;
}
