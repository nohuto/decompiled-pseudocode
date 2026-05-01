/*
 * XREFs of ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x180086580
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012F0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     ??0CustomShellManager@@QEAA@XZ @ 0x180161F44 (--0CustomShellManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005DAD0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  size_t v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rbx

  v4 = a2;
  v6 = (a3 - a2) >> 5;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = 32 * v6;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
    *a1 = (__int64)v9;
    a1[1] = (__int64)v9;
    result = *a1;
    a1[2] = v8 + *a1;
    try
    {
      v10 = result;
      while ( v4 != a3 )
      {
        result = std::wstring::wstring(v10);
        v10 += 32LL;
        v4 += 32LL;
      }
      a1[1] = v10;
    }
    catch ( ... )
    {
      std::vector<std::wstring>::_Tidy((__int64)a1);
      throw;
    }
  }
  return result;
}
