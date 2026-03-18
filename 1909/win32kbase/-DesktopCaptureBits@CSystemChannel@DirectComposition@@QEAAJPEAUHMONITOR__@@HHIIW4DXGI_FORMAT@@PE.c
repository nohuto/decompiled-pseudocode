/*
 * XREFs of ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A492C
 * Callers:
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A0F30 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000973C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000AC58 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C000CF38 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::DesktopCaptureBits(
        DirectComposition::CBatchSharedMemoryPool ***a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  char *v13; // r8
  int v14; // eax
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(a1[21], 0x3CuLL, &v16) )
    return 3221225473LL;
  v13 = (char *)v16;
  v14 = a5;
  *(_DWORD *)v16 = 60;
  *((_DWORD *)v13 + 7) = v14;
  *((_DWORD *)v13 + 8) = a6;
  *((_DWORD *)v13 + 9) = a7;
  *(_QWORD *)(v13 + 44) = a8;
  *(_QWORD *)(v13 + 52) = a9;
  *((_DWORD *)v13 + 1) = 345;
  *(_QWORD *)(v13 + 12) = a2;
  *((_DWORD *)v13 + 5) = a3;
  *((_DWORD *)v13 + 6) = a4;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)a1, 0LL, 1, 0LL);
}
