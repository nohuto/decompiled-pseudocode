/*
 * XREFs of PopInitializeWorkItem @ 0x14072AA34
 * Callers:
 *     PopInitializeIRTimer @ 0x14017DDE4 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x1409B4CBC (PopInitializePowerButtonHold.c)
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
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
