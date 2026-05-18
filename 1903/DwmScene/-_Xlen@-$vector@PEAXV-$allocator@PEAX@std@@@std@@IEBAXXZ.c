/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x18000F594
 * Callers:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000E23C @ 0x18000E23C (sub_18000E23C.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_18001F188 @ 0x18001F188 (sub_18001F188.c)
 *     sub_18001F2C4 @ 0x18001F2C4 (sub_18001F2C4.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_180045404 @ 0x180045404 (sub_180045404.c)
 *     sub_18006F344 @ 0x18006F344 (sub_18006F344.c)
 *     sub_1800B77C4 @ 0x1800B77C4 (sub_1800B77C4.c)
 *     sub_1801033A8 @ 0x1801033A8 (sub_1801033A8.c)
 *     sub_18011DBBC @ 0x18011DBBC (sub_18011DBBC.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1801273F2 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("string too long");
}
