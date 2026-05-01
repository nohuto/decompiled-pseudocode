/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$47 @ 0x1800BF854
 * Callers:
 *     <none>
 * Callees:
 *     ?_Mylast@?$_Vector_alloc@U?$_Vec_base_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@QEAAAEAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800872F0 (-_Mylast@-$_Vector_alloc@U-$_Vec_base_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXPEAUservice_description@immersive_shell_component@winrt@@0@Z @ 0x1800C4820 (-_Destroy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_d.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_47(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  v3 = (_QWORD *)std::_Vector_alloc<std::_Vec_base_types<std::wstring>>::_Mylast(a2[16]);
  v4 = a2[17];
  std::vector<winrt::immersive_shell_component::service_description>::_Destroy(v5, v4 + 32LL * a2[5], *v3);
  *v3 = v4;
  throw;
}
