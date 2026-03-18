/*
 * XREFs of NVMeSetPowerState @ 0x1C001883C
 * Callers:
 *     NVMePowerSetFState @ 0x1C000D504 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000D62C (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     NVMeGetPowerState @ 0x1C000BB4C (NVMeGetPowerState.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

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
  v5 = *(_QWORD *)(a1 + 904);
  LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v5 + 4096) = 9;
  *(_DWORD *)(v5 + 4140) ^= v4;
  *(_BYTE *)(v5 + 4136) = 2;
  ProcessCommand(a1, a1 + 816);
  NVMeGetPowerState(a1, *(_BYTE *)(a1 + 1580));
  NVMeGetPowerState(v6, v2);
  return WaitForCommandCompleteWithCustomTimeout(a1);
}
