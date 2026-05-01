/*
 * XREFs of ?GetIids@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJPAKPAPAU_GUID@@@Z @ 0x10010880
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@PAKPAPAU_GUID@@@Z @ 0x1001014A (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0_ea_1001014A.c)
 */

int __thiscall Windows::System::AppMemoryUsageLimitChangingEventArgs::GetIids(
        void *ecx0,
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        unsigned int *a3,
        struct _GUID **a4)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>>(
           (int)ecx0,
           a3,
           a4);
}
