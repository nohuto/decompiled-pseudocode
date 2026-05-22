/*
 * XREFs of ?OnDisconnected@MagnifierClientProxy@@MEAAJXZ @ 0x18006F780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall MagnifierClientProxy::OnDisconnected(MagnifierClientProxy *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 56);
  v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 56LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64, MagnifierClientProxy *))(*(_QWORD *)v3 + 8LL))(v3, this);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v1);
  return 0LL;
}
