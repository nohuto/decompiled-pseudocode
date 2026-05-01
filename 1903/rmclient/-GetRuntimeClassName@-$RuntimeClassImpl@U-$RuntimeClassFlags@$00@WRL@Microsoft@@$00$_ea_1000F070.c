/*
 * XREFs of ?GetRuntimeClassName@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJPAPAUHSTRING__@@@Z @ 0x1000F070
 * Callers:
 *     ?GetRuntimeClassName@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@W7AGJPAPAUHSTRING__@@@Z @ 0x1000D550 (-GetRuntimeClassName@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProc.c)
 *     ?GetRuntimeClassName@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@WM@AGJPAPAUHSTRING__@@@Z @ 0x1000D560 (-GetRuntimeClassName@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM.c)
 * Callees:
 *     <none>
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::GetRuntimeClassName(
        int a1,
        _DWORD *a2)
{
  *a2 = 0;
  RoOriginateError(-2147467263, 0);
  return -2147467263;
}
