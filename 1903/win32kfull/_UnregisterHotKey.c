/*
 * XREFs of _UnregisterHotKey @ 0x1C00EF11C
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0010090 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserUnregisterHotKey @ 0x1C00EF090 (NtUserUnregisterHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00EF1A0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall UnregisterHotKey(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    qword_1C032C210 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL, v2, v3, v4);
    return 0LL;
  }
}
