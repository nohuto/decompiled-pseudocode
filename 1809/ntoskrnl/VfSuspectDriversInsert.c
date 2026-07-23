/*
 * XREFs of VfSuspectDriversInsert @ 0x140938770
 * Callers:
 *     VfTriageAddDrivers @ 0x1409F94EC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1409F9948 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_14040E7E8;
  if ( *(__int64 **)qword_14040E7E8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_14040E7E8 = (__int64)a1;
  return result;
}
