/*
 * XREFs of sub_180063734 @ 0x180063734
 * Callers:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_1800634F8 @ 0x1800634F8 (sub_1800634F8.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_1800636FC @ 0x1800636FC (sub_1800636FC.c)
 * Callees:
 *     sub_180063238 @ 0x180063238 (sub_180063238.c)
 *     sub_1800633E0 @ 0x1800633E0 (sub_1800633E0.c)
 */

bool __fastcall sub_180063734(__int64 a1, char a2)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(sub_1800633E0() + 8);
  return *sub_180063238(a1, &v6, a2) != v4;
}
