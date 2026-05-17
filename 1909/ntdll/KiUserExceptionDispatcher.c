/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A0C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardRestoreContext @ 0x18001EE50 (RtlGuardRestoreContext.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     ZwRaiseException @ 0x18009FA80 (ZwRaiseException.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  unsigned int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}
