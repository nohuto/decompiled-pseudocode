/*
 * XREFs of ?UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803D1560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall JointResize::UnsubscribeFromServices(JointResize *this, struct IServiceProvider *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (__int64 *)((char *)this + 192);
  v4 = *((_QWORD *)this + 24);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v4 + 48LL))(v4, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v5 + 80LL))(
      v5,
      ((unsigned __int64)this + 64) & -(__int64)(this != (JointResize *)24));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  }
  SmartCookie::Unregister((JointResize *)((char *)this + 272));
  return 0LL;
}
