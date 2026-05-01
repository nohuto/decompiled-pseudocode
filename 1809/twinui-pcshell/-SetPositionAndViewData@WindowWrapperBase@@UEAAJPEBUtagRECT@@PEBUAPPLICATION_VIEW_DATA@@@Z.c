/*
 * XREFs of ?SetPositionAndViewData@WindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800601E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall WindowWrapperBase::SetPositionAndViewData(
        WindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  DWORD CurrentThreadId; // r14d
  unsigned int v4; // esi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-68h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-48h]
  __int128 v14; // [rsp+48h] [rbp-40h]
  const struct APPLICATION_VIEW_DATA **v15; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v17; // [rsp+90h] [rbp+8h] BYREF
  const struct tagRECT *v18; // [rsp+98h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v19; // [rsp+A0h] [rbp+18h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+20h] BYREF

  v19 = a3;
  v18 = a2;
  v12 = -2LL;
  *(_QWORD *)&v14 = &v18;
  *((_QWORD *)&v14 + 1) = this;
  v15 = &v19;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  LODWORD(v17) = 0;
  v13 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v6 + 1) = v14;
    *((_QWORD *)v6 + 4) = v15;
    *(_QWORD *)v6 = off_1803C6E00;
    *((_QWORD *)v6 + 5) = &v17;
    v7 = v6;
  }
  v8 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    v8 = (int)v17;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x124,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v8,
      v10);
    __debugbreak();
    JUMPOUT(0x1800D1DF9LL);
  }
  return 0LL;
}
