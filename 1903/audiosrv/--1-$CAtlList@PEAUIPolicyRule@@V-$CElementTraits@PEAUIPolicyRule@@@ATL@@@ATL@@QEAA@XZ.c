/*
 * XREFs of ??1?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAA@XZ @ 0x1800FF334
 * Callers:
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$5 @ 0x18006D61E (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$5.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x180107629 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x18010763C (_CMonitor--CMonitor_--_1_--dtor$21.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$3 @ 0x18012A781 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies_::_1_::dtor$0 @ 0x18012C9BD (_DynamicAudioEndpointManager--VerifyListIntegrityAndRefreshDependencies_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::~CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>(
        __int64 *a1)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(a1);
}
