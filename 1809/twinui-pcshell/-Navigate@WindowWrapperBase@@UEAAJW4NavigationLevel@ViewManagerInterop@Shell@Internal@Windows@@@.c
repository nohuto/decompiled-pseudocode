/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18005E440
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // r14d
  unsigned int v3; // esi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // rdi
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-58h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v12; // [rsp+80h] [rbp+8h] BYREF
  int v13; // [rsp+88h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+90h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+20h] BYREF

  v13 = a2;
  *(_QWORD *)&v10 = &v13;
  *((_QWORD *)&v10 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  LODWORD(v12) = 0;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v5 + 1) = v10;
    *(_QWORD *)v5 = off_1803C6DD8;
    *((_QWORD *)v5 + 4) = &v12;
    v6 = v5;
  }
  v7 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    v7 = (int)v12;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x320,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v9);
    __debugbreak();
    JUMPOUT(0x1800D07E1LL);
  }
  return 0LL;
}
