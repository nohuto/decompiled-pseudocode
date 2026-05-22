/*
 * XREFs of ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FC7C4
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800FDB5C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Ucopy@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@PEAW42@00@Z @ 0x18006647C (--$_Ucopy@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Butto.c)
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x1800FDDBC (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 */

char *__fastcall std::vector<enum _Button>::_Range_construct_or_tidy<enum _Button const *>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  char *result; // rax
  __int64 v7; // rcx

  result = (char *)std::vector<enum _Button>::_Buy(a1, (a3 - (__int64)a2) >> 2);
  if ( (_BYTE)result )
  {
    result = std::vector<enum _Button>::_Ucopy<enum _Button *>(v7, a2, a3, *(void **)a1);
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
