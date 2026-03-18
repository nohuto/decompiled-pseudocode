/*
 * XREFs of PipKsrCallback @ 0x140876240
 * Callers:
 *     <none>
 * Callees:
 *     PipKsrNotifyDrivers @ 0x140876298 (PipKsrNotifyDrivers.c)
 */

void __fastcall PipKsrCallback(PVOID CallbackContext, PVOID Argument1, int *Argument2)
{
  if ( Argument1 )
  {
    if ( Argument1 == (PVOID)1 )
    {
      if ( PnpKsrPrepared )
      {
        PnpKsrPrepared = 0;
        PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_CANCEL);
      }
    }
  }
  else if ( *Argument2 >= 0 )
  {
    *Argument2 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_PREPARE);
    PnpKsrPrepared = 1;
  }
}
