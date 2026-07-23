/*
 * XREFs of TpReleaseWait @ 0x18002F6C0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x180080E74 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081C00 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18002C1D0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18002C238 (TppCancelWait.c)
 *     TppCleanupGroupMemberRelease @ 0x18002F03C (TppCleanupGroupMemberRelease.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 1) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Wait, 1LL);
    if ( v2 )
    {
      v3 = *((_QWORD *)Wait + 18);
      *((_QWORD *)Wait + 23) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      TppCancelWait((__int64)Wait, v3 + 112, 2, &v6);
      ++*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      v4 = 1 - v6;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v6 - 1) == v4 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
