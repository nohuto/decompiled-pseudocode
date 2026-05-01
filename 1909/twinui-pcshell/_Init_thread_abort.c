/*
 * XREFs of _Init_thread_abort @ 0x180089760
 * Callers:
 *     _CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x1801DB74A (_CortanaStoreAppExperienceManager--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1801DE1B4 (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SubscribeToServicesInternal_::_1_::dtor$1 @ 0x1801DE9D1 (_CortanaStoreAppExperienceManager--SubscribeToServicesInternal_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_1805C0C88);
  *a1 = 0;
  LeaveCriticalSection(&stru_1805C0C88);
  return Init_thread_notify();
}
