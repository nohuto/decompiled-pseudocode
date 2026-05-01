/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1801AD4D4
 * Callers:
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x180096AF4 (--$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1801ACF38 (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>(
        _QWORD *a1)
{
  a1[4] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>::`vftable'{for `IImmersiveRawInputMouseNotification'};
  a1[2] = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
