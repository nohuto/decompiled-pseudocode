/*
 * XREFs of ??1?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140029B5C
 * Callers:
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001AC5E (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001AC74 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001AC8A (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$2.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$3 @ 0x14001ADE1 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::~CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>(
        __int64 a1)
{
  return ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(a1);
}
