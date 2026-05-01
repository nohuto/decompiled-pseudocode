/*
 * XREFs of ??$_Range_construct_or_tidy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180402E20
 * Callers:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x1800863A4 (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 * Callees:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180402EF4 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Buy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x1804036D4 (-_Buy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::vector<Windows::UI::Color>>::_Range_construct_or_tidy<std::vector<Windows::UI::Color> const *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rbx

  v4 = a2;
  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  result = std::vector<std::vector<Windows::UI::Color>>::_Buy(a1, (v6 >> 63) + v6, a3);
  if ( (_BYTE)result )
  {
    v8 = *a1;
    try
    {
      while ( v4 != a3 )
      {
        result = std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v8, v4);
        v8 += 24LL;
        v4 += 24LL;
      }
      a1[1] = v8;
    }
    catch ( ... )
    {
      std::vector<std::vector<Windows::UI::Color>>::_Tidy(a1);
      throw;
    }
  }
  return result;
}
