/*
 * XREFs of ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_c3bf47982beeb92429b0310f4e2c5f50_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x1800172D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_c3bf47982beeb92429b0310f4e2c5f50_>,Windows::Internal::CNoResult>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
