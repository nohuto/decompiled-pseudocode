/*
 * XREFs of ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C0068548
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00682C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool NeedsUpdateKeyboardLEDs(void)
{
  char v0; // cl

  v0 = 0;
  if ( gpKeyboardSensor )
    return (gdwUpdateKeyboard & 7) != 0;
  return v0;
}
