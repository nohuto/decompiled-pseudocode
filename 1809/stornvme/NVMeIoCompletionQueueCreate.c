/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C00159B0
 * Callers:
 *     IoQueuesCreation @ 0x1C000C350 (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoCompletionQueueCreate(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // r8

  v4 = a2;
  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  v6 = 344 * v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v7 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v7;
  *(_DWORD *)(a1 + 800) = 1;
  *(_BYTE *)(v7 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
  v8 = *(_QWORD *)(a1 + 760);
  v9 = *(_QWORD *)(a1 + 896) + 4096LL;
  *(_BYTE *)v9 = 5;
  *(_QWORD *)(v9 + 24) = *(_QWORD *)(344 * v4 + *(_QWORD *)(a1 + 760) - 336);
  *(_WORD *)(v9 + 40) = v4;
  *(_WORD *)(v9 + 42) = *(_WORD *)(a1 + 262) - 1;
  v10 = *(_DWORD *)(v9 + 44) | 1;
  *(_DWORD *)(v9 + 44) = v10;
  if ( *(_BYTE *)(a1 + 16) || *(_BYTE *)(v6 + v8 - 144) )
    v11 = v10 & 0xFFFFFFFD;
  else
    v11 = v10 | 2;
  *(_DWORD *)(v9 + 44) = v11;
  *(_WORD *)(v9 + 46) = *(_WORD *)(v6 + *(_QWORD *)(a1 + 760) - 168);
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v12) = a3;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v12, 10000LL);
  return *(_BYTE *)(a1 + 811) == 1;
}
