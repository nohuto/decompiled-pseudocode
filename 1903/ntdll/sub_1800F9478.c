/*
 * XREFs of sub_1800F9478 @ 0x1800F9478
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 * Callees:
 *     sub_1800F944C @ 0x1800F944C (sub_1800F944C.c)
 *     sub_1800F9888 @ 0x1800F9888 (sub_1800F9888.c)
 *     sub_1800F9CC0 @ 0x1800F9CC0 (sub_1800F9CC0.c)
 */

__int64 __fastcall sub_1800F9478(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int v4; // eax

  result = *(unsigned int *)(a1 + 100);
  if ( !(_DWORD)result )
  {
    v3 = sub_1800F9CC0(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    v4 = sub_1800F944C(a1);
    result = sub_1800F9888(*(_QWORD *)(a1 + 112), v4, v3);
    *(_DWORD *)(a1 + 100) = result;
  }
  return result;
}
