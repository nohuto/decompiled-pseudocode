/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x1C0015B44
 * Callers:
 *     IoQueuesDeletion @ 0x1C00098AC (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C000EFF8 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C000F474 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v4;
  *(_DWORD *)(a1 + 808) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 904);
  *(_WORD *)(v5 + 4136) = a2;
  *(_BYTE *)(v5 + 4096) = 0;
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 819) == 1;
}
