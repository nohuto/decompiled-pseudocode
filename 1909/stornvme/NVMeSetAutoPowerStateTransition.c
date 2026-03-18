/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C0017FB8
 * Callers:
 *     NVMePowerInitialize @ 0x1C000CD30 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
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
    LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ a2) & 1;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_DWORD *)(v5 + 4140) ^= v4;
    *(_BYTE *)(v5 + 4136) = 12;
    ProcessCommand(a1, a1 + 816);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
