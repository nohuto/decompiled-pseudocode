/*
 * XREFs of PipDmgReevaluateQueue @ 0x140839484
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1406ED62C (PiDmaGuardProcessPostRemove.c)
 *     PipDmgInitPhaseTwo @ 0x14073B170 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408393C4 (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x14083A194 (PiCslIsConsoleLocked.c)
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
