/*
 * XREFs of memcmp @ 0x180125BB8
 * Callers:
 *     sub_180066498 @ 0x180066498 (sub_180066498.c)
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_180070B10 @ 0x180070B10 (sub_180070B10.c)
 *     sub_180071A80 @ 0x180071A80 (sub_180071A80.c)
 *     sub_180072A00 @ 0x180072A00 (sub_180072A00.c)
 *     sub_180072EA0 @ 0x180072EA0 (sub_180072EA0.c)
 *     sub_1800778C0 @ 0x1800778C0 (sub_1800778C0.c)
 *     sub_1800A0F94 @ 0x1800A0F94 (sub_1800A0F94.c)
 *     sub_1800A159C @ 0x1800A159C (sub_1800A159C.c)
 *     sub_1800A17D8 @ 0x1800A17D8 (sub_1800A17D8.c)
 *     sub_1800A1B54 @ 0x1800A1B54 (sub_1800A1B54.c)
 *     sub_1800A1D84 @ 0x1800A1D84 (sub_1800A1D84.c)
 *     sub_1800A205C @ 0x1800A205C (sub_1800A205C.c)
 *     sub_1800A212C @ 0x1800A212C (sub_1800A212C.c)
 *     sub_1800A21FC @ 0x1800A21FC (sub_1800A21FC.c)
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 *     sub_1800AA524 @ 0x1800AA524 (sub_1800AA524.c)
 *     sub_1800AA630 @ 0x1800AA630 (sub_1800AA630.c)
 *     sub_1800AE280 @ 0x1800AE280 (sub_1800AE280.c)
 *     sub_1800BC05C @ 0x1800BC05C (sub_1800BC05C.c)
 *     sub_1800BC470 @ 0x1800BC470 (sub_1800BC470.c)
 *     sub_1800C22B0 @ 0x1800C22B0 (sub_1800C22B0.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800D18B0 @ 0x1800D18B0 (sub_1800D18B0.c)
 *     sub_1800D3984 @ 0x1800D3984 (sub_1800D3984.c)
 *     sub_1800D3D98 @ 0x1800D3D98 (sub_1800D3D98.c)
 *     sub_1800D4190 @ 0x1800D4190 (sub_1800D4190.c)
 *     sub_1800F0E50 @ 0x1800F0E50 (sub_1800F0E50.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 *     sub_1800F4294 @ 0x1800F4294 (sub_1800F4294.c)
 *     sub_1800F4300 @ 0x1800F4300 (sub_1800F4300.c)
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x18010388C (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 *     sub_1801049A4 @ 0x1801049A4 (sub_1801049A4.c)
 *     sub_1801057F0 @ 0x1801057F0 (sub_1801057F0.c)
 *     sub_1801088E4 @ 0x1801088E4 (sub_1801088E4.c)
 *     sub_180108A44 @ 0x180108A44 (sub_180108A44.c)
 *     sub_18010D6EC @ 0x18010D6EC (sub_18010D6EC.c)
 *     sub_180111E40 @ 0x180111E40 (sub_180111E40.c)
 *     sub_18011CDD8 @ 0x18011CDD8 (sub_18011CDD8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
