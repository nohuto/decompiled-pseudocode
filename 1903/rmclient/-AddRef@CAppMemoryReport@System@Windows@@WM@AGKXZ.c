/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@WM@AGKXZ @ 0x1000D4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 __stdcall Windows::System::CAppMemoryReport::AddRef(int a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::AddRef((volatile signed __int32 *)(a1 - 12));
}
