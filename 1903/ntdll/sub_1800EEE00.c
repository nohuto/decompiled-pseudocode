/*
 * XREFs of sub_1800EEE00 @ 0x1800EEE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EEE00(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax

  ++*(_DWORD *)(a2 + 16);
  v2 = *(_QWORD **)(a2 + 8);
  if ( (unsigned __int64)v2 < *(_QWORD *)a2 )
  {
    *v2 = a1;
    *(_QWORD *)(a2 + 8) += 8LL;
  }
  return 0LL;
}
