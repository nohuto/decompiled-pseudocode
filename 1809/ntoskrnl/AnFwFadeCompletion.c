/*
 * XREFs of AnFwFadeCompletion @ 0x140950140
 * Callers:
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140954610 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409549C0 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x140950754 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140406AD0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_1404DCE90, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_1404049F8 )
    {
      BgpGxRectangleDestroy(qword_1404049F8);
      qword_1404049F8 = 0LL;
    }
    if ( qword_140404A20 )
    {
      BgpGxRectangleDestroy(qword_140404A20);
      qword_140404A20 = 0LL;
    }
    if ( qword_140404A28 )
    {
      BgpGxRectangleDestroy(qword_140404A28);
      qword_140404A28 = 0LL;
    }
    if ( qword_140404A30 )
    {
      BgpGxRectangleDestroy(qword_140404A30);
      qword_140404A30 = 0LL;
    }
    if ( qword_140404A58 )
    {
      BgpGxRectangleDestroy(qword_140404A58);
      qword_140404A58 = 0LL;
    }
    if ( qword_140404A60 )
    {
      BgpGxRectangleDestroy(qword_140404A60);
      qword_140404A60 = 0LL;
    }
  }
}
