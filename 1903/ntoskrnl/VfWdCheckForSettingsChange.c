/*
 * XREFs of VfWdCheckForSettingsChange @ 0x14097DE90
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x14097D918 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x14097DFDC (VfWdSetCancelTimeout.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 */

__int64 __fastcall VfWdCheckForSettingsChange(char a1)
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((__int64)&ViWdIrpTimerDpc, 1);
    result = (unsigned int)_InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
