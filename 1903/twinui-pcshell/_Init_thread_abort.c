/*
 * XREFs of _Init_thread_abort @ 0x180086D50
 * Callers:
 *     _CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x1801BC78A (_CortanaStoreAppExperienceManager--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1801BF1E4 (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SubscribeToServicesInternal_::_1_::dtor$1 @ 0x1801BFA01 (_CortanaStoreAppExperienceManager--SubscribeToServicesInternal_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
