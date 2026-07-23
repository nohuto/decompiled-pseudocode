/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x140638100
 * Callers:
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406AF8CC (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x140863750 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // r14
  _QWORD *v5; // r13
  struct _EX_RUNDOWN_REF **v6; // r12
  struct _EX_RUNDOWN_REF *v7; // rdi
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v16; // rax
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rcx
  _QWORD v22[6]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1 + 184;
  v5 = 0LL;
  v6 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v4, 0LL);
  for ( i = *v6; i != (struct _EX_RUNDOWN_REF *)v6; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection_0(i + 7) )
    {
      ExReleasePushLockEx(v4, 0LL);
      v13 = KeGetCurrentThread();
      v14 = v13->SpecialApcDisable++ == -1;
      if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
        KiCheckForKernelApcDelivery(v12);
      if ( v7 )
      {
        ExReleaseRundownProtection_0(v7);
        v7 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection_0(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            memset(v22, 0, sizeof(v22));
            v22[0] = *(_QWORD *)a2;
            v22[2] = *(_QWORD *)(a2 + 16);
            v22[1] = *(_QWORD *)(a2 + 8);
            LODWORD(v22[4]) = -1073741670;
            ObpCallPostOperationCallbacks(v22, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[2] = i;
        PoolWithTag[3] = 0LL;
        v21 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v21 != a3 )
          __fastfail(3u);
        *PoolWithTag = a3;
        PoolWithTag[1] = v21;
        *v21 = PoolWithTag;
        a3[1] = PoolWithTag;
      }
      Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
      if ( Count )
      {
        Count(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v5[3] = *(_QWORD *)(a2 + 24);
        else
          v7 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v16 = KeGetCurrentThread();
      --v16->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v4, 0LL);
    }
  }
  ExReleasePushLockEx(v4, 0LL);
  v18 = KeGetCurrentThread();
  v14 = v18->SpecialApcDisable++ == -1;
  if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v17);
  if ( v7 )
    ExReleaseRundownProtection_0(v7);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
