/*
 * XREFs of ?SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x1800616B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18006172C (-SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapper::SetImageLocation(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  v4 = *(_QWORD *)(a1 - 296);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
    v7 = *a2;
    WindowWrapper::SetImageLocationNoLock(a1 - 584, &v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x33,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v5);
  }
  return result;
}
