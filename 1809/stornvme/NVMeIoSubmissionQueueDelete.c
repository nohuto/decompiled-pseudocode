/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x1C0015F44
 * Callers:
 *     IoQueuesDeletion @ 0x1C000C3F0 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C001057C (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00109F8 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8

  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v4;
  *(_DWORD *)(a1 + 800) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 896);
  *(_WORD *)(v5 + 4136) = a2;
  *(_BYTE *)(v5 + 4096) = 0;
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v6) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v6, 10000LL);
  return *(_BYTE *)(a1 + 811) == 1;
}
