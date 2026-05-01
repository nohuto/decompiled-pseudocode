/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_8d0f013aa2e1126d91d077424ff08d75__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18017B860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33873f8407ace622a84e55bd6a755f63___ @ 0x1801772C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_33873f8407ace622a84e55bd6a755f63___.c)
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_8d0f013aa2e1126d91d077424ff08d75__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v5 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_33873f8407ace622a84e55bd6a755f63___(v2, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        221LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
