/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000C67C
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00095E0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtDCompositionSynchronize @ 0x1C000C4F0 (NtDCompositionSynchronize.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00BA340 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C01A3BBC (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A6BCC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01A6C88 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000DBD4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this)
{
  if ( !*((_QWORD *)this + 21) )
    *((_QWORD *)this + 21) = DirectComposition::CApplicationChannel::GetBatchFragment(this, 0, 1);
}
