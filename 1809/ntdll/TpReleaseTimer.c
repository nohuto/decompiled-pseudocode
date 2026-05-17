/*
 * XREFs of TpReleaseTimer @ 0x18002C440
 * Callers:
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x180080D90 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180087090 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18002C90C (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18002C984 (TppCancelTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18002F03C (TppCleanupGroupMemberRelease.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = TppTimerpValidateTimer(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240, v4, v5, v6);
      ++*(_BYTE *)(a1 + 355);
      if ( (unsigned __int8)TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, 0LL) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
