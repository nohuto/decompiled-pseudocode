/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x1408CA384
 * Callers:
 *     EtwpTraceImageUnload @ 0x140089314 (EtwpTraceImageUnload.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408C4C2C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1408C872C (EtwpCovSampProcessRemoveModule.c)
 */

void __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v8) < 0 )
    goto LABEL_8;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v6 = *(_QWORD *)(a1 + 2112);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = qword_14040AE38 + 752;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
  *(_QWORD *)(v6 + 16) = KeGetCurrentThread();
  EtwpCovSampProcessRemoveModule(v6, a2, a3);
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 8));
  KeAbPostRelease(v6 + 8);
  KeLeaveCriticalRegion();
LABEL_8:
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_14040AE40);
    KeLeaveCriticalRegion();
  }
}
