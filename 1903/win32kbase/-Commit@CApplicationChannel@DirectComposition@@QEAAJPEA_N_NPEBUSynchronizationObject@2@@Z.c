/*
 * XREFs of ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0009FF8
 * Callers:
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0006D50 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000A08C (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000B1A0 (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00BA340 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C01A3BBC (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A6BCC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01A6C88 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000E430 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C000EFD8 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        bool a3,
        const struct DirectComposition::SynchronizationObject *a4)
{
  bool v8; // si
  struct DirectComposition::CBatch *v10; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CBatch *v11; // [rsp+38h] [rbp-10h] BYREF

  do
  {
    v8 = DirectComposition::CApplicationChannel::BuildBatch(this, &v10, &v11, a3);
    if ( v10 )
      DirectComposition::CApplicationChannel::SubmitBatch(this, v10, v11, *((_BYTE *)this + 48) & 1, a4);
  }
  while ( !v8 );
  if ( a2 )
    *a2 = *((_DWORD *)this + 129) != 0;
  return 0LL;
}
