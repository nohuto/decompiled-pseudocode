/*
 * XREFs of ?RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@3@W4DeferReason@43@@Z @ 0x1C00A1F04
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0055530 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C01A6F5C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::WaitForCommitCompletionData::RecordBatchDeferred(
        __int64 a1,
        __int64 a2,
        int a3)
{
  LARGE_INTEGER PerformanceCounter; // r12
  char v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  char v12; // al
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  char v15; // dl
  char v16; // al
  __int64 v17; // rcx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = 0;
  v8 = (*(unsigned int *)(a1 + 72) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  v9 = *(unsigned int *)(a1 + 72) - 50 * ((v8 + (((unsigned __int64)*(unsigned int *)(a1 + 72) - v8) >> 1)) >> 5);
  if ( !*(_DWORD *)(a1 + 68) || (v10 = a1 + (v9 << 6), *(_DWORD *)(v10 + 112) != *(_DWORD *)(a2 + 16)) )
  {
    v14 = (v9 + 1) % 0x32;
    v10 = a1 + (v14 << 6);
    memset((void *)(v10 + 80), 0, 0x40uLL);
    *(_QWORD *)(v10 + 80) = *(_QWORD *)(a2 + 56);
    *(LARGE_INTEGER *)(v10 + 96) = PerformanceCounter;
    *(_DWORD *)(v10 + 112) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(v10 + 120) = *(_QWORD *)(a2 + 64);
    v15 = *(_BYTE *)(v10 + 136) & 0xFE | (*(_QWORD *)(a2 + 104) != 0LL);
    *(_BYTE *)(v10 + 136) = v15;
    *(_BYTE *)(v10 + 136) = v15 & 0xFD | (*(_QWORD *)(a2 + 96) != 0LL ? 2 : 0);
    *(_DWORD *)(a1 + 72) = v14;
  }
  *(_QWORD *)(v10 + 88) = *(_QWORD *)(a2 + 56);
  *(LARGE_INTEGER *)(v10 + 104) = PerformanceCounter;
  *(_DWORD *)(v10 + 116) = a3;
  *(_DWORD *)(v10 + 132) = *(_DWORD *)(a2 + 48);
  v11 = *(_QWORD *)(a2 + 96);
  if ( v11 )
  {
    v16 = *(_BYTE *)(v10 + 136) ^ (*(_BYTE *)(v10 + 136) ^ (4 * *(_BYTE *)(v11 + 33))) & 4;
    *(_BYTE *)(v10 + 136) = v16;
    v17 = *(_QWORD *)(a2 + 96);
    if ( *(_BYTE *)(v17 + 33) && *(int *)(v17 + 36) <= 0 )
      v7 = 8;
    v12 = v7 | v16 & 0xF7;
  }
  else
  {
    v12 = *(_BYTE *)(v10 + 136) & 0xF3;
  }
  *(_BYTE *)(v10 + 136) = v12;
  ++*(_DWORD *)(a1 + 68);
  result = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
