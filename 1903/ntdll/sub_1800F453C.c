/*
 * XREFs of sub_1800F453C @ 0x1800F453C
 * Callers:
 *     sub_1800F4494 @ 0x1800F4494 (sub_1800F4494.c)
 *     sub_1800F4C94 @ 0x1800F4C94 (sub_1800F4C94.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

void *__fastcall sub_1800F453C(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x838uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
