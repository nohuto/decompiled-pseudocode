/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___ @ 0x18005B73C
 * Callers:
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18005B6C0 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___(
        _DWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned int v8; // r13d
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v12 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
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
    v16[0] = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = a2[1];
    v8 = a1[12];
    v16[1] = v7;
    v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = 0LL;
    v11 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 3) = 1;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v11[2] = 0LL;
      if ( v11 + 2 != v15 )
      {
        v11[2] = a1;
        v5 = 0LL;
      }
      v11[3] = a1;
      v11[4] = 0LL;
      if ( v11 + 4 != v16 )
      {
        v11[4] = v6;
        v6 = 0LL;
      }
      v11[5] = v7;
      v10 = v11;
      *v11 = off_1803C6D88;
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v8, 0LL, v10, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v12 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    v13 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return (unsigned int)v12;
}
