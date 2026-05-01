/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180422524
 * Callers:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180422204 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 *     ??$_Range_construct_or_tidy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180422450 (--$_Range_construct_or_tidy@PEBV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x1804228D8 (-Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV-$vector@V-$vector@UColor@UI@Windows@@V-.c)
 * Callees:
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     ?_Buy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z @ 0x180422074 (-_Buy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( std::vector<Windows::UI::Color>::_Buy(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2) )
  {
    v4 = *a1;
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    a1[1] = v5 + v4;
  }
  return a1;
}
