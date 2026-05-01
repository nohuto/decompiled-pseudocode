/*
 * XREFs of ?AddRef@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x180083F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
}
