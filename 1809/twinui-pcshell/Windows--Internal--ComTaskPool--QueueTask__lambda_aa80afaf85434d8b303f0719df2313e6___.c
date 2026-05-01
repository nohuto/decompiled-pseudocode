/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___ @ 0x1800E4DE8
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_040ecaeac95cc302220253cdf09fb85c__0__wistd::details::function_allocator_wistd::_Func_class_void__SEB_EVENT_HEADER_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void__SEB_EVENT_HEADER_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E7860 (wistd--_Func_impl_wistd--_Callable_obj__lambda_040ecaeac95cc302220253cdf09fb85c__0__ea_1800E7860.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___(
        __int64 a1,
        _BYTE *a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  _BYTE *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v3);
    v5[16] = *a2;
    *((_QWORD *)v5 + 3) = 0LL;
    AgileGitPtr::operator=(v5 + 24, a2 + 8);
    v4 = v5;
    *(_QWORD *)v5 = off_1803CD5F8;
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
