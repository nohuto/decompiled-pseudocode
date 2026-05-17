/*
 * XREFs of sub_18006A9DC @ 0x18006A9DC
 * Callers:
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18006A9DC(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
