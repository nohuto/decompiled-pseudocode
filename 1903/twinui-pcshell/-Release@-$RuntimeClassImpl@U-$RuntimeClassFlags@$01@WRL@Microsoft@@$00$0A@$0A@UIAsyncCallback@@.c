/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005FB10
 * Callers:
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180014DA8 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&_ @ 0x180014E8C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180015A3C (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c___ @ 0x180019980 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_.c)
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x180019A80 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18002F2EC (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180033254 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x1800333B0 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800B2CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800B2CF0.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x180140528 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___ @ 0x180157E30 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_.c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x180158008 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___ @ 0x18034BAC4 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x18034BCAC (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 11);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
