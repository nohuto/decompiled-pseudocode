/*
 * XREFs of VfSuspectDriversInsert @ 0x140977080
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 *     VfTriageAddDrivers @ 0x140A3E028 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A3E484 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140435EC8;
  if ( *(__int64 **)qword_140435EC8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140435EC8 = (__int64)a1;
  return result;
}
