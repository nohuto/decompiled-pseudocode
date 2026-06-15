/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@W7EAAKXZ @ 0x18006C480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::AddRef(__int64 a1)
{
  return CSystemEffectWrapper::AddRef((CSystemEffectWrapper *)(a1 - 8));
}
