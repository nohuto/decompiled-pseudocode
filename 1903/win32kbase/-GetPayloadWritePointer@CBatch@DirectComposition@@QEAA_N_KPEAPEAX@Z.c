/*
 * XREFs of ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000DB98
 * Callers:
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00090E0 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00BA340 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C01A3BBC (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A6BCC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01A6C88 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C000EC94 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 */

bool __fastcall DirectComposition::CBatch::GetPayloadWritePointer(
        DirectComposition::CBatchSharedMemoryPool **this,
        unsigned __int64 a2,
        void **a3)
{
  void *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11

  v4 = DirectComposition::CBatchSharedMemoryPool::UseSpace(this[17], a2);
  if ( v4 )
  {
    *(_QWORD *)(v5 + 152) += v6;
    *a3 = v4;
    LOBYTE(v4) = 1;
  }
  return (char)v4;
}
