/*
 * XREFs of ?EnsurePositionOffset@WindowWrapperBase@@UEAAJXZ @ 0x1800276F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowWrapperBase::EnsurePositionOffset(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // r12d
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v11; // [rsp+80h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+90h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+98h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 36) + 192LL))(*((_QWORD *)this + 36), &SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  LODWORD(v11) = 0;
  v4 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    *((_DWORD *)v5 + 3) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6[2] = this;
    *v6 = off_180446628;
    v6[3] = &v11;
    v4 = v6;
    v7 = v6;
  }
  v8 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v8 >= 0 )
    v8 = (int)v11;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v8,
      (int)v4);
    __debugbreak();
    JUMPOUT(0x1800F5166LL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
