/*
 * XREFs of ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x180075D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAsyncFlushResponse::OnPresentComplete(CAsyncFlushResponse *this)
{
  return CAsyncFlushResponse::SendResponse(this, 0);
}
