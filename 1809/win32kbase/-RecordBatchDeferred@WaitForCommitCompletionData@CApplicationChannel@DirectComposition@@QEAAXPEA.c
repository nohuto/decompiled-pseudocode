/*
 * XREFs of ?RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@3@W4DeferReason@43@@Z @ 0x1C005CB30
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C005AFE0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C01698E4 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
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
  unsigned __int64 v11; // rdi
  char v12; // dl
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rcx
  char v16; // al
  __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = 0;
  v8 = (*(unsigned int *)(a1 + 80) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  v9 = *(unsigned int *)(a1 + 80) - 50 * ((v8 + (((unsigned __int64)*(unsigned int *)(a1 + 80) - v8) >> 1)) >> 5);
  if ( !*(_DWORD *)(a1 + 76) || (v10 = a1 + (v9 << 6), *(_DWORD *)(v10 + 120) != *(_DWORD *)(a2 + 16)) )
  {
    v11 = (v9 + 1) % 0x32;
    v10 = a1 + (v11 << 6);
    memset((void *)(v10 + 88), 0, 0x40uLL);
    *(_QWORD *)(v10 + 88) = *(_QWORD *)(a2 + 56);
    *(LARGE_INTEGER *)(v10 + 104) = PerformanceCounter;
    *(_DWORD *)(v10 + 120) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(v10 + 128) = *(_QWORD *)(a2 + 64);
    v12 = *(_BYTE *)(v10 + 144) & 0xFE | (*(_QWORD *)(a2 + 104) != 0LL);
    *(_BYTE *)(v10 + 144) = v12;
    *(_BYTE *)(v10 + 144) = v12 & 0xFD | (*(_QWORD *)(a2 + 96) != 0LL ? 2 : 0);
    *(_DWORD *)(a1 + 80) = v11;
  }
  *(_QWORD *)(v10 + 96) = *(_QWORD *)(a2 + 56);
  *(LARGE_INTEGER *)(v10 + 112) = PerformanceCounter;
  *(_DWORD *)(v10 + 124) = a3;
  *(_DWORD *)(v10 + 140) = *(_DWORD *)(a2 + 48);
  v13 = *(_QWORD *)(a2 + 96);
  if ( v13 )
  {
    v14 = *(_BYTE *)(v10 + 144) ^ (*(_BYTE *)(v10 + 144) ^ (4 * *(_BYTE *)(v13 + 33))) & 4;
    *(_BYTE *)(v10 + 144) = v14;
    v15 = *(_QWORD *)(a2 + 96);
    if ( *(_BYTE *)(v15 + 33) && *(int *)(v15 + 36) <= 0 )
      v7 = 8;
    v16 = v7 | v14 & 0xF7;
  }
  else
  {
    *(_BYTE *)(v10 + 144) &= ~4u;
    v16 = *(_BYTE *)(v10 + 144) & 0xF7;
  }
  *(_BYTE *)(v10 + 144) = v16;
  ++*(_DWORD *)(a1 + 76);
  result = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
