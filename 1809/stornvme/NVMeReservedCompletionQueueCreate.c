/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x1C0016A24
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C001057C (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C0010408 (GetFreeReservedQueueIndex.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // r15
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v10; // r14
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int16 v16; // cx

  v3 = 0;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(_QWORD *)(a3 + 64);
  else
    v6 = *(_QWORD *)(a3 + 24);
  v7 = *(unsigned int *)(v6 + 36);
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  if ( FreeReservedQueueIndex == 0xFFFF )
    return 5LL;
  v10 = 32LL * FreeReservedQueueIndex;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 16) = a2;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 784) + 8) = *(_DWORD *)(a1 + 160) * (2 * (unsigned int)a2 + 1)
                                               + *(_QWORD *)(a1 + 136)
                                               + 4096LL;
  v11 = *(_QWORD *)(v6 + 44);
  if ( v11 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 784)) = v11;
  }
  else
  {
    v16 = *(_WORD *)(v6 + 56);
    if ( v16 && (*(_DWORD *)(a1 + 124) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, 16 * (unsigned int)v16);
      return 8LL;
    }
  }
  *(_DWORD *)(v10 + *(_QWORD *)(a1 + 784) + 20) = *(_DWORD *)(v6 + 52);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 18) = *(_WORD *)(v6 + 56);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 24) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 24)) & 1;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 24) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 24)) & 2;
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
  *(_BYTE *)v14 = 5;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 784));
  *(_WORD *)(v14 + 40) = a2;
  *(_WORD *)(v14 + 42) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 18) - 1;
  *(_DWORD *)(v14 + 44) ^= (*(_DWORD *)(v14 + 44) ^ (*(unsigned __int16 *)(v10 + *(_QWORD *)(a1 + 784) + 24) >> 1)) & 1;
  *(_DWORD *)(v14 + 44) ^= ((unsigned __int8)*(_DWORD *)(v14 + 44) ^ (unsigned __int8)(2
                                                                                     * *(_WORD *)(v10
                                                                                                + *(_QWORD *)(a1 + 784)
                                                                                                + 24))) & 2;
  *(_WORD *)(v14 + 46) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 20);
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v15) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v15, 10000LL);
  if ( *(_BYTE *)(a1 + 811) == 1 )
  {
    ++*(_WORD *)(a1 + 770);
    memset((void *)(v6 + v7 + 28), 0, 0x48uLL);
    *(_QWORD *)(v6 + v7 + 36) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 784));
    *(_QWORD *)(v6 + v7 + 44) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 784) + 8);
    *(_WORD *)(v6 + v7 + 52) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 16);
    *(_WORD *)(v6 + v7 + 54) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 18);
    *(_WORD *)(v6 + v7 + 60) ^= (*(_WORD *)(v6 + v7 + 60) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 24)) & 1;
    *(_WORD *)(v6 + v7 + 60) ^= (*(_WORD *)(v6 + v7 + 60) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 784) + 24)) & 2;
    *(_DWORD *)(v6 + v7 + 56) = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 784) + 20);
  }
  else
  {
    return 10;
  }
  return v3;
}
