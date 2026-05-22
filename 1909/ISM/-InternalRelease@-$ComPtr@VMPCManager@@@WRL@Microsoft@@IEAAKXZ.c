/*
 * XREFs of ?InternalRelease@?$ComPtr@VMPCManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18002AD90
 * Callers:
 *     _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x18003DBF0 (_dynamic_atexit_destructor_for__MPCManager--s_instance__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCManager>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (**(__int64 (__fastcall ***)(__int64))(v1 + 16))(v1 + 16);
  }
  return result;
}
