/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A4090
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardRestoreContext @ 0x180003240 (RtlGuardRestoreContext.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A2ED0 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  NTSTATUS v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr, 0);
  RtlRaiseStatus(v0);
}
