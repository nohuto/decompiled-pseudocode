/*
 * XREFs of sub_1800CD8D4 @ 0x1800CD8D4
 * Callers:
 *     sub_18003DC60 @ 0x18003DC60 (sub_18003DC60.c)
 *     sub_18004331C @ 0x18004331C (sub_18004331C.c)
 *     sub_18004371C @ 0x18004371C (sub_18004371C.c)
 *     sub_180043AD4 @ 0x180043AD4 (sub_180043AD4.c)
 *     sub_180043E94 @ 0x180043E94 (sub_180043E94.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

__int64 __fastcall sub_1800CD8D4(__int64 a1)
{
  sub_180063DA8(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
