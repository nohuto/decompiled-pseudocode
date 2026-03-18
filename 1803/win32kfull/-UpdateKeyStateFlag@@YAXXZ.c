/*
 * XREFs of ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00F0034
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void UpdateKeyStateFlag(void)
{
  _QWORD *i; // rbx
  __int64 v1; // rcx

  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
    {
      v1 = *(i - 38);
      *(_DWORD *)(v1 + 388) |= 1u;
      memset((void *)(v1 + 196), 255, 0x20uLL);
    }
  }
}
