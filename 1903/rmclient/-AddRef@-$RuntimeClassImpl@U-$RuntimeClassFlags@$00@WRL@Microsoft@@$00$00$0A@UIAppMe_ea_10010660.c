/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010660
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W3AGKXZ @ 0x1000D4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLim.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7AGKXZ @ 0x1000D4C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMe_ea_1000D4C0.c)
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IAEKXZ @ 0x10010C1A (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A_ea_10010C1A.c)
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::AddRef(
        int a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::InternalAddRef(a1);
}
