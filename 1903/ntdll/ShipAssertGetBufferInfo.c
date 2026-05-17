/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800DCED0
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
    result = &qword_180166838;
    *a1 = &qword_180166838;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_1801627B4;
    *a2 = &dword_1801627B4;
  }
  return result;
}
