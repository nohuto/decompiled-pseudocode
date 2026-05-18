/*
 * XREFs of memcmp @ 0x180125AA8
 * Callers:
 *     sub_180066388 @ 0x180066388 (sub_180066388.c)
 *     sub_1800681A4 @ 0x1800681A4 (sub_1800681A4.c)
 *     sub_1800705EC @ 0x1800705EC (sub_1800705EC.c)
 *     sub_180070A00 @ 0x180070A00 (sub_180070A00.c)
 *     sub_180071970 @ 0x180071970 (sub_180071970.c)
 *     sub_1800728F0 @ 0x1800728F0 (sub_1800728F0.c)
 *     sub_180072D90 @ 0x180072D90 (sub_180072D90.c)
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 *     sub_1800A0E84 @ 0x1800A0E84 (sub_1800A0E84.c)
 *     sub_1800A148C @ 0x1800A148C (sub_1800A148C.c)
 *     sub_1800A16C8 @ 0x1800A16C8 (sub_1800A16C8.c)
 *     sub_1800A1A44 @ 0x1800A1A44 (sub_1800A1A44.c)
 *     sub_1800A1C74 @ 0x1800A1C74 (sub_1800A1C74.c)
 *     sub_1800A1F4C @ 0x1800A1F4C (sub_1800A1F4C.c)
 *     sub_1800A201C @ 0x1800A201C (sub_1800A201C.c)
 *     sub_1800A20EC @ 0x1800A20EC (sub_1800A20EC.c)
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 *     sub_1800AA414 @ 0x1800AA414 (sub_1800AA414.c)
 *     sub_1800AA520 @ 0x1800AA520 (sub_1800AA520.c)
 *     sub_1800AE170 @ 0x1800AE170 (sub_1800AE170.c)
 *     sub_1800BBF4C @ 0x1800BBF4C (sub_1800BBF4C.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800C21A0 @ 0x1800C21A0 (sub_1800C21A0.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800D17A0 @ 0x1800D17A0 (sub_1800D17A0.c)
 *     sub_1800D3874 @ 0x1800D3874 (sub_1800D3874.c)
 *     sub_1800D3C88 @ 0x1800D3C88 (sub_1800D3C88.c)
 *     sub_1800D4080 @ 0x1800D4080 (sub_1800D4080.c)
 *     sub_1800F0D40 @ 0x1800F0D40 (sub_1800F0D40.c)
 *     sub_1800F40CC @ 0x1800F40CC (sub_1800F40CC.c)
 *     sub_1800F4184 @ 0x1800F4184 (sub_1800F4184.c)
 *     sub_1800F41F0 @ 0x1800F41F0 (sub_1800F41F0.c)
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x18010377C (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 *     sub_1801056E0 @ 0x1801056E0 (sub_1801056E0.c)
 *     sub_1801087D4 @ 0x1801087D4 (sub_1801087D4.c)
 *     sub_180108934 @ 0x180108934 (sub_180108934.c)
 *     sub_18010D5DC @ 0x18010D5DC (sub_18010D5DC.c)
 *     sub_180111D30 @ 0x180111D30 (sub_180111D30.c)
 *     sub_18011CCC8 @ 0x18011CCC8 (sub_18011CCC8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
