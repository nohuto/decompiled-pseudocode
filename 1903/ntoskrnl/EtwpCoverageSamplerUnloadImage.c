/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x140906588
 * Callers:
 *     EtwpTraceImageUnload @ 0x14001C640 (EtwpTraceImageUnload.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140900B88 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1409048F8 (EtwpCovSampProcessRemoveModule.c)
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
    v6 = *(_QWORD *)(a1 + 2160);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = qword_140432578 + 752;
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432580);
    KeLeaveCriticalRegion();
  }
}
