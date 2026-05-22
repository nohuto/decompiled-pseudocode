/*
 * XREFs of ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::QueryInterface(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 8),
           a2,
           a3);
}
