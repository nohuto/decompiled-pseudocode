/*
 * XREFs of ?get_ClientWindow@WindowWrapperBase@@UEAAJPEAI@Z @ 0x1800575B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ClientWindow(WindowWrapperBase *this, unsigned int *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  const char *v6; // r9
  unsigned int v7; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v4 = *((_QWORD *)this + 31);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 256LL))((char *)this - 24);
    *a2 = v5;
    v7 = 0;
    if ( !v5 )
      v7 = -2147023728;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x941,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
