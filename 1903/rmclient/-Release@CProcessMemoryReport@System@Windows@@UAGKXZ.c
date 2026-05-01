/*
 * XREFs of ?Release@CProcessMemoryReport@System@Windows@@UAGKXZ @ 0x10010E20
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@W3AGKXZ @ 0x1000D740 (-Release@CProcessMemoryReport@System@Windows@@W3AGKXZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@W7AGKXZ @ 0x1000D750 (-Release@CProcessMemoryReport@System@Windows@@W7AGKXZ.c)
 * Callees:
 *     <none>
 */

signed __int32 __stdcall Windows::System::CProcessMemoryReport::Release(volatile signed __int32 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::Release(this);
}
