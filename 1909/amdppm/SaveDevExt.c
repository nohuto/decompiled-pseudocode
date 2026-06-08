/*
 * XREFs of SaveDevExt @ 0x1C0002560
 * Callers:
 *     GetLpIndex @ 0x1C0021210 (GetLpIndex.c)
 *     GetNtProcessorNumber @ 0x1C002BF00 (GetNtProcessorNumber.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a2) = a1;
  v2 = (_QWORD *)(a1 + 32);
  result = (_QWORD *)qword_1C0013430;
  if ( *(__int64 **)qword_1C0013430 != &qword_1C0013428 )
    __fastfail(3u);
  *v2 = &qword_1C0013428;
  v2[1] = result;
  *result = v2;
  qword_1C0013430 = (__int64)v2;
  return result;
}
