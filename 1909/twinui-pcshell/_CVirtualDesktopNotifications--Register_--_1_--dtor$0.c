/*
 * XREFs of _CVirtualDesktopNotifications::Register_::_1_::dtor$0 @ 0x180405B2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopNotifications::Register_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared((RTL_SRWLOCK **)(a2 + 64));
}
