/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x14002F2A8
 * Callers:
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14002F298 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x140031DEC (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x140036B68 (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x140038314 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ @ 0x1400394E8 (-InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x140040E1C (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x140042304 (-InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x140044968 (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x140051B94 (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x140051BA8 (-InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x14005A7B8 (-InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x14005A7CC (-InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}
