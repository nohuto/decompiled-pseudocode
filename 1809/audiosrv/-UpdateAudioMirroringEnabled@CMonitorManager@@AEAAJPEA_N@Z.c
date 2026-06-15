/*
 * XREFs of ?UpdateAudioMirroringEnabled@CMonitorManager@@AEAAJPEA_N@Z @ 0x1800FFC54
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_77fef75ae00b7ece7efc8affba262c5b__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800FFEC0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_77fef75ae00b7ece7efc8affba262c5b__0__ea_1800FFEC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::UpdateAudioMirroringEnabled(CMonitorManager *this, bool *a2)
{
  unsigned int v2; // ebx
  LSTATUS ValueW; // eax
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  int pvData; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  pcbData = 4;
  if ( !a2 )
    return 2147500035LL;
  *a2 = 0;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
             L"AudioMirroringEnabled",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW )
  {
    if ( ValueW > 0 )
      return (unsigned __int16)ValueW | 0x80070000;
    else
      return (unsigned int)ValueW;
  }
  else if ( (pvData != 0) != *((_BYTE *)this + 352) )
  {
    *((_BYTE *)this + 352) = pvData != 0;
    *a2 = 1;
  }
  return v2;
}
