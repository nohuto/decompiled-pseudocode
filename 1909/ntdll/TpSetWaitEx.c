/*
 * XREFs of TpSetWaitEx @ 0x1800312D0
 * Callers:
 *     RtlpWnfNotificationThread @ 0x1800065D0 (RtlpWnfNotificationThread.c)
 *     EtwpNotificationThread @ 0x180007E90 (EtwpNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x18002E988 (RtlpTpWaitCheckReset.c)
 *     TpSetWait @ 0x18002F0A0 (TpSetWait.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007C554 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D3A0 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x1800313F0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x180031458 (TppCancelWait.c)
 *     TppSetupNextWait @ 0x180031544 (TppSetupNextWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  _BOOL8 v11; // rbp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter();
    return 0;
  }
  v8 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v9 = TppCancelWait(Wait, v8 + 112, 0LL, &v14);
  v10 = v14;
  v11 = v14 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v9 )
    {
      v13 = *((_BYTE *)Wait + 464) | 1;
      *((_QWORD *)Wait + 47) = Handle;
      *((_BYTE *)Wait + 464) = v13;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v13 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v10 += TppSetupNextWait(Wait, Handle, Timeout);
      v14 = v10;
LABEL_8:
      if ( v10 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v10);
        v10 = 0;
        v14 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v10) == -v10 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v11;
}
