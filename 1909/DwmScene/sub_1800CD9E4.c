/*
 * XREFs of sub_1800CD9E4 @ 0x1800CD9E4
 * Callers:
 *     sub_18003DD70 @ 0x18003DD70 (sub_18003DD70.c)
 *     sub_18004342C @ 0x18004342C (sub_18004342C.c)
 *     sub_18004382C @ 0x18004382C (sub_18004382C.c)
 *     sub_180043BE4 @ 0x180043BE4 (sub_180043BE4.c)
 *     sub_180043FA4 @ 0x180043FA4 (sub_180043FA4.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

__int64 __fastcall sub_1800CD9E4(__int64 a1)
{
  sub_180063EB8(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
