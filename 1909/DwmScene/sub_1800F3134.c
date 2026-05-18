/*
 * XREFs of sub_1800F3134 @ 0x1800F3134
 * Callers:
 *     sub_1800F5930 @ 0x1800F5930 (sub_1800F5930.c)
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 *     sub_1800F5F30 @ 0x1800F5F30 (sub_1800F5F30.c)
 *     sub_1800F61AC @ 0x1800F61AC (sub_1800F61AC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800F3134(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
