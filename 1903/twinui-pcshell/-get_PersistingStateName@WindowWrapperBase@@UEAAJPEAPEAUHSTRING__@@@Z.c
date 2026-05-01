/*
 * XREFs of ?get_PersistingStateName@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180061D20
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
  int v10; // [rsp+20h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v13; // [rsp+80h] [rbp+8h] BYREF
  HSTRING *v14; // [rsp+88h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+90h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+20h] BYREF

  v14 = a2;
  *a2 = 0LL;
  if ( *((_DWORD *)this + 80) == 1 )
  {
    *(_QWORD *)&v11 = (char *)this - 16;
    *((_QWORD *)&v11 + 1) = &v14;
    CurrentThreadId = GetCurrentThreadId();
    if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v3 = 0;
    else
      v3 = 4;
    LODWORD(v13) = 0;
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
      *((_OWORD *)v6 + 1) = v11;
      *(_QWORD *)v6 = off_18042A088;
      *((_QWORD *)v6 + 4) = &v13;
      v4 = v6;
      v7 = v6;
    }
    v8 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId, 0LL, v4, 0LL);
    if ( v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v8 >= 0 )
      v8 = (int)v13;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A4,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v10);
      __debugbreak();
      JUMPOUT(0x1800EFFA5LL);
    }
  }
  return 0LL;
}
