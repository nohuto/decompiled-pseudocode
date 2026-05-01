/*
 * XREFs of ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B8AC8
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802BB990 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_e7cf582f88f2a01adcc530211be9abfc__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1802BE7D0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_e7cf582f88f2a01adcc530211be9abfc__0__ea_1802BE7D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnTabtipRegistryChanged(TouchKeyboardExperienceManager *this)
{
  bool v1; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 87) )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            L"EnableDesktopModeAutoInvoke",
            0x10u,
            0LL,
            &pvData,
            &pcbData)
      || (pcbData = 4,
          !RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             L"EnableDesktopModeAutoInvoke",
             0x10u,
             0LL,
             &pvData,
             &pcbData)) )
    {
      v1 = pvData != 0;
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 87) + 96LL) + 491LL) = v1;
  }
  return 0LL;
}
