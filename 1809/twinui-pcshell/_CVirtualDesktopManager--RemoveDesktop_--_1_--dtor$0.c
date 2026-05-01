/*
 * XREFs of _CVirtualDesktopManager::RemoveDesktop_::_1_::dtor$0 @ 0x180386FA4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::RemoveDesktop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 64));
}
