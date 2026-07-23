/*
 * XREFs of HvpFillFileName @ 0x1405A5BD4
 * Callers:
 *     HvHiveStartFileBacked @ 0x1405A5A3C (HvHiveStartFileBacked.c)
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall HvpFillFileName(__int64 a1, unsigned __int16 *a2)
{
  void *v2; // rdi
  void *result; // rax
  unsigned int v5; // ecx
  unsigned __int16 v6; // ax
  size_t v7; // r8

  v2 = (void *)(a1 + 48);
  result = memset((void *)(a1 + 48), 0, 0x40uLL);
  v5 = 0;
  if ( a2 )
  {
    v6 = *a2;
    if ( *a2 < 0x40u )
    {
      v7 = v6;
    }
    else
    {
      v7 = 62LL;
      v5 = v6 - 62;
    }
    return memmove(v2, (const void *)(*((_QWORD *)a2 + 1) + v5), v7);
  }
  return result;
}
