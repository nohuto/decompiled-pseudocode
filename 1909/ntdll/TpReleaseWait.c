/*
 * XREFs of TpReleaseWait @ 0x1800302D0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007C554 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D3A0 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x1800313F0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x180031458 (TppCancelWait.c)
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  __int64 v2; // rbx
  int v3; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait(Wait, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Wait, 1LL) )
  {
    v2 = *((_QWORD *)Wait + 18);
    *((_QWORD *)Wait + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    TppCancelWait(Wait, v2 + 112, 2LL, &v5);
    ++*((_BYTE *)Wait + 355);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    v3 = 1 - v5;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5 - 1) == v3 )
      (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  }
}
