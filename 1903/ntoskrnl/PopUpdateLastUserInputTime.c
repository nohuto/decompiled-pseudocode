/*
 * XREFs of PopUpdateLastUserInputTime @ 0x14073A824
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x14073A74C (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x1408B33F0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140747BA8 (PopPulseSystemIdleEvent.c)
 */

_DWORD *PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  _DWORD *result; // rax

  v0 = 0LL;
  if ( dword_140428210 )
  {
    v0 = 1LL;
    result = &unk_14042820C;
  }
  else
  {
    result = &unk_140428208;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)PopPulseSystemIdleEvent(v0);
  }
  return result;
}
