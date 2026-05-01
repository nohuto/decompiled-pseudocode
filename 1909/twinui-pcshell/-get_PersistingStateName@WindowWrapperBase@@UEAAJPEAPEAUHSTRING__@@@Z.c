/*
 * XREFs of ?get_PersistingStateName@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180063D00
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall WindowWrapperBase::get_PersistingStateName(WindowWrapperBase *this, HSTRING *a2)
{
  DWORD CurrentThreadId; // r15d
  unsigned int v3; // esi
  _DWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // r14
  int v8; // ebx
  __int128 v10; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v12; // [rsp+80h] [rbp+8h] BYREF
  HSTRING *v13; // [rsp+88h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+90h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+20h] BYREF

  v13 = a2;
  *a2 = 0LL;
  if ( *((_DWORD *)this + 80) == 1 )
  {
    *(_QWORD *)&v10 = (char *)this - 16;
    *((_QWORD *)&v10 + 1) = &v13;
    CurrentThreadId = GetCurrentThreadId();
    if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v3 = 0;
    else
      v3 = 4;
    LODWORD(v12) = 0;
    v4 = 0LL;
    v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    v7 = 0LL;
    if ( v5 )
    {
      v5[3] = 1;
      *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v6 + 1) = v10;
      *(_QWORD *)v6 = off_1804492E0;
      *((_QWORD *)v6 + 4) = &v12;
      v4 = v6;
      v7 = v6;
    }
    v8 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId);
    if ( v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v8 >= 0 )
      v8 = (int)v12;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A4,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        (int)v4);
      __debugbreak();
      JUMPOUT(0x18010E9B3LL);
    }
  }
  return 0LL;
}
