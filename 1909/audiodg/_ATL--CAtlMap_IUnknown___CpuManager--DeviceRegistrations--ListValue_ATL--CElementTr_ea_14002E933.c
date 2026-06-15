/*
 * XREFs of _ATL::CAtlMap_IUnknown___CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14002E933
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E518 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IUnknown___CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 120));
  throw;
}
