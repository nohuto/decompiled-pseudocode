/*
 * XREFs of TpReleaseTimer @ 0x180031810
 * Callers:
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x18007C480 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180082C10 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppTimerpValidateTimer @ 0x1800324FC (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003257C (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  signed __int32 v3; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  v3 = TppTimerpValidateTimer(a1, 1LL, 0LL);
  if ( v3 )
  {
    LOBYTE(v3) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      if ( (unsigned __int8)TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, 0LL) )
        v2 = 2;
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( v3 == v2 )
        LOBYTE(v3) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v3;
}
