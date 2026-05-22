/*
 * XREFs of ?OnProxyCreated@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x180146AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotKeyProcessor::OnProxyCreated(HotKeyProcessor *this, struct IMessageProxy *a2)
{
  char *v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 112;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 14);
  v4 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, char *))a2)(
         a2,
         &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572,
         v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x261uLL);
    FailFastWithHR(v5, retaddr, 0x261uLL);
  }
  return v5;
}
