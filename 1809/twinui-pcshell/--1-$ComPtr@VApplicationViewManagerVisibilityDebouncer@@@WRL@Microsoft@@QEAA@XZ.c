/*
 * XREFs of ??1?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ @ 0x18012EC30
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ApplicationViewManagerVisibilityDebouncer_ApplicationViewManagerVisibilityDebouncer_IApplicationViewCollection_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18012E9BA (_Microsoft--WRL--Details--MakeAndInitialize_ApplicationViewManagerVisibilityDebounc_ea_18012E9BA.c)
 *     _ApplicationViewManagerVisibilityDebouncer_CreateInstance_::_1_::dtor$0 @ 0x18012EF94 (_ApplicationViewManagerVisibilityDebouncer_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::~ComPtr<ApplicationViewManagerVisibilityDebouncer>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(a1);
}
