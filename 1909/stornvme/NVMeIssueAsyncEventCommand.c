/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C0015B6C
 * Callers:
 *     NVMeStartAsyncEventCommands @ 0x1C000DA18 (NVMeStartAsyncEventCommands.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00150A0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005980 (memset.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  *(_BYTE *)(a2 + 11) = 0;
  memset(*(void **)(a2 + 96), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = v4;
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4244LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4224LL) = NVMeAsyncEventRequestCompletion;
  return ProcessCommand(a1, a2 + 8);
}
