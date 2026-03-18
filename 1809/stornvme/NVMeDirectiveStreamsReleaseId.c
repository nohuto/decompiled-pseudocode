/*
 * XREFs of NVMeDirectiveStreamsReleaseId @ 0x1C0015290
 * Callers:
 *     IoctlStorageStreamsReleaseId @ 0x1C0011838 (IoctlStorageStreamsReleaseId.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReleaseId(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // r8

  *(_BYTE *)(a1 + 811) = 0;
  memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v6 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v6;
  *(_DWORD *)(a1 + 800) = 1;
  v7 = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 25;
  *(_BYTE *)(v6 + 4253) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 257;
  *(_QWORD *)(v6 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v6 + 4142) = a3;
  SrbAssignQueueId(a1, a1 + 808);
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v8) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v8, 10000LL);
  return *(_BYTE *)(a1 + 811) != 1 ? 0xC1000001 : 0;
}
