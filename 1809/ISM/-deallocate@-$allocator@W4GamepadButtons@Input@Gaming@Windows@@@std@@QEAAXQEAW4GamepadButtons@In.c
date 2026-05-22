/*
 * XREFs of ?deallocate@?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x180008C90
 * Callers:
 *     _std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button_&___ptr64__::_1_::catch$0 @ 0x18012E5C7 (_std--vector_enum__Button_std--allocator_enum__Button___--_Emplace_reallocate_enum__Button_-___p.c)
 *     _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Reallocate_exactly_::_1_::catch$0 @ 0x1801319F5 (_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Reallocate_exactly_--_1_-.c)
 *     _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Emplace_reallocate_Windows::UI::Color_const_&___ptr64__::_1_::catch$0 @ 0x180131A1F (_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Emplace_reallocate_Window.c)
 *     _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01____::_1_::catch$0 @ 0x180131A49 (_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Resize__lambda_c948d9edf9.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx

  v4 = (const struct std::nothrow_t *)(4 * a3);
  if ( (unsigned __int64)(4 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x180008CD1LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, v4);
}
