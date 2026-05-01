/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x180383274
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory_____ptr64_&___ptr64_IVirtualDesktopPersistence_____ptr64_&___ptr64_bool_&___ptr64__::_1_::dtor$2 @ 0x1803831F2 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDeskt_ea_1803831F2.c)
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1803835E4 (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(a1);
}
