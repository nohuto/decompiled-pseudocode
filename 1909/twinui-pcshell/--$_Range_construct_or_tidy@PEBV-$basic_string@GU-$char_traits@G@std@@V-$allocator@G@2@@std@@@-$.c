/*
 * XREFs of ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18018065C
 * Callers:
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180089000 (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005D1A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  size_t v7; // rdi
  __int64 v8; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a2;
  v6 = (a3 - a2) >> 5;
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = 0LL;
  qword_1805C2638 = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = 4 * v6;
    result = (_UNKNOWN **)std::_Allocate<16,std::_Default_allocate_traits,0>(v7 * 8);
    v8 = (__int64)result;
    *(_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = result;
    *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = result;
    qword_1805C2638 = (__int64)&result[v7];
    try
    {
      while ( v5 != a3 )
      {
        result = (_UNKNOWN **)std::wstring::wstring(v8);
        v8 += 32LL;
        v5 += 32LL;
      }
      *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = v8;
    }
    catch ( ... )
    {
      std::vector<std::wstring>::_Tidy((__int64)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds);
      throw;
    }
  }
  return result;
}
