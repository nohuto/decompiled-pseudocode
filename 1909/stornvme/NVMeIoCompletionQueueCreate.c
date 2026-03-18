/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C0015510
 * Callers:
 *     IoQueuesCreation @ 0x1C000965C (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoCompletionQueueCreate(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // eax

  v2 = a2;
  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  v4 = 344 * v2;
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v5 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v5;
  *(_DWORD *)(a1 + 808) = 1;
  *(_BYTE *)(v5 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
  v6 = *(_QWORD *)(a1 + 768);
  v7 = *(_QWORD *)(a1 + 904) + 4096LL;
  *(_BYTE *)v7 = 5;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(344 * v2 + *(_QWORD *)(a1 + 768) - 336);
  *(_WORD *)(v7 + 40) = v2;
  *(_WORD *)(v7 + 42) = *(_WORD *)(a1 + 270) - 1;
  v8 = *(_DWORD *)(v7 + 44) | 1;
  *(_DWORD *)(v7 + 44) = v8;
  if ( *(_BYTE *)(a1 + 16) || *(_BYTE *)(v4 + v6 - 144) )
    v9 = v8 & 0xFFFFFFFD;
  else
    v9 = v8 | 2;
  *(_DWORD *)(v7 + 44) = v9;
  *(_WORD *)(v7 + 46) = *(_WORD *)(v4 + *(_QWORD *)(a1 + 768) - 168);
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 819) == 1;
}
