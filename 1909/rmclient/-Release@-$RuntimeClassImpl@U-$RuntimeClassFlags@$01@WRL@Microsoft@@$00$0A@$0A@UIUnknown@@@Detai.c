/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0
 * Callers:
 *     ??1?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x10007290 (--1-$AgileEventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 *     ??1?$AgileEventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x10007446 (--1-$AgileEventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___ @ 0x100078A0 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x100078FC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Wind.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@PAVEventTargetArray@Details@12@@Z @ 0x10007A3B (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@PAVEventTargetArr.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ @ 0x10007B2B (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Wind.c)
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100089C0 (-AddInternal@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeO.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@$$QAI@Z @ 0x10008C90 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJ.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@AAI@Z @ 0x100102FE (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@Y.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x1001040A (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z @ 0x1001044B (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B (-Remove@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010F84 (-Remove@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009F60 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UAEPAXI@Z @ 0x1000B750 (--_GEventTargetArray@Details@WRL@Microsoft@@UAEPAXI@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        Microsoft::WRL::Details::EventTargetArray *a1)
{
  signed __int32 v1; // esi
  void *(__thiscall *v3)(Microsoft::WRL::Details::EventTargetArray *__hidden, char); // ebx
  void (__thiscall *v4)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)a1 + 2);
  if ( v1 )
    return v1;
  if ( a1 )
  {
    v3 = *(void *(__thiscall **)(Microsoft::WRL::Details::EventTargetArray *__hidden, char))(*(_DWORD *)a1 + 12);
    if ( v3 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
      Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(a1, 1);
    else
      v3(a1, 1);
  }
  if ( !Microsoft::WRL::Details::ModuleBase::module_ )
    return v1;
  v4 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8);
  if ( (char *)v4 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
    v4(
      *(_DWORD *)(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8),
      Microsoft::WRL::Details::ModuleBase::module_);
    return v1;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  return 0;
}
