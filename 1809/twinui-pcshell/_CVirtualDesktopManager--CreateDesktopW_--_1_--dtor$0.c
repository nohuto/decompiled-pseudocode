/*
 * XREFs of _CVirtualDesktopManager::CreateDesktopW_::_1_::dtor$0 @ 0x180385DE6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::CreateDesktopW_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 64));
}
