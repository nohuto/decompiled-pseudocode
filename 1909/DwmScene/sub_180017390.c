/*
 * XREFs of sub_180017390 @ 0x180017390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall sub_180017390(_QWORD *a1)
{
  void *result; // rax

  a1[1] = 0LL;
  *((_DWORD *)a1 + 4) = 0;
  *(_QWORD *)((char *)a1 + 28) = 0LL;
  *((_DWORD *)a1 + 9) = 0;
  a1[6] = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  result = a1;
  *a1 = 1065353216LL;
  *(_QWORD *)((char *)a1 + 20) = 1065353216LL;
  a1[5] = 1065353216LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  return result;
}
