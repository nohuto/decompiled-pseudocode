/*
 * XREFs of sub_1800F944C @ 0x1800F944C
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 *     sub_1800F9478 @ 0x1800F9478 (sub_1800F9478.c)
 * Callees:
 *     sub_1800F9ABC @ 0x1800F9ABC (sub_1800F9ABC.c)
 */

__int64 __fastcall sub_1800F944C(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)result )
  {
    result = sub_1800F9ABC(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
