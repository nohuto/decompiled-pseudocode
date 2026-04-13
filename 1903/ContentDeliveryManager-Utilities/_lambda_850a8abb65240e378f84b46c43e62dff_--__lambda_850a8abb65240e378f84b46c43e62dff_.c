/*
 * XREFs of _lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_ @ 0x180029574
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029160 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180038F80 (Windows--Internal--COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff___ea_180038F80.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$7 @ 0x1800CCECA (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$7.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult___lambda_850a8abb65240e378f84b46c43e62dff____::_1_::dtor$1 @ 0x1800CDAA7 (_Windows--Internal--COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__ea_1800CDAA7.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_(_QWORD *a1)
{
  __int64 v2; // rcx
  HRESULT result; // eax
  __int64 v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HSTRING v8; // rcx
  volatile signed __int64 *v9; // rcx

  v2 = a1[12];
  if ( v2 )
  {
    a1[12] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = a1[11];
  if ( v4 )
  {
    a1[11] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)a1[9];
  if ( v5 )
    result = WindowsDeleteString(v5);
  v6 = (HSTRING)a1[7];
  if ( v6 )
    result = WindowsDeleteString(v6);
  v7 = (HSTRING)a1[5];
  if ( v7 )
    result = WindowsDeleteString(v7);
  v8 = (HSTRING)a1[3];
  if ( v8 )
    result = WindowsDeleteString(v8);
  v9 = (volatile signed __int64 *)a1[1];
  if ( v9 )
  {
    a1[1] = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v9);
  }
  return result;
}
