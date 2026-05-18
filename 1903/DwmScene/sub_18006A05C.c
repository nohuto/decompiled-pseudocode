/*
 * XREFs of sub_18006A05C @ 0x18006A05C
 * Callers:
 *     sub_18006A280 @ 0x18006A280 (sub_18006A280.c)
 * Callees:
 *     sub_1800E0648 @ 0x1800E0648 (sub_1800E0648.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006A05C(__int64 *a1, _QWORD *a2, __int64 a3)
{
  void *v6; // rdi
  __int64 v7; // rax

  v6 = operator new(0x3960uLL);
  v7 = 0LL;
  if ( v6 )
  {
    memset(v6, 0, 0x3960uLL);
    v7 = sub_1800E0648(v6, *a2, a3);
  }
  *a1 = v7;
  return a1;
}
