/*
 * XREFs of sub_1800B7318 @ 0x1800B7318
 * Callers:
 *     sub_1800B8A0C @ 0x1800B8A0C (sub_1800B8A0C.c)
 * Callees:
 *     sub_1800B7340 @ 0x1800B7340 (sub_1800B7340.c)
 */

__int64 __fastcall sub_1800B7318(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800B7340();
  *(_DWORD *)(a1 + 144) = 4;
  return result;
}
