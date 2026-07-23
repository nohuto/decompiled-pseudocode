/*
 * XREFs of TpSetWaitEx @ 0x18002C0B0
 * Callers:
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     TpSetWait @ 0x18002F840 (TpSetWait.c)
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitCheckReset @ 0x18003035C (RtlpTpWaitCheckReset.c)
 *     EtwpNotificationThread @ 0x180050590 (EtwpNotificationThread.c)
 *     RtlpWnfNotificationThread @ 0x18005DF40 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRegisterTpNotification @ 0x180080E74 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081C00 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18002C1D0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18002C238 (TppCancelWait.c)
 *     TppSetupNextWait @ 0x18002C320 (TppSetupNextWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char v13; // al
  signed int v14; // ebx
  _BOOL8 v15; // rbp
  char v17; // al
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8, v10, v11);
    return 0;
  }
  v12 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v13 = TppCancelWait(Wait, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v13 )
    {
      v17 = *((_BYTE *)Wait + 464) | 1;
      *((_QWORD *)Wait + 47) = Handle;
      *((_BYTE *)Wait + 464) = v17;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v17 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v14 += TppSetupNextWait(Wait, Handle, Timeout);
      v18 = v14;
LABEL_8:
      if ( v14 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v14);
        v14 = 0;
        v18 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v14) == -v14 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v15;
}
