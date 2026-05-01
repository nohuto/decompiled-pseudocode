/*
 * XREFs of ??$_Ucopy@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAPEAUservice_description@immersive_shell_component@winrt@@PEBU234@0PEAU234@@Z @ 0x1800BFA14
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1800BF574 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BF530 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ?add_ref@?$com_ptr@UIUnknown@@@winrt@@AEBAXXZ @ 0x1800C48BC (-add_ref@-$com_ptr@UIUnknown@@@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Ucopy<winrt::immersive_shell_component::service_description const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi

  v4 = a4;
  if ( a2 != a3 )
  {
    v6 = a2 - a4;
    do
    {
      *(_OWORD *)v4 = *(_OWORD *)(v6 + v4);
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v6 + v4 + 16);
      winrt::com_ptr<IUnknown>::add_ref();
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v6 + v4 + 24);
      v4 += 32LL;
    }
    while ( v6 + v4 != a3 );
  }
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
    (__int64 *)v4,
    (__int64 *)v4);
  return v4;
}
