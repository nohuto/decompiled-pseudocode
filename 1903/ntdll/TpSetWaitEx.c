/*
 * XREFs of TpSetWaitEx @ 0x1800312D0
 * Callers:
 *     sub_1800065D0 @ 0x1800065D0 (sub_1800065D0.c)
 *     sub_180007E90 @ 0x180007E90 (sub_180007E90.c)
 *     sub_18002E988 @ 0x18002E988 (sub_18002E988.c)
 *     TpSetWait @ 0x18002F0A0 (TpSetWait.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 *     sub_18007CD00 @ 0x18007CD00 (sub_18007CD00.c)
 * Callees:
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180031544 @ 0x180031544 (sub_180031544.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  _BOOL8 v11; // rbp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)sub_1800313F0(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    sub_18010EFC8();
    return 0;
  }
  v8 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v9 = sub_180031458(Wait, v8 + 112, 0LL, &v14);
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
      v10 += sub_180031544(Wait, Handle, Timeout);
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
