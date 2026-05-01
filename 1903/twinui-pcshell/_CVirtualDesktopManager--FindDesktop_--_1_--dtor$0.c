/*
 * XREFs of _CVirtualDesktopManager::FindDesktop_::_1_::dtor$0 @ 0x1803EB9B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::FindDesktop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared((RTL_SRWLOCK **)(a2 + 64));
}
