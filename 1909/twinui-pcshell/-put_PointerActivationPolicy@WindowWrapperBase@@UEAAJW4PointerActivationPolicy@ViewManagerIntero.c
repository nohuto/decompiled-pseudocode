/*
 * XREFs of ?put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C8750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x1802C6894 (-PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall WindowWrapperBase::put_PointerActivationPolicy(__int64 a1, int a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4);
    *(_DWORD *)(a1 + 232) = a2;
    WindowWrapperBase::PushPointerActivationPolicyToWindow((WindowWrapperBase *)(a1 - 8));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x47A,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
