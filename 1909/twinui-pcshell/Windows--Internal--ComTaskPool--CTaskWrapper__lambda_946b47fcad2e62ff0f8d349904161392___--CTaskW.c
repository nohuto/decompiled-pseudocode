/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392_____lambda_946b47fcad2e62ff0f8d349904161392___ @ 0x1802B3474
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802BB094 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802B512C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802B512C.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392_____lambda_946b47fcad2e62ff0f8d349904161392___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 4,
    a2 + 2);
  a1[4] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *a1 = off_18046D5C8;
  return a1;
}
