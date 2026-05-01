/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18024C200
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800B83B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabTransferEvent.c)
 *     ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18024B960 (-InternalRelease@-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Mi.c)
 *     ?Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ @ 0x18024C280 (-Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 3);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 3, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_6;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_6:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 192))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
