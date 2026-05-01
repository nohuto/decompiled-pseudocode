/*
 * XREFs of ??4?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180422824
 * Callers:
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x180422B50 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180422204 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 */

__int64 __fastcall std::vector<std::vector<Windows::UI::Color>>::operator=(__int64 a1, __int64 *a2)
{
  if ( (__int64 *)a1 != a2 )
    std::vector<std::vector<Windows::UI::Color>>::_Assign_range<std::vector<Windows::UI::Color> *>(a1, *a2, a2[1]);
  return a1;
}
