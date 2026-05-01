/*
 * XREFs of ?SetPosition@ApplicationViewOperation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180076870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::SetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition *a2)
{
  struct IApplicationViewPosition *v2; // rax
  struct IApplicationViewPosition *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct IApplicationViewPosition *)*((_QWORD *)this + 9);
  if ( v2 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = (struct IApplicationViewPosition *)*((_QWORD *)this + 9);
    }
    v6 = v2;
    *((_QWORD *)this + 9) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  return 0LL;
}
