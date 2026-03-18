/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016BDE0
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x1801753D8 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 *     ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801C2008 (--$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CB300 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const___ @ 0x18016BAD8 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 */

void **__fastcall std::string::assign(void **a1, const void *a2, size_t a3)
{
  void *v5; // rsi
  void **result; // rax

  if ( a3 > (unsigned __int64)a1[3] )
    return (void **)std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const___(
                      (__int64)a1,
                      a3,
                      a3,
                      a2);
  v5 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v5 = *a1;
  a1[2] = (void *)a3;
  memmove_0(v5, a2, a3);
  result = a1;
  *((_BYTE *)v5 + a3) = 0;
  return result;
}
