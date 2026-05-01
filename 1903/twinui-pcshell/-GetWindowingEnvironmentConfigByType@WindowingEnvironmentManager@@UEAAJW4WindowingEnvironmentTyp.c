/*
 * XREFs of ?GetWindowingEnvironmentConfigByType@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@PEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x18002BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigByType(
        RTL_SRWLOCK *a1,
        int a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  v6 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  Ptr = a1[4].Ptr;
  v8 = Ptr;
  v9 = (_QWORD *)Ptr[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_18;
  do
  {
    if ( *((_DWORD *)v9 + 8) < a2 )
    {
      v9 = (_QWORD *)v9[2];
    }
    else
    {
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == Ptr || a2 < *((_DWORD *)v8 + 8) )
LABEL_18:
    v8 = Ptr;
  if ( v8 == Ptr )
  {
    if ( v6 )
      ReleaseSRWLockShared(v6);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    return 2147943568LL;
  }
  else
  {
    v10 = v8[5];
    v14 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v10)(
            v10,
            &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
            a3);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x152D,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v11,
        -2);
      return (unsigned int)v14;
    }
    else
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      return 0LL;
    }
  }
}
