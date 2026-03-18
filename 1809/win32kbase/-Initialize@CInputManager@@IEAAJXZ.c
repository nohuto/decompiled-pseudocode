/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1C0093D58
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0093CC0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 KernelEvent; // rax

  KernelEvent = hUserCreateKernelEvent(1LL);
  *(_QWORD *)this = KernelEvent;
  if ( KernelEvent )
    *((_QWORD *)this + 16) = 0LL;
  return KernelEvent == 0 ? 0xC0000017 : 0;
}
