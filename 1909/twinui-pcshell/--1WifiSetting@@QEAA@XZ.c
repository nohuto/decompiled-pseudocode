/*
 * XREFs of ??1WifiSetting@@QEAA@XZ @ 0x1800798CC
 * Callers:
 *     _dynamic_atexit_destructor_for__c_retailDemoHotspot__ @ 0x1800E9840 (_dynamic_atexit_destructor_for__c_retailDemoHotspot__.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void __fastcall WifiSetting::~WifiSetting(WifiSetting *this)
{
  std::wstring::_Tidy_deallocate(&unk_1805C2600);
  std::wstring::_Tidy_deallocate(&unk_1805C25E0);
}
