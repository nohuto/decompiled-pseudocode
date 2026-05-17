/*
 * XREFs of sub_18011556C @ 0x18011556C
 * Callers:
 *     sub_1801155A4 @ 0x1801155A4 (sub_1801155A4.c)
 * Callees:
 *     memcmp @ 0x180090560 (memcmp.c)
 */

_BOOL8 __fastcall sub_18011556C(__int64 a1, unsigned int *a2)
{
  return *(unsigned __int8 *)(a1 + 19) == *a2 && !memcmp((const void *)(a1 + 24), *((const void **)a2 + 1), 8LL * *a2);
}
