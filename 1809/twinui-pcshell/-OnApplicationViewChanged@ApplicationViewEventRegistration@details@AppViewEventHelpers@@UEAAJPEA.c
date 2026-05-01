/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802AD500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F982C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v8; // rbx
  void *v9; // rcx
  struct IWeakReference *Ptr; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v8 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  try
  {
    v9 = v16;
    v16 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    Ptr = (struct IWeakReference *)a1[8].Ptr;
    if ( Ptr )
    {
      v11 = wil::details::weak_query_policy::query(Ptr, &GUID_727f9e97_76ee_497b_a942_b6371328485c, &v16);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5800LL,
          (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
          (const char *)(unsigned int)v11);
      Ptr = (struct IWeakReference *)v16;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v8 )
    {
      ReleaseSRWLockShared(v8);
      Ptr = (struct IWeakReference *)v16;
    }
    if ( Ptr )
    {
      v12 = ((__int64 (__fastcall *)(struct IWeakReference *, __int64, _QWORD, __int64))Ptr->lpVtbl->Resolve)(
              Ptr,
              a2,
              a3,
              a4);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
      result = v12;
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5E,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appvieweventhelpers.h",
                           v13);
  }
  return result;
}
