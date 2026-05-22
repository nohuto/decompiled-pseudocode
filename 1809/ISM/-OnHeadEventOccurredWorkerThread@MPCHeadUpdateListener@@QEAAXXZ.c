/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x18005AF60
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18005BD20 (wistd--_Func_impl_wistd--_Callable_obj__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__0__wistd--detai.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180046410 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rdi
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // r12
  __int64 v4; // rcx
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  __int128 v7; // xmm8
  __int128 v8; // xmm9
  __int64 v9; // r15
  _QWORD **v10; // rdi
  _QWORD *v11; // rbx
  char *v12; // r14
  __int64 *v13; // r8
  char *i; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  const struct std::nothrow_t *v17; // rdx
  char *v18; // rax
  char *v19; // [rsp+30h] [rbp-61h] BYREF
  __int128 v20; // [rsp+38h] [rbp-59h]
  _OWORD v21[8]; // [rsp+48h] [rbp-49h] BYREF

  v1 = MPCHeadUpdateListener::s_instance;
  v2 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)MPCHeadUpdateListener::s_instance + 152));
  v5 = *(_OWORD *)((char *)v1 + 88);
  v6 = *(_OWORD *)((char *)v1 + 104);
  v7 = *(_OWORD *)((char *)v1 + 120);
  v8 = *(_OWORD *)((char *)v1 + 136);
  v9 = *((_QWORD *)v1 + 10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (_QWORD **)*((_QWORD *)v1 + 2);
  v11 = *v10;
  v12 = (char *)v20;
  if ( *v10 != v10 )
  {
    do
    {
      v13 = v11 + 3;
      if ( *((char **)&v20 + 1) == v12 )
      {
        std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
          &v19,
          v12,
          v13);
        v12 = (char *)v20;
      }
      else
      {
        v4 = *v13;
        *(_QWORD *)v12 = *v13;
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        v12 += 8;
        *(_QWORD *)&v20 = v12;
      }
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != v10 );
    v2 = v19;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  for ( i = v2; i != v12; i += 8 )
  {
    v15 = *(_QWORD *)i;
    v21[0] = v5;
    v21[1] = v6;
    v21[2] = v7;
    v21[3] = v8;
    (*(void (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v15 + 24LL))(v15, v21, v9);
  }
  if ( v2 )
  {
    v16 = (__int64 *)v2;
    if ( v2 != v12 )
    {
      do
      {
        v4 = *v16;
        if ( *v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        ++v16;
      }
      while ( v16 != (__int64 *)v12 );
    }
    v17 = (const struct std::nothrow_t *)((*((_QWORD *)&v20 + 1) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    v18 = v2;
    if ( (unsigned __int64)v17 >= 0x1000 )
    {
      v17 = (const struct std::nothrow_t *)((char *)v17 + 39);
      v2 = (char *)*((_QWORD *)v2 - 1);
      if ( (unsigned __int64)(v18 - v2 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v4, v17);
        __debugbreak();
      }
    }
    operator delete(v2, v17);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
