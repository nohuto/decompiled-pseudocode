/*
 * XREFs of sub_180068960 @ 0x180068960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180068960(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = a2;
  *(_DWORD *)(a1 + 4LL * a2 + 224) = a3;
  return result;
}
