/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E17C
 * Callers:
 *     sub_18006CE18 @ 0x18006CE18 (sub_18006CE18.c)
 *     sub_18006CF04 @ 0x18006CF04 (sub_18006CF04.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_1800781B8 @ 0x1800781B8 (sub_1800781B8.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012752C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x18006E18CLL);
}
