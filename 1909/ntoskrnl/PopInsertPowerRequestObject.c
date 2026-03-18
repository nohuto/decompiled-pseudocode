/*
 * XREFs of PopInsertPowerRequestObject @ 0x1406B3E7C
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1406B3DA4 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x14073BEE4 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140444D38;
    if ( *(__int64 **)qword_140444D38 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140444D38 = (__int64)a1;
      return result;
    }
LABEL_6:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140444D88;
  if ( *(__int64 **)qword_140444D88 != &PopSpecialPowerRequestObjectList )
    goto LABEL_6;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140444D88 = (__int64)a1;
  return result;
}
