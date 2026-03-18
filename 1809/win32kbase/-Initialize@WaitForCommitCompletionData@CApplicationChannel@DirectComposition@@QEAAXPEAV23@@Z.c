/*
 * XREFs of ?Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z @ 0x1C0082284
 * Callers:
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0082180 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::WaitForCommitCompletionData::Initialize(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  *this = DirectComposition::CConnection::s_qpcFrequency;
  this[1] = KeQueryPerformanceCounter(0LL);
  this[2].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  this[3].LowPart = *((_DWORD *)a2 + 57);
  this[3].HighPart = *((_DWORD *)a2 + 94);
  this[4].LowPart = *((_DWORD *)a2 + 95);
  this[4].HighPart = *((_DWORD *)a2 + 96);
  this[5].QuadPart = 0LL;
  this[6].QuadPart = 0LL;
  this[7].QuadPart = 0LL;
  this[8].QuadPart = 0LL;
  this[9].QuadPart = 0LL;
  this[10].LowPart = 49;
}
