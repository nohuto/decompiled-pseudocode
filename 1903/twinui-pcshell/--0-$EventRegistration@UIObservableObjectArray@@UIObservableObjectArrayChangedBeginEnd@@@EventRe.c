/*
 * XREFs of ??0?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChangedBeginEnd@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18035556C
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_A0xbba38151::ObservableObjectArrayBeginEndEventRegistration_IObservableObjectArrayChangedBeginEnd___&_ @ 0x180355360 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--ObservableObjectArrayBeginEndE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18033F698 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>(
        __int64 a1)
{
  __int64 result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservableObjectArrayChangedBeginEnd>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
