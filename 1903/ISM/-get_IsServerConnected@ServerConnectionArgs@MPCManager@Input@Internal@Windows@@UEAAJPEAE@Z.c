/*
 * XREFs of ?get_IsServerConnected@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAE@Z @ 0x18000F760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::get_IsServerConnected(
        Windows::Internal::Input::MPCManager::ServerConnectionArgs *this,
        unsigned __int8 *a2)
{
  *a2 = *((_BYTE *)this + 64);
  return 0LL;
}
