/*
 * XREFs of ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x18027FF50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___::Run @ 0x1802801D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___--Run.c)
 * Callees:
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x18027F09C (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 54;
  AcquireSRWLockExclusive(this + 54);
  try
  {
    WindowEventDispatcher::QueuePendingActivationForDestruction((WindowEventDispatcher *)&this[-3], a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x768,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v5);
  }
  return 0LL;
}
