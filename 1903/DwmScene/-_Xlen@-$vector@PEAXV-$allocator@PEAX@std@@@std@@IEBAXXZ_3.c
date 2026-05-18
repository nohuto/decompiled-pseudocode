/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_3 @ 0x1800D6110
 * Callers:
 *     sub_1800D5F08 @ 0x1800D5F08 (sub_1800D5F08.c)
 *     sub_1800DA064 @ 0x1800DA064 (sub_1800DA064.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1801273F2 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
