/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140026314
 * Callers:
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001AD99 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14001ADFA (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x14001B0C4 (_CSystemAudioDeviceShared--CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x140030180 (_CSystemAudioDeviceExclusive--CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x140033341 (_CSystemAudioDeviceOffloadGraph--CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x14004D1EC (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14004D29C (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x14004D33B (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140057725 (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x140057890 (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 8;
  if ( *(_BYTE *)(v1 + 40) )
  {
    *(_BYTE *)(v1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
  }
}
