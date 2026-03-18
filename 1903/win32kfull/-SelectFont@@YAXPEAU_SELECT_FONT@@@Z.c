/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0248E00
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFont(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
}
