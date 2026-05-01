/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@W3AGKXZ @ 0x1000D4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::AddRef(
        int a1)
{
  return Windows::System::CProcessMemoryReport::AddRef((Windows::System::CProcessMemoryReport *)(a1 - 4));
}
