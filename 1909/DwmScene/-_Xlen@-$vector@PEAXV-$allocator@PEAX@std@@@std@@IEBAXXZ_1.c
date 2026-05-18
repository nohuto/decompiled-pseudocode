/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800261E8
 * Callers:
 *     sub_180026780 @ 0x180026780 (sub_180026780.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_1800B8E18 @ 0x1800B8E18 (sub_1800B8E18.c)
 *     sub_180123BC0 @ 0x180123BC0 (sub_180123BC0.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012752C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid string position");
  JUMPOUT(0x1800261F8LL);
}
