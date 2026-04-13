/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800393C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_ @ 0x180029AC4 (_lambda_850a8abb65240e378f84b46c43e62dff_--__lambda_850a8abb65240e378f84b46c43e62dff_.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CADAC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 15,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
