/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_91da0398866e2bc6f1173300c449b4ce__Windows::Internal::CHSTRINGResult_::_scalar_deleting_destructor_ @ 0x180019390
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CAC1C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_91da0398866e2bc6f1173300c449b4ce__Windows::Internal::CHSTRINGResult_::_scalar_deleting_destructor_(
        HSTRING *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  WindowsDeleteString(a1[2]);
  a1[2] = 0LL;
  *a1 = (HSTRING)&Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
