/*
 * XREFs of ?SetPositionAndViewData@WindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180064E90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall WindowWrapperBase::SetPositionAndViewData(
        WindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  DWORD CurrentThreadId; // r15d
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // r14
  int v9; // ebx
  int v11; // [rsp+20h] [rbp-68h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int128 v15; // [rsp+48h] [rbp-40h]
  const struct APPLICATION_VIEW_DATA **v16; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v18; // [rsp+90h] [rbp+8h] BYREF
  const struct tagRECT *v19; // [rsp+98h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v20; // [rsp+A0h] [rbp+18h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v13 = -2LL;
  *(_QWORD *)&v15 = &v19;
  *((_QWORD *)&v15 + 1) = this;
  v16 = &v20;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  LODWORD(v18) = 0;
  v5 = 0LL;
  v14 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v7 + 1) = v15;
    *((_QWORD *)v7 + 4) = v16;
    *(_QWORD *)v7 = off_18042A3B8;
    *((_QWORD *)v7 + 5) = &v18;
    v5 = v7;
    v8 = v7;
  }
  v9 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v9 >= 0 )
    v9 = (int)v18;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x146,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v9,
      v11);
    __debugbreak();
    JUMPOUT(0x1800F2097LL);
  }
  return 0LL;
}
