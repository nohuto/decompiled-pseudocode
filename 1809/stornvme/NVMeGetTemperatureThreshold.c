/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C001586C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000FC1C (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 180) = -1;
    *(_BYTE *)(a1 + 811) = 0;
    memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
    v4 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 864) = v4;
    *(_DWORD *)(a1 + 800) = 1;
    *(_BYTE *)(v4 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 896) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 808);
    LOBYTE(v5) = a2;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v5, 10000LL);
  }
  return result;
}
