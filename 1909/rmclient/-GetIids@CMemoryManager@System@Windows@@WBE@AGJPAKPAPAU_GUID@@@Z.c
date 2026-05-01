/*
 * XREFs of ?GetIids@CMemoryManager@System@Windows@@WBE@AGJPAKPAPAU_GUID@@@Z @ 0x1000D200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CMemoryManager::GetIids(int a1, int a2, int a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           a1 - 20,
           a2,
           a3);
}
