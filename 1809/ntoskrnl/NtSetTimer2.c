/*
 * XREFs of NtSetTimer2 @ 0x1400FC010
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400FC060 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( !DueTime )
    return -1073741584;
  if ( Period )
    return -1073741822;
  return ExpSetTimer2(TimerHandle);
}
