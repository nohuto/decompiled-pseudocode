/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180085288
 * Callers:
 *     __lambda_3edc654c66854fb27c6b7c00085e6f36_::operator()_::_1_::dtor$1 @ 0x1800B01EA (__lambda_3edc654c66854fb27c6b7c00085e6f36_--operator()_--_1_--dtor$1.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x1800B4E62 (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$1 @ 0x1800B4E88 (_AppUsageTracker--GetActiveApps_--_1_--dtor$1.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1800B681C (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1800BAF16 (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$0 @ 0x1801D5CB1 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$2 @ 0x1801D5CC9 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x1801D6381 (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<std::wstring>::~vector<std::wstring>()
{
  return std::vector<std::wstring>::_Tidy();
}
