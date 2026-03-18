/*
 * XREFs of PopUpdateLastUserInputTime @ 0x1407305AC
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x1408B2C90 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140749AA8 (PopPulseSystemIdleEvent.c)
 */

_DWORD *PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  _DWORD *result; // rax

  v0 = 0LL;
  if ( dword_140428220 )
  {
    v0 = 1LL;
    result = &unk_14042821C;
  }
  else
  {
    result = &unk_140428218;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)PopPulseSystemIdleEvent(v0);
  }
  return result;
}
