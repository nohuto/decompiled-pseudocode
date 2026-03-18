/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C00154FC
 * Callers:
 *     NVMePowerInitialize @ 0x1C000EBF4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 811) = 0;
    memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
    v3 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 864) = v3;
    *(_DWORD *)(a1 + 800) = 1;
    *(_BYTE *)(v3 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
    return NVMeAllocateDmaBuffer(a1, 0x100u);
  }
  return result;
}
