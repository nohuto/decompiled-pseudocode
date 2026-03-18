/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C0017228
 * Callers:
 *     NVMePowerInitialize @ 0x1C000EBF4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
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
    LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ a2) & 1;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_DWORD *)(v5 + 4140) ^= v4;
    *(_BYTE *)(v5 + 4136) = 12;
    ProcessCommand(a1, a1 + 808);
    LOBYTE(v6) = 1;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v6, 10000LL);
  }
  return result;
}
