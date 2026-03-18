/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C0014D34
 * Callers:
 *     NVMePowerInitialize @ 0x1C000CD30 (NVMePowerInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 819) = 0;
    memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 904);
    *(_QWORD *)(a1 + 872) = v2;
    *(_DWORD *)(a1 + 808) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
    return NVMeAllocateDmaBuffer(a1, 0x100u);
  }
  return result;
}
