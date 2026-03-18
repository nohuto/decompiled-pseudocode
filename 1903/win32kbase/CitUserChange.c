/*
 * XREFs of CitUserChange @ 0x1C0084600
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084710 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C0218810 && *((_QWORD *)qword_1C0218810 + 12) && *((_QWORD *)qword_1C0218810 + 13) != a1 )
    CitpLogoff(qword_1C0218810);
}
