/*
 * XREFs of sub_1800643AC @ 0x1800643AC
 * Callers:
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_180090190 @ 0x180090190 (sub_180090190.c)
 *     sub_1800955C0 @ 0x1800955C0 (sub_1800955C0.c)
 *     sub_18009D810 @ 0x18009D810 (sub_18009D810.c)
 *     sub_18009F494 @ 0x18009F494 (sub_18009F494.c)
 *     sub_1800CBF00 @ 0x1800CBF00 (sub_1800CBF00.c)
 *     sub_1800D0190 @ 0x1800D0190 (sub_1800D0190.c)
 *     sub_1800D2564 @ 0x1800D2564 (sub_1800D2564.c)
 *     sub_1800D2D24 @ 0x1800D2D24 (sub_1800D2D24.c)
 * Callees:
 *     sub_180063CE0 @ 0x180063CE0 (sub_180063CE0.c)
 */

__int64 __fastcall sub_1800643AC(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4[6]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = a2;
  sub_180063CE0((__int64 **)(a1 + 80), (__int64)&v3, v4);
  result = v3;
  *(_BYTE *)(v3 + 32) = 1;
  return result;
}
