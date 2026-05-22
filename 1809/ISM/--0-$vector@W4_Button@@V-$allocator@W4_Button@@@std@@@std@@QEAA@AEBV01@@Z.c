/*
 * XREFs of ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C6EA8
 * Callers:
 *     ?GetIdForNewComboButton@ButtonRecognizer@@AEAAIAEAUComboButtonRegistration@@@Z @ 0x1800C5F04 (-GetIdForNewComboButton@ButtonRecognizer@@AEAAIAEAUComboButtonRegistration@@@Z.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800C60C8 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800C6268 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 * Callees:
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180037CF0 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 *__fastcall std::vector<enum _Button>::vector<enum _Button>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( std::vector<enum _Button>::_Buy(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2) )
  {
    v4 = *a1;
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    a1[1] = v5 + v4;
  }
  return a1;
}
