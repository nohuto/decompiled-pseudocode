/*
 * XREFs of sub_1800B7428 @ 0x1800B7428
 * Callers:
 *     sub_1800B8B1C @ 0x1800B8B1C (sub_1800B8B1C.c)
 * Callees:
 *     sub_1800B7450 @ 0x1800B7450 (sub_1800B7450.c)
 */

__int64 __fastcall sub_1800B7428(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800B7450();
  *(_DWORD *)(a1 + 144) = 4;
  return result;
}
