/*
 * XREFs of ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801469B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HotKeyProcessor::OnDisconnected(HotKeyProcessor *this, struct IMessageProxy *a2)
{
  __int64 *v2; // rbx
  void (__fastcall ***v4)(_QWORD, GUID *, struct IMessageProxy **); // rcx
  struct IMessageProxy *v5; // rcx
  struct IMessageProxy *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 112);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 14);
  if ( v4 )
  {
    v7 = 0LL;
    (**v4)(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v7);
    v5 = v7;
    if ( v7 == a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2);
      v5 = v7;
    }
    if ( v5 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return 0LL;
}
