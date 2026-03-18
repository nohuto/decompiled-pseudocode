/*
 * XREFs of ?vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C029FE30
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C0295138 (-vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 */

void __fastcall vBrushPath4_8x8EnumRow(int a1, struct _ROW *a2, int a3, char *a4)
{
  *((_QWORD *)a4 + 4) = a2;
  vPatCpyRow4_8x8((struct _PATBLTFRAME *)(a4 + 8), a1, a3);
}
