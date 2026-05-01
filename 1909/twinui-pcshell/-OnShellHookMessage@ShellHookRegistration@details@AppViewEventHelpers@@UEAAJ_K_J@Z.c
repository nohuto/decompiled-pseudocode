/*
 * XREFs of ?OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z @ 0x180325240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180269BE0 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  void *v7; // rcx
  struct IWeakReference *Ptr; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+20h]

  v14 = 0LL;
  v6 = this + 7;
  AcquireSRWLockShared(this + 7);
  try
  {
    v15 = v6;
    v7 = v14;
    v14 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    Ptr = (struct IWeakReference *)this[8].Ptr;
    if ( Ptr )
    {
      v9 = wil::details::weak_query_policy::query(Ptr, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c, &v14);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5421LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v9);
      Ptr = (struct IWeakReference *)v14;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v6 )
    {
      ReleaseSRWLockShared(v6);
      Ptr = (struct IWeakReference *)v14;
    }
    if ( Ptr )
    {
      v10 = ((__int64 (__fastcall *)(struct IWeakReference *, __int64, __int64))Ptr->lpVtbl->Resolve)(Ptr, a2, a3);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
      result = v10;
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appvieweventhelpers.h",
                           v11);
  }
  return result;
}
