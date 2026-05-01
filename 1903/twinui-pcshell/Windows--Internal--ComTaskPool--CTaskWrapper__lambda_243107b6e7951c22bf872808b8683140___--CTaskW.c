/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140_____lambda_243107b6e7951c22bf872808b8683140___ @ 0x1802A4C48
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_243107b6e7951c22bf872808b8683140___ @ 0x1802A4F30 (Windows--Internal--ComTaskPool--QueueTask__lambda_243107b6e7951c22bf872808b8683140___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180295C58 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180295C58.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140_____lambda_243107b6e7951c22bf872808b8683140___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_18044F3B8;
  return a1;
}
