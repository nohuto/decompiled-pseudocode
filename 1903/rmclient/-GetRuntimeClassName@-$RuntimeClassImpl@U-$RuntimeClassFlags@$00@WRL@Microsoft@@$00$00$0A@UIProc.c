/*
 * XREFs of ?GetRuntimeClassName@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@W7AGJPAPAUHSTRING__@@@Z @ 0x1000D550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::GetRuntimeClassName(
        int a1,
        int a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::GetRuntimeClassName(
           a1 - 8,
           a2);
}
