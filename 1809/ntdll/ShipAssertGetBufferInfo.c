/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800DF2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_1801667B8;
    *a1 = &qword_1801667B8;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_1801627C4;
    *a2 = &dword_1801627C4;
  }
  return result;
}
