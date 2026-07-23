/*
 * XREFs of _ungetc_nolock @ 0x14019F2BC
 * Callers:
 *     ReadString @ 0x14019D6DC (ReadString.c)
 *     _input_s @ 0x14019DA48 (_input_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 */

int __cdecl ungetc_nolock(int Ch, FILE *File)
{
  int flag; // r8d
  char *base; // rax
  char *ptr; // r9
  char *v5; // r11
  int result; // eax

  if ( !File )
    goto LABEL_14;
  if ( Ch == -1 )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = File->_base;
  if ( !base )
  {
LABEL_14:
    xHalTimerWatchdogStop();
    return -1;
  }
  ptr = File->_ptr;
  if ( File->_ptr != base )
  {
LABEL_9:
    v5 = ptr - 1;
    File->_ptr = ptr - 1;
    if ( (flag & 0x40) != 0 )
    {
      if ( *v5 != (_BYTE)Ch )
      {
        File->_ptr = ptr;
        return -1;
      }
    }
    else
    {
      *v5 = Ch;
      flag = File->_flag;
    }
    ++File->_cnt;
    result = (unsigned __int8)Ch;
    File->_flag = flag & 0xFFFFFFEE | 1;
    return result;
  }
  if ( !File->_cnt )
  {
    File->_ptr = ++ptr;
    goto LABEL_9;
  }
  return -1;
}
