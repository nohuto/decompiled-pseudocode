/*
 * XREFs of sub_180063EB8 @ 0x180063EB8
 * Callers:
 *     sub_18003E228 @ 0x18003E228 (sub_18003E228.c)
 *     sub_180063E94 @ 0x180063E94 (sub_180063E94.c)
 *     sub_18006A1DC @ 0x18006A1DC (sub_18006A1DC.c)
 *     sub_18009EFD0 @ 0x18009EFD0 (sub_18009EFD0.c)
 *     sub_1800CBB38 @ 0x1800CBB38 (sub_1800CBB38.c)
 *     sub_1800CD9E4 @ 0x1800CD9E4 (sub_1800CD9E4.c)
 *     sub_1800CDA14 @ 0x1800CDA14 (sub_1800CDA14.c)
 *     sub_1800D1624 @ 0x1800D1624 (sub_1800D1624.c)
 *     sub_1800F99A0 @ 0x1800F99A0 (sub_1800F99A0.c)
 * Callees:
 *     sub_180063EE8 @ 0x180063EE8 (sub_180063EE8.c)
 */

__int64 __fastcall sub_180063EB8(__int64 a1)
{
  __int64 result; // rax

  sub_180063EE8();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
