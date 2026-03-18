/*
 * XREFs of CitUserChange @ 0x1C00807D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00808E0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C0215810 && *((_QWORD *)qword_1C0215810 + 12) && *((_QWORD *)qword_1C0215810 + 13) != a1 )
    CitpLogoff(qword_1C0215810);
}
