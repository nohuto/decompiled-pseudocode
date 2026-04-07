/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003B824
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_3578744d90fe0678adb54c3e7f5b6d47__0__wistd::details::function_allocator_wistd::_Func_class_void_int_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_int_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18004DDA0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_3578744d90fe0678adb54c3e7f5b6d47__0__ea_18004DDA0.c)
 * Callees:
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800853B4 (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateAccentState(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
  {
    v7 = *(_QWORD *)(a1 + 536);
    result = 2LL * i;
    if ( *(_DWORD *)(v7 + 16LL * i + 8) == a3 )
    {
      v9 = *(_QWORD *)(v7 + 16LL * i);
      v10 = *(_QWORD *)(v9 + 392);
      if ( v10 )
      {
        if ( !a2 || (result = *(_QWORD *)(a2 + 120), *(_QWORD *)(v9 + 120) == result) )
        {
          v11 = *(_QWORD *)(v10 + 264);
          if ( v11 )
            result = CAccent::OnAccentStateUpdated(v11, v9, a3);
        }
      }
    }
  }
  return result;
}
