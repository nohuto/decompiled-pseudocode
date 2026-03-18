/*
 * XREFs of strcpy_s @ 0x1401A6750
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140761C88 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x1408D4700 (RtlIncrementCorrelationVector.c)
 *     HdlspGetLine @ 0x14098C594 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x14098D288 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase1 @ 0x1409FEEE0 (PspInitPhase1.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = a1 - Src;
    do
    {
      v6 = *Src;
      Src[v5] = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( !SizeInBytes )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
