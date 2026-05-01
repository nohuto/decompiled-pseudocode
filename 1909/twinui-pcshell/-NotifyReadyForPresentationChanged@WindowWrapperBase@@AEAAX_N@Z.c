/*
 * XREFs of ?NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z @ 0x180028AB0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Do_call @ 0x1800767F0 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::NotifyReadyForPresentationChanged(WindowWrapperBase *this, char a2)
{
  char *v4; // rbx
  char *v5; // r14
  unsigned int v6; // r15d
  _DWORD *v7; // rsi
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  int v10; // edi
  __int64 v11; // rsi
  unsigned int v12; // r14d
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  if ( a2 && !*((_BYTE *)this + 184) )
  {
    v11 = *((int *)this + 76);
    v12 = *((_DWORD *)this + 141);
    v13 = 0LL;
    *((_BYTE *)this + 184) = 1;
    v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *((_DWORD *)v14 + 3) = 1;
      *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v15[2] = v11;
      v13 = v15;
      *v15 = off_18044B160;
    }
    v16 = SHTaskPoolQueueTask(0LL, 0LL, v12);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA35,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v16,
        (int)v13);
  }
  v4 = (char *)this + 40;
  if ( this != (WindowWrapperBase *)-40LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))((char *)this + 40);
  v5 = (char *)this + 40;
  if ( this != (WindowWrapperBase *)-40LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))((char *)this + 40);
  v6 = *((_DWORD *)this + 141);
  v7 = 0LL;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[3] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v9 + 2) = this;
    *((_QWORD *)v9 + 3) = v4;
    v5 = 0LL;
    *((_BYTE *)v9 + 32) = a2;
    v7 = v9;
    *(_QWORD *)v9 = off_1804466F0;
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA40,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v10,
      (int)v7);
  if ( this != (WindowWrapperBase *)-40LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))((char *)this + 40);
}
