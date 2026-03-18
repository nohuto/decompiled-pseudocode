/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00079D0
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0007378 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C00083B4 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C000DD80 (NtDCompositionSubmitDWMBatch.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C000EFD8 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x1C01A6460 (-ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0007A1C (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0007B28 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00080A8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  char v2; // dl
  unsigned int v4; // eax

  v2 = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v4 = *((_DWORD *)this + 28);
  *((_BYTE *)this + 32) = v2;
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v4);
    *((_DWORD *)this + 28) = 0;
    v2 = *((_BYTE *)this + 32);
  }
  if ( (v2 & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(
      *((DirectComposition::CApplicationChannel **)this + 1),
      this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(
    *((DirectComposition::CApplicationChannel **)this + 1),
    this);
}
