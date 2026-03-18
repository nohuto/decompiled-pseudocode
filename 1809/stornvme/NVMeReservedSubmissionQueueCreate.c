/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x1C0016DA0
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C001057C (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedSubmissionQueueCreate(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v6; // r14
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  __int64 v18; // r8

  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = v8 + *(unsigned int *)(v8 + 36);
  v10 = 32LL * a5;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 16) = a3;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 776) + 8) = 2 * (unsigned int)a3 * *(_DWORD *)(a1 + 160)
                                               + *(_QWORD *)(a1 + 136)
                                               + 4096LL;
  v11 = *(_QWORD *)(v8 + 16LL * a6 + 68);
  if ( v11 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 776)) = v11;
  }
  else
  {
    v16 = *(_WORD *)(v8 + 16LL * a6 + 78);
    if ( v16 && (*(_DWORD *)(a1 + 124) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, v16 << 6);
      return 8LL;
    }
  }
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 18) = *(_WORD *)(v8 + 16LL * a6 + 78);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 22) ^= (*(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 22) ^ *(_WORD *)(v8 + 16LL * a6 + 80)) & 1;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 20) = a4;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 24) = *(unsigned __int8 *)(v8 + 16 * (a6 + 3LL) + 28);
  v12 = *(void **)(a1 + 896);
  *(_BYTE *)(a1 + 811) = 0;
  memset(v12, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v13 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v13;
  *(_DWORD *)(a1 + 800) = 1;
  *(_BYTE *)(v13 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
  v14 = *(_QWORD *)(a1 + 896) + 4096LL;
  *(_BYTE *)v14 = 1;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 776));
  *(_WORD *)(v14 + 40) = a3;
  *(_WORD *)(v14 + 42) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 18) - 1;
  *(_DWORD *)(v14 + 44) ^= (*(_DWORD *)(v14 + 44) ^ *(unsigned __int16 *)(v10 + *(_QWORD *)(a1 + 776) + 22)) & 1;
  *(_DWORD *)(v14 + 44) ^= ((unsigned __int8)*(_DWORD *)(v14 + 44) ^ (unsigned __int8)(2
                                                                                     * *(_WORD *)(v10
                                                                                                + *(_QWORD *)(a1 + 776)
                                                                                                + 24))) & 6;
  *(_WORD *)(v14 + 46) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 20);
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v15) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v15, 10000LL);
  if ( *(_BYTE *)(a1 + 811) == 1 )
  {
    ++*(_WORD *)(a1 + 768);
    v18 = 32LL * a6;
    *(_QWORD *)(v18 + v9 + 68) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 776));
    *(_QWORD *)(v18 + v9 + 76) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 776) + 8);
    *(_WORD *)(v18 + v9 + 84) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 16);
    *(_WORD *)(v18 + v9 + 86) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 18);
    *(_WORD *)(v18 + v9 + 90) ^= (*(_WORD *)(v18 + v9 + 90) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 22)) & 1;
    *(_WORD *)(v18 + v9 + 88) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 20);
    *(_WORD *)(32 * (a6 + 2LL) + v9 + 28) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 776) + 24);
    ++*(_WORD *)(v9 + 62);
  }
  else
  {
    return 9;
  }
  return v6;
}
