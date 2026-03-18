/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C0017310
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000DD5C (NVMeControllerPowerDown.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000E3C4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000E4E8 (NVMeInitHostMemoryBuffer.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
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
  __int64 v11; // r8
  __int64 v12; // r8

  v6 = a3;
  v8 = a2;
  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v10 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v10;
  *(_DWORD *)(a1 + 800) = 1;
  *(_BYTE *)(v10 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 808);
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 896) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 896) + 4140LL) ^ v8) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 896) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 896) + 4140LL) ^ (2 * v6)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 896) + 4144LL) = a4
                                              / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1624), Src, (unsigned int)Size);
  v11 = HIDWORD(*(_QWORD *)(a1 + 1632));
  *(_DWORD *)(*(_QWORD *)(a1 + 896) + 4148LL) = *(_QWORD *)(a1 + 1632) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 896) + 4152LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 896) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v12) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v12, 10000LL);
  return *(_BYTE *)(a1 + 811) != 1 ? 0xC1000001 : 0;
}
