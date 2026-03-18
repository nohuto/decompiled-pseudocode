/*
 * XREFs of PopInitializeDirectedDrips @ 0x140A072EC
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A09208 (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A0937C (PopDirectedDripsInitializePhase3.c)
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
