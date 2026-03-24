/*
 * XREFs of PopInsertPowerRequestObject @ 0x140588BEC
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140588C2C (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140701214 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_1404193D8;
    if ( *(__int64 **)qword_1404193D8 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_1404193D8 = (__int64)a1;
      return result;
    }
LABEL_6:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_1404193E8;
  if ( *(__int64 **)qword_1404193E8 != &PopSpecialPowerRequestObjectList )
    goto LABEL_6;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_1404193E8 = (__int64)a1;
  return result;
}
