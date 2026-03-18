/*
 * XREFs of PipDmgReevaluateQueue @ 0x1408740E0
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140730798 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgInitPhaseTwo @ 0x140755BE4 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140874014 (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x140874CD4 (PiCslIsConsoleLocked.c)
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
