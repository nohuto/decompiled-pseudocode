/*
 * XREFs of sub_180063624 @ 0x180063624
 * Callers:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_1800633E8 @ 0x1800633E8 (sub_1800633E8.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_1800635EC @ 0x1800635EC (sub_1800635EC.c)
 * Callees:
 *     sub_180063128 @ 0x180063128 (sub_180063128.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 */

bool __fastcall sub_180063624(__int64 a1, char a2)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(sub_1800632D0() + 8);
  return *sub_180063128(a1, &v6, a2) != v4;
}
