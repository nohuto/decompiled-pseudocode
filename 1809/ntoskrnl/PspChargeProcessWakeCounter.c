/*
 * XREFs of PspChargeProcessWakeCounter @ 0x140637C90
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x140589720 (PsChargeProcessWakeCounter.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140889C84 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PspChargeJobWakeCounter @ 0x1405FE81C (PspChargeJobWakeCounter.c)
 *     PspCheckConditionalWakeCharge @ 0x1406B3564 (PspCheckConditionalWakeCharge.c)
 *     EtwTraceWakeCounter @ 0x1408B9144 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1408B9200 (EtwTraceWakeEvent.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        __int64 Object,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  char v7; // r14
  int v9; // r12d
  char v10; // r13
  bool v11; // r15
  __int64 v12; // r10
  bool v13; // r9
  volatile signed __int32 *v14; // rcx
  int v15; // ecx
  int v16; // edx
  char v17; // r12
  int v18; // esi
  int v19; // r12d
  __int64 v20; // r14
  int v21; // esi
  bool v23; // cl
  int v24; // eax
  int v25; // edx
  _KPROCESS *Process; // rax
  int v27; // r9d
  int v28; // [rsp+44h] [rbp-74h]
  char v29; // [rsp+48h] [rbp-70h]
  unsigned int v30; // [rsp+4Ch] [rbp-6Ch]
  _KPROCESS *v31; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  char *v33; // [rsp+60h] [rbp-58h]
  bool v34; // [rsp+C0h] [rbp+8h]

  v7 = 0;
  v29 = 1;
  v28 = 0;
  v9 = a2 & 2;
  v30 = a3;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(Object + 728, 0LL);
  v12 = *(_QWORD *)(Object + 944);
  v13 = v9 != 0;
  v34 = v9 != 0;
  v33 = (char *)v12;
  if ( !v12 )
    goto LABEL_2;
  v23 = v9 != 0;
  v24 = *(_DWORD *)(v12 + 1304);
  v13 = v9 != 0;
  v34 = v9 != 0;
  if ( (v24 & 0x1000) == 0 )
    goto LABEL_2;
  if ( v9 )
  {
    if ( (v24 & 0x800000) != 0 )
    {
      v34 = v9 != 0;
      if ( a5 > 0 )
        goto LABEL_10;
    }
  }
  v25 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v31 = Process;
  if ( (a2 & 1) == 0 )
    goto LABEL_32;
  v34 = v9 != 0;
  if ( !(unsigned __int8)PspCheckConditionalWakeCharge(Process, v12, a3, v9 != 0) )
  {
LABEL_10:
    v17 = 0;
    goto LABEL_11;
  }
  v23 = v9 != 0;
  v25 = a2;
  Process = v31;
LABEL_32:
  if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v9 )
  {
    v13 = 0;
    v34 = 0;
  }
  else
  {
    v30 = 7;
    v29 = 5;
    if ( v25 < 0 )
      v29 = 7;
    v13 = v23;
    v34 = v23;
  }
  v7 = 1;
LABEL_2:
  if ( a6 && !v7 && !*(_QWORD *)(Object + 2032) )
    goto LABEL_10;
  if ( v13 )
  {
    v14 = (volatile signed __int32 *)(Object + 2076);
    v30 = 7;
  }
  else
  {
    v14 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 510LL));
  }
  v15 = _InterlockedExchangeAdd(v14, a5) + a5;
  v10 = 1;
  v16 = v15 & 0x7FFFFFFF;
  v11 = v15 < 0;
  if ( v15 >= 0 )
    v16 = v15;
  v28 = v16;
  if ( v13 )
    goto LABEL_10;
  v11 = v15 < 0;
  v28 = v16;
  if ( !*(_QWORD *)(Object + 2032) )
    goto LABEL_10;
  v27 = 1 << a3;
  if ( a5 <= 0 )
  {
    if ( (v27 & *(_DWORD *)(Object + 2072)) != 0 && !v16 )
    {
      v17 = 1;
      v28 = 0;
      v11 = v15 < 0;
      goto LABEL_11;
    }
LABEL_45:
    v17 = 0;
    v28 = v16;
    v11 = v15 < 0;
    goto LABEL_11;
  }
  if ( (v27 & *(_DWORD *)(Object + 2068)) == 0 || v16 != 1 )
    goto LABEL_45;
  v17 = 1;
  v28 = 1;
  v11 = v15 < 0;
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 728));
  KeAbPostRelease(Object + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v17 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 2032), 0LL, 0, 0LL, 0LL, 0, 0);
    v18 = v28;
    v19 = a3;
    if ( (xmmword_140542350 & 0x400) != 0 && v28 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v18 = v28;
    v19 = a3;
  }
  if ( a7 )
    *a7 = v18;
  if ( v11 || v7 )
  {
    v20 = a4;
    v21 = a5;
    PspChargeJobWakeCounter(v33, 0LL, v19, a5, v29, Object, a4);
  }
  else
  {
    v20 = a4;
    v21 = a5;
  }
  if ( !v10 )
    return 0LL;
  if ( (xmmword_140542350 & 0x2000) != 0 && !v34 )
    EtwTraceWakeCounter(Object, v19, v21, Object, v20);
  if ( !a6 )
    return 0LL;
  if ( a5 <= 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    return 0LL;
  }
  ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
  return Object | v30;
}
