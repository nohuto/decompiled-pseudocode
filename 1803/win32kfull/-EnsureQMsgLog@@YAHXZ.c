/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01A1C88
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0111560 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01A2080 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 EnsureQMsgLog(void)
{
  if ( !qword_1C0322808 )
  {
    if ( gMsgQLog )
    {
      qword_1C0322808 = Win32AllocPool(688LL * (unsigned int)dword_1C03227F8, 1819374421LL);
      if ( !qword_1C0322808 )
        memset(&gMsgQLog, 0, 0x28uLL);
    }
  }
  return (unsigned int)gMsgQLog;
}
