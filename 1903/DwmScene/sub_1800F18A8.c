/*
 * XREFs of sub_1800F18A8 @ 0x1800F18A8
 * Callers:
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800F10F8 @ 0x1800F10F8 (sub_1800F10F8.c)
 */

__int64 __fastcall sub_1800F18A8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a1[1];
  if ( a1[2] == v2 )
    return sub_1800F10F8(a1, a1[1], a2);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  sub_18000F3F4((_QWORD *)v2, a2);
  *(_WORD *)(v2 + 32) = *(_WORD *)(a2 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(v2 + 44) = *(_DWORD *)(a2 + 44);
  result = *(unsigned int *)(a2 + 48);
  *(_DWORD *)(v2 + 48) = result;
  a1[1] += 56LL;
  return result;
}
