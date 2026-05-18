/*
 * XREFs of sub_18006456C @ 0x18006456C
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_180038F50 @ 0x180038F50 (sub_180038F50.c)
 *     sub_18003DB20 @ 0x18003DB20 (sub_18003DB20.c)
 *     sub_18003DE50 @ 0x18003DE50 (sub_18003DE50.c)
 *     sub_180042260 @ 0x180042260 (sub_180042260.c)
 *     sub_180043510 @ 0x180043510 (sub_180043510.c)
 *     sub_180043900 @ 0x180043900 (sub_180043900.c)
 *     sub_180043CC0 @ 0x180043CC0 (sub_180043CC0.c)
 *     sub_180044080 @ 0x180044080 (sub_180044080.c)
 *     sub_1800D2B40 @ 0x1800D2B40 (sub_1800D2B40.c)
 * Callees:
 *     sub_180064110 @ 0x180064110 (sub_180064110.c)
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006456C(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  v10 = v3;
  v11 = a2;
  v6 = sub_1800D0D88(a1);
  sub_1800D0D70(v6, v3, 2LL, a2);
  sub_180064110((unsigned int *)(a1 + 56), &v10);
  v8 = sub_1800D0D88(v7);
  return sub_1800D0D70(v8, v3, 2LL, -a2);
}
