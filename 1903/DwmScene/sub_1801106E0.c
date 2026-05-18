/*
 * XREFs of sub_1801106E0 @ 0x1801106E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1EF4 @ 0x1800D1EF4 (sub_1800D1EF4.c)
 *     sub_1800D1F04 @ 0x1800D1F04 (sub_1800D1F04.c)
 *     sub_1800D1F34 @ 0x1800D1F34 (sub_1800D1F34.c)
 */

__int64 __fastcall sub_1801106E0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = sub_1800D1EF4(5, 4LL, 0LL);
  v3 = sub_1800D1F04(4, 4LL, 0LL) | v2;
  result = v3 | sub_1800D1F34(0, 3, 0LL);
  *(_QWORD *)(a1 + 120) = result;
  return result;
}
