/*
 * XREFs of _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001AED9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E578 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 120));
  throw;
}
