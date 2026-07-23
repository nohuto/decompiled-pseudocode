/*
 * XREFs of _ungetwc_nolock @ 0x14019F3A0
 * Callers:
 *     ReadString_0 @ 0x14019E420 (ReadString_0.c)
 *     _winput_s @ 0x14019E8D8 (_winput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Ch, FILE *File)
{
  int flag; // r9d
  char *ptr; // rax
  char *v5; // r10
  char *v6; // rax
  int v7; // eax

  if ( !File )
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  if ( Ch == 0xFFFF )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  ptr = File->_ptr;
  v5 = File->_base + 2;
  if ( File->_ptr < v5 )
  {
    if ( File->_cnt || File->_bufsiz < 2u )
      return -1;
    File->_ptr = v5;
    ptr = v5;
  }
  v6 = ptr - 2;
  File->_ptr = v6;
  if ( (flag & 0x40) != 0 )
  {
    if ( *(_WORD *)v6 != Ch )
    {
      File->_ptr = v6 + 2;
      return -1;
    }
  }
  else
  {
    *(_WORD *)v6 = Ch;
  }
  v7 = File->_flag;
  File->_cnt += 2;
  File->_flag = v7 & 0xFFFFFFEE | 1;
  return Ch;
}
