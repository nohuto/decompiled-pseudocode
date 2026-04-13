/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_ce2c014afe80d313fefaa826bf465c04__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180039430
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021090 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CADAC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_ce2c014afe80d313fefaa826bf465c04__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  volatile signed __int64 *v4; // rcx

  `eh vector destructor iterator'(
    a1 + 4,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v4 = (volatile signed __int64 *)a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v4);
  }
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
