/*
 * XREFs of PopInitializeDirectedDrips @ 0x140A06DD0
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F1840 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A08CDC (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A08E50 (PopDirectedDripsInitializePhase3.c)
 */

void __fastcall PopInitializeDirectedDrips(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 && (int)PopDirectedDripsInitializePhase3() >= 0 )
      PopQueueDirectedDripsWork((struct _KEVENT *)PopDirectedDripsState, 6uLL);
  }
  else
  {
    PopDirectedDripsInitializePhase0();
  }
}
