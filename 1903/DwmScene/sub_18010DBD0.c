/*
 * XREFs of sub_18010DBD0 @ 0x18010DBD0
 * Callers:
 *     sub_1801334C4 @ 0x1801334C4 (sub_1801334C4.c)
 * Callees:
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 */

void __fastcall sub_18010DBD0(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 8 )
    sub_180091930(i);
}
