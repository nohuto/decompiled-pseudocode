/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$48 @ 0x1800BF7D9
 * Callers:
 *     <none>
 * Callees:
 *     ?_Mylast@?$_Vector_alloc@U?$_Vec_base_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@QEAAAEAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800872F0 (-_Mylast@-$_Vector_alloc@U-$_Vec_base_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1800BF99C (--$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAU.c)
 *     ?_Destroy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXPEAUservice_description@immersive_shell_component@winrt@@0@Z @ 0x1800C4820 (-_Destroy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_d.c)
 *     ?_Umove@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAPEAUservice_description@immersive_shell_component@winrt@@PEAU345@00@Z @ 0x1800C487C (-_Umove@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_des.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_48(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx

  v3 = a2[5];
  v4 = a2[17];
  std::vector<winrt::immersive_shell_component::service_description>::_Umove(a1, a2[19], v4 + (v3 << 6), v4);
  v5 = (_QWORD *)std::_Vector_alloc<std::_Vec_base_types<std::wstring>>::_Mylast(a2[16]);
  std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
    v4 + (v3 << 6),
    *v5,
    v4 + 32 * v3);
  v6 = a2[18];
  std::vector<winrt::immersive_shell_component::service_description>::_Destroy(v7, v6, *v5);
  *v5 = v6;
  throw;
}
