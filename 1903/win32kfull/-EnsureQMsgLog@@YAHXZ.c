/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01D67A8
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C00E0B2C (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01D6C58 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 EnsureQMsgLog(void)
{
  if ( !*(__int64 *)((char *)&qword_1C0327DD4 + 4) )
  {
    if ( (_DWORD)gMsgQLog )
    {
      *(__int64 *)((char *)&qword_1C0327DD4 + 4) = Win32AllocPool(696LL * (unsigned int)dword_1C0327DC8, 1819374421LL);
      if ( !*(__int64 *)((char *)&qword_1C0327DD4 + 4) )
        memset(&gMsgQLog, 0, 0x28uLL);
    }
  }
  return (unsigned int)gMsgQLog;
}
