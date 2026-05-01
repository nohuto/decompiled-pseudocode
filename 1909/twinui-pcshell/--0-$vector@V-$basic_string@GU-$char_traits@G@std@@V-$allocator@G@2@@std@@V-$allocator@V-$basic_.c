/*
 * XREFs of ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180089000
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012F0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18018065C (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 */

__int128 *__fastcall std::vector<std::wstring>::vector<std::wstring>(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = a2[1];
  v3 = *a2;
  qword_1805C2638 = 0LL;
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = 0LL;
  std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(a1, v3, v2);
  return &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds;
}
