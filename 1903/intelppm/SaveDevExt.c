/*
 * XREFs of SaveDevExt @ 0x1C0003F54
 * Callers:
 *     GetNtProcessorNumber @ 0x1C0025460 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C002E9D0 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a2) = a1;
  v2 = (_QWORD *)(a1 + 32);
  result = (_QWORD *)qword_1C001B3B0;
  if ( *(__int64 **)qword_1C001B3B0 != &qword_1C001B3A8 )
    __fastfail(3u);
  *v2 = &qword_1C001B3A8;
  v2[1] = result;
  *result = v2;
  qword_1C001B3B0 = (__int64)v2;
  return result;
}
