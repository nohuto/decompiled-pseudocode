/*
 * XREFs of RmGameModeInitializeResourceRequest @ 0x18000C490
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

void *__fastcall RmGameModeInitializeResourceRequest(_DWORD *a1)
{
  void *result; // rax

  result = memset_0(a1, 0, 0x28uLL);
  *a1 = 5;
  a1[4] = 10;
  a1[5] = 50;
  a1[6] = 30;
  *((_BYTE *)a1 + 36) = 0;
  return result;
}
