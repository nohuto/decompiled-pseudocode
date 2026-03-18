/*
 * XREFs of _UnregisterHotKey @ 0x1C00B328C
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C00B3210 (NtUserUnregisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F1C80 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B3310 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall UnregisterHotKey(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    qword_1C0326B38 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL, v2);
    return 0LL;
  }
}
