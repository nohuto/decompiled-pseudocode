/*
 * XREFs of TpWaitForWait @ 0x18002F0B0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  unsigned int v3; // ebx
  char v5; // bp
  __int64 v6; // rbx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0;
  v5 = 0;
  if ( (unsigned int)sub_1800313F0(Wait, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
    {
      v6 = *((_QWORD *)Wait + 18);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      ++*((_BYTE *)Wait + 355);
      sub_180031458(Wait, v6 + 112, 2LL, &v7);
      if ( *((_DWORD *)Wait + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      v3 = v7;
    }
    sub_180031C98(Wait, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      --*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    }
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v3) == -v3 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
