/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x140849F6C
 * Callers:
 *     SepLogLpacAccessFailure @ 0x14031CE14 (SepLogLpacAccessFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     IoThreadToProcess @ 0x14000E240 (IoThreadToProcess.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsResumeThread @ 0x1406CDD30 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1406E4430 (PsSuspendThread.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(__int64 Object, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  char v6; // r15
  char v7; // bp
  char *PoolWithTag; // rdi
  _OWORD *v10; // rcx
  char v11; // al
  _KPROCESS *v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v14; // esi
  _BYTE v15[48]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v6 = 0;
  v7 = 0;
  memset(v15, 0, sizeof(v15));
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*(_DWORD *)(Object + 116) & 0x400) != 0
    || (IoThreadToProcess((PETHREAD)Object)[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1760), 0x15u) )
    return 3221227268LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x4B474244u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObfReferenceObject((PVOID)Object);
  *(_QWORD *)PoolWithTag = Object;
  *((_QWORD *)PoolWithTag + 1) = v3;
  v10 = PoolWithTag + 24;
  if ( a3 )
  {
    *v10 = *(_OWORD *)a3;
    *(_OWORD *)(PoolWithTag + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(PoolWithTag + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(PoolWithTag + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(PoolWithTag + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(PoolWithTag + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(PoolWithTag + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(PoolWithTag + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(PoolWithTag + 152) = *(_OWORD *)(a3 + 128);
    *((_QWORD *)PoolWithTag + 21) = *(_QWORD *)(a3 + 144);
    v11 = 1;
  }
  else
  {
    memset(v10, 0, 0x98uLL);
    v11 = 0;
  }
  PoolWithTag[16] = v11;
  *((_QWORD *)PoolWithTag + 22) = 0LL;
  *((_QWORD *)PoolWithTag + 24) = DbgkUserReportWorkRoutine;
  *((_QWORD *)PoolWithTag + 25) = PoolWithTag;
  v12 = IoThreadToProcess((PETHREAD)Object);
  if ( v12 != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(v12, 0, (__int64)v15);
    v7 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = PsSuspendThread(Object, 0LL);
  if ( v14 >= 0 )
  {
    v6 = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 176), DelayedWorkQueue);
  }
  KeLeaveCriticalRegion();
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)(Object + 1760), 0xFFDFFFFF);
    if ( v6 )
      PsResumeThread(Object, 0LL);
    ObfDereferenceObject((PVOID)Object);
  }
  if ( v7 )
    KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  return (unsigned int)v14;
}
