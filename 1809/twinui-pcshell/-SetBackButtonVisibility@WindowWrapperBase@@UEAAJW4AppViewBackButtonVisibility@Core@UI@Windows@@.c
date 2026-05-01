/*
 * XREFs of ?SetBackButtonVisibility@WindowWrapperBase@@UEAAJW4AppViewBackButtonVisibility@Core@UI@Windows@@@Z @ 0x180250D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetBackButtonVisibility(__int64 a1, int a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 264);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 112LL))(a1 - 16) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1337LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    *(_DWORD *)(a1 + 448) = a2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x53D,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
