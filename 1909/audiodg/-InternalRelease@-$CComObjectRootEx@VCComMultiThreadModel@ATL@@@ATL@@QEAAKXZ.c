/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1400275F8
 * Callers:
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x1400275E8 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x14002AC5C (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x1400310F8 (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x140032F84 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ @ 0x140034158 (-InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x14003D3FC (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x14003F350 (-InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x140042318 (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x14004F734 (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x14004F748 (-InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x140058830 (-InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x140058844 (-InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}
