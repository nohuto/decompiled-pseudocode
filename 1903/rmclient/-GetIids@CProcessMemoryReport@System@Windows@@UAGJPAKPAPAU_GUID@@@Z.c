/*
 * XREFs of ?GetIids@CProcessMemoryReport@System@Windows@@UAGJPAKPAPAU_GUID@@@Z @ 0x100108A0
 * Callers:
 *     ?GetIids@CProcessMemoryReport@System@Windows@@W7AGJPAKPAPAU_GUID@@@Z @ 0x1000D540 (-GetIids@CProcessMemoryReport@System@Windows@@W7AGJPAKPAPAU_GUID@@@Z.c)
 * Callees:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@123@PAKPAPAU_GUID@@@Z @ 0x1001019B (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIPr.c)
 */

int __thiscall Windows::System::CProcessMemoryReport::GetIids(
        void *ecx0,
        Windows::System::CProcessMemoryReport *this,
        unsigned int *a3,
        struct _GUID **a4)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>>(
           (int)ecx0,
           a3,
           a4);
}
