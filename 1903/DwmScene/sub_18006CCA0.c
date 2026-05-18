/*
 * XREFs of sub_18006CCA0 @ 0x18006CCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AC70 @ 0x18006AC70 (sub_18006AC70.c)
 */

__int64 __fastcall sub_18006CCA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( *a2 != v2 )
    return sub_18006AC70(v2, a2);
  return result;
}
