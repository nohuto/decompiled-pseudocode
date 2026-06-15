/*
 * XREFs of _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14001AEA8
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 32) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
