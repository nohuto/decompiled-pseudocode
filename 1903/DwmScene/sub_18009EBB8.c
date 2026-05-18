/*
 * XREFs of sub_18009EBB8 @ 0x18009EBB8
 * Callers:
 *     sub_1800302F4 @ 0x1800302F4 (sub_1800302F4.c)
 *     sub_180034170 @ 0x180034170 (sub_180034170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EBB8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
