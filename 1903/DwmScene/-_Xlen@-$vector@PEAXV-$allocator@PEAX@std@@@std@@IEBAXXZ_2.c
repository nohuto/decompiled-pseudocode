/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E06C
 * Callers:
 *     sub_18006CD08 @ 0x18006CD08 (sub_18006CD08.c)
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_1800780A8 @ 0x1800780A8 (sub_1800780A8.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012741C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x18006E07CLL);
}
