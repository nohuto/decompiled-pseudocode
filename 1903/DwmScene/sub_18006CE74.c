/*
 * XREFs of sub_18006CE74 @ 0x18006CE74
 * Callers:
 *     sub_180024CC0 @ 0x180024CC0 (sub_180024CC0.c)
 *     sub_18006A4A4 @ 0x18006A4A4 (sub_18006A4A4.c)
 *     sub_18006DC60 @ 0x18006DC60 (sub_18006DC60.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 * Callees:
 *     sub_180063428 @ 0x180063428 (sub_180063428.c)
 */

__int64 __fastcall sub_18006CE74(__int64 a1)
{
  sub_180063428(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
