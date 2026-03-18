/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C0015A0C
 * Callers:
 *     IoQueuesCreation @ 0x1C000980C (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // r8

  v2 = a2;
  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v4;
  *(_DWORD *)(a1 + 808) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 904) + 4096LL;
  *(_BYTE *)v5 = 1;
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(136 * v2 + *(_QWORD *)(a1 + 760) - 128);
  *(_WORD *)(v5 + 40) = v2;
  *(_WORD *)(v5 + 42) = *(_WORD *)(a1 + 270) - 1;
  *(_DWORD *)(v5 + 44) = *(_DWORD *)(v5 + 44) & 0xFFFFFFF8 | 5;
  *(_WORD *)(v5 + 46) = *(_WORD *)(136 * v2 + *(_QWORD *)(a1 + 760) - 86);
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 819) == 1;
}
