/*
 * XREFs of _ATL::CAtlMap_ResourceConsumer___ATL::CAtlList__ResourceInfo_ResourceInfoTraits____ResourceConsumerTraits_ATL::CElementTraits_ATL::CAtlList__ResourceInfo_ResourceInfoTraits______::SetAt_::_1_::catch$0 @ 0x180143176
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180142F7C (-RemoveAtPos@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ResourceConsumer___ATL::CAtlList__ResourceInfo_ResourceInfoTraits____ResourceConsumerTraits_ATL::CElementTraits_ATL::CAtlList__ResourceInfo_ResourceInfoTraits______::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveAtPos(
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 120));
  throw;
}
