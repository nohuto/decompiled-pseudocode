/*
 * XREFs of sub_1801076C8 @ 0x1801076C8
 * Callers:
 *     sub_1800F0F8C @ 0x1800F0F8C (sub_1800F0F8C.c)
 *     sub_180100F8C @ 0x180100F8C (sub_180100F8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801076C8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 418) == 2 )
    v3 = *(_QWORD *)(a1 + 408);
  else
    v3 = 0LL;
  if ( v3 )
  {
    *a2 = *(_QWORD *)(v3 + 48) - v3;
    result = *(_QWORD *)(v3 + 40) - v3;
    *a3 = result;
  }
  else
  {
    *a3 = 0LL;
    *a2 = 0LL;
  }
  return result;
}
