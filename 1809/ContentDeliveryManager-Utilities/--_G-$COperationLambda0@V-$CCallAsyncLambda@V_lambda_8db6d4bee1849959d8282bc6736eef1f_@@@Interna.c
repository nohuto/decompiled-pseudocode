/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_8db6d4bee1849959d8282bc6736eef1f_@@@Internal@Windows@@VCHSTRINGResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180018440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_8db6d4bee1849959d8282bc6736eef1f_>,Windows::Internal::CHSTRINGResult>::`scalar deleting destructor'(
        HSTRING *a1,
        char a2)
{
  WindowsDeleteString(a1[2]);
  a1[2] = 0LL;
  *a1 = (HSTRING)&Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
