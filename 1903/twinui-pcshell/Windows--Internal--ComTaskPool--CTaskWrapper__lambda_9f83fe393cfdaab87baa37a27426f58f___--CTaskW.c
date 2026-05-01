/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f_____lambda_9f83fe393cfdaab87baa37a27426f58f___ @ 0x18029401C
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18029BBA4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180295C58 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180295C58.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f_____lambda_9f83fe393cfdaab87baa37a27426f58f___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 48,
    a2 + 32);
  *(_QWORD *)(a1 + 48) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_18044D350;
  return a1;
}
