/*
 * XREFs of TpSetTimerEx @ 0x18002C800
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x18001D824 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     TpSetTimer @ 0x18002C7F0 (TpSetTimer.c)
 *     RtlCreateTimer @ 0x18002F2A0 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 *     RtlUpdateTimer @ 0x180032010 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x1800E0274 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TpIsTimerSet @ 0x18002C7B0 (TpIsTimerSet.c)
 *     TppTimerpValidateTimer @ 0x18002C90C (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18002C984 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18002CFD4 (TppSetTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  bool v12; // di
  __int64 v13; // r8
  unsigned __int8 v14; // si

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL) )
  {
    v11 = *(_QWORD *)(a1 + 144);
    v12 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 240, v8, v9, v10);
    LOBYTE(v13) = a2 != 0;
    v14 = TppCancelTimer(a1, v11 + 112, v13);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v12 = 0;
    }
    if ( !v14 )
    {
      if ( !v12 )
        return v14;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
        return v14;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    if ( !v12 )
    {
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      }
      return v14;
    }
    TppSetTimer(a1, v11 + 112, a2, a3, a4);
    goto LABEL_11;
  }
  return 0LL;
}
