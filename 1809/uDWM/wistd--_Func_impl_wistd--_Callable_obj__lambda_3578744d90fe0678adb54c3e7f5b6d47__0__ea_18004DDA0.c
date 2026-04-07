/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_3578744d90fe0678adb54c3e7f5b6d47__0__wistd::details::function_allocator_wistd::_Func_class_void_int_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_int_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18004DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003B824 (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_3578744d90fe0678adb54c3e7f5b6d47__0__wistd::details::function_allocator_wistd::_Func_class_void_int_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_int_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rbx
  char v3; // di
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *a2 != 0;
  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *(_BYTE *)(v2 + 601) != v3 )
  {
    *(_BYTE *)(v2 + 601) = v3;
    CWindowList::UpdateAccentState(v2, 0LL, 5u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}
