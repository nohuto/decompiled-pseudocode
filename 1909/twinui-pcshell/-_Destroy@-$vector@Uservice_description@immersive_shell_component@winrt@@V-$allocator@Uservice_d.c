/*
 * XREFs of ?_Destroy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXPEAUservice_description@immersive_shell_component@winrt@@0@Z @ 0x1800C4820
 * Callers:
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$46 @ 0x1800BF7A2 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_winrt--immersi.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$48 @ 0x1800BF7D9 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF7D9.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$47 @ 0x1800BF854 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF854.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$50 @ 0x1800BF899 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF899.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$49 @ 0x1800BF8F0 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF8F0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::vector<winrt::immersive_shell_component::service_description>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  return std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, a3);
}
