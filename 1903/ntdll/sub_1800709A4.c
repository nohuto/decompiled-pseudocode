/*
 * XREFs of sub_1800709A4 @ 0x1800709A4
 * Callers:
 *     sub_180020D2C @ 0x180020D2C (sub_180020D2C.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     TpPostWork @ 0x180036570 (TpPostWork.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

void __fastcall sub_1800709A4(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&stru_1801652C0);
    v2 = (_QWORD *)qword_1801652F8;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801652F8 != &qword_1801652F0 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801652F8;
    *v3 = &qword_1801652F0;
    *v2 = v3;
    qword_1801652F8 = a1 + 64;
    RtlLeaveCriticalSection(&stru_1801652C0);
    if ( Work )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(Work);
    }
  }
}
