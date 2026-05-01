/*
 * XREFs of ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x18000DE50
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x18000A230 (-Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x18000A240 (-Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::CProcessMemoryReport::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::Release(this);
}
