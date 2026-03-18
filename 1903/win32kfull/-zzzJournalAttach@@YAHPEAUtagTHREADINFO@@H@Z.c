/*
 * XREFs of ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E802C
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00B32E4 (zzzSetWindowsHookEx.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B41A4 (zzzUnhookWindowsHookEx.c)
 *     zzzRegisterSystemThread @ 0x1C015DDE0 (zzzRegisterSystemThread.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 */

__int64 __fastcall zzzJournalAttach(struct tagTHREADINFO *a1, int a2)
{
  __int64 result; // rax
  _QWORD **v5; // rcx
  _QWORD *i; // rdx

  if ( a2 )
  {
    result = AllocQueue(a1, 0LL);
    if ( !result )
      return result;
    v5 = (_QWORD **)(*((_QWORD *)a1 + 56) + 168LL);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 32) & 0x81) == 0 )
      {
        *(i - 11) = result;
        ++*(_DWORD *)(result + 400);
      }
    }
  }
  zzzReattachThreads(a2 != 0, 0LL, 0LL);
  return 1LL;
}
