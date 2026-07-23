/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A0490
 * Callers:
 *     <none>
 * Callees:
 *     RtlRestoreContext @ 0x18001EE50 (RtlRestoreContext.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  NTSTATUS v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( qword_18017A230 )
    qword_18017A230(&STACK[0x4F0], &retaddr);
  if ( sub_18006A670((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr, 0);
  RtlRaiseStatus(v0);
}
