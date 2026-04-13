/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_7d65644bff1a7e1849e627588e917516_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180037450
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7d65644bff1a7e1849e627588e917516_::__lambda_7d65644bff1a7e1849e627588e917516_ @ 0x1800291D4 (_lambda_7d65644bff1a7e1849e627588e917516_--__lambda_7d65644bff1a7e1849e627588e917516_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_7d65644bff1a7e1849e627588e917516_>,Windows::Internal::CNoResult>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_7d65644bff1a7e1849e627588e917516_::__lambda_7d65644bff1a7e1849e627588e917516_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
