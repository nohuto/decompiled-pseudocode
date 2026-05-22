/*
 * XREFs of ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800C7200
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800C65A0 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180037CF0 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

char __fastcall std::vector<enum _Button>::_Range_construct_or_tidy<enum _Button const *>(
        void **a1,
        const void *a2,
        __int64 a3)
{
  size_t v5; // rdi
  char result; // al
  char *v7; // rbx

  v5 = a3 - (_QWORD)a2;
  result = std::vector<enum _Button>::_Buy(a1, (a3 - (__int64)a2) >> 2);
  if ( result )
  {
    v7 = (char *)*a1;
    memmove_0(*a1, a2, v5);
    result = v5 + (_BYTE)v7;
    a1[1] = &v7[v5];
  }
  return result;
}
