/*
 * XREFs of PopInsertPowerRequestObject @ 0x140589BEC
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1407024B4 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_14041A4C8;
    if ( *(__int64 **)qword_14041A4C8 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_14041A4C8 = (__int64)a1;
      return result;
    }
LABEL_6:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_14041A498;
  if ( *(__int64 **)qword_14041A498 != &PopSpecialPowerRequestObjectList )
    goto LABEL_6;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_14041A498 = (__int64)a1;
  return result;
}
