/*
 * XREFs of ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C004AA00
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C004A890 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool NeedsUpdateKeyboardLEDs(void)
{
  char v0; // cl

  v0 = 0;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    return (gdwUpdateKeyboard & 7) != 0;
  return v0;
}
