/*
 * XREFs of CitUserChange @ 0x1C0164FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C01A16B0 && *((_QWORD *)qword_1C01A16B0 + 12) && *((_QWORD *)qword_1C01A16B0 + 13) != a1 )
    CitpLogoff(qword_1C01A16B0);
}
