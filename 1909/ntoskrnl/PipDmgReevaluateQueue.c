/*
 * XREFs of PipDmgReevaluateQueue @ 0x1408737E0
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407329F8 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgInitPhaseTwo @ 0x140756674 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140873714 (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x1408743D4 (PiCslIsConsoleLocked.c)
 */

void PipDmgReevaluateQueue()
{
  if ( PipDmaGuardPolicy == 1 )
  {
LABEL_6:
    PipDmgFlushQueueAndRestartDevices();
    return;
  }
  if ( PipDmaGuardPolicy == 2 )
  {
    if ( (unsigned __int8)PiCslIsConsoleLocked() )
      return;
    goto LABEL_6;
  }
  if ( PipDmaGuardPolicy != 3 )
    __fastfail(5u);
}
