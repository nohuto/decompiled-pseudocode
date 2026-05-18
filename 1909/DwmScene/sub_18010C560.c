/*
 * XREFs of sub_18010C560 @ 0x18010C560
 * Callers:
 *     sub_18010C03C @ 0x18010C03C (sub_18010C03C.c)
 *     sub_18010C194 @ 0x18010C194 (sub_18010C194.c)
 *     sub_18010C258 @ 0x18010C258 (sub_18010C258.c)
 * Callees:
 *     sub_1800B8A5C @ 0x1800B8A5C (sub_1800B8A5C.c)
 */

char __fastcall sub_18010C560(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v5; // bl

  v4 = *a2;
  v5 = sub_1800B8A5C(*a3);
  if ( sub_1800B8A5C(v4) == v5 )
    return 0;
  else
    return sub_1800B8A5C(*a2);
}
