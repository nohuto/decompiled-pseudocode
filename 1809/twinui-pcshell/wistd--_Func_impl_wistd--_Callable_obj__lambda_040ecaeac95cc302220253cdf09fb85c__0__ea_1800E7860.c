/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_040ecaeac95cc302220253cdf09fb85c__0__wistd::details::function_allocator_wistd::_Func_class_void__SEB_EVENT_HEADER_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void__SEB_EVENT_HEADER_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E7860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___ @ 0x1800E4DE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___.c)
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_040ecaeac95cc302220253cdf09fb85c__0__wistd::details::function_allocator_wistd::_Func_class_void__SEB_EVENT_HEADER_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void__SEB_EVENT_HEADER_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // al
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (*a2 & 2) != 0;
  v7 = v2;
  LOBYTE(v6) = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___(v2, &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      159LL,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
