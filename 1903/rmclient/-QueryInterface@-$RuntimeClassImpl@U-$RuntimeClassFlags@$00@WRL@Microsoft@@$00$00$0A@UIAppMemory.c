/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x10009FC0
 * Callers:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K@Details@WRL@Microsoft@@YGJPAPAUIAppMemoryReport@System@Windows@@AA_K1111@Z @ 0x10008480 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W3AGJABU_GUID@@PAPAX@Z @ 0x1000D5E0 (-QueryInterface@CAppMemoryReport@System@Windows@@W3AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W7AGJABU_GUID@@PAPAX@Z @ 0x1000D5F0 (-QueryInterface@CAppMemoryReport@System@Windows@@W7AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WM@AGJABU_GUID@@PAPAX@Z @ 0x1000D600 (-QueryInterface@CAppMemoryReport@System@Windows@@WM@AGJABU_GUID@@PAPAX@Z.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@123@ABU_GUID@@PAPAX@Z @ 0x10008610 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport.c)
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::QueryInterface(
        int a1,
        _DWORD *a2,
        int *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>>(
           a1,
           a2,
           a3);
}
