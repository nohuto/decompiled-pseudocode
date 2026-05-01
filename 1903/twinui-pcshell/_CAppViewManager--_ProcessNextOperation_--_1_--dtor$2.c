/*
 * XREFs of _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x1800C2BC2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAppViewManager::_ProcessNextOperation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return CAutoHandle<void *>::~CAutoHandle<void *>((void **)(a2 + 48));
}
