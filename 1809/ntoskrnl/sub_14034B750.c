/*
 * XREFs of sub_14034B750 @ 0x14034B750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14034B750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 2264) )
  {
    *(_QWORD *)(a3 + 2288) = 272LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 2296) = a1;
    *(_QWORD *)(a3 + 2280) = 0LL;
    *(_QWORD *)(a3 + 2272) = a3 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a3 + 2264) = 1;
  }
  return result;
}
