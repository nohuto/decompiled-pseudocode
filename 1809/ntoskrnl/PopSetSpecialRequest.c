/*
 * XREFs of PopSetSpecialRequest @ 0x140867860
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140589A30 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x140003064 (PopDiagTracePowerRequestChange.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsChargeProcessWakeCounter @ 0x140589720 (PsChargeProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, ULONG_PTR a3)
{
  int v4; // ebx
  PVOID v5; // rsi
  __int64 v6; // rbp
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = ObpReferenceObjectByHandleWithTag(a3, 0x2000, (__int64)PsProcessType, 1, 0x72506F50u, &Object, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v6 = PsChargeProcessWakeCounter(Object);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 120) )
      {
        v4 = -1073741811;
      }
      else
      {
        if ( v5 )
          ObfReferenceObjectWithTag(v5, 0x72506F50u);
        *(_QWORD *)(a1 + 112) = v6;
        *(_QWORD *)(a1 + 120) = v5;
        v6 = 0LL;
        ++*(_DWORD *)(a1 + 44);
        PopDiagTracePowerRequestChange(a1);
        v4 = 0;
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      if ( v6 )
        PsReleaseProcessWakeCounter(v6);
      ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
