/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1803E918C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x1803E910A (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDeskt_ea_1803E910A.c)
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1803E9510 (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(a1);
}
