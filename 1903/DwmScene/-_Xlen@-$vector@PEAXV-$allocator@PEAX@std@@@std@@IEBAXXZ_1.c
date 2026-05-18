/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800260D8
 * Callers:
 *     sub_180026670 @ 0x180026670 (sub_180026670.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_1800B8D08 @ 0x1800B8D08 (sub_1800B8D08.c)
 *     sub_180123AB0 @ 0x180123AB0 (sub_180123AB0.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012741C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid string position");
  JUMPOUT(0x1800260E8LL);
}
