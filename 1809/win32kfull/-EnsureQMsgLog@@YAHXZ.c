/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01C34D4
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C01346FC (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01C3964 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 EnsureQMsgLog(void)
{
  if ( !qword_1C0312EA8 )
  {
    if ( gMsgQLog )
    {
      qword_1C0312EA8 = Win32AllocPool(696LL * (unsigned int)dword_1C0312E98, 1819374421LL);
      if ( !qword_1C0312EA8 )
        memset(&gMsgQLog, 0, 0x28uLL);
    }
  }
  return (unsigned int)gMsgQLog;
}
