/*
 * XREFs of sub_18010A3FC @ 0x18010A3FC
 * Callers:
 *     sub_180107868 @ 0x180107868 (sub_180107868.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18010A3FC(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  void *v2; // rdi
  __int64 result; // rax

  v1 = *a1;
  v2 = (void *)a1[1];
  result = (__int64)memset(v2, 0, (*a1 + 7) >> 3);
  if ( (v1 & 0x3F) != 0 )
  {
    result = ~((1LL << (v1 & 0x3F)) - 1);
    *((_QWORD *)v2 + (v1 >> 6)) |= result;
  }
  return result;
}
