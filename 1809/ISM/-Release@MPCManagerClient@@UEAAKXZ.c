/*
 * XREFs of ?Release@MPCManagerClient@@UEAAKXZ @ 0x1800DF100
 * Callers:
 *     ?Release@MPCManagerClient@@W7EAAKXZ @ 0x1800DBBC0 (-Release@MPCManagerClient@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBA@EAAKXZ @ 0x1800DBC60 (-Release@MPCManagerClient@@WBA@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBI@EAAKXZ @ 0x1800DBCA0 (-Release@MPCManagerClient@@WBI@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WCA@EAAKXZ @ 0x1800DBD00 (-Release@MPCManagerClient@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(this);
}
