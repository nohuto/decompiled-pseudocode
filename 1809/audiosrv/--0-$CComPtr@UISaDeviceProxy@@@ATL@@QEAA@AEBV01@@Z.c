/*
 * XREFs of ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800E9F1C
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3a240c478cbbad7116dd631bc09646d7___ @ 0x180064F14 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180064F14.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b8e6edafc84f4ea4982f0b5c293be3ab___ @ 0x1800650C0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800650C0.c)
 *     _lambda_b8e6edafc84f4ea4982f0b5c293be3ab_::_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_ @ 0x180065350 (_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_--_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_.c)
 *     _lambda_0a015809dd6257f91f177da0fa925ef4_::operator() @ 0x180065420 (_lambda_0a015809dd6257f91f177da0fa925ef4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
