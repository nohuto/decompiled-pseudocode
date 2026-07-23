/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x1408118BC
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1402FEDF0 (SepLogLpacAccessFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x14084D104 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsResumeThread @ 0x1406779A0 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1406C3420 (PsSuspendThread.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(__int64 Object, unsigned int a2, __int64 a3)
{
  char v3; // r15
  __int64 v4; // r14
  char v5; // bp
  char *PoolWithTag; // rdi
  _OWORD *v10; // rcx
  char v11; // al
  _KPROCESS *v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v14; // esi
  _BYTE v15[48]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = 0;
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*(_DWORD *)(Object + 116) & 0x400) != 0
    || (IoThreadToProcess((PETHREAD)Object)[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1744), 0x15u) )
    return 3221227268LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x4B474244u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObfReferenceObject((PVOID)Object);
  *(_QWORD *)PoolWithTag = Object;
  *((_QWORD *)PoolWithTag + 1) = v4;
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
    KiStackAttachProcess(v12, 0LL, (__int64)v15);
    v5 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = PsSuspendThread(Object, 0LL);
  if ( v14 >= 0 )
  {
    v3 = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 176), DelayedWorkQueue);
  }
  KeLeaveCriticalRegion();
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)(Object + 1744), 0xFFDFFFFF);
    if ( v3 )
      PsResumeThread(Object, 0LL);
    ObfDereferenceObject((PVOID)Object);
  }
  if ( v5 )
    KiUnstackDetachProcess((__int64)v15, 0LL);
  return (unsigned int)v14;
}
