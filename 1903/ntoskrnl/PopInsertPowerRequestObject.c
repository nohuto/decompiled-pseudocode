/*
 * XREFs of PopInsertPowerRequestObject @ 0x14069DF94
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14069DFD4 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140739C54 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140445088;
    if ( *(__int64 **)qword_140445088 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140445088 = (__int64)a1;
      return result;
    }
LABEL_6:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140445058;
  if ( *(__int64 **)qword_140445058 != &PopSpecialPowerRequestObjectList )
    goto LABEL_6;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140445058 = (__int64)a1;
  return result;
}
