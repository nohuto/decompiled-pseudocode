/*
 * XREFs of sub_1800D8914 @ 0x1800D8914
 * Callers:
 *     sub_180066AE4 @ 0x180066AE4 (sub_180066AE4.c)
 * Callees:
 *     sub_1800D9FB0 @ 0x1800D9FB0 (sub_1800D9FB0.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall sub_1800D8914(_BYTE *a1)
{
  memset(a1, 0, 0xC8uLL);
  *a1 = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 2) = sub_1800D9FB0(a1 + 16);
  *((_QWORD *)a1 + 24) = 0LL;
  a1[200] = 0;
  *((_QWORD *)a1 + 26) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 27) = sub_1800D9FB0(a1 + 216);
  *((_QWORD *)a1 + 49) = 0LL;
  return a1;
}
