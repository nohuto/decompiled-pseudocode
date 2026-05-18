/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_3 @ 0x1800D6220
 * Callers:
 *     sub_1800D6018 @ 0x1800D6018 (sub_1800D6018.c)
 *     sub_1800DA174 @ 0x1800DA174 (sub_1800DA174.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
