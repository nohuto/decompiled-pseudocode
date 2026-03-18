/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C0015E0C
 * Callers:
 *     IoQueuesCreation @ 0x1C000C350 (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8

  v4 = a2;
  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v6;
  *(_DWORD *)(a1 + 800) = 1;
  *(_BYTE *)(v6 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
  v7 = *(_QWORD *)(a1 + 896) + 4096LL;
  *(_BYTE *)v7 = 1;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(136 * v4 + *(_QWORD *)(a1 + 752) - 128);
  *(_WORD *)(v7 + 40) = v4;
  *(_WORD *)(v7 + 42) = *(_WORD *)(a1 + 262) - 1;
  *(_DWORD *)(v7 + 44) = *(_DWORD *)(v7 + 44) & 0xFFFFFFF8 | 5;
  *(_WORD *)(v7 + 46) = *(_WORD *)(136 * v4 + *(_QWORD *)(a1 + 752) - 86);
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v8) = a3;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v8, 10000LL);
  return *(_BYTE *)(a1 + 811) == 1;
}
