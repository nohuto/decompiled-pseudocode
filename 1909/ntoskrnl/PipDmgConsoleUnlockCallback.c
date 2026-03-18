/*
 * XREFs of PipDmgConsoleUnlockCallback @ 0x140873660
 * Callers:
 *     <none>
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140873714 (PipDmgFlushQueueAndRestartDevices.c)
 */

__int64 PipDmgConsoleUnlockCallback()
{
  __int64 result; // rax

  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      return PipDmgFlushQueueAndRestartDevices();
    }
    else if ( PipDmaGuardPolicy != 3 )
    {
      __fastfail(5u);
    }
  }
  return result;
}
