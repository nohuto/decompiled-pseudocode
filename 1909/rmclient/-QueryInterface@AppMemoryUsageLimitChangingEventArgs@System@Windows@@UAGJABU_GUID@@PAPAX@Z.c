/*
 * XREFs of ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJABU_GUID@@PAPAX@Z @ 0x100075A0
 * Callers:
 *     ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGJABU_GUID@@PAPAX@Z @ 0x1000D610 (-QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGJABU_GUID@@PAPAX@Z @ 0x1000D620 (-QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGJABU_GUID@@PAPAX@Z.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@ABU_GUID@@PAPAX@Z @ 0x10009690 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageL.c)
 */

int __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::QueryInterface(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>>(
           this,
           (int)a3);
}
