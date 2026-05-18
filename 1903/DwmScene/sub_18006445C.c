/*
 * XREFs of sub_18006445C @ 0x18006445C
 * Callers:
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_180038E40 @ 0x180038E40 (sub_180038E40.c)
 *     sub_18003DA10 @ 0x18003DA10 (sub_18003DA10.c)
 *     sub_18003DD40 @ 0x18003DD40 (sub_18003DD40.c)
 *     sub_180042150 @ 0x180042150 (sub_180042150.c)
 *     sub_180043400 @ 0x180043400 (sub_180043400.c)
 *     sub_1800437F0 @ 0x1800437F0 (sub_1800437F0.c)
 *     sub_180043BB0 @ 0x180043BB0 (sub_180043BB0.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_1800D2A30 @ 0x1800D2A30 (sub_1800D2A30.c)
 * Callees:
 *     sub_180064000 @ 0x180064000 (sub_180064000.c)
 *     sub_1800D0C60 @ 0x1800D0C60 (sub_1800D0C60.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006445C(__int64 a1, __int64 a2, unsigned int a3)
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
  v6 = sub_1800D0C78(a1);
  sub_1800D0C60(v6, v3, 2LL, a2);
  sub_180064000((unsigned int *)(a1 + 56), &v10);
  v8 = sub_1800D0C78(v7);
  return sub_1800D0C60(v8, v3, 2LL, -a2);
}
