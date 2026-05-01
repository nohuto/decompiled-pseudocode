/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___ @ 0x180001854 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Wind.c)
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x180001920 (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x1800022B0 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOA.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002640 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x1800029E0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002BD0 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 *     ??1?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800069B0 (--1-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ??1?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180006B50 (--1-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x180006F20 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Windows::Foundation::IEventHandler_IInspectable_____ptr64___ @ 0x180008C54 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Wind.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000CD14 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000CFB0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x18000D2DC (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000DE5C (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000DFD0 (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800099E8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
