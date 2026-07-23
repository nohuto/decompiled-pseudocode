/*
 * XREFs of sub_1406A88C0 @ 0x1406A88C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1406A88C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a2 )
      return a2 - *(_QWORD *)(a1 + 48);
    else
      LOBYTE(v2) = -1;
  }
  else
  {
    LOBYTE(v2) = a2 != 0;
  }
  return v2;
}
