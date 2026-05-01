/*
 * XREFs of ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x1800837C8
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012E0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     ??0CustomShellManager@@QEAA@XZ @ 0x18008C294 (--0CustomShellManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Ucopy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBV21@0PEAV21@@Z @ 0x18008B718 (--$_Ucopy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic_st.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18008C9DC (-_Xlength@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  size_t v6; // rdi
  _QWORD *v7; // rax

  v4 = (a3 - a2) >> 5;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Xlength(a1);
    v6 = 32 * v4;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = v6 + *a1;
    try
    {
      result = std::vector<std::wstring>::_Ucopy<std::wstring const *>(a1);
      a1[1] = result;
    }
    catch ( ... )
    {
      std::vector<std::wstring>::_Tidy(a1);
      throw;
    }
  }
  return result;
}
