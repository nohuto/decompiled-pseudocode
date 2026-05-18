/*
 * XREFs of sub_1800F3024 @ 0x1800F3024
 * Callers:
 *     sub_1800F5820 @ 0x1800F5820 (sub_1800F5820.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5E20 @ 0x1800F5E20 (sub_1800F5E20.c)
 *     sub_1800F609C @ 0x1800F609C (sub_1800F609C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800F3024(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
