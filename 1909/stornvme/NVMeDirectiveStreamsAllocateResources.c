/*
 * XREFs of NVMeDirectiveStreamsAllocateResources @ 0x1C00147FC
 * Callers:
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsAllocateResources(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rcx
  char v7; // al

  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v6;
  *(_DWORD *)(a1 + 808) = 1;
  v7 = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 26;
  *(_BYTE *)(v6 + 4253) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 259;
  *(_QWORD *)(v6 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4144) = a3;
  SrbAssignQueueId(a1, a1 + 816);
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 819) != 1 ? 0xC1000001 : 0;
}
