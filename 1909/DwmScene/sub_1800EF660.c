/*
 * XREFs of sub_1800EF660 @ 0x1800EF660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1CF4 @ 0x1800D1CF4 (sub_1800D1CF4.c)
 *     sub_1800D2004 @ 0x1800D2004 (sub_1800D2004.c)
 *     sub_1800D2014 @ 0x1800D2014 (sub_1800D2014.c)
 *     sub_1800D2024 @ 0x1800D2024 (sub_1800D2024.c)
 *     sub_1800D2044 @ 0x1800D2044 (sub_1800D2044.c)
 *     sub_1800D2064 @ 0x1800D2064 (sub_1800D2064.c)
 *     sub_1800D2084 @ 0x1800D2084 (sub_1800D2084.c)
 *     sub_1800D20A4 @ 0x1800D20A4 (sub_1800D20A4.c)
 */

__int64 __fastcall sub_1800EF660(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax

  v2 = sub_1800D2004(5, 4LL, 0LL);
  v3 = sub_1800D1CF4(4, 4, 0LL) | v2;
  v4 = v3 | sub_1800D2014(4, 4LL, 0LL);
  v5 = v4 | sub_1800D2064(0, 4, 0LL);
  v6 = v5 | sub_1800D2044(0, 3, 0LL);
  v7 = v6 | sub_1800D2024(0, 3, 0LL);
  v8 = v7 | sub_1800D2084(0, 2, 0LL);
  result = v8 | sub_1800D20A4(0, 2, 0LL);
  *(_QWORD *)(a1 + 112) = result;
  return result;
}
