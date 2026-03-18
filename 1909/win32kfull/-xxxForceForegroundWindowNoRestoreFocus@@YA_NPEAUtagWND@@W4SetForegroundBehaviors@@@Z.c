/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0
 * Callers:
 *     NtUserNavigateFocus @ 0x1C00096B0 (NtUserNavigateFocus.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C000B0A0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D6298 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023E62C (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, int a2)
{
  __int64 v4; // rbx

  v4 = 0LL;
  if ( !(unsigned __int8)IsInputThread() && gptiRit != gptiCurrent )
    v4 = gptiCurrent;
  return (unsigned int)xxxSetForegroundWindow2(a1, v4, a2 | 0x40u) != 0;
}
