/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x1800620AC
 * Callers:
 *     ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x180062080 (-SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(
        _DWORD *a1,
        __int128 *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r14
  __int128 v6; // xmm6
  unsigned int v7; // r15d
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // rbp
  _DWORD *v11; // rbx
  int v12; // ebx
  int v14; // [rsp+20h] [rbp-58h]
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v12 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v14);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *(_QWORD *)a1;
    v5 = a1;
    v15[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(v4 + 8))(a1);
    v6 = *a2;
    v7 = a1[12];
    v8 = 0LL;
    v15[1] = a1;
    v16 = v6;
    v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = 0LL;
    v11 = v9;
    if ( v9 )
    {
      v9[3] = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v11 + 2) = 0LL;
      if ( v11 + 4 != (_DWORD *)v15 )
      {
        *((_QWORD *)v11 + 2) = a1;
        v5 = 0LL;
      }
      *((_QWORD *)v11 + 3) = a1;
      v8 = v11;
      *((_OWORD *)v11 + 2) = v6;
      v10 = v11;
      *(_QWORD *)v11 = off_18042A0B0;
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v8, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v12 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v12;
}
