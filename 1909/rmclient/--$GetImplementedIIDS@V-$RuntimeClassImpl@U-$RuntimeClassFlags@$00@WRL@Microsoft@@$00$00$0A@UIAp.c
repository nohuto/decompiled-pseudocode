/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@123@PAKPAPAU_GUID@@@Z @ 0x10010102
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJPAKPAPAU_GUID@@@Z @ 0x10010860 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM_ea_10010860.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAppMemoryReport@System@Windows@@UIWeakReferenceSource@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@IAEXPAKPAU_GUID@@@Z @ 0x100107F6 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAppMemoryRepo.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  LPVOID v4; // esi
  int result; // eax
  int v6; // [esp+Ch] [ebp-4h] BYREF

  *a3 = 0;
  *a2 = 0;
  v4 = CoTaskMemAlloc(0x40u);
  if ( !v4 )
    return -2147024882;
  v6 = 0;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::System::IAppMemoryReport,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>::FillArrayWithIid(
    &v6,
    v4);
  *a2 = 4;
  result = 0;
  *a3 = v4;
  return result;
}
