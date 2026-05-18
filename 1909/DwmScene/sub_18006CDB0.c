/*
 * XREFs of sub_18006CDB0 @ 0x18006CDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AD80 @ 0x18006AD80 (sub_18006AD80.c)
 */

__int64 __fastcall sub_18006CDB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( *a2 != v2 )
    return sub_18006AD80(v2, a2);
  return result;
}
