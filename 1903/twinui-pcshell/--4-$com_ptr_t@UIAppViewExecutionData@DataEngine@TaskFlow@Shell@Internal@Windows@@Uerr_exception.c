/*
 * XREFs of ??4?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009813C
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180067F60 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x1800A5E60 (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 *     ?RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITaskDataArbiter@23456@@Z @ 0x1801F93FC (-RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
