/*
 * XREFs of sub_18002D440 @ 0x18002D440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009ECAC @ 0x18009ECAC (sub_18009ECAC.c)
 */

__int64 __fastcall sub_18002D440(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009ECAC();
  return result;
}
