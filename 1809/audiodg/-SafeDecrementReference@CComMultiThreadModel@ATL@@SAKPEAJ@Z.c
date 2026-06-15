/*
 * XREFs of ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D7E8
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140016E60 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140017F90 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140018020 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140018090 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140018500 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140018CF0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140019320 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x14002F2A8 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14002F920 (-Release@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140036E40 (-Release@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x1400397C0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400410F0 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x1400534D0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14005ADB0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14005AE30 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComMultiThreadModel::SafeDecrementReference(int *a1)
{
  return ATL::SafeDecrementReferenceMultiThread(a1);
}
