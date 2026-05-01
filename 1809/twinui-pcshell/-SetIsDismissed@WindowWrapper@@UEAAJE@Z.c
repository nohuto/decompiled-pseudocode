/*
 * XREFs of ?SetIsDismissed@WindowWrapper@@UEAAJE@Z @ 0x180065FA0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_994ddd7633352239e44e5123f94c721c___ @ 0x180066048 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_994ddd7633352239e44e5123f94c721c.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowWrapper::SetIsDismissed(WindowWrapper *this, char a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v9; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this - 37) + 184LL))(*((_QWORD *)this - 37), &SRWLock);
  if ( a2 != *((_BYTE *)this + 40) )
  {
    *((_BYTE *)this + 40) = a2;
    if ( *((_QWORD *)this - 36) )
    {
      if ( a2 )
      {
        v9 = (char *)this - 584;
        CurrentThreadId = GetCurrentThreadId();
        v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_994ddd7633352239e44e5123f94c721c___(
               v5,
               CurrentThreadId,
               &v9);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x4A,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v6,
            -2);
          __debugbreak();
          JUMPOUT(0x1800D31BCLL);
        }
      }
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
