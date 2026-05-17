/*
 * XREFs of TpSetTimerEx @ 0x1800323F0
 * Callers:
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     TpSetTimer @ 0x1800323E0 (TpSetTimer.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_180044584 @ 0x180044584 (sub_180044584.c)
 *     RtlUpdateTimer @ 0x18007E540 (RtlUpdateTimer.c)
 *     sub_18008BD24 @ 0x18008BD24 (sub_18008BD24.c)
 * Callees:
 *     TpIsTimerSet @ 0x1800323A0 (TpIsTimerSet.c)
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)sub_1800324FC(a1, 0LL, a2 != 0) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 240);
    LOBYTE(v10) = a2 != 0;
    v11 = sub_18003257C(a1, v8 + 112, v10);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive(a1 + 240);
      v9 = 0;
    }
    if ( !v11 )
    {
      if ( !v9 )
        return v11;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(a1 + 240);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    if ( !v9 )
    {
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      }
      return v11;
    }
    sub_1800326A0(a1, v8 + 112, a2, a3, a4);
    goto LABEL_11;
  }
  return 0LL;
}
