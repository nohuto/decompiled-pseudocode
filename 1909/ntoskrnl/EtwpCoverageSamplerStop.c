/*
 * XREFs of EtwpCoverageSamplerStop @ 0x140905C54
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x140904A80 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     KeStopProfile @ 0x1402AC270 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x140334C20 (EtwpCovSampCaptureContextStop.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E8248 (EtwpUpdateGlobalGroupMasks.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1408CA620 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x140903F1C (EtwpCovSampProcessCleanup.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // r15
  int v4; // eax
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *v6; // rax
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *i; // rcx
  __int64 v11; // rbp
  struct _KTHREAD *v12; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140432508 = (__int64)KeGetCurrentThread();
  if ( qword_140432518 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1208);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1208) = v4 | 2;
      qword_140432508 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140432520);
      ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140432520);
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v6 = KeGetCurrentThread();
      v2 = (void *)qword_140432518;
      qword_140432518 = 0LL;
      v7 = qword_140432528;
      qword_140432508 = (__int64)v6;
      v8 = *(_DWORD *)(a1 + 1140);
      if ( (v8 & 8) != 0 )
      {
        KeStopProfile(qword_140432528 + 16);
        *(_DWORD *)(a1 + 1140) &= ~8u;
        v8 = *(_DWORD *)(a1 + 1140);
      }
      if ( (v8 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1140) &= ~2u;
        v8 = *(_DWORD *)(a1 + 1140);
      }
      if ( (v8 & 4) != 0 )
      {
        v9 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4552) &= 0xFFFFFDFB;
        *(_DWORD *)(v9 + 4548) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v9, 0, 9u);
        *(_DWORD *)(a1 + 1140) &= ~4u;
      }
      for ( i = 0LL; ; i = v14 )
      {
        NextProcess = PsGetNextProcess(i);
        v14 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v11 = *(_QWORD *)(NextProcess + 2160);
        if ( v11 )
        {
          v12 = KeGetCurrentThread();
          --v12->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v11 + 8, 0LL);
          *(_QWORD *)(v11 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v11, 1);
          *(_QWORD *)(v11 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 8));
          KeAbPostRelease(v11 + 8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
      EtwpCovSampCaptureContextStop(v7);
      *(_DWORD *)(a1 + 1140) &= ~1u;
    }
  }
  result = KeGetCurrentThread();
  if ( (struct _KTHREAD *)qword_140432508 == result )
  {
    qword_140432508 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    result = (struct _KTHREAD *)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v2 )
    return (struct _KTHREAD *)ObfDereferenceObject(v2);
  return result;
}
