/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_5e14c2903f19bc99334c762d192b5b2b___ @ 0x1800E3EB8
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     _lambda_5e14c2903f19bc99334c762d192b5b2b_::operator() @ 0x1800E42CC (_lambda_5e14c2903f19bc99334c762d192b5b2b_--operator().c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_5e14c2903f19bc99334c762d192b5b2b___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax

  for ( i = a2; i != a3; i += 8LL )
    lambda_5e14c2903f19bc99334c762d192b5b2b_::operator()(a4, i);
  result = a1;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a4 + 16);
  return result;
}
