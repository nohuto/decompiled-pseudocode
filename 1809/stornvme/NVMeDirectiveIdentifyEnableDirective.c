/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x1C0014D50
 * Callers:
 *     NVMeInitStreams @ 0x1C000E75C (NVMeInitStreams.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // r8

  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v2 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v2;
  *(_DWORD *)(a1 + 800) = 1;
  v3 = *(_BYTE *)(v2 + 4253);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4253) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 808);
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v4) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v4, 10000LL);
  return *(_BYTE *)(a1 + 811) != 1 ? 0xC1000001 : 0;
}
