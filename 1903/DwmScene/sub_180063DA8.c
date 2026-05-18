/*
 * XREFs of sub_180063DA8 @ 0x180063DA8
 * Callers:
 *     sub_18003E118 @ 0x18003E118 (sub_18003E118.c)
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 *     sub_18006A0CC @ 0x18006A0CC (sub_18006A0CC.c)
 *     sub_18009EEC0 @ 0x18009EEC0 (sub_18009EEC0.c)
 *     sub_1800CBA28 @ 0x1800CBA28 (sub_1800CBA28.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     sub_1800CD904 @ 0x1800CD904 (sub_1800CD904.c)
 *     sub_1800D1514 @ 0x1800D1514 (sub_1800D1514.c)
 *     sub_1800F9890 @ 0x1800F9890 (sub_1800F9890.c)
 * Callees:
 *     sub_180063DD8 @ 0x180063DD8 (sub_180063DD8.c)
 */

__int64 __fastcall sub_180063DA8(__int64 a1)
{
  __int64 result; // rax

  sub_180063DD8();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
