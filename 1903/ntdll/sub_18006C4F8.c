/*
 * XREFs of sub_18006C4F8 @ 0x18006C4F8
 * Callers:
 *     sub_18000844C @ 0x18000844C (sub_18000844C.c)
 *     sub_18000AC1C @ 0x18000AC1C (sub_18000AC1C.c)
 * Callees:
 *     memcmp @ 0x180090560 (memcmp.c)
 */

int __fastcall sub_18006C4F8(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a2 + 96);
    if ( *(_WORD *)(a1 + 8) <= v5 )
    {
      if ( *(_WORD *)(a1 + 8) < v5 )
        return 1;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
