/*
 * XREFs of sub_1800E3358 @ 0x1800E3358
 * Callers:
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 * Callees:
 *     sub_1800E33AC @ 0x1800E33AC (sub_1800E33AC.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_BYTE *__fastcall sub_1800E3358(_BYTE *a1)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x78uLL);
  *((_QWORD *)a1 + 1) = 0LL;
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 2) = sub_1800E33AC(a1 + 16);
  result = a1;
  *((_DWORD *)a1 + 28) = 0;
  *((_DWORD *)a1 + 29) = 0;
  return result;
}
