/*
 * XREFs of HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C0074AD0
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0071660 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C00746D4 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBFDO_UnregisterSleepstudyBlockerReasons(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[327] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[327] = 0LL;
  }
  if ( a1[328] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[328] = 0LL;
  }
  if ( a1[329] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[329] = 0LL;
  }
  return result;
}
