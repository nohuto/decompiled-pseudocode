/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___ @ 0x18005B370
 * Callers:
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18005B290 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___(
        _DWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  int v12; // ebx
  int v14; // [rsp+20h] [rbp-78h]
  _QWORD v15[12]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v17; // [rsp+A0h] [rbp+8h]
  _QWORD *v18; // [rsp+B0h] [rbp+18h]
  __int64 v19; // [rsp+B8h] [rbp+20h]

  if ( a1[14] == 2 )
  {
    v12 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a2);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *(_QWORD *)a1;
    v5 = a1;
    v15[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(v4 + 8))(a1);
    v6 = *a2;
    v15[1] = a1;
    v15[2] = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = 0LL;
    v19 = a2[1];
    v15[3] = v19;
    v17 = a1[12];
    v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = 0LL;
    v9 = v8;
    v10 = v6;
    v11 = v6;
    if ( v8 )
    {
      *((_DWORD *)v8 + 3) = 1;
      *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v9[2] = 0LL;
      if ( v9 + 2 != v15 )
      {
        v9[2] = a1;
        v5 = 0LL;
      }
      v9[3] = a1;
      v9[4] = v6;
      v6 = 0LL;
      v10 = 0LL;
      v9[5] = v19;
      v7 = v9;
      v18 = v9;
      *v9 = off_180448EB8;
      v11 = 0LL;
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v17);
    if ( v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v10 = v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v12 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    if ( *a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  }
  return (unsigned int)v12;
}
