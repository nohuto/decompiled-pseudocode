/*
 * XREFs of MiInitializeSlabAllocator @ 0x14017F03C
 * Callers:
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall MiInitializeSlabAllocator(_QWORD *a1, int a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x48uLL);
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_DWORD *)a1 + 12) = a2;
  return result;
}
