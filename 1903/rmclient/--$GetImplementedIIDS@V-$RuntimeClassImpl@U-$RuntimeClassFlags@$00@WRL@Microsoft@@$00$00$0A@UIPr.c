/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@123@PAKPAPAU_GUID@@@Z @ 0x1001019B
 * Callers:
 *     ?GetIids@CProcessMemoryReport@System@Windows@@UAGJPAKPAPAU_GUID@@@Z @ 0x100108A0 (-GetIids@CProcessMemoryReport@System@Windows@@UAGJPAKPAPAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>>(
        int a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v4; // eax

  *a3 = 0;
  *a2 = 0;
  v4 = (GUID *)CoTaskMemAlloc(0x30u);
  if ( !v4 )
    return -2147024882;
  *v4 = _GUID_087305a8_9b70_4782_8741_3a982b6ce5e4;
  v4[1] = _GUID_00000038_0000_0000_c000_000000000046;
  v4[2] = _GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  *a2 = 3;
  *a3 = v4;
  return 0;
}
