/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180097AB8
 * Callers:
 *     wistd::__function::__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_::operator() @ 0x1800975C0 (wistd--__function--__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180084E38 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(struct _RTL_CRITICAL_SECTION *this)
{
  MPCHeadUpdateListener *v1; // r14
  char *v2; // rdi
  char *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r15
  _QWORD **v6; // r14
  _QWORD *i; // rbx
  __int64 *v8; // r8
  __int64 v9; // rcx
  char *v10; // r14
  char *j; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rbx
  char *v15; // [rsp+28h] [rbp-69h] BYREF
  char *v16; // [rsp+30h] [rbp-61h]
  char *v17; // [rsp+38h] [rbp-59h]
  __int64 v18; // [rsp+40h] [rbp-51h]
  __int128 v19; // [rsp+48h] [rbp-49h]
  __int128 v20; // [rsp+58h] [rbp-39h]
  __int128 v21; // [rsp+68h] [rbp-29h]
  __int128 v22; // [rsp+78h] [rbp-19h]
  _OWORD v23[6]; // [rsp+88h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v25; // [rsp+100h] [rbp+6Fh] BYREF

  v24 = this;
  v18 = -2LL;
  v1 = MPCHeadUpdateListener::s_instance;
  v15 = 0LL;
  v2 = 0LL;
  v16 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)MPCHeadUpdateListener::s_instance + 152));
  v24 = v4;
  v19 = *(_OWORD *)((char *)v1 + 88);
  v20 = *(_OWORD *)((char *)v1 + 104);
  v21 = *(_OWORD *)((char *)v1 + 120);
  v22 = *(_OWORD *)((char *)v1 + 136);
  v5 = *((_QWORD *)v1 + 10);
  v25 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (_QWORD **)*((_QWORD *)v1 + 2);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = i + 3;
    if ( v3 == v2 )
    {
      std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
        &v15,
        v2,
        v8);
      v3 = v17;
      v2 = v16;
    }
    else
    {
      v9 = *v8;
      *(_QWORD *)v2 = *v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v2 += 8;
      v16 = v2;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v24);
  v10 = v15;
  for ( j = v15; j != v2; j += 8 )
  {
    v12 = *(__int64 **)j;
    v13 = **(_QWORD **)j;
    v23[0] = v19;
    v23[1] = v20;
    v23[2] = v21;
    v23[3] = v22;
    (*(void (__fastcall **)(__int64 *, _OWORD *, __int64))(v13 + 24))(v12, v23, v5);
  }
  if ( v10 )
  {
    v14 = (__int64 *)v10;
    if ( v10 != v2 )
    {
      do
        wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v14++);
      while ( v14 != (__int64 *)v2 );
    }
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(8 * ((v3 - v10) >> 3)));
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v25);
}
