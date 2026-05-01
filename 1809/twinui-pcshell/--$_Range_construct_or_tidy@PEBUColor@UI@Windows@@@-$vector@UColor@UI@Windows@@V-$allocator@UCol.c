/*
 * XREFs of ??$_Range_construct_or_tidy@PEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEBUColor@UI@Windows@@0Uforward_iterator_tag@1@@Z @ 0x18039CE90
 * Callers:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18008350C (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 * Callees:
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ?_Buy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z @ 0x18039D1A4 (-_Buy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Range_construct_or_tidy<Windows::UI::Color const *>(
        void **a1,
        const void *a2,
        __int64 a3)
{
  size_t v5; // rdi
  __int64 result; // rax
  char *v7; // rbx

  v5 = a3 - (_QWORD)a2;
  result = std::vector<Windows::UI::Color>::_Buy(a1, (a3 - (__int64)a2) >> 2);
  if ( (_BYTE)result )
  {
    v7 = (char *)*a1;
    memmove_0(*a1, a2, v5);
    result = (__int64)&v7[v5];
    a1[1] = &v7[v5];
  }
  return result;
}
