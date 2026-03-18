/*
 * XREFs of EtwpCoverageSamplerStop @ 0x1408C8E50
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1408C7C90 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408C92DC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F8D0 (ExRundownCompleted.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KeStopProfile @ 0x140295C40 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403166B0 (EtwpCovSampCaptureContextStop.c)
 *     PsGetNextProcess @ 0x1405B21E0 (PsGetNextProcess.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C55B8 (EtwpUpdateGlobalGroupMasks.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088C930 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C7150 (EtwpCovSampProcessCleanup.c)
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
  qword_140409E08 = (__int64)KeGetCurrentThread();
  if ( qword_140409E18 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1200);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1200) = v4 | 2;
      qword_140409E08 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140409E20);
      ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140409E20);
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v6 = KeGetCurrentThread();
      v2 = (void *)qword_140409E18;
      qword_140409E18 = 0LL;
      v7 = qword_140409E28;
      qword_140409E08 = (__int64)v6;
      v8 = *(_DWORD *)(a1 + 1132);
      if ( (v8 & 8) != 0 )
      {
        KeStopProfile(qword_140409E28 + 16);
        *(_DWORD *)(a1 + 1132) &= ~8u;
        v8 = *(_DWORD *)(a1 + 1132);
      }
      if ( (v8 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1132) &= ~2u;
        v8 = *(_DWORD *)(a1 + 1132);
      }
      if ( (v8 & 4) != 0 )
      {
        v9 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4552) &= 0xFFFFFDFB;
        *(_DWORD *)(v9 + 4548) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v9, 0, 9u);
        *(_DWORD *)(a1 + 1132) &= ~4u;
      }
      for ( i = 0LL; ; i = v14 )
      {
        NextProcess = PsGetNextProcess(i);
        v14 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v11 = *(_QWORD *)(NextProcess + 2112);
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
      EtwpCovSampCaptureContextStop(v7);
      *(_DWORD *)(a1 + 1132) &= ~1u;
    }
  }
  result = KeGetCurrentThread();
  if ( (struct _KTHREAD *)qword_140409E08 == result )
  {
    qword_140409E08 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    result = (struct _KTHREAD *)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v2 )
    return (struct _KTHREAD *)ObfDereferenceObject(v2);
  return result;
}
