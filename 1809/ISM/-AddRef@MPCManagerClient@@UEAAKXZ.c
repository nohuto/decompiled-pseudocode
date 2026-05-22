/*
 * XREFs of ?AddRef@MPCManagerClient@@UEAAKXZ @ 0x1800DF180
 * Callers:
 *     ?AddRef@MPCManagerClient@@WCA@EAAKXZ @ 0x1800DBBA0 (-AddRef@MPCManagerClient@@WCA@EAAKXZ.c)
 *     ?AddRef@MPCManagerClient@@W7EAAKXZ @ 0x1800DBC40 (-AddRef@MPCManagerClient@@W7EAAKXZ.c)
 *     ?AddRef@MPCManagerClient@@WBA@EAAKXZ @ 0x1800DBC90 (-AddRef@MPCManagerClient@@WBA@EAAKXZ.c)
 *     ?AddRef@MPCManagerClient@@WBI@EAAKXZ @ 0x1800DBCD0 (-AddRef@MPCManagerClient@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::AddRef(this);
}
