/*
 * XREFs of sub_1801107F0 @ 0x1801107F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D2004 @ 0x1800D2004 (sub_1800D2004.c)
 *     sub_1800D2014 @ 0x1800D2014 (sub_1800D2014.c)
 *     sub_1800D2044 @ 0x1800D2044 (sub_1800D2044.c)
 */

__int64 __fastcall sub_1801107F0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = sub_1800D2004(5, 4LL, 0LL);
  v3 = sub_1800D2014(4, 4LL, 0LL) | v2;
  result = v3 | sub_1800D2044(0, 3, 0LL);
  *(_QWORD *)(a1 + 120) = result;
  return result;
}
