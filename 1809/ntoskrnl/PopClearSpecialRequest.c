/*
 * XREFs of PopClearSpecialRequest @ 0x1408675CC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140589A30 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x140003064 (PopDiagTracePowerRequestChange.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  unsigned int v3; // edi
  void *v4; // rbp
  __int64 v5; // rsi
  void *v6; // rax

  if ( a2 == 3 )
  {
    v4 = 0LL;
    v5 = 0LL;
    PopAcquirePowerRequestPushLock(1);
    v6 = *(void **)(a1 + 120);
    if ( v6 )
    {
      v5 = *(_QWORD *)(a1 + 112);
      if ( v5 )
        *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
      --*(_DWORD *)(a1 + 44);
      v4 = v6;
      PopDiagTracePowerRequestChange(a1);
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    if ( v5 )
      PsReleaseProcessWakeCounter(v5);
    if ( v4 )
      ObfDereferenceObjectWithTag(v4, 0x72506F50u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
