/*
 * XREFs of AnFwFadeCompletion @ 0x14094F140
 * Callers:
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140950F24 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140953610 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409539C0 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x14094F21C (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x14094F754 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140405AD0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_1404DBDD0, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_1404039F8 )
    {
      BgpGxRectangleDestroy(qword_1404039F8);
      qword_1404039F8 = 0LL;
    }
    if ( qword_140403A20 )
    {
      BgpGxRectangleDestroy(qword_140403A20);
      qword_140403A20 = 0LL;
    }
    if ( qword_140403A28 )
    {
      BgpGxRectangleDestroy(qword_140403A28);
      qword_140403A28 = 0LL;
    }
    if ( qword_140403A30 )
    {
      BgpGxRectangleDestroy(qword_140403A30);
      qword_140403A30 = 0LL;
    }
    if ( qword_140403A58 )
    {
      BgpGxRectangleDestroy(qword_140403A58);
      qword_140403A58 = 0LL;
    }
    if ( qword_140403A60 )
    {
      BgpGxRectangleDestroy(qword_140403A60);
      qword_140403A60 = 0LL;
    }
  }
}
