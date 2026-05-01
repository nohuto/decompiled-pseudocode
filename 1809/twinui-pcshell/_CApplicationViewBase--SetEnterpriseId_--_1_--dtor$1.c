/*
 * XREFs of _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$1 @ 0x180135468
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CApplicationViewBase::SetEnterpriseId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(
           (__int64 *)(a2 + 80),
           (volatile int *)a2);
}
