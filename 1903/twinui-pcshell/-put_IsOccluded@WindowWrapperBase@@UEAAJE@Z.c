/*
 * XREFs of ?put_IsOccluded@WindowWrapperBase@@UEAAJE@Z @ 0x180060690
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1c50d0de6451be37e53a34316762cc87___ @ 0x1802A5040 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1c50d0de6451be37e53a34316762cc87.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::put_IsOccluded(WindowWrapperBase *this, char a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]
  char v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
    if ( (v12 != 0) != *((_BYTE *)this + 177) )
    {
      v9[0] = (char *)this - 8;
      v9[1] = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1c50d0de6451be37e53a34316762cc87___(
             v7,
             CurrentThreadId,
             v9);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4C6,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v8,
          -2);
      *((_BYTE *)this + 177) = v12 != 0;
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4CD,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
