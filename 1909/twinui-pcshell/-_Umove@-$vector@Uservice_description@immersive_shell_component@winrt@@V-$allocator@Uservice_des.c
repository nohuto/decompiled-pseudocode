/*
 * XREFs of ?_Umove@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAPEAUservice_description@immersive_shell_component@winrt@@PEAU345@00@Z @ 0x1800C487C
 * Callers:
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$48 @ 0x1800BF7D9 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF7D9.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$50 @ 0x1800BF899 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF899.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::vector<winrt::immersive_shell_component::service_description>::_Umove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  return std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
           a2,
           a3,
           a4);
}
