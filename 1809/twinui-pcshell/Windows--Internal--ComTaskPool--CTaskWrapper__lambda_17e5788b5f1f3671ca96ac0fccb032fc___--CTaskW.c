/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc___::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc_____lambda_17e5788b5f1f3671ca96ac0fccb032fc___ @ 0x18024E668
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___ @ 0x18024E950 (Windows--Internal--ComTaskPool--QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18023FAC8 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is_ea_18023FAC8.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc___::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc_____lambda_17e5788b5f1f3671ca96ac0fccb032fc___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  a1[3] = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 4));
  a1[4] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *a1 = off_1803E7C80;
  return a1;
}
