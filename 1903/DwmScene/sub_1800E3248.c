/*
 * XREFs of sub_1800E3248 @ 0x1800E3248
 * Callers:
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 * Callees:
 *     sub_1800E329C @ 0x1800E329C (sub_1800E329C.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_BYTE *__fastcall sub_1800E3248(_BYTE *a1)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x78uLL);
  *((_QWORD *)a1 + 1) = 0LL;
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 2) = sub_1800E329C(a1 + 16);
  result = a1;
  *((_DWORD *)a1 + 28) = 0;
  *((_DWORD *)a1 + 29) = 0;
  return result;
}
