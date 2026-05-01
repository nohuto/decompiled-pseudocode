/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180137810
 * Callers:
 *     _CustomShellManager::CustomShellManager_::_1_::dtor$3 @ 0x18008C393 (_CustomShellManager--CustomShellManager_--_1_--dtor$3.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$0 @ 0x180186591 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$2 @ 0x1801865A9 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x180186C4A (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 a1)
{
  std::vector<std::wstring>::_Tidy(a1);
}
