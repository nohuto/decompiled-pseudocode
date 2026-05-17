/*
 * XREFs of sub_18004AF48 @ 0x18004AF48
 * Callers:
 *     sub_18004AED4 @ 0x18004AED4 (sub_18004AED4.c)
 *     sub_18004AFB0 @ 0x18004AFB0 (sub_18004AFB0.c)
 *     sub_180079D10 @ 0x180079D10 (sub_180079D10.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

_BYTE *__fastcall sub_18004AF48(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 = 1;
  else
    a1[2] = a3;
  *((_QWORD *)a1 + 2) = 0LL;
  a1[1] = a2;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  return result;
}
