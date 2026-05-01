/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAA@XZ @ 0x1802ED178
 * Callers:
 *     ??$MakeAndInitialize@V?$CWeakReference@VCAltTabViewHost@@@WeakReference@@V12@AEAPEAVCAltTabViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCAltTabViewHost@@@WeakReference@@AEAPEAVCAltTabViewHost@@@Z @ 0x1802ECF5C (--$MakeAndInitialize@V-$CWeakReference@VCAltTabViewHost@@@WeakReference@@V12@AEAPEAVCAltTabViewH.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@V12@AEAPEAVCSnapAssistViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@AEAPEAVCSnapAssistViewHost@@@Z @ 0x1802EEFEC (--$MakeAndInitialize@V-$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@V12@AEAPEAVCSnapAss.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@AEAPEAVCPPIAllUpViewHost@@@Z @ 0x1802F049C (--$MakeAndInitialize@V-$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpV.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEAVSwitchItemFilteredCollection@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@AEAPEAVSwitchItemFilteredCollection@@@Z @ 0x1802F47CC (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEA.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x18030159C (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@WeakReference@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802ED1B8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@WeakRef.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,WeakReference::IWeakReference>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,WeakReference::IWeakReference>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
