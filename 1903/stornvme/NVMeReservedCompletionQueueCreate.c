/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x1C0017868
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C000EFF8 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C000EE54 (GetFreeReservedQueueIndex.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v10; // r14
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int16 v15; // cx

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
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 16) = a2;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 792) + 8) = *(_DWORD *)(a1 + 168) * (2 * (unsigned int)a2 + 1)
                                               + *(_QWORD *)(a1 + 144)
                                               + 4096LL;
  v11 = *(_QWORD *)(v6 + 44);
  if ( v11 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 792)) = v11;
  }
  else
  {
    v15 = *(_WORD *)(v6 + 56);
    if ( v15 && (*(_DWORD *)(a1 + 124) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, 16 * (unsigned int)v15);
      return 8LL;
    }
  }
  *(_DWORD *)(v10 + *(_QWORD *)(a1 + 792) + 20) = *(_DWORD *)(v6 + 52);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 18) = *(_WORD *)(v6 + 56);
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 24) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 24)) & 1;
  *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 24) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 24)) & 2;
  v12 = *(void **)(a1 + 904);
  *(_BYTE *)(a1 + 819) = 0;
  memset(v12, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v13 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v13;
  *(_DWORD *)(a1 + 808) = 1;
  *(_BYTE *)(v13 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
  v14 = *(_QWORD *)(a1 + 904) + 4096LL;
  *(_BYTE *)v14 = 5;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 792));
  *(_WORD *)(v14 + 40) = a2;
  *(_WORD *)(v14 + 42) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 18) - 1;
  *(_DWORD *)(v14 + 44) ^= (*(_DWORD *)(v14 + 44) ^ (*(unsigned __int16 *)(v10 + *(_QWORD *)(a1 + 792) + 24) >> 1)) & 1;
  *(_DWORD *)(v14 + 44) ^= ((unsigned __int8)*(_DWORD *)(v14 + 44) ^ (unsigned __int8)(2
                                                                                     * *(_WORD *)(v10
                                                                                                + *(_QWORD *)(a1 + 792)
                                                                                                + 24))) & 2;
  *(_WORD *)(v14 + 46) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 20);
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 819) == 1 )
  {
    ++*(_WORD *)(a1 + 778);
    memset((void *)(v7 + v6 + 28), 0, 0x48uLL);
    *(_QWORD *)(v7 + v6 + 36) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 792));
    *(_QWORD *)(v7 + v6 + 44) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 792) + 8);
    *(_WORD *)(v7 + v6 + 52) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 16);
    *(_WORD *)(v7 + v6 + 54) = *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 18);
    *(_WORD *)(v7 + v6 + 60) ^= (*(_WORD *)(v7 + v6 + 60) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 24)) & 1;
    *(_WORD *)(v7 + v6 + 60) ^= (*(_WORD *)(v7 + v6 + 60) ^ *(_WORD *)(v10 + *(_QWORD *)(a1 + 792) + 24)) & 2;
    *(_DWORD *)(v7 + v6 + 56) = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 792) + 20);
  }
  else
  {
    return 10;
  }
  return v3;
}
