/*
 * XREFs of PopInitializeWorkItem @ 0x14075ADE0
 * Callers:
 *     PopInitializeIRTimer @ 0x14018B924 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x140A06E0C (PopInitializePowerButtonHold.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A08CDC (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopInitializeWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
