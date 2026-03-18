/*
 * XREFs of PfGenerateTrace @ 0x140746628
 * Callers:
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x1406A75E8 (PfSetSuperfetchInformation.c)
 *     PfpLogEventRequest @ 0x14072A4AC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140746518 (PfpLogScenarioEvent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  PVOID v6; // r14
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  v5 = 0;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
    KeResetEvent((PRKEVENT)(a1 + 56));
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    v6 = *(PVOID *)a1;
    ObfReferenceObject(*(PVOID *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
    Object[0] = (PVOID)(a1 + 56);
    Object[1] = v6;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v6);
    if ( !a2 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  }
  else
  {
    v5 = -1073741177;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v5;
}
