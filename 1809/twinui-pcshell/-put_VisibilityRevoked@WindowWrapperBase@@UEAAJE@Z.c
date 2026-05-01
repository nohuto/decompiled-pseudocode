/*
 * XREFs of ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x180252400
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001F0B8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowWrapperBase::put_VisibilityRevoked(WindowWrapperBase *this, char a2)
{
  int v4; // eax
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 32) + 184LL))(*((_QWORD *)this + 32), &SRWLock);
  v4 = *((_DWORD *)this + 39);
  if ( (v4 & 0x18) != 0 )
  {
    if ( a2 )
      v5 = v4 & 0xFFFFFFDF;
    else
      v5 = v4 | 0x20;
    *((_DWORD *)this + 39) = v5;
    WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)((char *)this - 24));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1850LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)SRWLock;
  }
}
