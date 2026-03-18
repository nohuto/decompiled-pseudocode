/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C001547C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000DE48 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 188) = -1;
    *(_BYTE *)(a1 + 819) = 0;
    memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 904);
    *(_QWORD *)(a1 + 872) = v2;
    *(_DWORD *)(a1 + 808) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 904) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 816);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
