/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5_____lambda_b7a65526da0b0c1d1f69877e76cb9ec5___ @ 0x1802C41F0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___ @ 0x1802C44E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802B512C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802B512C.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5_____lambda_b7a65526da0b0c1d1f69877e76cb9ec5___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  a1[3] = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 4));
  a1[4] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *a1 = off_18046F5C0;
  return a1;
}
