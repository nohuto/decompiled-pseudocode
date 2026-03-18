/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C0018150
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000B448 (NVMeControllerPowerDown.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000BA58 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000BB7C (NVMeInitHostMemoryBuffer.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     memmove @ 0x1C00050C0 (memmove.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  int v6; // edi
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = a3;
  v8 = a2;
  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v10 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v10;
  *(_DWORD *)(a1 + 808) = 1;
  *(_BYTE *)(v10 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 816);
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 904) + 4140LL) ^ v8) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 904) + 4140LL) ^ (2 * v6)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 4144LL) = a4
                                              / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1632), Src, (unsigned int)Size);
  v11 = HIDWORD(*(_QWORD *)(a1 + 1640));
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 4148LL) = *(_DWORD *)(a1 + 1640) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 4152LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 819) != 1 ? 0xC1000001 : 0;
}
