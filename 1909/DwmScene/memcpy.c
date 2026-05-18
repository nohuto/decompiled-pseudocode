/*
 * XREFs of memcpy @ 0x180125B94
 * Callers:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18000E28C @ 0x18000E28C (sub_18000E28C.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_180011EFC @ 0x180011EFC (sub_180011EFC.c)
 *     sub_18001F298 @ 0x18001F298 (sub_18001F298.c)
 *     sub_18001F3D4 @ 0x18001F3D4 (sub_18001F3D4.c)
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_180022370 @ 0x180022370 (sub_180022370.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180026780 @ 0x180026780 (sub_180026780.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_180031F00 @ 0x180031F00 (sub_180031F00.c)
 *     sub_180045114 @ 0x180045114 (sub_180045114.c)
 *     sub_180045514 @ 0x180045514 (sub_180045514.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_18006F454 @ 0x18006F454 (sub_18006F454.c)
 *     sub_18007F740 @ 0x18007F740 (sub_18007F740.c)
 *     sub_1800A6324 @ 0x1800A6324 (sub_1800A6324.c)
 *     sub_1800B78D4 @ 0x1800B78D4 (sub_1800B78D4.c)
 *     sub_1800B8CD0 @ 0x1800B8CD0 (sub_1800B8CD0.c)
 *     sub_1800D217C @ 0x1800D217C (sub_1800D217C.c)
 *     sub_1800D2B40 @ 0x1800D2B40 (sub_1800D2B40.c)
 *     sub_1800F4294 @ 0x1800F4294 (sub_1800F4294.c)
 *     sub_1800F4300 @ 0x1800F4300 (sub_1800F4300.c)
 *     sub_1801034B8 @ 0x1801034B8 (sub_1801034B8.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 *     sub_18011DCCC @ 0x18011DCCC (sub_18011DCCC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
