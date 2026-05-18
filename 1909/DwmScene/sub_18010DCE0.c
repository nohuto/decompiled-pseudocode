/*
 * XREFs of sub_18010DCE0 @ 0x18010DCE0
 * Callers:
 *     sub_1801335D4 @ 0x1801335D4 (sub_1801335D4.c)
 * Callees:
 *     sub_180091A40 @ 0x180091A40 (sub_180091A40.c)
 */

void __fastcall sub_18010DCE0(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 8 )
    sub_180091A40(i);
}
