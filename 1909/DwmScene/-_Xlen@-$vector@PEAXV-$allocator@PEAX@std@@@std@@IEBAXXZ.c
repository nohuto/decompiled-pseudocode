/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x18000F5E4
 * Callers:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18000E28C @ 0x18000E28C (sub_18000E28C.c)
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_18001F298 @ 0x18001F298 (sub_18001F298.c)
 *     sub_18001F3D4 @ 0x18001F3D4 (sub_18001F3D4.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180045514 @ 0x180045514 (sub_180045514.c)
 *     sub_18006F454 @ 0x18006F454 (sub_18006F454.c)
 *     sub_1800B78D4 @ 0x1800B78D4 (sub_1800B78D4.c)
 *     sub_1801034B8 @ 0x1801034B8 (sub_1801034B8.c)
 *     sub_18011DCCC @ 0x18011DCCC (sub_18011DCCC.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("string too long");
}
