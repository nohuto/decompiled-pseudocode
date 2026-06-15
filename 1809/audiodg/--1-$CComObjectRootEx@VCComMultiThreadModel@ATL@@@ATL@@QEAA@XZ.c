/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x14002DFF8
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$1 @ 0x14001F9F8 (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001FC46 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14001FD62 (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x140035CD4 (_CSystemAudioDeviceExclusive--CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x1400380BA (_CSystemAudioDeviceShared--CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x140038691 (_CSystemAudioDeviceOffloadGraph--CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x14004F76C (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14004F81C (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x14004F8BB (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14005957D (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x1400596FC (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
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
