/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@PAKPAPAU_GUID@@@Z @ 0x1001014A
 * Callers:
 *     ?GetIids@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJPAKPAPAU_GUID@@@Z @ 0x10010880 (-GetIids@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJPAKPAPAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>>(
        int a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v4; // eax

  *a3 = 0;
  *a2 = 0;
  v4 = (GUID *)CoTaskMemAlloc(0x20u);
  if ( !v4 )
    return -2147024882;
  *v4 = _GUID_79f86664_feca_4da5_9e40_2bc63efdc979;
  v4[1] = _GUID_00000038_0000_0000_c000_000000000046;
  *a2 = 2;
  *a3 = v4;
  return 0;
}
