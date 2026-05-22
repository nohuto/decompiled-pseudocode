/*
 * XREFs of ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x1800672E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterObserverClientOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4InputObserverType@InputObservation@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180067B60 (-UnregisterObserverClientOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4.c)
 */

__int64 __fastcall InputObserverClientProxy::OnDisconnected(InputObserverClientProxy *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 48);
  CInputObserverManager::UnregisterObserverClientOfType(*((_QWORD *)this + 6), 0LL, *((unsigned int *)this + 14), this);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v1);
  return 0LL;
}
