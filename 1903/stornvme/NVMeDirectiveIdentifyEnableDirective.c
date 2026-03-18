/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x1C0014630
 * Callers:
 *     NVMeInitStreams @ 0x1C000BDF0 (NVMeInitStreams.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v2 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v2;
  *(_DWORD *)(a1 + 808) = 1;
  v3 = *(_BYTE *)(v2 + 4253);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4253) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 816);
  ProcessCommand(a1, a1 + 816);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 819) != 1 ? 0xC1000001 : 0;
}
