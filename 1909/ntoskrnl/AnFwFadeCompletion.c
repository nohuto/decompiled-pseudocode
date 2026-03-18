/*
 * XREFs of AnFwFadeCompletion @ 0x14098F178
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140993730 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140993AE0 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_14042C010 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140509160, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140429E58 )
    {
      BgpGxRectangleDestroy(qword_140429E58);
      qword_140429E58 = 0LL;
    }
    if ( qword_140429E80 )
    {
      BgpGxRectangleDestroy(qword_140429E80);
      qword_140429E80 = 0LL;
    }
    if ( qword_140429E88 )
    {
      BgpGxRectangleDestroy(qword_140429E88);
      qword_140429E88 = 0LL;
    }
    if ( qword_140429E90 )
    {
      BgpGxRectangleDestroy(qword_140429E90);
      qword_140429E90 = 0LL;
    }
    if ( qword_140429EB8 )
    {
      BgpGxRectangleDestroy(qword_140429EB8);
      qword_140429EB8 = 0LL;
    }
    if ( qword_140429EC0 )
    {
      BgpGxRectangleDestroy(qword_140429EC0);
      qword_140429EC0 = 0LL;
    }
  }
}
