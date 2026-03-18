/*
 * XREFs of _flsbuf @ 0x1C001AAE4
 * Callers:
 *     _vsnwprintf_l @ 0x1C001AA00 (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flsbuf(int ch, _iobuf *str)
{
  str->_flag |= 0x20u;
  return 0xFFFFFFFFLL;
}
