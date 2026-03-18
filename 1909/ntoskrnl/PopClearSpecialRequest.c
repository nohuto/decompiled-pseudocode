/*
 * XREFs of PopClearSpecialRequest @ 0x1408A20EC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1406723B0 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400D66D4 (PopDiagTracePowerRequestChange.c)
 *     PsReleaseProcessWakeCounter @ 0x140658D40 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi

  if ( a2 == 3 )
  {
    v4 = 0LL;
    PopAcquirePowerRequestPushLock(1);
    if ( *(_QWORD *)(a1 + 120) )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( v4 )
        *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
      --*(_DWORD *)(a1 + 44);
      PopDiagTracePowerRequestChange(a1);
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, a1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
