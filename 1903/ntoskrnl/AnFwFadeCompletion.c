/*
 * XREFs of AnFwFadeCompletion @ 0x14098F178
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140993730 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140993AE0 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_14042C030 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140509420, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140429E48 )
    {
      BgpGxRectangleDestroy(qword_140429E48);
      qword_140429E48 = 0LL;
    }
    if ( qword_140429E70 )
    {
      BgpGxRectangleDestroy(qword_140429E70);
      qword_140429E70 = 0LL;
    }
    if ( qword_140429E78 )
    {
      BgpGxRectangleDestroy(qword_140429E78);
      qword_140429E78 = 0LL;
    }
    if ( qword_140429E80 )
    {
      BgpGxRectangleDestroy(qword_140429E80);
      qword_140429E80 = 0LL;
    }
    if ( qword_140429EA8 )
    {
      BgpGxRectangleDestroy(qword_140429EA8);
      qword_140429EA8 = 0LL;
    }
    if ( qword_140429EB0 )
    {
      BgpGxRectangleDestroy(qword_140429EB0);
      qword_140429EB0 = 0LL;
    }
  }
}
