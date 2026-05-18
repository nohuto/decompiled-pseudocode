/*
 * XREFs of sub_18009EBC8 @ 0x18009EBC8
 * Callers:
 *     sub_180034170 @ 0x180034170 (sub_180034170.c)
 *     sub_180067E94 @ 0x180067E94 (sub_180067E94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EBC8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
