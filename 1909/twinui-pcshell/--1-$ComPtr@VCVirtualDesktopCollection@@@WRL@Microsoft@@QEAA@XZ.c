/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804088B4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x180408832 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDeskt_ea_180408832.c)
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x180408C30 (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(a1);
}
