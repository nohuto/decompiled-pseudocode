/*
 * XREFs of sub_180030918 @ 0x180030918
 * Callers:
 *     Callback @ 0x18002EA00 (Callback.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_1800305A0 @ 0x1800305A0 (sub_1800305A0.c)
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 *     sub_18007FC20 @ 0x18007FC20 (sub_18007FC20.c)
 *     sub_18010FB10 @ 0x18010FB10 (sub_18010FB10.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180030918(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
