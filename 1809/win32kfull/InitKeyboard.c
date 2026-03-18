/*
 * XREFs of InitKeyboard @ 0x1C01342F8
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C013436C (-GetBiosNumLockStatus@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitKeyboard()
{
  __int64 result; // rax

  result = gProtocolType;
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    result = gfsSASModifiersDown;
    gfsModifiers = 0;
    gfsModOnlyCandidate = 0;
    gfsRawModifiersForHotKey = 0;
    gfsSASModifiersDown = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
  return result;
}
