/*
 * XREFs of sub_1800F19B8 @ 0x1800F19B8
 * Callers:
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800F1208 @ 0x1800F1208 (sub_1800F1208.c)
 */

__int64 __fastcall sub_1800F19B8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a1[1];
  if ( a1[2] == v2 )
    return sub_1800F1208(a1, a1[1], a2);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  sub_18000F444((_QWORD *)v2, a2);
  *(_WORD *)(v2 + 32) = *(_WORD *)(a2 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(v2 + 44) = *(_DWORD *)(a2 + 44);
  result = *(unsigned int *)(a2 + 48);
  *(_DWORD *)(v2 + 48) = result;
  a1[1] += 56LL;
  return result;
}
