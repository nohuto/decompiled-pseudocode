/*
 * XREFs of sub_18011DE40 @ 0x18011DE40
 * Callers:
 *     sub_18001D8F4 @ 0x18001D8F4 (sub_18001D8F4.c)
 * Callees:
 *     sub_18011DE68 @ 0x18011DE68 (sub_18011DE68.c)
 */

__int64 __fastcall sub_18011DE40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18011DE68(a1, a2, v3);
  return a1;
}
