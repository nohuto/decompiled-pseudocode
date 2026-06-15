/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_77fef75ae00b7ece7efc8affba262c5b__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800FFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x1800FD8C8 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 *     ?UpdateAudioMirroringEnabled@CMonitorManager@@AEAAJPEA_N@Z @ 0x1800FFC54 (-UpdateAudioMirroringEnabled@CMonitorManager@@AEAAJPEA_N@Z.c)
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x1800FFD00 (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_77fef75ae00b7ece7efc8affba262c5b__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  CMonitorManager *v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(v4) = 0;
  CMonitorManager::UpdateRoutedEndpointId(*(void ***)(a1 + 8), (bool *)&v4);
  v3 = *(CMonitorManager **)(a1 + 8);
  LOBYTE(v4) = 0;
  if ( (int)CMonitorManager::UpdateAudioMirroringEnabled(v3, (bool *)&v4) >= 0 )
  {
    if ( (_BYTE)v4 )
      CMonitorManager::OnAudioMirrorEnabledChange(*(CMonitorManager **)(a1 + 8));
  }
}
